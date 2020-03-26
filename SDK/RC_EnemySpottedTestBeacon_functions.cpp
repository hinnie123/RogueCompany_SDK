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

// Function EnemySpottedTestBeacon.EnemySpottedTestBeacon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEnemySpottedTestBeacon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemySpottedTestBeacon.EnemySpottedTestBeacon_C.ReceiveBeginPlay");

	AEnemySpottedTestBeacon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemySpottedTestBeacon.EnemySpottedTestBeacon_C.ExecuteUbergraph_EnemySpottedTestBeacon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemySpottedTestBeacon_C::ExecuteUbergraph_EnemySpottedTestBeacon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemySpottedTestBeacon.EnemySpottedTestBeacon_C.ExecuteUbergraph_EnemySpottedTestBeacon");

	AEnemySpottedTestBeacon_C_ExecuteUbergraph_EnemySpottedTestBeacon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
