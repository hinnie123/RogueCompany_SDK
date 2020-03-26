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

// Function KillstreakUINew.KSWidget.UnbindFromViewportSizeChange
struct UKSWidget_UnbindFromViewportSizeChange_Params
{
};

// Function KillstreakUINew.KSWidget.StopTickAnimation
struct UKSWidget_StopTickAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSWidget.SkipToEndTickAnimation
struct UKSWidget_SkipToEndTickAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSWidget.SetAllAnimationsPlaybackSpeed
struct UKSWidget_SetAllAnimationsPlaybackSpeed_Params
{
	float*                                             PlaybackSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSWidget.ResumeTickAnimation
struct UKSWidget_ResumeTickAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSWidget.RemoveTickAnimation
struct UKSWidget_RemoveTickAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSWidget.PlayTickAnimation
struct UKSWidget_PlayTickAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSWidget.PauseTickAnimation
struct UKSWidget_PauseTickAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSWidget.IsInKillCamPlayback
struct UKSWidget_IsInKillCamPlayback_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSWidget.InitializeTickAnimations
struct UKSWidget_InitializeTickAnimations_Params
{
};

// Function KillstreakUINew.KSWidget.GetTickAnimationInfo
struct UKSWidget_GetTickAnimationInfo_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTickAnimationParams                        OutAnimParams;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSWidget.GetNormalOwningPlayer
struct UKSWidget_GetNormalOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSWidget.GetKillCamSpectatorController
struct UKSWidget_GetKillCamSpectatorController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSWidget.GetActivePlayerController
struct UKSWidget_GetActivePlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSWidget.BlueprintPrepareKillCamPlayback
struct UKSWidget_BlueprintPrepareKillCamPlayback_Params
{
};

// Function KillstreakUINew.KSWidget.BlueprintFinishKillCamPlayback
struct UKSWidget_BlueprintFinishKillCamPlayback_Params
{
};

// Function KillstreakUINew.KSWidget.BindToViewportSizeChange
struct UKSWidget_BindToViewportSizeChange_Params
{
	struct FScriptDelegate*                            InViewportEvent;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function KillstreakUINew.KSWidget.AddTickAnimation
struct UKSWidget_AddTickAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            UpdateEvent;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate*                            FinishedEvent;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function KillstreakUINew.KSAccoladeQueueWidget.Queue
struct UKSAccoladeQueueWidget_Queue_Params
{
	TArray<struct FAccoladeEventEntry>*                Accolades;                                                // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSAccoladeQueueWidget.OnAccoladeRemovedFromScreen
struct UKSAccoladeQueueWidget_OnAccoladeRemovedFromScreen_Params
{
	struct FAccoladeDisplayInfo*                       AccoladeRemoved;                                          // (Parm)
};

// Function KillstreakUINew.KSAccoladeQueueWidget.GetNext
struct UKSAccoladeQueueWidget_GetNext_Params
{
	struct FAccoladeDisplayInfo                        Accolade;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSAccoladeQueueWidget.ClearAccoladeQueue
struct UKSAccoladeQueueWidget_ClearAccoladeQueue_Params
{
};

// Function KillstreakUINew.KSAcquisitionModal.SetupBindings
struct UKSAcquisitionModal_SetupBindings_Params
{
};

// Function KillstreakUINew.KSAcquisitionModal.HandleShowAcquisitionModal
struct UKSAcquisitionModal_HandleShowAcquisitionModal_Params
{
	class UPUMG_StoreItem**                            pItem;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSAcquisitionModal.GetAcquisitionManager
struct UKSAcquisitionModal_GetAcquisitionManager_Params
{
	class UPUMG_AcquisitionManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPawnWidget.SetPlayerStateUIRelevanceChanged
struct UKSPawnWidget_SetPlayerStateUIRelevanceChanged_Params
{
};

// Function KillstreakUINew.KSPawnWidget.SetPawn
struct UKSPawnWidget_SetPawn_Params
{
	class AKSCharacter**                               NewPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPawnWidget.PreClearPlayerState
struct UKSPawnWidget_PreClearPlayerState_Params
{
};

// Function KillstreakUINew.KSPawnWidget.PreClearPawn
struct UKSPawnWidget_PreClearPawn_Params
{
};

// Function KillstreakUINew.KSPawnWidget.PostSetPlayerState
struct UKSPawnWidget_PostSetPlayerState_Params
{
};

// Function KillstreakUINew.KSPawnWidget.PostSetPawn
struct UKSPawnWidget_PostSetPawn_Params
{
};

// Function KillstreakUINew.KSPawnWidget.OnBoundPlayerStateDestroyed
struct UKSPawnWidget_OnBoundPlayerStateDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPawnWidget.OnBoundPawnDestroyed
struct UKSPawnWidget_OnBoundPawnDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPawnWidget.GetPlayerState
struct UKSPawnWidget_GetPlayerState_Params
{
	class AKSPlayerState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPawnWidget.GetPawnBase
struct UKSPawnWidget_GetPawnBase_Params
{
	class AKSCharacterBase*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPawnWidget.GetPawn
struct UKSPawnWidget_GetPawn_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPawnInventoryWidget.RemoveWidgetFor
struct UKSPawnInventoryWidget_RemoveWidgetFor_Params
{
	class UKSWeaponComponent**                         InWeaponComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPawnInventoryWidget.GetWidgetForWeaponComponent
struct UKSPawnInventoryWidget_GetWidgetForWeaponComponent_Params
{
	class UKSWeaponComponent**                         InWeaponComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSWeaponComponentWidget*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentRemoved
struct UKSPawnInventoryWidget_EquipmentRemoved_Params
{
	class UKSWeaponComponent**                         RemovedEquipment;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentEndActive
struct UKSPawnInventoryWidget_EquipmentEndActive_Params
{
	class UKSWeaponComponent**                         InactiveEquipment;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentBecomeActive
struct UKSPawnInventoryWidget_EquipmentBecomeActive_Params
{
	class UKSWeaponComponent**                         ActiveEquipment;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentAdded
struct UKSPawnInventoryWidget_EquipmentAdded_Params
{
	class UKSWeaponComponent**                         AddedEquipment;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSPawnInventoryWidget.CreateWeaponComponentWidgetFor
struct UKSPawnInventoryWidget_CreateWeaponComponentWidgetFor_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponComponent**                         InWeaponComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass**                                     WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponComponentWidget*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSActiveWeaponComponentWidget.PreClearActiveWeaponComponent
struct UKSActiveWeaponComponentWidget_PreClearActiveWeaponComponent_Params
{
};

// Function KillstreakUINew.KSActiveWeaponComponentWidget.PostSetActiveWeaponComponent
struct UKSActiveWeaponComponentWidget_PostSetActiveWeaponComponent_Params
{
};

// Function KillstreakUINew.KSActiveWeaponComponentWidget.GetActiveWeaponComponent
struct UKSActiveWeaponComponentWidget_GetActiveWeaponComponent_Params
{
	class UKSWeaponComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSAimAssistDebugWidget.GetOwningKSPlayer
struct UKSAimAssistDebugWidget_GetOwningKSPlayer_Params
{
	class AKSPlayerController*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSAimAssistDebugWidget.GetAimAssistComponent
struct UKSAimAssistDebugWidget_GetAimAssistComponent_Params
{
	class UKSAimAssistComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.UpdateScreenRegion
struct UKSMapIconWidgetBase_UpdateScreenRegion_Params
{
};

// Function KillstreakUINew.KSMapIconWidgetBase.UpdateMetersAway
struct UKSMapIconWidgetBase_UpdateMetersAway_Params
{
	int*                                               Meters;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.UpdateMeetsHeightThreshold
struct UKSMapIconWidgetBase_UpdateMeetsHeightThreshold_Params
{
	bool*                                              bHeight;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDepth;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.Update
struct UKSMapIconWidgetBase_Update_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdateHover
struct UKSMapIconWidgetBase_ShouldUpdateHover_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdate
struct UKSMapIconWidgetBase_ShouldUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.SetScreenRegion
struct UKSMapIconWidgetBase_SetScreenRegion_Params
{
	EIconMarkerScreenRegion*                           ScreenRegion;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.SetLifeSpan
struct UKSMapIconWidgetBase_SetLifeSpan_Params
{
	float*                                             InLifespan;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.SetArrowAngle
struct UKSMapIconWidgetBase_SetArrowAngle_Params
{
	float*                                             Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.OnUnhoverTimerComplete
struct UKSMapIconWidgetBase_OnUnhoverTimerComplete_Params
{
};

// Function KillstreakUINew.KSMapIconWidgetBase.OnHoverTimerComplete
struct UKSMapIconWidgetBase_OnHoverTimerComplete_Params
{
};

// Function KillstreakUINew.KSMapIconWidgetBase.OnHoverStateChanged
struct UKSMapIconWidgetBase_OnHoverStateChanged_Params
{
	EIconHoverState*                                   NewHoverState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.OnAssociatedActorDestroyed
struct UKSMapIconWidgetBase_OnAssociatedActorDestroyed_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.IsHovering
struct UKSMapIconWidgetBase_IsHovering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.GetWorldYaw
struct UKSMapIconWidgetBase_GetWorldYaw_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.GetWorldPosition
struct UKSMapIconWidgetBase_GetWorldPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.GetHoverState
struct UKSMapIconWidgetBase_GetHoverState_Params
{
	EIconHoverState                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMapIconWidgetBase.GetDistanceToIcon
struct UKSMapIconWidgetBase_GetDistanceToIcon_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSAllyMarkerWidget.View_SetRevivePercent
struct UKSAllyMarkerWidget_View_SetRevivePercent_Params
{
	float*                                             PercentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSAllyMarkerWidget.View_SetNameText
struct UKSAllyMarkerWidget_View_SetNameText_Params
{
	struct FText*                                      NameText;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KillstreakUINew.KSAllyMarkerWidget.View_SetMode
struct UKSAllyMarkerWidget_View_SetMode_Params
{
	EAllyMarkerState*                                  AllyMarkerState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HasBomb;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSAllyMarkerWidget.View_SetJob
struct UKSAllyMarkerWidget_View_SetJob_Params
{
	class UKSJobItem**                                 Job;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSAllyMarkerWidget.View_SetHealthPercent
struct UKSAllyMarkerWidget_View_SetHealthPercent_Params
{
	float*                                             PercentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDown
struct UKSAllyMarkerWidget_HandlePlayerDown_Params
{
	struct FCombatEventInfo*                           CombatEventInfo;                                          // (Parm)
	int*                                               ExpBonus;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDeath
struct UKSAllyMarkerWidget_HandlePlayerDeath_Params
{
	struct FCombatEventInfo*                           DeathInfo;                                                // (Parm)
};

// Function KillstreakUINew.KSAllyMarkerWidget.HandleOnJobChanged
struct UKSAllyMarkerWidget_HandleOnJobChanged_Params
{
};

// Function KillstreakUINew.KSAllyMarkerWidget.HandleBombStateChanged
struct UKSAllyMarkerWidget_HandleBombStateChanged_Params
{
	struct FKSNeutralBombState*                        BombState;                                                // (Parm)
};

// Function KillstreakUINew.KSAllyMarkerWidget.GetArrowPositionFromAngleBlueprint
struct UKSAllyMarkerWidget_GetArrowPositionFromAngleBlueprint_Params
{
	float*                                             Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSAlphaDisclaimer.LoadAlphaDisclaimerText
struct UKSAlphaDisclaimer_LoadAlphaDisclaimerText_Params
{
	struct FString                                     SaveText;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSWeaponWidget.SetOwningWeapon
struct UKSWeaponWidget_SetOwningWeapon_Params
{
	class AKSWeapon**                                  InWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSWeaponWidget.PreClearWeapon
struct UKSWeaponWidget_PreClearWeapon_Params
{
};

// Function KillstreakUINew.KSWeaponWidget.PostSetWeapon
struct UKSWeaponWidget_PostSetWeapon_Params
{
};

// Function KillstreakUINew.KSWeaponWidget.OtherWeaponUpdate
struct UKSWeaponWidget_OtherWeaponUpdate_Params
{
};

// Function KillstreakUINew.KSWeaponWidget.OnOwningWeaponDestroyed
struct UKSWeaponWidget_OnOwningWeaponDestroyed_Params
{
	class AActor**                                     DestroyedWeapon;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSWeaponWidget.GetOwningWeapon
struct UKSWeaponWidget_GetOwningWeapon_Params
{
	class AKSWeapon*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSAmmoWidget.StopReloading
struct UKSAmmoWidget_StopReloading_Params
{
};

// Function KillstreakUINew.KSAmmoWidget.StartReloading
struct UKSAmmoWidget_StartReloading_Params
{
};

// Function KillstreakUINew.KSAmmoWidget.OnAmmoChanged
struct UKSAmmoWidget_OnAmmoChanged_Params
{
	int*                                               OldInClip;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OldClipSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OldReserve;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewInClip;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewClipSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewReserve;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSAnnouncementQueuedMessageWidget.DisplayAnnouncement
struct UKSAnnouncementQueuedMessageWidget_DisplayAnnouncement_Params
{
};

// Function KillstreakUINew.KSAnnouncementQueueWidget.Queue
struct UKSAnnouncementQueueWidget_Queue_Params
{
	struct FAnnouncementData*                          Announcement;                                             // (Parm)
};

// Function KillstreakUINew.KSAnnouncementQueueWidget.GetNext
struct UKSAnnouncementQueueWidget_GetNext_Params
{
	struct FAnnouncementData                           Announcement;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSAnnouncementQueueWidget.ClearAnnoucementQueue
struct UKSAnnouncementQueueWidget_ClearAnnoucementQueue_Params
{
};

// Function KillstreakUINew.KSAsyncImage.SetBrushFromTextureOnItem
struct UKSAsyncImage_SetBrushFromTextureOnItem_Params
{
	class UKSItem**                                    Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSAsyncImage.SetBrushFromItemIcon
struct UKSAsyncImage_SetBrushFromItemIcon_Params
{
	class UKSItem**                                    Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSAsyncImage.OnItemIconLoaded
struct UKSAsyncImage_OnItemIconLoaded_Params
{
	class UTexture2D**                                 ItemIcon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSComponentReticleWidgetBase.ViewedPawnInstigatedDamageNotify
struct UKSComponentReticleWidgetBase_ViewedPawnInstigatedDamageNotify_Params
{
	struct FCombatEventInfo*                           DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateReticleOffset
struct UKSComponentReticleWidgetBase_UpdateReticleOffset_Params
{
	float*                                             OffsetFromCenterScreen;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateBlockedShotIcon
struct UKSComponentReticleWidgetBase_UpdateBlockedShotIcon_Params
{
	bool*                                              IconVisible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Translation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  IconScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateReticleOffset
struct UKSComponentReticleWidgetBase_CalculateReticleOffset_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateBlockedShotIcon
struct UKSComponentReticleWidgetBase_CalculateBlockedShotIcon_Params
{
};

// Function KillstreakUINew.ContextActionData.TriggerContextAction
struct UContextActionData_TriggerContextAction_Params
{
};

// Function KillstreakUINew.KSContextBarWidget.UpdateContextActions
struct UKSContextBarWidget_UpdateContextActions_Params
{
	TArray<class UContextActionData*>*                 ContextActions;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function KillstreakUINew.KSContextBarWidget.SetPrompts
struct UKSContextBarWidget_SetPrompts_Params
{
	struct FName*                                      Route;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>*                              ContextNames;                                             // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSContextBarWidget.SetPromptAction
struct UKSContextBarWidget_SetPromptAction_Params
{
	struct FName*                                      Route;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ContextName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            EventCallback;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function KillstreakUINew.KSContextBarWidget.SetPrompt
struct UKSContextBarWidget_SetPrompt_Params
{
	struct FName*                                      Route;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ContextName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSContextBarWidget.SetOverrideRoute
struct UKSContextBarWidget_SetOverrideRoute_Params
{
	struct FName*                                      Route;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSContextBarWidget.SetActiveRoute
struct UKSContextBarWidget_SetActiveRoute_Params
{
	struct FName*                                      Route;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSContextBarWidget.RefreshContextBar
struct UKSContextBarWidget_RefreshContextBar_Params
{
};

// Function KillstreakUINew.KSContextBarWidget.GetCurrentContextRoute
struct UKSContextBarWidget_GetCurrentContextRoute_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSContextBarWidget.ClearPromptByKey
struct UKSContextBarWidget_ClearPromptByKey_Params
{
	struct FName*                                      Route;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey*                                       Key;                                                      // (Parm)
};

// Function KillstreakUINew.KSContextBarWidget.ClearPrompt
struct UKSContextBarWidget_ClearPrompt_Params
{
	struct FName*                                      Route;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ContextName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSContextBarWidget.ClearOverrideRoute
struct UKSContextBarWidget_ClearOverrideRoute_Params
{
};

// Function KillstreakUINew.KSContextBarWidget.ClearAllPrompts
struct UKSContextBarWidget_ClearAllPrompts_Params
{
	struct FName*                                      Route;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.SetupPingOnReady
struct UKSContextualPingMarkerWidget_SetupPingOnReady_Params
{
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.SetPingInfo
struct UKSContextualPingMarkerWidget_SetPingInfo_Params
{
	struct FPingInfo*                                  PingInfoVal;                                              // (Parm)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingUnhovered
struct UKSContextualPingMarkerWidget_OnPingUnhovered_Params
{
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingHovered
struct UKSContextualPingMarkerWidget_OnPingHovered_Params
{
	int*                                               PingId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.OnInitializePing
struct UKSContextualPingMarkerWidget_OnInitializePing_Params
{
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.HandleOnContextualPingRemoved
struct UKSContextualPingMarkerWidget_HandleOnContextualPingRemoved_Params
{
	int*                                               PingId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             PingingPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingLifeSpan
struct UKSContextualPingMarkerWidget_GetPingLifeSpan_Params
{
	EPingType*                                         PingType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingIconByType
struct UKSContextualPingMarkerWidget_GetPingIconByType_Params
{
	EPingType*                                         PingType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingColorByType
struct UKSContextualPingMarkerWidget_GetPingColorByType_Params
{
	EPingType*                                         PingType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                PingColor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSContextualPingMarkerWidget.FindRowByType
struct UKSContextualPingMarkerWidget_FindRowByType_Params
{
	EPingType*                                         PingType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FContextualPing                             ContextualPingRow;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSCustomizationSelection.GetItemsForSlot
struct UKSCustomizationSelection_GetItemsForSlot_Params
{
	EMercCosmeticSlot*                                 slotType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSJobItem**                                 JobItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPUMG_StoreItem*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSCustomizationSelection.GetItemHelper
struct UKSCustomizationSelection_GetItemHelper_Params
{
	class UKSStoreItemHelper*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSDebugMenu.GetSubmenu
struct UKSDebugMenu_GetSubmenu_Params
{
	struct FDebugMenuCommandInfo*                      BaseCommand;                                              // (Parm)
	TArray<struct FDebugMenuCommandInfo>               Submenu;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSDebugMenu.GetSortedBaseDebugCommands
struct UKSDebugMenu_GetSortedBaseDebugCommands_Params
{
	TArray<struct FDebugMenuCommandInfo>               SortedCommands;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function KillstreakUINew.KSDebugMenu.GetParamTypeForSubCommand
struct UKSDebugMenu_GetParamTypeForSubCommand_Params
{
	struct FString*                                    BaseCommandString;                                        // (Parm, ZeroConstructor)
	EConsoleCommandParamType                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQueuedMessageWidget.QueueMessage
struct UKSQueuedMessageWidget_QueueMessage_Params
{
	struct FText*                                      Message;                                                  // (Parm)
};

// Function KillstreakUINew.KSQueuedMessageWidget.GetNextMessage
struct UKSQueuedMessageWidget_GetNextMessage_Params
{
	struct FText                                       Message;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSEliminationMessageWidget.QueueCombatMessage
struct UKSEliminationMessageWidget_QueueCombatMessage_Params
{
	struct FEliminationMessage*                        CombatMessage;                                            // (Parm)
};

// Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerDownReceived
struct UKSEliminationMessageWidget_OnPlayerDownReceived_Params
{
	struct FCombatEventInfo*                           EventInfo;                                                // (Parm)
};

// Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerDeathReceived
struct UKSEliminationMessageWidget_OnPlayerDeathReceived_Params
{
	struct FCombatEventInfo*                           EventInfo;                                                // (Parm)
};

// Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerAssistReceived
struct UKSEliminationMessageWidget_OnPlayerAssistReceived_Params
{
	struct FAssistInfo*                                EventInfo;                                                // (Parm)
};

// Function KillstreakUINew.KSEliminationMessageWidget.IsViewedPlayerStateSelf
struct UKSEliminationMessageWidget_IsViewedPlayerStateSelf_Params
{
	class APlayerState**                               ViewedPlayerState;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSEliminationMessageWidget.IsViewedKillCamPlayerState
struct UKSEliminationMessageWidget_IsViewedKillCamPlayerState_Params
{
	class APlayerState**                               KillCamPlayerState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSEliminationMessageWidget.GetNextCombatMessage
struct UKSEliminationMessageWidget_GetNextCombatMessage_Params
{
	struct FEliminationMessage                         CombatMessage;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSEliminationMessageWidget.ClearCombatMessages
struct UKSEliminationMessageWidget_ClearCombatMessages_Params
{
};

// Function KillstreakUINew.KSEMODataFactory.LevelUp
struct UKSEMODataFactory_LevelUp_Params
{
	struct FActivityTier*                              NewTier;                                                  // (Parm)
};

// Function KillstreakUINew.KSEMODataFactory.IsLocalPlayer
struct UKSEMODataFactory_IsLocalPlayer_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSEMODataFactory.HandlePlayerRewards
struct UKSEMODataFactory_HandlePlayerRewards_Params
{
	struct FPlayerRewardsSummary*                      PlayerRewardSummary;                                      // (Parm)
};

// Function KillstreakUINew.KSEMODataFactory.HandleEOMDetail
struct UKSEMODataFactory_HandleEOMDetail_Params
{
};

// Function KillstreakUINew.KSEMODataFactory.GetScoreboardStats
struct UKSEMODataFactory_GetScoreboardStats_Params
{
	struct FScoreboardStats                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSEMODataFactory.GetPreviousTier
struct UKSEMODataFactory_GetPreviousTier_Params
{
	struct FActivityTier*                              CurrentTier;                                              // (Parm)
	struct FActivityTier                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSEMODataFactory.GetPlayerRewardsSummary
struct UKSEMODataFactory_GetPlayerRewardsSummary_Params
{
	struct FPlayerRewardsSummary                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSEMODataFactory.GetPlayerLastTier
struct UKSEMODataFactory_GetPlayerLastTier_Params
{
	int*                                               PreviousXp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActivityTier                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSEMODataFactory.GetNextTier
struct UKSEMODataFactory_GetNextTier_Params
{
	struct FActivityTier*                              NextTier;                                                 // (Parm)
	struct FActivityTier                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSEMODataFactory.FindPlayerProgressionActivity
struct UKSEMODataFactory_FindPlayerProgressionActivity_Params
{
	class UKSActivityInstance*                         PlayerProgressionActivity;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSEMODataFactory.ComputeEOMResults
struct UKSEMODataFactory_ComputeEOMResults_Params
{
};

// Function KillstreakUINew.KSEMODataFactory.CalcPlayerProgression
struct UKSEMODataFactory_CalcPlayerProgression_Params
{
	int*                                               XpEarned;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSExpDisplayWidget.QueueExpDisplays
struct UKSExpDisplayWidget_QueueExpDisplays_Params
{
	struct FExpDisplayInfo*                            ExpInfo;                                                  // (Parm)
};

// Function KillstreakUINew.KSExpDisplayWidget.NativeHandleDisplayExpInfo
struct UKSExpDisplayWidget_NativeHandleDisplayExpInfo_Params
{
};

// Function KillstreakUINew.KSExpDisplayWidget.GetNextExpDisplay
struct UKSExpDisplayWidget_GetNextExpDisplay_Params
{
	struct FExpDisplayInfo                             ExpInfo;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSExpDisplayWidget.DisplayExpInfo
struct UKSExpDisplayWidget_DisplayExpInfo_Params
{
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetTargetValue
struct UKSFloatTickLerpWidgetBase_SetTargetValue_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpTime
struct UKSFloatTickLerpWidgetBase_SetLerpTime_Params
{
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpPower
struct UKSFloatTickLerpWidgetBase_SetLerpPower_Params
{
	float*                                             Power;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.IsLerping
struct UKSFloatTickLerpWidgetBase_IsLerping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.GetCurrentValue
struct UKSFloatTickLerpWidgetBase_GetCurrentValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.ForceCurrentValue
struct UKSFloatTickLerpWidgetBase_ForceCurrentValue_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSFloatTickLerpWidgetBase.DisplayForValue
struct UKSFloatTickLerpWidgetBase_DisplayForValue_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSFriendDataFactory.UIX_ShowExternalProfile
struct UKSFriendDataFactory_UIX_ShowExternalProfile_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSFriendDataFactory.GetSuggestedFriends_Info
struct UKSFriendDataFactory_GetSuggestedFriends_Info_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSFriendDataFactory.GetPendingFriends_Info
struct UKSFriendDataFactory_GetPendingFriends_Info_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSFriendDataFactory.GetOnlineFriends_Info
struct UKSFriendDataFactory_GetOnlineFriends_Info_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSFriendDataFactory.GetFriends_Info
struct UKSFriendDataFactory_GetFriends_Info_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSFriendDataFactory.GetFriendRequests_Info
struct UKSFriendDataFactory_GetFriendRequests_Info_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSMapWidgetBase.UpdateIcon
struct UKSMapWidgetBase_UpdateIcon_Params
{
	class UKSMapIconWidgetBase**                       Icon;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSMapWidgetBase.ToIconRenderCoords
struct UKSMapWidgetBase_ToIconRenderCoords_Params
{
	struct FVector2D*                                  MapCoords;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMapWidgetBase.ToIconRenderAngle
struct UKSMapWidgetBase_ToIconRenderAngle_Params
{
	float*                                             PlayerAngle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMapWidgetBase.TickCachedTransform
struct UKSMapWidgetBase_TickCachedTransform_Params
{
};

// Function KillstreakUINew.KSMapWidgetBase.SetScrambleState
struct UKSMapWidgetBase_SetScrambleState_Params
{
	bool*                                              Scrambled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSMapWidgetBase.OnScrambleStateChanged
struct UKSMapWidgetBase_OnScrambleStateChanged_Params
{
	bool*                                              Scrambled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSMapWidgetBase.OnReceiveDisplayWidgetInfo
struct UKSMapWidgetBase_OnReceiveDisplayWidgetInfo_Params
{
	struct FDisplayInfo*                               DisplayInfo;                                              // (Parm)
};

// Function KillstreakUINew.KSMapWidgetBase.OnGameStateSet
struct UKSMapWidgetBase_OnGameStateSet_Params
{
	class AGameStateBase**                             GameStateBase;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSMapWidgetBase.IsOnMap
struct UKSMapWidgetBase_IsOnMap_Params
{
	struct FVector2D*                                  MapCoords;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMapWidgetBase.GetDistanceToIcon
struct UKSMapWidgetBase_GetDistanceToIcon_Params
{
	class UKSMapIconWidgetBase**                       Icon;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMapWidgetBase.GetCachedViewedPawn
struct UKSMapWidgetBase_GetCachedViewedPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMapWidgetBase.GetCachedTransform
struct UKSMapWidgetBase_GetCachedTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMapWidgetBase.CreateNewIconWidget
struct UKSMapWidgetBase_CreateNewIconWidget_Params
{
	class UClass**                                     WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UniqueId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     AssociatedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    AssociatedObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DefaultLocation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             LifeSpan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSMapIconWidgetBase*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.ShowErrorPopup
struct AKSHUDCommon_ShowErrorPopup_Params
{
	struct FText*                                      ErrorMsg;                                                 // (Parm)
};

// Function KillstreakUINew.KSHUDCommon.ShouldShowCrossplayIconForPlayer
struct AKSHUDCommon_ShouldShowCrossplayIconForPlayer_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.SetPreferredSiteId
struct AKSHUDCommon_SetPreferredSiteId_Params
{
	int*                                               SiteId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.PrintToLog
struct AKSHUDCommon_PrintToLog_Params
{
	struct FText*                                      InText;                                                   // (Parm)
};

// Function KillstreakUINew.KSHUDCommon.OpenTextChatToPlayer
struct AKSHUDCommon_OpenTextChatToPlayer_Params
{
	class UPUMG_PlayerInfo**                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.OpenOptionsMenu
struct AKSHUDCommon_OpenOptionsMenu_Params
{
};

// Function KillstreakUINew.KSHUDCommon.LogErrorMessage
struct AKSHUDCommon_LogErrorMessage_Params
{
	struct FText*                                      ErrorMsg;                                                 // (Parm)
};

// Function KillstreakUINew.KSHUDCommon.IsSamePortalAsLocalPlayer
struct AKSHUDCommon_IsSamePortalAsLocalPlayer_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.HandleOpenTextChat
struct AKSHUDCommon_HandleOpenTextChat_Params
{
	bool*                                              BeginChatCommand;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.HandleControllerDisconnect
struct AKSHUDCommon_HandleControllerDisconnect_Params
{
};

// Function KillstreakUINew.KSHUDCommon.GetUISessionManager
struct AKSHUDCommon_GetUISessionManager_Params
{
	class UKSUISessionManager*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.GetSiteList
struct AKSHUDCommon_GetSiteList_Params
{
	TMap<int, struct FText>                            OutSiteIdToNameMap;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function KillstreakUINew.KSHUDCommon.GetSettingsDataFactory
struct AKSHUDCommon_GetSettingsDataFactory_Params
{
	class UKSSettingsDataFactory*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.GetPreferredSiteId
struct AKSHUDCommon_GetPreferredSiteId_Params
{
	int                                                OutSiteId;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.GetPartyDataFactory
struct AKSHUDCommon_GetPartyDataFactory_Params
{
	class UKSPartyDataFactory*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.GetNPEDataFactory
struct AKSHUDCommon_GetNPEDataFactory_Params
{
	class UKSNPEDataFactory*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.GetMercManager
struct AKSHUDCommon_GetMercManager_Params
{
	class UKSMercManager*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.GetLoginDataFactory
struct AKSHUDCommon_GetLoginDataFactory_Params
{
	class UPUMG_LoginDataFactory*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.GetLoadoutDataFactory
struct AKSHUDCommon_GetLoadoutDataFactory_Params
{
	class UKSLoadoutDataFactory*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.GetItemHelper
struct AKSHUDCommon_GetItemHelper_Params
{
	class UKSStoreItemHelper*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.GetFocusableWidgetContainers
struct AKSHUDCommon_GetFocusableWidgetContainers_Params
{
	TArray<class UPanelWidget*>                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSHUDCommon.GetContextBarWidget
struct AKSHUDCommon_GetContextBarWidget_Params
{
	class UKSContextBarWidget*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.GetChatDataFactory
struct AKSHUDCommon_GetChatDataFactory_Params
{
	class UKSChatDataFactory*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.GetAcquisitionManager
struct AKSHUDCommon_GetAcquisitionManager_Params
{
	class UPUMG_AcquisitionManager*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSHUDCommon.DisplayWatermark
struct AKSHUDCommon_DisplayWatermark_Params
{
};

// Function KillstreakUINew.KSHUDCommon.ApplySafeFrameScale
struct AKSHUDCommon_ApplySafeFrameScale_Params
{
	float*                                             SafeFrameScale;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSGameHUDNew.UIX_ReturnLobby
struct AKSGameHUDNew_UIX_ReturnLobby_Params
{
};

// Function KillstreakUINew.KSGameHUDNew.UIX_ReportPlayer
struct AKSGameHUDNew_UIX_ReportPlayer_Params
{
	class AKSGameState**                               KSGameState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             KSPlayerState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LocalPlayerTeamNum;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ReportedPlayerTeamNum;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EReportPlayerReason*                               ReportReason;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    InReportComment;                                          // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSGameHUDNew.UIX_MutePlayer
struct AKSGameHUDNew_UIX_MutePlayer_Params
{
	class AKSPlayerState**                             KSPlayerState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Mute;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSGameHUDNew.SetHUDVisible
struct AKSGameHUDNew_SetHUDVisible_Params
{
	bool*                                              bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSGameHUDNew.ReturnToHome
struct AKSGameHUDNew_ReturnToHome_Params
{
};

// Function KillstreakUINew.KSGameHUDNew.OnToggleHUD
struct AKSGameHUDNew_OnToggleHUD_Params
{
};

// Function KillstreakUINew.KSGameHUDNew.IsPlayerMuted
struct AKSGameHUDNew_IsPlayerMuted_Params
{
	class AKSPlayerState**                             KSPlayerState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSGameHUDNew.HandleLoginStateChange
struct AKSGameHUDNew_HandleLoginStateChange_Params
{
	EPUMG_LoginState*                                  LoginState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSGameInfoOverlayBase.HandlePlayerStateReady
struct UKSGameInfoOverlayBase_HandlePlayerStateReady_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSGamepadPromptWidget.SetContext
struct UKSGamepadPromptWidget_SetContext_Params
{
	struct FButtonPromptContext*                       PromptContext;                                            // (Parm)
};

// Function KillstreakUINew.KSGamepadPromptWidget.PushContext
struct UKSGamepadPromptWidget_PushContext_Params
{
	struct FButtonPromptContext*                       PromptContext;                                            // (Parm)
};

// Function KillstreakUINew.KSGamepadPromptWidget.PopContext
struct UKSGamepadPromptWidget_PopContext_Params
{
	struct FButtonPromptContext                        OutContext;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSGamepadPromptWidget.ClearAllContext
struct UKSGamepadPromptWidget_ClearAllContext_Params
{
};

// Function KillstreakUINew.KSGamepadPromptWidget.ApplyContext
struct UKSGamepadPromptWidget_ApplyContext_Params
{
	struct FButtonPromptContext*                       Context;                                                  // (Parm)
};

// Function KillstreakUINew.KSHealthWidget.OverhealChangeFromChar
struct UKSHealthWidget_OverhealChangeFromChar_Params
{
	class AKSCharacterBase**                           Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAnimatedChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSHealthWidget.OnOverhealChanged
struct UKSHealthWidget_OnOverhealChanged_Params
{
	float*                                             OldOverheal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewOverheal;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAnimatedChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSHealthWidget.OnHealthChanged
struct UKSHealthWidget_OnHealthChanged_Params
{
	float*                                             OldHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OldMaxHealth;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewMaxHealth;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAnimatedChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSHealthWidget.HealthChangeFromChar
struct UKSHealthWidget_HealthChangeFromChar_Params
{
	class AKSCharacterBase**                           Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAnimatedChange;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSHealthWidget.HandlePawnOverhealChange
struct UKSHealthWidget_HandlePawnOverhealChange_Params
{
	class AKSCharacterBase**                           Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSHealthWidget.HandlePawnHealthChange
struct UKSHealthWidget_HandlePawnHealthChange_Params
{
	class AKSCharacterBase**                           Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSInfoActorWidgetInterface.SetInfoActor
struct UKSInfoActorWidgetInterface_SetInfoActor_Params
{
	class AKSWidgetInfoActor**                         InfoActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSJobSelectionWidget.GetJobStoreItems
struct UKSJobSelectionWidget_GetJobStoreItems_Params
{
	TArray<class UPUMG_StoreItem*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSJobSelectionWidget.GetItemHelper
struct UKSJobSelectionWidget_GetItemHelper_Params
{
	class UKSStoreItemHelper*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSKevinTest.RequestJobItems
struct UKSKevinTest_RequestJobItems_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSKevinTest.GetJobStoreItems
struct UKSKevinTest_GetJobStoreItems_Params
{
	TArray<class UPUMG_StoreItem*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSKevinTest.GetItemHelper
struct UKSKevinTest_GetItemHelper_Params
{
	class UKSStoreItemHelper*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLoadoutDataFactory.GetEquippedAccountItem
struct UKSLoadoutDataFactory_GetEquippedAccountItem_Params
{
	EPlayerAccountSlot*                                eSlot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem*                                     EquippedItem;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLoadoutDataFactory.EquipAccountItemToSlot
struct UKSLoadoutDataFactory_EquipAccountItemToSlot_Params
{
	EPlayerAccountSlot*                                eSlot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem**                                    Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSave;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.UpdateLobbySkinToEquippedSkin
struct AKSLobbyHUDNew_UpdateLobbySkinToEquippedSkin_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.UIX_MutePlayer
struct AKSLobbyHUDNew_UIX_MutePlayer_Params
{
	class UPUMG_PlayerInfo**                           PlayerData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Mute;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.TransitionCamera
struct AKSLobbyHUDNew_TransitionCamera_Params
{
	struct FName*                                      CameraTag;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.ToggleDisablePartyLobbyCharacters
struct AKSLobbyHUDNew_ToggleDisablePartyLobbyCharacters_Params
{
	bool*                                              Disable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.ShowPopupConfirmation
struct AKSLobbyHUDNew_ShowPopupConfirmation_Params
{
	struct FText*                                      Message;                                                  // (Parm)
	ESocialMessageType*                                MessageType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.ShowAlphaDisclaimerCheckoff
struct AKSLobbyHUDNew_ShowAlphaDisclaimerCheckoff_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.ShouldShowWhatsNew
struct AKSLobbyHUDNew_ShouldShowWhatsNew_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.SetNewLobbyAnimState
struct AKSLobbyHUDNew_SetNewLobbyAnimState_Params
{
	ELobbyCharacterAnimState*                          TargetState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.ResetLobbyCharacters
struct AKSLobbyHUDNew_ResetLobbyCharacters_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.PlayLoopingLevelSequence
struct AKSLobbyHUDNew_PlayLoopingLevelSequence_Params
{
	struct FName*                                      LvlSeqTag;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.OnStoreVendorsLoaded
struct AKSLobbyHUDNew_OnStoreVendorsLoaded_Params
{
	int*                                               GroupId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>*                                       VendorIds;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function KillstreakUINew.KSLobbyHUDNew.IsPlayerMuted
struct AKSLobbyHUDNew_IsPlayerMuted_Params
{
	class UPUMG_PlayerInfo**                           PlayerData;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyIdDataUpdated
struct AKSLobbyHUDNew_HandleSpecificPartyIdDataUpdated_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyDataUpdated
struct AKSLobbyHUDNew_HandleSpecificPartyDataUpdated_Params
{
	struct FPUMG_PartyMemberData*                      PartyMember;                                              // (Parm)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleReturnFromBattleLevelSeqStopped
struct AKSLobbyHUDNew_HandleReturnFromBattleLevelSeqStopped_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.HandlePlayerLoadoutsUpdated
struct AKSLobbyHUDNew_HandlePlayerLoadoutsUpdated_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.HandlePartyMemberDataUpdated
struct AKSLobbyHUDNew_HandlePartyMemberDataUpdated_Params
{
	struct FPUMG_PartyMemberData*                      PartyMember;                                              // (Parm)
	int*                                               MemberIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandlePartyDataUpdated
struct AKSLobbyHUDNew_HandlePartyDataUpdated_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleMatchStatusUpdated
struct AKSLobbyHUDNew_HandleMatchStatusUpdated_Params
{
	EPUMG_MatchStatus*                                 MatchStatus;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleLoginStateChange
struct AKSLobbyHUDNew_HandleLoginStateChange_Params
{
	EPUMG_LoginState*                                  LoginState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleExitToGameLevelSeqStopped
struct AKSLobbyHUDNew_HandleExitToGameLevelSeqStopped_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleDenyPartyInvitation
struct AKSLobbyHUDNew_HandleDenyPartyInvitation_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.HandleAcceptPartyInvitation
struct AKSLobbyHUDNew_HandleAcceptPartyInvitation_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.GetPlayerWhoDataFactory
struct AKSLobbyHUDNew_GetPlayerWhoDataFactory_Params
{
	class UKSPlayerWhoDataFactory*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetPlayerDataFactory
struct AKSLobbyHUDNew_GetPlayerDataFactory_Params
{
	class UPUMG_PlayerDataFactory*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetLobbyWidget
struct AKSLobbyHUDNew_GetLobbyWidget_Params
{
	class UKSLobbyWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetLobbyCharacterByPosition
struct AKSLobbyHUDNew_GetLobbyCharacterByPosition_Params
{
	ELobbyCharacterIndex*                              CharacterIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSLobbyCharacter*                           LobbyCharacter;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetKSQueueDataFactory
struct AKSLobbyHUDNew_GetKSQueueDataFactory_Params
{
	class UKSQueueDataFactory*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetJsonDataFactory
struct AKSLobbyHUDNew_GetJsonDataFactory_Params
{
	class UKSJsonDataFactory*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetFriendDataFactory
struct AKSLobbyHUDNew_GetFriendDataFactory_Params
{
	class UKSFriendDataFactory*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.GetEMODataFactory
struct AKSLobbyHUDNew_GetEMODataFactory_Params
{
	class UKSEMODataFactory*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLobbyHUDNew.ForceEulaAccept
struct AKSLobbyHUDNew_ForceEulaAccept_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.CreateInitialPlayerLoadout
struct AKSLobbyHUDNew_CreateInitialPlayerLoadout_Params
{
};

// Function KillstreakUINew.KSLobbyHUDNew.CancelExitToGameLevelAnimStoppedHandling
struct AKSLobbyHUDNew_CancelExitToGameLevelAnimStoppedHandling_Params
{
};

// Function KillstreakUINew.KSLowAmmoAlertWidget.GetAmmoState
struct UKSLowAmmoAlertWidget_GetAmmoState_Params
{
	ELowAmmoState                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLowAmmoAlertWidget.CalcAmmoState
struct UKSLowAmmoAlertWidget_CalcAmmoState_Params
{
	ELowAmmoState                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSLowAmmoAlertWidget.AmmoStateChanged
struct UKSLowAmmoAlertWidget_AmmoStateChanged_Params
{
};

// Function KillstreakUINew.KSMarkerDisplayBase.GetScreenPositionForMarker
struct UKSMarkerDisplayBase_GetScreenPositionForMarker_Params
{
	struct FVector*                                    TargetLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AnchorHeight;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MarginX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MarginY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMatchResult.UpdateRoundBaseScore
struct UKSMatchResult_UpdateRoundBaseScore_Params
{
	class AKSGameState_RoundGame**                     pGameState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSMatchResult.UpdateResultStatus
struct UKSMatchResult_UpdateResultStatus_Params
{
	EGameResult*                                       Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Status;                                                   // (Parm, OutParm)
};

// Function KillstreakUINew.KSMatchResult.ProcessResultAnnoucement
struct UKSMatchResult_ProcessResultAnnoucement_Params
{
	EGameResult*                                       Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSMatchResult.HandleResultReceived
struct UKSMatchResult_HandleResultReceived_Params
{
	struct FRoundResultAnnoucement*                    ResultAnnoucement;                                        // (Parm)
};

// Function KillstreakUINew.KSMatchResult.HandleEndOfMatch
struct UKSMatchResult_HandleEndOfMatch_Params
{
};

// Function KillstreakUINew.KSMatchResult.GetTeamNames
struct UKSMatchResult_GetTeamNames_Params
{
	struct FText                                       pTeamName;                                                // (Parm, OutParm)
	struct FText                                       pOpposingTeamName;                                        // (Parm, OutParm)
};

// Function KillstreakUINew.KSMercManager.Uninitialize
struct UKSMercManager_Uninitialize_Params
{
};

// Function KillstreakUINew.KSMercManager.Initialize
struct UKSMercManager_Initialize_Params
{
	class APUMG_HUD**                                  InHud;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSMercManager.GetLoadoutDataFactory
struct UKSMercManager_GetLoadoutDataFactory_Params
{
	class UKSLoadoutDataFactory*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMercManager.GetEquippedCosmeticItemBySlot
struct UKSMercManager_GetEquippedCosmeticItemBySlot_Params
{
	EMercCosmeticSlot*                                 eSlot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SlotPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSJobItem**                                 JobItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem*                                     CosmeticItem;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMercManager.EquipCosmeticItemToSlot
struct UKSMercManager_EquipCosmeticItemToSlot_Params
{
	EMercCosmeticSlot*                                 eSlot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SlotPosition;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSJobItem**                                 JobItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem**                                    CosmeticItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSMinimapWidgetBase.UpdateMapMaterialTransform
struct UKSMinimapWidgetBase_UpdateMapMaterialTransform_Params
{
	class UMaterialInstanceDynamic**                   MapMaterial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NormalizedX;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NormalizedY;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSModelViewer.ViewModelByName
struct UKSModelViewer_ViewModelByName_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InTargetItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable**                                 InDataTable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSModelViewer.ViewModelAttachment
struct UKSModelViewer_ViewModelAttachment_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachment**                        InAttachment;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSpawnOnActorName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSModelViewer.ViewModel
struct UKSModelViewer_ViewModel_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem**                                    InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSpawnOnActorName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   DefaultWeaponState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InScaleToFitTargetActor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   InDefaultRotation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InBindControllerToSpawner;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSModelViewer.UnbindControllerFromSpawner
struct UKSModelViewer_UnbindControllerFromSpawner_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSpawnActorName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSModelViewer.UnbindAllControllersFromSpawners
struct UKSModelViewer_UnbindAllControllersFromSpawners_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSModelViewer.HideModelAttachment
struct UKSModelViewer_HideModelAttachment_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSpawnOnActorName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSModelViewer.ClearModelAttachments
struct UKSModelViewer_ClearModelAttachments_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSpawnOnActorName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSModelViewer.ClearModel
struct UKSModelViewer_ClearModel_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSpawnOnActorName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSModelViewer.BindDelForWeaponModelSet
struct UKSModelViewer_BindDelForWeaponModelSet_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSpawnOnActorName;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            InEventCallback;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSModelViewer.BindControllerToSpawner
struct UKSModelViewer_BindControllerToSpawner_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InSpawnActorName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSModWidget_DetectEnemy.OnDetectChanged
struct UKSModWidget_DetectEnemy_OnDetectChanged_Params
{
	class UKSModInst_DetectEnemy**                     DetectEnemyModInst;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bIsDetectingEnemy;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSModWidget_DetectEnemy.GetIconBox
struct UKSModWidget_DetectEnemy_GetIconBox_Params
{
	class UHorizontalBox*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSModWidgetInterface.RemoveModInstance
struct UKSModWidgetInterface_RemoveModInstance_Params
{
	class UKSPlayerModInstance**                       InInstance;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSModWidgetInterface.AddModInstance
struct UKSModWidgetInterface_AddModInstance_Params
{
	class UKSPlayerModInstance**                       InInstance;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSNewsRotatorWidget.OnJsonChanged
struct UKSNewsRotatorWidget_OnJsonChanged_Params
{
};

// Function KillstreakUINew.KSNewsRotatorWidget.GetPanelData
struct UKSNewsRotatorWidget_GetPanelData_Params
{
	TArray<class UKSNewsRotatorData*>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSNewsRotatorWidget.GetJsonDataFactory
struct UKSNewsRotatorWidget_GetJsonDataFactory_Params
{
	class UKSJsonDataFactory*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSNPEDataFactory.UIX_ClaimTutorialActivity
struct UKSNPEDataFactory_UIX_ClaimTutorialActivity_Params
{
};

// Function KillstreakUINew.KSNPEDataFactory.SkipTutorial
struct UKSNPEDataFactory_SkipTutorial_Params
{
};

// Function KillstreakUINew.KSNPEDataFactory.ShouldShowTutorialPrompt
struct UKSNPEDataFactory_ShouldShowTutorialPrompt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSNPEDataFactory.QueueTutorial
struct UKSNPEDataFactory_QueueTutorial_Params
{
};

// Function KillstreakUINew.KSNPEDataFactory.HandleTutorialPopup
struct UKSNPEDataFactory_HandleTutorialPopup_Params
{
};

// Function KillstreakUINew.KSNPEDataFactory.GetQueueDataFactory
struct UKSNPEDataFactory_GetQueueDataFactory_Params
{
	class UKSQueueDataFactory*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPartyDataFactory.BroadcastPartyInvitationError
struct UKSPartyDataFactory_BroadcastPartyInvitationError_Params
{
	struct FText*                                      InvitationError;                                          // (Parm)
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.RefreshFromPartyData
struct UKSPartyManagerWidgetBase_RefreshFromPartyData_Params
{
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberDataUpdated
struct UKSPartyManagerWidgetBase_HandlePartyMemberDataUpdated_Params
{
	struct FPUMG_PartyMemberData*                      MemberData;                                               // (Parm)
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.GetSuggestedInvite
struct UKSPartyManagerWidgetBase_GetSuggestedInvite_Params
{
	class UPUMG_PlayerInfo*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.GetPartyDataFactory
struct UKSPartyManagerWidgetBase_GetPartyDataFactory_Params
{
	class UKSPartyDataFactory*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPartyManagerWidgetBase.ApplyPartyData
struct UKSPartyManagerWidgetBase_ApplyPartyData_Params
{
	TArray<struct FPUMG_PartyMemberData>*              PartyMembers;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function KillstreakUINew.KSPerkTreeBase.SetCursorLerping
struct UKSPerkTreeBase_SetCursorLerping_Params
{
	bool*                                              bLerping;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPerkTreeBase.RefreshEdge
struct UKSPerkTreeBase_RefreshEdge_Params
{
	class UKSPerkTreeEdgeBase**                        Edge;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               column;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Row;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FIntPoint, class UKSPerkTreeNodeBase*>* NodesMap;                                                 // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSPerkTreeBase.InitializeNodes
struct UKSPerkTreeBase_InitializeNodes_Params
{
	TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeSelected
struct UKSPerkTreeBase_HandleTreeNodeSelected_Params
{
	class UKSPerkTreeNodeBase**                        SelectedNode;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCustomLoadoutItem*                         SelectedPerk;                                             // (Parm)
	bool*                                              bAlreadyEquipped;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeHovered
struct UKSPerkTreeBase_HandleTreeNodeHovered_Params
{
	class UKSPerkTreeNodeBase**                        HoveredNode;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCustomLoadoutItem*                         HoveredPerk;                                              // (Parm)
};

// Function KillstreakUINew.KSPerkTreeBase.GetHoverCursor
struct UKSPerkTreeBase_GetHoverCursor_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSPerkTreeBase.GetDefaultFocusNode
struct UKSPerkTreeBase_GetDefaultFocusNode_Params
{
	class UKSPerkTreeNodeBase*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSPerkTreeBase.BindNode
struct UKSPerkTreeBase_BindNode_Params
{
	class UKSPerkTreeNodeBase**                        TreeNode;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSPerkTreeEdgeBase.SetViewByState
struct UKSPerkTreeEdgeBase_SetViewByState_Params
{
	struct FKSPerkTreeEdgeInfo*                        EdgeInfo;                                                 // (Parm)
};

// Function KillstreakUINew.KSPerkTreeNodeBase.SetNodeState
struct UKSPerkTreeNodeBase_SetNodeState_Params
{
	EPerkTreeNodeState*                                NewNodeState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPerkTreeNodeBase.RefreshView
struct UKSPerkTreeNodeBase_RefreshView_Params
{
};

// Function KillstreakUINew.KSPerkTreeNodeBase.GetNodeState
struct UKSPerkTreeNodeBase_GetNodeState_Params
{
	EPerkTreeNodeState                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerAmmoLoaderWidget.SetActiveAmmoWidget
struct UKSPlayerAmmoLoaderWidget_SetActiveAmmoWidget_Params
{
	class UClass**                                     NewWidgetClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSWeapon**                                  NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerAmmoLoaderWidget.GetActiveAmmoWidget
struct UKSPlayerAmmoLoaderWidget_GetActiveAmmoWidget_Params
{
	class UKSAmmoWidget*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerAmmoLoaderWidget.ClearActiveAmmoWidget
struct UKSPlayerAmmoLoaderWidget_ClearActiveAmmoWidget_Params
{
};

// Function KillstreakUINew.KSPlayerDataFactory.SetNPEGuidedCalloutSeen
struct UKSPlayerDataFactory_SetNPEGuidedCalloutSeen_Params
{
	EConfigPropertyGuidedCalloutScenes*                GuidedCalloutScene;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerDataFactory.HasSeenNPEGuidedCallout
struct UKSPlayerDataFactory_HasSeenNPEGuidedCallout_Params
{
	EConfigPropertyGuidedCalloutScenes*                GuidedCalloutScene;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelIncremented
struct UKSPlayerDataFactory_HandlePlayerLevelIncremented_Params
{
	class UKSActivityInstance**                        ActivityInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelChanged
struct UKSPlayerDataFactory_HandlePlayerLevelChanged_Params
{
	class UKSActivityInstance**                        Activity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerDataFactory.GetRogueBucksCount
struct UKSPlayerDataFactory_GetRogueBucksCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerDataFactory.GetPlayerLevel
struct UKSPlayerDataFactory_GetPlayerLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerDataFactory.GetPlayerBannerIndex
struct UKSPlayerDataFactory_GetPlayerBannerIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetResidualValue
struct UKSPlayerHealthSegmentBase_View_SetResidualValue_Params
{
	float*                                             PercentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetResidualColor
struct UKSPlayerHealthSegmentBase_View_SetResidualColor_Params
{
	struct FLinearColor*                               Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetMainValue
struct UKSPlayerHealthSegmentBase_View_SetMainValue_Params
{
	float*                                             PercentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCanTriggerPulse;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetMainColor
struct UKSPlayerHealthSegmentBase_View_SetMainColor_Params
{
	struct FLinearColor*                               Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_PlayEmptiedPulse
struct UKSPlayerHealthSegmentBase_View_PlayEmptiedPulse_Params
{
};

// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_PlayDamagePulse
struct UKSPlayerHealthSegmentBase_View_PlayDamagePulse_Params
{
	struct FLinearColor*                               PeakColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               BaseColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_ShowModifier
struct UKSPlayerHealthWidgetBase_View_ShowModifier_Params
{
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualPercent
struct UKSPlayerHealthWidgetBase_View_SetResidualPercent_Params
{
	float*                                             ResidualPercent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualMode
struct UKSPlayerHealthWidgetBase_View_SetResidualMode_Params
{
	bool*                                              IsHealing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualAlpha
struct UKSPlayerHealthWidgetBase_View_SetResidualAlpha_Params
{
	float*                                             ResidualAlpha;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetModifierValue
struct UKSPlayerHealthWidgetBase_View_SetModifierValue_Params
{
	float*                                             ModifierValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetModifierImage
struct UKSPlayerHealthWidgetBase_View_SetModifierImage_Params
{
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthTextValue
struct UKSPlayerHealthWidgetBase_View_SetHealthTextValue_Params
{
	float*                                             HealthValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OverhealValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthPercent
struct UKSPlayerHealthWidgetBase_View_SetHealthPercent_Params
{
	float*                                             HealthPercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthMode
struct UKSPlayerHealthWidgetBase_View_SetHealthMode_Params
{
	bool*                                              IsDowned;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsOverhealed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_PlayModifierPulse
struct UKSPlayerHealthWidgetBase_View_PlayModifierPulse_Params
{
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_PlayDamagePulse
struct UKSPlayerHealthWidgetBase_View_PlayDamagePulse_Params
{
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_HideModifier
struct UKSPlayerHealthWidgetBase_View_HideModifier_Params
{
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.IsDisplayableModifier
struct UKSPlayerHealthWidgetBase_IsDisplayableModifier_Params
{
	class UKSPlayerModInstance**                       ModInstance;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.HandlePlayerDownedChanged
struct UKSPlayerHealthWidgetBase_HandlePlayerDownedChanged_Params
{
	class AKSPlayerState**                             pKSPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.HandleDisplayableModifierTriggered
struct UKSPlayerHealthWidgetBase_HandleDisplayableModifierTriggered_Params
{
};

// Function KillstreakUINew.KSPlayerHealthWidgetBase.CheckPlayerMods
struct UKSPlayerHealthWidgetBase_CheckPlayerMods_Params
{
	class AKSCharacter**                               ModsChar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.ViewExternalProfile
struct UKSPlayerInfo_ViewExternalProfile_Params
{
};

// Function KillstreakUINew.KSPlayerInfo.ShouldShowViewExternalProfile
struct UKSPlayerInfo_ShouldShowViewExternalProfile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.ShouldShowCrossplayIconForPlayer
struct UKSPlayerInfo_ShouldShowCrossplayIconForPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.IsSuggestedFriend
struct UKSPlayerInfo_IsSuggestedFriend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.IsSamePortalAsLocalPlayer
struct UKSPlayerInfo_IsSamePortalAsLocalPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.IsRequestingFriend
struct UKSPlayerInfo_IsRequestingFriend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.IsPendingFriend
struct UKSPlayerInfo_IsPendingFriend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.IsOnline
struct UKSPlayerInfo_IsOnline_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.IsInQueue
struct UKSPlayerInfo_IsInQueue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.IsInMatch
struct UKSPlayerInfo_IsInMatch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.IsInLobby
struct UKSPlayerInfo_IsInLobby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.IsFriend
struct UKSPlayerInfo_IsFriend_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.IsDND
struct UKSPlayerInfo_IsDND_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.InviteToParty
struct UKSPlayerInfo_InviteToParty_Params
{
	struct FText                                       OutErrorText;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.HasPortalRelationship
struct UKSPlayerInfo_HasPortalRelationship_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.HasHRRelationship
struct UKSPlayerInfo_HasHRRelationship_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.GetStatusMessage
struct UKSPlayerInfo_GetStatusMessage_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSPlayerInfo.GetRichPresenceText
struct UKSPlayerInfo_GetRichPresenceText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSPlayerInfo.GetPlayerOnlineStatus
struct UKSPlayerInfo_GetPlayerOnlineStatus_Params
{
	EKSPlayerOnlineStatus                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.GetEquippedAccountItem
struct UKSPlayerInfo_GetEquippedAccountItem_Params
{
	EPlayerAccountSlot*                                eSlot;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem*                                     EquippedItem;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.CanBeSpectated
struct UKSPlayerInfo_CanBeSpectated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerInfo.CanBeChallenged
struct UKSPlayerInfo_CanBeChallenged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.UIX_RequestJobSelect
struct UKSPlayerJobSelectWidgetBase_UIX_RequestJobSelect_Params
{
	int*                                               JobItemId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EJobSelectionState*                                RequestedState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.SortEntriesByRoles
struct UKSPlayerJobSelectWidgetBase_SortEntriesByRoles_Params
{
	TArray<struct FJobSelectionEntry>*                 JobEntriesList;                                           // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.ResetJobSelect
struct UKSPlayerJobSelectWidgetBase_ResetJobSelect_Params
{
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.ReadyToPopulateJobs
struct UKSPlayerJobSelectWidgetBase_ReadyToPopulateJobs_Params
{
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobSelectReady
struct UKSPlayerJobSelectWidgetBase_OnJobSelectReady_Params
{
	TArray<struct FJobRoleSection>*                    JobSections;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntryChanged
struct UKSPlayerJobSelectWidgetBase_OnJobEntryChanged_Params
{
	struct FJobSelectionEntry*                         JobEntry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntryAdded
struct UKSPlayerJobSelectWidgetBase_OnJobEntryAdded_Params
{
	struct FJobSelectionEntry*                         JobEntry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntryAcknowledge
struct UKSPlayerJobSelectWidgetBase_OnJobEntryAcknowledge_Params
{
	int*                                               JobItemId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EJobSelectionState*                                RequestState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobDataFactoryInitialized
struct UKSPlayerJobSelectWidgetBase_OnJobDataFactoryInitialized_Params
{
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobsInitialized
struct UKSPlayerJobSelectWidgetBase_HandleJobsInitialized_Params
{
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionManagerReady
struct UKSPlayerJobSelectWidgetBase_HandleJobSelectionManagerReady_Params
{
	class UKSJobSelectionManager**                     JobSelectionManager;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionInitialized
struct UKSPlayerJobSelectWidgetBase_HandleJobSelectionInitialized_Params
{
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryStateChanged
struct UKSPlayerJobSelectWidgetBase_HandleJobEntryStateChanged_Params
{
	struct FJobSelectionEntry*                         JobEntry;                                                 // (Parm)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAdded
struct UKSPlayerJobSelectWidgetBase_HandleJobEntryAdded_Params
{
	struct FJobSelectionEntry*                         JobEntry;                                                 // (Parm)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAcknowledge
struct UKSPlayerJobSelectWidgetBase_HandleJobEntryAcknowledge_Params
{
	int*                                               ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EJobSelectionState*                                RequestState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobSelectionComponent
struct UKSPlayerJobSelectWidgetBase_GetJobSelectionComponent_Params
{
	class UKSJobSelectionComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobRoleSection
struct UKSPlayerJobSelectWidgetBase_GetJobRoleSection_Params
{
	TArray<struct FJobRoleSection>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobItemById
struct UKSPlayerJobSelectWidgetBase_GetJobItemById_Params
{
	int*                                               JobItemId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSJobItem*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobEntries
struct UKSPlayerJobSelectWidgetBase_GetJobEntries_Params
{
	TArray<struct FJobSelectionEntry>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetCurrentSelectedJobState
struct UKSPlayerJobSelectWidgetBase_GetCurrentSelectedJobState_Params
{
	EJobSelectionState                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetCurrentSelectedJobId
struct UKSPlayerJobSelectWidgetBase_GetCurrentSelectedJobId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetCurrentPlayerSelectionState
struct UKSPlayerJobSelectWidgetBase_GetCurrentPlayerSelectionState_Params
{
	EPlayerSelectionState                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.TriggerDisplayUpdate
struct UKSPlayerShopWidgetBase_TriggerDisplayUpdate_Params
{
	bool*                                              ForceUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.ShopItemChanged
struct UKSPlayerShopWidgetBase_ShopItemChanged_Params
{
	struct FShopItem*                                  ChangedItem;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopState
struct UKSPlayerShopWidgetBase_SetShopState_Params
{
	bool*                                              IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopContent
struct UKSPlayerShopWidgetBase_SetShopContent_Params
{
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.SetPromptShow
struct UKSPlayerShopWidgetBase_SetPromptShow_Params
{
	bool*                                              ShouldShowPrompt;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.SetCashValue
struct UKSPlayerShopWidgetBase_SetCashValue_Params
{
	int*                                               CashValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.PurchaseAcknowledge
struct UKSPlayerShopWidgetBase_PurchaseAcknowledge_Params
{
	EShopItemType*                                     ShopItemType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleTeamsFlipped
struct UKSPlayerShopWidgetBase_HandleTeamsFlipped_Params
{
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopOpened
struct UKSPlayerShopWidgetBase_HandleShopOpened_Params
{
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopItemChanged
struct UKSPlayerShopWidgetBase_HandleShopItemChanged_Params
{
	struct FShopItem*                                  ChangedItem;                                              // (Parm)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopClosed
struct UKSPlayerShopWidgetBase_HandleShopClosed_Params
{
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopAvailabilityChanged
struct UKSPlayerShopWidgetBase_HandleShopAvailabilityChanged_Params
{
	bool*                                              bAvailable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandlePurchaseAcknowledged
struct UKSPlayerShopWidgetBase_HandlePurchaseAcknowledged_Params
{
	EShopItemType*                                     ShopItemType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleCashChanged
struct UKSPlayerShopWidgetBase_HandleCashChanged_Params
{
	int*                                               Cash;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPlayerWhoDataFactory.ClearSearchResults
struct UKSPlayerWhoDataFactory_ClearSearchResults_Params
{
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewSetCaptureProgress
struct UKSPointObjectiveMarkerWidget_ViewSetCaptureProgress_Params
{
	float*                                             ProgressPercent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewApplyTimerValue
struct UKSPointObjectiveMarkerWidget_ViewApplyTimerValue_Params
{
	float*                                             TimerSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalTimerSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ShouldHideObjectiveIcon
struct UKSPointObjectiveMarkerWidget_ShouldHideObjectiveIcon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetView
struct UKSPointObjectiveMarkerWidget_SetView_Params
{
	struct FKSPointObjectiveMarkerViewState*           ViewState;                                                // (Parm)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.SelectTeamColorForState
struct UKSPointObjectiveMarkerWidget_SelectTeamColorForState_Params
{
	struct FLinearColor                                AllyColor;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                EnemyColor;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                NeutralColor;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInTimerState
struct UKSPointObjectiveMarkerWidget_IsInTimerState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInProgressState
struct UKSPointObjectiveMarkerWidget_IsInProgressState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInMatchTimerState
struct UKSPointObjectiveMarkerWidget_IsInMatchTimerState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInLockedState
struct UKSPointObjectiveMarkerWidget_IsInLockedState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCountdownState
struct UKSPointObjectiveMarkerWidget_IsInCountdownState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCapturedState
struct UKSPointObjectiveMarkerWidget_IsInCapturedState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandlePhaseChanged
struct UKSPointObjectiveMarkerWidget_HandlePhaseChanged_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleBombStateChanged
struct UKSPointObjectiveMarkerWidget_HandleBombStateChanged_Params
{
	struct FKSNeutralBombState*                        BombState;                                                // (Parm)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetCurrentViewState
struct UKSPointObjectiveMarkerWidget_GetCurrentViewState_Params
{
	struct FKSPointObjectiveMarkerViewState            ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetAssociatedObjective
struct UKSPointObjectiveMarkerWidget_GetAssociatedObjective_Params
{
	class AKSObjectiveBase*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPointObjectiveMarkerWidget.DoesAttackingTeamExist
struct UKSPointObjectiveMarkerWidget_DoesAttackingTeamExist_Params
{
	bool                                               IsLocalPlayerOnAttackingTeam;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPortalOffersWidget.GetPortalOfferItems
struct UKSPortalOffersWidget_GetPortalOfferItems_Params
{
	TArray<class UPUMG_StoreItem*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSPortalOffersWidget.GetItemHelper
struct UKSPortalOffersWidget_GetItemHelper_Params
{
	class UKSStoreItemHelper*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSPurchaseModal.SetupBindings
struct UKSPurchaseModal_SetupBindings_Params
{
};

// Function KillstreakUINew.KSPurchaseModal.HandleShowPurchaseModal
struct UKSPurchaseModal_HandleShowPurchaseModal_Params
{
	class UPUMG_StoreItem**                            Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_StoreItemPrice**                       Price;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSPurchaseModal.GetStoreItemHelper
struct UKSPurchaseModal_GetStoreItemHelper_Params
{
	class UPUMG_StoreItemHelper*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQueueDataFactory.SetSelectedQueueId
struct UKSQueueDataFactory_SetSelectedQueueId_Params
{
	int*                                               QueueId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQueueDataFactory.GetSelectedQueueId
struct UKSQueueDataFactory_GetSelectedQueueId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQueueDataFactory.GetQueueInfoById
struct UKSQueueDataFactory_GetQueueInfoById_Params
{
	int*                                               QueueId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FClientQueueInfo                            InClientQueueInfo;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQuickPlay.UpdateQueuePermissions
struct UKSQuickPlay_UpdateQueuePermissions_Params
{
};

// Function KillstreakUINew.KSQuickPlay.UIX_AttemptJoinSelectedQueue
struct UKSQuickPlay_UIX_AttemptJoinSelectedQueue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQuickPlay.UIX_AttemptCancelQueue
struct UKSQuickPlay_UIX_AttemptCancelQueue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQuickPlay.SetupReadyForQueueing
struct UKSQuickPlay_SetupReadyForQueueing_Params
{
};

// Function KillstreakUINew.KSQuickPlay.SetupBindings
struct UKSQuickPlay_SetupBindings_Params
{
};

// Function KillstreakUINew.KSQuickPlay.SetDefaultSelectedQueue
struct UKSQuickPlay_SetDefaultSelectedQueue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQuickPlay.SetCurrentlySelectedQueue
struct UKSQuickPlay_SetCurrentlySelectedQueue_Params
{
	int*                                               QueueId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQuickPlay.ReceiveMatchStatusUpdate
struct UKSQuickPlay_ReceiveMatchStatusUpdate_Params
{
	EPUMG_MatchStatus*                                 CurrentMatchStatus;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSQuickPlay.OnQueuePermissionChanged
struct UKSQuickPlay_OnQueuePermissionChanged_Params
{
	bool*                                              CanQueue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSQuickPlay.OnControlQueuePermissionChanged
struct UKSQuickPlay_OnControlQueuePermissionChanged_Params
{
	bool*                                              CanControl;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSQuickPlay.IsValidQueue
struct UKSQuickPlay_IsValidQueue_Params
{
	int*                                               QueueId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQuickPlay.HandlePartyMemberDataUpdated
struct UKSQuickPlay_HandlePartyMemberDataUpdated_Params
{
	struct FPUMG_PartyMemberData*                      PartyMember;                                              // (Parm)
};

// Function KillstreakUINew.KSQuickPlay.GetQueueSections
struct UKSQuickPlay_GetQueueSections_Params
{
	TArray<struct FClientQueueInfo>*                   ClientCachedQueueInfo;                                    // (Parm, ZeroConstructor)
	TArray<struct FQueueSection>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSQuickPlay.GetQueues
struct UKSQuickPlay_GetQueues_Params
{
	TArray<struct FClientQueueInfo>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSQuickPlay.GetQueueInfoById
struct UKSQuickPlay_GetQueueInfoById_Params
{
	int*                                               QueueId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FClientQueueInfo                            QueueInfo;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQuickPlay.GetQueueDataFactory
struct UKSQuickPlay_GetQueueDataFactory_Params
{
	class UKSQueueDataFactory*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQuickPlay.GetPartyDataFactory
struct UKSQuickPlay_GetPartyDataFactory_Params
{
	class UPUMG_PartyDataFactory*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQuickPlay.GetDefaultSelectedQueueId
struct UKSQuickPlay_GetDefaultSelectedQueueId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSQuickPlay.GetCurrentlySelectedQueue
struct UKSQuickPlay_GetCurrentlySelectedQueue_Params
{
	struct FClientQueueInfo                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSQuickPlay.CheckForDirtyQueues
struct UKSQuickPlay_CheckForDirtyQueues_Params
{
	TArray<struct FClientQueueInfo>                    NewClientCachedQueueInfo;                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.TraceSelectionCursor
struct UKSRadialSelectionWidgetBase_TraceSelectionCursor_Params
{
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.ShowSelector
struct UKSRadialSelectionWidgetBase_ShowSelector_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionUnhover
struct UKSRadialSelectionWidgetBase_RadialOptionUnhover_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionSelected
struct UKSRadialSelectionWidgetBase_RadialOptionSelected_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionHovered
struct UKSRadialSelectionWidgetBase_RadialOptionHovered_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnEmoteSelectReleased
struct UKSRadialSelectionWidgetBase_OnEmoteSelectReleased_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnEmoteSelectPressed
struct UKSRadialSelectionWidgetBase_OnEmoteSelectPressed_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.IsSelectorActive
struct UKSRadialSelectionWidgetBase_IsSelectorActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.InitializeTracking
struct UKSRadialSelectionWidgetBase_InitializeTracking_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.HideSelector
struct UKSRadialSelectionWidgetBase_HideSelector_Params
{
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.HandleInputStateChanged
struct UKSRadialSelectionWidgetBase_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   NewInputState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetWheelSize
struct UKSRadialSelectionWidgetBase_GetWheelSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetOptionsCount
struct UKSRadialSelectionWidgetBase_GetOptionsCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetInputName_CursorY
struct UKSRadialSelectionWidgetBase_GetInputName_CursorY_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetInputName_CursorX
struct UKSRadialSelectionWidgetBase_GetInputName_CursorX_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetInputName_Activate
struct UKSRadialSelectionWidgetBase_GetInputName_Activate_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetDeadZone
struct UKSRadialSelectionWidgetBase_GetDeadZone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSRadialSelectionWidgetBase.ButtonClicked
struct UKSRadialSelectionWidgetBase_ButtonClicked_Params
{
};

// Function KillstreakUINew.KSReticleWidgetBase.UpdateReticleOffset
struct UKSReticleWidgetBase_UpdateReticleOffset_Params
{
	float*                                             OffsetFromCenterScreen;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSReticleWidgetBase.UpdateBlockedShotIcon
struct UKSReticleWidgetBase_UpdateBlockedShotIcon_Params
{
	bool*                                              IconVisible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Translation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  IconScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSReticleWidgetBase.CalculateReticleOffset
struct UKSReticleWidgetBase_CalculateReticleOffset_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSReticleWidgetBase.CalculateBlockedShotIcon
struct UKSReticleWidgetBase_CalculateBlockedShotIcon_Params
{
};

// Function KillstreakUINew.KSSettingsContainer.OnShowSettingsWidget
struct UKSSettingsContainer_OnShowSettingsWidget_Params
{
	class UKSSettingsWidget**                          SettingsWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsContainer.OnHideSettingsWidget
struct UKSSettingsContainer_OnHideSettingsWidget_Params
{
	class UKSSettingsWidget**                          SettingsWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsContainer.OnContainerConfigSet
struct UKSSettingsContainer_OnContainerConfigSet_Params
{
};

// Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerTitle
struct UKSSettingsContainer_GetWidgetContainerTitle_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerDescription
struct UKSSettingsContainer_GetWidgetContainerDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSSettingsContainer.GetSettingsWidgets
struct UKSSettingsContainer_GetSettingsWidgets_Params
{
	TArray<class UKSSettingsWidget*>                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSSettingsContainer.AddSettingsWidget
struct UKSSettingsContainer_AddSettingsWidget_Params
{
	class UKSSettingsWidget**                          SettingsWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveSettings
struct UKSSettingsDataFactory_SaveSettings_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsInt
struct UKSSettingsDataFactory_SaveSettingAsInt_Params
{
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsFloat
struct UKSSettingsDataFactory_SaveSettingAsFloat_Params
{
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsBool
struct UKSSettingsDataFactory_SaveSettingAsBool_Params
{
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveScreenResolution
struct UKSSettingsDataFactory_SaveScreenResolution_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveLanguage
struct UKSSettingsDataFactory_SaveLanguage_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.SaveKeyBindings
struct UKSSettingsDataFactory_SaveKeyBindings_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.RevertScreenResolution
struct UKSSettingsDataFactory_RevertScreenResolution_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.RevertLanguageToDefault
struct UKSSettingsDataFactory_RevertLanguageToDefault_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.RevertKeyBindings
struct UKSSettingsDataFactory_RevertKeyBindings_Params
{
};

// Function KillstreakUINew.KSSettingsDataFactory.IsUserLoggedIn
struct UKSSettingsDataFactory_IsUserLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsInt
struct UKSSettingsDataFactory_GetSettingAsInt_Params
{
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	int                                                OutInt;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsFloat
struct UKSSettingsDataFactory_GetSettingAsFloat_Params
{
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	float                                              OutFloat;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsBool
struct UKSSettingsDataFactory_GetSettingAsBool_Params
{
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	bool                                               OutBool;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetScreenResolution
struct UKSSettingsDataFactory_GetScreenResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetKSPlayerInput
struct UKSSettingsDataFactory_GetKSPlayerInput_Params
{
	class UKSPlayerInput*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputAxisKeys
struct UKSSettingsDataFactory_GetCustomInputAxisKeys_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EKSInputType*                                      InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                OutKeys;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputActionKeys
struct UKSSettingsDataFactory_GetCustomInputActionKeys_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EKSInputType*                                      InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                OutKeys;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetCurrentLanguage
struct UKSSettingsDataFactory_GetCurrentLanguage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSSettingsDataFactory.GetAvailableLanguages
struct UKSSettingsDataFactory_GetAvailableLanguages_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSSettingsDataFactory.BindSettingCallbacks
struct UKSSettingsDataFactory_BindSettingCallbacks_Params
{
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	struct FSettingDelegateStruct*                     SettingDelegateStruct;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsInt
struct UKSSettingsDataFactory_ApplySettingAsInt_Params
{
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	int*                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsFloat
struct UKSSettingsDataFactory_ApplySettingAsFloat_Params
{
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsBool
struct UKSSettingsDataFactory_ApplySettingAsBool_Params
{
	struct FString*                                    Name;                                                     // (Parm, ZeroConstructor)
	bool*                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsDataFactory.ApplyScreenResolution
struct UKSSettingsDataFactory_ApplyScreenResolution_Params
{
	struct FIntPoint*                                  ScreenResolution;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsDataFactory.ApplyLanguage
struct UKSSettingsDataFactory_ApplyLanguage_Params
{
	struct FString*                                    LanguageCulture;                                          // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSSettingsGroup.OnShowContainer
struct UKSSettingsGroup_OnShowContainer_Params
{
	class UKSSettingsContainer**                       SettingsContainer;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsGroup.OnHideContainer
struct UKSSettingsGroup_OnHideContainer_Params
{
	class UKSSettingsContainer**                       SettingsContainer;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsGroup.OnGroupConfigSet
struct UKSSettingsGroup_OnGroupConfigSet_Params
{
};

// Function KillstreakUINew.KSSettingsGroup.GetSettingsContainers
struct UKSSettingsGroup_GetSettingsContainers_Params
{
	TArray<class UKSSettingsContainer*>                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSSettingsGroup.AddSubSettingsContainerWidget
struct UKSSettingsGroup_AddSubSettingsContainerWidget_Params
{
	class UKSSettingsContainer**                       SettingsContainer;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsGroup.AddMainSettingsContainerWidget
struct UKSSettingsGroup_AddMainSettingsContainerWidget_Params
{
	class UKSSettingsContainer**                       SettingsContainer;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.UpdateTextOptions
struct UKSSettingsInfoBase_UpdateTextOptions_Params
{
	TArray<struct FText>*                              NewOptions;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueKeyBind
struct UKSSettingsInfoBase_SetDesiredValueKeyBind_Params
{
	struct FKSKeyBind*                                 InKeyBind;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueInt
struct UKSSettingsInfoBase_SetDesiredValueInt_Params
{
	int*                                               inInt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueFloat
struct UKSSettingsInfoBase_SetDesiredValueFloat_Params
{
	float*                                             InFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueBool
struct UKSSettingsInfoBase_SetDesiredValueBool_Params
{
	bool*                                              InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.SaveKeyBindValue
struct UKSSettingsInfoBase_SaveKeyBindValue_Params
{
	struct FKSKeyBind*                                 InKeyBind;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.SaveIntValue
struct UKSSettingsInfoBase_SaveIntValue_Params
{
	int*                                               inInt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.SaveFloatValue
struct UKSSettingsInfoBase_SaveFloatValue_Params
{
	float*                                             InFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.SaveBoolValue
struct UKSSettingsInfoBase_SaveBoolValue_Params
{
	bool*                                              InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.Save
struct UKSSettingsInfoBase_Save_Params
{
};

// Function KillstreakUINew.KSSettingsInfoBase.RoundToNearestValueFloat
struct UKSSettingsInfoBase_RoundToNearestValueFloat_Params
{
	float*                                             ValueToRound;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.RevertSettingToDefault
struct UKSSettingsInfoBase_RevertSettingToDefault_Params
{
};

// Function KillstreakUINew.KSSettingsInfoBase.Revert
struct UKSSettingsInfoBase_Revert_Params
{
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindSaved
struct UKSSettingsInfoBase_OnValueKeyBindSaved_Params
{
	struct FKSKeyBind*                                 SavedKeyBind;                                             // (Parm)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindApplied
struct UKSSettingsInfoBase_OnValueKeyBindApplied_Params
{
	struct FKSKeyBind*                                 AppliedKeyBind;                                           // (Parm)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueIntSaved
struct UKSSettingsInfoBase_OnValueIntSaved_Params
{
	int*                                               SavedInt;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueIntApplied
struct UKSSettingsInfoBase_OnValueIntApplied_Params
{
	int*                                               AppliedInt;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatSaved
struct UKSSettingsInfoBase_OnValueFloatSaved_Params
{
	float*                                             SavedFloat;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatApplied
struct UKSSettingsInfoBase_OnValueFloatApplied_Params
{
	float*                                             AppliedFloat;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolSaved
struct UKSSettingsInfoBase_OnValueBoolSaved_Params
{
	bool*                                              SavedBool;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolApplied
struct UKSSettingsInfoBase_OnValueBoolApplied_Params
{
	bool*                                              AppliedBool;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueKeyBind
struct UKSSettingsInfoBase_IsValidValueKeyBind_Params
{
	struct FKSKeyBind*                                 InKey;                                                    // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueInt
struct UKSSettingsInfoBase_IsValidValueInt_Params
{
	int*                                               inInt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueFloat
struct UKSSettingsInfoBase_IsValidValueFloat_Params
{
	float*                                             InFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueBool
struct UKSSettingsInfoBase_IsValidValueBool_Params
{
	bool*                                              InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.IsDirty
struct UKSSettingsInfoBase_IsDirty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.InitializeValue
struct UKSSettingsInfoBase_InitializeValue_Params
{
};

// Function KillstreakUINew.KSSettingsInfoBase.GetValueKeyBind
struct UKSSettingsInfoBase_GetValueKeyBind_Params
{
	struct FKSKeyBind                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetValueInt
struct UKSSettingsInfoBase_GetValueInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetValueFloat
struct UKSSettingsInfoBase_GetValueFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetValueBool
struct UKSSettingsInfoBase_GetValueBool_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetTextOptions
struct UKSSettingsInfoBase_GetTextOptions_Params
{
	TArray<struct FText>                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetTextOption
struct UKSSettingsInfoBase_GetTextOption_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetStep
struct UKSSettingsInfoBase_GetStep_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetSettingType
struct UKSSettingsInfoBase_GetSettingType_Params
{
	EKSSettingType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetRoundToNearest
struct UKSSettingsInfoBase_GetRoundToNearest_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetRound
struct UKSSettingsInfoBase_GetRound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetNumTextOptions
struct UKSSettingsInfoBase_GetNumTextOptions_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetMin
struct UKSSettingsInfoBase_GetMin_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetMax
struct UKSSettingsInfoBase_GetMax_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetKSHUD
struct UKSSettingsInfoBase_GetKSHUD_Params
{
	class AKSHUDCommon*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetIsPercent
struct UKSSettingsInfoBase_GetIsPercent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueKeyBind
struct UKSSettingsInfoBase_GetDirtyValueKeyBind_Params
{
	struct FKSKeyBind                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueInt
struct UKSSettingsInfoBase_GetDirtyValueInt_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueFloat
struct UKSSettingsInfoBase_GetDirtyValueFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueBool
struct UKSSettingsInfoBase_GetDirtyValueBool_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidKeyBind
struct UKSSettingsInfoBase_FixupInvalidKeyBind_Params
{
	struct FKSKeyBind*                                 InKey;                                                    // (Parm)
	struct FKSKeyBind                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidInt
struct UKSSettingsInfoBase_FixupInvalidInt_Params
{
	int*                                               inInt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidFloat
struct UKSSettingsInfoBase_FixupInvalidFloat_Params
{
	float*                                             InFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidBool
struct UKSSettingsInfoBase_FixupInvalidBool_Params
{
	bool*                                              InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.CanRevert
struct UKSSettingsInfoBase_CanRevert_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.ApplyKeyBindValue
struct UKSSettingsInfoBase_ApplyKeyBindValue_Params
{
	struct FKSKeyBind*                                 InKeyBind;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.ApplyIntValue
struct UKSSettingsInfoBase_ApplyIntValue_Params
{
	int*                                               inInt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.ApplyFloatValue
struct UKSSettingsInfoBase_ApplyFloatValue_Params
{
	float*                                             InFloat;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.ApplyBoolValue
struct UKSSettingsInfoBase_ApplyBoolValue_Params
{
	bool*                                              InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfoBase.Apply
struct UKSSettingsInfoBase_Apply_Params
{
};

// Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsSaved
struct UKSSettingsInfo_Binding_OnKeyBindingsSaved_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsApplied
struct UKSSettingsInfo_Binding_OnKeyBindingsApplied_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingSaved
struct UKSSettingsInfo_Generic_OnSettingSaved_Params
{
};

// Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingApplied
struct UKSSettingsInfo_Generic_OnSettingApplied_Params
{
};

// Function KillstreakUINew.KSSettingsInfo_Generic.GetKSSettingsDataFactory
struct UKSSettingsInfo_Generic_GetKSSettingsDataFactory_Params
{
	class UKSSettingsDataFactory*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfo_Region.OnPreferredSiteUpdated
struct UKSSettingsInfo_Region_OnPreferredSiteUpdated_Params
{
};

// Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionSaved
struct UKSSettingsInfo_Resolution_OnScreenResolutionSaved_Params
{
	struct FIntPoint*                                  SavedScreenResolution;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionApplied
struct UKSSettingsInfo_Resolution_OnScreenResolutionApplied_Params
{
	struct FIntPoint*                                  AppliedScreenResolution;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsMenu.RebuildNavigation
struct UKSSettingsMenu_RebuildNavigation_Params
{
};

// Function KillstreakUINew.KSSettingsMenu.OnShowPage
struct UKSSettingsMenu_OnShowPage_Params
{
	class UKSSettingsPage**                            SettingsPage;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsMenu.OnSaveSettings
struct UKSSettingsMenu_OnSaveSettings_Params
{
};

// Function KillstreakUINew.KSSettingsMenu.OnRevertSettings
struct UKSSettingsMenu_OnRevertSettings_Params
{
};

// Function KillstreakUINew.KSSettingsMenu.OnMenuConfigSet
struct UKSSettingsMenu_OnMenuConfigSet_Params
{
};

// Function KillstreakUINew.KSSettingsMenu.OnHidePage
struct UKSSettingsMenu_OnHidePage_Params
{
	class UKSSettingsPage**                            SettingsPage;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsMenu.OnConfirmExit
struct UKSSettingsMenu_OnConfirmExit_Params
{
	bool*                                              ShouldSaveSettings;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsMenu.GetSettingsPages
struct UKSSettingsMenu_GetSettingsPages_Params
{
	TArray<class UKSSettingsPage*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSSettingsMenu.CheckSavePendingChanges
struct UKSSettingsMenu_CheckSavePendingChanges_Params
{
};

// Function KillstreakUINew.KSSettingsMenu.AddSettingsPageWidget
struct UKSSettingsMenu_AddSettingsPageWidget_Params
{
	class UKSSettingsPage**                            SettingsPage;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsPage.OnShowSection
struct UKSSettingsPage_OnShowSection_Params
{
	class UKSSettingsSection**                         SettingsSection;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsPage.OnPageConfigSet
struct UKSSettingsPage_OnPageConfigSet_Params
{
};

// Function KillstreakUINew.KSSettingsPage.OnHideSection
struct UKSSettingsPage_OnHideSection_Params
{
	class UKSSettingsSection**                         SettingsSection;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsPage.GetSettingsSections
struct UKSSettingsPage_GetSettingsSections_Params
{
	TArray<class UKSSettingsSection*>                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSSettingsPage.GetScrollBox
struct UKSSettingsPage_GetScrollBox_Params
{
	class UScrollBox*                                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsPage.AddSettingsSectionWidget
struct UKSSettingsPage_AddSettingsSectionWidget_Params
{
	class UKSSettingsSection**                         SettingsSection;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsSection.OnShowGroup
struct UKSSettingsSection_OnShowGroup_Params
{
	class UKSSettingsGroup**                           SettingsGroup;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsSection.OnSectionConfigSet
struct UKSSettingsSection_OnSectionConfigSet_Params
{
};

// Function KillstreakUINew.KSSettingsSection.OnHideGroup
struct UKSSettingsSection_OnHideGroup_Params
{
	class UKSSettingsGroup**                           SettingsGroup;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsSection.GetSettingsGroups
struct UKSSettingsSection_GetSettingsGroups_Params
{
	TArray<class UKSSettingsGroup*>                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSSettingsSection.AddSettingsGroupWidget
struct UKSSettingsSection_AddSettingsGroupWidget_Params
{
	class UKSSettingsGroup**                           SettingsGroup;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsWidget.SaveSetting
struct UKSSettingsWidget_SaveSetting_Params
{
};

// Function KillstreakUINew.KSSettingsWidget.RevertSetting
struct UKSSettingsWidget_RevertSetting_Params
{
};

// Function KillstreakUINew.KSSettingsWidget.OnWidgetSettingsInfoSet
struct UKSSettingsWidget_OnWidgetSettingsInfoSet_Params
{
};

// Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerTitleSet
struct UKSSettingsWidget_OnWidgetContainerTitleSet_Params
{
};

// Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerDescriptionSet
struct UKSSettingsWidget_OnWidgetContainerDescriptionSet_Params
{
};

// Function KillstreakUINew.KSSettingsWidget.OnWidgetConfigSet
struct UKSSettingsWidget_OnWidgetConfigSet_Params
{
};

// Function KillstreakUINew.KSSettingsWidget.OnInputAttached
struct UKSSettingsWidget_OnInputAttached_Params
{
	bool*                                              bGamepadAttached;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bMouseAttached;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsWidget.IsSaved
struct UKSSettingsWidget_IsSaved_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsWidget.IsApplied
struct UKSSettingsWidget_IsApplied_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsWidget.CanGamepadNavigate
struct UKSSettingsWidget_CanGamepadNavigate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSettingsWidget.ApplySetting
struct UKSSettingsWidget_ApplySetting_Params
{
};

// Function KillstreakUINew.KSShopItemButtonBase.GetHitTarget
struct UKSShopItemButtonBase_GetHitTarget_Params
{
	class UButton*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSShopItemButtonBase.DisplayShopItem
struct UKSShopItemButtonBase_DisplayShopItem_Params
{
	struct FShopItem*                                  ShopItem;                                                 // (Parm)
	bool*                                              IsAffordable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsToggleSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSShopItemButtonBase.ButtonUnhovered
struct UKSShopItemButtonBase_ButtonUnhovered_Params
{
};

// Function KillstreakUINew.KSShopItemButtonBase.ButtonReleased
struct UKSShopItemButtonBase_ButtonReleased_Params
{
};

// Function KillstreakUINew.KSShopItemButtonBase.ButtonPressed
struct UKSShopItemButtonBase_ButtonPressed_Params
{
};

// Function KillstreakUINew.KSShopItemButtonBase.ButtonHovered
struct UKSShopItemButtonBase_ButtonHovered_Params
{
};

// Function KillstreakUINew.KSShopItemButtonBase.ButtonClicked
struct UKSShopItemButtonBase_ButtonClicked_Params
{
};

// Function KillstreakUINew.KSSocialWidgetBase.SortFriendData
struct UKSSocialWidgetBase_SortFriendData_Params
{
	TArray<class UPUMG_PlayerInfo*>                    Friends;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function KillstreakUINew.KSSocialWidgetBase.SearchPlayerName
struct UKSSocialWidgetBase_SearchPlayerName_Params
{
	struct FString*                                    PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSSocialWidgetBase.OnFriendRequestsUpdated
struct UKSSocialWidgetBase_OnFriendRequestsUpdated_Params
{
};

// Function KillstreakUINew.KSSocialWidgetBase.HandleSearchByNameResultsUpdated
struct UKSSocialWidgetBase_HandleSearchByNameResultsUpdated_Params
{
};

// Function KillstreakUINew.KSSocialWidgetBase.HandlePartyDataUpdated
struct UKSSocialWidgetBase_HandlePartyDataUpdated_Params
{
};

// Function KillstreakUINew.KSSocialWidgetBase.HandleFriendInviteReceived
struct UKSSocialWidgetBase_HandleFriendInviteReceived_Params
{
	struct FPUMG_FriendData*                           PlayerData;                                               // (Parm)
};

// Function KillstreakUINew.KSSocialWidgetBase.HandleFriendDataUpdated
struct UKSSocialWidgetBase_HandleFriendDataUpdated_Params
{
};

// Function KillstreakUINew.KSSocialWidgetBase.GetSortedFriends
struct UKSSocialWidgetBase_GetSortedFriends_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSSocialWidgetBase.GetSearchResults
struct UKSSocialWidgetBase_GetSearchResults_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSSocialWidgetBase.GetPlayerWhoDataFactory
struct UKSSocialWidgetBase_GetPlayerWhoDataFactory_Params
{
	class UKSPlayerWhoDataFactory*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSocialWidgetBase.GetPartyDataFactory
struct UKSSocialWidgetBase_GetPartyDataFactory_Params
{
	class UKSPartyDataFactory*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSocialWidgetBase.GetFriendDataFactory
struct UKSSocialWidgetBase_GetFriendDataFactory_Params
{
	class UKSFriendDataFactory*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSocialWidgetBase.ClearSearchResults
struct UKSSocialWidgetBase_ClearSearchResults_Params
{
};

// DelegateFunction KillstreakUINew.KSSortableGridPanel.SortChildrenComparator__DelegateSignature
struct UKSSortableGridPanel_SortChildrenComparator__DelegateSignature_Params
{
	class UWidget**                                    LHS;                                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget**                                    RHS;                                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSortableGridPanel.SortChildren
struct UKSSortableGridPanel_SortChildren_Params
{
};

// Function KillstreakUINew.KSSortableGridPanel.AddChildAutoLayout
struct UKSSortableGridPanel_AddChildAutoLayout_Params
{
	class UWidget**                                    Content;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGridSlot*                                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// DelegateFunction KillstreakUINew.KSSortableVerticalBox.SortChildrenComparator__DelegateSignature
struct UKSSortableVerticalBox_SortChildrenComparator__DelegateSignature_Params
{
	class UWidget**                                    LHS;                                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget**                                    RHS;                                                      // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSSortableVerticalBox.SortChildren
struct UKSSortableVerticalBox_SortChildren_Params
{
};

// Function KillstreakUINew.KSTargetMarkerWidget.UpdateCharge
struct UKSTargetMarkerWidget_UpdateCharge_Params
{
	class UKSModInst_Activated**                       ModInst;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSTargetMarkerWidget.ReceiveNewTarget
struct UKSTargetMarkerWidget_ReceiveNewTarget_Params
{
	class UKSModInst_DirectTargetWeapon**              ModInst;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSTargetMarkerWidget.OnNewTarget
struct UKSTargetMarkerWidget_OnNewTarget_Params
{
};

// Function KillstreakUINew.KSTargetMarkerWidget.OnGamepadSelectedChanged
struct UKSTargetMarkerWidget_OnGamepadSelectedChanged_Params
{
	int*                                               NewSelectionIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSTargetMarkerWidget.ApplyGuestModInst
struct UKSTargetMarkerWidget_ApplyGuestModInst_Params
{
	class UKSModInst_DirectTargetWeapon**              GuestModInst;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSTextChatWidget.Whisper
struct UKSTextChatWidget_Whisper_Params
{
	struct FString*                                    PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString*                                    Message;                                                  // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSTextChatWidget.Unblock
struct UKSTextChatWidget_Unblock_Params
{
	struct FString*                                    PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSTextChatWidget.UIX_SubmitTextInput
struct UKSTextChatWidget_UIX_SubmitTextInput_Params
{
	struct FString*                                    Message;                                                  // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToPlayer
struct UKSTextChatWidget_UIX_SendMessageToPlayer_Params
{
	struct FString*                                    Message;                                                  // (Parm, ZeroConstructor)
	int64_t*                                           PlayerId;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToChannel
struct UKSTextChatWidget_UIX_SendMessageToChannel_Params
{
	struct FString*                                    Message;                                                  // (Parm, ZeroConstructor)
	EPUMG_ChatChannel*                                 Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSTextChatWidget.UIX_MarkMessageAsRead
struct UKSTextChatWidget_UIX_MarkMessageAsRead_Params
{
	int*                                               MessageIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSTextChatWidget.UIX_ExecuteChatCommandLine
struct UKSTextChatWidget_UIX_ExecuteChatCommandLine_Params
{
	struct FString*                                    CommandLine;                                              // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSTextChatWidget.ToggleDND
struct UKSTextChatWidget_ToggleDND_Params
{
};

// Function KillstreakUINew.KSTextChatWidget.SetChatChannelToPlayer
struct UKSTextChatWidget_SetChatChannelToPlayer_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSTextChatWidget.SetChatChannel
struct UKSTextChatWidget_SetChatChannel_Params
{
	EPUMG_ChatChannel*                                 Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t*                                           PersonalChannelPlayerId;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSTextChatWidget.Reply
struct UKSTextChatWidget_Reply_Params
{
	struct FString*                                    Message;                                                  // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSTextChatWidget.PreviousChatChannel
struct UKSTextChatWidget_PreviousChatChannel_Params
{
};

// Function KillstreakUINew.KSTextChatWidget.OpenTextChatToPlayer
struct UKSTextChatWidget_OpenTextChatToPlayer_Params
{
	class UPUMG_PlayerInfo**                           Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSTextChatWidget.OpenTextChat
struct UKSTextChatWidget_OpenTextChat_Params
{
	bool*                                              BeginChatCommand;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSTextChatWidget.NextChatChannel
struct UKSTextChatWidget_NextChatChannel_Params
{
};

// Function KillstreakUINew.KSTextChatWidget.IsActiveChatChannel
struct UKSTextChatWidget_IsActiveChatChannel_Params
{
	EPUMG_ChatChannel*                                 Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSTextChatWidget.HandleChatMessageReceived
struct UKSTextChatWidget_HandleChatMessageReceived_Params
{
	struct FPUMG_ChatData*                             ReceivedMessage;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KillstreakUINew.KSTextChatWidget.HandleChatMessageRead
struct UKSTextChatWidget_HandleChatMessageRead_Params
{
	struct FPUMG_ChatData*                             ReadMessage;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KillstreakUINew.KSTextChatWidget.HandleChatChannelLeft
struct UKSTextChatWidget_HandleChatChannelLeft_Params
{
	EPUMG_ChatChannel*                                 Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSTextChatWidget.HandleChatChannelJoined
struct UKSTextChatWidget_HandleChatChannelJoined_Params
{
	EPUMG_ChatChannel*                                 Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSTextChatWidget.GetCurrentChatChannel
struct UKSTextChatWidget_GetCurrentChatChannel_Params
{
	struct FPUMG_ActiveChatChannelData                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSTextChatWidget.GetChatDataFactory
struct UKSTextChatWidget_GetChatDataFactory_Params
{
	class UKSChatDataFactory*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSTextChatWidget.GetActiveChatChannels
struct UKSTextChatWidget_GetActiveChatChannels_Params
{
	TArray<struct FPUMG_ActiveChatChannelData>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSTextChatWidget.CanChatInChannel
struct UKSTextChatWidget_CanChatInChannel_Params
{
	EPUMG_ChatChannel*                                 Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSTextChatWidget.Block
struct UKSTextChatWidget_Block_Params
{
	struct FString*                                    PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.StoreToastQueue
struct UKSToastNotificationWidgetBase_StoreToastQueue_Params
{
	struct FToastData*                                 ToastNotification;                                        // (Parm)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.ShowToastNotification
struct UKSToastNotificationWidgetBase_ShowToastNotification_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.OnToastNotificationReceived
struct UKSToastNotificationWidgetBase_OnToastNotificationReceived_Params
{
	struct FToastData*                                 ToastData;                                                // (Parm)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberPromoted
struct UKSToastNotificationWidgetBase_HandlePartyMemberPromoted_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberLeave
struct UKSToastNotificationWidgetBase_HandlePartyMemberLeave_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberKick
struct UKSToastNotificationWidgetBase_HandlePartyMemberKick_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberAdded
struct UKSToastNotificationWidgetBase_HandlePartyMemberAdded_Params
{
	struct FPUMG_PartyMemberData*                      PartyMemberData;                                          // (Parm)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteSent
struct UKSToastNotificationWidgetBase_HandlePartyInviteSent_Params
{
	struct FText*                                      PlayerName;                                               // (Parm)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteRejected
struct UKSToastNotificationWidgetBase_HandlePartyInviteRejected_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteReceived
struct UKSToastNotificationWidgetBase_HandlePartyInviteReceived_Params
{
	class UPUMG_PlayerInfo**                           PartyInviter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteError
struct UKSToastNotificationWidgetBase_HandlePartyInviteError_Params
{
	struct FText*                                      PlayerName;                                               // (Parm)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteAccepted
struct UKSToastNotificationWidgetBase_HandlePartyInviteAccepted_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyDisbanded
struct UKSToastNotificationWidgetBase_HandlePartyDisbanded_Params
{
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendRejected
struct UKSToastNotificationWidgetBase_HandleFriendRejected_Params
{
	struct FText*                                      PlayerName;                                               // (Parm)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendInviteReceived
struct UKSToastNotificationWidgetBase_HandleFriendInviteReceived_Params
{
	struct FPUMG_FriendData*                           PlayerData;                                               // (Parm)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAddSuccess
struct UKSToastNotificationWidgetBase_HandleFriendAddSuccess_Params
{
	struct FString*                                    PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAdded
struct UKSToastNotificationWidgetBase_HandleFriendAdded_Params
{
	struct FText*                                      PlayerName;                                               // (Parm)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.GetPartyDataFactory
struct UKSToastNotificationWidgetBase_GetPartyDataFactory_Params
{
	class UKSPartyDataFactory*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.GetNext
struct UKSToastNotificationWidgetBase_GetNext_Params
{
	struct FToastData                                  NextToastNotification;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.GetFriendDataFactory
struct UKSToastNotificationWidgetBase_GetFriendDataFactory_Params
{
	class UKSFriendDataFactory*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSToastNotificationWidgetBase.ClearNotificationQueue
struct UKSToastNotificationWidgetBase_ClearNotificationQueue_Params
{
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetHiddenCursorMode
struct UKSUIBlueprintFunctionLibrary_SetHiddenCursorMode_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShouldHide;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.ResetHiddenCursorMode
struct UKSUIBlueprintFunctionLibrary_ResetHiddenCursorMode_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.RegisterGridNavigation
struct UKSUIBlueprintFunctionLibrary_RegisterGridNavigation_Params
{
	class UPUMG_Widget**                               ParentWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               FocusGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UWidget*>*                            NavWidgets;                                               // (ConstParm, Parm, ZeroConstructor)
	int*                                               GridWidth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.Key_GetShortDisplayName
struct UKSUIBlueprintFunctionLibrary_Key_GetShortDisplayName_Params
{
	struct FKey*                                       Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsInsideMargins
struct UKSUIBlueprintFunctionLibrary_IsInsideMargins_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Translation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Margins;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsInCenteredScreenRect
struct UKSUIBlueprintFunctionLibrary_IsInCenteredScreenRect_Params
{
	float*                                             PositionX;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PositionY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MarginX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MarginY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetStoreItemHelper
struct UKSUIBlueprintFunctionLibrary_GetStoreItemHelper_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UKSStoreItemHelper*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetQueueDisplayName
struct UKSUIBlueprintFunctionLibrary_GetQueueDisplayName_Params
{
	struct FText                                       DisplayNameText;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetLocalPlayerInfo
struct UKSUIBlueprintFunctionLibrary_GetLocalPlayerInfo_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_PlayerInfo*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetKSJobItemByLootId
struct UKSUIBlueprintFunctionLibrary_GetKSJobItemByLootId_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LootTableItemId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              RequireActive;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSJobItem*                                  JobItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetKSJobItemByItemId
struct UKSUIBlueprintFunctionLibrary_GetKSJobItemByItemId_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              RequireActive;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSJobItem*                                  JobItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetDigitsFromInt
struct UKSUIBlueprintFunctionLibrary_GetDigitsFromInt_Params
{
	int*                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CompareStrings
struct UKSUIBlueprintFunctionLibrary_CompareStrings_Params
{
	struct FString*                                    LeftString;                                               // (Parm, ZeroConstructor)
	struct FString*                                    RightString;                                              // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.ClearKeyboardFocus
struct UKSUIBlueprintFunctionLibrary_ClearKeyboardFocus_Params
{
};

// Function KillstreakUINew.CommonVendorHelper.GetVendorIDFromEnum
struct UCommonVendorHelper_GetVendorIDFromEnum_Params
{
	EKSVendorTypes*                                    VendorType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSViewedItemLabel.UpdateLabelPosition
struct UKSViewedItemLabel_UpdateLabelPosition_Params
{
};

// Function KillstreakUINew.KSViewedItemLabel.UnbindToViewportResizeEvent
struct UKSViewedItemLabel_UnbindToViewportResizeEvent_Params
{
};

// Function KillstreakUINew.KSViewedItemLabel.TriggerLabelPositionUpdate
struct UKSViewedItemLabel_TriggerLabelPositionUpdate_Params
{
};

// Function KillstreakUINew.KSViewedItemLabel.OnLabelShow
struct UKSViewedItemLabel_OnLabelShow_Params
{
};

// Function KillstreakUINew.KSViewedItemLabel.OnLabelHide
struct UKSViewedItemLabel_OnLabelHide_Params
{
};

// Function KillstreakUINew.KSViewedItemLabel.GetViewLimitImage
struct UKSViewedItemLabel_GetViewLimitImage_Params
{
	class UImage*                                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSViewedItemLabel.GetTrackedActor
struct UKSViewedItemLabel_GetTrackedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSViewedItemLabel.GetOutermostCanvasPanel
struct UKSViewedItemLabel_GetOutermostCanvasPanel_Params
{
	class UCanvasPanel*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSViewedItemLabel.GetOnScreenPositionForLabel
struct UKSViewedItemLabel_GetOnScreenPositionForLabel_Params
{
	class APlayerController**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox2D                                      OutBounds;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSViewedItemLabel.GetLabelCanvasPanel
struct UKSViewedItemLabel_GetLabelCanvasPanel_Params
{
	class UCanvasPanel*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSViewedItemLabel.BindToViewportResizeEvent
struct UKSViewedItemLabel_BindToViewportResizeEvent_Params
{
};

// Function KillstreakUINew.KSViewedPawnDamageDisplay.HandlePhaseChange
struct UKSViewedPawnDamageDisplay_HandlePhaseChange_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleInstigateDamageNotify
struct UKSViewedPawnDamageDisplay_HandleInstigateDamageNotify_Params
{
	struct FCombatEventInfo*                           DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleFlourishAnimationCompleted
struct UKSViewedPawnDamageDisplay_HandleFlourishAnimationCompleted_Params
{
	class UDamageNumberDisplayWidget**                 DamageNumberWidget;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSViewedPawnDamageDisplay.GetDamageNumberWidgetInstance
struct UKSViewedPawnDamageDisplay_GetDamageNumberWidgetInstance_Params
{
	class UDamageNumberDisplayWidget*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSViewedPawnDamageDisplay.ClearDamageNumbersOnScreen
struct UKSViewedPawnDamageDisplay_ClearDamageNumbersOnScreen_Params
{
};

// Function KillstreakUINew.DamageNumberDisplayWidget.SetDisplayInformation
struct UDamageNumberDisplayWidget_SetDisplayInformation_Params
{
	class AActor**                                     InTargetActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InTetherToEventLocation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InDamageAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InIsLethal;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InIsHeadshot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InDelayWindow;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InShieldHit;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.DamageNumberDisplayWidget.PlayFlourishAnimation
struct UDamageNumberDisplayWidget_PlayFlourishAnimation_Params
{
};

// Function KillstreakUINew.DamageNumberDisplayWidget.OnDisplayInformationReset
struct UDamageNumberDisplayWidget_OnDisplayInformationReset_Params
{
	class AActor**                                     CurrentTargetActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentDamageAmount;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CurrentIsLethal;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CurrentIsHeadshot;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CurrentShieldHit;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.DamageNumberDisplayWidget.IsDisplayStacking
struct UDamageNumberDisplayWidget_IsDisplayStacking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSViewedPawnInventoryWidget.OnUpdatedPawnInventorySlot
struct UKSViewedPawnInventoryWidget_OnUpdatedPawnInventorySlot_Params
{
	struct FPlayerInventorySlot*                       InventorySlot;                                            // (Parm)
};

// Function KillstreakUINew.KSViewedPawnInventoryWidget.OnRemovedPawnInventorySlot
struct UKSViewedPawnInventoryWidget_OnRemovedPawnInventorySlot_Params
{
	struct FPlayerInventorySlot*                       InventorySlot;                                            // (Parm)
};

// Function KillstreakUINew.KSViewedPawnInventoryWidget.OnActivePawnInventorySlot
struct UKSViewedPawnInventoryWidget_OnActivePawnInventorySlot_Params
{
	struct FPlayerInventorySlot*                       InventorySlot;                                            // (Parm)
};

// Function KillstreakUINew.KSViewedPawnInventoryWidget.GetSlotIndex
struct UKSViewedPawnInventoryWidget_GetSlotIndex_Params
{
	struct FGameplayTag*                               EquipPoint;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSViewedPawnModsWidget.OnViewedPawnModAdded
struct UKSViewedPawnModsWidget_OnViewedPawnModAdded_Params
{
	class UKSPlayerMod**                               Mod;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSPlayerModInstance**                       ModInstance;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSViewedPawnModsWidget.GetOverlay
struct UKSViewedPawnModsWidget_GetOverlay_Params
{
	class UOverlay*                                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantUpdated
struct UKSVoiceActivityWidget_OnVoiceParticipantUpdated_Params
{
	struct FString*                                    Account;                                                  // (Parm, ZeroConstructor)
	bool*                                              bIsTalking;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsMuted;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantRemoved
struct UKSVoiceActivityWidget_OnVoiceParticipantRemoved_Params
{
	struct FString*                                    Account;                                                  // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantAdded
struct UKSVoiceActivityWidget_OnVoiceParticipantAdded_Params
{
	struct FString*                                    Account;                                                  // (Parm, ZeroConstructor)
};

// Function KillstreakUINew.KSVoiceActivityWidget.HandlePlayerStateChanged
struct UKSVoiceActivityWidget_HandlePlayerStateChanged_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSVoiceActivityWidget.GetAccountAndNames
struct UKSVoiceActivityWidget_GetAccountAndNames_Params
{
	TArray<struct FKeyValue>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSWeaponComponentWidget.SetOwningWeaponComponent
struct UKSWeaponComponentWidget_SetOwningWeaponComponent_Params
{
	class UKSWeaponComponent**                         InWeaponComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSWeaponComponentWidget.PreClearWeaponComponent
struct UKSWeaponComponentWidget_PreClearWeaponComponent_Params
{
};

// Function KillstreakUINew.KSWeaponComponentWidget.PostSetWeaponComponent
struct UKSWeaponComponentWidget_PostSetWeaponComponent_Params
{
};

// Function KillstreakUINew.KSWeaponComponentWidget.OnEndActiveWeaponComponent
struct UKSWeaponComponentWidget_OnEndActiveWeaponComponent_Params
{
};

// Function KillstreakUINew.KSWeaponComponentWidget.OnBecomeActiveWeaponComponent
struct UKSWeaponComponentWidget_OnBecomeActiveWeaponComponent_Params
{
};

// Function KillstreakUINew.KSWeaponComponentWidget.IsWeaponComponentActive
struct UKSWeaponComponentWidget_IsWeaponComponentActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSWeaponComponentWidget.GetWeaponComponent
struct UKSWeaponComponentWidget_GetWeaponComponent_Params
{
	class UKSWeaponComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.StopReloading
struct UKSWeaponComponentAmmoWidget_StopReloading_Params
{
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.StartReloading
struct UKSWeaponComponentAmmoWidget_StartReloading_Params
{
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.OnAmmoChanged
struct UKSWeaponComponentAmmoWidget_OnAmmoChanged_Params
{
	int*                                               OldInClip;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OldClipSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OldReserve;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewInClip;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewClipSize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewReserve;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.IsReloading
struct UKSWeaponComponentAmmoWidget_IsReloading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetClipSize
struct UKSWeaponComponentAmmoWidget_GetClipSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInReserve
struct UKSWeaponComponentAmmoWidget_GetAmmoInReserve_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInClip
struct UKSWeaponComponentAmmoWidget_GetAmmoInClip_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.KSWhatsNewModal.OnJsonChanged
struct UKSWhatsNewModal_OnJsonChanged_Params
{
};

// Function KillstreakUINew.KSWhatsNewModal.GetPanelData
struct UKSWhatsNewModal_GetPanelData_Params
{
	TArray<class UKSWhatsNewPanel*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function KillstreakUINew.KSWhatsNewModal.GetJsonDataFactory
struct UKSWhatsNewModal_GetJsonDataFactory_Params
{
	class UKSJsonDataFactory*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.TickAnimationManager.StopAnimation
struct UTickAnimationManager_StopAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.TickAnimationManager.SkipToEndAnimation
struct UTickAnimationManager_SkipToEndAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.TickAnimationManager.ResumeAnimation
struct UTickAnimationManager_ResumeAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.TickAnimationManager.RemoveAnimation
struct UTickAnimationManager_RemoveAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.TickAnimationManager.PlayAnimation
struct UTickAnimationManager_PlayAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.TickAnimationManager.PauseAnimation
struct UTickAnimationManager_PauseAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.TickAnimationManager.GetAnimationInfo
struct UTickAnimationManager_GetAnimationInfo_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTickAnimationParams                        OutAnimParams;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KillstreakUINew.TickAnimationManager.ApplyTick
struct UTickAnimationManager_ApplyTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KillstreakUINew.TickAnimationManager.AddAnimation
struct UTickAnimationManager_AddAnimation_Params
{
	struct FName*                                      AnimName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            UpdateEvent;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate*                            FinishedEvent;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
