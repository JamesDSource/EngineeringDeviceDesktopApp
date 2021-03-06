// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha_graphics4_VertexBuffer
#define INCLUDED_kha_graphics4_VertexBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)
HX_DECLARE_CLASS2(kha,graphics4,Usage)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,VertexElement)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)


#include <Kore/pch.h>
#include <Kore/Graphics4/Graphics.h>

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES VertexBuffer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VertexBuffer_obj OBJ_;
		VertexBuffer_obj();

	public:
		enum { _hx_ClassId = 0x3c05e02d };

		void __construct(int vertexCount, ::kha::graphics4::VertexStructure structure, ::kha::graphics4::Usage usage,hx::Null< int >  __o_instanceDataStepRate,hx::Null< bool >  __o_canRead);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.VertexBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics4.VertexBuffer"); }
		static hx::ObjectPtr< VertexBuffer_obj > __new(int vertexCount, ::kha::graphics4::VertexStructure structure, ::kha::graphics4::Usage usage,hx::Null< int >  __o_instanceDataStepRate,hx::Null< bool >  __o_canRead);
		static hx::ObjectPtr< VertexBuffer_obj > __alloc(hx::Ctx *_hx_ctx,int vertexCount, ::kha::graphics4::VertexStructure structure, ::kha::graphics4::Usage usage,hx::Null< int >  __o_instanceDataStepRate,hx::Null< bool >  __o_canRead);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexBuffer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VertexBuffer",a4,fb,bb,38); }

		static  ::kha::graphics4::VertexElement _unused1();
		static ::Dynamic _unused1_dyn();

		static int _unused2();
		static ::Dynamic _unused2_dyn();

		 ::kha::arrays::Float32ArrayPrivate data;
		void _hx_delete();
		::Dynamic _hx_delete_dyn();

		void init(int vertexCount, ::kha::graphics4::VertexStructure structure,int usage,int instanceDataStepRate);
		::Dynamic init_dyn();

		 ::kha::arrays::Float32ArrayPrivate lock2(int start,int count);
		::Dynamic lock2_dyn();

		 ::kha::arrays::Float32ArrayPrivate lock( ::Dynamic start, ::Dynamic count);
		::Dynamic lock_dyn();

		void unlock();
		::Dynamic unlock_dyn();

		int stride();
		::Dynamic stride_dyn();

		int count();
		::Dynamic count_dyn();

Kore::Graphics4::VertexBuffer* buffer;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_VertexBuffer */ 
