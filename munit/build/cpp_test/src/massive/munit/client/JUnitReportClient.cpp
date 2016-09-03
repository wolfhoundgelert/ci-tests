#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
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
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_client_JUnitReportClient
#include <massive/munit/client/JUnitReportClient.h>
#endif
#ifndef INCLUDED_massive_munit_util_MathUtil
#include <massive/munit/util/MathUtil.h>
#endif
#ifndef INCLUDED_massive_munit_util_Timer
#include <massive/munit/util/Timer.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void JUnitReportClient_obj::__construct()
{
HX_STACK_FRAME("massive.munit.client.JUnitReportClient","new",0xf4c7ac23,"massive.munit.client.JUnitReportClient.new","massive/munit/client/JUnitReportClient.hx",93,0xdfe087ac)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(94)
	this->id = HX_HCSTRING("junit","\xee","\x47","\x23","\x56");
	HX_STACK_LINE(95)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	this->xml = tmp;
	HX_STACK_LINE(96)
	this->currentTestClass = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(97)
	this->newline = HX_HCSTRING("\n","\x0a","\x00","\x00","\x00");
	HX_STACK_LINE(98)
	this->testSuiteXML = null();
	HX_STACK_LINE(99)
	::StringBuf tmp1 = this->xml;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	::String tmp2 = this->newline;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	::String tmp3 = (HX_HCSTRING("<testsuites>","\x55","\xb8","\x47","\x90") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(99)
	tmp1->add(tmp3);
}
;
	return null();
}

//JUnitReportClient_obj::~JUnitReportClient_obj() { }

Dynamic JUnitReportClient_obj::__CreateEmpty() { return  new JUnitReportClient_obj; }
hx::ObjectPtr< JUnitReportClient_obj > JUnitReportClient_obj::__new()
{  hx::ObjectPtr< JUnitReportClient_obj > _result_ = new JUnitReportClient_obj();
	_result_->__construct();
	return _result_;}

Dynamic JUnitReportClient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JUnitReportClient_obj > _result_ = new JUnitReportClient_obj();
	_result_->__construct();
	return _result_;}

hx::Object *JUnitReportClient_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::massive::munit::ITestResultClient_obj)) return operator ::massive::munit::ITestResultClient_obj *();
	if (inType==typeid( ::massive::munit::IAdvancedTestResultClient_obj)) return operator ::massive::munit::IAdvancedTestResultClient_obj *();
	return super::__ToInterface(inType);
}

JUnitReportClient_obj::operator ::massive::munit::ITestResultClient_obj *()
	{ return new ::massive::munit::ITestResultClient_delegate_< JUnitReportClient_obj >(this); }
JUnitReportClient_obj::operator ::massive::munit::IAdvancedTestResultClient_obj *()
	{ return new ::massive::munit::IAdvancedTestResultClient_delegate_< JUnitReportClient_obj >(this); }
