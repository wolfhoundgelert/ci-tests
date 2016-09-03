#include <hxcpp.h>

#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_munit_AssertionException
#include <massive/munit/AssertionException.h>
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
namespace massive{
namespace munit{

Void TestResult_obj::__construct()
{
HX_STACK_FRAME("massive.munit.TestResult","new",0x9b452308,"massive.munit.TestResult.new","massive/munit/TestResult.hx",98,0x8da40d66)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(99)
	this->passed = false;
	HX_STACK_LINE(100)
	this->executionTime = ((Float)0.0);
	HX_STACK_LINE(101)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(102)
	this->className = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(103)
	this->description = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(104)
	this->async = false;
	HX_STACK_LINE(105)
	this->ignore = false;
	HX_STACK_LINE(106)
	this->error = null();
	HX_STACK_LINE(107)
	this->failure = null();
}
;
	return null();
}

//TestResult_obj::~TestResult_obj() { }

Dynamic TestResult_obj::__CreateEmpty() { return  new TestResult_obj; }
hx::ObjectPtr< TestResult_obj > TestResult_obj::__new()
{  hx::ObjectPtr< TestResult_obj > _result_ = new TestResult_obj();
	_result_->__construct();
	return _result_;}

Dynamic TestResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestResult_obj > _result_ = new TestResult_obj();
	_result_->__construct();
	return _result_;}

::String TestResult_obj::get_location( ){
	HX_STACK_FRAME("massive.munit.TestResult","get_location",0xa4933a96,"massive.munit.TestResult.get_location","massive/munit/TestResult.hx",69,0x8da40d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	bool tmp1 = (tmp == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(70)
	if ((tmp1)){
		HX_STACK_LINE(70)
		::String tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		::String tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		tmp2 = (tmp4 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(70)
		tmp2 = false;
	}
	HX_STACK_LINE(70)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(70)
	if ((tmp2)){
		HX_STACK_LINE(70)
		tmp3 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	else{
		HX_STACK_LINE(70)
		::String tmp4 = this->className;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		::String tmp5 = (tmp4 + HX_HCSTRING("#","\x23","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		::String tmp6 = this->name;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(70)
		tmp3 = (tmp5 + tmp6);
	}
	HX_STACK_LINE(70)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TestResult_obj,get_location,return )

::massive::munit::TestResultType TestResult_obj::get_type( ){
	HX_STACK_FRAME("massive.munit.TestResult","get_type",0x57bdba9b,"massive.munit.TestResult.get_type","massive/munit/TestResult.hx",111,0x8da40d66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	Dynamic tmp = this->error;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	if ((tmp1)){
		HX_STACK_LINE(112)
		return ::massive::munit::TestResultType_obj::ERROR;
	}
	HX_STACK_LINE(113)
	::massive::munit::AssertionException tmp2 = this->failure;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(113)
	if ((tmp3)){
		HX_STACK_LINE(113)
		return ::massive::munit::TestResultType_obj::FAIL;
	}
	HX_STACK_LINE(114)
	bool tmp4 = this->ignore;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	bool tmp5 = (tmp4 == true);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(114)
	if ((tmp5)){
		HX_STACK_LINE(114)
		return ::massive::munit::TestResultType_obj::IGNORE;
	}
	HX_STACK_LINE(115)
	bool tmp6 = this->passed;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(115)
	bool tmp7 = (tmp6 == true);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(115)
	if ((tmp7)){
		HX_STACK_LINE(115)
		return ::massive::munit::TestResultType_obj::PASS;
	}
	HX_STACK_LINE(117)
	return ::massive::munit::TestResultType_obj::UNKNOWN;
}


HX_DEFINE_DYNAMIC_FUNC0(TestResult_obj,get_type,return )


TestResult_obj::TestResult_obj()
{
}

void TestResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestResult);
	HX_MARK_MEMBER_NAME(passed,"passed");
	HX_MARK_MEMBER_NAME(executionTime,"executionTime");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_MEMBER_NAME(location,"location");
	HX_MARK_MEMBER_NAME(async,"async");
	HX_MARK_MEMBER_NAME(ignore,"ignore");
	HX_MARK_MEMBER_NAME(failure,"failure");
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void TestResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(passed,"passed");
	HX_VISIT_MEMBER_NAME(executionTime,"executionTime");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(description,"description");
	HX_VISIT_MEMBER_NAME(location,"location");
	HX_VISIT_MEMBER_NAME(async,"async");
	HX_VISIT_MEMBER_NAME(ignore,"ignore");
	HX_VISIT_MEMBER_NAME(failure,"failure");
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic TestResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return inCallProp == hx::paccAlways ? get_type() : type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"async") ) { return async; }
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"passed") ) { return passed; }
		if (HX_FIELD_EQ(inName,"ignore") ) { return ignore; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"failure") ) { return failure; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { return inCallProp == hx::paccAlways ? get_location() : location; }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return description; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_location") ) { return get_location_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"executionTime") ) { return executionTime; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestResult_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::massive::munit::TestResultType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"async") ) { async=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"passed") ) { passed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignore") ) { ignore=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"failure") ) { failure=inValue.Cast< ::massive::munit::AssertionException >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { location=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"executionTime") ) { executionTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("passed","\x70","\xd3","\x31","\xee"));
	outFields->push(HX_HCSTRING("executionTime","\xc5","\xcf","\x3e","\xdc"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f"));
	outFields->push(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"));
	outFields->push(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26"));
	outFields->push(HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92"));
	outFields->push(HX_HCSTRING("failure","\x4a","\x70","\xfa","\x16"));
	outFields->push(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(TestResult_obj,passed),HX_HCSTRING("passed","\x70","\xd3","\x31","\xee")},
	{hx::fsFloat,(int)offsetof(TestResult_obj,executionTime),HX_HCSTRING("executionTime","\xc5","\xcf","\x3e","\xdc")},
	{hx::fsString,(int)offsetof(TestResult_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(TestResult_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsString,(int)offsetof(TestResult_obj,description),HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f")},
	{hx::fsString,(int)offsetof(TestResult_obj,location),HX_HCSTRING("location","\x35","\x6e","\x46","\xe5")},
	{hx::fsBool,(int)offsetof(TestResult_obj,async),HX_HCSTRING("async","\x3c","\xff","\x3d","\x26")},
	{hx::fsBool,(int)offsetof(TestResult_obj,ignore),HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92")},
	{hx::fsObject /*::massive::munit::AssertionException*/ ,(int)offsetof(TestResult_obj,failure),HX_HCSTRING("failure","\x4a","\x70","\xfa","\x16")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestResult_obj,error),HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")},
	{hx::fsObject /*::massive::munit::TestResultType*/ ,(int)offsetof(TestResult_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("passed","\x70","\xd3","\x31","\xee"),
	HX_HCSTRING("executionTime","\xc5","\xcf","\x3e","\xdc"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f"),
	HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"),
	HX_HCSTRING("get_location","\x3e","\x22","\x60","\x9a"),
	HX_HCSTRING("async","\x3c","\xff","\x3d","\x26"),
	HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92"),
	HX_HCSTRING("failure","\x4a","\x70","\xfa","\x16"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestResult_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestResult_obj::__mClass,"__mClass");
};

#endif

hx::Class TestResult_obj::__mClass;

void TestResult_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.TestResult","\x16","\x3f","\xad","\x38");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestResult_obj >;
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
