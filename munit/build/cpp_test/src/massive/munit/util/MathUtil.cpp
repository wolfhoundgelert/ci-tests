#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_massive_munit_util_MathUtil
#include <massive/munit/util/MathUtil.h>
#endif
namespace massive{
namespace munit{
namespace util{

Void MathUtil_obj::__construct()
{
HX_STACK_FRAME("massive.munit.util.MathUtil","new",0x00c1a6a1,"massive.munit.util.MathUtil.new","massive/munit/util/MathUtil.hx",39,0x3bb7d050)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//MathUtil_obj::~MathUtil_obj() { }

Dynamic MathUtil_obj::__CreateEmpty() { return  new MathUtil_obj; }
hx::ObjectPtr< MathUtil_obj > MathUtil_obj::__new()
{  hx::ObjectPtr< MathUtil_obj > _result_ = new MathUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic MathUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MathUtil_obj > _result_ = new MathUtil_obj();
	_result_->__construct();
	return _result_;}

Float MathUtil_obj::round( Float value,int precision){
	HX_STACK_FRAME("massive.munit.util.MathUtil","round",0x45a6a0cf,"massive.munit.util.MathUtil.round","massive/munit/util/MathUtil.hx",49,0x3bb7d050)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(precision,"precision")
	HX_STACK_LINE(50)
	Float tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	int tmp1 = precision;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(50)
	Float tmp2 = ::Math_obj::pow((int)10,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(50)
	Float tmp3 = (tmp * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(50)
	value = tmp3;
	HX_STACK_LINE(51)
	Float tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(51)
	int tmp5 = ::Math_obj::round(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	int tmp6 = precision;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(51)
	Float tmp7 = ::Math_obj::pow((int)10,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(51)
	Float tmp8 = (Float(tmp5) / Float(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(51)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,round,return )


MathUtil_obj::MathUtil_obj()
{
}

bool MathUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"round") ) { outValue = round_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MathUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MathUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class MathUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("round","\x4e","\xf8","\x65","\xed"),
	::String(null()) };

void MathUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.util.MathUtil","\x2f","\xc2","\x27","\x76");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MathUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MathUtil_obj >;
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
} // end namespace util
