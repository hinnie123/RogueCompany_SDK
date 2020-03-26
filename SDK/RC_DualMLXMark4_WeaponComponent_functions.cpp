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

// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Update Heat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDualMLXMark4_WeaponComponent_C::Update_Heat(float* Delta_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Update Heat");

	UDualMLXMark4_WeaponComponent_C_Update_Heat_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Play Muzzle Fire On Duplicate Mesh
// (Public, BlueprintCallable, BlueprintEvent)

void UDualMLXMark4_WeaponComponent_C::Play_Muzzle_Fire_On_Duplicate_Mesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Play Muzzle Fire On Duplicate Mesh");

	UDualMLXMark4_WeaponComponent_C_Play_Muzzle_Fire_On_Duplicate_Mesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDualMLXMark4_WeaponComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.ReceiveTick");

	UDualMLXMark4_WeaponComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Cool Down
// (BlueprintCallable, BlueprintEvent)

void UDualMLXMark4_WeaponComponent_C::Cool_Down()
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Cool Down");

	UDualMLXMark4_WeaponComponent_C_Cool_Down_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.PlayFireSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAimData*               InputPin                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDualMLXMark4_WeaponComponent_C::PlayFireSound(struct FAimData* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.PlayFireSound");

	UDualMLXMark4_WeaponComponent_C_PlayFireSound_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Scale Out
// (BlueprintCallable, BlueprintEvent)

void UDualMLXMark4_WeaponComponent_C::Scale_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Scale Out");

	UDualMLXMark4_WeaponComponent_C_Scale_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Scale In
// (BlueprintCallable, BlueprintEvent)

void UDualMLXMark4_WeaponComponent_C::Scale_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Scale In");

	UDualMLXMark4_WeaponComponent_C_Scale_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UDualMLXMark4_WeaponComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.ReceiveBeginPlay");

	UDualMLXMark4_WeaponComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Event Activate
// (BlueprintCallable, BlueprintEvent)

void UDualMLXMark4_WeaponComponent_C::Event_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Event Activate");

	UDualMLXMark4_WeaponComponent_C_Event_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Holster Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void UDualMLXMark4_WeaponComponent_C::Holster_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Holster Weapon");

	UDualMLXMark4_WeaponComponent_C_Holster_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Fire Weapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFullFireRepData*       Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          PlayNoChainFireMontage         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDualMLXMark4_WeaponComponent_C::Fire_Weapon(struct FFullFireRepData* Data, bool* PlayNoChainFireMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.Fire Weapon");

	UDualMLXMark4_WeaponComponent_C_Fire_Weapon_Params params;
	params.Data = Data;
	params.PlayNoChainFireMontage = PlayNoChainFireMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.ForceRetrieveWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDualMLXMark4_WeaponComponent_C::ForceRetrieveWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.ForceRetrieveWeapon");

	UDualMLXMark4_WeaponComponent_C_ForceRetrieveWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.ForceHolsterWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDualMLXMark4_WeaponComponent_C::ForceHolsterWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.ForceHolsterWeapon");

	UDualMLXMark4_WeaponComponent_C_ForceHolsterWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.ExecuteUbergraph_DualMLXMark4_WeaponComponent
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDualMLXMark4_WeaponComponent_C::ExecuteUbergraph_DualMLXMark4_WeaponComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C.ExecuteUbergraph_DualMLXMark4_WeaponComponent");

	UDualMLXMark4_WeaponComponent_C_ExecuteUbergraph_DualMLXMark4_WeaponComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
