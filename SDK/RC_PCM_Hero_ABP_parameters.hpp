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

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimMIrrorDelayEnd
struct UPCM_Hero_ABP_C_AnimMIrrorDelayEnd_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateIKHandRuleset
struct UPCM_Hero_ABP_C_UpdateIKHandRuleset_Params
{
	class UKSWeaponComponent**                         InWeaponComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateCustomPivot
struct UPCM_Hero_ABP_C_UpdateCustomPivot_Params
{
	bool*                                              bNewValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.TickHitReacts
struct UPCM_Hero_ABP_C_TickHitReacts_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.RemoveExpiredHitReact
struct UPCM_Hero_ABP_C_RemoveExpiredHitReact_Params
{
	struct FHitReaction*                               ExpiredHitReact;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetPoseDrivenHitReactParams
struct UPCM_Hero_ABP_C_SetPoseDrivenHitReactParams_Params
{
	struct FVector*                                    Impact_Normal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.DetermineAutoEquip
struct UPCM_Hero_ABP_C_DetermineAutoEquip_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocalAccelerationToMovementDirection
struct UPCM_Hero_ABP_C_LocalAccelerationToMovementDirection_Params
{
	struct FVector*                                    Local_Acceleration;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              GetOppositeDirection;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EKSMovementDirection                               AccelerationDirection;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetStartMeleeLowerBodyAnim
struct UPCM_Hero_ABP_C_SetStartMeleeLowerBodyAnim_Params
{
	EKSMovementDirection*                              Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AfterInteraction
struct UPCM_Hero_ABP_C_AfterInteraction_Params
{
	struct FName*                                      New_Interact_State;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetStopAnim
struct UPCM_Hero_ABP_C_SetStopAnim_Params
{
	EKSMovementDirection*                              Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetStartAnim
struct UPCM_Hero_ABP_C_SetStartAnim_Params
{
	EKSMovementDirection*                              Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetMovementDirection
struct UPCM_Hero_ABP_C_SetMovementDirection_Params
{
	EKSMovementDirection*                              Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EKSMovementDirection*                              OldMoveDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetTransitionAnims
struct UPCM_Hero_ABP_C_SetTransitionAnims_Params
{
	class UAnimSequenceBase**                          StartMoving;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          CurrentStopMovingA;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          CurrentDirectionPivot;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          StartMovingCrouch;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          CurrentStopMovingCrouch;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          CurrentDirectionPivotCrouch;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          StartDisableMoving;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          StopDisableMoving;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          CurrentDisablePivot;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetMaxSpeedValues_2
struct UPCM_Hero_ABP_C_SetMaxSpeedValues_2_Params
{
	class UKSWeaponAsset**                             WeaponAsset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetHitReactParams
struct UPCM_Hero_ABP_C_SetHitReactParams_Params
{
	struct FVector*                                    RelativeImpactLocation;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EKSMovementDirection*                              HitDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SwitchWeaponIK
struct UPCM_Hero_ABP_C_SwitchWeaponIK_Params
{
	class UKSWeaponComponent**                         WeaponRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SwitchWeapon
struct UPCM_Hero_ABP_C_SwitchWeapon_Params
{
	class UKSWeaponComponent**                         WeaponRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Stop Turn In Place
struct UPCM_Hero_ABP_C_Stop_Turn_In_Place_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Start Turn In Place
struct UPCM_Hero_ABP_C_Start_Turn_In_Place_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Should Turn In Place Be Active
struct UPCM_Hero_ABP_C_Should_Turn_In_Place_Be_Active_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Should Update Component Rotation
struct UPCM_Hero_ABP_C_Should_Update_Component_Rotation_Params
{
	float*                                             Delta_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              New_Compoent_Yaw;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Desired Component Yaw
struct UPCM_Hero_ABP_C_Set_Desired_Component_Yaw_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Get Roll Directions
struct UPCM_Hero_ABP_C_Get_Roll_Directions_Params
{
	struct FVector2D*                                  RollDirectionInput;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.TurnInPlace
struct UPCM_Hero_ABP_C_TurnInPlace_Params
{
	bool                                               Turn_Over;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Clothing SFX Switch
struct UPCM_Hero_ABP_C_Set_Clothing_SFX_Switch_Params
{
	struct FName*                                      Clothing_Type;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor_Return;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Get Footstep SFX Material
struct UPCM_Hero_ABP_C_Get_Footstep_SFX_Material_Params
{
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Material_Return;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor_Return;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Footstep SFX Switches
struct UPCM_Hero_ABP_C_Set_Footstep_SFX_Switches_Params
{
	struct FName*                                      Shoe_Name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Step_Name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Material_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor_Return;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Aims
struct UPCM_Hero_ABP_C_Set_Aims_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set ADS 1p Aims
struct UPCM_Hero_ABP_C_Set_ADS_1p_Aims_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Turn Value
struct UPCM_Hero_ABP_C_Set_Turn_Value_Params
{
	float*                                             Yaw;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_4DE3C6AE469BE13DC02A7AB80E924B7B
struct UPCM_Hero_ABP_C_OnNotifyEnd_4DE3C6AE469BE13DC02A7AB80E924B7B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_4DE3C6AE469BE13DC02A7AB80E924B7B
struct UPCM_Hero_ABP_C_OnNotifyBegin_4DE3C6AE469BE13DC02A7AB80E924B7B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_4DE3C6AE469BE13DC02A7AB80E924B7B
struct UPCM_Hero_ABP_C_OnInterrupted_4DE3C6AE469BE13DC02A7AB80E924B7B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_4DE3C6AE469BE13DC02A7AB80E924B7B
struct UPCM_Hero_ABP_C_OnBlendOut_4DE3C6AE469BE13DC02A7AB80E924B7B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_4DE3C6AE469BE13DC02A7AB80E924B7B
struct UPCM_Hero_ABP_C_OnCompleted_4DE3C6AE469BE13DC02A7AB80E924B7B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_F55321C648B813A33A06BF926330EB4F
struct UPCM_Hero_ABP_C_OnNotifyEnd_F55321C648B813A33A06BF926330EB4F_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_F55321C648B813A33A06BF926330EB4F
struct UPCM_Hero_ABP_C_OnNotifyBegin_F55321C648B813A33A06BF926330EB4F_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_F55321C648B813A33A06BF926330EB4F
struct UPCM_Hero_ABP_C_OnInterrupted_F55321C648B813A33A06BF926330EB4F_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_F55321C648B813A33A06BF926330EB4F
struct UPCM_Hero_ABP_C_OnBlendOut_F55321C648B813A33A06BF926330EB4F_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_F55321C648B813A33A06BF926330EB4F
struct UPCM_Hero_ABP_C_OnCompleted_F55321C648B813A33A06BF926330EB4F_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_68DE575241BD5D31439A859E850392A2
struct UPCM_Hero_ABP_C_OnNotifyEnd_68DE575241BD5D31439A859E850392A2_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_68DE575241BD5D31439A859E850392A2
struct UPCM_Hero_ABP_C_OnNotifyBegin_68DE575241BD5D31439A859E850392A2_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_68DE575241BD5D31439A859E850392A2
struct UPCM_Hero_ABP_C_OnInterrupted_68DE575241BD5D31439A859E850392A2_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_68DE575241BD5D31439A859E850392A2
struct UPCM_Hero_ABP_C_OnBlendOut_68DE575241BD5D31439A859E850392A2_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_68DE575241BD5D31439A859E850392A2
struct UPCM_Hero_ABP_C_OnCompleted_68DE575241BD5D31439A859E850392A2_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_143632A9488E9A82D17492B8710C0540
struct UPCM_Hero_ABP_C_OnNotifyEnd_143632A9488E9A82D17492B8710C0540_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_143632A9488E9A82D17492B8710C0540
struct UPCM_Hero_ABP_C_OnNotifyBegin_143632A9488E9A82D17492B8710C0540_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_143632A9488E9A82D17492B8710C0540
struct UPCM_Hero_ABP_C_OnInterrupted_143632A9488E9A82D17492B8710C0540_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_143632A9488E9A82D17492B8710C0540
struct UPCM_Hero_ABP_C_OnBlendOut_143632A9488E9A82D17492B8710C0540_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_143632A9488E9A82D17492B8710C0540
struct UPCM_Hero_ABP_C_OnCompleted_143632A9488E9A82D17492B8710C0540_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_B5B16ACD4F176963194D6B8527E16FBB
struct UPCM_Hero_ABP_C_OnNotifyEnd_B5B16ACD4F176963194D6B8527E16FBB_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_B5B16ACD4F176963194D6B8527E16FBB
struct UPCM_Hero_ABP_C_OnNotifyBegin_B5B16ACD4F176963194D6B8527E16FBB_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_B5B16ACD4F176963194D6B8527E16FBB
struct UPCM_Hero_ABP_C_OnInterrupted_B5B16ACD4F176963194D6B8527E16FBB_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_B5B16ACD4F176963194D6B8527E16FBB
struct UPCM_Hero_ABP_C_OnBlendOut_B5B16ACD4F176963194D6B8527E16FBB_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_B5B16ACD4F176963194D6B8527E16FBB
struct UPCM_Hero_ABP_C_OnCompleted_B5B16ACD4F176963194D6B8527E16FBB_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_1BE19CEA4A7E760561F3419034A02FE3
struct UPCM_Hero_ABP_C_OnNotifyEnd_1BE19CEA4A7E760561F3419034A02FE3_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_1BE19CEA4A7E760561F3419034A02FE3
struct UPCM_Hero_ABP_C_OnNotifyBegin_1BE19CEA4A7E760561F3419034A02FE3_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_1BE19CEA4A7E760561F3419034A02FE3
struct UPCM_Hero_ABP_C_OnInterrupted_1BE19CEA4A7E760561F3419034A02FE3_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_1BE19CEA4A7E760561F3419034A02FE3
struct UPCM_Hero_ABP_C_OnBlendOut_1BE19CEA4A7E760561F3419034A02FE3_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_1BE19CEA4A7E760561F3419034A02FE3
struct UPCM_Hero_ABP_C_OnCompleted_1BE19CEA4A7E760561F3419034A02FE3_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_C78BE1F74ADCCB255C1BCD9E6240104B
struct UPCM_Hero_ABP_C_OnNotifyEnd_C78BE1F74ADCCB255C1BCD9E6240104B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_C78BE1F74ADCCB255C1BCD9E6240104B
struct UPCM_Hero_ABP_C_OnNotifyBegin_C78BE1F74ADCCB255C1BCD9E6240104B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_C78BE1F74ADCCB255C1BCD9E6240104B
struct UPCM_Hero_ABP_C_OnInterrupted_C78BE1F74ADCCB255C1BCD9E6240104B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_C78BE1F74ADCCB255C1BCD9E6240104B
struct UPCM_Hero_ABP_C_OnBlendOut_C78BE1F74ADCCB255C1BCD9E6240104B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_C78BE1F74ADCCB255C1BCD9E6240104B
struct UPCM_Hero_ABP_C_OnCompleted_C78BE1F74ADCCB255C1BCD9E6240104B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_D02C034A4EB0D0E596D903B8DBD4801B
struct UPCM_Hero_ABP_C_OnNotifyEnd_D02C034A4EB0D0E596D903B8DBD4801B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_D02C034A4EB0D0E596D903B8DBD4801B
struct UPCM_Hero_ABP_C_OnNotifyBegin_D02C034A4EB0D0E596D903B8DBD4801B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_D02C034A4EB0D0E596D903B8DBD4801B
struct UPCM_Hero_ABP_C_OnInterrupted_D02C034A4EB0D0E596D903B8DBD4801B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_D02C034A4EB0D0E596D903B8DBD4801B
struct UPCM_Hero_ABP_C_OnBlendOut_D02C034A4EB0D0E596D903B8DBD4801B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_D02C034A4EB0D0E596D903B8DBD4801B
struct UPCM_Hero_ABP_C_OnCompleted_D02C034A4EB0D0E596D903B8DBD4801B_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_9E6BC1B74A4D30EF4551EDBB637F89EE
struct UPCM_Hero_ABP_C_OnNotifyEnd_9E6BC1B74A4D30EF4551EDBB637F89EE_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_9E6BC1B74A4D30EF4551EDBB637F89EE
struct UPCM_Hero_ABP_C_OnNotifyBegin_9E6BC1B74A4D30EF4551EDBB637F89EE_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_9E6BC1B74A4D30EF4551EDBB637F89EE
struct UPCM_Hero_ABP_C_OnInterrupted_9E6BC1B74A4D30EF4551EDBB637F89EE_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_9E6BC1B74A4D30EF4551EDBB637F89EE
struct UPCM_Hero_ABP_C_OnBlendOut_9E6BC1B74A4D30EF4551EDBB637F89EE_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_9E6BC1B74A4D30EF4551EDBB637F89EE
struct UPCM_Hero_ABP_C_OnCompleted_9E6BC1B74A4D30EF4551EDBB637F89EE_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_D0E2AA7A43FF94C946DDED97889E22B1
struct UPCM_Hero_ABP_C_OnNotifyEnd_D0E2AA7A43FF94C946DDED97889E22B1_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_D0E2AA7A43FF94C946DDED97889E22B1
struct UPCM_Hero_ABP_C_OnNotifyBegin_D0E2AA7A43FF94C946DDED97889E22B1_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_D0E2AA7A43FF94C946DDED97889E22B1
struct UPCM_Hero_ABP_C_OnInterrupted_D0E2AA7A43FF94C946DDED97889E22B1_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_D0E2AA7A43FF94C946DDED97889E22B1
struct UPCM_Hero_ABP_C_OnBlendOut_D0E2AA7A43FF94C946DDED97889E22B1_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_D0E2AA7A43FF94C946DDED97889E22B1
struct UPCM_Hero_ABP_C_OnCompleted_D0E2AA7A43FF94C946DDED97889E22B1_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyEnd_EF8A596E40E8D98E573038A6F2873FEB
struct UPCM_Hero_ABP_C_OnNotifyEnd_EF8A596E40E8D98E573038A6F2873FEB_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnNotifyBegin_EF8A596E40E8D98E573038A6F2873FEB
struct UPCM_Hero_ABP_C_OnNotifyBegin_EF8A596E40E8D98E573038A6F2873FEB_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnInterrupted_EF8A596E40E8D98E573038A6F2873FEB
struct UPCM_Hero_ABP_C_OnInterrupted_EF8A596E40E8D98E573038A6F2873FEB_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnBlendOut_EF8A596E40E8D98E573038A6F2873FEB
struct UPCM_Hero_ABP_C_OnBlendOut_EF8A596E40E8D98E573038A6F2873FEB_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnCompleted_EF8A596E40E8D98E573038A6F2873FEB
struct UPCM_Hero_ABP_C_OnCompleted_EF8A596E40E8D98E573038A6F2873FEB_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_519537504E7F068A94D465B5579FCC77
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_519537504E7F068A94D465B5579FCC77_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_EF9DE76E43DA1FFA5323C29FE06381CE
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_EF9DE76E43DA1FFA5323C29FE06381CE_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5EFBC2234D188CEEB4C6CC8F0B5C300C
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5EFBC2234D188CEEB4C6CC8F0B5C300C_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_897086894750D35614505B985BA4FA44
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_897086894750D35614505B985BA4FA44_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_235330B148C463A52BBEADBB3334BD9C
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_235330B148C463A52BBEADBB3334BD9C_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_F29ACFE44E09AA30EB95BAA1D2FCC174
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_F29ACFE44E09AA30EB95BAA1D2FCC174_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7F37B5C9432AC17748DCC48AB35CCE3A
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_7F37B5C9432AC17748DCC48AB35CCE3A_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_233C356842DB534CD453E29390007BA8
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_233C356842DB534CD453E29390007BA8_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_73D785DB4ABE1311BEF5A69B1EE3D871
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_73D785DB4ABE1311BEF5A69B1EE3D871_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_EBB941F744EC4662FC80F5970ED7372D
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_EBB941F744EC4662FC80F5970ED7372D_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_F081B20E4E1B6F66718CEDBC863D2E56
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_F081B20E4E1B6F66718CEDBC863D2E56_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_ModifyBone_B8D90FC441F94F87E27CBEBB6D55E7F8
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_ModifyBone_B8D90FC441F94F87E27CBEBB6D55E7F8_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_72640BAF4E1BA30E6914C3B9C3DE123A
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_72640BAF4E1BA30E6914C3B9C3DE123A_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_BEB6C58A42EF239509BC208CC8E5DC6B
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_BEB6C58A42EF239509BC208CC8E5DC6B_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_298A8B91461F3704A5CD968634024FC4
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_298A8B91461F3704A5CD968634024FC4_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_247B92A1445C4BA59D2C2489EB885C50
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_247B92A1445C4BA59D2C2489EB885C50_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_15D9F1CE48F5DA893903FE8F9DA54992
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_15D9F1CE48F5DA893903FE8F9DA54992_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_0AA28A8642BFC6195FE0659BEDBCE288
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_0AA28A8642BFC6195FE0659BEDBCE288_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_E6CEDD2941ABF822CB9015BB697D9852
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_E6CEDD2941ABF822CB9015BB697D9852_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_792988884C48FF32578DF1A60C1F730A
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_792988884C48FF32578DF1A60C1F730A_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_AD4D32C348D8ACB1471CC38EE304A927
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_AD4D32C348D8ACB1471CC38EE304A927_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_508DA5314031B0515F9C27BB0E996343
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_508DA5314031B0515F9C27BB0E996343_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_D9E2F130439D23E30B95FD8B3BFAF94D
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_D9E2F130439D23E30B95FD8B3BFAF94D_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_FD27A6D74F8D2B7D1CA20E840BC80C91
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_FD27A6D74F8D2B7D1CA20E840BC80C91_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_885438D342B7435FCF6EF794926B4C05
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_885438D342B7435FCF6EF794926B4C05_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_A5DA58914CC046537FED968C26F8DE9A
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_A5DA58914CC046537FED968C26F8DE9A_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SubInstance_3741820D49F2DBC1518975A785322FAF
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SubInstance_3741820D49F2DBC1518975A785322FAF_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_47529EDF430B1594C51877ABC5668AD8
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_47529EDF430B1594C51877ABC5668AD8_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SubInstance_461224144FFC5A148A9487A371F95429
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SubInstance_461224144FFC5A148A9487A371F95429_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5BC0184E4C52FEA5C17D559F35155358
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_5BC0184E4C52FEA5C17D559F35155358_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E9D202664C14A460D625E094CFA3FD19
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_E9D202664C14A460D625E094CFA3FD19_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_F929E7F04FA56EDE2222A1965B5BDA8E
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_F929E7F04FA56EDE2222A1965B5BDA8E_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_CC80040E4767FEB07299938BB669DDDF
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_CC80040E4767FEB07299938BB669DDDF_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequencePlayer_AC99E87443CF5ED26F9740A1D62A6B51
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequencePlayer_AC99E87443CF5ED26F9740A1D62A6B51_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequencePlayer_3C711A964035B92CFC598AB773471D40
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequencePlayer_3C711A964035B92CFC598AB773471D40_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequencePlayer_17C38D9A4D2D3481698080B9DDF771AD
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequencePlayer_17C38D9A4D2D3481698080B9DDF771AD_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.BlueprintInitializeAnimation
struct UPCM_Hero_ABP_C_BlueprintInitializeAnimation_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Fire End
struct UPCM_Hero_ABP_C_AnimNotify_Fire_End_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Weapon
struct UPCM_Hero_ABP_C_AnimNotify_Hide_Weapon_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UnHide Weapon
struct UPCM_Hero_ABP_C_AnimNotify_UnHide_Weapon_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoDodgeRoll
struct UPCM_Hero_ABP_C_EventDoDodgeRoll_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStartInteraction
struct UPCM_Hero_ABP_C_EventStartInteraction_Params
{
	struct FName*                                      NewInteractState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewInteractHeight;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewInteractTime;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndInteraction
struct UPCM_Hero_ABP_C_EventEndInteraction_Params
{
	struct FName*                                      OldInteractState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoZipLine
struct UPCM_Hero_ABP_C_EventDoZipLine_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndZipLine
struct UPCM_Hero_ABP_C_EventEndZipLine_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionPivot
struct UPCM_Hero_ABP_C_LocomotionPivot_Params
{
	struct FVector*                                    PivotLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_RetrieveEnd
struct UPCM_Hero_ABP_C_AnimNotify_RetrieveEnd_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_RetrieveBegin
struct UPCM_Hero_ABP_C_AnimNotify_RetrieveBegin_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ZipLineTurnReset
struct UPCM_Hero_ABP_C_ZipLineTurnReset_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_MagThrow
struct UPCM_Hero_ABP_C_AnimNotify_MagThrow_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Gadget
struct UPCM_Hero_ABP_C_AnimNotify_Hide_Gadget_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UnHide Gadget
struct UPCM_Hero_ABP_C_AnimNotify_UnHide_Gadget_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Mag
struct UPCM_Hero_ABP_C_AnimNotify_Hide_Mag_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Unhide Mag
struct UPCM_Hero_ABP_C_AnimNotify_Unhide_Mag_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequenceEvaluator_A1B7FEF64372CB5E8BB9E98EBB612A42
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequenceEvaluator_A1B7FEF64372CB5E8BB9E98EBB612A42_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.IsPlayerRagdoll
struct UPCM_Hero_ABP_C_IsPlayerRagdoll_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.CacheRootRagdollState
struct UPCM_Hero_ABP_C_CacheRootRagdollState_Params
{
	struct FVector*                                    RootLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   RootRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_CanStand
struct UPCM_Hero_ABP_C_AnimNotify_CanStand_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoGoDown
struct UPCM_Hero_ABP_C_EventDoGoDown_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequenceEvaluator_73FA3CC94B851D1B012CCEBE50F127F6
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequenceEvaluator_73FA3CC94B851D1B012CCEBE50F127F6_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UnHide Tablet
struct UPCM_Hero_ABP_C_AnimNotify_UnHide_Tablet_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Hide Tablet
struct UPCM_Hero_ABP_C_AnimNotify_Hide_Tablet_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionStop
struct UPCM_Hero_ABP_C_LocomotionStop_Params
{
	struct FVector*                                    StopLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionStart
struct UPCM_Hero_ABP_C_LocomotionStart_Params
{
	struct FVector*                                    StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_ExitCustomPivot
struct UPCM_Hero_ABP_C_AnimNotify_ExitCustomPivot_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_BeginLocomotionStartExit
struct UPCM_Hero_ABP_C_AnimNotify_BeginLocomotionStartExit_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_BeginLocomotionLoopExit
struct UPCM_Hero_ABP_C_AnimNotify_BeginLocomotionLoopExit_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_EndLocomotionStartEnter
struct UPCM_Hero_ABP_C_AnimNotify_EndLocomotionStartEnter_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_BeginLocomotionStartEnter
struct UPCM_Hero_ABP_C_AnimNotify_BeginLocomotionStartEnter_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_InterruptStartExit
struct UPCM_Hero_ABP_C_AnimNotify_InterruptStartExit_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_InterruptStopExit
struct UPCM_Hero_ABP_C_AnimNotify_InterruptStopExit_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequenceEvaluator_E333098C418B5FF82A8E07BEAA8370EC
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_SequenceEvaluator_E333098C418B5FF82A8E07BEAA8370EC_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnMovementDirectionChanged
struct UPCM_Hero_ABP_C_OnMovementDirectionChanged_Params
{
	EKSMovementDirection*                              OldDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EKSMovementDirection*                              NewDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoStun
struct UPCM_Hero_ABP_C_EventDoStun_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionPivotCheckpoint
struct UPCM_Hero_ABP_C_LocomotionPivotCheckpoint_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoVault
struct UPCM_Hero_ABP_C_EventDoVault_Params
{
	float*                                             InMantleHeight;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInVault;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InVaultDrop;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InUpDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAcrossDuration;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InDownDuration;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InMantleName;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoAbilityMovement
struct UPCM_Hero_ABP_C_EventDoAbilityMovement_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStartSwimming
struct UPCM_Hero_ABP_C_EventStartSwimming_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStopSwimming
struct UPCM_Hero_ABP_C_EventStopSwimming_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Plant Left Hand
struct UPCM_Hero_ABP_C_AnimNotify_Plant_Left_Hand_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Plant Right Hand
struct UPCM_Hero_ABP_C_AnimNotify_Plant_Right_Hand_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Unplant Left Hand
struct UPCM_Hero_ABP_C_AnimNotify_Unplant_Left_Hand_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_Unplant Right Hand
struct UPCM_Hero_ABP_C_AnimNotify_Unplant_Right_Hand_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.BlueprintUpdateAnimation
struct UPCM_Hero_ABP_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_DisableAims
struct UPCM_Hero_ABP_C_AnimNotify_DisableAims_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_EnableAims
struct UPCM_Hero_ABP_C_AnimNotify_EnableAims_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStartSubmerge
struct UPCM_Hero_ABP_C_EventStartSubmerge_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventStopSubmerge
struct UPCM_Hero_ABP_C_EventStopSubmerge_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndVault
struct UPCM_Hero_ABP_C_EventEndVault_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_FDE428A64A8600FDBAFD86897B050116
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_FDE428A64A8600FDBAFD86897B050116_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_D7D17C8F49FC7C08F977C4AE3EC7DC49
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_D7D17C8F49FC7C08F977C4AE3EC7DC49_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UpdateRagdollPelvis
struct UPCM_Hero_ABP_C_UpdateRagdollPelvis_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_FFFF50DE418F4F11D4A771A6474B263A
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_FFFF50DE418F4F11D4A771A6474B263A_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_D3E939DE488E632566F579A789E2E023
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_D3E939DE488E632566F579A789E2E023_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_A4F77848485D2E6C0D7D26881DF004BF
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_AimOffsetSkinned_A4F77848485D2E6C0D7D26881DF004BF_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_106FE8CB4E6BE0DB7F595E9A8966BF48
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TwoWayBlend_106FE8CB4E6BE0DB7F595E9A8966BF48_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_9381936246B36104ED162FB4E9ED3434
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_9381936246B36104ED162FB4E9ED3434_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BAE9A17D40662CAF9E691E83B4482E5D
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_BAE9A17D40662CAF9E691E83B4482E5D_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.LocomotionPrePivot
struct UPCM_Hero_ABP_C_LocomotionPrePivot_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_UpdateCrouchTransition1P
struct UPCM_Hero_ABP_C_AnimNotify_UpdateCrouchTransition1P_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_EndLocomotionStartExit
struct UPCM_Hero_ABP_C_AnimNotify_EndLocomotionStartExit_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndPowerSlide
struct UPCM_Hero_ABP_C_EventEndPowerSlide_Params
{
	EKSPowerSlideEndReason*                            EndReason;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventDoPowerSlide
struct UPCM_Hero_ABP_C_EventDoPowerSlide_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_FB952A3747B8EBAA8E56269CBB6E9766
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_TransitionResult_FB952A3747B8EBAA8E56269CBB6E9766_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EventEndAbilityMovement
struct UPCM_Hero_ABP_C_EventEndAbilityMovement_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetUpStartAnims
struct UPCM_Hero_ABP_C_SetUpStartAnims_Params
{
	EKSMovementDirection*                              NewMoveDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SetUpStopAnims
struct UPCM_Hero_ABP_C_SetUpStopAnims_Params
{
	EKSMovementDirection*                              NewMoveDirection;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.RequestNewCombatState
struct UPCM_Hero_ABP_C_RequestNewCombatState_Params
{
	ECombatState*                                      NewCombatState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBlockCooldown;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.HideMag
struct UPCM_Hero_ABP_C_HideMag_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.UnhideMag
struct UPCM_Hero_ABP_C_UnhideMag_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_7AE8C24845B931317D805D8FA7B3EA9B
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_7AE8C24845B931317D805D8FA7B3EA9B_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ShoulderCharge
struct UPCM_Hero_ABP_C_ShoulderCharge_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ReviveMesh
struct UPCM_Hero_ABP_C_ReviveMesh_Params
{
	class UAnimMontage**                               ReviveMontage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsInAir;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SwitchWeaponNative
struct UPCM_Hero_ABP_C_SwitchWeaponNative_Params
{
	class UKSWeaponComponent**                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.SwitchWeaponIKNative
struct UPCM_Hero_ABP_C_SwitchWeaponIKNative_Params
{
	class UKSWeaponComponent**                         Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Do Bind Hit React Event New
struct UPCM_Hero_ABP_C_Do_Bind_Hit_React_Event_New_Params
{
	class AKSCharacter**                               In_Character;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_5491CA5A4C73A2DB3629D1BB2263E1AF
struct UPCM_Hero_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_PCM_Hero_ABP_AnimGraphNode_BlendListByBool_5491CA5A4C73A2DB3629D1BB2263E1AF_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Hit React Event New
struct UPCM_Hero_ABP_C_Hit_React_Event_New_Params
{
	class AKSCharacter**                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEffect*                              Response;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_HackingBegin
struct UPCM_Hero_ABP_C_AnimNotify_HackingBegin_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.AnimNotify_HackingEnd
struct UPCM_Hero_ABP_C_AnimNotify_HackingEnd_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.TriggerCustomPivot
struct UPCM_Hero_ABP_C_TriggerCustomPivot_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.DoResetCustomPivot
struct UPCM_Hero_ABP_C_DoResetCustomPivot_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.TryToTriggerTurnInPlaceAnimation
struct UPCM_Hero_ABP_C_TryToTriggerTurnInPlaceAnimation_Params
{
	EKSTurnInPlaceAnimationVariant*                    AnimationVariant;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DelayTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnShoulderChanged
struct UPCM_Hero_ABP_C_OnShoulderChanged_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.StopEmote
struct UPCM_Hero_ABP_C_StopEmote_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.Set Skinned Local Parameters
struct UPCM_Hero_ABP_C_Set_Skinned_Local_Parameters_Params
{
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.ExecuteUbergraph_PCM_Hero_ABP
struct UPCM_Hero_ABP_C_ExecuteUbergraph_PCM_Hero_ABP_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PCM_Hero_ABP.PCM_Hero_ABP_C.OnMagThrow__DelegateSignature
struct UPCM_Hero_ABP_C_OnMagThrow__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
