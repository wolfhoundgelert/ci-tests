#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_massive_munit_util_Timer
#include <massive/munit/util/Timer.h>
#endif
namespace massive{
namespace munit{
namespace util{

Void Timer_obj::__construct(int time_ms)
{
HX_STACK_FRAME("massive.munit.util.Timer","new",0xa904eb52,"massive.munit.util.Timer.new","massive/munit/util/Timer.hx",77,0xdb7ac55d)
HX_STACK_THIS(this)
HX_STACK_ARG(time_ms,"time_ms")
{
	HX_STACK_LINE(94)
	::massive::munit::util::Timer me = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(me,"me");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,int,time_ms,::massive::munit::util::Timer,me)
	int __ArgCount() const { return 0; }
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","massive/munit/util/Timer.hx",95,0xdb7ac55d)
		{
			HX_STACK_LINE(95)
			int tmp = time_ms;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(95)
			me->runLoop(tmp);
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(95)
	::cpp::vm::Thread tmp = ::cpp::vm::Thread_obj::create( Dynamic(new _Function_1_1(time_ms,me)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	this->runThread = tmp;
}
;
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(int time_ms)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(time_ms);
	return _result_;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Timer_obj::stop( ){
{
		HX_STACK_FRAME("massive.munit.util.Timer","stop",0x3ea268d0,"massive.munit.util.Timer.stop","massive/munit/util/Timer.hx",100,0xdb7ac55d)
		HX_STACK_THIS(this)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","massive/munit/util/Timer.hx",121,0xdb7ac55d)
			{
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(121)
		this->run =  Dynamic(new _Function_1_1());
		HX_STACK_LINE(122)
		::cpp::vm::Thread tmp = this->runThread;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		tmp->sendMessage(HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"));
		HX_STACK_LINE(124)
		this->id = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
Void run(){
{
		HX_STACK_FRAME("massive.munit.util.Timer","run",0xa908023d,"massive.munit.util.Timer.run","massive/munit/util/Timer.hx",128,0xdb7ac55d)
		HX_STACK_THIS(this)
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Void Timer_obj::runLoop( int time_ms){
{
		HX_STACK_FRAME("massive.munit.util.Timer","runLoop",0xec333741,"massive.munit.util.Timer.runLoop","massive/munit/util/Timer.hx",132,0xdb7ac55d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(time_ms,"time_ms")
		HX_STACK_LINE(133)
		bool shouldStop = false;		HX_STACK_VAR(shouldStop,"shouldStop");
		HX_STACK_LINE(134)
		while((true)){
			HX_STACK_LINE(134)
			bool tmp = shouldStop;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(134)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(134)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(134)
			if ((tmp2)){
				HX_STACK_LINE(134)
				break;
			}
			HX_STACK_LINE(136)
			Float tmp3 = (Float(time_ms) / Float((int)1000));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(136)
			::Sys_obj::sleep(tmp3);
			HX_STACK_LINE(137)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(139)
				this->run();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic ex = __e;{
						HX_STACK_LINE(143)
						Dynamic tmp4 = ex;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(143)
						Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Timer.hx","\x39","\xa8","\xb7","\xda"),143,HX_HCSTRING("massive.munit.util.Timer","\x60","\x9a","\x7c","\xa0"),HX_HCSTRING("runLoop","\x4f","\xbb","\xf4","\xd4"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(143)
						::haxe::Log_obj::trace(tmp4,tmp5);
					}
				}
			}
			HX_STACK_LINE(146)
			Dynamic tmp4 = ::cpp::vm::Thread_obj::readMessage(false);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(146)
			::String msg = tmp4;		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(147)
			bool tmp5 = (msg == HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(147)
			if ((tmp5)){
				HX_STACK_LINE(147)
				shouldStop = true;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,runLoop,(void))

::massive::munit::util::Timer Timer_obj::delay( Dynamic f,int time_ms){
	HX_STACK_FRAME("massive.munit.util.Timer","delay",0xe28a12f5,"massive.munit.util.Timer.delay","massive/munit/util/Timer.hx",153,0xdb7ac55d)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(time_ms,"time_ms")
	HX_STACK_LINE(154)
	::massive::munit::util::Timer tmp = ::massive::munit::util::Timer_obj::__new(time_ms);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	::massive::munit::util::Timer t = tmp;		HX_STACK_VAR(t,"t");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::massive::munit::util::Timer,t,Dynamic,f)
	int __ArgCount() const { return 0; }
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","massive/munit/util/Timer.hx",156,0xdb7ac55d)
		{
			HX_STACK_LINE(157)
			t->stop();
			HX_STACK_LINE(158)
			f().Cast< Void >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(155)
	t->run =  Dynamic(new _Function_1_1(t,f));
	HX_STACK_LINE(160)
	::massive::munit::util::Timer tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(160)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )

Float Timer_obj::stamp( ){
	HX_STACK_FRAME("massive.munit.util.Timer","stamp",0x8f6eab75,"massive.munit.util.Timer.stamp","massive/munit/util/Timer.hx",168,0xdb7ac55d)
	HX_STACK_LINE(172)
	Float tmp = ::Sys_obj::time();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )


Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(runThread,"runThread");
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(runThread,"runThread");
	HX_VISIT_MEMBER_NAME(run,"run");
}

Dynamic Timer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"runLoop") ) { return runLoop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"runThread") ) { return runThread; }
	}
	return super::__Field(inName,inCallProp);
}

bool Timer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { outValue = delay_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stamp") ) { outValue = stamp_dyn(); return true;  }
	}
	return false;
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"runThread") ) { runThread=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("runThread","\x75","\xe0","\x15","\xb5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Timer_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(Timer_obj,runThread),HX_HCSTRING("runThread","\x75","\xe0","\x15","\xb5")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Timer_obj,run),HX_HCSTRING("run","\x4b","\xe7","\x56","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("runThread","\x75","\xe0","\x15","\xb5"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("runLoop","\x4f","\xbb","\xf4","\xd4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#endif

hx::Class Timer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"),
	::String(null()) };

void Timer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.util.Timer","\x60","\x9a","\x7c","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Timer_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Timer_obj >;
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
