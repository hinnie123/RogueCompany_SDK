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

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.MagDropForDodgeReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     Master_Weapon_Ref              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReloadOnDodgeRollModInst_C::MagDropForDodgeReload(class UKSWeaponComponent** Master_Weapon_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.MagDropForDodgeReload");

	UReloadOnDodgeRollModInst_C_MagDropForDodgeReload_Params params;
	params.Master_Weapon_Ref = Master_Weapon_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.StopAnimationFromEvent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  AnimEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSCharacterAnimInst**   CharAnimInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReloadOnDodgeRollModInst_C::StopAnimationFromEvent(struct FName* AnimEventName, class UKSCharacterAnimInst** CharAnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.StopAnimationFromEvent");

	UReloadOnDodgeRollModInst_C_StopAnimationFromEvent_Params params;
	params.AnimEventName = AnimEventName;
	params.CharAnimInstance = CharAnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ReactsToAnimationEvent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  AnimEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReloadOnDodgeRollModInst_C::ReactsToAnimationEvent(struct FName* AnimEventName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ReactsToAnimationEvent");

	UReloadOnDodgeRollModInst_C_ReactsToAnimationEvent_Params params;
	params.AnimEventName = AnimEventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.OnDodgeRoll
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         RollDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReloadOnDodgeRollModInst_C::OnDodgeRoll(float* RollDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.OnDodgeRoll");

	UReloadOnDodgeRollModInst_C_OnDodgeRoll_Params params;
	params.RollDuration = RollDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.RemotePlayerAudio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void UReloadOnDodgeRollModInst_C::RemotePlayerAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.RemotePlayerAudio");

	UReloadOnDodgeRollModInst_C_RemotePlayerAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.Dodge Reload Mod Notified
// (BlueprintCallable, BlueprintEvent)

void UReloadOnDodgeRollModInst_C::Dodge_Reload_Mod_Notified()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.Dodge Reload Mod Notified");

	UReloadOnDodgeRollModInst_C_Dodge_Reload_Mod_Notified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ExecuteUbergraph_ReloadOnDodgeRollModInst
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReloadOnDodgeRollModInst_C::ExecuteUbergraph_ReloadOnDodgeRollModInst(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ExecuteUbergraph_ReloadOnDodgeRollModInst");

	UReloadOnDodgeRollModInst_C_ExecuteUbergraph_ReloadOnDodgeRollModInst_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
