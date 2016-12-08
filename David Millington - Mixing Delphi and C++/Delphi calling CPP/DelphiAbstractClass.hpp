// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DelphiAbstractClass.pas' rev: 31.00 (Windows)

#ifndef DelphiabstractclassHPP
#define DelphiabstractclassHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Delphiabstractclass
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TAbstractClass;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TAbstractClass : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetText(void) = 0 ;
	virtual void __fastcall SetText(System::UnicodeString Value) = 0 ;
	
public:
	virtual void __fastcall DoSomething(void) = 0 ;
	__property System::UnicodeString Text = {read=GetText, write=SetText};
public:
	/* TObject.Create */ inline __fastcall TAbstractClass(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TAbstractClass(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern "C" TAbstractClass* __stdcall CreateCppDescendant(void);
}	/* namespace Delphiabstractclass */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DELPHIABSTRACTCLASS)
using namespace Delphiabstractclass;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DelphiabstractclassHPP
