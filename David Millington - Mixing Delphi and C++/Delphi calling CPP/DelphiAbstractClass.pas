unit DelphiAbstractClass;

interface

type
  TAbstractClass = class
  protected
    function GetText : string; virtual; abstract;
    procedure SetText(Value : string); virtual; abstract;
  public
    procedure DoSomething; virtual; abstract;
    property Text : string read GetText write SetText;
  end;

  function CreateCppDescendant : TAbstractClass; stdcall; external 'CPPPackage.bpl';

implementation

end.
