unit DelphiCode;

interface

uses
  Forms;

type
  IMyDelphiInterface = interface
    procedure DoSomething();
  end;

  TMyDelphiClass = class
  private
    FText : string;
  private
    function GetText : string;
    procedure SetText(Value : string);
  public
    constructor Create;
    property Text : string read GetText write SetText;
  end;

  function CreateADelphiInstance() : IMyDelphiInterface;

implementation

type
  TDelphiClassImplementingInterface = class(TInterfacedObject, IMyDelphiInterface)
  public
    procedure DoSomething();
  end;

function CreateADelphiInstance() : IMyDelphiInterface;
begin
  Result := TDelphiClassImplementingInterface.Create;
end;

{ TDelphiClassImplementingInterface }

procedure TDelphiClassImplementingInterface.DoSomething;
begin
  Application.MessageBox('Hello from Delphi!', 'Delphi/C++ integration')
end;

{ TMyDelphiClass }

constructor TMyDelphiClass.Create;
begin
  FText := 'Set in the constructor';
end;

function TMyDelphiClass.GetText: string;
begin
  Result := FText;
end;

procedure TMyDelphiClass.SetText(Value: string);
begin
  FText := Value;
end;

end.
