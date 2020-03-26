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

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.EnemyBehind
struct UMainCharacterVOComponent_C_EnemyBehind_Params
{
	class AActor**                                     EnemyActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Behind;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToGameStateEvents
struct UMainCharacterVOComponent_C_BindToGameStateEvents_Params
{
	class AKSGameState**                               GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLastManStanding
struct UMainCharacterVOComponent_C_OnLastManStanding_Params
{
	class AKSPlayerState**                             LastPlayer;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWinnerSet
struct UMainCharacterVOComponent_C_OnWinnerSet_Params
{
	int*                                               TeamNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnRoundSetup
struct UMainCharacterVOComponent_C_OnRoundSetup_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPhaseChange
struct UMainCharacterVOComponent_C_OnPhaseChange_Params
{
	struct FName*                                      PhaseName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPingManagerEvents
struct UMainCharacterVOComponent_C_BindToPingManagerEvents_Params
{
	class UKSPingManager**                             PingManager;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.PingAdded
struct UMainCharacterVOComponent_C_PingAdded_Params
{
	struct FPingInfo*                                  PingInfo;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnTakeDamage
struct UMainCharacterVOComponent_C_OnTakeDamage_Params
{
	class AActor**                                     DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnItemPickedUp
struct UMainCharacterVOComponent_C_OnItemPickedUp_Params
{
	class AKSCharacter**                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSItemDrop**                                ItemDrop;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnReviveCompleted
struct UMainCharacterVOComponent_C_OnReviveCompleted_Params
{
	class AKSCharacter**                               Reviver;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               Revivee;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToCharacterEvents
struct UMainCharacterVOComponent_C_BindToCharacterEvents_Params
{
	class AKSCharacter**                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnInteractStart
struct UMainCharacterVOComponent_C_OnInteractStart_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnLanded
struct UMainCharacterVOComponent_C_OnLanded_Params
{
	struct FVector*                                    Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnMantleChanged
struct UMainCharacterVOComponent_C_OnMantleChanged_Params
{
	bool*                                              IsMantling;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnDOdgeRollChanged
struct UMainCharacterVOComponent_C_OnDOdgeRollChanged_Params
{
	bool*                                              IsDodgeRolling;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJumped
struct UMainCharacterVOComponent_C_OnJumped_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnCharacterFreeFallStarted
struct UMainCharacterVOComponent_C_OnCharacterFreeFallStarted_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnWeaponInventoryChanged
struct UMainCharacterVOComponent_C_OnWeaponInventoryChanged_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BuildWeaponStateChanged
struct UMainCharacterVOComponent_C_BuildWeaponStateChanged_Params
{
	class AKSWeapon**                                  Weapon;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.GadgetWeaponStateChanged
struct UMainCharacterVOComponent_C_GadgetWeaponStateChanged_Params
{
	class AKSWeapon**                                  Weapon;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ResetObjectiveVO
struct UMainCharacterVOComponent_C_ResetObjectiveVO_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnStartReviveOther
struct UMainCharacterVOComponent_C_OnStartReviveOther_Params
{
	class AKSCharacter**                               Reviver;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               Revivee;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ReviveTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRemote;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ModFailedToActivate
struct UMainCharacterVOComponent_C_ModFailedToActivate_Params
{
	class UKSModInst_Activated**                       AttemptedMod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EKSAbilityUsageFailureType*                        AbilityFailureType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerStateEvents
struct UMainCharacterVOComponent_C_BindToPlayerStateEvents_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToActivatableModEvents
struct UMainCharacterVOComponent_C_BindToActivatableModEvents_Params
{
	class UKSModInst_Activated**                       ActivatableMod;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToEvents
struct UMainCharacterVOComponent_C_BindToEvents_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToTeamStateEvents
struct UMainCharacterVOComponent_C_BindToTeamStateEvents_Params
{
	class AKSTeamState**                               TeamState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.BindToPlayerControllerEvents
struct UMainCharacterVOComponent_C_BindToPlayerControllerEvents_Params
{
	class AKSPlayerController**                        PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnJobChanged
struct UMainCharacterVOComponent_C_OnJobChanged_Params
{
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ShopItemChanged
struct UMainCharacterVOComponent_C_ShopItemChanged_Params
{
	struct FShopItem*                                  ShopItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.OnPlayerDownedChanged
struct UMainCharacterVOComponent_C_OnPlayerDownedChanged_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacterVOComponent.MainCharacterVOComponent_C.ExecuteUbergraph_MainCharacterVOComponent
struct UMainCharacterVOComponent_C_ExecuteUbergraph_MainCharacterVOComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
