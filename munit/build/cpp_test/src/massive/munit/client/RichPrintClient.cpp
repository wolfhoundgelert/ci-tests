#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_munit_AssertionException
#include <massive/munit/AssertionException.h>
#endif
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ICoverageTestResultClient
#include <massive/munit/ICoverageTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_TestResultType
#include <massive/munit/TestResultType.h>
#endif
#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_ExternalPrintClient
#include <massive/munit/client/ExternalPrintClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_ExternalPrintClientJS
#include <massive/munit/client/ExternalPrintClientJS.h>
#endif
#ifndef INCLUDED_massive_munit_client_PrintClientBase
#include <massive/munit/client/PrintClientBase.h>
#endif
#ifndef INCLUDED_massive_munit_client_RichPrintClient
#include <massive/munit/client/RichPrintClient.h>
#endif
#ifndef INCLUDED_massive_munit_util_MathUtil
#include <massive/munit/util/MathUtil.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void RichPrintClient_obj::__construct()
{
HX_STACK_FRAME("massive.munit.client.RichPrintClient","new",0x0bcb7cf2,"massive.munit.client.RichPrintClient.new","massive/munit/client/RichPrintClient.hx",50,0xd074f7fd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(51)
	super::__construct(null());
	HX_STACK_LINE(52)
	this->id = HX_HCSTRING("RichPrintClient","\x7c","\x7d","\xdf","\x56");
}
;
	return null();
}

//RichPrintClient_obj::~RichPrintClient_obj() { }

Dynamic RichPrintClient_obj::__CreateEmpty() { return  new RichPrintClient_obj; }
hx::ObjectPtr< RichPrintClient_obj > RichPrintClient_obj::__new()
{  hx::ObjectPtr< RichPrintClient_obj > _result_ = new RichPrintClient_obj();
	_result_->__construct();
	return _result_;}

Dynamic RichPrintClient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RichPrintClient_obj > _result_ = new RichPrintClient_obj();
	_result_->__construct();
	return _result_;}

Void RichPrintClient_obj::init( ){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","init",0x42fa8e3e,"massive.munit.client.RichPrintClient.init","massive/munit/client/RichPrintClient.hx",56,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->super::init();
		HX_STACK_LINE(59)
		Dynamic tmp = ::haxe::Log_obj::trace_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(59)
		this->originalTrace = tmp;
		HX_STACK_LINE(60)
		Dynamic tmp1 = this->customTrace_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		::haxe::Log_obj::trace = tmp1;
		HX_STACK_LINE(62)
		::massive::munit::client::ExternalPrintClientJS tmp2 = ::massive::munit::client::ExternalPrintClientJS_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		this->external = tmp2;
	}
return null();
}


Void RichPrintClient_obj::initializeTestClass( ){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","initializeTestClass",0x58e72ba8,"massive.munit.client.RichPrintClient.initializeTestClass","massive/munit/client/RichPrintClient.hx",67,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		this->super::initializeTestClass();
		HX_STACK_LINE(69)
		::massive::munit::client::ExternalPrintClient tmp = this->external;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		::String tmp1 = this->currentTestClass;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		tmp->createTestClass(tmp1);
		HX_STACK_LINE(70)
		::massive::munit::client::ExternalPrintClient tmp2 = this->external;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		::String tmp3 = this->currentTestClass;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		::String tmp4 = (HX_HCSTRING("Class: ","\xbe","\x50","\xe2","\x36") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		::String tmp5 = (tmp4 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		tmp2->printToTestClassSummary(tmp5);
	}
return null();
}


Void RichPrintClient_obj::updateTestClass( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","updateTestClass",0x5ef6c6cf,"massive.munit.client.RichPrintClient.updateTestClass","massive/munit/client/RichPrintClient.hx",74,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(75)
		::massive::munit::TestResult tmp = result;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		this->super::updateTestClass(tmp);
		HX_STACK_LINE(77)
		::massive::munit::TestResult tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		::String tmp2 = this->serializeTestResult(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		::String value = tmp2;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::massive::munit::TestResultType tmp3 = result->get_type();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(78)
			::massive::munit::TestResultType _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(82)
					::massive::munit::client::ExternalPrintClient tmp4 = this->external;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(82)
					tmp4->printToTestClassSummary(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));
					HX_STACK_LINE(83)
					::massive::munit::client::ExternalPrintClient tmp5 = this->external;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(83)
					::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(83)
					tmp5->addTestPass(tmp6);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(87)
					::massive::munit::client::ExternalPrintClient tmp4 = this->external;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(87)
					tmp4->printToTestClassSummary(HX_HCSTRING("!","\x21","\x00","\x00","\x00"));
					HX_STACK_LINE(88)
					::massive::munit::client::ExternalPrintClient tmp5 = this->external;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(88)
					::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(88)
					tmp5->addTestFail(tmp6);
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(92)
					::massive::munit::client::ExternalPrintClient tmp4 = this->external;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(92)
					tmp4->printToTestClassSummary(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
					HX_STACK_LINE(93)
					::massive::munit::client::ExternalPrintClient tmp5 = this->external;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(93)
					::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(93)
					tmp5->addTestError(tmp6);
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(97)
					::massive::munit::client::ExternalPrintClient tmp4 = this->external;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(97)
					tmp4->printToTestClassSummary(HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));
					HX_STACK_LINE(98)
					::massive::munit::client::ExternalPrintClient tmp5 = this->external;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(98)
					::String tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(98)
					tmp5->addTestIgnore(tmp6);
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(100)
					Dynamic();
				}
				;break;
			}
		}
	}
