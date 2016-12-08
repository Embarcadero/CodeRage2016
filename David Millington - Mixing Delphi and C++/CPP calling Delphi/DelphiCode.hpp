// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'DelphiCode.pas' rev: 31.00 (Windows)

#ifndef DelphicodeHPP
#define DelphicodeHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Forms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Delphicode
{
//-- forward type declarations -----------------------------------------------
__interface IMyDelphiInterface;
typedef System::DelphiInterface<IMyDelphiInterface> _di_IMyDelphiInterface;
class DELPHICLASS TMyDelphiClass;
//-- type declarations -------------------------------------------------------
__interface IMyDelphiInterface  : public System::IInterface 
{
	virtual void __fastcall DoSomething(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMyDelphiClass : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FText;
	System::UnicodeString __fastcall GetText(void);
	void __fastcall SetText(System::UnicodeString Value);
	
public:
	__fastcall TMyDelphiClass(void);
	__property System::UnicodeString Text = {read=GetText, write=SetText};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TMyDelphiClass(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE _di_IMyDelphiInterface __fastcall CreateADelphiInstance(void);
}	/* namespace Delphicode */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DELPHICODE)
using namespace Delphicode;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// DelphicodeHPP
