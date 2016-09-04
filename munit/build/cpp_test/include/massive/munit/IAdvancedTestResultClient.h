#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#define INCLUDED_massive_munit_IAdvancedTestResultClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_massive_munit_ITestResultClient
#include <massive/munit/ITestResultClient.h>
#endif
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  IAdvancedTestResultClient_obj : public ::massive::munit::ITestResultClient_obj{
	public:
		typedef ::massive::munit::ITestResultClient_obj super;
		typedef IAdvancedTestResultClient_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void setCurrentTestClass( ::String className)=0;
virtual Dynamic setCurrentTestClass_dyn()=0;
};



template<typename IMPL>
class IAdvancedTestResultClient_delegate_ : public IAdvancedTestResultClient_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IAdvancedTestResultClient_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void setCurrentTestClass( ::String className) { return mDelegate->setCurrentTestClass(className);}
		Dynamic setCurrentTestClass_dyn() { return mDelegate->setCurrentTestClass_dyn();}
		Dynamic get_completionHandler( ) { return mDelegate->get_completionHandler();}
		Dynamic get_completionHandler_dyn() { return mDelegate->get_completionHandler_dyn();}
		Dynamic set_completionHandler( Dynamic value) { return mDelegate->set_completionHandler(value);}
		Dynamic set_completionHandler_dyn() { return mDelegate->set_completionHandler_dyn();}
		Void addPass( ::massive::munit::TestResult result) { return mDelegate->addPass(result);}
		Dynamic addPass_dyn() { return mDelegate->addPass_dyn();}
		Void addFail( ::massive::munit::TestResult result) { return mDelegate->addFail(result);}
		Dynamic addFail_dyn() { return mDelegate->addFail_dyn();}
		Void addError( ::massive::munit::TestResult result) { return mDelegate->addError(result);}
		Dynamic addError_dyn() { return mDelegate->addError_dyn();}
		Void addIgnore( ::massive::munit::TestResult result) { return mDelegate->addIgnore(result);}
		Dynamic addIgnore_dyn() { return mDelegate->addIgnore_dyn();}
		Dynamic reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time) { return mDelegate->reportFinalStatistics(testCount,passCount,failCount,errorCount,ignoreCount,time);}
		Dynamic reportFinalStatistics_dyn() { return mDelegate->reportFinalStatistics_dyn();}
};

} // end namespace massive
} // end namespace munit

#endif /* INCLUDED_massive_munit_IAdvancedTestResultClient */ 
