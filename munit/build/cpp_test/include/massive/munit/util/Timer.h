#ifndef INCLUDED_massive_munit_util_Timer
#define INCLUDED_massive_munit_util_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Thread)
HX_DECLARE_CLASS3(massive,munit,util,Timer)
namespace massive{
namespace munit{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Timer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Timer_obj OBJ_;
		Timer_obj();
		Void __construct(int time_ms);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="massive.munit.util.Timer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Timer_obj > __new(int time_ms);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Timer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Timer","\xa5","\x2f","\x63","\xa3"); }

		static ::massive::munit::util::Timer delay( Dynamic f,int time_ms);
		static Dynamic delay_dyn();

		static Float stamp( );
		static Dynamic stamp_dyn();

		Dynamic id;
		::cpp::vm::Thread runThread;
		virtual Void stop( );
		Dynamic stop_dyn();

		Dynamic run;
		inline Dynamic &run_dyn() {return run; }

		virtual Void runLoop( int time_ms);
		Dynamic runLoop_dyn();

};

} // end namespace massive
} // end namespace munit
} // end namespace util

#endif /* INCLUDED_massive_munit_util_Timer */ 
