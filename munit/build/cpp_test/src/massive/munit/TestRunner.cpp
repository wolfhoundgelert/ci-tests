#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_massive_haxe_Exception
#include <massive/haxe/Exception.h>
#endif
#ifndef INCLUDED_massive_munit_Assert
#include <massive/munit/Assert.h>
#endif
#ifndef INCLUDED_massive_munit_AssertionException
#include <massive/munit/AssertionException.h>
#endif
#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
#ifndef INCLUDED_massive_munit_MUnitException
#include <massive/munit/MUnitException.h>
#endif
#ifndef INCLUDED_massive_munit_TestClassHelper
#include <massive/munit/TestClassHelper.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
#ifndef INCLUDED_massive_munit_TestRunner
#include <massive/munit/TestRunner.h>
#endif
#ifndef INCLUDED_massive_munit_TestSuite
#include <massive/munit/TestSuite.h>
#endif
#ifndef INCLUDED_massive_munit_UnhandledException
#include <massive/munit/UnhandledException.h>
#endif
#ifndef INCLUDED_massive_munit_async_AsyncDelegate
#include <massive/munit/async/AsyncDelegate.h>
#endif
#ifndef INCLUDED_massive_munit_async_AsyncFactory
#include <massive/munit/async/AsyncFactory.h>
#endif
#ifndef INCLUDED_massive_munit_async_AsyncTimeoutException
#include <massive/munit/async/AsyncTimeoutException.h>
#endif
#ifndef INCLUDED_massive_munit_async_IAsyncDelegateObserver
#include <massive/munit/async/IAsyncDelegateObserver.h>
#endif
#ifndef INCLUDED_massive_munit_async_MissingAsyncDelegateException
#include <massive/munit/async/MissingAsyncDelegateException.h>
#endif
#ifndef INCLUDED_massive_munit_util_Timer
#include <massive/munit/util/Timer.h>
#endif
#ifndef INCLUDED_org_hamcrest_AssertionException
#include <org/hamcrest/AssertionException.h>
#endif
#ifndef INCLUDED_org_hamcrest_Exception
#include <org/hamcrest/Exception.h>
#endif
namespace massive{
namespace munit{

Void TestRunner_obj::__construct(::massive::munit::ITestResultClient resultClient)
{
HX_STACK_FRAME("massive.munit.TestRunner","new",0x95fc899b,"massive.munit.TestRunner.new","massive/munit/TestRunner.hx",146,0x7b3fda33)
HX_STACK_THIS(this)
HX_STACK_ARG(resultClient,"resultClient")
{
	HX_STACK_LINE(147)
	this->clients = Array_obj< ::massive::munit::ITestResultClient >::__new();
	HX_STACK_LINE(148)
	::massive::munit::ITestResultClient tmp = resultClient;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	this->addResultClient(tmp);
	HX_STACK_LINE(149)
	::massive::munit::async::AsyncFactory tmp1 = this->createAsyncFactory();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	this->set_asyncFactory(tmp1);
	HX_STACK_LINE(150)
	this->running = false;
	HX_STACK_LINE(155)
	this->isDebug = false;
}
;
	return null();
}

//TestRunner_obj::~TestRunner_obj() { }

Dynamic TestRunner_obj::__CreateEmpty() { return  new TestRunner_obj; }
hx::ObjectPtr< TestRunner_obj > TestRunner_obj::__new(::massive::munit::ITestResultClient resultClient)
{  hx::ObjectPtr< TestRunner_obj > _result_ = new TestRunner_obj();
	_result_->__construct(resultClient);
	return _result_;}

Dynamic TestRunner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestRunner_obj > _result_ = new TestRunner_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *TestRunner_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::massive::munit::async::IAsyncDelegateObserver_obj)) return operator ::massive::munit::async::IAsyncDelegateObserver_obj *();
	return super::__ToInterface(inType);
}

TestRunner_obj::operator ::massive::munit::async::IAsyncDelegateObserver_obj *()
	{ return new ::massive::munit::async::IAsyncDelegateObserver_delegate_< TestRunner_obj >(this); }
int TestRunner_obj::get_clientCount( ){
	HX_STACK_FRAME("massive.munit.TestRunner","get_clientCount",0x892197d6,"massive.munit.TestRunner.get_clientCount","massive/munit/TestRunner.hx",103,0x7b3fda33)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	int tmp = this->clients->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TestRunner_obj,get_clientCount,return )

