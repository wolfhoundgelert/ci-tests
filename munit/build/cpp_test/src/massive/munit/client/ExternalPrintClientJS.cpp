#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_massive_munit_client_ExternalPrintClient
#include <massive/munit/client/ExternalPrintClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_ExternalPrintClientJS
#include <massive/munit/client/ExternalPrintClientJS.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void ExternalPrintClientJS_obj::__construct()
{
HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","new",0x5bc6472c,"massive.munit.client.ExternalPrintClientJS.new","massive/munit/client/PrintClientBase.hx",314,0x1ddc6930)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ExternalPrintClientJS_obj::~ExternalPrintClientJS_obj() { }

Dynamic ExternalPrintClientJS_obj::__CreateEmpty() { return  new ExternalPrintClientJS_obj; }
hx::ObjectPtr< ExternalPrintClientJS_obj > ExternalPrintClientJS_obj::__new()
{  hx::ObjectPtr< ExternalPrintClientJS_obj > _result_ = new ExternalPrintClientJS_obj();
	_result_->__construct();
	return _result_;}

Dynamic ExternalPrintClientJS_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExternalPrintClientJS_obj > _result_ = new ExternalPrintClientJS_obj();
	_result_->__construct();
	return _result_;}

hx::Object *ExternalPrintClientJS_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::massive::munit::client::ExternalPrintClient_obj)) return operator ::massive::munit::client::ExternalPrintClient_obj *();
	return super::__ToInterface(inType);
}

ExternalPrintClientJS_obj::operator ::massive::munit::client::ExternalPrintClient_obj *()
	{ return new ::massive::munit::client::ExternalPrintClient_delegate_< ExternalPrintClientJS_obj >(this); }
