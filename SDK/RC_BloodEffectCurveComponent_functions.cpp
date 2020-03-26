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

// Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.UpdateScalarTrack
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName*                  TrackName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TrackValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBloodEffectCurveComponent_C::UpdateScalarTrack(struct FName* TrackName, float* TrackValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.UpdateScalarTrack");

	UBloodEffectCurveComponent_C_UpdateScalarTrack_Params params;
	params.TrackName = TrackName;
	params.TrackValue = TrackValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.ExecuteUbergraph_BloodEffectCurveComponent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBloodEffectCurveComponent_C::ExecuteUbergraph_BloodEffectCurveComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BloodEffectCurveComponent.BloodEffectCurveComponent_C.ExecuteUbergraph_BloodEffectCurveComponent");

	UBloodEffectCurveComponent_C_ExecuteUbergraph_BloodEffectCurveComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
