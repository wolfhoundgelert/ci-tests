#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_TestMain
#include <TestMain.h>
#endif
#ifndef INCLUDED_TestSuite
#include <TestSuite.h>
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
#ifndef INCLUDED_massive_munit_TestRunner
#include <massive/munit/TestRunner.h>
#endif
#ifndef INCLUDED_massive_munit_TestSuite
#include <massive/munit/TestSuite.h>
#endif
#ifndef INCLUDED_massive_munit_async_IAsyncDelegateObserver
#include <massive/munit/async/IAsyncDelegateObserver.h>
#endif
#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_HTTPClient
#include <massive/munit/client/HTTPClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_PrintClientBase
#include <massive/munit/client/PrintClientBase.h>
#endif
#ifndef INCLUDED_massive_munit_client_RichPrintClient
#include <massive/munit/client/RichPrintClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_SummaryReportClient
#include <massive/munit/client/SummaryReportClient.h>
#endif

Void TestMain_obj::__construct()
{
HX_STACK_FRAME("TestMain","new",0xc77e5c3d,"TestMain.new","TestMain.hx",21,0xdc28b9d3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	Array< ::Dynamic > suites = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(suites,"suites");
	HX_STACK_LINE(23)
	suites->push(hx::ClassOf< ::TestSuite >());
	HX_STACK_LINE(29)
	::massive::munit::client::RichPrintClient tmp = ::massive::munit::client::RichPrintClient_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::massive::munit::client::RichPrintClient client = tmp;		HX_STACK_VAR(client,"client");
	HX_STACK_LINE(30)
	::massive::munit::client::SummaryReportClient tmp1 = ::massive::munit::client::SummaryReportClient_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	::massive::munit::client::HTTPClient tmp2 = ::massive::munit::client::HTTPClient_obj::__new(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	::massive::munit::client::HTTPClient httpClient = tmp2;		HX_STACK_VAR(httpClient,"httpClient");
	HX_STACK_LINE(33)
	::massive::munit::TestRunner tmp3 = ::massive::munit::TestRunner_obj::__new(client);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	::massive::munit::TestRunner runner = tmp3;		HX_STACK_VAR(runner,"runner");
	HX_STACK_LINE(34)
	::massive::munit::client::HTTPClient tmp4 = httpClient;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	runner->addResultClient(tmp4);
	HX_STACK_LINE(37)
	Dynamic tmp5 = this->completionHandler_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(37)
	runner->completionHandler = tmp5;
	HX_STACK_LINE(56)
	runner->run(suites);
}
;
	return null();
}

//TestMain_obj::~TestMain_obj() { }

Dynamic TestMain_obj::__CreateEmpty() { return  new TestMain_obj; }
hx::ObjectPtr< TestMain_obj > TestMain_obj::__new()
{  hx::ObjectPtr< TestMain_obj > _result_ = new TestMain_obj();
	_result_->__construct();
	return _result_;}

Dynamic TestMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestMain_obj > _result_ = new TestMain_obj();
	_result_->__construct();
	return _result_;}

Void TestMain_obj::completionHandler( bool successful){
{
		HX_STACK_FRAME("TestMain","completionHandler",0xd5539cab,"TestMain.completionHandler","TestMain.hx",66,0xdc28b9d3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(successful,"successful")
		HX_STACK_LINE(66)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(73)
			::Sys_obj::exit((int)0);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestMain_obj,completionHandler,(void))

Void TestMain_obj::main( ){
{
		HX_STACK_FRAME("TestMain","main",0xc6660dbc,"TestMain.main","TestMain.hx",18,0xdc28b9d3)
		HX_STACK_LINE(18)
		::TestMain_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TestMain_obj,main,(void))


TestMain_obj::TestMain_obj()
{
}

Dynamic TestMain_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { return completionHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TestMain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("completionHandler","\x0e","\xe8","\xb2","\x5b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestMain_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestMain_obj::__mClass,"__mClass");
};

#endif

hx::Class TestMain_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void TestMain_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("TestMain","\xcb","\x79","\x3a","\x25");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TestMain_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestMain_obj >;
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

