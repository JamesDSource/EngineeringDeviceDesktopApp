// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha_kore_graphics5_Graphics
#define INCLUDED_kha_kore_graphics5_Graphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics5_Graphics
#include <hxinc/kha/graphics5/Graphics.h>
#endif
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS2(kha,graphics5,Graphics)
HX_DECLARE_CLASS2(kha,graphics5,RenderTarget)
HX_DECLARE_CLASS3(kha,kore,graphics5,Graphics)


#include <Kore/pch.h>
#include <Kore/Graphics5/Graphics.h>
#include <Kore/Graphics5/RayTrace.h>

namespace kha{
namespace kore{
namespace graphics5{


class HXCPP_CLASS_ATTRIBUTES Graphics_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Graphics_obj OBJ_;
		Graphics_obj();

	public:
		enum { _hx_ClassId = 0x17639522 };

		void __construct(::Dynamic target);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.kore.graphics5.Graphics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.kore.graphics5.Graphics"); }
		static hx::ObjectPtr< Graphics_obj > __new(::Dynamic target);
		static hx::ObjectPtr< Graphics_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic target);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Graphics_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Graphics",eb,b4,19,ec); }

		::Dynamic target;
		bool renderTargetsInvertedY();
		::Dynamic renderTargetsInvertedY_dyn();

		void begin( ::kha::graphics5::RenderTarget target);
		::Dynamic begin_dyn();

		void end();
		::Dynamic end_dyn();

		void swapBuffers();
		::Dynamic swapBuffers_dyn();

};

} // end namespace kha
} // end namespace kore
} // end namespace graphics5

#endif /* INCLUDED_kha_kore_graphics5_Graphics */ 