::massive::munit::async::AsyncFactory TestRunner_obj::set_asyncFactory( ::massive::munit::async::AsyncFactory value){
	HX_STACK_FRAME("massive.munit.TestRunner","set_asyncFactory",0x63769cd0,"massive.munit.TestRunner.set_asyncFactory","massive/munit/TestRunner.hx",125,0x7b3fda33)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(126)
	::massive::munit::async::AsyncFactory tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	::massive::munit::async::AsyncFactory tmp1 = this->asyncFactory;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(126)
	if ((tmp2)){
		HX_STACK_LINE(126)
		::massive::munit::async::AsyncFactory tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		return tmp3;
	}
	HX_STACK_LINE(127)
	bool tmp3 = this->running;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(127)
	if ((tmp3)){
		HX_STACK_LINE(127)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("TestRunner.hx","\xfc","\x9b","\x2a","\xdb"),127,HX_HCSTRING("massive.munit.TestRunner","\x29","\x20","\xc3","\x6b"),HX_HCSTRING("set_asyncFactory","\xeb","\xbe","\xec","\x42"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		::massive::munit::MUnitException tmp5 = ::massive::munit::MUnitException_obj::__new(HX_HCSTRING("Can't change AsyncFactory while tests are running","\xa0","\x86","\x8b","\x78"),tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(127)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(128)
	value->observer = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(129)
	::massive::munit::async::AsyncFactory tmp4 = this->asyncFactory = value;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(129)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,set_asyncFactory,return )

Void TestRunner_obj::addResultClient( ::massive::munit::ITestResultClient resultClient){
{
		HX_STACK_FRAME("massive.munit.TestRunner","addResultClient",0x46b4bc84,"massive.munit.TestRunner.addResultClient","massive/munit/TestRunner.hx",165,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resultClient,"resultClient")
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(166)
			Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(166)
			while((true)){
				HX_STACK_LINE(166)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(166)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(166)
				if ((tmp1)){
					HX_STACK_LINE(166)
					break;
				}
				HX_STACK_LINE(166)
				::massive::munit::ITestResultClient tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(166)
				::massive::munit::ITestResultClient client = tmp2;		HX_STACK_VAR(client,"client");
				HX_STACK_LINE(166)
				++(_g);
				HX_STACK_LINE(166)
				bool tmp3 = (client == resultClient);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(166)
				if ((tmp3)){
					HX_STACK_LINE(166)
					return null();
				}
			}
		}
		HX_STACK_LINE(168)
		Dynamic tmp = this->clientCompletionHandler_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		resultClient->set_completionHandler(tmp);
		HX_STACK_LINE(169)
		::massive::munit::ITestResultClient tmp1 = resultClient;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		this->clients->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,addResultClient,(void))

Void TestRunner_obj::debug( Array< ::Dynamic > testSuiteClasses){
{
		HX_STACK_FRAME("massive.munit.TestRunner","debug",0xb355104e,"massive.munit.TestRunner.debug","massive/munit/TestRunner.hx",179,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testSuiteClasses,"testSuiteClasses")
		HX_STACK_LINE(180)
		this->isDebug = true;
		HX_STACK_LINE(181)
		this->run(testSuiteClasses);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,debug,(void))

Void TestRunner_obj::run( Array< ::Dynamic > testSuiteClasses){
{
		HX_STACK_FRAME("massive.munit.TestRunner","run",0x95ffa086,"massive.munit.TestRunner.run","massive/munit/TestRunner.hx",190,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testSuiteClasses,"testSuiteClasses")
		HX_STACK_LINE(191)
		bool tmp = this->running;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		if ((tmp)){
			HX_STACK_LINE(191)
			return null();
		}
		HX_STACK_LINE(193)
		this->running = true;
		HX_STACK_LINE(194)
		this->asyncPending = false;
		HX_STACK_LINE(195)
		this->asyncDelegate = null();
		HX_STACK_LINE(196)
		this->testCount = (int)0;
		HX_STACK_LINE(197)
		this->failCount = (int)0;
		HX_STACK_LINE(198)
		this->errorCount = (int)0;
		HX_STACK_LINE(199)
		this->passCount = (int)0;
		HX_STACK_LINE(200)
		this->ignoreCount = (int)0;
		HX_STACK_LINE(201)
		this->suiteIndex = (int)0;
		HX_STACK_LINE(202)
		this->clientCompleteCount = (int)0;
		HX_STACK_LINE(203)
		::massive::munit::Assert_obj::assertionCount = (int)0;
		HX_STACK_LINE(204)
		this->emptyParams = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(205)
		this->testSuites = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(206)
		Float tmp1 = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		this->startTime = tmp1;
		HX_STACK_LINE(208)
		{
			HX_STACK_LINE(208)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(208)
			while((true)){
				HX_STACK_LINE(208)
				bool tmp2 = (_g < testSuiteClasses->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(208)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(208)
				if ((tmp3)){
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(208)
				::hx::Class tmp4 = testSuiteClasses->__get(_g).StaticCast< ::hx::Class >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(208)
				::hx::Class suiteType = tmp4;		HX_STACK_VAR(suiteType,"suiteType");
				HX_STACK_LINE(208)
				++(_g);
				HX_STACK_LINE(210)
				::hx::Class tmp5 = suiteType;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(210)
				::massive::munit::TestSuite tmp6 = ::Type_obj::createInstance(tmp5,Dynamic( Array_obj<Dynamic>::__new() ));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(210)
				this->testSuites->push(tmp6);
			}
		}
		HX_STACK_LINE(214)
		::massive::munit::TestRunner self = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(self,"self");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::massive::munit::TestRunner,self)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","massive/munit/TestRunner.hx",216,0x7b3fda33)
			{
				HX_STACK_LINE(217)
				self->execute();
				HX_STACK_LINE(218)
				while((true)){
					HX_STACK_LINE(218)
					bool tmp2 = self->running;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(218)
					bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(218)
					if ((tmp3)){
						HX_STACK_LINE(218)
						break;
					}
					HX_STACK_LINE(220)
					::Sys_obj::sleep(((Float).2));
				}
				HX_STACK_LINE(222)
				Dynamic tmp2 = ::cpp::vm::Thread_obj::readMessage(true);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(222)
				::cpp::vm::Thread mainThead = tmp2;		HX_STACK_VAR(mainThead,"mainThead");
				HX_STACK_LINE(223)
				mainThead->sendMessage(HX_HCSTRING("done","\x82","\xf0","\x6d","\x42"));
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(215)
		::cpp::vm::Thread tmp2 = ::cpp::vm::Thread_obj::create( Dynamic(new _Function_1_1(self)));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		::cpp::vm::Thread runThread = tmp2;		HX_STACK_VAR(runThread,"runThread");
		HX_STACK_LINE(226)
		::cpp::vm::Thread tmp3 = ::cpp::vm::Thread_obj::current();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		runThread->sendMessage(tmp3);
		HX_STACK_LINE(227)
		::cpp::vm::Thread_obj::readMessage(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,run,(void))

Void TestRunner_obj::execute( ){
{
		HX_STACK_FRAME("massive.munit.TestRunner","execute",0x6faa7cf0,"massive.munit.TestRunner.execute","massive/munit/TestRunner.hx",234,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			int tmp = this->suiteIndex;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(235)
			int _g1 = tmp;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(235)
			int tmp1 = this->testSuites->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(235)
			int _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			while((true)){
				HX_STACK_LINE(235)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(235)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(235)
				if ((tmp3)){
					HX_STACK_LINE(235)
					break;
				}
				HX_STACK_LINE(235)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(235)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(237)
				::massive::munit::TestSuite tmp5 = this->testSuites->__get(i).StaticCast< ::massive::munit::TestSuite >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(237)
				::massive::munit::TestSuite suite = tmp5;		HX_STACK_VAR(suite,"suite");
				HX_STACK_LINE(238)
				::massive::munit::TestSuite tmp6 = suite;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(238)
				for(::cpp::FastIterator_obj< ::hx::Class > *__it = ::cpp::CreateFastIterator< ::hx::Class >(tmp6);  __it->hasNext(); ){
					::hx::Class testClass = __it->next();
					{
						HX_STACK_LINE(240)
						::massive::munit::TestClassHelper tmp7 = this->activeHelper;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(240)
						bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(240)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(240)
						bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(240)
						if ((tmp9)){
							HX_STACK_LINE(240)
							::massive::munit::TestClassHelper tmp11 = this->activeHelper;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(240)
							::massive::munit::TestClassHelper tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(240)
							::hx::Class tmp13 = tmp12->type;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(240)
							::hx::Class tmp14 = testClass;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(240)
							tmp10 = (tmp13 != tmp14);
						}
						else{
							HX_STACK_LINE(240)
							tmp10 = true;
						}
						HX_STACK_LINE(240)
						if ((tmp10)){
							HX_STACK_LINE(242)
							::hx::Class tmp11 = testClass;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(242)
							bool tmp12 = this->isDebug;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(242)
							::massive::munit::TestClassHelper tmp13 = ::massive::munit::TestClassHelper_obj::__new(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(242)
							this->activeHelper = tmp13;
							HX_STACK_LINE(243)
							::massive::munit::TestClassHelper tmp14 = this->activeHelper;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(243)
							Dynamic tmp15 = tmp14->test;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(243)
							::massive::munit::TestClassHelper tmp16 = this->activeHelper;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(243)
							Dynamic tmp17 = tmp16->beforeClass;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(243)
							::Reflect_obj::callMethod(tmp15,tmp17,this->emptyParams);
						}
						HX_STACK_LINE(245)
						this->executeTestCases();
						HX_STACK_LINE(246)
						bool tmp11 = this->asyncPending;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(246)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(246)
						if ((tmp12)){
							HX_STACK_LINE(248)
							::massive::munit::TestClassHelper tmp13 = this->activeHelper;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(248)
							Dynamic tmp14 = tmp13->test;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(248)
							::massive::munit::TestClassHelper tmp15 = this->activeHelper;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(248)
							Dynamic tmp16 = tmp15->afterClass;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(248)
							::Reflect_obj::callMethod(tmp14,tmp16,this->emptyParams);
						}
						else{
							HX_STACK_LINE(252)
							suite->repeat();
							HX_STACK_LINE(253)
							this->suiteIndex = i;
							HX_STACK_LINE(254)
							return null();
						}
					}
;
				}
				HX_STACK_LINE(257)
				this->testSuites[i] = null();
			}
		}
		HX_STACK_LINE(260)
		bool tmp = this->asyncPending;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(260)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(260)
		if ((tmp1)){
			HX_STACK_LINE(262)
			Float tmp2 = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(262)
			Float tmp3 = this->startTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(262)
			Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(262)
			Float time = tmp4;		HX_STACK_VAR(time,"time");
			HX_STACK_LINE(263)
			{
				HX_STACK_LINE(263)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(263)
				Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(263)
				while((true)){
					HX_STACK_LINE(263)
					bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(263)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(263)
					if ((tmp6)){
						HX_STACK_LINE(263)
						break;
					}
					HX_STACK_LINE(263)
					::massive::munit::ITestResultClient tmp7 = _g1->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(263)
					::massive::munit::ITestResultClient client = tmp7;		HX_STACK_VAR(client,"client");
					HX_STACK_LINE(263)
					++(_g);
					HX_STACK_LINE(265)
					::massive::munit::ITestResultClient tmp8 = client;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(265)
					bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::massive::munit::IAdvancedTestResultClient >());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(265)
					if ((tmp9)){
						HX_STACK_LINE(267)
						::massive::munit::IAdvancedTestResultClient cl = ((::massive::munit::IAdvancedTestResultClient)(client));		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(268)
						cl->setCurrentTestClass(null());
					}
					HX_STACK_LINE(270)
					int tmp10 = this->testCount;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(270)
					int tmp11 = this->passCount;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(270)
					int tmp12 = this->failCount;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(270)
					int tmp13 = this->errorCount;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(270)
					int tmp14 = this->ignoreCount;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(270)
					Float tmp15 = time;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(270)
					client->reportFinalStatistics(tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestRunner_obj,execute,(void))

Void TestRunner_obj::executeTestCases( ){
{
		HX_STACK_FRAME("massive.munit.TestRunner","executeTestCases",0x4eec3f01,"massive.munit.TestRunner.executeTestCases","massive/munit/TestRunner.hx",276,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_LINE(277)
		{
			HX_STACK_LINE(277)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(277)
			Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(277)
			while((true)){
				HX_STACK_LINE(277)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(277)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(277)
				if ((tmp1)){
					HX_STACK_LINE(277)
					break;
				}
				HX_STACK_LINE(277)
				::massive::munit::ITestResultClient tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(277)
				::massive::munit::ITestResultClient c = tmp2;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(277)
				++(_g);
				HX_STACK_LINE(279)
				::massive::munit::ITestResultClient tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(279)
				bool tmp4 = ::Std_obj::is(tmp3,hx::ClassOf< ::massive::munit::IAdvancedTestResultClient >());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(279)
				if ((tmp4)){
					HX_STACK_LINE(281)
					::massive::munit::TestClassHelper tmp5 = this->activeHelper;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(281)
					bool tmp6 = tmp5->hasNext();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(281)
					if ((tmp6)){
						HX_STACK_LINE(283)
						::massive::munit::IAdvancedTestResultClient cl = ((::massive::munit::IAdvancedTestResultClient)(c));		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(284)
						::massive::munit::TestClassHelper tmp7 = this->activeHelper;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(284)
						::String tmp8 = tmp7->className;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(284)
						cl->setCurrentTestClass(tmp8);
					}
				}
			}
		}
		HX_STACK_LINE(288)
		::massive::munit::TestClassHelper tmp = this->activeHelper;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(288)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp);  __it->hasNext(); ){
			Dynamic testCaseData = __it->next();
			{
				HX_STACK_LINE(290)
				bool tmp1 = testCaseData->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic )->__Field(HX_HCSTRING("ignore","\x12","\xb9","\xc8","\x92"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(290)
				if ((tmp1)){
					HX_STACK_LINE(292)
					(this->ignoreCount)++;
					HX_STACK_LINE(293)
					{
						HX_STACK_LINE(293)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(293)
						Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(293)
						while((true)){
							HX_STACK_LINE(293)
							bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(293)
							bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(293)
							if ((tmp3)){
								HX_STACK_LINE(293)
								break;
							}
							HX_STACK_LINE(293)
							::massive::munit::ITestResultClient tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(293)
							::massive::munit::ITestResultClient c = tmp4;		HX_STACK_VAR(c,"c");
							HX_STACK_LINE(293)
							++(_g);
							HX_STACK_LINE(294)
							::massive::munit::TestResult tmp5 = ((::massive::munit::TestResult)(testCaseData->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic )));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(294)
							c->addIgnore(tmp5);
						}
					}
				}
				else{
					HX_STACK_LINE(298)
					(this->testCount)++;
					HX_STACK_LINE(299)
					::massive::munit::TestClassHelper tmp2 = this->activeHelper;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(299)
					Dynamic tmp3 = tmp2->test;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(299)
					::massive::munit::TestClassHelper tmp4 = this->activeHelper;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(299)
					Dynamic tmp5 = tmp4->before;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(299)
					::Reflect_obj::callMethod(tmp3,tmp5,this->emptyParams);
					HX_STACK_LINE(300)
					Float tmp6 = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(300)
					this->testStartTime = tmp6;
					HX_STACK_LINE(301)
					Dynamic tmp7 = testCaseData;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(301)
					bool tmp8 = testCaseData->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic )->__Field(HX_HCSTRING("async","\x3c","\xff","\x3d","\x26"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(301)
					this->executeTestCase(tmp7,tmp8);
					HX_STACK_LINE(303)
					bool tmp9 = this->asyncPending;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(303)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(303)
					if ((tmp10)){
						HX_STACK_LINE(304)
						::massive::munit::TestClassHelper tmp11 = this->activeHelper;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(304)
						Dynamic tmp12 = tmp11->test;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(304)
						::massive::munit::TestClassHelper tmp13 = this->activeHelper;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(304)
						Dynamic tmp14 = tmp13->after;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(304)
						::Reflect_obj::callMethod(tmp12,tmp14,this->emptyParams);
					}
					else{
						HX_STACK_LINE(306)
						break;
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestRunner_obj,executeTestCases,(void))

Void TestRunner_obj::executeTestCase( Dynamic testCaseData,bool async){
{
		HX_STACK_FRAME("massive.munit.TestRunner","executeTestCase",0xf9774d32,"massive.munit.TestRunner.executeTestCase","massive/munit/TestRunner.hx",312,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(testCaseData,"testCaseData")
		HX_STACK_ARG(async,"async")
		HX_STACK_LINE(313)
		::massive::munit::TestResult result = testCaseData->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic );		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(314)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(316)
			int tmp = ::massive::munit::Assert_obj::assertionCount;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(316)
			int assertionCount = tmp;		HX_STACK_VAR(assertionCount,"assertionCount");
			HX_STACK_LINE(317)
			bool tmp1 = async;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(317)
			if ((tmp1)){
				HX_STACK_LINE(319)
				::massive::munit::async::AsyncFactory tmp2 = this->asyncFactory;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(319)
				::Reflect_obj::callMethod(testCaseData->__Field(HX_HCSTRING("scope","\x94","\x71","\xd9","\x78"), hx::paccDynamic ),testCaseData->__Field(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"), hx::paccDynamic ),cpp::ArrayBase_obj::__new().Add(tmp2));
				HX_STACK_LINE(321)
				::massive::munit::async::AsyncDelegate tmp3 = this->asyncDelegate;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(321)
				bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(321)
				if ((tmp4)){
					HX_STACK_LINE(323)
					::String tmp5 = result->get_location();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(323)
					::String tmp6 = (HX_HCSTRING("No AsyncDelegate was created in async test at ","\x31","\xaa","\x40","\x73") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(323)
					::massive::munit::async::MissingAsyncDelegateException tmp7 = ::massive::munit::async::MissingAsyncDelegateException_obj::__new(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(323)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(326)
				this->asyncPending = true;
			}
			else{
				HX_STACK_LINE(330)
				::Reflect_obj::callMethod(testCaseData->__Field(HX_HCSTRING("scope","\x94","\x71","\xd9","\x78"), hx::paccDynamic ),testCaseData->__Field(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"), hx::paccDynamic ),this->emptyParams);
				HX_STACK_LINE(332)
				result->passed = true;
				HX_STACK_LINE(333)
				Float tmp2 = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(333)
				Float tmp3 = this->testStartTime;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(333)
				Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(333)
				result->executionTime = tmp4;
				HX_STACK_LINE(334)
				(this->passCount)++;
				HX_STACK_LINE(335)
				{
					HX_STACK_LINE(335)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(335)
					Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(335)
					while((true)){
						HX_STACK_LINE(335)
						bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(335)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(335)
						if ((tmp6)){
							HX_STACK_LINE(335)
							break;
						}
						HX_STACK_LINE(335)
						::massive::munit::ITestResultClient tmp7 = _g1->__get(_g);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(335)
						::massive::munit::ITestResultClient c = tmp7;		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(335)
						++(_g);
						HX_STACK_LINE(336)
						::massive::munit::TestResult tmp8 = result;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(336)
						c->addPass(tmp8);
					}
				}
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(341)
					bool tmp = async;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(341)
					bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(341)
					if ((tmp)){
						HX_STACK_LINE(341)
						::massive::munit::async::AsyncDelegate tmp2 = this->asyncDelegate;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(341)
						::massive::munit::async::AsyncDelegate tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(341)
						tmp1 = (tmp3 != null());
					}
					else{
						HX_STACK_LINE(341)
						tmp1 = false;
					}
					HX_STACK_LINE(341)
					if ((tmp1)){
						HX_STACK_LINE(343)
						::massive::munit::async::AsyncDelegate tmp2 = this->asyncDelegate;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(343)
						tmp2->cancelTest();
						HX_STACK_LINE(344)
						this->asyncDelegate = null();
					}
					HX_STACK_LINE(348)
					Dynamic tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(348)
					bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::org::hamcrest::AssertionException >());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(348)
					if ((tmp3)){
						HX_STACK_LINE(349)
						::massive::munit::AssertionException tmp4 = ::massive::munit::AssertionException_obj::__new(e->__Field(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"), hx::paccDynamic ),e->__Field(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(349)
						e = tmp4;
					}
					HX_STACK_LINE(352)
					Dynamic tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(352)
					bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::massive::munit::AssertionException >());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(352)
					if ((tmp5)){
						HX_STACK_LINE(354)
						Float tmp6 = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(354)
						Float tmp7 = this->testStartTime;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(354)
						Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(354)
						result->executionTime = tmp8;
						HX_STACK_LINE(355)
						result->failure = e;
						HX_STACK_LINE(356)
						(this->failCount)++;
						HX_STACK_LINE(357)
						{
							HX_STACK_LINE(357)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(357)
							Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(357)
							while((true)){
								HX_STACK_LINE(357)
								bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(357)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(357)
								if ((tmp10)){
									HX_STACK_LINE(357)
									break;
								}
								HX_STACK_LINE(357)
								::massive::munit::ITestResultClient tmp11 = _g1->__get(_g);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(357)
								::massive::munit::ITestResultClient c = tmp11;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(357)
								++(_g);
								HX_STACK_LINE(358)
								::massive::munit::TestResult tmp12 = result;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(358)
								c->addFail(tmp12);
							}
						}
					}
					else{
						HX_STACK_LINE(362)
						Float tmp6 = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(362)
						Float tmp7 = this->testStartTime;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(362)
						Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(362)
						result->executionTime = tmp8;
						HX_STACK_LINE(363)
						Dynamic tmp9 = e;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(363)
						bool tmp10 = ::Std_obj::is(tmp9,hx::ClassOf< ::massive::munit::MUnitException >());		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(363)
						bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(363)
						if ((tmp11)){
							HX_STACK_LINE(364)
							Dynamic tmp12 = e;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(364)
							::String tmp13 = result->get_location();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(364)
							::massive::munit::UnhandledException tmp14 = ::massive::munit::UnhandledException_obj::__new(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(364)
							e = tmp14;
						}
						HX_STACK_LINE(366)
						result->error = e;
						HX_STACK_LINE(367)
						(this->errorCount)++;
						HX_STACK_LINE(368)
						{
							HX_STACK_LINE(368)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(368)
							Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(368)
							while((true)){
								HX_STACK_LINE(368)
								bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(368)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(368)
								if ((tmp13)){
									HX_STACK_LINE(368)
									break;
								}
								HX_STACK_LINE(368)
								::massive::munit::ITestResultClient tmp14 = _g1->__get(_g);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(368)
								::massive::munit::ITestResultClient c = tmp14;		HX_STACK_VAR(c,"c");
								HX_STACK_LINE(368)
								++(_g);
								HX_STACK_LINE(369)
								::massive::munit::TestResult tmp15 = result;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(369)
								c->addError(tmp15);
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TestRunner_obj,executeTestCase,(void))

Void TestRunner_obj::clientCompletionHandler( ::massive::munit::ITestResultClient resultClient){
{
		HX_STACK_FRAME("massive.munit.TestRunner","clientCompletionHandler",0x510871fe,"massive.munit.TestRunner.clientCompletionHandler","massive/munit/TestRunner.hx",376,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resultClient,"resultClient")
		HX_STACK_LINE(377)
		int tmp = ++(this->clientCompleteCount);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(377)
		int tmp1 = this->clients->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(377)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(377)
		if ((tmp2)){
			HX_STACK_LINE(379)
			Dynamic tmp3 = this->completionHandler_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(379)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(379)
			if ((tmp4)){
				HX_STACK_LINE(381)
				int tmp5 = this->passCount;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(381)
				int tmp6 = this->testCount;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(381)
				bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(381)
				bool successful = tmp7;		HX_STACK_VAR(successful,"successful");
				HX_STACK_LINE(382)
				Dynamic tmp8 = this->completionHandler_dyn();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(382)
				Dynamic handler = tmp8;		HX_STACK_VAR(handler,"handler");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Dynamic,handler,bool,successful)
				int __ArgCount() const { return 0; }
				Void run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","massive/munit/TestRunner.hx",384,0x7b3fda33)
					{
						HX_STACK_LINE(384)
						handler(successful);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(384)
				::massive::munit::util::Timer_obj::delay( Dynamic(new _Function_3_1(handler,successful)),(int)10);
			}
			HX_STACK_LINE(386)
			this->running = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,clientCompletionHandler,(void))

Void TestRunner_obj::asyncResponseHandler( ::massive::munit::async::AsyncDelegate delegate){
{
		HX_STACK_FRAME("massive.munit.TestRunner","asyncResponseHandler",0x97c52bd2,"massive.munit.TestRunner.asyncResponseHandler","massive/munit/TestRunner.hx",396,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delegate,"delegate")
		HX_STACK_LINE(397)
		::massive::munit::TestClassHelper tmp = this->activeHelper;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(397)
		Dynamic tmp1 = tmp->current();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(397)
		Dynamic testCaseData = tmp1;		HX_STACK_VAR(testCaseData,"testCaseData");
		HX_STACK_LINE(398)
		testCaseData->__FieldRef(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c")) = delegate->runTest_dyn();
		HX_STACK_LINE(399)
		testCaseData->__FieldRef(HX_HCSTRING("scope","\x94","\x71","\xd9","\x78")) = delegate;
		HX_STACK_LINE(401)
		this->asyncPending = false;
		HX_STACK_LINE(402)
		this->asyncDelegate = null();
		HX_STACK_LINE(403)
		Dynamic tmp2 = testCaseData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(403)
		this->executeTestCase(tmp2,false);
		HX_STACK_LINE(404)
		::massive::munit::TestClassHelper tmp3 = this->activeHelper;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(404)
		Dynamic tmp4 = tmp3->test;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(404)
		::massive::munit::TestClassHelper tmp5 = this->activeHelper;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(404)
		Dynamic tmp6 = tmp5->after;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(404)
		::Reflect_obj::callMethod(tmp4,tmp6,this->emptyParams);
		HX_STACK_LINE(405)
		this->execute();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,asyncResponseHandler,(void))

Void TestRunner_obj::asyncTimeoutHandler( ::massive::munit::async::AsyncDelegate delegate){
{
		HX_STACK_FRAME("massive.munit.TestRunner","asyncTimeoutHandler",0x266a26c0,"massive.munit.TestRunner.asyncTimeoutHandler","massive/munit/TestRunner.hx",415,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delegate,"delegate")
		HX_STACK_LINE(416)
		::massive::munit::TestClassHelper tmp = this->activeHelper;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(416)
		Dynamic tmp1 = tmp->current();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(416)
		Dynamic testCaseData = tmp1;		HX_STACK_VAR(testCaseData,"testCaseData");
		HX_STACK_LINE(417)
		::massive::munit::TestResult result = testCaseData->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic );		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(418)
		Float tmp2 = ::massive::munit::util::Timer_obj::stamp();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(418)
		Float tmp3 = this->testStartTime;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(418)
		Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(418)
		result->executionTime = tmp4;
		HX_STACK_LINE(419)
		::massive::munit::async::AsyncTimeoutException tmp5 = ::massive::munit::async::AsyncTimeoutException_obj::__new(HX_HCSTRING("","\x00","\x00","\x00","\x00"),delegate->info);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(419)
		result->error = tmp5;
		HX_STACK_LINE(421)
		this->asyncPending = false;
		HX_STACK_LINE(422)
		this->asyncDelegate = null();
		HX_STACK_LINE(423)
		(this->errorCount)++;
		HX_STACK_LINE(424)
		{
			HX_STACK_LINE(424)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(424)
			Array< ::massive::munit::ITestResultClient > _g1 = this->clients;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(424)
			while((true)){
				HX_STACK_LINE(424)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(424)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(424)
				if ((tmp7)){
					HX_STACK_LINE(424)
					break;
				}
				HX_STACK_LINE(424)
				::massive::munit::ITestResultClient tmp8 = _g1->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(424)
				::massive::munit::ITestResultClient c = tmp8;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(424)
				++(_g);
				HX_STACK_LINE(424)
				::massive::munit::TestResult tmp9 = result;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(424)
				c->addError(tmp9);
			}
		}
		HX_STACK_LINE(425)
		::massive::munit::TestClassHelper tmp6 = this->activeHelper;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(425)
		Dynamic tmp7 = tmp6->test;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(425)
		::massive::munit::TestClassHelper tmp8 = this->activeHelper;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(425)
		Dynamic tmp9 = tmp8->after;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(425)
		::Reflect_obj::callMethod(tmp7,tmp9,this->emptyParams);
		HX_STACK_LINE(426)
		this->execute();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,asyncTimeoutHandler,(void))

Void TestRunner_obj::asyncDelegateCreatedHandler( ::massive::munit::async::AsyncDelegate delegate){
{
		HX_STACK_FRAME("massive.munit.TestRunner","asyncDelegateCreatedHandler",0x43465b7e,"massive.munit.TestRunner.asyncDelegateCreatedHandler","massive/munit/TestRunner.hx",431,0x7b3fda33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(delegate,"delegate")
		HX_STACK_LINE(431)
		this->asyncDelegate = delegate;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestRunner_obj,asyncDelegateCreatedHandler,(void))

::massive::munit::async::AsyncFactory TestRunner_obj::createAsyncFactory( ){
	HX_STACK_FRAME("massive.munit.TestRunner","createAsyncFactory",0x9f53032f,"massive.munit.TestRunner.createAsyncFactory","massive/munit/TestRunner.hx",435,0x7b3fda33)
	HX_STACK_THIS(this)
	HX_STACK_LINE(436)
	::massive::munit::async::AsyncFactory tmp = ::massive::munit::async::AsyncFactory_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(436)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TestRunner_obj,createAsyncFactory,return )


TestRunner_obj::TestRunner_obj()
{
}

void TestRunner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestRunner);
	HX_MARK_MEMBER_NAME(completionHandler,"completionHandler");
	HX_MARK_MEMBER_NAME(clientCount,"clientCount");
	HX_MARK_MEMBER_NAME(running,"running");
	HX_MARK_MEMBER_NAME(testCount,"testCount");
	HX_MARK_MEMBER_NAME(failCount,"failCount");
	HX_MARK_MEMBER_NAME(errorCount,"errorCount");
	HX_MARK_MEMBER_NAME(passCount,"passCount");
	HX_MARK_MEMBER_NAME(ignoreCount,"ignoreCount");
	HX_MARK_MEMBER_NAME(clientCompleteCount,"clientCompleteCount");
	HX_MARK_MEMBER_NAME(clients,"clients");
	HX_MARK_MEMBER_NAME(activeHelper,"activeHelper");
	HX_MARK_MEMBER_NAME(testSuites,"testSuites");
	HX_MARK_MEMBER_NAME(asyncPending,"asyncPending");
	HX_MARK_MEMBER_NAME(asyncDelegate,"asyncDelegate");
	HX_MARK_MEMBER_NAME(suiteIndex,"suiteIndex");
	HX_MARK_MEMBER_NAME(asyncFactory,"asyncFactory");
	HX_MARK_MEMBER_NAME(emptyParams,"emptyParams");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(testStartTime,"testStartTime");
	HX_MARK_MEMBER_NAME(isDebug,"isDebug");
	HX_MARK_END_CLASS();
}

void TestRunner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(completionHandler,"completionHandler");
	HX_VISIT_MEMBER_NAME(clientCount,"clientCount");
	HX_VISIT_MEMBER_NAME(running,"running");
	HX_VISIT_MEMBER_NAME(testCount,"testCount");
	HX_VISIT_MEMBER_NAME(failCount,"failCount");
	HX_VISIT_MEMBER_NAME(errorCount,"errorCount");
	HX_VISIT_MEMBER_NAME(passCount,"passCount");
	HX_VISIT_MEMBER_NAME(ignoreCount,"ignoreCount");
	HX_VISIT_MEMBER_NAME(clientCompleteCount,"clientCompleteCount");
	HX_VISIT_MEMBER_NAME(clients,"clients");
	HX_VISIT_MEMBER_NAME(activeHelper,"activeHelper");
	HX_VISIT_MEMBER_NAME(testSuites,"testSuites");
	HX_VISIT_MEMBER_NAME(asyncPending,"asyncPending");
	HX_VISIT_MEMBER_NAME(asyncDelegate,"asyncDelegate");
	HX_VISIT_MEMBER_NAME(suiteIndex,"suiteIndex");
	HX_VISIT_MEMBER_NAME(asyncFactory,"asyncFactory");
	HX_VISIT_MEMBER_NAME(emptyParams,"emptyParams");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(testStartTime,"testStartTime");
	HX_VISIT_MEMBER_NAME(isDebug,"isDebug");
}

Dynamic TestRunner_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return debug_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { return running; }
		if (HX_FIELD_EQ(inName,"clients") ) { return clients; }
		if (HX_FIELD_EQ(inName,"isDebug") ) { return isDebug; }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"testCount") ) { return testCount; }
		if (HX_FIELD_EQ(inName,"failCount") ) { return failCount; }
		if (HX_FIELD_EQ(inName,"passCount") ) { return passCount; }
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"errorCount") ) { return errorCount; }
		if (HX_FIELD_EQ(inName,"testSuites") ) { return testSuites; }
		if (HX_FIELD_EQ(inName,"suiteIndex") ) { return suiteIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clientCount") ) { return inCallProp == hx::paccAlways ? get_clientCount() : clientCount; }
		if (HX_FIELD_EQ(inName,"ignoreCount") ) { return ignoreCount; }
		if (HX_FIELD_EQ(inName,"emptyParams") ) { return emptyParams; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeHelper") ) { return activeHelper; }
		if (HX_FIELD_EQ(inName,"asyncPending") ) { return asyncPending; }
		if (HX_FIELD_EQ(inName,"asyncFactory") ) { return asyncFactory; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"asyncDelegate") ) { return asyncDelegate; }
		if (HX_FIELD_EQ(inName,"testStartTime") ) { return testStartTime; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_clientCount") ) { return get_clientCount_dyn(); }
		if (HX_FIELD_EQ(inName,"addResultClient") ) { return addResultClient_dyn(); }
		if (HX_FIELD_EQ(inName,"executeTestCase") ) { return executeTestCase_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_asyncFactory") ) { return set_asyncFactory_dyn(); }
		if (HX_FIELD_EQ(inName,"executeTestCases") ) { return executeTestCases_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { return completionHandler; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createAsyncFactory") ) { return createAsyncFactory_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"clientCompleteCount") ) { return clientCompleteCount; }
		if (HX_FIELD_EQ(inName,"asyncTimeoutHandler") ) { return asyncTimeoutHandler_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"asyncResponseHandler") ) { return asyncResponseHandler_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"clientCompletionHandler") ) { return clientCompletionHandler_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"asyncDelegateCreatedHandler") ) { return asyncDelegateCreatedHandler_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TestRunner_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clients") ) { clients=inValue.Cast< Array< ::massive::munit::ITestResultClient > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDebug") ) { isDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"testCount") ) { testCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"failCount") ) { failCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"passCount") ) { passCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"errorCount") ) { errorCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"testSuites") ) { testSuites=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"suiteIndex") ) { suiteIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clientCount") ) { clientCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreCount") ) { ignoreCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emptyParams") ) { emptyParams=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"activeHelper") ) { activeHelper=inValue.Cast< ::massive::munit::TestClassHelper >(); return inValue; }
		if (HX_FIELD_EQ(inName,"asyncPending") ) { asyncPending=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"asyncFactory") ) { if (inCallProp == hx::paccAlways) return set_asyncFactory(inValue);asyncFactory=inValue.Cast< ::massive::munit::async::AsyncFactory >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"asyncDelegate") ) { asyncDelegate=inValue.Cast< ::massive::munit::async::AsyncDelegate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"testStartTime") ) { testStartTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"completionHandler") ) { completionHandler=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"clientCompleteCount") ) { clientCompleteCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TestRunner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("clientCount","\x84","\xba","\x88","\x28"));
	outFields->push(HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"));
	outFields->push(HX_HCSTRING("testCount","\x1d","\x83","\x65","\x13"));
	outFields->push(HX_HCSTRING("failCount","\x11","\x76","\xb6","\xd2"));
	outFields->push(HX_HCSTRING("errorCount","\xe7","\x33","\x67","\xbf"));
	outFields->push(HX_HCSTRING("passCount","\x3e","\xba","\x7a","\x7c"));
	outFields->push(HX_HCSTRING("ignoreCount","\x5d","\xda","\xf5","\x6d"));
	outFields->push(HX_HCSTRING("clientCompleteCount","\x0b","\x28","\xa0","\xa5"));
	outFields->push(HX_HCSTRING("clients","\xc8","\x37","\x81","\xfb"));
	outFields->push(HX_HCSTRING("activeHelper","\xd4","\xcb","\x69","\x64"));
	outFields->push(HX_HCSTRING("testSuites","\xad","\x68","\xa0","\xb7"));
	outFields->push(HX_HCSTRING("asyncPending","\x7b","\x60","\x20","\x6c"));
	outFields->push(HX_HCSTRING("asyncDelegate","\xa1","\x4e","\x2a","\x47"));
	outFields->push(HX_HCSTRING("suiteIndex","\x3a","\xf1","\x80","\xca"));
	outFields->push(HX_HCSTRING("asyncFactory","\xee","\xe4","\x0b","\xe8"));
	outFields->push(HX_HCSTRING("emptyParams","\xb3","\x91","\xa3","\xb5"));
	outFields->push(HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"));
	outFields->push(HX_HCSTRING("testStartTime","\xdd","\xc2","\x2a","\x39"));
	outFields->push(HX_HCSTRING("isDebug","\x09","\xf6","\xa4","\x73"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestRunner_obj,completionHandler),HX_HCSTRING("completionHandler","\x0e","\xe8","\xb2","\x5b")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,clientCount),HX_HCSTRING("clientCount","\x84","\xba","\x88","\x28")},
	{hx::fsBool,(int)offsetof(TestRunner_obj,running),HX_HCSTRING("running","\xff","\x6d","\x69","\xeb")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,testCount),HX_HCSTRING("testCount","\x1d","\x83","\x65","\x13")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,failCount),HX_HCSTRING("failCount","\x11","\x76","\xb6","\xd2")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,errorCount),HX_HCSTRING("errorCount","\xe7","\x33","\x67","\xbf")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,passCount),HX_HCSTRING("passCount","\x3e","\xba","\x7a","\x7c")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,ignoreCount),HX_HCSTRING("ignoreCount","\x5d","\xda","\xf5","\x6d")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,clientCompleteCount),HX_HCSTRING("clientCompleteCount","\x0b","\x28","\xa0","\xa5")},
	{hx::fsObject /*Array< ::massive::munit::ITestResultClient >*/ ,(int)offsetof(TestRunner_obj,clients),HX_HCSTRING("clients","\xc8","\x37","\x81","\xfb")},
	{hx::fsObject /*::massive::munit::TestClassHelper*/ ,(int)offsetof(TestRunner_obj,activeHelper),HX_HCSTRING("activeHelper","\xd4","\xcb","\x69","\x64")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TestRunner_obj,testSuites),HX_HCSTRING("testSuites","\xad","\x68","\xa0","\xb7")},
	{hx::fsBool,(int)offsetof(TestRunner_obj,asyncPending),HX_HCSTRING("asyncPending","\x7b","\x60","\x20","\x6c")},
	{hx::fsObject /*::massive::munit::async::AsyncDelegate*/ ,(int)offsetof(TestRunner_obj,asyncDelegate),HX_HCSTRING("asyncDelegate","\xa1","\x4e","\x2a","\x47")},
	{hx::fsInt,(int)offsetof(TestRunner_obj,suiteIndex),HX_HCSTRING("suiteIndex","\x3a","\xf1","\x80","\xca")},
	{hx::fsObject /*::massive::munit::async::AsyncFactory*/ ,(int)offsetof(TestRunner_obj,asyncFactory),HX_HCSTRING("asyncFactory","\xee","\xe4","\x0b","\xe8")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(TestRunner_obj,emptyParams),HX_HCSTRING("emptyParams","\xb3","\x91","\xa3","\xb5")},
	{hx::fsFloat,(int)offsetof(TestRunner_obj,startTime),HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05")},
	{hx::fsFloat,(int)offsetof(TestRunner_obj,testStartTime),HX_HCSTRING("testStartTime","\xdd","\xc2","\x2a","\x39")},
	{hx::fsBool,(int)offsetof(TestRunner_obj,isDebug),HX_HCSTRING("isDebug","\x09","\xf6","\xa4","\x73")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("completionHandler","\x0e","\xe8","\xb2","\x5b"),
	HX_HCSTRING("clientCount","\x84","\xba","\x88","\x28"),
	HX_HCSTRING("get_clientCount","\x1b","\x72","\x6a","\xe9"),
	HX_HCSTRING("running","\xff","\x6d","\x69","\xeb"),
	HX_HCSTRING("testCount","\x1d","\x83","\x65","\x13"),
	HX_HCSTRING("failCount","\x11","\x76","\xb6","\xd2"),
	HX_HCSTRING("errorCount","\xe7","\x33","\x67","\xbf"),
	HX_HCSTRING("passCount","\x3e","\xba","\x7a","\x7c"),
	HX_HCSTRING("ignoreCount","\x5d","\xda","\xf5","\x6d"),
	HX_HCSTRING("clientCompleteCount","\x0b","\x28","\xa0","\xa5"),
	HX_HCSTRING("clients","\xc8","\x37","\x81","\xfb"),
	HX_HCSTRING("activeHelper","\xd4","\xcb","\x69","\x64"),
	HX_HCSTRING("testSuites","\xad","\x68","\xa0","\xb7"),
	HX_HCSTRING("asyncPending","\x7b","\x60","\x20","\x6c"),
	HX_HCSTRING("asyncDelegate","\xa1","\x4e","\x2a","\x47"),
	HX_HCSTRING("suiteIndex","\x3a","\xf1","\x80","\xca"),
	HX_HCSTRING("asyncFactory","\xee","\xe4","\x0b","\xe8"),
	HX_HCSTRING("set_asyncFactory","\xeb","\xbe","\xec","\x42"),
	HX_HCSTRING("emptyParams","\xb3","\x91","\xa3","\xb5"),
	HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"),
	HX_HCSTRING("testStartTime","\xdd","\xc2","\x2a","\x39"),
	HX_HCSTRING("isDebug","\x09","\xf6","\xa4","\x73"),
	HX_HCSTRING("addResultClient","\xc9","\x96","\xfd","\xa6"),
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("execute","\x35","\x0a","\x0d","\xcc"),
	HX_HCSTRING("executeTestCases","\x1c","\x61","\x62","\x2e"),
	HX_HCSTRING("executeTestCase","\x77","\x27","\xc0","\x59"),
	HX_HCSTRING("clientCompletionHandler","\x43","\x99","\xcc","\xa7"),
	HX_HCSTRING("asyncResponseHandler","\x6d","\xf7","\xc5","\x95"),
	HX_HCSTRING("asyncTimeoutHandler","\x85","\x07","\xce","\x5f"),
	HX_HCSTRING("asyncDelegateCreatedHandler","\x43","\x09","\x50","\xa7"),
	HX_HCSTRING("createAsyncFactory","\x0a","\x22","\x2a","\xe2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestRunner_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestRunner_obj::__mClass,"__mClass");
};

#endif

hx::Class TestRunner_obj::__mClass;

void TestRunner_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.TestRunner","\x29","\x20","\xc3","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestRunner_obj >;
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
