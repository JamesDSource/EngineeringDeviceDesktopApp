// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Floor
#define INCLUDED_kha_audio2_ogg_vorbis_data_Floor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_8fd99ebc77e89687_18_new)
HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Codebook)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Floor)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Floor0)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Floor1)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES Floor_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Floor_obj OBJ_;
		Floor_obj();

	public:
		enum { _hx_ClassId = 0x695bb0e0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.data.Floor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.audio2.ogg.vorbis.data.Floor"); }

		hx::ObjectPtr< Floor_obj > __new() {
			hx::ObjectPtr< Floor_obj > __this = new Floor_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Floor_obj > __alloc(hx::Ctx *_hx_ctx) {
			Floor_obj *__this = (Floor_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Floor_obj), true, "kha.audio2.ogg.vorbis.data.Floor"));
			*(void **)__this = Floor_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_8fd99ebc77e89687_18_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Floor_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Floor",ac,41,c4,95); }

		static  ::kha::audio2::ogg::vorbis::data::Floor read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState,::Array< ::Dynamic> codebooks);
		static ::Dynamic read_dyn();

		 ::kha::audio2::ogg::vorbis::data::Floor0 floor0;
		 ::kha::audio2::ogg::vorbis::data::Floor1 floor1;
		int type;
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Floor */ 
