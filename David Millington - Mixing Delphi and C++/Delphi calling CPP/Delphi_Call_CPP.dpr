program Delphi_Call_CPP;

uses
  Vcl.Forms,
  DelphiForm in 'DelphiForm.pas' {Form2},
  DelphiAbstractClass in 'DelphiAbstractClass.pas';

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TForm2, Form2);
  Application.Run;
end.
