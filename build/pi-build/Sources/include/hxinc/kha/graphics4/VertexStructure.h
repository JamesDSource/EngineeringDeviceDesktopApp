// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha_graphics4_VertexStructure
#define INCLUDED_kha_graphics4_VertexStructure

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,VertexElement)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES VertexStructure_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VertexStructure_obj OBJ_;
		VertexStructure_obj();

	public:
		enum { _hx_ClassId = 0x1a19a30a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.VertexStructure")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics4.VertexStructure"); }
		static hx::ObjectPtr< VertexStructure_obj > __new();
		static hx::ObjectPtr< VertexStructure_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexStructure_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VertexStructure",0f,d4,29,99); }

		::Array< ::Dynamic> elements;
		bool instanced;
		void add(::String name,int data);
		::Dynamic add_dyn();

		int size();
		::Dynamic size_dyn();

		int byteSize();
		::Dynamic byteSize_dyn();

		int dataByteSize(int data);
		::Dynamic dataByteSize_dyn();

		 ::kha::graphics4::VertexElement get(int index);
		::Dynamic get_dyn();

};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_VertexStructure */ 