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

// Function NearMissCurveComponent.NearMissCurveComponent_C.UpdateScalarTrack
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName*                  TrackName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TrackValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNearMissCurveComponent_C::UpdateScalarTrack(struct FName* TrackName, float* TrackValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NearMissCurveComponent.NearMissCurveComponent_C.UpdateScalarTrack");

	UNearMissCurveComponent_C_UpdateScalarTrack_Params params;
	params.TrackName = TrackName;
	params.TrackValue = TrackValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NearMissCurveComponent.NearMissCurveComponent_C.ExecuteUbergraph_NearMissCurveComponent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNearMissCurveComponent_C::ExecuteUbergraph_NearMissCurveComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NearMissCurveComponent.NearMissCurveComponent_C.ExecuteUbergraph_NearMissCurveComponent");

	UNearMissCurveComponent_C_ExecuteUbergraph_NearMissCurveComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
