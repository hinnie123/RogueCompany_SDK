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

// Function CamMod_JumpLanding.CamMod_JumpLanding_C.ShouldModifyCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCamMod_JumpLanding_C::ShouldModifyCamera(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_JumpLanding.CamMod_JumpLanding_C.ShouldModifyCamera");

	UCamMod_JumpLanding_C_ShouldModifyCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function CamMod_JumpLanding.CamMod_JumpLanding_C.PlayTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void UCamMod_JumpLanding_C::PlayTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_JumpLanding.CamMod_JumpLanding_C.PlayTimeline");

	UCamMod_JumpLanding_C_PlayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamMod_JumpLanding.CamMod_JumpLanding_C.OnCamModFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UCamMod_JumpLanding_C::OnCamModFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_JumpLanding.CamMod_JumpLanding_C.OnCamModFinished");

	UCamMod_JumpLanding_C_OnCamModFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamMod_JumpLanding.CamMod_JumpLanding_C.ExecuteUbergraph_CamMod_JumpLanding
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCamMod_JumpLanding_C::ExecuteUbergraph_CamMod_JumpLanding(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_JumpLanding.CamMod_JumpLanding_C.ExecuteUbergraph_CamMod_JumpLanding");

	UCamMod_JumpLanding_C_ExecuteUbergraph_CamMod_JumpLanding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
