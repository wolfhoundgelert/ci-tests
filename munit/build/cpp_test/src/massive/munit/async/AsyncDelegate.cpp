#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_massive_munit_async_AsyncDelegate
#include <massive/munit/async/AsyncDelegate.h>
#endif
#ifndef INCLUDED_massive_munit_async_IAsyncDelegateObserver
#include <massive/munit/async/IAsyncDelegateObserver.h>
#endif
#ifndef INCLUDED_massive_munit_util_Timer
#include <massive/munit/util/Timer.h>
#endif
namespace massive{
namespace munit{
namespace async{

Void AsyncDelegate_obj::__construct(Dynamic testCase,Dynamic handler,Dynamic timeout,Dynamic info)
{
HX_STACK_FRAME("massive.munit.async.AsyncDelegate","new",0xd27a25ba,"massive.munit.async.AsyncDelegate.new","massive/munit/async/AsyncDelegate.hx",92,0x9ad95939)
HX_STACK_THIS(this)
HX_STACK_ARG(testCase,"testCase")
HX_STACK_ARG(handler,"handler")
HX_STACK_ARG(timeout,"timeout")
HX_STACK_ARG(info,"info")
{
	HX_STACK_LINE(93)
	::massive::munit::async::AsyncDelegate self = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(self,"self");
	HX_STACK_LINE(94)
	this->testCase = testCase;
	HX_STACK_LINE(95)
	this->handler = handler;
	HX_STACK_LINE(96)
	Dynamic tmp = this->responseHandler_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	Dynamic tmp1 = ::Reflect_obj::makeVarArgs(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	this->delegateHandler = tmp1;
	HX_STACK_LINE(97)
	this->info = info;
	HX_STACK_LINE(98)
	this->params = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(99)
	this->timedOut = false;
	HX_STACK_LINE(100)
	this->canceled = false;
	HX_STACK_LINE(102)
	bool tmp2 = (timeout == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(102)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(102)
	if ((tmp3)){
		HX_STACK_LINE(102)
		tmp4 = (timeout <= (int)0);
	}
	else{
		HX_STACK_LINE(102)
		tmp4 = true;
	}
	HX_STACK_LINE(102)
	if ((tmp4)){
		HX_STACK_LINE(102)
		timeout = (int)400;
	}
	HX_STACK_LINE(103)
	this->timeoutDelay = timeout;
	HX_STACK_LINE(104)
	Dynamic tmp5 = this->timeoutHandler_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(104)
	int tmp6 = this->timeoutDelay;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(104)
	::massive::munit::util::Timer tmp7 = ::massive::munit::util::Timer_obj::delay(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(104)
	this->timer = tmp7;
}
;
	return null();
}

//AsyncDelegate_obj::~AsyncDelegate_obj() { }

Dynamic AsyncDelegate_obj::__CreateEmpty() { return  new AsyncDelegate_obj; }
hx::ObjectPtr< AsyncDelegate_obj > AsyncDelegate_obj::__new(Dynamic testCase,Dynamic handler,Dynamic timeout,Dynamic info)
{  hx::ObjectPtr< AsyncDelegate_obj > _result_ = new AsyncDelegate_obj();
	_result_->__construct(testCase,handler,timeout,info);
	return _result_;}

Dynamic AsyncDelegate_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AsyncDelegate_obj > _result_ = new AsyncDelegate_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void AsyncDelegate_obj::runTest( ){
{
		HX_STACK_FRAME("massive.munit.async.AsyncDelegate","runTest",0x98bbe797,"massive.munit.async.AsyncDelegate.runTest","massive/munit/async/AsyncDelegate.hx",112,0x9ad95939)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		Dynamic tmp = this->testCase;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		Dynamic tmp1 = this->handler;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		::Reflect_obj::callMethod(tmp,tmp1,this->params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncDelegate_obj,runTest,(void))

Void AsyncDelegate_obj::cancelTest( ){
{
		HX_STACK_FRAME("massive.munit.async.AsyncDelegate","cancelTest",0xf61e90d2,"massive.munit.async.AsyncDelegate.cancelTest","massive/munit/async/AsyncDelegate.hx",120,0x9ad95939)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		this->canceled = true;
		HX_STACK_LINE(122)
		::massive::munit::util::Timer tmp = this->timer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		tmp->stop();
		HX_STACK_LINE(123)
		::massive::munit::util::Timer tmp1 = this->deferredTimer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		if ((tmp2)){
			HX_STACK_LINE(123)
			::massive::munit::util::Timer tmp3 = this->deferredTimer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(123)
			tmp3->stop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncDelegate_obj,cancelTest,(void))

Dynamic AsyncDelegate_obj::responseHandler( cpp::ArrayBase params){
	HX_STACK_FRAME("massive.munit.async.AsyncDelegate","responseHandler",0x09155fa3,"massive.munit.async.AsyncDelegate.responseHandler","massive/munit/async/AsyncDelegate.hx",127,0x9ad95939)
	HX_STACK_THIS(this)
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(128)
	bool tmp = this->timedOut;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(128)
	if ((tmp1)){
		HX_STACK_LINE(128)
		tmp2 = this->canceled;
	}
	else{
		HX_STACK_LINE(128)
		tmp2 = true;
	}
	HX_STACK_LINE(128)
	if ((tmp2)){
		HX_STACK_LINE(128)
		return null();
	}
	HX_STACK_LINE(130)
	::massive::munit::util::Timer tmp3 = this->timer;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(130)
	tmp3->stop();
	HX_STACK_LINE(132)
	::massive::munit::util::Timer tmp4 = this->deferredTimer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(132)
	bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(132)
	if ((tmp5)){
		HX_STACK_LINE(132)
		::massive::munit::util::Timer tmp6 = this->deferredTimer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(132)
		tmp6->stop();
	}
	HX_STACK_LINE(134)
	bool tmp6 = (params == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(134)
	if ((tmp6)){
		HX_STACK_LINE(134)
		params = cpp::ArrayBase_obj::__new();
	}
	HX_STACK_LINE(135)
	this->params = params;
	HX_STACK_LINE(138)
	::massive::munit::async::IAsyncDelegateObserver tmp7 = this->observer;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(138)
	bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(138)
	if ((tmp8)){
		HX_STACK_LINE(138)
		Dynamic tmp9 = this->delayActualResponseHandler_dyn();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(138)
		::massive::munit::util::Timer_obj::delay(tmp9,(int)1);
	}
	HX_STACK_LINE(140)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncDelegate_obj,responseHandler,return )

Void AsyncDelegate_obj::delayActualResponseHandler( ){
{
		HX_STACK_FRAME("massive.munit.async.AsyncDelegate","delayActualResponseHandler",0x12ec55be,"massive.munit.async.AsyncDelegate.delayActualResponseHandler","massive/munit/async/AsyncDelegate.hx",144,0x9ad95939)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		::massive::munit::async::IAsyncDelegateObserver tmp = this->observer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(145)
		tmp->asyncResponseHandler(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(146)
		this->observer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncDelegate_obj,delayActualResponseHandler,(void))

Void AsyncDelegate_obj::timeoutHandler( ){
{
		HX_STACK_FRAME("massive.munit.async.AsyncDelegate","timeoutHandler",0xcfad180f,"massive.munit.async.AsyncDelegate.timeoutHandler","massive/munit/async/AsyncDelegate.hx",155,0x9ad95939)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		this->actualTimeoutHandler();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncDelegate_obj,timeoutHandler,(void))

Void AsyncDelegate_obj::actualTimeoutHandler( ){
{
		HX_STACK_FRAME("massive.munit.async.AsyncDelegate","actualTimeoutHandler",0x6491c3bd,"massive.munit.async.AsyncDelegate.actualTimeoutHandler","massive/munit/async/AsyncDelegate.hx",160,0x9ad95939)
		HX_STACK_THIS(this)
		HX_STACK_LINE(161)
		this->deferredTimer = null();
		HX_STACK_LINE(162)
		this->handler = null();
		HX_STACK_LINE(163)
		this->delegateHandler = null();
		HX_STACK_LINE(164)
		this->timedOut = true;
		HX_STACK_LINE(165)
		::massive::munit::async::IAsyncDelegateObserver tmp = this->observer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		if ((tmp1)){
			HX_STACK_LINE(167)
			::massive::munit::async::IAsyncDelegateObserver tmp2 = this->observer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(167)
			tmp2->asyncTimeoutHandler(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(168)
			this->observer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncDelegate_obj,actualTimeoutHandler,(void))

int AsyncDelegate_obj::DEFAULT_TIMEOUT;


AsyncDelegate_obj::AsyncDelegate_obj()
{
}

void AsyncDelegate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AsyncDelegate);
	HX_MARK_MEMBER_NAME(observer,"observer");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(delegateHandler,"delegateHandler");
	HX_MARK_MEMBER_NAME(timeoutDelay,"timeoutDelay");
	HX_MARK_MEMBER_NAME(timedOut,"timedOut");
	HX_MARK_MEMBER_NAME(testCase,"testCase");
	HX_MARK_MEMBER_NAME(handler,"handler");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(deferredTimer,"deferredTimer");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_END_CLASS();
}

void AsyncDelegate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(observer,"observer");
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(delegateHandler,"delegateHandler");
	HX_VISIT_MEMBER_NAME(timeoutDelay,"timeoutDelay");
	HX_VISIT_MEMBER_NAME(timedOut,"timedOut");
	HX_VISIT_MEMBER_NAME(testCase,"testCase");
	HX_VISIT_MEMBER_NAME(handler,"handler");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(deferredTimer,"deferredTimer");
	HX_VISIT_MEMBER_NAME(params,"params");
}

Dynamic AsyncDelegate_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return info; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return handler; }
		if (HX_FIELD_EQ(inName,"runTest") ) { return runTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"observer") ) { return observer; }
		if (HX_FIELD_EQ(inName,"timedOut") ) { return timedOut; }
		if (HX_FIELD_EQ(inName,"testCase") ) { return testCase; }
		if (HX_FIELD_EQ(inName,"canceled") ) { return canceled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cancelTest") ) { return cancelTest_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"timeoutDelay") ) { return timeoutDelay; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"deferredTimer") ) { return deferredTimer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"timeoutHandler") ) { return timeoutHandler_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"delegateHandler") ) { return delegateHandler; }
		if (HX_FIELD_EQ(inName,"responseHandler") ) { return responseHandler_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"actualTimeoutHandler") ) { return actualTimeoutHandler_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"delayActualResponseHandler") ) { return delayActualResponseHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AsyncDelegate_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::massive::munit::util::Timer >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"observer") ) { observer=inValue.Cast< ::massive::munit::async::IAsyncDelegateObserver >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timedOut") ) { timedOut=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"testCase") ) { testCase=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"timeoutDelay") ) { timeoutDelay=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"deferredTimer") ) { deferredTimer=inValue.Cast< ::massive::munit::util::Timer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"delegateHandler") ) { delegateHandler=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AsyncDelegate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("observer","\x16","\x3c","\x4e","\x26"));
	outFields->push(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"));
	outFields->push(HX_HCSTRING("delegateHandler","\x05","\x83","\x8d","\x4d"));
	outFields->push(HX_HCSTRING("timeoutDelay","\x22","\x05","\xd4","\x58"));
	outFields->push(HX_HCSTRING("timedOut","\x17","\x05","\xde","\xf7"));
	outFields->push(HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44"));
	outFields->push(HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	outFields->push(HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"));
	outFields->push(HX_HCSTRING("deferredTimer","\x26","\x00","\xba","\xd4"));
	outFields->push(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::massive::munit::async::IAsyncDelegateObserver*/ ,(int)offsetof(AsyncDelegate_obj,observer),HX_HCSTRING("observer","\x16","\x3c","\x4e","\x26")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncDelegate_obj,info),HX_HCSTRING("info","\x6e","\x38","\xbb","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncDelegate_obj,delegateHandler),HX_HCSTRING("delegateHandler","\x05","\x83","\x8d","\x4d")},
	{hx::fsInt,(int)offsetof(AsyncDelegate_obj,timeoutDelay),HX_HCSTRING("timeoutDelay","\x22","\x05","\xd4","\x58")},
	{hx::fsBool,(int)offsetof(AsyncDelegate_obj,timedOut),HX_HCSTRING("timedOut","\x17","\x05","\xde","\xf7")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncDelegate_obj,testCase),HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncDelegate_obj,handler),HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45")},
	{hx::fsObject /*::massive::munit::util::Timer*/ ,(int)offsetof(AsyncDelegate_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsBool,(int)offsetof(AsyncDelegate_obj,canceled),HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f")},
	{hx::fsObject /*::massive::munit::util::Timer*/ ,(int)offsetof(AsyncDelegate_obj,deferredTimer),HX_HCSTRING("deferredTimer","\x26","\x00","\xba","\xd4")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(AsyncDelegate_obj,params),HX_HCSTRING("params","\x46","\xfb","\x7a","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &AsyncDelegate_obj::DEFAULT_TIMEOUT,HX_HCSTRING("DEFAULT_TIMEOUT","\xa3","\xfd","\x79","\x79")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("observer","\x16","\x3c","\x4e","\x26"),
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("delegateHandler","\x05","\x83","\x8d","\x4d"),
	HX_HCSTRING("timeoutDelay","\x22","\x05","\xd4","\x58"),
	HX_HCSTRING("timedOut","\x17","\x05","\xde","\xf7"),
	HX_HCSTRING("testCase","\x22","\xa4","\xec","\x44"),
	HX_HCSTRING("handler","\xca","\xaf","\xd5","\x45"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"),
	HX_HCSTRING("deferredTimer","\x26","\x00","\xba","\xd4"),
	HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"),
	HX_HCSTRING("runTest","\x3d","\xdd","\x36","\xda"),
	HX_HCSTRING("cancelTest","\xec","\x26","\xe4","\xbb"),
	HX_HCSTRING("responseHandler","\x49","\x6b","\x97","\x26"),
	HX_HCSTRING("delayActualResponseHandler","\xd8","\x3f","\x81","\x9c"),
	HX_HCSTRING("timeoutHandler","\x29","\xc3","\x60","\x6f"),
	HX_HCSTRING("actualTimeoutHandler","\x57","\xbe","\x05","\x5c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncDelegate_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AsyncDelegate_obj::DEFAULT_TIMEOUT,"DEFAULT_TIMEOUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncDelegate_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AsyncDelegate_obj::DEFAULT_TIMEOUT,"DEFAULT_TIMEOUT");
};

#endif

hx::Class AsyncDelegate_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFAULT_TIMEOUT","\xa3","\xfd","\x79","\x79"),
	::String(null()) };

void AsyncDelegate_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.async.AsyncDelegate","\xc8","\x80","\x5a","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AsyncDelegate_obj >;
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

void AsyncDelegate_obj::__boot()
{
	DEFAULT_TIMEOUT= (int)400;
}

} // end namespace massive
} // end namespace munit
} // end namespace async
