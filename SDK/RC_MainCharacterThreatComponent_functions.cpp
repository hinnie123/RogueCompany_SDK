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

// Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.ReceiveTick
// (Native, Event, Public)
// Parameters:
// float*                         bpp__DeltaSeconds__pf          (Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterThreatComponent_C::ReceiveTick(float* bpp__DeltaSeconds__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.ReceiveTick");

	UMainCharacterThreatComponent_C_ReceiveTick_Params params;
	params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.DebugThreatLevels
// (Native, Event, Public)
// Parameters:
// bool*                          bpp__Show__pf                  (Parm, ZeroConstructor, IsPlainOldData)

void UMainCharacterThreatComponent_C::DebugThreatLevels(bool* bpp__Show__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.DebugThreatLevels");

	UMainCharacterThreatComponent_C_DebugThreatLevels_Params params;
	params.bpp__Show__pf = bpp__Show__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
