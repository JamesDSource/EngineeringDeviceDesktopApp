// Generated by Haxe 4.0.0-preview.5+1aaf080
#ifndef INCLUDED_kha_graphics4_CullMode
#define INCLUDED_kha_graphics4_CullMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,CullMode)
namespace kha{
namespace graphics4{


class CullMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CullMode_obj OBJ_;

	public:
		CullMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("kha.graphics4.CullMode",64,bc,53,51); }
		::String __ToString() const { return HX_("CullMode.",39,48,5b,b2) + _hx_tag; }

		static ::kha::graphics4::CullMode Clockwise;
		static inline ::kha::graphics4::CullMode Clockwise_dyn() { return Clockwise; }
		static ::kha::graphics4::CullMode CounterClockwise;
		static inline ::kha::graphics4::CullMode CounterClockwise_dyn() { return CounterClockwise; }
		static ::kha::graphics4::CullMode None;
		static inline ::kha::graphics4::CullMode None_dyn() { return None; }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_CullMode */ 