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

// Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.CanUseCombatState
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ECombatState*                  TestState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHidden_WeaponComponent_C::CanUseCombatState(ECombatState* TestState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.CanUseCombatState");

	UHidden_WeaponComponent_C_CanUseCombatState_Params params;
	params.TestState = TestState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UHidden_WeaponComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.ReceiveBeginPlay");

	UHidden_WeaponComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.OnWeaponStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EWeaponStateNew*               OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHidden_WeaponComponent_C::OnWeaponStateChanged(EWeaponStateNew* OldState, EWeaponStateNew* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.OnWeaponStateChanged");

	UHidden_WeaponComponent_C_OnWeaponStateChanged_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.OnInitialize
// (Event, Protected, BlueprintEvent)

void UHidden_WeaponComponent_C::OnInitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.OnInitialize");

	UHidden_WeaponComponent_C_OnInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.ExecuteUbergraph_Hidden_WeaponComponent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHidden_WeaponComponent_C::ExecuteUbergraph_Hidden_WeaponComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.ExecuteUbergraph_Hidden_WeaponComponent");

	UHidden_WeaponComponent_C_ExecuteUbergraph_Hidden_WeaponComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
