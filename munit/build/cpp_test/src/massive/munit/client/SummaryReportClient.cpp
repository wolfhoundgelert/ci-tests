#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_client_AbstractTestResultClient
#include <massive/munit/client/AbstractTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_client_SummaryReportClient
#include <massive/munit/client/SummaryReportClient.h>
#endif
namespace massive{
namespace munit{
namespace client{

Void SummaryReportClient_obj::__construct()
{
HX_STACK_FRAME("massive.munit.client.SummaryReportClient","new",0xb25e143b,"massive.munit.client.SummaryReportClient.new","massive/munit/client/SummaryReportClient.hx",62,0xf2eda854)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(63)
	super::__construct();
	HX_STACK_LINE(64)
	this->id = HX_HCSTRING("summary","\x26","\x0b","\xe9","\x80");
}
;
	return null();
}

//SummaryReportClient_obj::~SummaryReportClient_obj() { }

Dynamic SummaryReportClient_obj::__CreateEmpty() { return  new SummaryReportClient_obj; }
hx::ObjectPtr< SummaryReportClient_obj > SummaryReportClient_obj::__new()
{  hx::ObjectPtr< SummaryReportClient_obj > _result_ = new SummaryReportClient_obj();
	_result_->__construct();
	return _result_;}

Dynamic SummaryReportClient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SummaryReportClient_obj > _result_ = new SummaryReportClient_obj();
	_result_->__construct();
	return _result_;}

Void SummaryReportClient_obj::printFinalStatistics( bool result,int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time){
{
		HX_STACK_FRAME("massive.munit.client.SummaryReportClient","printFinalStatistics",0x2a090a51,"massive.munit.client.SummaryReportClient.printFinalStatistics","massive/munit/client/SummaryReportClient.hx",68,0xf2eda854)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
		HX_STACK_ARG(testCount,"testCount")
		HX_STACK_ARG(passCount,"passCount")
		HX_STACK_ARG(failCount,"failCount")
		HX_STACK_ARG(errorCount,"errorCount")
		HX_STACK_ARG(ignoreCount,"ignoreCount")
		HX_STACK_ARG(time,"time")
		HX_STACK_LINE(69)
		this->output = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		HX_STACK_LINE(70)
		bool tmp = result;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		::String tmp2 = (HX_HCSTRING("result:","\xbd","\x58","\x57","\x6b") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		hx::AddEq(this->output,tmp2);
		HX_STACK_LINE(71)
		::String tmp3 = (HX_HCSTRING("\ncount:","\x15","\x94","\x4f","\x6c") + testCount);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		hx::AddEq(this->output,tmp3);
		HX_STACK_LINE(72)
		::String tmp4 = (HX_HCSTRING("\npass:","\xff","\xed","\xe7","\xbc") + passCount);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(72)
		hx::AddEq(this->output,tmp4);
		HX_STACK_LINE(73)
		::String tmp5 = (HX_HCSTRING("\nfail:","\x52","\x84","\xde","\xfa") + failCount);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		hx::AddEq(this->output,tmp5);
		HX_STACK_LINE(74)
		::String tmp6 = (HX_HCSTRING("\nerror:","\xfc","\x26","\x3f","\xf1") + errorCount);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		hx::AddEq(this->output,tmp6);
		HX_STACK_LINE(75)
		::String tmp7 = (HX_HCSTRING("\nignore:","\x1e","\xac","\xd1","\x18") + ignoreCount);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		hx::AddEq(this->output,tmp7);
		HX_STACK_LINE(76)
		::String tmp8 = (HX_HCSTRING("\ntime:","\x43","\x5b","\xc7","\x0f") + time);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		hx::AddEq(this->output,tmp8);
		HX_STACK_LINE(77)
		hx::AddEq(this->output,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		HX_STACK_LINE(79)
		int resultCount = (int)0;		HX_STACK_VAR(resultCount,"resultCount");
		HX_STACK_LINE(81)
		while((true)){
			HX_STACK_LINE(81)
			int tmp9 = this->totalResults->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(81)
			bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(81)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(81)
			if ((tmp10)){
				HX_STACK_LINE(81)
				tmp11 = (resultCount < (int)10);
			}
			else{
				HX_STACK_LINE(81)
				tmp11 = false;
			}
			HX_STACK_LINE(81)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(81)
			if ((tmp12)){
				HX_STACK_LINE(81)
				break;
			}
			HX_STACK_LINE(83)
			::massive::munit::TestResult tmp13 = this->totalResults->shift().StaticCast< ::massive::munit::TestResult >();		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			::massive::munit::TestResult result1 = tmp13;		HX_STACK_VAR(result1,"result1");
			HX_STACK_LINE(84)
			bool tmp14 = result1->passed;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(84)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(84)
			if ((tmp15)){
				HX_STACK_LINE(86)
				::String tmp16 = result1->get_location();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(86)
				::String tmp17 = (HX_HCSTRING("\n# ","\x27","\xb5","\x07","\x00") + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(86)
				hx::AddEq(this->output,tmp17);
				HX_STACK_LINE(87)
				(resultCount)++;
			}
		}
		HX_STACK_LINE(91)
		int tmp9 = (failCount + errorCount);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(91)
		int tmp10 = resultCount;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(91)
		int tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(91)
		int remainder = tmp11;		HX_STACK_VAR(remainder,"remainder");
		HX_STACK_LINE(93)
		bool tmp12 = (remainder > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(93)
		if ((tmp12)){
			HX_STACK_LINE(95)
			::String tmp13 = (HX_HCSTRING("# ... plus ","\x97","\x17","\x0d","\xdf") + remainder);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(95)
			::String tmp14 = (tmp13 + HX_HCSTRING(" more","\xb5","\x6f","\x33","\xb5"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(95)
			hx::AddEq(this->output,tmp14);
		}
	}
return null();
}


Void SummaryReportClient_obj::printOverallResult( bool result){
{
		HX_STACK_FRAME("massive.munit.client.SummaryReportClient","printOverallResult",0x98567322,"massive.munit.client.SummaryReportClient.printOverallResult","massive/munit/client/SummaryReportClient.hx",101,0xf2eda854)
		HX_STACK_THIS(this)
		HX_STACK_ARG(result,"result")
	}
return null();
}


Void SummaryReportClient_obj::printReports( ){
{
		HX_STACK_FRAME("massive.munit.client.SummaryReportClient","printReports",0xc839a957,"massive.munit.client.SummaryReportClient.printReports","massive/munit/client/SummaryReportClient.hx",107,0xf2eda854)
		HX_STACK_THIS(this)
	}
return null();
}


::String SummaryReportClient_obj::DEFAULT_ID;


SummaryReportClient_obj::SummaryReportClient_obj()
{
}

Dynamic SummaryReportClient_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"printReports") ) { return printReports_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"printOverallResult") ) { return printOverallResult_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"printFinalStatistics") ) { return printFinalStatistics_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &SummaryReportClient_obj::DEFAULT_ID,HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("printFinalStatistics","\x8c","\x54","\x51","\xe4"),
	HX_HCSTRING("printOverallResult","\x9d","\x28","\x2a","\x6e"),
	HX_HCSTRING("printReports","\x92","\xc0","\x6f","\x0e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SummaryReportClient_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SummaryReportClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SummaryReportClient_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SummaryReportClient_obj::DEFAULT_ID,"DEFAULT_ID");
};

#endif

hx::Class SummaryReportClient_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFAULT_ID","\xf9","\x83","\x2f","\x18"),
	::String(null()) };

void SummaryReportClient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.client.SummaryReportClient","\xc9","\xda","\xa2","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SummaryReportClient_obj >;
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

void SummaryReportClient_obj::__boot()
{
	DEFAULT_ID= HX_HCSTRING("summary","\x26","\x0b","\xe9","\x80");
}

} // end namespace massive
} // end namespace munit
} // end namespace client
