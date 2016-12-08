unit DelphiForm;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls;

type
  TForm2 = class(TForm)
    Button1: TButton;
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form2: TForm2;

implementation

{$R *.dfm}

uses
  DelphiAbstractClass;

procedure TForm2.Button1Click(Sender: TObject);
var
  CPPClass : TAbstractClass;
begin
  CPPClass := CreateCppDescendant;
  try
    CPPClass.Text := 'Set from Delphi';
    CPPClass.DoSomething;
  finally
    CPPClass.Free;
  end;
end;

end.
