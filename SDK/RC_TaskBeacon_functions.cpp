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

// Function TaskBeacon.TaskBeacon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATaskBeacon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TaskBeacon.TaskBeacon_C.UserConstructionScript");

	ATaskBeacon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TaskBeacon.TaskBeacon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATaskBeacon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TaskBeacon.TaskBeacon_C.ReceiveBeginPlay");

	ATaskBeacon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TaskBeacon.TaskBeacon_C.ExecuteUbergraph_TaskBeacon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATaskBeacon_C::ExecuteUbergraph_TaskBeacon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TaskBeacon.TaskBeacon_C.ExecuteUbergraph_TaskBeacon");

	ATaskBeacon_C_ExecuteUbergraph_TaskBeacon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
