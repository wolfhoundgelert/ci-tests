#ifndef INCLUDED_massive_munit_ICoverageTestResultClient
#define INCLUDED_massive_munit_ICoverageTestResultClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_massive_munit_IAdvancedTestResultClient
#include <massive/munit/IAdvancedTestResultClient.h>
#endif
HX_DECLARE_CLASS2(massive,munit,IAdvancedTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ICoverageTestResultClient)
HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  ICoverageTestResultClient_obj : public ::massive::munit::IAdvancedTestResultClient_obj{
	public:
		typedef ::massive::munit::IAdvancedTestResultClient_obj super;
		typedef ICoverageTestResultClient_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void setCurrentTestClassCoverage( Dynamic result)=0;
virtual Dynamic setCurrentTestClassCoverage_dyn()=0;
		virtual Void reportFinalCoverage( Dynamic percent,cpp::ArrayBase missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency)=0;
virtual Dynamic reportFinalCoverage_dyn()=0;
};



template<typename IMPL>
class ICoverageTestResultClient_delegate_ : public ICoverageTestResultClient_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ICoverageTestResultClient_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void setCurrentTestClassCoverage( Dynamic result) { return mDelegate->setCurrentTestClassCoverage(result);}
		Dynamic setCurrentTestClassCoverage_dyn() { return mDelegate->setCurrentTestClassCoverage_dyn();}
		Void reportFinalCoverage( Dynamic percent,cpp::ArrayBase missingCoverageResults,::String summary,::String classBreakdown,::String packageBreakdown,::String executionFrequency) { return mDelegate->reportFinalCoverage(percent,missingCoverageResults,summary,classBreakdown,packageBreakdown,executionFrequency);}
		Dynamic reportFinalCoverage_dyn() { return mDelegate->reportFinalCoverage_dyn();}
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

#endif /* INCLUDED_massive_munit_ICoverageTestResultClient */ 
