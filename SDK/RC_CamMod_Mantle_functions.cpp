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

// Function CamMod_Mantle.CamMod_Mantle_C.ShouldModifyCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCamMod_Mantle_C::ShouldModifyCamera(bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Mantle.CamMod_Mantle_C.ShouldModifyCamera");

	UCamMod_Mantle_C_ShouldModifyCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
}


// Function CamMod_Mantle.CamMod_Mantle_C.PlayTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void UCamMod_Mantle_C::PlayTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Mantle.CamMod_Mantle_C.PlayTimeline");

	UCamMod_Mantle_C_PlayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamMod_Mantle.CamMod_Mantle_C.ExecuteUbergraph_CamMod_Mantle
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCamMod_Mantle_C::ExecuteUbergraph_CamMod_Mantle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Mantle.CamMod_Mantle_C.ExecuteUbergraph_CamMod_Mantle");

	UCamMod_Mantle_C_ExecuteUbergraph_CamMod_Mantle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
