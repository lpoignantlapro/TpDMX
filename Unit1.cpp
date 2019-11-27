//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	// chargement de la librairie
	g_dasusbdll=LoadLibrary(L"DasHard2006.dll");
	// SI la lib est charg�, on recup�re l'addresse du DMX
	if(g_dasusbdll)
	{
		DasUsbCommand=(DASHARDCOMMAND)::GetProcAddress((HMODULE)g_dasusbdll,"DasUsbCommand");
	}

	interface_open=DasUsbCommand(DHC_INIT,0,NULL);
	DasUsbCommand(DHC_OPEN,0,0);

	lblResultOpenDMX->Caption=interface_open;
	// initialisation des valeur dmxBlock � 0
	for (int i = 0; i < 512; i++) {
		dmxBlock[i]=0;
	}
	// passe les 6 premieres valeurs � 255
	dmxBlock[0]=0xFF;
	dmxBlock[1]=0xFF;
	dmxBlock[2]=0xFF;
	dmxBlock[3]=0xFF;
	dmxBlock[4]=0xFF;
	dmxBlock[5]=0xFF;
	Couleur = new PilotageLumiere(dmxBlock);

}
//  ------------------------------------------------------------
 void __fastcall TForm1::SendTrame()
 {
	if(interface_open>0)
	{

		try{

			DasUsbCommand(DHC_DMXOUT,DMX_MAXCHANNEL,dmxBlock);
		}
		catch(int x)
		{
		}
	}

 }
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
		// trame pour  lampe 1
	dmxBlock[10]=0xFF;
	dmxBlock[11]=0xFF;
	dmxBlock[12]=0xFF;
	dmxBlock[13]=0xFF;
	dmxBlock[14]=0xFF;
	dmxBlock[15]=0xFF;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
// trame pour  lampe 2
	dmxBlock[20]=0xFF;
	dmxBlock[21]=0xFF;
	dmxBlock[22]=0xFF;
	dmxBlock[23]=0xFF;
	dmxBlock[24]=0xFF;
	dmxBlock[25]=0xFF;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
// trame pour  lampe 3
	dmxBlock[30]=0xFF;
	dmxBlock[31]=0xFF;
	dmxBlock[32]=0xFF;
	dmxBlock[33]=0xFF;
	dmxBlock[34]=0xFF;
	dmxBlock[35]=0xFF;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
   // trame pour  lampe 3
	dmxBlock[40]=0xFF;
	dmxBlock[41]=0xFF;
	dmxBlock[42]=0xFF;
	dmxBlock[43]=0xFF;
	dmxBlock[44]=0xFF;
	dmxBlock[45]=0xFF;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::TimerTimer(TObject *Sender)
{
// Utilise la fonction de bienvenu
SendTrame();
}
//---------------------------------------------------------------------------

