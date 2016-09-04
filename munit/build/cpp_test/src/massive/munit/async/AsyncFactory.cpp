#include <hxcpp.h>

#ifndef INCLUDED_massive_munit_async_AsyncDelegate
#include <massive/munit/async/AsyncDelegate.h>
#endif
#ifndef INCLUDED_massive_munit_async_AsyncFactory
#include <massive/munit/async/AsyncFactory.h>
#endif
#ifndef INCLUDED_massive_munit_async_IAsyncDelegateObserver
#include <massive/munit/async/IAsyncDelegateObserver.h>
#endif
namespace massive{
namespace munit{
namespace async{

Void AsyncFactory_obj::__construct(::massive::munit::async::IAsyncDelegateObserver observer)
{
HX_STACK_FRAME("massive.munit.async.AsyncFactory","new",0x8d29f519,"massive.munit.async.AsyncFactory.new","massive/munit/async/AsyncFactory.hx",78,0x7b443f94)
HX_STACK_THIS(this)
HX_STACK_ARG(observer,"observer")
{
	HX_STACK_LINE(79)
	this->observer = observer;
	HX_STACK_LINE(80)
	this->asyncDelegateCount = (int)0;
}
;
	return null();
}

//AsyncFactory_obj::~AsyncFactory_obj() { }

Dynamic AsyncFactory_obj::__CreateEmpty() { return  new AsyncFactory_obj; }
hx::ObjectPtr< AsyncFactory_obj > AsyncFactory_obj::__new(::massive::munit::async::IAsyncDelegateObserver observer)
{  hx::ObjectPtr< AsyncFactory_obj > _result_ = new AsyncFactory_obj();
	_result_->__construct(observer);
	return _result_;}

Dynamic AsyncFactory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AsyncFactory_obj > _result_ = new AsyncFactory_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic AsyncFactory_obj::createHandler( Dynamic testCase,Dynamic handler,Dynamic timeout,Dynamic info){
	HX_STACK_FRAME("massive.munit.async.AsyncFactory","createHandler",0xca3f2e27,"massive.munit.async.AsyncFactory.createHandler","massive/munit/async/AsyncFactory.hx",93,0x7b443f94)
	HX_STACK_THIS(this)
	HX_STACK_ARG(testCase,"testCase")
	HX_STACK_ARG(handler,"handler")
	HX_STACK_ARG(timeout,"timeout")
	HX_STACK_ARG(info,"info")
	HX_STACK_LINE(94)
	::massive::munit::async::AsyncDelegate tmp = ::massive::munit::async::AsyncDelegate_obj::__new(testCase,handler,timeout,info);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	::massive::munit::async::AsyncDelegate delegate = tmp;		HX_STACK_VAR(delegate,"delegate");
	HX_STACK_LINE(95)
	::massive::munit::async::IAsyncDelegateObserver tmp1 = this->observer;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	delegate->observer = tmp1;
	HX_STACK_LINE(96)
	(this->asyncDelegateCount)++;
	HX_STACK_LINE(98)
	::massive::munit::async::IAsyncDelegateObserver tmp2 = this->observer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	::massive::munit::async::AsyncDelegate tmp3 = delegate;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(98)
	tmp2->asyncDelegateCreatedHandler(tmp3);
	HX_STACK_LINE(99)
	Dynamic tmp4 = delegate->delegateHandler;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(99)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC4(AsyncFactory_obj,createHandler,return )


AsyncFactory_obj::AsyncFactory_obj()
{
}

void AsyncFactory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AsyncFactory);
	HX_MARK_MEMBER_NAME(observer,"observer");
	HX_MARK_MEMBER_NAME(asyncDelegateCount,"asyncDelegateCount");
	HX_MARK_END_CLASS();
}

void AsyncFactory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(observer,"observer");
	HX_VISIT_MEMBER_NAME(asyncDelegateCount,"asyncDelegateCount");
}

Dynamic AsyncFactory_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"observer") ) { return observer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createHandler") ) { return createHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"asyncDelegateCount") ) { return asyncDelegateCount; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AsyncFactory_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"observer") ) { observer=inValue.Cast< ::massive::munit::async::IAsyncDelegateObserver >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"asyncDelegateCount") ) { asyncDelegateCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AsyncFactory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("observer","\x16","\x3c","\x4e","\x26"));
	outFields->push(HX_HCSTRING("asyncDelegateCount","\x6e","\xbe","\xc0","\x93"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::massive::munit::async::IAsyncDelegateObserver*/ ,(int)offsetof(AsyncFactory_obj,observer),HX_HCSTRING("observer","\x16","\x3c","\x4e","\x26")},
	{hx::fsInt,(int)offsetof(AsyncFactory_obj,asyncDelegateCount),HX_HCSTRING("asyncDelegateCount","\x6e","\xbe","\xc0","\x93")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("observer","\x16","\x3c","\x4e","\x26"),
	HX_HCSTRING("asyncDelegateCount","\x6e","\xbe","\xc0","\x93"),
	HX_HCSTRING("createHandler","\x2e","\x88","\x18","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncFactory_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncFactory_obj::__mClass,"__mClass");
};

#endif

hx::Class AsyncFactory_obj::__mClass;

void AsyncFactory_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.async.AsyncFactory","\xa7","\x74","\xb9","\x7a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AsyncFactory_obj >;
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
} // end namespace async
