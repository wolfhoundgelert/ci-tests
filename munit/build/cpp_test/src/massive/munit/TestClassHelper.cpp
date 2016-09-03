#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_rtti_Meta
#include <haxe/rtti/Meta.h>
#endif
#ifndef INCLUDED_massive_munit_TestClassHelper
#include <massive/munit/TestClassHelper.h>
#endif
#ifndef INCLUDED_massive_munit_TestResult
#include <massive/munit/TestResult.h>
#endif
namespace massive{
namespace munit{

Void TestClassHelper_obj::__construct(::hx::Class type,Dynamic __o_isDebug)
{
HX_STACK_FRAME("massive.munit.TestClassHelper","new",0xfa387a5f,"massive.munit.TestClassHelper.new","massive/munit/TestClassHelper.hx",147,0xfbaf8533)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_isDebug,"isDebug")
Dynamic isDebug = __o_isDebug.Default(false);
{
	HX_STACK_LINE(148)
	this->type = type;
	HX_STACK_LINE(149)
	this->isDebug = isDebug;
	HX_STACK_LINE(150)
	this->tests = cpp::ArrayBase_obj::__new();
	HX_STACK_LINE(151)
	this->index = (int)0;
	HX_STACK_LINE(152)
	::hx::Class tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(152)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(152)
	this->className = tmp1;
	HX_STACK_LINE(154)
	Dynamic tmp2 = this->nullFunc_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	this->beforeClass = tmp2;
	HX_STACK_LINE(155)
	Dynamic tmp3 = this->nullFunc_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(155)
	this->afterClass = tmp3;
	HX_STACK_LINE(156)
	Dynamic tmp4 = this->nullFunc_dyn();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(156)
	this->before = tmp4;
	HX_STACK_LINE(157)
	Dynamic tmp5 = this->nullFunc_dyn();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(157)
	this->after = tmp5;
	HX_STACK_LINE(159)
	::hx::Class tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(159)
	this->parse(tmp6);
}
;
	return null();
}

//TestClassHelper_obj::~TestClassHelper_obj() { }

Dynamic TestClassHelper_obj::__CreateEmpty() { return  new TestClassHelper_obj; }
hx::ObjectPtr< TestClassHelper_obj > TestClassHelper_obj::__new(::hx::Class type,Dynamic __o_isDebug)
{  hx::ObjectPtr< TestClassHelper_obj > _result_ = new TestClassHelper_obj();
	_result_->__construct(type,__o_isDebug);
	return _result_;}

Dynamic TestClassHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestClassHelper_obj > _result_ = new TestClassHelper_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

bool TestClassHelper_obj::hasNext( ){
	HX_STACK_FRAME("massive.munit.TestClassHelper","hasNext",0x5f61baec,"massive.munit.TestClassHelper.hasNext","massive/munit/TestClassHelper.hx",168,0xfbaf8533)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	int tmp = this->index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	int tmp1 = this->tests->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TestClassHelper_obj,hasNext,return )

Dynamic TestClassHelper_obj::next( ){
	HX_STACK_FRAME("massive.munit.TestClassHelper","next",0xf7329a14,"massive.munit.TestClassHelper.next","massive/munit/TestClassHelper.hx",178,0xfbaf8533)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	bool tmp = this->hasNext();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(179)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(179)
	if ((tmp)){
		HX_STACK_LINE(179)
		int tmp2 = (this->index)++;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		tmp1 = this->tests->__GetItem(tmp2);
	}
	else{
		HX_STACK_LINE(179)
		tmp1 = null();
	}
	HX_STACK_LINE(179)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TestClassHelper_obj,next,return )

Dynamic TestClassHelper_obj::current( ){
	HX_STACK_FRAME("massive.munit.TestClassHelper","current",0x12feb1b8,"massive.munit.TestClassHelper.current","massive/munit/TestClassHelper.hx",188,0xfbaf8533)
	HX_STACK_THIS(this)
	HX_STACK_LINE(189)
	int tmp = this->index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	bool tmp1 = (tmp <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	if ((tmp1)){
		HX_STACK_LINE(189)
		tmp2 = this->tests->__GetItem((int)0);
	}
	else{
		HX_STACK_LINE(189)
		int tmp3 = this->index;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		tmp2 = this->tests->__GetItem(tmp4);
	}
	HX_STACK_LINE(189)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TestClassHelper_obj,current,return )

Void TestClassHelper_obj::parse( ::hx::Class type){
{
		HX_STACK_FRAME("massive.munit.TestClassHelper","parse",0x7937f7f2,"massive.munit.TestClassHelper.parse","massive/munit/TestClassHelper.hx",193,0xfbaf8533)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(194)
		::hx::Class tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		Dynamic tmp1 = ::Type_obj::createEmptyInstance(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		this->test = tmp1;
		HX_STACK_LINE(196)
		::hx::Class tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(196)
		Array< ::Dynamic > inherintanceChain = this->getInheritanceChain(tmp2);		HX_STACK_VAR(inherintanceChain,"inherintanceChain");
		HX_STACK_LINE(197)
		Dynamic tmp3 = this->collateFieldMeta(inherintanceChain);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(197)
		Dynamic fieldMeta = tmp3;		HX_STACK_VAR(fieldMeta,"fieldMeta");
		HX_STACK_LINE(198)
		Dynamic tmp4 = fieldMeta;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		this->scanForTests(tmp4);
		HX_STACK_LINE(199)
		Dynamic tmp5 = this->sortTestsByName_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		this->tests->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestClassHelper_obj,parse,(void))

Array< ::Dynamic > TestClassHelper_obj::getInheritanceChain( ::hx::Class clazz){
	HX_STACK_FRAME("massive.munit.TestClassHelper","getInheritanceChain",0x89dc7b0c,"massive.munit.TestClassHelper.getInheritanceChain","massive/munit/TestClassHelper.hx",203,0xfbaf8533)
	HX_STACK_THIS(this)
	HX_STACK_ARG(clazz,"clazz")
	HX_STACK_LINE(204)
	Array< ::Dynamic > inherintanceChain = Array_obj< ::Dynamic >::__new().Add(clazz);		HX_STACK_VAR(inherintanceChain,"inherintanceChain");
	HX_STACK_LINE(205)
	while((true)){
		HX_STACK_LINE(205)
		::hx::Class tmp = clazz;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(205)
		::hx::Class tmp1 = ::Type_obj::getSuperClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		::hx::Class tmp2 = clazz = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(205)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		if ((tmp4)){
			HX_STACK_LINE(205)
			break;
		}
		HX_STACK_LINE(206)
		::hx::Class tmp5 = clazz;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(206)
		inherintanceChain->push(tmp5);
	}
	HX_STACK_LINE(207)
	return inherintanceChain;
}


HX_DEFINE_DYNAMIC_FUNC1(TestClassHelper_obj,getInheritanceChain,return )

Dynamic TestClassHelper_obj::collateFieldMeta( Array< ::Dynamic > inherintanceChain){
	HX_STACK_FRAME("massive.munit.TestClassHelper","collateFieldMeta",0xda874afa,"massive.munit.TestClassHelper.collateFieldMeta","massive/munit/TestClassHelper.hx",211,0xfbaf8533)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inherintanceChain,"inherintanceChain")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","massive/munit/TestClassHelper.hx",212,0xfbaf8533)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(212)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(212)
	Dynamic meta = tmp;		HX_STACK_VAR(meta,"meta");
	HX_STACK_LINE(213)
	while((true)){
		HX_STACK_LINE(213)
		bool tmp1 = (inherintanceChain->length > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(213)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(213)
		if ((tmp2)){
			HX_STACK_LINE(213)
			break;
		}
		HX_STACK_LINE(215)
		::hx::Class tmp3 = inherintanceChain->pop().StaticCast< ::hx::Class >();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(215)
		::hx::Class clazz = tmp3;		HX_STACK_VAR(clazz,"clazz");
		HX_STACK_LINE(216)
		::hx::Class tmp4 = clazz;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(216)
		Dynamic tmp5 = ::haxe::rtti::Meta_obj::getFields(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(216)
		Dynamic newMeta = tmp5;		HX_STACK_VAR(newMeta,"newMeta");
		HX_STACK_LINE(217)
		Dynamic tmp6 = newMeta;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		Array< ::String > markedFieldNames = ::Reflect_obj::fields(tmp6);		HX_STACK_VAR(markedFieldNames,"markedFieldNames");
		HX_STACK_LINE(219)
		{
			HX_STACK_LINE(219)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(219)
			while((true)){
				HX_STACK_LINE(219)
				bool tmp7 = (_g < markedFieldNames->length);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(219)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(219)
				if ((tmp8)){
					HX_STACK_LINE(219)
					break;
				}
				HX_STACK_LINE(219)
				::String tmp9 = markedFieldNames->__get(_g);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(219)
				::String fieldName = tmp9;		HX_STACK_VAR(fieldName,"fieldName");
				HX_STACK_LINE(219)
				++(_g);
				HX_STACK_LINE(221)
				Dynamic tmp10 = meta;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(221)
				::String tmp11 = fieldName;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(221)
				Dynamic tmp12 = ::Reflect_obj::field(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(221)
				Dynamic recordedFieldTags = tmp12;		HX_STACK_VAR(recordedFieldTags,"recordedFieldTags");
				HX_STACK_LINE(222)
				Dynamic tmp13 = newMeta;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(222)
				::String tmp14 = fieldName;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(222)
				Dynamic tmp15 = ::Reflect_obj::field(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(222)
				Dynamic newFieldTags = tmp15;		HX_STACK_VAR(newFieldTags,"newFieldTags");
				HX_STACK_LINE(224)
				Dynamic tmp16 = newFieldTags;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(224)
				Array< ::String > newTagNames = ::Reflect_obj::fields(tmp16);		HX_STACK_VAR(newTagNames,"newTagNames");
				HX_STACK_LINE(225)
				bool tmp17 = (recordedFieldTags == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(225)
				if ((tmp17)){
					struct _Function_5_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","massive/munit/TestClassHelper.hx",230,0xfbaf8533)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(230)
					Dynamic tmp18 = _Function_5_1::Block();		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(230)
					Dynamic tagsCopy = tmp18;		HX_STACK_VAR(tagsCopy,"tagsCopy");
					HX_STACK_LINE(231)
					{
						HX_STACK_LINE(231)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(231)
						while((true)){
							HX_STACK_LINE(231)
							bool tmp19 = (_g1 < newTagNames->length);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(231)
							bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(231)
							if ((tmp20)){
								HX_STACK_LINE(231)
								break;
							}
							HX_STACK_LINE(231)
							::String tmp21 = newTagNames->__get(_g1);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(231)
							::String tagName = tmp21;		HX_STACK_VAR(tagName,"tagName");
							HX_STACK_LINE(231)
							++(_g1);
							HX_STACK_LINE(232)
							Dynamic tmp22 = tagsCopy;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(232)
							::String tmp23 = tagName;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(232)
							Dynamic tmp24 = newFieldTags;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(232)
							::String tmp25 = tagName;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(232)
							Dynamic tmp26 = ::Reflect_obj::field(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(232)
							::Reflect_obj::setField(tmp22,tmp23,tmp26);
						}
					}
					HX_STACK_LINE(234)
					Dynamic tmp19 = meta;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(234)
					::String tmp20 = fieldName;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(234)
					Dynamic tmp21 = tagsCopy;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(234)
					::Reflect_obj::setField(tmp19,tmp20,tmp21);
				}
				else{
					HX_STACK_LINE(238)
					bool ignored = false;		HX_STACK_VAR(ignored,"ignored");
					HX_STACK_LINE(239)
					{
						HX_STACK_LINE(239)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(239)
						while((true)){
							HX_STACK_LINE(239)
							bool tmp18 = (_g1 < newTagNames->length);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(239)
							bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(239)
							if ((tmp19)){
								HX_STACK_LINE(239)
								break;
							}
							HX_STACK_LINE(239)
							::String tmp20 = newTagNames->__get(_g1);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(239)
							::String tagName = tmp20;		HX_STACK_VAR(tagName,"tagName");
							HX_STACK_LINE(239)
							++(_g1);
							HX_STACK_LINE(241)
							bool tmp21 = (tagName == HX_HCSTRING("Ignore","\x32","\x2d","\x5d","\xc7"));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(241)
							if ((tmp21)){
								HX_STACK_LINE(242)
								ignored = true;
							}
							HX_STACK_LINE(247)
							bool tmp22 = ignored;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(247)
							bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(247)
							bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(247)
							bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(247)
							bool tmp26;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(247)
							if ((tmp25)){
								HX_STACK_LINE(247)
								bool tmp27 = (tagName == HX_HCSTRING("Test","\x72","\xf4","\xd2","\x37"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(247)
								bool tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(247)
								bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(247)
								bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(247)
								bool tmp31 = tmp30;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(247)
								bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(247)
								bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(247)
								bool tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(247)
								bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(247)
								bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(247)
								if ((tmp36)){
									HX_STACK_LINE(248)
									tmp26 = (tagName == HX_HCSTRING("AsyncTest","\x8e","\x21","\x5a","\x1c"));
								}
								else{
									HX_STACK_LINE(247)
									tmp26 = true;
								}
							}
							else{
								HX_STACK_LINE(247)
								tmp26 = false;
							}
							HX_STACK_LINE(247)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(247)
							if ((tmp26)){
								HX_STACK_LINE(249)
								Dynamic tmp28 = recordedFieldTags;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(249)
								Dynamic tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(249)
								tmp27 = ::Reflect_obj::hasField(tmp29,HX_HCSTRING("Ignore","\x32","\x2d","\x5d","\xc7"));
							}
							else{
								HX_STACK_LINE(247)
								tmp27 = false;
							}
							HX_STACK_LINE(247)
							if ((tmp27)){
								HX_STACK_LINE(250)
								Dynamic tmp28 = recordedFieldTags;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(250)
								::Reflect_obj::deleteField(tmp28,HX_HCSTRING("Ignore","\x32","\x2d","\x5d","\xc7"));
							}
							HX_STACK_LINE(252)
							Dynamic tmp28 = newFieldTags;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(252)
							::String tmp29 = tagName;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(252)
							Dynamic tmp30 = ::Reflect_obj::field(tmp28,tmp29);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(252)
							Dynamic tagValue = tmp30;		HX_STACK_VAR(tagValue,"tagValue");
							HX_STACK_LINE(253)
							Dynamic tmp31 = recordedFieldTags;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(253)
							::String tmp32 = tagName;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(253)
							Dynamic tmp33 = tagValue;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(253)
							::Reflect_obj::setField(tmp31,tmp32,tmp33);
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(258)
	Dynamic tmp1 = meta;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(258)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TestClassHelper_obj,collateFieldMeta,return )

Void TestClassHelper_obj::scanForTests( Dynamic fieldMeta){
{
		HX_STACK_FRAME("massive.munit.TestClassHelper","scanForTests",0x1ceba4d6,"massive.munit.TestClassHelper.scanForTests","massive/munit/TestClassHelper.hx",262,0xfbaf8533)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fieldMeta,"fieldMeta")
		HX_STACK_LINE(263)
		Dynamic tmp = fieldMeta;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(263)
		Array< ::String > fieldNames = ::Reflect_obj::fields(tmp);		HX_STACK_VAR(fieldNames,"fieldNames");
		HX_STACK_LINE(264)
		{
			HX_STACK_LINE(264)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(264)
			while((true)){
				HX_STACK_LINE(264)
				bool tmp1 = (_g < fieldNames->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(264)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(264)
				if ((tmp2)){
					HX_STACK_LINE(264)
					break;
				}
				HX_STACK_LINE(264)
				::String tmp3 = fieldNames->__get(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(264)
				::String fieldName = tmp3;		HX_STACK_VAR(fieldName,"fieldName");
				HX_STACK_LINE(264)
				++(_g);
				HX_STACK_LINE(266)
				Dynamic tmp4 = this->test;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(266)
				::String tmp5 = fieldName;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(266)
				Dynamic tmp6 = ::Reflect_obj::field(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(266)
				Dynamic f = tmp6;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(267)
				Dynamic tmp7 = f;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(267)
				bool tmp8 = ::Reflect_obj::isFunction(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(267)
				if ((tmp8)){
					HX_STACK_LINE(269)
					Dynamic tmp9 = fieldMeta;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(269)
					::String tmp10 = fieldName;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(269)
					Dynamic tmp11 = ::Reflect_obj::field(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(269)
					Dynamic funcMeta = tmp11;		HX_STACK_VAR(funcMeta,"funcMeta");
					HX_STACK_LINE(270)
					::String tmp12 = fieldName;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(270)
					Dynamic tmp13 = f;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(270)
					Dynamic tmp14 = funcMeta;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(270)
					this->searchForMatchingTags(tmp12,tmp13,tmp14);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestClassHelper_obj,scanForTests,(void))

Void TestClassHelper_obj::searchForMatchingTags( ::String fieldName,Dynamic func,Dynamic funcMeta){
{
		HX_STACK_FRAME("massive.munit.TestClassHelper","searchForMatchingTags",0x9f12b016,"massive.munit.TestClassHelper.searchForMatchingTags","massive/munit/TestClassHelper.hx",277,0xfbaf8533)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fieldName,"fieldName")
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(funcMeta,"funcMeta")
		HX_STACK_LINE(277)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(277)
		Array< ::String > _g1 = ::massive::munit::TestClassHelper_obj::META_TAGS;		HX_STACK_VAR(_g1,"_g1");
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
			::String tmp2 = _g1->__get(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(277)
			::String tag = tmp2;		HX_STACK_VAR(tag,"tag");
			HX_STACK_LINE(277)
			++(_g);
			HX_STACK_LINE(279)
			Dynamic tmp3 = funcMeta;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(279)
			::String tmp4 = tag;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(279)
			bool tmp5 = ::Reflect_obj::hasField(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(279)
			if ((tmp5)){
				HX_STACK_LINE(281)
				Dynamic tmp6 = funcMeta;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(281)
				::String tmp7 = tag;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(281)
				Dynamic tmp8 = ::Reflect_obj::field(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(281)
				Array< ::String > args = tmp8;		HX_STACK_VAR(args,"args");
				HX_STACK_LINE(282)
				bool tmp9 = (args != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(282)
				::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(282)
				if ((tmp9)){
					HX_STACK_LINE(282)
					tmp10 = args->__get((int)0);
				}
				else{
					HX_STACK_LINE(282)
					tmp10 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				HX_STACK_LINE(282)
				::String description = tmp10;		HX_STACK_VAR(description,"description");
				HX_STACK_LINE(283)
				bool tmp11 = (args != null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(283)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(283)
				if ((tmp11)){
					HX_STACK_LINE(283)
					tmp12 = (description == HX_HCSTRING("Async","\x1c","\x6f","\x6b","\xb9"));
				}
				else{
					HX_STACK_LINE(283)
					tmp12 = false;
				}
				HX_STACK_LINE(283)
				bool isAsync = tmp12;		HX_STACK_VAR(isAsync,"isAsync");
				HX_STACK_LINE(284)
				Dynamic tmp13 = funcMeta;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(284)
				bool tmp14 = ::Reflect_obj::hasField(tmp13,HX_HCSTRING("Ignore","\x32","\x2d","\x5d","\xc7"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(284)
				bool isIgnored = tmp14;		HX_STACK_VAR(isIgnored,"isIgnored");
				HX_STACK_LINE(286)
				bool tmp15 = isAsync;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(286)
				if ((tmp15)){
					HX_STACK_LINE(288)
					description = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				}
				else{
					HX_STACK_LINE(290)
					bool tmp16 = isIgnored;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(290)
					if ((tmp16)){
						HX_STACK_LINE(292)
						Dynamic tmp17 = funcMeta;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(292)
						Dynamic tmp18 = ::Reflect_obj::field(tmp17,HX_HCSTRING("Ignore","\x32","\x2d","\x5d","\xc7"));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(292)
						args = tmp18;
						HX_STACK_LINE(293)
						bool tmp19 = (args != null());		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(293)
						::String tmp20;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(293)
						if ((tmp19)){
							HX_STACK_LINE(293)
							tmp20 = args->__get((int)0);
						}
						else{
							HX_STACK_LINE(293)
							tmp20 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
						}
						HX_STACK_LINE(293)
						description = tmp20;
					}
				}
				HX_STACK_LINE(296)
				::String tmp16 = tag;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(296)
				::String _switch_1 = (tmp16);
				if (  ( _switch_1==HX_HCSTRING("BeforeClass","\x19","\x7f","\xe8","\xb1"))){
					HX_STACK_LINE(299)
					this->beforeClass = func;
				}
				else if (  ( _switch_1==HX_HCSTRING("AfterClass","\x9c","\xe0","\x20","\xa2"))){
					HX_STACK_LINE(301)
					this->afterClass = func;
				}
				else if (  ( _switch_1==HX_HCSTRING("Before","\x9f","\xc8","\xc6","\xce"))){
					HX_STACK_LINE(303)
					this->before = func;
				}
				else if (  ( _switch_1==HX_HCSTRING("After","\xfc","\xd5","\xcf","\xb0"))){
					HX_STACK_LINE(305)
					this->after = func;
				}
				else if (  ( _switch_1==HX_HCSTRING("AsyncTest","\x8e","\x21","\x5a","\x1c"))){
					HX_STACK_LINE(307)
					bool tmp17 = this->isDebug;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(307)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(307)
					if ((tmp18)){
						HX_STACK_LINE(308)
						::String tmp19 = fieldName;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(308)
						Dynamic tmp20 = func;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(308)
						Dynamic tmp21 = this->test;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(308)
						bool tmp22 = isIgnored;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(308)
						::String tmp23 = description;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(308)
						this->addTest(tmp19,tmp20,tmp21,true,tmp22,tmp23);
					}
				}
				else if (  ( _switch_1==HX_HCSTRING("Test","\x72","\xf4","\xd2","\x37"))){
					HX_STACK_LINE(310)
					bool tmp17 = this->isDebug;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(310)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(310)
					if ((tmp18)){
						HX_STACK_LINE(311)
						::String tmp19 = fieldName;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(311)
						Dynamic tmp20 = func;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(311)
						Dynamic tmp21 = this->test;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(311)
						bool tmp22 = isAsync;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(311)
						bool tmp23 = isIgnored;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(311)
						::String tmp24 = description;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(311)
						this->addTest(tmp19,tmp20,tmp21,tmp22,tmp23,tmp24);
					}
				}
				else if (  ( _switch_1==HX_HCSTRING("TestDebug","\x81","\x70","\xf4","\x41"))){
					HX_STACK_LINE(313)
					bool tmp17 = this->isDebug;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(313)
					if ((tmp17)){
						HX_STACK_LINE(314)
						::String tmp18 = fieldName;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(314)
						Dynamic tmp19 = func;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(314)
						Dynamic tmp20 = this->test;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(314)
						bool tmp21 = isAsync;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(314)
						bool tmp22 = isIgnored;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(314)
						::String tmp23 = description;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(314)
						this->addTest(tmp18,tmp19,tmp20,tmp21,tmp22,tmp23);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestClassHelper_obj,searchForMatchingTags,(void))

Void TestClassHelper_obj::addTest( ::String field,Dynamic testFunction,Dynamic testInstance,bool isAsync,bool isIgnored,::String description){
{
		HX_STACK_FRAME("massive.munit.TestClassHelper","addTest",0xd0522092,"massive.munit.TestClassHelper.addTest","massive/munit/TestClassHelper.hx",326,0xfbaf8533)
		HX_STACK_THIS(this)
		HX_STACK_ARG(field,"field")
		HX_STACK_ARG(testFunction,"testFunction")
		HX_STACK_ARG(testInstance,"testInstance")
		HX_STACK_ARG(isAsync,"isAsync")
		HX_STACK_ARG(isIgnored,"isIgnored")
		HX_STACK_ARG(description,"description")
		HX_STACK_LINE(327)
		::massive::munit::TestResult tmp = ::massive::munit::TestResult_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(327)
		::massive::munit::TestResult result = tmp;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(328)
		result->async = isAsync;
		HX_STACK_LINE(329)
		result->ignore = isIgnored;
		HX_STACK_LINE(330)
		::String tmp1 = this->className;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(330)
		result->className = tmp1;
		HX_STACK_LINE(331)
		result->description = description;
		HX_STACK_LINE(332)
		result->name = field;
		struct _Function_1_1{
			inline static Dynamic Block( ::massive::munit::TestResult &result,Dynamic &testInstance,Dynamic &testFunction){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","massive/munit/TestClassHelper.hx",333,0xfbaf8533)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c") , testFunction,false);
					__result->Add(HX_HCSTRING("scope","\x94","\x71","\xd9","\x78") , testInstance,false);
					__result->Add(HX_HCSTRING("result","\xdd","\x68","\x84","\x08") , result,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(333)
		Dynamic tmp2 = _Function_1_1::Block(result,testInstance,testFunction);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(333)
		Dynamic data = tmp2;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(334)
		Dynamic tmp3 = data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(334)
		this->tests->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(TestClassHelper_obj,addTest,(void))

int TestClassHelper_obj::sortTestsByName( Dynamic x,Dynamic y){
	HX_STACK_FRAME("massive.munit.TestClassHelper","sortTestsByName",0xc2d1fc44,"massive.munit.TestClassHelper.sortTestsByName","massive/munit/TestClassHelper.hx",338,0xfbaf8533)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(339)
	::String tmp = x->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic )->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(339)
	::String tmp1 = y->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic )->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(339)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(339)
	if ((tmp2)){
		HX_STACK_LINE(339)
		return (int)0;
	}
	HX_STACK_LINE(340)
	::String tmp3 = x->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic )->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(340)
	::String tmp4 = y->__Field(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"), hx::paccDynamic )->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(340)
	bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(340)
	if ((tmp5)){
		HX_STACK_LINE(340)
		return (int)1;
	}
	else{
		HX_STACK_LINE(341)
		return (int)-1;
	}
	HX_STACK_LINE(340)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(TestClassHelper_obj,sortTestsByName,return )

Void TestClassHelper_obj::nullFunc( ){
{
		HX_STACK_FRAME("massive.munit.TestClassHelper","nullFunc",0x1203bf0c,"massive.munit.TestClassHelper.nullFunc","massive/munit/TestClassHelper.hx",345,0xfbaf8533)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestClassHelper_obj,nullFunc,(void))

::String TestClassHelper_obj::META_TAG_BEFORE_CLASS;

::String TestClassHelper_obj::META_TAG_AFTER_CLASS;

::String TestClassHelper_obj::META_TAG_BEFORE;

::String TestClassHelper_obj::META_TAG_AFTER;

::String TestClassHelper_obj::META_TAG_TEST;

::String TestClassHelper_obj::META_TAG_ASYNC_TEST;

::String TestClassHelper_obj::META_TAG_IGNORE;

::String TestClassHelper_obj::META_PARAM_ASYNC_TEST;

::String TestClassHelper_obj::META_TAG_TEST_DEBUG;

Array< ::String > TestClassHelper_obj::META_TAGS;


TestClassHelper_obj::TestClassHelper_obj()
{
}

void TestClassHelper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestClassHelper);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(test,"test");
	HX_MARK_MEMBER_NAME(beforeClass,"beforeClass");
	HX_MARK_MEMBER_NAME(afterClass,"afterClass");
	HX_MARK_MEMBER_NAME(before,"before");
	HX_MARK_MEMBER_NAME(after,"after");
	HX_MARK_MEMBER_NAME(tests,"tests");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(isDebug,"isDebug");
	HX_MARK_END_CLASS();
}

void TestClassHelper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(test,"test");
	HX_VISIT_MEMBER_NAME(beforeClass,"beforeClass");
	HX_VISIT_MEMBER_NAME(afterClass,"afterClass");
	HX_VISIT_MEMBER_NAME(before,"before");
	HX_VISIT_MEMBER_NAME(after,"after");
	HX_VISIT_MEMBER_NAME(tests,"tests");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(isDebug,"isDebug");
}

Dynamic TestClassHelper_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"test") ) { return test; }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"after") ) { return after; }
		if (HX_FIELD_EQ(inName,"tests") ) { return tests; }
		if (HX_FIELD_EQ(inName,"index") ) { return index; }
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"before") ) { return before; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isDebug") ) { return isDebug; }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		if (HX_FIELD_EQ(inName,"current") ) { return current_dyn(); }
		if (HX_FIELD_EQ(inName,"addTest") ) { return addTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nullFunc") ) { return nullFunc_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"afterClass") ) { return afterClass; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beforeClass") ) { return beforeClass; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scanForTests") ) { return scanForTests_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"sortTestsByName") ) { return sortTestsByName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collateFieldMeta") ) { return collateFieldMeta_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getInheritanceChain") ) { return getInheritanceChain_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"searchForMatchingTags") ) { return searchForMatchingTags_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TestClassHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"META_TAGS") ) { outValue = META_TAGS; return true;  }
	}
	return false;
}

Dynamic TestClassHelper_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"test") ) { test=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"after") ) { after=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tests") ) { tests=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"before") ) { before=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isDebug") ) { isDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"afterClass") ) { afterClass=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beforeClass") ) { beforeClass=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TestClassHelper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"META_TAGS") ) { META_TAGS=ioValue.Cast< Array< ::String > >(); return true; }
	}
	return false;
}

void TestClassHelper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("beforeClass","\x39","\xe7","\xb5","\xcd"));
	outFields->push(HX_HCSTRING("afterClass","\x7c","\xdc","\x6f","\xab"));
	outFields->push(HX_HCSTRING("before","\x7f","\x54","\x32","\x9a"));
	outFields->push(HX_HCSTRING("after","\x1c","\x66","\xa2","\x1d"));
	outFields->push(HX_HCSTRING("tests","\xe1","\x7f","\x95","\x0d"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("isDebug","\x09","\xf6","\xa4","\x73"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(TestClassHelper_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestClassHelper_obj,test),HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestClassHelper_obj,beforeClass),HX_HCSTRING("beforeClass","\x39","\xe7","\xb5","\xcd")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestClassHelper_obj,afterClass),HX_HCSTRING("afterClass","\x7c","\xdc","\x6f","\xab")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestClassHelper_obj,before),HX_HCSTRING("before","\x7f","\x54","\x32","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TestClassHelper_obj,after),HX_HCSTRING("after","\x1c","\x66","\xa2","\x1d")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(TestClassHelper_obj,tests),HX_HCSTRING("tests","\xe1","\x7f","\x95","\x0d")},
	{hx::fsInt,(int)offsetof(TestClassHelper_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsString,(int)offsetof(TestClassHelper_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsBool,(int)offsetof(TestClassHelper_obj,isDebug),HX_HCSTRING("isDebug","\x09","\xf6","\xa4","\x73")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TestClassHelper_obj::META_TAG_BEFORE_CLASS,HX_HCSTRING("META_TAG_BEFORE_CLASS","\x77","\x0f","\xce","\x2b")},
	{hx::fsString,(void *) &TestClassHelper_obj::META_TAG_AFTER_CLASS,HX_HCSTRING("META_TAG_AFTER_CLASS","\xd6","\x3c","\x10","\x6e")},
	{hx::fsString,(void *) &TestClassHelper_obj::META_TAG_BEFORE,HX_HCSTRING("META_TAG_BEFORE","\x9e","\x0d","\x99","\xef")},
	{hx::fsString,(void *) &TestClassHelper_obj::META_TAG_AFTER,HX_HCSTRING("META_TAG_AFTER","\xbd","\xd9","\xe0","\xde")},
	{hx::fsString,(void *) &TestClassHelper_obj::META_TAG_TEST,HX_HCSTRING("META_TAG_TEST","\xb1","\xc7","\x9a","\xb8")},
	{hx::fsString,(void *) &TestClassHelper_obj::META_TAG_ASYNC_TEST,HX_HCSTRING("META_TAG_ASYNC_TEST","\x34","\xb8","\xd0","\x6d")},
	{hx::fsString,(void *) &TestClassHelper_obj::META_TAG_IGNORE,HX_HCSTRING("META_TAG_IGNORE","\x31","\x72","\x2f","\xe8")},
	{hx::fsString,(void *) &TestClassHelper_obj::META_PARAM_ASYNC_TEST,HX_HCSTRING("META_PARAM_ASYNC_TEST","\x61","\x5f","\x3c","\xad")},
	{hx::fsString,(void *) &TestClassHelper_obj::META_TAG_TEST_DEBUG,HX_HCSTRING("META_TAG_TEST_DEBUG","\xe5","\xf3","\xb5","\x68")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &TestClassHelper_obj::META_TAGS,HX_HCSTRING("META_TAGS","\xd3","\x5b","\x3b","\x6a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("test","\x52","\xc8","\xf9","\x4c"),
	HX_HCSTRING("beforeClass","\x39","\xe7","\xb5","\xcd"),
	HX_HCSTRING("afterClass","\x7c","\xdc","\x6f","\xab"),
	HX_HCSTRING("before","\x7f","\x54","\x32","\x9a"),
	HX_HCSTRING("after","\x1c","\x66","\xa2","\x1d"),
	HX_HCSTRING("tests","\xe1","\x7f","\x95","\x0d"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("isDebug","\x09","\xf6","\xa4","\x73"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("getInheritanceChain","\x0d","\xa3","\x77","\x21"),
	HX_HCSTRING("collateFieldMeta","\x59","\x88","\x3b","\xdc"),
	HX_HCSTRING("scanForTests","\xb5","\x06","\x00","\xc0"),
	HX_HCSTRING("searchForMatchingTags","\x57","\x9a","\xc8","\xb1"),
	HX_HCSTRING("addTest","\x13","\x0b","\x37","\x89"),
	HX_HCSTRING("sortTestsByName","\xc5","\xcf","\x56","\xf5"),
	HX_HCSTRING("nullFunc","\x6b","\x05","\x6c","\x21"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_BEFORE_CLASS,"META_TAG_BEFORE_CLASS");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_AFTER_CLASS,"META_TAG_AFTER_CLASS");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_BEFORE,"META_TAG_BEFORE");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_AFTER,"META_TAG_AFTER");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_TEST,"META_TAG_TEST");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_ASYNC_TEST,"META_TAG_ASYNC_TEST");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_IGNORE,"META_TAG_IGNORE");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_PARAM_ASYNC_TEST,"META_PARAM_ASYNC_TEST");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAG_TEST_DEBUG,"META_TAG_TEST_DEBUG");
	HX_MARK_MEMBER_NAME(TestClassHelper_obj::META_TAGS,"META_TAGS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_BEFORE_CLASS,"META_TAG_BEFORE_CLASS");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_AFTER_CLASS,"META_TAG_AFTER_CLASS");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_BEFORE,"META_TAG_BEFORE");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_AFTER,"META_TAG_AFTER");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_TEST,"META_TAG_TEST");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_ASYNC_TEST,"META_TAG_ASYNC_TEST");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_IGNORE,"META_TAG_IGNORE");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_PARAM_ASYNC_TEST,"META_PARAM_ASYNC_TEST");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAG_TEST_DEBUG,"META_TAG_TEST_DEBUG");
	HX_VISIT_MEMBER_NAME(TestClassHelper_obj::META_TAGS,"META_TAGS");
};

#endif

hx::Class TestClassHelper_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("META_TAG_BEFORE_CLASS","\x77","\x0f","\xce","\x2b"),
	HX_HCSTRING("META_TAG_AFTER_CLASS","\xd6","\x3c","\x10","\x6e"),
	HX_HCSTRING("META_TAG_BEFORE","\x9e","\x0d","\x99","\xef"),
	HX_HCSTRING("META_TAG_AFTER","\xbd","\xd9","\xe0","\xde"),
	HX_HCSTRING("META_TAG_TEST","\xb1","\xc7","\x9a","\xb8"),
	HX_HCSTRING("META_TAG_ASYNC_TEST","\x34","\xb8","\xd0","\x6d"),
	HX_HCSTRING("META_TAG_IGNORE","\x31","\x72","\x2f","\xe8"),
	HX_HCSTRING("META_PARAM_ASYNC_TEST","\x61","\x5f","\x3c","\xad"),
	HX_HCSTRING("META_TAG_TEST_DEBUG","\xe5","\xf3","\xb5","\x68"),
	HX_HCSTRING("META_TAGS","\xd3","\x5b","\x3b","\x6a"),
	::String(null()) };

void TestClassHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("massive.munit.TestClassHelper","\xed","\x5e","\xfe","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TestClassHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &TestClassHelper_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TestClassHelper_obj >;
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

void TestClassHelper_obj::__boot()
{
	META_TAG_BEFORE_CLASS= HX_HCSTRING("BeforeClass","\x19","\x7f","\xe8","\xb1");
	META_TAG_AFTER_CLASS= HX_HCSTRING("AfterClass","\x9c","\xe0","\x20","\xa2");
	META_TAG_BEFORE= HX_HCSTRING("Before","\x9f","\xc8","\xc6","\xce");
	META_TAG_AFTER= HX_HCSTRING("After","\xfc","\xd5","\xcf","\xb0");
	META_TAG_TEST= HX_HCSTRING("Test","\x72","\xf4","\xd2","\x37");
	META_TAG_ASYNC_TEST= HX_HCSTRING("AsyncTest","\x8e","\x21","\x5a","\x1c");
	META_TAG_IGNORE= HX_HCSTRING("Ignore","\x32","\x2d","\x5d","\xc7");
	META_PARAM_ASYNC_TEST= HX_HCSTRING("Async","\x1c","\x6f","\x6b","\xb9");
	META_TAG_TEST_DEBUG= HX_HCSTRING("TestDebug","\x81","\x70","\xf4","\x41");
	META_TAGS= Array_obj< ::String >::__new().Add(HX_HCSTRING("BeforeClass","\x19","\x7f","\xe8","\xb1")).Add(HX_HCSTRING("AfterClass","\x9c","\xe0","\x20","\xa2")).Add(HX_HCSTRING("Before","\x9f","\xc8","\xc6","\xce")).Add(HX_HCSTRING("After","\xfc","\xd5","\xcf","\xb0")).Add(HX_HCSTRING("Test","\x72","\xf4","\xd2","\x37")).Add(HX_HCSTRING("AsyncTest","\x8e","\x21","\x5a","\x1c")).Add(HX_HCSTRING("TestDebug","\x81","\x70","\xf4","\x41"));
}

} // end namespace massive
} // end namespace munit
