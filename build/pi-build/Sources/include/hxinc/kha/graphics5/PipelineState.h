// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha_graphics5_PipelineState
#define INCLUDED_kha_graphics5_PipelineState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics5_PipelineStateBase
#include <hxinc/kha/graphics5/PipelineStateBase.h>
#endif
HX_DECLARE_CLASS2(kha,graphics4,BlendingFactor)
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS2(kha,graphics4,GeometryShader)
HX_DECLARE_CLASS2(kha,graphics4,TessellationControlShader)
HX_DECLARE_CLASS2(kha,graphics4,TessellationEvaluationShader)
HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,graphics4,VertexElement)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)
HX_DECLARE_CLASS2(kha,graphics5,FragmentShader)
HX_DECLARE_CLASS2(kha,graphics5,PipelineState)
HX_DECLARE_CLASS2(kha,graphics5,PipelineStateBase)
HX_DECLARE_CLASS2(kha,graphics5,VertexShader)
HX_DECLARE_CLASS3(kha,kore,graphics4,ConstantLocation)
HX_DECLARE_CLASS3(kha,kore,graphics4,TextureUnit)


#include <Kore/pch.h>
#include <Kore/Graphics5/Graphics.h>
#include <Kore/Graphics5/PipelineState.h>

namespace kha{
namespace graphics5{


class HXCPP_CLASS_ATTRIBUTES PipelineState_obj : public  ::kha::graphics5::PipelineStateBase_obj
{
	public:
		typedef  ::kha::graphics5::PipelineStateBase_obj super;
		typedef PipelineState_obj OBJ_;
		PipelineState_obj();

	public:
		enum { _hx_ClassId = 0x519e92c9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics5.PipelineState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics5.PipelineState"); }
		static hx::ObjectPtr< PipelineState_obj > __new();
		static hx::ObjectPtr< PipelineState_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PipelineState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PipelineState",6f,df,61,cd); }

		static int getBlendFunc( ::kha::graphics4::BlendingFactor factor);
		static ::Dynamic getBlendFunc_dyn();

		static  ::kha::graphics4::VertexElement _unused1();
		static ::Dynamic _unused1_dyn();

		static int _unused2();
		static ::Dynamic _unused2_dyn();

		static  ::kha::graphics5::VertexShader _unused3();
		static ::Dynamic _unused3_dyn();

		static  ::kha::graphics5::FragmentShader _unused4();
		static ::Dynamic _unused4_dyn();

		static  ::kha::graphics4::GeometryShader _unused5();
		static ::Dynamic _unused5_dyn();

		static  ::kha::graphics4::TessellationControlShader _unused6();
		static ::Dynamic _unused6_dyn();

		static  ::kha::graphics4::TessellationEvaluationShader _unused7();
		static ::Dynamic _unused7_dyn();

		void _hx_delete();
		::Dynamic _hx_delete_dyn();

		void linkWithStructures2( ::kha::graphics4::VertexStructure structure0, ::kha::graphics4::VertexStructure structure1, ::kha::graphics4::VertexStructure structure2, ::kha::graphics4::VertexStructure structure3,int size);
		::Dynamic linkWithStructures2_dyn();

		void compile();
		::Dynamic compile_dyn();

		::Dynamic getConstantLocation(::String name);
		::Dynamic getConstantLocation_dyn();

		void initConstantLocation( ::kha::kore::graphics4::ConstantLocation location,::String name);
		::Dynamic initConstantLocation_dyn();

		::Dynamic getTextureUnit(::String name);
		::Dynamic getTextureUnit_dyn();

		void initTextureUnit( ::kha::kore::graphics4::TextureUnit unit,::String name);
		::Dynamic initTextureUnit_dyn();

		void setStates(int cullMode,int depthMode,int stencilMode,int stencilBothPass,int stencilDepthFail,int stencilFail,int blendSource,int blendDestination,int alphaBlendSource,int alphaBlendDestination);
		::Dynamic setStates_dyn();

Kore::Graphics5::PipelineState* pipeline;
};

} // end namespace kha
} // end namespace graphics5

#endif /* INCLUDED_kha_graphics5_PipelineState */ 
