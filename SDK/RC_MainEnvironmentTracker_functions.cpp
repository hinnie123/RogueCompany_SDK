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

// Function MainEnvironmentTracker.MainEnvironmentTracker_C.BlueprintEnvironmentChanged
// (Native, Event, Public)
// Parameters:
// struct FName*                  bpp__OldEnvironment__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UMainEnvironmentTracker_C::BlueprintEnvironmentChanged(struct FName* bpp__OldEnvironment__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainEnvironmentTracker.MainEnvironmentTracker_C.BlueprintEnvironmentChanged");

	UMainEnvironmentTracker_C_BlueprintEnvironmentChanged_Params params;
	params.bpp__OldEnvironment__pf = bpp__OldEnvironment__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
