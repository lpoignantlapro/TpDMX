object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 84
    Width = 32
    Height = 13
    Caption = 'BLANC'
  end
  object Label2: TLabel
    Left = 37
    Top = 128
    Width = 35
    Height = 13
    Caption = 'ROUGE'
  end
  object Label3: TLabel
    Left = 47
    Top = 168
    Width = 24
    Height = 13
    Caption = 'BLEU'
  end
  object Label4: TLabel
    Left = 46
    Top = 208
    Width = 25
    Height = 13
    Caption = 'VERT'
  end
  object ScrollBar1: TScrollBar
    Left = 88
    Top = 80
    Width = 121
    Height = 17
    PageSize = 0
    TabOrder = 0
  end
  object ScrollBar2: TScrollBar
    Left = 88
    Top = 124
    Width = 121
    Height = 17
    PageSize = 0
    TabOrder = 1
  end
  object ScrollBar3: TScrollBar
    Left = 88
    Top = 164
    Width = 121
    Height = 17
    PageSize = 0
    TabOrder = 2
  end
  object ScrollBar4: TScrollBar
    Left = 88
    Top = 204
    Width = 121
    Height = 17
    PageSize = 0
    TabOrder = 3
  end
  object Button1: TButton
    Left = 112
    Top = 16
    Width = 75
    Height = 25
    Caption = 'LUMIERE 1'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 216
    Top = 16
    Width = 75
    Height = 25
    Caption = 'LUMIERE 2'
    TabOrder = 5
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 320
    Top = 16
    Width = 75
    Height = 25
    Caption = 'LUMIERE 3'
    TabOrder = 6
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 424
    Top = 16
    Width = 75
    Height = 25
    Caption = 'LUMIERE 4'
    TabOrder = 7
    OnClick = Button4Click
  end
end
