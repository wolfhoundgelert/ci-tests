#include <hxcpp.h>

#ifndef INCLUDED_some_Some
#include <some/Some.h>
#endif
namespace some{

Void Some_obj::__construct()
{
	return null();
}

//Some_obj::~Some_obj() { }

Dynamic Some_obj::__CreateEmpty() { return  new Some_obj; }
hx::ObjectPtr< Some_obj > Some_obj::__new()
{  hx::ObjectPtr< Some_obj > _result_ = new Some_obj();
	_result_->__construct();
	return _result_;}

Dynamic Some_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Some_obj > _result_ = new Some_obj();
	_result_->__construct();
	return _result_;}

Float Some_obj::_double( Float value){
	HX_STACK_FRAME("some.Some","double",0x829e70b1,"some.Some.double","some/Some.hx",9,0xe54ac2cf)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(10)
	Float tmp = (value * (int)2);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Some_obj,_double,return )


Some_obj::Some_obj()
{
}

bool Some_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"double") ) { outValue = _double_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Some_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Some_obj::__mClass,"__mClass");
};

#endif

hx::Class Some_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("double","\x11","\x2b","\xcb","\x32"),
	::String(null()) };

void Some_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("some.Some","\xce","\xa6","\xa0","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Some_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Some_obj >;
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

} // end namespace some
