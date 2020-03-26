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

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ShowSkinnedMeshMaterialSection
struct UPGame_BlueprintFunctionLibrary_ShowSkinnedMeshMaterialSection_Params
{
	class USkinnedMeshComponent**                      SkinnedMeshComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               MaterialID;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LODIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.SetLightingChannels
struct UPGame_BlueprintFunctionLibrary_SetLightingChannels_Params
{
	class UPrimitiveComponent**                        PrimitiveComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLightingChannels*                          NewLightingChannels;                                      // (Parm)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsSteamClient
struct UPGame_BlueprintFunctionLibrary_IsSteamClient_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatformType
struct UPGame_BlueprintFunctionLibrary_IsPlatformType_Params
{
	bool*                                              IsConsole;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMobile;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatform
struct UPGame_BlueprintFunctionLibrary_IsPlatform_Params
{
	bool*                                              IsXboxOne;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsPS4;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsSwitch;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsWindows;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMac;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsLinux;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsIOS;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsAndroid;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsGameBit
struct UPGame_BlueprintFunctionLibrary_IsGameBit_Params
{
	EGameBits*                                         GameBit;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsAnonymousLogin
struct UPGame_BlueprintFunctionLibrary_IsAnonymousLogin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetPropertyClampedValue
struct UPGame_BlueprintFunctionLibrary_GetPropertyClampedValue_Params
{
	struct FPGame_Property*                            prop;                                                     // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetGameLocalizationType
struct UPGame_BlueprintFunctionLibrary_GetGameLocalizationType_Params
{
	EGameLocalizationType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.FrameDelay
struct UPGame_BlueprintFunctionLibrary_FrameDelay_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumFramesToDelay;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo*                          LatentInfo;                                               // (Parm)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToEngineLightingChannels
struct UPGame_BlueprintFunctionLibrary_ConvertToEngineLightingChannels_Params
{
	struct FPGame_BlueprintableLightingChannels*       BlueprintableLightingChannels;                            // (Parm)
	struct FLightingChannels                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToBlueprintableLightingChannels
struct UPGame_BlueprintFunctionLibrary_ConvertToBlueprintableLightingChannels_Params
{
	struct FLightingChannels*                          EngineLightChannels;                                      // (Parm)
	struct FPGame_BlueprintableLightingChannels        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreMeshComponentTexturesFullyStreamedIn
struct UPGame_BlueprintFunctionLibrary_AreMeshComponentTexturesFullyStreamedIn_Params
{
	class UMeshComponent**                             InMeshComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreActorTexturesFullyStreamedIn
struct UPGame_BlueprintFunctionLibrary_AreActorTexturesFullyStreamedIn_Params
{
	class AActor**                                     InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_Character.OnRep_Tween
struct APGame_Character_OnRep_Tween_Params
{
};

// Function PlatformGameFramework.PGame_Character.OnRep_Charge
struct APGame_Character_OnRep_Charge_Params
{
};

// Function PlatformGameFramework.PGame_CharacterMovementComponent.StopTween
struct UPGame_CharacterMovementComponent_StopTween_Params
{
};

// Function PlatformGameFramework.PGame_CharacterMovementComponent.StopCharge
struct UPGame_CharacterMovementComponent_StopCharge_Params
{
};

// Function PlatformGameFramework.PGame_CharacterMovementComponent.StartTween
struct UPGame_CharacterMovementComponent_StartTween_Params
{
	unsigned char*                                     TweenType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    TweenDestination;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             TweenTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_CharacterMovementComponent.StartCharge
struct UPGame_CharacterMovementComponent_StartCharge_Params
{
	unsigned char*                                     ChargeType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ChargeInitialYaw;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ChargeInitialLocation;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             ChargeSpeed;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ChargeRange;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Tween
struct UPGame_CharacterMovementComponent_OnRep_Tween_Params
{
	struct FTweenInfo*                                 TweenInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Charge
struct UPGame_CharacterMovementComponent_OnRep_Charge_Params
{
	struct FChargeInfo*                                ChargeInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlatformGameFramework.PGame_CheatComponent.ServerExecCall
struct UPGame_CheatComponent_ServerExecCall_Params
{
	struct FString*                                    request;                                                  // (Parm, ZeroConstructor)
};

// Function PlatformGameFramework.PGame_CheatComponent.ServerExec
struct UPGame_CheatComponent_ServerExec_Params
{
	struct FString*                                    request;                                                  // (Parm, ZeroConstructor)
};

// Function PlatformGameFramework.PGame_CheatComponent.gmmf
struct UPGame_CheatComponent_gmmf_Params
{
};

// Function PlatformGameFramework.PGame_CheatComponent.gmJoinQueue
struct UPGame_CheatComponent_gmJoinQueue_Params
{
	int*                                               QueueId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_CheatComponent.gmCommand
struct UPGame_CheatComponent_gmCommand_Params
{
	struct FString*                                    request;                                                  // (Parm, ZeroConstructor)
};

// Function PlatformGameFramework.PGame_CheatComponent.gmC
struct UPGame_CheatComponent_gmC_Params
{
	struct FString*                                    request;                                                  // (Parm, ZeroConstructor)
};

// Function PlatformGameFramework.PGame_CombatLogVisualizer.Visualize
struct APGame_CombatLogVisualizer_Visualize_Params
{
};

// Function PlatformGameFramework.PGame_CombatLogVisualizer.LoadCombatLog
struct APGame_CombatLogVisualizer_LoadCombatLog_Params
{
};

// Function PlatformGameFramework.PGame_CombatLogVisualizer.ClearVisualization
struct APGame_CombatLogVisualizer_ClearVisualization_Params
{
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.OnRep_EffectData
struct UPGame_EffectManagerComponent_OnRep_EffectData_Params
{
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.InstantEffectBroadcast
struct UPGame_EffectManagerComponent_InstantEffectBroadcast_Params
{
	struct FPGame_InstantEffectRepData*                repData;                                                  // (Parm)
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueIntFromBlueprint
struct UPGame_EffectManagerComponent_GetPropertyValueIntFromBlueprint_Params
{
	int*                                               PropertyId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueFromBlueprint
struct UPGame_EffectManagerComponent_GetPropertyValueFromBlueprint_Params
{
	int*                                               PropertyId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForPersistentRepData
struct UPGame_EffectManagerComponent_GetDefaultEffectGroupForPersistentRepData_Params
{
	struct FPGame_PersistentEffectRepData*             repData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UPGame_EffectGroupPersistent*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForInstantRepData
struct UPGame_EffectManagerComponent_GetDefaultEffectGroupForInstantRepData_Params
{
	struct FPGame_InstantEffectRepData*                repData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UPGame_EffectGroupInstant*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.CreatePersistentAttachment
struct UPGame_EffectManagerComponent_CreatePersistentAttachment_Params
{
	struct FPGame_PersistentEffectRepData*             repData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UPGame_EffectAttachment*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_EffectManagerComponent.CreateInstantAttachment
struct UPGame_EffectManagerComponent_CreateInstantAttachment_Params
{
	struct FPGame_InstantEffectRepData*                repData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlatformGameFramework.PGame_Effectable.GetIntPropertyValue
struct UPGame_Effectable_GetIntPropertyValue_Params
{
	int*                                               propIdInt;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_Effectable.GetFloatPropertyValue
struct UPGame_Effectable_GetFloatPropertyValue_Params
{
	int*                                               propIdInt;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_GameInstance.EndLoadingScreen
struct UPGame_GameInstance_EndLoadingScreen_Params
{
	class UWorld**                                     World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_GameInstance.BeginLoadingScreen
struct UPGame_GameInstance_BeginLoadingScreen_Params
{
	struct FString*                                    mapName;                                                  // (Parm, ZeroConstructor)
};

// Function PlatformGameFramework.PGame_GameMode.InactivePlayerStateDestroyed
struct APGame_GameMode_InactivePlayerStateDestroyed_Params
{
	class AActor**                                     InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_GameMode.FinalizeMatchEnded
struct APGame_GameMode_FinalizeMatchEnded_Params
{
};

// Function PlatformGameFramework.PGame_LandingPanelJSONHandler.RequestNewJson
struct UPGame_LandingPanelJSONHandler_RequestNewJson_Params
{
};

// Function PlatformGameFramework.PGame_PositionHistoryComponent.RemoveTrackedPrimitive
struct UPGame_PositionHistoryComponent_RemoveTrackedPrimitive_Params
{
	class UPrimitiveComponent**                        InPrimitive;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlatformGameFramework.PGame_PositionHistoryComponent.AddTrackedPrimitive
struct UPGame_PositionHistoryComponent_AddTrackedPrimitive_Params
{
	class UPrimitiveComponent**                        InPrimitive;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
