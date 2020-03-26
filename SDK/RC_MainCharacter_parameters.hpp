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

// Function MainCharacter.MainCharacter_C.Zipline Pulley Unhide
struct AMainCharacter_C_Zipline_Pulley_Unhide_Params
{
};

// Function MainCharacter.MainCharacter_C.Zipline Pulley Hide
struct AMainCharacter_C_Zipline_Pulley_Hide_Params
{
};

// Function MainCharacter.MainCharacter_C.WasLastHitHeadshot
struct AMainCharacter_C_WasLastHitHeadshot_Params
{
	bool                                               bpp__bHeadshot__pf;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.VO_Player_Revived
struct AMainCharacter_C_VO_Player_Revived_Params
{
};

// Function MainCharacter.MainCharacter_C.VO_Player_Death
struct AMainCharacter_C_VO_Player_Death_Params
{
};

// Function MainCharacter.MainCharacter_C.VerifyLastHitDamageType
struct AMainCharacter_C_VerifyLastHitDamageType_Params
{
	class UClass**                                     bpp__DamageType__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__IsRelatedToThisType__pf;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.VerifyLastHitBone
struct AMainCharacter_C_VerifyLastHitBone_Params
{
	struct FName*                                      bpp__ParentBoneName__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bpp__IsRelatedToThisBone__pf;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.UserConstructionScript
struct AMainCharacter_C_UserConstructionScript_Params
{
};

// Function MainCharacter.MainCharacter_C.Update Action Camera
struct AMainCharacter_C_Update_Action_Camera_Params
{
	struct FVector*                                    bpp__CameraxRotation__pfT;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bpp__UsesxRotation__pfT;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    bpp__CameraxOffset__pfT;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.UpdateRagdollOnGround
struct AMainCharacter_C_UpdateRagdollOnGround_Params
{
	bool*                                              bpp__IsGrounded__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.UpdateRagdollMeshLocation
struct AMainCharacter_C_UpdateRagdollMeshLocation_Params
{
};

// Function MainCharacter.MainCharacter_C.UpdateRagdoll
struct AMainCharacter_C_UpdateRagdoll_Params
{
	float*                                             bpp__DeltaSeconds__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.UpdatePlayerState
struct AMainCharacter_C_UpdatePlayerState_Params
{
	class APlayerState**                               bpp__Player__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.UpdateHealthPP
struct AMainCharacter_C_UpdateHealthPP_Params
{
};

// Function MainCharacter.MainCharacter_C.UpdateDebugHealthVisibility
struct AMainCharacter_C_UpdateDebugHealthVisibility_Params
{
};

// Function MainCharacter.MainCharacter_C.UnHide Zipline Pulley
struct AMainCharacter_C_UnHide_Zipline_Pulley_Params
{
};

// Function MainCharacter.MainCharacter_C.UnHide Upline Device
struct AMainCharacter_C_UnHide_Upline_Device_Params
{
};

// Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics_Server
struct AMainCharacter_C_TurnOffCapsulePhysics_Server_Params
{
};

// Function MainCharacter.MainCharacter_C.TurnOffCapsulePhysics
struct AMainCharacter_C_TurnOffCapsulePhysics_Params
{
};

// Function MainCharacter.MainCharacter_C.Transition To Main Camera
struct AMainCharacter_C_Transition_To_Main_Camera_Params
{
};

// Function MainCharacter.MainCharacter_C.Transition To ADS Camera
struct AMainCharacter_C_Transition_To_ADS_Camera_Params
{
};

// Function MainCharacter.MainCharacter_C.SwitchToSnapshotPose
struct AMainCharacter_C_SwitchToSnapshotPose_Params
{
};

// Function MainCharacter.MainCharacter_C.Start Viewed Down Hit
struct AMainCharacter_C_Start_Viewed_Down_Hit_Params
{
};

// Function MainCharacter.MainCharacter_C.StartImmunity__UpdateFunc
struct AMainCharacter_C_StartImmunity__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.StartImmunity__FinishedFunc
struct AMainCharacter_C_StartImmunity__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.StartHacking
struct AMainCharacter_C_StartHacking_Params
{
};

// Function MainCharacter.MainCharacter_C.SprintFOVTimeline__UpdateFunc
struct AMainCharacter_C_SprintFOVTimeline__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.SprintFOVTimeline__FinishedFunc
struct AMainCharacter_C_SprintFOVTimeline__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.ShowDebugLocation
struct AMainCharacter_C_ShowDebugLocation_Params
{
	bool*                                              bpp__bVisible__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.ShouldLastHitLaunchIntoRagdoll
struct AMainCharacter_C_ShouldLastHitLaunchIntoRagdoll_Params
{
	bool                                               bpp__bShouldRagdoll__pf;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.Set Health SFX RTPC
struct AMainCharacter_C_Set_Health_SFX_RTPC_Params
{
};

// Function MainCharacter.MainCharacter_C.Setup Debug Info Widget
struct AMainCharacter_C_Setup_Debug_Info_Widget_Params
{
};

// Function MainCharacter.MainCharacter_C.SetPostProcessHealthValue
struct AMainCharacter_C_SetPostProcessHealthValue_Params
{
	float*                                             bpp__Health__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.SetHitTargetArmorLevelRTPC
struct AMainCharacter_C_SetHitTargetArmorLevelRTPC_Params
{
	class AActor**                                     bpp__HitxTarget__pfT;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     bpp__RTPCxActor__pfT;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.RestoreNormalCamera
struct AMainCharacter_C_RestoreNormalCamera_Params
{
};

// Function MainCharacter.MainCharacter_C.ReevaluateDebugWidgetAttachment
struct AMainCharacter_C_ReevaluateDebugWidgetAttachment_Params
{
};

// Function MainCharacter.MainCharacter_C.ReceiveTick
struct AMainCharacter_C_ReceiveTick_Params
{
	float*                                             bpp__DeltaSeconds__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.ReceiveBeginPlay
struct AMainCharacter_C_ReceiveBeginPlay_Params
{
};

// Function MainCharacter.MainCharacter_C.Play Viewed Sonar Hit
struct AMainCharacter_C_Play_Viewed_Sonar_Hit_Params
{
	struct FDamageEffect*                              bpp__Effect__pf;                                          // (Parm)
};

// Function MainCharacter.MainCharacter_C.Play Viewed EMP Hit
struct AMainCharacter_C_Play_Viewed_EMP_Hit_Params
{
	struct FDamageEffect*                              bpp__Effect__pf;                                          // (Parm)
};

// Function MainCharacter.MainCharacter_C.Play Viewed Blood Hit
struct AMainCharacter_C_Play_Viewed_Blood_Hit_Params
{
	struct FDamageEffect*                              bpp__Effect__pf;                                          // (Parm)
};

// Function MainCharacter.MainCharacter_C.Play Martial Artist Target Front
struct AMainCharacter_C_Play_Martial_Artist_Target_Front_Params
{
};

// Function MainCharacter.MainCharacter_C.Play Martial Artist Target Back
struct AMainCharacter_C_Play_Martial_Artist_Target_Back_Params
{
};

// Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Front
struct AMainCharacter_C_Play_Martial_Artist_Instigator_Front_Params
{
};

// Function MainCharacter.MainCharacter_C.Play Martial Artist Instigator Back
struct AMainCharacter_C_Play_Martial_Artist_Instigator_Back_Params
{
};

// Function MainCharacter.MainCharacter_C.PlayViewFlashBangHit
struct AMainCharacter_C_PlayViewFlashBangHit_Params
{
	struct FDamageEffect*                              bpp__Effect__pf;                                          // (Parm)
};

// Function MainCharacter.MainCharacter_C.PlayHitFromRadialDamage
struct AMainCharacter_C_PlayHitFromRadialDamage_Params
{
	struct FDamageEffect*                              bpp__Effect__pf__const;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MainCharacter.MainCharacter_C.PlayHitFromPointDamage
struct AMainCharacter_C_PlayHitFromPointDamage_Params
{
	struct FDamageEffect*                              bpp__Effect__pf__const;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MainCharacter.MainCharacter_C.PlayerRevived
struct AMainCharacter_C_PlayerRevived_Params
{
	class AKSPlayerState**                             bpp__Revivee__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             bpp__Reviver__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__ExpBonus__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.PlayerDown
struct AMainCharacter_C_PlayerDown_Params
{
	struct FCombatEventInfo*                           bpp__EventInfo__pf;                                       // (Parm)
	int*                                               bpp__ExpBonus__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.PlayerDeath
struct AMainCharacter_C_PlayerDeath_Params
{
	struct FCombatEventInfo*                           bpp__EventInfo__pf;                                       // (Parm)
};

// Function MainCharacter.MainCharacter_C.PlayEnemyHitSFX
struct AMainCharacter_C_PlayEnemyHitSFX_Params
{
	class UClass**                                     bpp__DamagexType__pfT;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     bpp__Target__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     bpp__InxDamagexTarget__pfTT;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.PlayActionCameraSequence
struct AMainCharacter_C_PlayActionCameraSequence_Params
{
	struct FName*                                      bpp__SequenceName__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.OnZiplineChangeForFov
struct AMainCharacter_C_OnZiplineChangeForFov_Params
{
	bool*                                              bpp__IsZiplining__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.On Shoulder Swap Changed Event
struct AMainCharacter_C_On_Shoulder_Swap_Changed_Event_Params
{
	class AKSCharacter**                               bpp__Character__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.OnUnhovered
struct AMainCharacter_C_OnUnhovered_Params
{
	float*                                             bpp__ExtraTime__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.OnStartSkydive
struct AMainCharacter_C_OnStartSkydive_Params
{
};

// Function MainCharacter.MainCharacter_C.OnSprintChangedCallback
struct AMainCharacter_C_OnSprintChangedCallback_Params
{
	bool*                                              bpp__IsSprinting__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.OnReviveStart
struct AMainCharacter_C_OnReviveStart_Params
{
	class AKSCharacter**                               bpp__Reviver__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             bpp__ReviveTime__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bpp__Remote__pf;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.OnReviveInterrupt
struct AMainCharacter_C_OnReviveInterrupt_Params
{
	class AKSCharacter**                               bpp__Reviver__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.OnReviveComplete
struct AMainCharacter_C_OnReviveComplete_Params
{
	class AKSCharacter**                               bpp__Reviver__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.OnPowerSlideChangedCallback
struct AMainCharacter_C_OnPowerSlideChangedCallback_Params
{
	bool*                                              bpp__IsPowerSliding__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.OnLanded
struct AMainCharacter_C_OnLanded_Params
{
	struct FHitResult*                                 bpp__Hit__pf__const;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.OnImmuneStart
struct AMainCharacter_C_OnImmuneStart_Params
{
};

// Function MainCharacter.MainCharacter_C.OnImmuneEnd
struct AMainCharacter_C_OnImmuneEnd_Params
{
};

// Function MainCharacter.MainCharacter_C.OnHovered
struct AMainCharacter_C_OnHovered_Params
{
};

// Function MainCharacter.MainCharacter_C.OnHealthChanged
struct AMainCharacter_C_OnHealthChanged_Params
{
	class AKSCharacterBase**                           bpp__Character__pf__const;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.OnFieldOfViewModChange
struct AMainCharacter_C_OnFieldOfViewModChange_Params
{
};

// Function MainCharacter.MainCharacter_C.OnEndZiplineRagdoll
struct AMainCharacter_C_OnEndZiplineRagdoll_Params
{
};

// Function MainCharacter.MainCharacter_C.OnEndSkydive
struct AMainCharacter_C_OnEndSkydive_Params
{
};

// Function MainCharacter.MainCharacter_C.OnEndPowerSlide
struct AMainCharacter_C_OnEndPowerSlide_Params
{
	EKSPowerSlideEndReason*                            bpp__EndReason__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.OnEndOutOfBounds
struct AMainCharacter_C_OnEndOutOfBounds_Params
{
};

// Function MainCharacter.MainCharacter_C.OnDodgeRollChangedEvent
struct AMainCharacter_C_OnDodgeRollChangedEvent_Params
{
	bool*                                              bpp__IsDodgeRolling__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.OnBeginZiplineRagdoll
struct AMainCharacter_C_OnBeginZiplineRagdoll_Params
{
};

// Function MainCharacter.MainCharacter_C.OnBeginPowerSlide
struct AMainCharacter_C_OnBeginPowerSlide_Params
{
};

// Function MainCharacter.MainCharacter_C.OnBeginOutOfBounds
struct AMainCharacter_C_OnBeginOutOfBounds_Params
{
};

// Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__UpdateFunc
struct AMainCharacter_C_NoseDiveFOVTimeline__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.NoseDiveFOVTimeline__FinishedFunc
struct AMainCharacter_C_NoseDiveFOVTimeline__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.NoseDiveCameraTransition
struct AMainCharacter_C_NoseDiveCameraTransition_Params
{
	bool*                                              bpp__bEnterNoseDive__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             bpp__AnimLength__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.MinFlashBang__UpdateFunc
struct AMainCharacter_C_MinFlashBang__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.MinFlashBang__FinishedFunc
struct AMainCharacter_C_MinFlashBang__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.MaxFlashBang__UpdateFunc
struct AMainCharacter_C_MaxFlashBang__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.MaxFlashBang__FinishedFunc
struct AMainCharacter_C_MaxFlashBang__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Target Front__UpdateFunc
struct AMainCharacter_C_Martial_Artist_Target_Front__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Target Front__FinishedFunc
struct AMainCharacter_C_Martial_Artist_Target_Front__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Target Back__UpdateFunc
struct AMainCharacter_C_Martial_Artist_Target_Back__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Target Back__FinishedFunc
struct AMainCharacter_C_Martial_Artist_Target_Back__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__UpdateFunc
struct AMainCharacter_C_Martial_Artist_Instigator_Front__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Front__FinishedFunc
struct AMainCharacter_C_Martial_Artist_Instigator_Front__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__UpdateFunc
struct AMainCharacter_C_Martial_Artist_Instigator_Back__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Martial Artist Instigator Back__FinishedFunc
struct AMainCharacter_C_Martial_Artist_Instigator_Back__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.LandingRollEvent
struct AMainCharacter_C_LandingRollEvent_Params
{
	bool*                                              bpp__IsDodgeRolling__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.KeepActionCameraAboveWater
struct AMainCharacter_C_KeepActionCameraAboveWater_Params
{
	struct FVector*                                    bpp__InBoomPosition__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     bpp__OutBoomPosition__pf;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.K2_OnStartCrouch
struct AMainCharacter_C_K2_OnStartCrouch_Params
{
	float*                                             bpp__HalfHeightAdjust__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             bpp__ScaledHalfHeightAdjust__pf;                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.K2_OnMovementModeChanged
struct AMainCharacter_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        bpp__PrevMovementMode__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        bpp__NewMovementMode__pf;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     bpp__PrevCustomMode__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     bpp__NewCustomMode__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.K2_OnEndViewTarget
struct AMainCharacter_C_K2_OnEndViewTarget_Params
{
	class APlayerController**                          bpp__PC__pf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.K2_OnEndCrouch
struct AMainCharacter_C_K2_OnEndCrouch_Params
{
	float*                                             bpp__HalfHeightAdjust__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             bpp__ScaledHalfHeightAdjust__pf;                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.K2_OnBecomeViewTarget
struct AMainCharacter_C_K2_OnBecomeViewTarget_Params
{
	class APlayerController**                          bpp__PC__pf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.InpActEvt_T_K2Node_InputKeyEvent_1
struct AMainCharacter_C_InpActEvt_T_K2Node_InputKeyEvent_1_Params
{
	struct FKey*                                       bpp__Key__pf;                                             // (Parm)
};

// Function MainCharacter.MainCharacter_C.InitRagdollOnDeath
struct AMainCharacter_C_InitRagdollOnDeath_Params
{
};

// Function MainCharacter.MainCharacter_C.InitializeHealthPP
struct AMainCharacter_C_InitializeHealthPP_Params
{
};

// Function MainCharacter.MainCharacter_C.Hide Zipline Pulley
struct AMainCharacter_C_Hide_Zipline_Pulley_Params
{
};

// Function MainCharacter.MainCharacter_C.Hide Upline Device
struct AMainCharacter_C_Hide_Upline_Device_Params
{
};

// Function MainCharacter.MainCharacter_C.Handle Downed Ragdoll
struct AMainCharacter_C_Handle_Downed_Ragdoll_Params
{
};

// Function MainCharacter.MainCharacter_C.HalfFlashBang__UpdateFunc
struct AMainCharacter_C_HalfFlashBang__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.HalfFlashBang__FinishedFunc
struct AMainCharacter_C_HalfFlashBang__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Get ADS Camera By Tag
struct AMainCharacter_C_Get_ADS_Camera_By_Tag_Params
{
	struct FName*                                      bpp__Tag__pf;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            bpp__CameraxComponent__pfT;                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.Get ADS Bend Target Camera Component
struct AMainCharacter_C_Get_ADS_Bend_Target_Camera_Component_Params
{
	class UCameraComponent*                            bpp__CameraxComponent__pfT;                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.GetTargetFov
struct AMainCharacter_C_GetTargetFov_Params
{
	float                                              bpp__TargetFov__pf;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.GetTargetArmorLevel
struct AMainCharacter_C_GetTargetArmorLevel_Params
{
	class AActor**                                     bpp__HitxTarget__pfT;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                bpp__ArmorxLevel__pfT;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.GetRagdollFacingDirection
struct AMainCharacter_C_GetRagdollFacingDirection_Params
{
	bool                                               bpp__IsUp__pf;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.GetLastHitDistance
struct AMainCharacter_C_GetLastHitDistance_Params
{
	float                                              bpp__OutDistance__pf;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.GetFlashBangEffectDurationFromDistance
struct AMainCharacter_C_GetFlashBangEffectDurationFromDistance_Params
{
	float*                                             bpp__Distance__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.GetDownedTransitionMontage
struct AMainCharacter_C_GetDownedTransitionMontage_Params
{
	class UAnimMontage*                                bpp__OutAnimMontage__pf;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.GetDeathTransitionAnimation
struct AMainCharacter_C_GetDeathTransitionAnimation_Params
{
	class UAnimSequence*                               bpp__OutAnimSequence__pf;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.FreeFall Camera Burst
struct AMainCharacter_C_FreeFall_Camera_Burst_Params
{
};

// Function MainCharacter.MainCharacter_C.Finish Action Camera Update
struct AMainCharacter_C_Finish_Action_Camera_Update_Params
{
};

// Function MainCharacter.MainCharacter_C.FinishHacking
struct AMainCharacter_C_FinishHacking_Params
{
};

// Function MainCharacter.MainCharacter_C.ExitDownedRagdoll
struct AMainCharacter_C_ExitDownedRagdoll_Params
{
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_5
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_5_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_4
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_4_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_23
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_23_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_18
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_18_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_17
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_17_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_117
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_117_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_116
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_116_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.ExecuteUbergraph_MainCharacter_12
struct AMainCharacter_C_ExecuteUbergraph_MainCharacter_12_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.EventSetupCamerasForSpectator
struct AMainCharacter_C_EventSetupCamerasForSpectator_Params
{
	bool*                                              bpp__Enabled__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__UpdateFunc
struct AMainCharacter_C_EnterFreeFallFOVTimeline__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.EnterFreeFallFOVTimeline__FinishedFunc
struct AMainCharacter_C_EnterFreeFallFOVTimeline__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.EnterDownedRagdoll
struct AMainCharacter_C_EnterDownedRagdoll_Params
{
};

// Function MainCharacter.MainCharacter_C.End Down PP
struct AMainCharacter_C_End_Down_PP_Params
{
};

// Function MainCharacter.MainCharacter_C.EndImmunity__UpdateFunc
struct AMainCharacter_C_EndImmunity__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.EndImmunity__FinishedFunc
struct AMainCharacter_C_EndImmunity__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.DoSetOnFire
struct AMainCharacter_C_DoSetOnFire_Params
{
};

// Function MainCharacter.MainCharacter_C.DoExtinguishFire
struct AMainCharacter_C_DoExtinguishFire_Params
{
};

// Function MainCharacter.MainCharacter_C.DoBindZiplineEvents
struct AMainCharacter_C_DoBindZiplineEvents_Params
{
};

// Function MainCharacter.MainCharacter_C.DoBindSprintEvents
struct AMainCharacter_C_DoBindSprintEvents_Params
{
};

// Function MainCharacter.MainCharacter_C.DoBindDodgeRollEvents
struct AMainCharacter_C_DoBindDodgeRollEvents_Params
{
};

// Function MainCharacter.MainCharacter_C.DetermineKnockbackFacing
struct AMainCharacter_C_DetermineKnockbackFacing_Params
{
	struct FVector*                                    bpp__HitDirection__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EHitEnum*                                          bpp__SideHit__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    bpp__ActorRotation__pf;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.DetachSkydiveParticle
struct AMainCharacter_C_DetachSkydiveParticle_Params
{
};

// Function MainCharacter.MainCharacter_C.DestructibleSpeedGateOverlappedEvent
struct AMainCharacter_C_DestructibleSpeedGateOverlappedEvent_Params
{
	struct FVector*                                    bpp__BreakingLocation__pf;                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    bpp__BreakingDirection__pf;                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    bpp__BreakingNormal__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.CheckFlashBangOnViewTargetChange
struct AMainCharacter_C_CheckFlashBangOnViewTargetChange_Params
{
};

// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__UpdateFunc
struct AMainCharacter_C_Camera_Boom_Timeline__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To Main Camera__EventFunc
struct AMainCharacter_C_Camera_Boom_Timeline__Switch_To_Main_Camera__EventFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__Switch To ADS Camera__EventFunc
struct AMainCharacter_C_Camera_Boom_Timeline__Switch_To_ADS_Camera__EventFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.Camera Boom Timeline__FinishedFunc
struct AMainCharacter_C_Camera_Boom_Timeline__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.CameraDodgeRoll__UpdateFunc
struct AMainCharacter_C_CameraDodgeRoll__UpdateFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.CameraDodgeRoll__FinishedFunc
struct AMainCharacter_C_CameraDodgeRoll__FinishedFunc_Params
{
};

// Function MainCharacter.MainCharacter_C.CacheRagdollPelvisLocation
struct AMainCharacter_C_CacheRagdollPelvisLocation_Params
{
};

// Function MainCharacter.MainCharacter_C.BlueprintOnStopSwimming
struct AMainCharacter_C_BlueprintOnStopSwimming_Params
{
};

// Function MainCharacter.MainCharacter_C.BlueprintOnStartSwimming
struct AMainCharacter_C_BlueprintOnStartSwimming_Params
{
};

// Function MainCharacter.MainCharacter_C.BlueprintHandleDeath
struct AMainCharacter_C_BlueprintHandleDeath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MainCharacter.MainCharacter_C.Audio_Init
struct AMainCharacter_C_Audio_Init_Params
{
};

// Function MainCharacter.MainCharacter_C.ApplyLastHitImpulse
struct AMainCharacter_C_ApplyLastHitImpulse_Params
{
	bool*                                              bpp__UpdateTargetRotation__pf;                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bpp__AffectCapsule__pf;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction MainCharacter.MainCharacter_C.PlayerReviveDelegate__DelegateSignature
struct AMainCharacter_C_PlayerReviveDelegate__DelegateSignature_Params
{
	class AKSPlayerState**                             bpp__Revivee__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             bpp__Reviver__pf;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               bpp__ExpBonus__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction MainCharacter.MainCharacter_C.PlayerDownInfo__DelegateSignature
struct AMainCharacter_C_PlayerDownInfo__DelegateSignature_Params
{
	struct FCombatEventInfo*                           bpp__EventInfo__pf;                                       // (Parm)
	int*                                               bpp__ExpBonus__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction MainCharacter.MainCharacter_C.PlayerDeathInfo__DelegateSignature
struct AMainCharacter_C_PlayerDeathInfo__DelegateSignature_Params
{
	struct FCombatEventInfo*                           bpp__EventInfo__pf;                                       // (Parm)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnSprintChanged__DelegateSignature
struct AMainCharacter_C_OnSprintChanged__DelegateSignature_Params
{
	bool*                                              bpp__IsSprinting__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnShoulderSwapChanged__DelegateSignature
struct AMainCharacter_C_OnShoulderSwapChanged__DelegateSignature_Params
{
	class AKSCharacter**                               bpp__Character__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnPowerSlideChanged__DelegateSignature
struct AMainCharacter_C_OnPowerSlideChanged__DelegateSignature_Params
{
	bool*                                              bpp__IsPowerSliding__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnPlayerStateChanged__DelegateSignature
struct AMainCharacter_C_OnPlayerStateChanged__DelegateSignature_Params
{
	class APlayerState**                               bpp__PlayerState__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnHealthChanged__DelegateSignature
struct AMainCharacter_C_OnHealthChanged__DelegateSignature_Params
{
	class AKSCharacterBase**                           bpp__Character__pf;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnGoDown__DelegateSignature
struct AMainCharacter_C_OnGoDown__DelegateSignature_Params
{
};

// DelegateFunction MainCharacter.MainCharacter_C.OnEndZipline__DelegateSignature
struct AMainCharacter_C_OnEndZipline__DelegateSignature_Params
{
};

// DelegateFunction MainCharacter.MainCharacter_C.OnDodgeRollChanged__DelegateSignature
struct AMainCharacter_C_OnDodgeRollChanged__DelegateSignature_Params
{
	bool*                                              bpp__IsDodgeRolling__pf;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction MainCharacter.MainCharacter_C.OnBeginZipline__DelegateSignature
struct AMainCharacter_C_OnBeginZipline__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
