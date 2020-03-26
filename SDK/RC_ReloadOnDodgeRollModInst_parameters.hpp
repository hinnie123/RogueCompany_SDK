#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.MagDropForDodgeReload
struct UReloadOnDodgeRollModInst_C_MagDropForDodgeReload_Params
{
	class UKSWeaponComponent**                         Master_Weapon_Ref;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.StopAnimationFromEvent
struct UReloadOnDodgeRollModInst_C_StopAnimationFromEvent_Params
{
	struct FName*                                      AnimEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSCharacterAnimInst**                       CharAnimInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ReactsToAnimationEvent
struct UReloadOnDodgeRollModInst_C_ReactsToAnimationEvent_Params
{
	struct FName*                                      AnimEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.OnDodgeRoll
struct UReloadOnDodgeRollModInst_C_OnDodgeRoll_Params
{
	float*                                             RollDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.RemotePlayerAudio
struct UReloadOnDodgeRollModInst_C_RemotePlayerAudio_Params
{
};

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.Dodge Reload Mod Notified
struct UReloadOnDodgeRollModInst_C_Dodge_Reload_Mod_Notified_Params
{
};

// Function ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C.ExecuteUbergraph_ReloadOnDodgeRollModInst
struct UReloadOnDodgeRollModInst_C_ExecuteUbergraph_ReloadOnDodgeRollModInst_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