Void ExternalPrintClientJS_obj::print( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","print",0xbea219f9,"massive.munit.client.ExternalPrintClientJS.print","massive/munit/client/PrintClientBase.hx",382,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(383)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(383)
		this->queue(HX_HCSTRING("munitPrint","\xfc","\x68","\x23","\xa7"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,print,(void))

Void ExternalPrintClientJS_obj::printLine( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","printLine",0x4d754e8d,"massive.munit.client.ExternalPrintClientJS.printLine","massive/munit/client/PrintClientBase.hx",387,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(388)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(388)
		this->queue(HX_HCSTRING("munitPrintLine","\x10","\xdb","\x7d","\x6c"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,printLine,(void))

Void ExternalPrintClientJS_obj::setResult( bool value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","setResult",0xecf575eb,"massive.munit.client.ExternalPrintClientJS.setResult","massive/munit/client/PrintClientBase.hx",392,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(393)
		bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(393)
		this->queue(HX_HCSTRING("setResult","\x1f","\xde","\x2b","\x68"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,setResult,(void))

Void ExternalPrintClientJS_obj::setResultBackground( bool value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","setResultBackground",0xa134c1b9,"massive.munit.client.ExternalPrintClientJS.setResultBackground","massive/munit/client/PrintClientBase.hx",397,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(398)
		bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		this->queue(HX_HCSTRING("setResultBackground","\xed","\xf2","\xaa","\x04"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,setResultBackground,(void))

Void ExternalPrintClientJS_obj::trace( Dynamic value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","trace",0x0c365051,"massive.munit.client.ExternalPrintClientJS.trace","massive/munit/client/PrintClientBase.hx",404,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(405)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(405)
		this->queue(HX_HCSTRING("munitTrace","\x54","\x9f","\xb7","\xf4"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,trace,(void))

Void ExternalPrintClientJS_obj::createTestClass( ::String className){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","createTestClass",0xbffee8b6,"massive.munit.client.ExternalPrintClientJS.createTestClass","massive/munit/client/PrintClientBase.hx",409,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_LINE(410)
		::String tmp = className;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(410)
		this->queue(HX_HCSTRING("createTestClass","\xea","\x6f","\x4f","\xb2"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,createTestClass,(void))

Void ExternalPrintClientJS_obj::printToTestClassSummary( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","printToTestClassSummary",0x73fc5134,"massive.munit.client.ExternalPrintClientJS.printToTestClassSummary","massive/munit/client/PrintClientBase.hx",414,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(415)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(415)
		this->queue(HX_HCSTRING("updateTestSummary","\x6b","\xa5","\x1b","\xa2"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,printToTestClassSummary,(void))

Void ExternalPrintClientJS_obj::setTestClassResult( int resultType){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","setTestClassResult",0xa6341d35,"massive.munit.client.ExternalPrintClientJS.setTestClassResult","massive/munit/client/PrintClientBase.hx",419,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resultType,"resultType")
		HX_STACK_LINE(420)
		int tmp = resultType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(420)
		this->queue(HX_HCSTRING("setTestClassResult","\x81","\x0e","\x11","\x64"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,setTestClassResult,(void))

Void ExternalPrintClientJS_obj::addTestPass( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addTestPass",0xfb18c450,"massive.munit.client.ExternalPrintClientJS.addTestPass","massive/munit/client/PrintClientBase.hx",424,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(425)
		bool tmp = (value == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(425)
		if ((tmp)){
			HX_STACK_LINE(425)
			return null();
		}
		HX_STACK_LINE(426)
		::String tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(426)
		this->queue(HX_HCSTRING("addTestPass","\x84","\xa1","\xe0","\x7e"),tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestPass,(void))

Void ExternalPrintClientJS_obj::addTestFail( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addTestFail",0xf47c995d,"massive.munit.client.ExternalPrintClientJS.addTestFail","massive/munit/client/PrintClientBase.hx",430,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(431)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(431)
		this->queue(HX_HCSTRING("addTestFail","\x91","\x76","\x44","\x78"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestFail,(void))

Void ExternalPrintClientJS_obj::addTestError( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addTestError",0x70667b69,"massive.munit.client.ExternalPrintClientJS.addTestError","massive/munit/client/PrintClientBase.hx",435,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(436)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(436)
		this->queue(HX_HCSTRING("addTestError","\xb5","\x2b","\x80","\x3b"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestError,(void))

Void ExternalPrintClientJS_obj::addTestIgnore( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addTestIgnore",0x2aa5b651,"massive.munit.client.ExternalPrintClientJS.addTestIgnore","massive/munit/client/PrintClientBase.hx",440,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(441)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(441)
		this->queue(HX_HCSTRING("addTestIgnore","\x85","\x48","\x06","\x16"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestIgnore,(void))

Void ExternalPrintClientJS_obj::addTestClassCoverage( ::String className,hx::Null< Float >  __o_percent){
Float percent = __o_percent.Default(0);
	HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addTestClassCoverage",0x9971f6e1,"massive.munit.client.ExternalPrintClientJS.addTestClassCoverage","massive/munit/client/PrintClientBase.hx",446,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(percent,"percent")
{
		HX_STACK_LINE(446)
		this->queue(HX_HCSTRING("addTestCoverageClass","\x1d","\x82","\x75","\x41"),cpp::ArrayBase_obj::__new().Add(className).Add(percent));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,addTestClassCoverage,(void))

Void ExternalPrintClientJS_obj::addTestClassCoverageItem( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addTestClassCoverageItem",0xf6666c94,"massive.munit.client.ExternalPrintClientJS.addTestClassCoverageItem","massive/munit/client/PrintClientBase.hx",450,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(451)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(451)
		this->queue(HX_HCSTRING("addTestCoverageItem","\xce","\x3e","\x6d","\x24"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addTestClassCoverageItem,(void))

Void ExternalPrintClientJS_obj::createCoverageReport( hx::Null< Float >  __o_percent){
Float percent = __o_percent.Default(0);
	HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","createCoverageReport",0xaa81008c,"massive.munit.client.ExternalPrintClientJS.createCoverageReport","massive/munit/client/PrintClientBase.hx",457,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(percent,"percent")
{
		HX_STACK_LINE(458)
		Float tmp = percent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(458)
		this->queue(HX_HCSTRING("createCoverageReport","\xd8","\xdc","\x75","\x4e"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,createCoverageReport,(void))

Void ExternalPrintClientJS_obj::addMissingCoverageClass( ::String className,hx::Null< Float >  __o_percent){
Float percent = __o_percent.Default(0);
	HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addMissingCoverageClass",0x5a530f77,"massive.munit.client.ExternalPrintClientJS.addMissingCoverageClass","massive/munit/client/PrintClientBase.hx",463,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(percent,"percent")
{
		HX_STACK_LINE(463)
		this->queue(HX_HCSTRING("addMissingCoverageClass","\xab","\xea","\x0b","\x44"),cpp::ArrayBase_obj::__new().Add(className).Add(percent));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,addMissingCoverageClass,(void))

Void ExternalPrintClientJS_obj::addCoverageReportSection( ::String name,::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addCoverageReportSection",0x01287e5c,"massive.munit.client.ExternalPrintClientJS.addCoverageReportSection","massive/munit/client/PrintClientBase.hx",468,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(468)
		this->queue(HX_HCSTRING("addCoverageReportSection","\xa8","\x70","\x2f","\x99"),cpp::ArrayBase_obj::__new().Add(name).Add(value));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,addCoverageReportSection,(void))

Void ExternalPrintClientJS_obj::addCoverageSummary( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","addCoverageSummary",0xabd65fb1,"massive.munit.client.ExternalPrintClientJS.addCoverageSummary","massive/munit/client/PrintClientBase.hx",472,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(473)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(473)
		this->queue(HX_HCSTRING("addCoverageSummary","\xfd","\x50","\xb3","\x69"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,addCoverageSummary,(void))

Void ExternalPrintClientJS_obj::printSummary( ::String value){
{
		HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","printSummary",0x170e3a2d,"massive.munit.client.ExternalPrintClientJS.printSummary","massive/munit/client/PrintClientBase.hx",480,0x1ddc6930)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(481)
		::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(481)
		this->queue(HX_HCSTRING("printSummary","\x79","\xea","\x27","\xe2"),tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,printSummary,(void))

bool ExternalPrintClientJS_obj::queue( ::String method,Dynamic args){
	HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","queue",0x54014f5d,"massive.munit.client.ExternalPrintClientJS.queue","massive/munit/client/PrintClientBase.hx",487,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(488)
	cpp::ArrayBase a = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(489)
	Dynamic tmp = args;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(489)
	bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< Array<int> >());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(489)
	if ((tmp1)){
		HX_STACK_LINE(491)
		a = a->__Field(HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"), hx::paccDynamic )(hx::TCastToArray(args));
	}
	else{
		HX_STACK_LINE(495)
		Dynamic tmp2 = args;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(495)
		a->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp2);
	}
	HX_STACK_LINE(500)
	return false;
	HX_STACK_LINE(503)
	::String tmp2 = method;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(503)
	::String tmp3 = this->convertToJavaScript(tmp2,a);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(503)
	::String jsCode = tmp3;		HX_STACK_VAR(jsCode,"jsCode");
	HX_STACK_LINE(510)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,queue,return )

::String ExternalPrintClientJS_obj::convertToJavaScript( ::String method,cpp::ArrayBase args){
	HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","convertToJavaScript",0x43a9b207,"massive.munit.client.ExternalPrintClientJS.convertToJavaScript","massive/munit/client/PrintClientBase.hx",517,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(518)
	Array< ::String > htmlArgs = Array_obj< ::String >::__new();		HX_STACK_VAR(htmlArgs,"htmlArgs");
	HX_STACK_LINE(520)
	{
		HX_STACK_LINE(520)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(520)
		while((true)){
			HX_STACK_LINE(520)
			bool tmp = (_g < args->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(520)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(520)
			if ((tmp1)){
				HX_STACK_LINE(520)
				break;
			}
			HX_STACK_LINE(520)
			Dynamic tmp2 = args->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(520)
			Dynamic arg = tmp2;		HX_STACK_VAR(arg,"arg");
			HX_STACK_LINE(520)
			++(_g);
			HX_STACK_LINE(522)
			Dynamic tmp3 = arg;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(522)
			::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(522)
			::String tmp5 = this->serialiseToHTML(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(522)
			::String html = tmp5;		HX_STACK_VAR(html,"html");
			HX_STACK_LINE(523)
			::String tmp6 = html;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(523)
			htmlArgs->push(tmp6);
		}
	}
	HX_STACK_LINE(525)
	::String jsCode;		HX_STACK_VAR(jsCode,"jsCode");
	HX_STACK_LINE(527)
	bool tmp = (htmlArgs == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(527)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(527)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(527)
	if ((tmp1)){
		HX_STACK_LINE(527)
		tmp2 = (htmlArgs->length == (int)0);
	}
	else{
		HX_STACK_LINE(527)
		tmp2 = true;
	}
	HX_STACK_LINE(527)
	if ((tmp2)){
		HX_STACK_LINE(529)
		::String tmp3 = (HX_HCSTRING("addToQueue(\"","\x2f","\x50","\xbe","\xc6") + method);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(529)
		::String tmp4 = (tmp3 + HX_HCSTRING("\")","\xc7","\x1d","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(529)
		jsCode = tmp4;
	}
	else{
		HX_STACK_LINE(533)
		::String tmp3 = (HX_HCSTRING("addToQueue(\"","\x2f","\x50","\xbe","\xc6") + method);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(533)
		::String tmp4 = (tmp3 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(533)
		jsCode = tmp4;
		HX_STACK_LINE(535)
		{
			HX_STACK_LINE(535)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(535)
			while((true)){
				HX_STACK_LINE(535)
				bool tmp5 = (_g < htmlArgs->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(535)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(535)
				if ((tmp6)){
					HX_STACK_LINE(535)
					break;
				}
				HX_STACK_LINE(535)
				::String tmp7 = htmlArgs->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(535)
				::String arg = tmp7;		HX_STACK_VAR(arg,"arg");
				HX_STACK_LINE(535)
				++(_g);
				HX_STACK_LINE(537)
				::String tmp8 = (HX_HCSTRING(",\"","\x76","\x26","\x00","\x00") + arg);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(537)
				::String tmp9 = (tmp8 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(537)
				hx::AddEq(jsCode,tmp9);
			}
		}
		HX_STACK_LINE(539)
		hx::AddEq(jsCode,HX_HCSTRING(")","\x29","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(541)
	::String tmp3 = jsCode;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(541)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(ExternalPrintClientJS_obj,convertToJavaScript,return )

::String ExternalPrintClientJS_obj::serialiseToHTML( Dynamic value){
	HX_STACK_FRAME("massive.munit.client.ExternalPrintClientJS","serialiseToHTML",0x11f87059,"massive.munit.client.ExternalPrintClientJS.serialiseToHTML","massive/munit/client/PrintClientBase.hx",545,0x1ddc6930)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(550)
	Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(550)
	::String tmp1 = ::StringTools_obj::htmlEscape(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(550)
	::String v = tmp1;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(551)
	::String tmp2 = v.split(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"))->join(HX_HCSTRING("<br/>","\x3b","\x61","\x28","\xcd"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(551)
	v = tmp2;
	HX_STACK_LINE(552)
	::String tmp3 = v.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"))->join(HX_HCSTRING("&nbsp;","\x64","\x13","\xc2","\xc8"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(552)
	v = tmp3;
	HX_STACK_LINE(553)
	::String tmp4 = v.split(HX_HCSTRING("\"","\x22","\x00","\x00","\x00"))->join(HX_HCSTRING("\\'","\x4b","\x50","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(553)
	v = tmp4;
	HX_STACK_LINE(555)
	::String tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(555)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ExternalPrintClientJS_obj,serialiseToHTML,return )


ExternalPrintClientJS_obj::ExternalPrintClientJS_obj()
{
}

Dynamic ExternalPrintClientJS_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		if (HX_FIELD_EQ(inName,"trace") ) { return trace_dyn(); }
		if (HX_FIELD_EQ(inName,"queue") ) { return queue_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"printLine") ) { return printLine_dyn(); }
		if (HX_FIELD_EQ(inName,"setResult") ) { return setResult_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTestPass") ) { return addTestPass_dyn(); }
		if (HX_FIELD_EQ(inName,"addTestFail") ) { return addTestFail_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addTestError") ) { return addTestError_dyn(); }
		if (HX_FIELD_EQ(inName,"printSummary") ) { return printSummary_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addTestIgnore") ) { return addTestIgnore_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createTestClass") ) { return createTestClass_dyn(); }
		if (HX_FIELD_EQ(inName,"serialiseToHTML") ) { return serialiseToHTML_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setTestClassResult") ) { return setTestClassResult_dyn(); }
		if (HX_FIELD_EQ(inName,"addCoverageSummary") ) { return addCoverageSummary_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setResultBackground") ) { return setResultBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"convertToJavaScript") ) { return convertToJavaScript_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addTestClassCoverage") ) { return addTestClassCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"createCoverageReport") ) { return createCoverageReport_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"printToTestClassSummary") ) { return printToTestClassSummary_dyn(); }
		if (HX_FIELD_EQ(inName,"addMissingCoverageClass") ) { return addMissingCoverageClass_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"addTestClassCoverageItem") ) { return addTestClassCoverageItem_dyn(); }
		if (HX_FIELD_EQ(inName,"addCoverageReportSection") ) { return addCoverageReportSection_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("printLine","\xc1","\xb6","\xab","\xc8"),
	HX_HCSTRING("setResult","\x1f","\xde","\x2b","\x68"),
	HX_HCSTRING("setResultBackground","\xed","\xf2","\xaa","\x04"),
	HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"),
	HX_HCSTRING("createTestClass","\xea","\x6f","\x4f","\xb2"),
	HX_HCSTRING("printToTestClassSummary","\x68","\x2c","\xb5","\x5d"),
	HX_HCSTRING("setTestClassResult","\x81","\x0e","\x11","\x64"),
	HX_HCSTRING("addTestPass","\x84","\xa1","\xe0","\x7e"),
	HX_HCSTRING("addTestFail","\x91","\x76","\x44","\x78"),
	HX_HCSTRING("addTestError","\xb5","\x2b","\x80","\x3b"),
	HX_HCSTRING("addTestIgnore","\x85","\x48","\x06","\x16"),
	HX_HCSTRING("addTestClassCoverage","\x2d","\xd3","\x66","\x3d"),
	HX_HCSTRING("addTestClassCoverageItem","\xe0","\x5e","\x6d","\x8e"),
	HX_HCSTRING("createCoverageReport","\xd8","\xdc","\x75","\x4e"),
	HX_HCSTRING("addMissingCoverageClass","\xab","\xea","\x0b","\x44"),
	HX_HCSTRING("addCoverageReportSection","\xa8","\x70","\x2f","\x99"),
	HX_HCSTRING("addCoverageSummary","\xfd","\x50","\xb3","\x69"),
	HX_HCSTRING("printSummary","\x79","\xea","\x27","\xe2"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("convertToJavaScript","\x3b","\xe3","\x1f","\xa7"),
	HX_HCSTRING("serialiseToHTML","\x8d","\xf7","\x48","\x04"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExternalPrintClientJS_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExternalPrintClientJS_obj::__mClass,"__mClass");
};

#endif

hx::Class ExternalPrintClientJS_obj::__mClass;

void ExternalPrintClientJS_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.ExternalPrintClientJS","\x3a","\x81","\xf8","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExternalPrintClientJS_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace massive
} // end namespace munit
} // end namespace client
