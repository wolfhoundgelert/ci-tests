#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_Assert
#include <massive/munit/Assert.h>
#endif
#ifndef INCLUDED_some_Some
#include <some/Some.h>
#endif
#ifndef INCLUDED_test_some_SomeTest
#include <test/some/SomeTest.h>
#endif
namespace test{
namespace some{

Void SomeTest_obj::__construct()
{
	return null();
}

//SomeTest_obj::~SomeTest_obj() { }

Dynamic SomeTest_obj::__CreateEmpty() { return  new SomeTest_obj; }
hx::ObjectPtr< SomeTest_obj > SomeTest_obj::__new()
{  hx::ObjectPtr< SomeTest_obj > _result_ = new SomeTest_obj();
	_result_->__construct();
	return _result_;}

Dynamic SomeTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SomeTest_obj > _result_ = new SomeTest_obj();
	_result_->__construct();
	return _result_;}

Void SomeTest_obj::_double( ){
{
		HX_STACK_FRAME("test.some.SomeTest","double",0xd531a51b,"test.some.SomeTest.double","test/some/SomeTest.hx",13,0x2ffdc7ba)
		HX_STACK_THIS(this)
		HX_STACK_LINE(14)
		Float tmp = ::some::Some_obj::_double((int)3);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(14)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("SomeTest.hx","\xf8","\x9c","\x12","\x15"),14,HX_HCSTRING("test.some.SomeTest","\x24","\x09","\x90","\xf9"),HX_HCSTRING("double","\x11","\x2b","\xcb","\x32"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(14)
		::massive::munit::Assert_obj::areEqual((int)6,tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SomeTest_obj,_double,(void))


SomeTest_obj::SomeTest_obj()
{
}

Dynamic SomeTest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"double") ) { return _double_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("double","\x11","\x2b","\xcb","\x32"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SomeTest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SomeTest_obj::__mClass,"__mClass");
};

#endif

hx::Class SomeTest_obj::__mClass;

void SomeTest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("test.some.SomeTest","\x24","\x09","\x90","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SomeTest_obj >;
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

void SomeTest_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","test/some/SomeTest.hx",10,0x2ffdc7ba)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","test/some/SomeTest.hx",10,0x2ffdc7ba)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","test/some/SomeTest.hx",10,0x2ffdc7ba)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("Test","\x72","\xf4","\xd2","\x37") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("double","\x11","\x2b","\xcb","\x32") , _Function_2_1::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace test
} // end namespace some
