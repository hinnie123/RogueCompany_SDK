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

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetTableRowNameForHit
struct UMaster_WeaponComponent_C_GetTableRowNameForHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName*                                      RowNamePrefix;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Lunge Montage
struct UMaster_WeaponComponent_C_Get_Player_3P_Lunge_Montage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Reload Playrate
struct UMaster_WeaponComponent_C_Get_Scaled_Reload_Playrate_Params
{
	class UAnimMontage**                               Anim_Montage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scaled_Playrate;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Post Reload Playrate
struct UMaster_WeaponComponent_C_Get_Scaled_Post_Reload_Playrate_Params
{
	class UAnimMontage**                               Anim_Montage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scaled_Playrate;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Post Reload Weapon Section Time
struct UMaster_WeaponComponent_C_Get_Post_Reload_Weapon_Section_Time_Params
{
	class UAnimMontage**                               Anim_Montage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Post_Reload_Position;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.End Reload Weapon
struct UMaster_WeaponComponent_C_End_Reload_Weapon_Params
{
	bool*                                              Abort_Reload_Animation;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Scaled Multistage Reload Playrate
struct UMaster_WeaponComponent_C_Get_Scaled_Multistage_Reload_Playrate_Params
{
	class UAnimMontage**                               Anim_Montage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scaled_Playrate;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Multistage Reload Time
struct UMaster_WeaponComponent_C_Calculate_Multistage_Reload_Time_Params
{
	class UAnimMontage**                               Reload_Montage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               Quick_Reload_Montage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Selected_Montage;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_QuickReload;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Cooldown Weapon
struct UMaster_WeaponComponent_C_Reload_Cooldown_Weapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ShouldPlayFireAnim1P
struct UMaster_WeaponComponent_C_ShouldPlayFireAnim1P_Params
{
	bool                                               Play_1P_Fire;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Laser Sight
struct UMaster_WeaponComponent_C_Fixup_Laser_Sight_Params
{
	class USkinnableSkeletalMeshComponent**            MeshComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 1P Fire Montage
struct UMaster_WeaponComponent_C_Get_Player_1P_Fire_Montage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload MultiStage
struct UMaster_WeaponComponent_C_Play_Reload_MultiStage_Params
{
	float*                                             Play_Rate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               Selected_Montage;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Base
struct UMaster_WeaponComponent_C_Play_Reload_Base_Params
{
	float*                                             Play_Rate;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               Selected_Montage;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Weapon Reload animation
struct UMaster_WeaponComponent_C_Play_Weapon_Reload_animation_Params
{
	float*                                             PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Is_Quick_Reload;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Reload Logic
struct UMaster_WeaponComponent_C_Play_Reload_Logic_Params
{
	class UAnimMontage**                               Reload_Montage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               QuickReload_Montage;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Is_Multi_Stage_Reload_;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Post Reload
struct UMaster_WeaponComponent_C_Play_Post_Reload_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.AudioOnCooldown
struct UMaster_WeaponComponent_C_AudioOnCooldown_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Calculate Reload Time
struct UMaster_WeaponComponent_C_Calculate_Reload_Time_Params
{
	class UAnimMontage**                               Reload_Montage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               Quick_Reload_Montage;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Selected_Montage;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_QuickReload;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracers Simple
struct UMaster_WeaponComponent_C_Spawn_Tracers_Simple_Params
{
	TArray<struct FHitResult>                          Hits;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    Trace_End;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Filter Cosmetic Hit Results
struct UMaster_WeaponComponent_C_Filter_Cosmetic_Hit_Results_Params
{
	TArray<struct FHitResult>                          Trace_Hit_Results;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>                          Filtered_Hit_Results;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnDecals
struct UMaster_WeaponComponent_C_SpawnDecals_Params
{
	TArray<struct FHitResult>                          Hits;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnSpangs
struct UMaster_WeaponComponent_C_SpawnSpangs_Params
{
	TArray<struct FHitResult>                          Hits;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Camera Shakes
struct UMaster_WeaponComponent_C_Play_Fire_Camera_Shakes_Params
{
	bool*                                              LocalOnly;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Primary_Shake;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     HiFreq_Shake;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Montage Jump To Section
struct UMaster_WeaponComponent_C_Fire_Montage_Jump_To_Section_Params
{
	struct FString*                                    Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.TryDisableCameraModifier
struct UMaster_WeaponComponent_C_TryDisableCameraModifier_Params
{
	class UClass**                                     Camera_Modifier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Player_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.EnableOrAddCameraModifier
struct UMaster_WeaponComponent_C_EnableOrAddCameraModifier_Params
{
	class UClass**                                     Modifier;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCameraModifier*                             Modifier_Object;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Pre Fire Weapon
struct UMaster_WeaponComponent_C_Pre_Fire_Weapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Fire Tail Sound
struct UMaster_WeaponComponent_C_Play_Fire_Tail_Sound_Params
{
	EAkCallbackType*                                   Callback_Type;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkCallbackInfo**                            Callback_Info;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayInvalidFireSound
struct UMaster_WeaponComponent_C_PlayInvalidFireSound_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.CanUseCombatState
struct UMaster_WeaponComponent_C_CanUseCombatState_Params
{
	ECombatState*                                      TestState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Muzzle Flash Emitter and Offset
struct UMaster_WeaponComponent_C_Set_Muzzle_Flash_Emitter_and_Offset_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.SpawnTracers
struct UMaster_WeaponComponent_C_SpawnTracers_Params
{
	TArray<struct FHitResult>                          Hits;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFullFireRepData>                    AimData;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.SyncComputeCosmeticHits
struct UMaster_WeaponComponent_C_SyncComputeCosmeticHits_Params
{
	struct FFullFireRepData*                           FireData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FHitResult>                          Hits;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.On Character Anim Initialized
struct UMaster_WeaponComponent_C_On_Character_Anim_Initialized_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Setup Character Anim Init Callback
struct UMaster_WeaponComponent_C_Setup_Character_Anim_Init_Callback_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Revolver Hammer Strike
struct UMaster_WeaponComponent_C_Set_Revolver_Hammer_Strike_Params
{
	struct FRotator*                                   New_Hammer_Strike_Rotator;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Set Scope Scale Alpha
struct UMaster_WeaponComponent_C_Set_Scope_Scale_Alpha_Params
{
	float*                                             New_Alpha;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMuzzleSocketName
struct UMaster_WeaponComponent_C_GetMuzzleSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetScopeSocketName
struct UMaster_WeaponComponent_C_GetScopeSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ShouldBroadcastWeaponStateChange
struct UMaster_WeaponComponent_C_ShouldBroadcastWeaponStateChange_Params
{
	struct FKSWeaponDataUpdateContainer*               OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKSWeaponDataUpdateContainer*               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bReliable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.CreateWeaponSkeletalMeshComponent
struct UMaster_WeaponComponent_C_CreateWeaponSkeletalMeshComponent_Params
{
	class UKSWeaponSkeletalMeshComponent*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Anim Init On Weapon Mesh
struct UMaster_WeaponComponent_C_Anim_Init_On_Weapon_Mesh_Params
{
	class USkinnableSkeletalMeshComponent**            SkelComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimInstance**                              AnimInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Player 3P Fire Montage
struct UMaster_WeaponComponent_C_Get_Player_3P_Fire_Montage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Ancillary Mesh Scale Set
struct UMaster_WeaponComponent_C_Ancillary_Mesh_Scale_Set_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Casing Sound
struct UMaster_WeaponComponent_C_Play_Casing_Sound_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Post Fire Weapon
struct UMaster_WeaponComponent_C_Post_Fire_Weapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagInternal
struct UMaster_WeaponComponent_C_DropMagInternal_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.IsDropMeshValid
struct UMaster_WeaponComponent_C_IsDropMeshValid_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.SetupMultiMagArrays
struct UMaster_WeaponComponent_C_SetupMultiMagArrays_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropVelocity
struct UMaster_WeaponComponent_C_GetDropVelocity_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldVelocity;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetDropMesh
struct UMaster_WeaponComponent_C_GetDropMesh_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkelMesh;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneRotation
struct UMaster_WeaponComponent_C_GetMagDropBoneRotation_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    WorldRotation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.UpdateMagDropBoneVelocity
struct UMaster_WeaponComponent_C_UpdateMagDropBoneVelocity_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetMagDropBoneLocation
struct UMaster_WeaponComponent_C_GetMagDropBoneLocation_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayFireSound
struct UMaster_WeaponComponent_C_PlayFireSound_Params
{
	struct FAimData*                                   InputPin;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayBulletNearMissSound
struct UMaster_WeaponComponent_C_PlayBulletNearMissSound_Params
{
	struct FVector*                                    In_Trace_Start;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    In_Trace_End;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          Hits;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.BuildupWeapon
struct UMaster_WeaponComponent_C_BuildupWeapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.IdleWeapon
struct UMaster_WeaponComponent_C_IdleWeapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.DetermineMagSize
struct UMaster_WeaponComponent_C_DetermineMagSize_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 3p Fire Section
struct UMaster_WeaponComponent_C_Get_Character_3p_Fire_Section_Params
{
	struct FName                                       _3p_Fire_Section;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Fixup Attach Point
struct UMaster_WeaponComponent_C_Fixup_Attach_Point_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.GetPercentRemainingAmmo
struct UMaster_WeaponComponent_C_GetPercentRemainingAmmo_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.PlayEmptyFireAudio
struct UMaster_WeaponComponent_C_PlayEmptyFireAudio_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Play Bullet Impact SFX
struct UMaster_WeaponComponent_C_Play_Bullet_Impact_SFX_Params
{
	struct FHitResult*                                 HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Spangs and Decals
struct UMaster_WeaponComponent_C_Spawn_Spangs_and_Decals_Params
{
	struct FFullFireRepData*                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          Hits;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FFullFireRepData                            Out_Data;                                                 // (Parm, OutParm)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character 1p Fire Section
struct UMaster_WeaponComponent_C_Get_Character_1p_Fire_Section_Params
{
	struct FName                                       _1p_Fire_Section;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Tracer Start Point
struct UMaster_WeaponComponent_C_Get_Tracer_Start_Point_Params
{
	struct FVector                                     Start_Point;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Prepare Next Tracer Spawn
struct UMaster_WeaponComponent_C_Prepare_Next_Tracer_Spawn_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Can Spawn Tracer Now
struct UMaster_WeaponComponent_C_Can_Spawn_Tracer_Now_Params
{
	bool                                               Can_Spawn__Tracer;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Spawn Tracer
struct UMaster_WeaponComponent_C_Spawn_Tracer_Params
{
	struct FVector*                                    EndPoint;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Expected Aim Data
struct UMaster_WeaponComponent_C_Get_Expected_Aim_Data_Params
{
	struct FAimData                                    AimData;                                                  // (Parm, OutParm)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Decal Material
struct UMaster_WeaponComponent_C_Get_Decal_Material_Params
{
	struct FHitResult*                                 Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitDecalInfo                               Decal_Info;                                               // (Parm, OutParm)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Spang Particle System
struct UMaster_WeaponComponent_C_Get_Spang_Particle_System_Params
{
	struct FHitResult*                                 Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UParticleSystem*                             Spang_To_Use;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayOnHitCharacter;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Apply Spang From Hit Result
struct UMaster_WeaponComponent_C_Apply_Spang_From_Hit_Result_Params
{
	struct FHitResult*                                 Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Get Character Anim Instance
struct UMaster_WeaponComponent_C_Get_Character_Anim_Instance_Params
{
	class UKSCharacterAnimInst*                        Anim_Inst;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon To Active Socket
struct UMaster_WeaponComponent_C_Attach_Weapon_To_Active_Socket_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Attach Weapon Holster Socket
struct UMaster_WeaponComponent_C_Attach_Weapon_Holster_Socket_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Reload Weapon
struct UMaster_WeaponComponent_C_Reload_Weapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Retrieve Weapon
struct UMaster_WeaponComponent_C_Retrieve_Weapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Fire Weapon
struct UMaster_WeaponComponent_C_Fire_Weapon_Params
{
	struct FFullFireRepData*                           Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              PlayNoChainFireMontage;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Holster Weapon
struct UMaster_WeaponComponent_C_Holster_Weapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.AsyncComputeCosmeticHitsAndPlay
struct UMaster_WeaponComponent_C_AsyncComputeCosmeticHitsAndPlay_Params
{
	struct FFullFireRepData*                           Fire_Data;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.On Comestic Trace Complete
struct UMaster_WeaponComponent_C_On_Comestic_Trace_Complete_Params
{
	bool*                                              bBlockingHit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>*                         OutHits;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    start;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    end;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Spangs
struct UMaster_WeaponComponent_C_Delay_Spawn_Spangs_Params
{
	TArray<struct FHitResult>                          Hits;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Tracers
struct UMaster_WeaponComponent_C_Delay_Spawn_Tracers_Params
{
	TArray<struct FHitResult>*                         Hits;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    Trace_End;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Delay Spawn Decals
struct UMaster_WeaponComponent_C_Delay_Spawn_Decals_Params
{
	TArray<struct FHitResult>*                         Hits;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.On Cosmetic Trace Complete Internal
struct UMaster_WeaponComponent_C_On_Cosmetic_Trace_Complete_Internal_Params
{
	bool*                                              Blocking_Hit;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          Out_Hits;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    start;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Allow_Spangs;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Allow_Tracers;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Allow_Decals;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Spangs Delay
struct UMaster_WeaponComponent_C_After_Spawn_Spangs_Delay_Params
{
	bool*                                              bBlockingHit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>*                         OutHits;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    start;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    end;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Tracers Delay
struct UMaster_WeaponComponent_C_After_Spawn_Tracers_Delay_Params
{
	bool*                                              bBlockingHit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>*                         OutHits;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    start;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    end;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.After Spawn Decals Delay
struct UMaster_WeaponComponent_C_After_Spawn_Decals_Delay_Params
{
	bool*                                              bBlockingHit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>*                         OutHits;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    start;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    end;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ApplyDecalFromHit
struct UMaster_WeaponComponent_C_ApplyDecalFromHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.HandleWeaponFiringClientEffects
struct UMaster_WeaponComponent_C_HandleWeaponFiringClientEffects_Params
{
	struct FFullFireRepData*                           Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Reset Variables at Start of Firing Instance
struct UMaster_WeaponComponent_C_Reset_Variables_at_Start_of_Firing_Instance_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveTick
struct UMaster_WeaponComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnWeaponStateChanged
struct UMaster_WeaponComponent_C_OnWeaponStateChanged_Params
{
	EWeaponStateNew*                                   OldState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnInitialize
struct UMaster_WeaponComponent_C_OnInitialize_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnFireWeaponFull
struct UMaster_WeaponComponent_C_OnFireWeaponFull_Params
{
	struct FFullFireRepData*                           Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.StartAimDownSights
struct UMaster_WeaponComponent_C_StartAimDownSights_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.StopAimDownSights
struct UMaster_WeaponComponent_C_StopAimDownSights_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnEmptyFire
struct UMaster_WeaponComponent_C_OnEmptyFire_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPersistentCosmeticsUpdate
struct UMaster_WeaponComponent_C_BlueprintPersistentCosmeticsUpdate_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnUnsetAsActivePrimaryWeapon
struct UMaster_WeaponComponent_C_OnUnsetAsActivePrimaryWeapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnSetAsActivePrimaryWeapon
struct UMaster_WeaponComponent_C_OnSetAsActivePrimaryWeapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.BlueprintPrepareKillCamPlayback
struct UMaster_WeaponComponent_C_BlueprintPrepareKillCamPlayback_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Force ADS Scope
struct UMaster_WeaponComponent_C_Force_ADS_Scope_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.CheckKillCamScope
struct UMaster_WeaponComponent_C_CheckKillCamScope_Params
{
	class APawn**                                      ViewPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Update Combat State
struct UMaster_WeaponComponent_C_Update_Combat_State_Params
{
	ECombatState*                                      NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnInvalidFire
struct UMaster_WeaponComponent_C_OnInvalidFire_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.AimDownSightsCheckpoint
struct UMaster_WeaponComponent_C_AimDownSightsCheckpoint_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.CancelReloadCosmetic
struct UMaster_WeaponComponent_C_CancelReloadCosmetic_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.StartAimOverShoulder
struct UMaster_WeaponComponent_C_StartAimOverShoulder_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.StopAimOverShoulder
struct UMaster_WeaponComponent_C_StopAimOverShoulder_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.Force Exit ADS Pose
struct UMaster_WeaponComponent_C_Force_Exit_ADS_Pose_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnActiveMaterialsApplied
struct UMaster_WeaponComponent_C_OnActiveMaterialsApplied_Params
{
	class USkinnableSkeletalMeshComponent**            SkinnableSkelComp;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.NotifyStopFireReceived
struct UMaster_WeaponComponent_C_NotifyStopFireReceived_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceRetrieveWeapon
struct UMaster_WeaponComponent_C_ForceRetrieveWeapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ForceHolsterWeapon
struct UMaster_WeaponComponent_C_ForceHolsterWeapon_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.DropMagazine
struct UMaster_WeaponComponent_C_DropMagazine_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveBeginPlay
struct UMaster_WeaponComponent_C_ReceiveBeginPlay_Params
{
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ReceiveEndPlay
struct UMaster_WeaponComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnKilled_Event_1
struct UMaster_WeaponComponent_C_OnKilled_Event_1_Params
{
	class AKSCharacterBase**                           KillerCharacter;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnPossessedBy_Event_1
struct UMaster_WeaponComponent_C_OnPossessedBy_Event_1_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.ExecuteUbergraph_Master_WeaponComponent
struct UMaster_WeaponComponent_C_ExecuteUbergraph_Master_WeaponComponent_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnSetLobbyState__DelegateSignature
struct UMaster_WeaponComponent_C_OnSetLobbyState__DelegateSignature_Params
{
	bool*                                              Lobby_State;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnSetRevolverHammerStrike__DelegateSignature
struct UMaster_WeaponComponent_C_OnSetRevolverHammerStrike__DelegateSignature_Params
{
	struct FRotator*                                   New_Hammer_Strike_Rotator;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Master_WeaponComponent.Master_WeaponComponent_C.OnSetScopeScaleAlpha__DelegateSignature
struct UMaster_WeaponComponent_C_OnSetScopeScaleAlpha__DelegateSignature_Params
{
	float*                                             New_Alpha;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
