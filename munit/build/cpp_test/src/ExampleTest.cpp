#include <hxcpp.h>

#ifndef INCLUDED_ExampleTest
#include <ExampleTest.h>
#endif
#ifndef INCLUDED_massive_munit_Assert
#include <massive/munit/Assert.h>
#endif
#ifndef INCLUDED_massive_munit_async_AsyncFactory
#include <massive/munit/async/AsyncFactory.h>
#endif
#ifndef INCLUDED_massive_munit_util_Timer
#include <massive/munit/util/Timer.h>
#endif

Void ExampleTest_obj::__construct()
{
HX_STACK_FRAME("ExampleTest","new",0xa041006e,"ExampleTest.new","ExampleTest.hx",17,0x2d7d66c2)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ExampleTest_obj::~ExampleTest_obj() { }

Dynamic ExampleTest_obj::__CreateEmpty() { return  new ExampleTest_obj; }
hx::ObjectPtr< ExampleTest_obj > ExampleTest_obj::__new()
{  hx::ObjectPtr< ExampleTest_obj > _result_ = new ExampleTest_obj();
	_result_->__construct();
	return _result_;}

Dynamic ExampleTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExampleTest_obj > _result_ = new ExampleTest_obj();
	_result_->__construct();
	return _result_;}

Void ExampleTest_obj::beforeClass( ){
{
		HX_STACK_FRAME("ExampleTest","beforeClass",0x6f86d547,"ExampleTest.beforeClass","ExampleTest.hx",23,0x2d7d66c2)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ExampleTest_obj,beforeClass,(void))

Void ExampleTest_obj::afterClass( ){
{
		HX_STACK_FRAME("ExampleTest","afterClass",0x294aea2e,"ExampleTest.afterClass","ExampleTest.hx",28,0x2d7d66c2)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ExampleTest_obj,afterClass,(void))

Void ExampleTest_obj::setup( ){
{
		HX_STACK_FRAME("ExampleTest","setup",0xd3d37e0b,"ExampleTest.setup","ExampleTest.hx",33,0x2d7d66c2)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ExampleTest_obj,setup,(void))

Void ExampleTest_obj::tearDown( ){
{
		HX_STACK_FRAME("ExampleTest","tearDown",0x2baab356,"ExampleTest.tearDown","ExampleTest.hx",38,0x2d7d66c2)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ExampleTest_obj,tearDown,(void))

Void ExampleTest_obj::testExample( ){
{
		HX_STACK_FRAME("ExampleTest","testExample",0xe3a4e406,"ExampleTest.testExample","ExampleTest.hx",44,0x2d7d66c2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("ExampleTest.hx","\xc2","\x66","\x7d","\x2d"),45,HX_HCSTRING("ExampleTest","\x7c","\xf1","\x08","\xe6"),HX_HCSTRING("testExample","\xf8","\xf5","\xd3","\x41"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		::massive::munit::Assert_obj::isTrue(true,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ExampleTest_obj,testExample,(void))

Void ExampleTest_obj::testAsyncExample( ::massive::munit::async::AsyncFactory factory){
{
		HX_STACK_FRAME("ExampleTest","testAsyncExample",0xfa8e76f2,"ExampleTest.testAsyncExample","ExampleTest.hx",50,0x2d7d66c2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(factory,"factory")
		HX_STACK_LINE(51)
		Dynamic tmp = this->onTestAsyncExampleComplete_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		Dynamic tmp1 = hx::SourceInfo(HX_HCSTRING("ExampleTest.hx","\xc2","\x66","\x7d","\x2d"),51,HX_HCSTRING("ExampleTest","\x7c","\xf1","\x08","\xe6"),HX_HCSTRING("testAsyncExample","\xc0","\x17","\x7f","\xa5"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		Dynamic tmp2 = factory->createHandler(hx::ObjectPtr<OBJ_>(this),tmp,(int)300,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		Dynamic handler = tmp2;		HX_STACK_VAR(handler,"handler");
		HX_STACK_LINE(52)
		Dynamic tmp3 = handler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		::massive::munit::util::Timer tmp4 = ::massive::munit::util::Timer_obj::delay(tmp3,(int)200);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		this->timer = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExampleTest_obj,testAsyncExample,(void))

Void ExampleTest_obj::onTestAsyncExampleComplete( ){
{
		HX_STACK_FRAME("ExampleTest","onTestAsyncExampleComplete",0xdc23288a,"ExampleTest.onTestAsyncExampleComplete","ExampleTest.hx",56,0x2d7d66c2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("ExampleTest.hx","\xc2","\x66","\x7d","\x2d"),57,HX_HCSTRING("ExampleTest","\x7c","\xf1","\x08","\xe6"),HX_HCSTRING("onTestAsyncExampleComplete","\xd8","\x16","\x16","\x49"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		::massive::munit::Assert_obj::isFalse(false,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ExampleTest_obj,onTestAsyncExampleComplete,(void))

Void ExampleTest_obj::testExampleThatOnlyRunsWithDebugFlag( ){
{
		HX_STACK_FRAME("ExampleTest","testExampleThatOnlyRunsWithDebugFlag",0x41029df8,"ExampleTest.testExampleThatOnlyRunsWithDebugFlag","ExampleTest.hx",66,0x2d7d66c2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		Dynamic tmp = hx::SourceInfo(HX_HCSTRING("ExampleTest.hx","\xc2","\x66","\x7d","\x2d"),67,HX_HCSTRING("ExampleTest","\x7c","\xf1","\x08","\xe6"),HX_HCSTRING("testExampleThatOnlyRunsWithDebugFlag","\xc6","\xb9","\xef","\x1b"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		::massive::munit::Assert_obj::isTrue(true,tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ExampleTest_obj,testExampleThatOnlyRunsWithDebugFlag,(void))


ExampleTest_obj::ExampleTest_obj()
{
}

void ExampleTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ExampleTest);
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_END_CLASS();
}

void ExampleTest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timer,"timer");
}

Dynamic ExampleTest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"setup") ) { return setup_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tearDown") ) { return tearDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"afterClass") ) { return afterClass_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beforeClass") ) { return beforeClass_dyn(); }
		if (HX_FIELD_EQ(inName,"testExample") ) { return testExample_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"testAsyncExample") ) { return testAsyncExample_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"onTestAsyncExampleComplete") ) { return onTestAsyncExampleComplete_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"testExampleThatOnlyRunsWithDebugFlag") ) { return testExampleThatOnlyRunsWithDebugFlag_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ExampleTest_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::massive::munit::util::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ExampleTest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::massive::munit::util::Timer*/ ,(int)offsetof(ExampleTest_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("beforeClass","\x39","\xe7","\xb5","\xcd"),
	HX_HCSTRING("afterClass","\x7c","\xdc","\x6f","\xab"),
	HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),
	HX_HCSTRING("tearDown","\x24","\xd6","\x66","\xec"),
	HX_HCSTRING("testExample","\xf8","\xf5","\xd3","\x41"),
	HX_HCSTRING("testAsyncExample","\xc0","\x17","\x7f","\xa5"),
	HX_HCSTRING("onTestAsyncExampleComplete","\xd8","\x16","\x16","\x49"),
	HX_HCSTRING("testExampleThatOnlyRunsWithDebugFlag","\xc6","\xb9","\xef","\x1b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExampleTest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExampleTest_obj::__mClass,"__mClass");
};

#endif

hx::Class ExampleTest_obj::__mClass;

void ExampleTest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ExampleTest","\x7c","\xf1","\x08","\xe6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExampleTest_obj >;
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

void ExampleTest_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ExampleTest.hx",12,0x2d7d66c2)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ExampleTest.hx",12,0x2d7d66c2)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ExampleTest.hx",12,0x2d7d66c2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("BeforeClass","\x19","\x7f","\xe8","\xb1") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("beforeClass","\x39","\xe7","\xb5","\xcd") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ExampleTest.hx",12,0x2d7d66c2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("AfterClass","\x9c","\xe0","\x20","\xa2") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("afterClass","\x7c","\xdc","\x6f","\xab") , _Function_2_2::Block(),false);
						struct _Function_2_3{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ExampleTest.hx",12,0x2d7d66c2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("Before","\x9f","\xc8","\xc6","\xce") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a") , _Function_2_3::Block(),false);
						struct _Function_2_4{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ExampleTest.hx",12,0x2d7d66c2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("After","\xfc","\xd5","\xcf","\xb0") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("tearDown","\x24","\xd6","\x66","\xec") , _Function_2_4::Block(),false);
						struct _Function_2_5{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ExampleTest.hx",12,0x2d7d66c2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("Test","\x72","\xf4","\xd2","\x37") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("testExample","\xf8","\xf5","\xd3","\x41") , _Function_2_5::Block(),false);
						struct _Function_2_6{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ExampleTest.hx",12,0x2d7d66c2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("AsyncTest","\x8e","\x21","\x5a","\x1c") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("testAsyncExample","\xc0","\x17","\x7f","\xa5") , _Function_2_6::Block(),false);
						struct _Function_2_7{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","ExampleTest.hx",12,0x2d7d66c2)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("TestDebug","\x81","\x70","\xf4","\x41") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_HCSTRING("testExampleThatOnlyRunsWithDebugFlag","\xc6","\xb9","\xef","\x1b") , _Function_2_7::Block(),false);
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

