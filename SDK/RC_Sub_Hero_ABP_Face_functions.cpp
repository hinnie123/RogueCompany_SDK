// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.ExecuteUbergraph_Sub_Hero_ABP_Face
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void USub_Hero_ABP_Face_C::ExecuteUbergraph_Sub_Hero_ABP_Face(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.ExecuteUbergraph_Sub_Hero_ABP_Face");

	USub_Hero_ABP_Face_C_ExecuteUbergraph_Sub_Hero_ABP_Face_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
