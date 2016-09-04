#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_PrintClient
#include <massive/munit/client/PrintClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_PrintClientBase
#include <massive/munit/client/PrintClientBase.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void PrintClient_obj::__construct(Dynamic __o_includeIgnoredReport)
{
HX_STACK_FRAME("massive.munit.client.PrintClient","new",0x365789ae,"massive.munit.client.PrintClient.new","massive/munit/client/PrintClient.hx",79,0x6b1c8b41)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_includeIgnoredReport,"includeIgnoredReport")
Dynamic includeIgnoredReport = __o_includeIgnoredReport.Default(true);
{
	HX_STACK_LINE(80)
	Dynamic tmp = includeIgnoredReport;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	super::__construct(tmp);
	HX_STACK_LINE(81)
	this->id = HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8");
}
;
	return null();
}

//PrintClient_obj::~PrintClient_obj() { }

Dynamic PrintClient_obj::__CreateEmpty() { return  new PrintClient_obj; }
hx::ObjectPtr< PrintClient_obj > PrintClient_obj::__new(Dynamic __o_includeIgnoredReport)
{  hx::ObjectPtr< PrintClient_obj > _result_ = new PrintClient_obj();
	_result_->__construct(__o_includeIgnoredReport);
	return _result_;}

Dynamic PrintClient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PrintClient_obj > _result_ = new PrintClient_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PrintClient_obj::init( ){
{
		HX_STACK_FRAME("massive.munit.client.PrintClient","init",0x52f9a602,"massive.munit.client.PrintClient.init","massive/munit/client/PrintClient.hx",85,0x6b1c8b41)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		this->super::init();
		HX_STACK_LINE(98)
		Dynamic tmp = ::haxe::Log_obj::trace_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		this->originalTrace = tmp;
		HX_STACK_LINE(99)
		Dynamic tmp1 = this->customTrace_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		::haxe::Log_obj::trace = tmp1;
	}
return null();
}


Void PrintClient_obj::printOverallResult( bool result){
{
		HX_STACK_FRAME("massive.munit.client.PrintClient","printOverallResult",0xf1eb170f,"massive.munit.client.PrintClient.printOverallResult","massive/munit/client/PrintClient.hx",151,0x6b1c8b41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(152)
		bool tmp = result;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(152)
		this->super::printOverallResult(tmp);
	}
return null();
}


Void PrintClient_obj::customTrace( Dynamic value,Dynamic info){
{
		HX_STACK_FRAME("massive.munit.client.PrintClient","customTrace",0xd6ceac62,"massive.munit.client.PrintClient.customTrace","massive/munit/client/PrintClient.hx",164,0x6b1c8b41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(info,"info")
		HX_STACK_LINE(165)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		Dynamic tmp1 = info;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		this->addTrace(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PrintClient_obj,customTrace,(void))

Dynamic PrintClient_obj::reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
	HX_STACK_FRAME("massive.munit.client.PrintClient","reportFinalStatistics",0xfcc0c4b3,"massive.munit.client.PrintClient.reportFinalStatistics","massive/munit/client/PrintClient.hx",171,0x6b1c8b41)
	HX_STACK_THIS(this)
	HX_STACK_ARG(testCount,"testCount")
	HX_STACK_ARG(passCount,"passCount")
	HX_STACK_ARG(failCount,"failCount")
	HX_STACK_ARG(errorCount,"errorCount")
	HX_STACK_ARG(ignoreCount,"ignoreCount")
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(172)
	int tmp = testCount;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	int tmp1 = passCount;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(172)
	int tmp2 = failCount;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(172)
	int tmp3 = errorCount;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(172)
	int tmp4 = ignoreCount;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(172)
	Float tmp5 = time;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(172)
	Dynamic tmp6 = this->super::reportFinalStatistics(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(172)
	return tmp6;
}


Void PrintClient_obj::print( Dynamic value){
{
		HX_STACK_FRAME("massive.munit.client.PrintClient","print",0x51ea80fb,"massive.munit.client.PrintClient.print","massive/munit/client/PrintClient.hx",176,0x6b1c8b41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(177)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		this->super::print(tmp);
		HX_STACK_LINE(191)
		Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(191)
		::Sys_obj::print(tmp1);
	}
return null();
}


Void PrintClient_obj::printLine( Dynamic value,Dynamic __o_indent){
Dynamic indent = __o_indent.Default(0);
	HX_STACK_FRAME("massive.munit.client.PrintClient","printLine",0x914a5e8f,"massive.munit.client.PrintClient.printLine","massive/munit/client/PrintClient.hx",198,0x6b1c8b41)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(indent,"indent")
{
		HX_STACK_LINE(199)
		Dynamic tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(199)
		Dynamic tmp1 = indent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(199)
		this->super::printLine(tmp,tmp1);
	}
return null();
}


::String PrintClient_obj::DEFAULT_ID;


PrintClient_obj::PrintClient_obj()
{
}

Dynamic PrintClient_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"printLine") ) { return printLine_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"customTrace") ) { return customTrace_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printOverallResult") ) { return printOverallResult_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"reportFinalStatistics") ) { return reportFinalStatistics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &PrintClient_obj::DEFAULT_ID,HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("printOverallResult","\x9d","\x28","\x2a","\x6e"),
	HX_HCSTRING("customTrace","\x14","\xf5","\x5b","\xab"),
	HX_HCSTRING("reportFinalStatistics","\xe5","\x9f","\x5e","\x0c"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("printLine","\xc1","\xb6","\xab","\xc8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrintClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PrintClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrintClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PrintClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

hx::Class PrintClient_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18"),
	::String(null()) };

void PrintClient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.PrintClient","\xbc","\xda","\x51","\x01");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PrintClient_obj >;
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

void PrintClient_obj::__boot()
{
	DEFAULT_ID= HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8");
}

} // end namespace massive
} // end namespace munit
} // end namespace client