return null();
}


::String RichPrintClient_obj::serializeTestResult( ::massive::munit::TestResult result){
	HX_STACK_FRAME("massive.munit.client.RichPrintClient","serializeTestResult",0x28cd9961,"massive.munit.client.RichPrintClient.serializeTestResult","massive/munit/client/RichPrintClient.hx",105,0xd074f7fd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(result,"result")
	HX_STACK_LINE(106)
	::String summary = result->name;		HX_STACK_VAR(summary,"summary");
	HX_STACK_LINE(108)
	bool tmp = (result->description != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	if ((tmp)){
		HX_STACK_LINE(108)
		tmp1 = (result->description != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(108)
		tmp1 = false;
	}
	HX_STACK_LINE(108)
	if ((tmp1)){
		HX_STACK_LINE(110)
		::String tmp2 = (HX_HCSTRING(" - ","\x73","\x6f","\x18","\x00") + result->description);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		::String tmp3 = (tmp2 + HX_HCSTRING(" -","\x0d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		hx::AddEq(summary,tmp3);
	}
	HX_STACK_LINE(113)
	Float tmp2 = result->executionTime;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	Float tmp3 = ::massive::munit::util::MathUtil_obj::round(tmp2,(int)4);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	::String tmp4 = (HX_HCSTRING(" (","\x08","\x1c","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(113)
	::String tmp5 = (tmp4 + HX_HCSTRING("s)","\x56","\x64","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(113)
	hx::AddEq(summary,tmp5);
	HX_STACK_LINE(115)
	::String str = null();		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(116)
	bool tmp6 = (result->error != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(116)
	if ((tmp6)){
		HX_STACK_LINE(118)
		::String tmp7 = (HX_HCSTRING("Error: ","\x4e","\xa8","\x5b","\xb7") + summary);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(118)
		::String tmp8 = (tmp7 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(118)
		Dynamic tmp9 = result->error;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(118)
		::String tmp10 = ::Std_obj::string(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(118)
		::String tmp11 = (tmp8 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(118)
		str = tmp11;
	}
	else{
		HX_STACK_LINE(120)
		bool tmp7 = (result->failure != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(120)
		if ((tmp7)){
			HX_STACK_LINE(122)
			::String tmp8 = (HX_HCSTRING("Failure: ","\x50","\xa9","\x81","\x40") + summary);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(122)
			::String tmp9 = (tmp8 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(122)
			::massive::munit::AssertionException tmp10 = result->failure;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(122)
			::String tmp11 = ::Std_obj::string(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(122)
			::String tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(122)
			str = tmp12;
		}
		else{
			HX_STACK_LINE(124)
			bool tmp8 = result->ignore;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			if ((tmp8)){
				HX_STACK_LINE(126)
				::String tmp9 = (HX_HCSTRING("Ignore: ","\x58","\x90","\xe8","\x3a") + summary);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(126)
				str = tmp9;
			}
			else{
				HX_STACK_LINE(128)
				bool tmp9 = result->passed;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(128)
				if ((tmp9)){
				}
			}
		}
	}
	HX_STACK_LINE(133)
	::String tmp7 = str;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(133)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(RichPrintClient_obj,serializeTestResult,return )

Void RichPrintClient_obj::finalizeTestClass( ){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","finalizeTestClass",0x9b86751a,"massive.munit.client.RichPrintClient.finalizeTestClass","massive/munit/client/RichPrintClient.hx",141,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(142)
		this->super::finalizeTestClass();
		HX_STACK_LINE(143)
		::massive::munit::TestResultType tmp = this->getTestClassResultType();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		this->testClassResultType = tmp;
		HX_STACK_LINE(147)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			::massive::munit::TestResultType tmp2 = this->testClassResultType;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(147)
			::massive::munit::TestResultType _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(147)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(149)
					tmp1 = (int)0;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(150)
					tmp1 = (int)1;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(151)
					tmp1 = (int)2;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(152)
					tmp1 = (int)3;
				}
				;break;
				default: {
					HX_STACK_LINE(153)
					tmp1 = (int)-1;
				}
			}
		}
		HX_STACK_LINE(147)
		int code = tmp1;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(155)
		bool tmp2 = (code == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		if ((tmp2)){
			HX_STACK_LINE(155)
			return null();
		}
		HX_STACK_LINE(156)
		::massive::munit::client::ExternalPrintClient tmp3 = this->external;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		int tmp4 = code;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		tmp3->setTestClassResult(tmp4);
	}
return null();
}


::massive::munit::TestResultType RichPrintClient_obj::getTestClassResultType( ){
	HX_STACK_FRAME("massive.munit.client.RichPrintClient","getTestClassResultType",0x86813c15,"massive.munit.client.RichPrintClient.getTestClassResultType","massive/munit/client/RichPrintClient.hx",162,0xd074f7fd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	int tmp = this->errorCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	if ((tmp1)){
		HX_STACK_LINE(163)
		return ::massive::munit::TestResultType_obj::ERROR;
	}
	else{
		HX_STACK_LINE(164)
		int tmp2 = this->failCount;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		if ((tmp3)){
			HX_STACK_LINE(164)
			return ::massive::munit::TestResultType_obj::FAIL;
		}
		else{
			HX_STACK_LINE(165)
			int tmp4 = this->ignoreCount;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(165)
			if ((tmp5)){
				HX_STACK_LINE(165)
				return ::massive::munit::TestResultType_obj::IGNORE;
			}
			else{
				HX_STACK_LINE(166)
				return ::massive::munit::TestResultType_obj::PASS;
			}
		}
	}
	HX_STACK_LINE(163)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RichPrintClient_obj,getTestClassResultType,return )

Void RichPrintClient_obj::setCurrentTestClassCoverage( Dynamic result){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","setCurrentTestClassCoverage",0x02ef8e69,"massive.munit.client.RichPrintClient.setCurrentTestClassCoverage","massive/munit/client/RichPrintClient.hx",171,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(172)
		Dynamic tmp = result;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		this->super::setCurrentTestClassCoverage(tmp);
		HX_STACK_LINE(174)
		::massive::munit::client::ExternalPrintClient tmp1 = this->external;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		::String tmp2 = (HX_HCSTRING(" [","\x3b","\x1c","\x00","\x00") + result->__Field(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		::String tmp3 = (tmp2 + HX_HCSTRING("%]","\x98","\x20","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(174)
		tmp1->printToTestClassSummary(tmp3);
		HX_STACK_LINE(176)
		bool tmp4 = (result->__Field(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"), hx::paccDynamic ) == (int)100);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(176)
		if ((tmp4)){
			HX_STACK_LINE(176)
			return null();
		}
		HX_STACK_LINE(178)
		::massive::munit::client::ExternalPrintClient tmp5 = this->external;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(178)
		::String tmp6 = result->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(178)
		Float tmp7 = result->__Field(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(178)
		tmp5->addTestClassCoverage(tmp6,tmp7);
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(179)
			Array< ::String > _g1 = result->__Field(HX_HCSTRING("blocks","\x86","\x2e","\xea","\xa7"), hx::paccDynamic );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(179)
			while((true)){
				HX_STACK_LINE(179)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(179)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(179)
				if ((tmp9)){
					HX_STACK_LINE(179)
					break;
				}
				HX_STACK_LINE(179)
				::String tmp10 = _g1->__get(_g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(179)
				::String item = tmp10;		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(179)
				++(_g);
				HX_STACK_LINE(181)
				::massive::munit::client::ExternalPrintClient tmp11 = this->external;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(181)
				::String tmp12 = item;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(181)
				tmp11->addTestClassCoverageItem(tmp12);
			}
		}
	}
return null();
}


Void RichPrintClient_obj::reportFinalCoverage( Dynamic __o_percent,cpp::ArrayBase missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency){
Dynamic percent = __o_percent.Default(0);
	HX_STACK_FRAME("massive.munit.client.RichPrintClient","reportFinalCoverage",0xc70636bc,"massive.munit.client.RichPrintClient.reportFinalCoverage","massive/munit/client/RichPrintClient.hx",191,0xd074f7fd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(percent,"percent")
	HX_STACK_ARG(missingCoverageResults,"missingCoverageResults")
	HX_STACK_ARG(summary,"summary")
	HX_STACK_ARG(classBreakdown,"classBreakdown")
	HX_STACK_ARG(packageBreakdown,"packageBreakdown")
	HX_STACK_ARG(executionFrequency,"executionFrequency")
{
		HX_STACK_LINE(192)
		Dynamic tmp = percent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		::String tmp1 = summary;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		::String tmp2 = classBreakdown;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		::String tmp3 = packageBreakdown;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		::String tmp4 = executionFrequency;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(192)
		this->super::reportFinalCoverage(tmp,missingCoverageResults,tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(194)
		::massive::munit::client::ExternalPrintClient tmp5 = this->external;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(194)
		Dynamic tmp6 = percent;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(194)
		tmp5->createCoverageReport(tmp6);
		HX_STACK_LINE(195)
		this->printMissingCoverage(missingCoverageResults);
		HX_STACK_LINE(197)
		bool tmp7 = (executionFrequency != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(197)
		if ((tmp7)){
			HX_STACK_LINE(199)
			::massive::munit::client::ExternalPrintClient tmp8 = this->external;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(199)
			::String tmp9 = executionFrequency;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(199)
			::String tmp10 = this->trim(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(199)
			tmp8->addCoverageReportSection(HX_HCSTRING("Code Execution Frequency","\x81","\x35","\x09","\x9d"),tmp10);
		}
		HX_STACK_LINE(202)
		bool tmp8 = (classBreakdown != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(202)
		if ((tmp8)){
			HX_STACK_LINE(204)
			::massive::munit::client::ExternalPrintClient tmp9 = this->external;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(204)
			::String tmp10 = classBreakdown;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(204)
			::String tmp11 = this->trim(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(204)
			tmp9->addCoverageReportSection(HX_HCSTRING("Class Breakdown","\x79","\xba","\xb8","\xec"),tmp11);
		}
		HX_STACK_LINE(207)
		bool tmp9 = (packageBreakdown != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(207)
		if ((tmp9)){
			HX_STACK_LINE(209)
			::massive::munit::client::ExternalPrintClient tmp10 = this->external;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(209)
			::String tmp11 = packageBreakdown;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(209)
			::String tmp12 = this->trim(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(209)
			tmp10->addCoverageReportSection(HX_HCSTRING("Package Breakdown","\x47","\x93","\xcd","\x0d"),tmp12);
		}
		HX_STACK_LINE(212)
		bool tmp10 = (packageBreakdown != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(212)
		if ((tmp10)){
			HX_STACK_LINE(214)
			::massive::munit::client::ExternalPrintClient tmp11 = this->external;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(214)
			::String tmp12 = summary;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(214)
			::String tmp13 = this->trim(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(214)
			tmp11->addCoverageReportSection(HX_HCSTRING("Summary","\x06","\x33","\x3a","\x4e"),tmp13);
		}
	}
return null();
}


::String RichPrintClient_obj::trim( ::String output){
	HX_STACK_FRAME("massive.munit.client.RichPrintClient","trim",0x4a42f010,"massive.munit.client.RichPrintClient.trim","massive/munit/client/RichPrintClient.hx",219,0xd074f7fd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(output,"output")
	HX_STACK_LINE(220)
	while((true)){
		HX_STACK_LINE(220)
		int tmp = output.indexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		if ((tmp2)){
			HX_STACK_LINE(220)
			break;
		}
		HX_STACK_LINE(222)
		::String tmp3 = output.substr((int)1,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(222)
		output = tmp3;
	}
	HX_STACK_LINE(225)
	while((true)){
		HX_STACK_LINE(225)
		int tmp = output.lastIndexOf(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		int tmp1 = (output.length - (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(225)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(225)
		if ((tmp3)){
			HX_STACK_LINE(225)
			break;
		}
		HX_STACK_LINE(227)
		int tmp4 = (output.length - (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(227)
		::String tmp5 = output.substr((int)0,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(227)
		output = tmp5;
	}
	HX_STACK_LINE(230)
	::String tmp = output;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(RichPrintClient_obj,trim,return )

Void RichPrintClient_obj::printMissingCoverage( cpp::ArrayBase missingCoverageResults){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","printMissingCoverage",0xe0675cef,"massive.munit.client.RichPrintClient.printMissingCoverage","massive/munit/client/RichPrintClient.hx",235,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(missingCoverageResults,"missingCoverageResults")
		HX_STACK_LINE(236)
		bool tmp = (missingCoverageResults == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(236)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(236)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(236)
		if ((tmp1)){
			HX_STACK_LINE(236)
			tmp2 = (missingCoverageResults->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) == (int)0);
		}
		else{
			HX_STACK_LINE(236)
			tmp2 = true;
		}
		HX_STACK_LINE(236)
		if ((tmp2)){
			HX_STACK_LINE(236)
			return null();
		}
		HX_STACK_LINE(238)
		{
			HX_STACK_LINE(238)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			while((true)){
				HX_STACK_LINE(238)
				bool tmp3 = (_g < missingCoverageResults->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(238)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(238)
				if ((tmp4)){
					HX_STACK_LINE(238)
					break;
				}
				HX_STACK_LINE(238)
				Dynamic tmp5 = missingCoverageResults->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(238)
				Dynamic result = tmp5;		HX_STACK_VAR(result,"result");
				HX_STACK_LINE(238)
				++(_g);
				HX_STACK_LINE(240)
				::massive::munit::client::ExternalPrintClient tmp6 = this->external;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(240)
				::String tmp7 = result->__Field(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(240)
				Float tmp8 = result->__Field(HX_HCSTRING("percent","\xc5","\xaa","\xda","\x78"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(240)
				tmp6->addMissingCoverageClass(tmp7,tmp8);
				HX_STACK_LINE(241)
				{
					HX_STACK_LINE(241)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(241)
					Array< ::String > _g2 = result->__Field(HX_HCSTRING("blocks","\x86","\x2e","\xea","\xa7"), hx::paccDynamic );		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(241)
					while((true)){
						HX_STACK_LINE(241)
						bool tmp9 = (_g1 < _g2->length);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(241)
						bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(241)
						if ((tmp10)){
							HX_STACK_LINE(241)
							break;
						}
						HX_STACK_LINE(241)
						::String tmp11 = _g2->__get(_g1);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(241)
						::String item = tmp11;		HX_STACK_VAR(item,"item");
						HX_STACK_LINE(241)
						++(_g1);
						HX_STACK_LINE(243)
						::massive::munit::client::ExternalPrintClient tmp12 = this->external;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(243)
						::String tmp13 = item;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(243)
						tmp12->addTestClassCoverageItem(tmp13);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RichPrintClient_obj,printMissingCoverage,(void))

Void RichPrintClient_obj::printReports( ){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","printReports",0x0f1af1c0,"massive.munit.client.RichPrintClient.printReports","massive/munit/client/RichPrintClient.hx",250,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(250)
		this->super::printReports();
	}
return null();
}


Void RichPrintClient_obj::printFinalStatistics( bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","printFinalStatistics",0x247663ba,"massive.munit.client.RichPrintClient.printFinalStatistics","massive/munit/client/RichPrintClient.hx",254,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_ARG(testCount,"testCount")
		HX_STACK_ARG(passCount,"passCount")
		HX_STACK_ARG(failCount,"failCount")
		HX_STACK_ARG(errorCount,"errorCount")
		HX_STACK_ARG(ignoreCount,"ignoreCount")
		HX_STACK_ARG(time,"time")
		HX_STACK_LINE(255)
		bool tmp = result;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		int tmp1 = testCount;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		int tmp2 = passCount;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(255)
		int tmp3 = failCount;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(255)
		int tmp4 = errorCount;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(255)
		int tmp5 = ignoreCount;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(255)
		Float tmp6 = time;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(255)
		this->super::printFinalStatistics(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(257)
		bool tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(257)
		::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(257)
		if ((tmp7)){
			HX_STACK_LINE(257)
			tmp8 = HX_HCSTRING("PASSED","\x70","\x7f","\xb4","\xa0");
		}
		else{
			HX_STACK_LINE(257)
			tmp8 = HX_HCSTRING("FAILED","\xbd","\x71","\x81","\x9a");
		}
		HX_STACK_LINE(257)
		::String resultString = tmp8;		HX_STACK_VAR(resultString,"resultString");
		HX_STACK_LINE(258)
		::String tmp9 = HX_HCSTRING("\nTests: ","\xdd","\xc9","\x27","\xc7");		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(258)
		int tmp10 = testCount;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(258)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(258)
		::String tmp12 = (tmp11 + HX_HCSTRING("  Passed: ","\x36","\x9a","\x0f","\x7e"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(259)
		int tmp13 = passCount;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(258)
		::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(258)
		::String tmp15 = (tmp14 + HX_HCSTRING("  Failed: ","\xc3","\x79","\xb7","\x3a"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(260)
		int tmp16 = failCount;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(258)
		::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(258)
		::String tmp18 = (tmp17 + HX_HCSTRING(" Errors: ","\x51","\x13","\x30","\x17"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(261)
		int tmp19 = errorCount;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(258)
		::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(258)
		::String tmp21 = (tmp20 + HX_HCSTRING(" Ignored: ","\xf8","\xad","\x04","\x5a"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(262)
		int tmp22 = ignoreCount;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(258)
		::String tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(258)
		::String tmp24 = (tmp23 + HX_HCSTRING(" Time: ","\x33","\x28","\x15","\x86"));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(263)
		Float tmp25 = time;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(263)
		Float tmp26 = ::massive::munit::util::MathUtil_obj::round(tmp25,(int)5);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(258)
		::String tmp27 = (tmp24 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(258)
		hx::AddEq(resultString,tmp27);
		HX_STACK_LINE(265)
		::massive::munit::client::ExternalPrintClient tmp28 = this->external;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(265)
		::String tmp29 = resultString;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(265)
		tmp28->printSummary(tmp29);
	}
return null();
}


Void RichPrintClient_obj::printOverallResult( bool result){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","printOverallResult",0xd5ab704b,"massive.munit.client.RichPrintClient.printOverallResult","massive/munit/client/RichPrintClient.hx",269,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(270)
		bool tmp = result;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		this->super::printOverallResult(tmp);
		HX_STACK_LINE(271)
		::massive::munit::client::ExternalPrintClient tmp1 = this->external;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(271)
		bool tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		tmp1->setResult(tmp2);
	}
return null();
}


Void RichPrintClient_obj::customTrace( Dynamic value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","customTrace",0x060d83a6,"massive.munit.client.RichPrintClient.customTrace","massive/munit/client/RichPrintClient.hx",275,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(276)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(276)
		Dynamic tmp1 = info;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(276)
		this->addTrace(tmp,tmp1);
		HX_STACK_LINE(278)
		Array< ::String > traces = this->getTraces();		HX_STACK_VAR(traces,"traces");
		HX_STACK_LINE(279)
		int tmp2 = (traces->length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(279)
		::String tmp3 = traces->__get(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(279)
		::String t = tmp3;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(280)
		::massive::munit::client::ExternalPrintClient tmp4 = this->external;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(280)
		::String tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(280)
		tmp4->trace(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RichPrintClient_obj,customTrace,(void))

Void RichPrintClient_obj::print( Dynamic value){
{
		HX_STACK_FRAME("massive.munit.client.RichPrintClient","print",0x62b4cd3f,"massive.munit.client.RichPrintClient.print","massive/munit/client/RichPrintClient.hx",286,0xd074f7fd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(287)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(287)
		this->super::print(tmp);
		HX_STACK_LINE(293)
		Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		::Sys_obj::print(tmp1);
	}
return null();
}


Void RichPrintClient_obj::printLine( Dynamic value,Dynamic __o_indent){
Dynamic indent = __o_indent.Default(0);
	HX_STACK_FRAME("massive.munit.client.RichPrintClient","printLine",0x6a6a1cd3,"massive.munit.client.RichPrintClient.printLine","massive/munit/client/RichPrintClient.hx",298,0xd074f7fd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(indent,"indent")
{
		HX_STACK_LINE(299)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		Dynamic tmp1 = indent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		this->super::printLine(tmp,tmp1);
	}
return null();
}


::String RichPrintClient_obj::DEFAULT_ID;


RichPrintClient_obj::RichPrintClient_obj()
{
}

void RichPrintClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RichPrintClient);
	HX_MARK_MEMBER_NAME(testClassResultType,"testClassResultType");
	HX_MARK_MEMBER_NAME(external,"external");
	::massive::munit::client::PrintClientBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RichPrintClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(testClassResultType,"testClassResultType");
	HX_VISIT_MEMBER_NAME(external,"external");
	::massive::munit::client::PrintClientBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RichPrintClient_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"trim") ) { return trim_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"external") ) { return external; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"printLine") ) { return printLine_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"customTrace") ) { return customTrace_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"printReports") ) { return printReports_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateTestClass") ) { return updateTestClass_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"finalizeTestClass") ) { return finalizeTestClass_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printOverallResult") ) { return printOverallResult_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"testClassResultType") ) { return testClassResultType; }
		if (HX_FIELD_EQ(inName,"initializeTestClass") ) { return initializeTestClass_dyn(); }
		if (HX_FIELD_EQ(inName,"serializeTestResult") ) { return serializeTestResult_dyn(); }
		if (HX_FIELD_EQ(inName,"reportFinalCoverage") ) { return reportFinalCoverage_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"printMissingCoverage") ) { return printMissingCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"printFinalStatistics") ) { return printFinalStatistics_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getTestClassResultType") ) { return getTestClassResultType_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setCurrentTestClassCoverage") ) { return setCurrentTestClassCoverage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RichPrintClient_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"external") ) { external=inValue.Cast< ::massive::munit::client::ExternalPrintClient >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"testClassResultType") ) { testClassResultType=inValue.Cast< ::massive::munit::TestResultType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RichPrintClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("testClassResultType","\x5d","\x18","\x80","\x4f"));
	outFields->push(HX_HCSTRING("external","\x4b","\x42","\x83","\xe3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::massive::munit::TestResultType*/ ,(int)offsetof(RichPrintClient_obj,testClassResultType),HX_HCSTRING("testClassResultType","\x5d","\x18","\x80","\x4f")},
	{hx::fsObject /*::massive::munit::client::ExternalPrintClient*/ ,(int)offsetof(RichPrintClient_obj,external),HX_HCSTRING("external","\x4b","\x42","\x83","\xe3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &RichPrintClient_obj::DEFAULT_ID,HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("testClassResultType","\x5d","\x18","\x80","\x4f"),
	HX_HCSTRING("external","\x4b","\x42","\x83","\xe3"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("initializeTestClass","\x16","\xbb","\x49","\x2f"),
	HX_HCSTRING("updateTestClass","\x3d","\x87","\xe5","\x60"),
	HX_HCSTRING("serializeTestResult","\xcf","\x28","\x30","\xff"),
	HX_HCSTRING("finalizeTestClass","\x08","\xad","\xf8","\x06"),
	HX_HCSTRING("getTestClassResultType","\x67","\x85","\x97","\x27"),
	HX_HCSTRING("setCurrentTestClassCoverage","\xd7","\x3b","\xb4","\x88"),
	HX_HCSTRING("reportFinalCoverage","\x2a","\xc6","\x68","\x9d"),
	HX_HCSTRING("trim","\xe2","\x9c","\x03","\x4d"),
	HX_HCSTRING("printMissingCoverage","\xc1","\x4d","\x42","\xa0"),
	HX_HCSTRING("printReports","\x92","\xc0","\x6f","\x0e"),
	HX_HCSTRING("printFinalStatistics","\x8c","\x54","\x51","\xe4"),
	HX_HCSTRING("printOverallResult","\x9d","\x28","\x2a","\x6e"),
	HX_HCSTRING("customTrace","\x14","\xf5","\x5b","\xab"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("printLine","\xc1","\xb6","\xab","\xc8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RichPrintClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RichPrintClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RichPrintClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RichPrintClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

hx::Class RichPrintClient_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18"),
	::String(null()) };

void RichPrintClient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.RichPrintClient","\x00","\xdc","\xf1","\xf8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RichPrintClient_obj >;
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

void RichPrintClient_obj::__boot()
{
	DEFAULT_ID= HX_HCSTRING("RichPrintClient","\x7c","\x7d","\xdf","\x56");
}

} // end namespace massive
} // end namespace munit
} // end namespace client