Dynamic JUnitReportClient_obj::get_completionHandler( ){
	HX_STACK_FRAME("massive.munit.client.JUnitReportClient","get_completionHandler",0xf0ddf368,"massive.munit.client.JUnitReportClient.get_completionHandler","massive/munit/client/JUnitReportClient.hx",64,0xdfe087ac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	Dynamic tmp = this->completionHandler_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(JUnitReportClient_obj,get_completionHandler,return )

Dynamic JUnitReportClient_obj::set_completionHandler( Dynamic value){
	HX_STACK_FRAME("massive.munit.client.JUnitReportClient","set_completionHandler",0x44e6c174,"massive.munit.client.JUnitReportClient.set_completionHandler","massive/munit/client/JUnitReportClient.hx",68,0xdfe087ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(69)
	Dynamic tmp = this->completionHandler = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(JUnitReportClient_obj,set_completionHandler,return )

Void JUnitReportClient_obj::setCurrentTestClass( ::String className){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","setCurrentTestClass",0x9a215892,"massive.munit.client.JUnitReportClient.setCurrentTestClass","massive/munit/client/JUnitReportClient.hx",109,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_LINE(110)
		::String tmp = this->currentTestClass;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		::String tmp1 = className;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(110)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(110)
		if ((tmp2)){
			HX_STACK_LINE(110)
			return null();
		}
		HX_STACK_LINE(111)
		::String tmp3 = this->currentTestClass;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		if ((tmp4)){
			HX_STACK_LINE(111)
			this->endTestSuite();
		}
		HX_STACK_LINE(113)
		this->currentTestClass = className;
		HX_STACK_LINE(115)
		::String tmp5 = this->currentTestClass;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(115)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(115)
		if ((tmp6)){
			HX_STACK_LINE(115)
			this->startTestSuite();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JUnitReportClient_obj,setCurrentTestClass,(void))

Void JUnitReportClient_obj::addPass( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","addPass",0x38afa0d5,"massive.munit.client.JUnitReportClient.addPass","massive/munit/client/JUnitReportClient.hx",125,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(126)
		(this->suitePassCount)++;
		HX_STACK_LINE(128)
		::StringBuf tmp = this->testSuiteXML;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(128)
		::String tmp1 = (HX_HCSTRING("<testcase classname=\"","\xa6","\xaf","\x2f","\xad") + result->className);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(128)
		::String tmp2 = (tmp1 + HX_HCSTRING("\" name=\"","\x8e","\x10","\xdb","\xe8"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		::String tmp3 = result->name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(128)
		::String tmp5 = (tmp4 + HX_HCSTRING("\" time=\"","\xd0","\xde","\x33","\xea"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		Float tmp6 = result->executionTime;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(128)
		Float tmp7 = ::massive::munit::util::MathUtil_obj::round(tmp6,(int)5);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(128)
		::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(128)
		::String tmp9 = (tmp8 + HX_HCSTRING("\" />","\x6d","\xb2","\x91","\x16"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(128)
		::String tmp10 = this->newline;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(128)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(128)
		tmp->add(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JUnitReportClient_obj,addPass,(void))

Void JUnitReportClient_obj::addFail( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","addFail",0x321375e2,"massive.munit.client.JUnitReportClient.addFail","massive/munit/client/JUnitReportClient.hx",137,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(138)
		(this->suiteFailCount)++;
		HX_STACK_LINE(140)
		::StringBuf tmp = this->testSuiteXML;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		::String tmp1 = (HX_HCSTRING("<testcase classname=\"","\xa6","\xaf","\x2f","\xad") + result->className);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		::String tmp2 = (tmp1 + HX_HCSTRING("\" name=\"","\x8e","\x10","\xdb","\xe8"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		::String tmp3 = result->name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		::String tmp5 = (tmp4 + HX_HCSTRING("\" time=\"","\xd0","\xde","\x33","\xea"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		Float tmp6 = result->executionTime;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		Float tmp7 = ::massive::munit::util::MathUtil_obj::round(tmp6,(int)5);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(140)
		::String tmp9 = (tmp8 + HX_HCSTRING("\" >","\xc0","\xe8","\x19","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(140)
		::String tmp10 = this->newline;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(140)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(140)
		tmp->add(tmp11);
		HX_STACK_LINE(141)
		::StringBuf tmp12 = this->testSuiteXML;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(141)
		::String tmp13 = result->failure->message;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(141)
		::String tmp14 = (HX_HCSTRING("<failure message=\"","\xba","\x13","\x8c","\x64") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(141)
		::String tmp15 = (tmp14 + HX_HCSTRING("\" type=\"","\xbd","\xca","\x98","\x22"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(141)
		::String tmp16 = result->failure->type;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(141)
		::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(141)
		::String tmp18 = (tmp17 + HX_HCSTRING("\">","\xdc","\x1d","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(141)
		tmp12->add(tmp18);
		HX_STACK_LINE(142)
		::StringBuf tmp19 = this->testSuiteXML;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(142)
		::massive::munit::AssertionException tmp20 = result->failure;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(142)
		tmp19->add(tmp20);
		HX_STACK_LINE(143)
		::StringBuf tmp21 = this->testSuiteXML;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(143)
		::String tmp22 = this->newline;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(143)
		::String tmp23 = (HX_HCSTRING("</failure>","\x27","\x30","\xee","\xcf") + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(143)
		tmp21->add(tmp23);
		HX_STACK_LINE(144)
		::StringBuf tmp24 = this->testSuiteXML;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(144)
		::String tmp25 = this->newline;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(144)
		::String tmp26 = (HX_HCSTRING("</testcase>","\x29","\xaf","\xc2","\xf8") + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(144)
		tmp24->add(tmp26);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JUnitReportClient_obj,addFail,(void))

Void JUnitReportClient_obj::addError( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","addError",0x16d09344,"massive.munit.client.JUnitReportClient.addError","massive/munit/client/JUnitReportClient.hx",153,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(154)
		(this->suiteErrorCount)++;
		HX_STACK_LINE(156)
		::StringBuf tmp = this->testSuiteXML;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(156)
		::String tmp1 = (HX_HCSTRING("<testcase classname=\"","\xa6","\xaf","\x2f","\xad") + result->className);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(156)
		::String tmp2 = (tmp1 + HX_HCSTRING("\" name=\"","\x8e","\x10","\xdb","\xe8"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(156)
		::String tmp3 = result->name;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(156)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(156)
		::String tmp5 = (tmp4 + HX_HCSTRING("\" time=\"","\xd0","\xde","\x33","\xea"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(156)
		Float tmp6 = result->executionTime;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(156)
		Float tmp7 = ::massive::munit::util::MathUtil_obj::round(tmp6,(int)5);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(156)
		::String tmp8 = (tmp5 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(156)
		::String tmp9 = (tmp8 + HX_HCSTRING("\" >","\xc0","\xe8","\x19","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(156)
		::String tmp10 = this->newline;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(156)
		::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(156)
		tmp->add(tmp11);
		HX_STACK_LINE(157)
		::StringBuf tmp12 = this->testSuiteXML;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(157)
		::String tmp13 = ::Std_obj::string(result->error->__Field(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"), hx::paccDynamic ));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(157)
		::String tmp14 = (HX_HCSTRING("<error message=\"","\xb8","\x9f","\xf1","\x4e") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(157)
		::String tmp15 = (tmp14 + HX_HCSTRING("\" type=\"","\xbd","\xca","\x98","\x22"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(157)
		::String tmp16 = ::Std_obj::string(result->error->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(157)
		::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(157)
		::String tmp18 = (tmp17 + HX_HCSTRING("\">","\xdc","\x1d","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(157)
		tmp12->add(tmp18);
		HX_STACK_LINE(158)
		::StringBuf tmp19 = this->testSuiteXML;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(158)
		Dynamic tmp20 = result->error;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(158)
		tmp19->add(tmp20);
		HX_STACK_LINE(159)
		::StringBuf tmp21 = this->testSuiteXML;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(159)
		::String tmp22 = this->newline;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(159)
		::String tmp23 = (HX_HCSTRING("</error>","\x29","\x10","\xac","\x5b") + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(159)
		tmp21->add(tmp23);
		HX_STACK_LINE(160)
		::StringBuf tmp24 = this->testSuiteXML;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(160)
		::String tmp25 = this->newline;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(160)
		::String tmp26 = (HX_HCSTRING("</testcase>","\x29","\xaf","\xc2","\xf8") + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(160)
		tmp24->add(tmp26);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JUnitReportClient_obj,addError,(void))

Void JUnitReportClient_obj::addIgnore( ::massive::munit::TestResult result){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","addIgnore",0x21107e16,"massive.munit.client.JUnitReportClient.addIgnore","massive/munit/client/JUnitReportClient.hx",169,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JUnitReportClient_obj,addIgnore,(void))

Dynamic JUnitReportClient_obj::reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
	HX_STACK_FRAME("massive.munit.client.JUnitReportClient","reportFinalStatistics",0x22dba868,"massive.munit.client.JUnitReportClient.reportFinalStatistics","massive/munit/client/JUnitReportClient.hx",189,0xdfe087ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(testCount,"testCount")
	HX_STACK_ARG(passCount,"passCount")
	HX_STACK_ARG(failCount,"failCount")
	HX_STACK_ARG(errorCount,"errorCount")
	HX_STACK_ARG(ignoreCount,"ignoreCount")
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(191)
	::StringBuf tmp = this->xml;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	tmp->add(HX_HCSTRING("</testsuites>","\x7e","\x91","\xac","\x92"));
	HX_STACK_LINE(192)
	Dynamic tmp1 = this->get_completionHandler();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	if ((tmp2)){
		HX_STACK_LINE(192)
		Dynamic tmp3 = this->get_completionHandler();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		tmp3(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
	}
	HX_STACK_LINE(193)
	::StringBuf tmp3 = this->xml;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(193)
	::String tmp4 = tmp3->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(193)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC6(JUnitReportClient_obj,reportFinalStatistics,return )

Void JUnitReportClient_obj::endTestSuite( ){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","endTestSuite",0xef311988,"massive.munit.client.JUnitReportClient.endTestSuite","massive/munit/client/JUnitReportClient.hx",197,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		::StringBuf tmp = this->testSuiteXML;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		if ((tmp1)){
			HX_STACK_LINE(198)
			return null();
		}
		HX_STACK_LINE(200)
		int tmp2 = this->suitePassCount;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		int tmp3 = this->suiteFailCount;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(200)
		int tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		int tmp5 = this->suiteErrorCount;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(200)
		int tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(200)
		int suiteTestCount = tmp6;		HX_STACK_VAR(suiteTestCount,"suiteTestCount");
		HX_STACK_LINE(201)
		Float tmp7 = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(201)
		Float tmp8 = this->suiteExecutionTime;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(201)
		Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(201)
		this->suiteExecutionTime = tmp9;
		HX_STACK_LINE(203)
		int tmp10 = this->suiteErrorCount;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(203)
		::String tmp11 = (HX_HCSTRING("<testsuite errors=\"","\x26","\xb7","\x33","\xf7") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(203)
		::String tmp12 = (tmp11 + HX_HCSTRING("\" failures=\"","\xac","\xc9","\xa6","\x11"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(203)
		int tmp13 = this->suiteFailCount;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(203)
		::String tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(203)
		::String tmp15 = (tmp14 + HX_HCSTRING("\" hostname=\"\" name=\"","\x84","\x4b","\x4d","\x21"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(203)
		::String tmp16 = this->currentTestClass;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(203)
		::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(203)
		::String tmp18 = (tmp17 + HX_HCSTRING("\" tests=\"","\x68","\x65","\x3c","\xe8"));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(203)
		int tmp19 = suiteTestCount;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(203)
		::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(203)
		::String tmp21 = (tmp20 + HX_HCSTRING("\" time=\"","\xd0","\xde","\x33","\xea"));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(203)
		Float tmp22 = this->suiteExecutionTime;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(203)
		Float tmp23 = ::massive::munit::util::MathUtil_obj::round(tmp22,(int)5);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(203)
		::String tmp24 = (tmp21 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(203)
		::String tmp25 = (tmp24 + HX_HCSTRING("\" timestamp=\"","\x9d","\xca","\x4c","\x52"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(203)
		::Date tmp26 = ::Date_obj::now();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(203)
		::String tmp27 = ::Std_obj::string(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(203)
		::String tmp28 = (tmp25 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(203)
		::String tmp29 = (tmp28 + HX_HCSTRING("\">","\xdc","\x1d","\x00","\x00"));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(203)
		::String tmp30 = this->newline;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(203)
		::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(203)
		::String header = tmp31;		HX_STACK_VAR(header,"header");
		HX_STACK_LINE(204)
		::String tmp32 = this->newline;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(204)
		::String tmp33 = (HX_HCSTRING("</testsuite>","\x8b","\x56","\xbf","\x94") + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(204)
		::String footer = tmp33;		HX_STACK_VAR(footer,"footer");
		HX_STACK_LINE(206)
		::StringBuf tmp34 = this->testSuiteXML;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(206)
		::String tmp35 = this->newline;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(206)
		::String tmp36 = (HX_HCSTRING("<system-out></system-out>","\xe9","\xa5","\xbd","\x95") + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(206)
		tmp34->add(tmp36);
		HX_STACK_LINE(207)
		::StringBuf tmp37 = this->testSuiteXML;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(207)
		::String tmp38 = this->newline;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(207)
		::String tmp39 = (HX_HCSTRING("<system-err></system-err>","\x49","\x4c","\x11","\xf2") + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(207)
		tmp37->add(tmp39);
		HX_STACK_LINE(209)
		::StringBuf tmp40 = this->xml;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(209)
		::String tmp41 = header;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(209)
		tmp40->add(tmp41);
		HX_STACK_LINE(210)
		::StringBuf tmp42 = this->xml;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(210)
		::StringBuf tmp43 = this->testSuiteXML;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(210)
		::String tmp44 = tmp43->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(210)
		tmp42->add(tmp44);
		HX_STACK_LINE(211)
		::StringBuf tmp45 = this->xml;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(211)
		::String tmp46 = footer;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(211)
		tmp45->add(tmp46);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(JUnitReportClient_obj,endTestSuite,(void))

Void JUnitReportClient_obj::startTestSuite( ){
{
		HX_STACK_FRAME("massive.munit.client.JUnitReportClient","startTestSuite",0x0efc5161,"massive.munit.client.JUnitReportClient.startTestSuite","massive/munit/client/JUnitReportClient.hx",215,0xdfe087ac)
		HX_STACK_THIS(this)
		HX_STACK_LINE(216)
		this->suitePassCount = (int)0;
		HX_STACK_LINE(217)
		this->suiteFailCount = (int)0;
		HX_STACK_LINE(218)
		this->suiteErrorCount = (int)0;
		HX_STACK_LINE(219)
		Float tmp = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		this->suiteExecutionTime = tmp;
		HX_STACK_LINE(220)
		::StringBuf tmp1 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		this->testSuiteXML = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(JUnitReportClient_obj,startTestSuite,(void))

::String JUnitReportClient_obj::DEFAULT_ID;


JUnitReportClient_obj::JUnitReportClient_obj()
{
}

void JUnitReportClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JUnitReportClient);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(completionHandler,"completionHandler");
	HX_MARK_MEMBER_NAME(newline,"newline");
	HX_MARK_MEMBER_NAME(xml,"xml");
	HX_MARK_MEMBER_NAME(testSuiteXML,"testSuiteXML");
	HX_MARK_MEMBER_NAME(currentTestClass,"currentTestClass");
	HX_MARK_MEMBER_NAME(suitePassCount,"suitePassCount");
	HX_MARK_MEMBER_NAME(suiteFailCount,"suiteFailCount");
	HX_MARK_MEMBER_NAME(suiteErrorCount,"suiteErrorCount");
	HX_MARK_MEMBER_NAME(suiteExecutionTime,"suiteExecutionTime");
	HX_MARK_END_CLASS();
}

void JUnitReportClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(completionHandler,"completionHandler");
	HX_VISIT_MEMBER_NAME(newline,"newline");
	HX_VISIT_MEMBER_NAME(xml,"xml");
	HX_VISIT_MEMBER_NAME(testSuiteXML,"testSuiteXML");
	HX_VISIT_MEMBER_NAME(currentTestClass,"currentTestClass");
	HX_VISIT_MEMBER_NAME(suitePassCount,"suitePassCount");
	HX_VISIT_MEMBER_NAME(suiteFailCount,"suiteFailCount");
	HX_VISIT_MEMBER_NAME(suiteErrorCount,"suiteErrorCount");
	HX_VISIT_MEMBER_NAME(suiteExecutionTime,"suiteExecutionTime");
}

Dynamic JUnitReportClient_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { return xml; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"newline") ) { return newline; }
		if (HX_FIELD_EQ(inName,"addPass") ) { return addPass_dyn(); }
		if (HX_FIELD_EQ(inName,"addFail") ) { return addFail_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addError") ) { return addError_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addIgnore") ) { return addIgnore_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"testSuiteXML") ) { return testSuiteXML; }
		if (HX_FIELD_EQ(inName,"endTestSuite") ) { return endTestSuite_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"suitePassCount") ) { return suitePassCount; }
		if (HX_FIELD_EQ(inName,"suiteFailCount") ) { return suiteFailCount; }
		if (HX_FIELD_EQ(inName,"startTestSuite") ) { return startTestSuite_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"suiteErrorCount") ) { return suiteErrorCount; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentTestClass") ) { return currentTestClass; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { return inCallProp == hx::paccAlways ? get_completionHandler() : completionHandler; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"suiteExecutionTime") ) { return suiteExecutionTime; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setCurrentTestClass") ) { return setCurrentTestClass_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_completionHandler") ) { return get_completionHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"set_completionHandler") ) { return set_completionHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"reportFinalStatistics") ) { return reportFinalStatistics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JUnitReportClient_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"xml") ) { xml=inValue.Cast< ::StringBuf >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"newline") ) { newline=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"testSuiteXML") ) { testSuiteXML=inValue.Cast< ::StringBuf >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"suitePassCount") ) { suitePassCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"suiteFailCount") ) { suiteFailCount=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"suiteErrorCount") ) { suiteErrorCount=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentTestClass") ) { currentTestClass=inValue.Cast< ::String >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { if (inCallProp == hx::paccAlways) return set_completionHandler(inValue);completionHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"suiteExecutionTime") ) { suiteExecutionTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JUnitReportClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("newline","\x54","\x98","\xa6","\x0c"));
	outFields->push(HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00"));
	outFields->push(HX_HCSTRING("testSuiteXML","\x71","\x74","\xf9","\x2e"));
	outFields->push(HX_HCSTRING("currentTestClass","\x0d","\x2b","\x8b","\x04"));
	outFields->push(HX_HCSTRING("suitePassCount","\x66","\x44","\xd1","\xac"));
	outFields->push(HX_HCSTRING("suiteFailCount","\x39","\x00","\x0d","\x03"));
	outFields->push(HX_HCSTRING("suiteErrorCount","\xbf","\x8c","\xc9","\xda"));
	outFields->push(HX_HCSTRING("suiteExecutionTime","\xed","\x8d","\xa9","\x43"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(JUnitReportClient_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JUnitReportClient_obj,completionHandler),HX_HCSTRING("completionHandler","\x0e","\xe8","\xb2","\x5b")},
	{hx::fsString,(int)offsetof(JUnitReportClient_obj,newline),HX_HCSTRING("newline","\x54","\x98","\xa6","\x0c")},
	{hx::fsObject /*::StringBuf*/ ,(int)offsetof(JUnitReportClient_obj,xml),HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00")},
	{hx::fsObject /*::StringBuf*/ ,(int)offsetof(JUnitReportClient_obj,testSuiteXML),HX_HCSTRING("testSuiteXML","\x71","\x74","\xf9","\x2e")},
	{hx::fsString,(int)offsetof(JUnitReportClient_obj,currentTestClass),HX_HCSTRING("currentTestClass","\x0d","\x2b","\x8b","\x04")},
	{hx::fsInt,(int)offsetof(JUnitReportClient_obj,suitePassCount),HX_HCSTRING("suitePassCount","\x66","\x44","\xd1","\xac")},
	{hx::fsInt,(int)offsetof(JUnitReportClient_obj,suiteFailCount),HX_HCSTRING("suiteFailCount","\x39","\x00","\x0d","\x03")},
	{hx::fsInt,(int)offsetof(JUnitReportClient_obj,suiteErrorCount),HX_HCSTRING("suiteErrorCount","\xbf","\x8c","\xc9","\xda")},
	{hx::fsFloat,(int)offsetof(JUnitReportClient_obj,suiteExecutionTime),HX_HCSTRING("suiteExecutionTime","\xed","\x8d","\xa9","\x43")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &JUnitReportClient_obj::DEFAULT_ID,HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("completionHandler","\x0e","\xe8","\xb2","\x5b"),
	HX_HCSTRING("get_completionHandler","\xe5","\xea","\x60","\xda"),
	HX_HCSTRING("set_completionHandler","\xf1","\xb8","\x69","\x2e"),
	HX_HCSTRING("newline","\x54","\x98","\xa6","\x0c"),
	HX_HCSTRING("xml","\xd7","\x6d","\x5b","\x00"),
	HX_HCSTRING("testSuiteXML","\x71","\x74","\xf9","\x2e"),
	HX_HCSTRING("currentTestClass","\x0d","\x2b","\x8b","\x04"),
	HX_HCSTRING("suitePassCount","\x66","\x44","\xd1","\xac"),
	HX_HCSTRING("suiteFailCount","\x39","\x00","\x0d","\x03"),
	HX_HCSTRING("suiteErrorCount","\xbf","\x8c","\xc9","\xda"),
	HX_HCSTRING("suiteExecutionTime","\xed","\x8d","\xa9","\x43"),
	HX_HCSTRING("setCurrentTestClass","\xcf","\x86","\x4e","\xfb"),
	HX_HCSTRING("addPass","\x92","\x27","\x8f","\x86"),
	HX_HCSTRING("addFail","\x9f","\xfc","\xf2","\x7f"),
	HX_HCSTRING("addError","\xe7","\xf1","\x86","\xec"),
	HX_HCSTRING("addIgnore","\x13","\xee","\xec","\x4a"),
	HX_HCSTRING("reportFinalStatistics","\xe5","\x9f","\x5e","\x0c"),
	HX_HCSTRING("endTestSuite","\xab","\x05","\xbf","\x5c"),
	HX_HCSTRING("startTestSuite","\x44","\xcc","\xf7","\x6c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JUnitReportClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JUnitReportClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JUnitReportClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JUnitReportClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

hx::Class JUnitReportClient_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18"),
	::String(null()) };

void JUnitReportClient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.JUnitReportClient","\xb1","\x5e","\x98","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JUnitReportClient_obj >;
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

void JUnitReportClient_obj::__boot()
{
	DEFAULT_ID= HX_HCSTRING("junit","\xee","\x47","\x23","\x56");
}

} // end namespace massive
} // end namespace munit
} // end namespace client
