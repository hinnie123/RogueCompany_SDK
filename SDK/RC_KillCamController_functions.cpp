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

// Function KillCamController.KillCamController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AKillCamController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCamController.KillCamController_C.ReceiveBeginPlay");

	AKillCamController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamController.KillCamController_C.ExecuteUbergraph_KillCamController
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AKillCamController_C::ExecuteUbergraph_KillCamController(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCamController.KillCamController_C.ExecuteUbergraph_KillCamController");

	AKillCamController_C_ExecuteUbergraph_KillCamController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
