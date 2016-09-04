#include <hxcpp.h>

#ifndef INCLUDED_massive_haxe_util_ReflectUtil
#include <massive/haxe/util/ReflectUtil.h>
#endif
namespace massive{
namespace haxe{
namespace util{

Void ReflectUtil_obj::__construct()
{
	return null();
}

//ReflectUtil_obj::~ReflectUtil_obj() { }

Dynamic ReflectUtil_obj::__CreateEmpty() { return  new ReflectUtil_obj; }
hx::ObjectPtr< ReflectUtil_obj > ReflectUtil_obj::__new()
{  hx::ObjectPtr< ReflectUtil_obj > _result_ = new ReflectUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ReflectUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ReflectUtil_obj > _result_ = new ReflectUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ReflectUtil_obj::here( Dynamic info){
	HX_STACK_FRAME("massive.haxe.util.ReflectUtil","here",0x42faf86d,"massive.haxe.util.ReflectUtil.here","massive/haxe/util/ReflectUtil.hx",44,0x840d91ae)
	HX_STACK_ARG(info,"info")
	HX_STACK_LINE(45)
	Dynamic tmp = info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ReflectUtil_obj,here,return )


ReflectUtil_obj::ReflectUtil_obj()
{
}

bool ReflectUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"here") ) { outValue = here_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ReflectUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ReflectUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class ReflectUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("here","\xf0","\x37","\x0b","\x45"),
	::String(null()) };

void ReflectUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.haxe.util.ReflectUtil","\x11","\x71","\x96","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ReflectUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ReflectUtil_obj >;
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
} // end namespace haxe
} // end namespace util
