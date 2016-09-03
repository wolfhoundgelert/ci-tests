#ifndef INCLUDED_massive_munit_ITestResultClient
#define INCLUDED_massive_munit_ITestResultClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(massive,munit,ITestResultClient)
HX_DECLARE_CLASS2(massive,munit,TestResult)
namespace massive{
namespace munit{


class HXCPP_CLASS_ATTRIBUTES  ITestResultClient_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ITestResultClient_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Dynamic get_completionHandler( )=0;
virtual Dynamic get_completionHandler_dyn()=0;
		virtual Dynamic set_completionHandler( Dynamic value)=0;
virtual Dynamic set_completionHandler_dyn()=0;
		virtual Void addPass( ::massive::munit::TestResult result)=0;
virtual Dynamic addPass_dyn()=0;
		virtual Void addFail( ::massive::munit::TestResult result)=0;
virtual Dynamic addFail_dyn()=0;
		virtual Void addError( ::massive::munit::TestResult result)=0;
virtual Dynamic addError_dyn()=0;
		virtual Void addIgnore( ::massive::munit::TestResult result)=0;
virtual Dynamic addIgnore_dyn()=0;
		virtual Dynamic reportFinalStatistics( int testCount,int passCount,int failCount,int errorCount,int ignoreCount,Float time)=0;
virtual Dynamic reportFinalStatistics_dyn()=0;
};



template<typename IMPL>
class ITestResultClient_delegate_ : public ITestResultClient_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ITestResultClient_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
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

#endif /* INCLUDED_massive_munit_ITestResultClient */ 
