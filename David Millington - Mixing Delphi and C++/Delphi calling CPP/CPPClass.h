//---------------------------------------------------------------------------

#ifndef CPPClassH
#define CPPClassH

#include "DelphiAbstractClass.hpp"
#include <vector>

class __declspec(delphiclass) TCppClass : public TAbstractClass
{
private:
	String m_Text;
	std::vector<int> m_Vector;
protected:
	virtual System::UnicodeString __fastcall GetText();
	virtual void __fastcall SetText(System::UnicodeString Value);
public:
	__fastcall TCppClass();
	__fastcall virtual ~TCppClass();

	virtual void __fastcall DoSomething();
	__property System::UnicodeString Text = {read=GetText};
};

#endif
