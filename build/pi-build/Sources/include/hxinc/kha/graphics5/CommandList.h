// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha_graphics5_CommandList
#define INCLUDED_kha_graphics5_CommandList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics5,CommandList)
HX_DECLARE_CLASS2(kha,graphics5,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics5,PipelineState)
HX_DECLARE_CLASS2(kha,graphics5,PipelineStateBase)
HX_DECLARE_CLASS2(kha,graphics5,RenderTarget)
HX_DECLARE_CLASS2(kha,graphics5,VertexBuffer)


#include <Kore/pch.h>
#include <Kore/Graphics5/CommandList.h>

namespace kha{
namespace graphics5{


class HXCPP_CLASS_ATTRIBUTES CommandList_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CommandList_obj OBJ_;
		CommandList_obj();

	public:
		enum { _hx_ClassId = 0x7efb9c03 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.graphics5.CommandList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.graphics5.CommandList"); }
		static hx::ObjectPtr< CommandList_obj > __new();
		static hx::ObjectPtr< CommandList_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CommandList_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CommandList",29,53,46,c9); }

		void init();
		::Dynamic init_dyn();

		void begin();
		::Dynamic begin_dyn();

		void end();
		::Dynamic end_dyn();

		void renderTargetToFramebufferBarrier( ::kha::graphics5::RenderTarget renderTarget);
		::Dynamic renderTargetToFramebufferBarrier_dyn();

		void framebufferToRenderTargetBarrier( ::kha::graphics5::RenderTarget renderTarget);
		::Dynamic framebufferToRenderTargetBarrier_dyn();

		void setRenderTargets(::Array< ::Dynamic> targets);
		::Dynamic setRenderTargets_dyn();

		void drawIndexedVertices(hx::Null< int >  start,hx::Null< int >  count);
		::Dynamic drawIndexedVertices_dyn();

		void setIndexBuffer( ::kha::graphics5::IndexBuffer indexBuffer);
		::Dynamic setIndexBuffer_dyn();

		void setVertexBuffers(::Array< ::Dynamic> vertexBuffers,::Array< int > offsets);
		::Dynamic setVertexBuffers_dyn();

		void setPipelineLayout();
		::Dynamic setPipelineLayout_dyn();

		void setPipeline( ::kha::graphics5::PipelineState pipeline);
		::Dynamic setPipeline_dyn();

		void clear( ::kha::graphics5::RenderTarget target, ::Dynamic color, ::Dynamic depth, ::Dynamic stencil);
		::Dynamic clear_dyn();

		void upload( ::kha::graphics5::IndexBuffer indexBuffer);
		::Dynamic upload_dyn();

Kore::Graphics5::CommandList* commandList;
};

} // end namespace kha
} // end namespace graphics5

#endif /* INCLUDED_kha_graphics5_CommandList */ 
