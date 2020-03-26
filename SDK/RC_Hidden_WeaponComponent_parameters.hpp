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

// Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.CanUseCombatState
struct UHidden_WeaponComponent_C_CanUseCombatState_Params
{
	ECombatState*                                      TestState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.ReceiveBeginPlay
struct UHidden_WeaponComponent_C_ReceiveBeginPlay_Params
{
};

// Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.OnWeaponStateChanged
struct UHidden_WeaponComponent_C_OnWeaponStateChanged_Params
{
	EWeaponStateNew*                                   OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.OnInitialize
struct UHidden_WeaponComponent_C_OnInitialize_Params
{
};

// Function Hidden_WeaponComponent.Hidden_WeaponComponent_C.ExecuteUbergraph_Hidden_WeaponComponent
struct UHidden_WeaponComponent_C_ExecuteUbergraph_Hidden_WeaponComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
