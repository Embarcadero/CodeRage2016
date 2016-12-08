//---------------------------------------------------------------------------

#pragma hdrstop

#include "CPPClass.h"
#include <windows.h>
#include <sstream>
#include <string>

//---------------------------------------------------------------------------
#pragma package(smart_init)

__fastcall TCppClass::TCppClass() :
	TAbstractClass(),
	m_Text(L"Initialised in C++"),
	m_Vector { 1, 2, 3, 4, 5 }
{

}

__fastcall TCppClass::~TCppClass() {
	//
}

System::UnicodeString __fastcall TCppClass::GetText() {
	return m_Text;
}

void __fastcall TCppClass::SetText(System::UnicodeString Value) {
	m_Text = Value;
}

void __fastcall TCppClass::DoSomething() {
	std::wstringstream strMessage;
	strMessage << L"Hello from a C++ class. Text property is: " << Text.c_str()
		<< std::endl
		<< L"Vector contains " << std::to_wstring(m_Vector.size()) << " elements";

	MessageBox(0, strMessage.str().c_str(), L"Delphi/C++ interaction", 0);
}

//function CreateCppDescendant : TAbstractClass; stdcall; external 'CPPPackage.bpl';
extern "C" __declspec(dllexport) TAbstractClass* __stdcall CreateCppDescendant()
{
   return new TCppClass();
}




