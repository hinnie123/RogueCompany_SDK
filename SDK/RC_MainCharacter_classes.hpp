#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass MainCharacter.MainCharacter_C
// 0x14E0 (0x4590 - 0x30B0)
class AMainCharacter_C : public AKSCharacter
{
public:
	class USpringArmComponent*                         SkyDiveCameraBoom;                                        // 0x30B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Nameplate;                                                // 0x30B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMainCharacterThreatComponent_C*             _MainCharacterThreatComponent;                            // 0x30C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      UplinePulley;                                             // 0x30C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSTabletMeshComponent*                      NewTablet;                                                // 0x30D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMainEnvironmentTracker_C*                   _MainEnvironmentTracker;                                  // 0x30D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             AimOrigin;                                                // 0x30E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAimAssistAnchorComponent*                 BodyAimAssistAnchor;                                      // 0x30E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSAimAssistAnchorComponent*                 HeadAimAssistAnchor;                                      // 0x30F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Free_Fall_Particle_Component;                             // 0x30F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            SkyDiveCamera;                                            // 0x3100(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EnterFreeFallFOVTimeline_FOV_214483C64B8EF94ABEE010ACC0C82B47;// 0x3108(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EnterFreeFallFOVTimeline__Direction_214483C64B8EF94ABEE010ACC0C82B47;// 0x310C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x310D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EnterFreeFallFOVTimeline;                                 // 0x3110(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              NoseDiveFOVTimeline_FOV_B4B28FE84FD9F70D4702AD94CD02429F; // 0x3118(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    NoseDiveFOVTimeline__Direction_B4B28FE84FD9F70D4702AD94CD02429F;// 0x311C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x311D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          NoseDiveFOVTimeline;                                      // 0x3120(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Martial_Artist_Target_Front_Camera_Offset_2353812C44E84070E58EA28AC0C39A7A;// 0x3128(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Martial_Artist_Target_Front_Camera_Rotation_2353812C44E84070E58EA28AC0C39A7A;// 0x3134(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Martial_Artist_Target_Front__Direction_2353812C44E84070E58EA28AC0C39A7A;// 0x3140(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x3141(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Martial_Artist_Target_Front;                              // 0x3148(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Martial_Artist_Target_Back_Camera_Offset_1BFA9A6E4FC29401CE8D43B8AAD4581C;// 0x3150(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Martial_Artist_Target_Back_Camera_Rotation_1BFA9A6E4FC29401CE8D43B8AAD4581C;// 0x315C(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Martial_Artist_Target_Back__Direction_1BFA9A6E4FC29401CE8D43B8AAD4581C;// 0x3168(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x3169(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Martial_Artist_Target_Back;                               // 0x3170(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Martial_Artist_Instigator_Front_Camera_Offset_F70AEBFB4CDEF611144DE3BBA0C06E0C;// 0x3178(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Martial_Artist_Instigator_Front_Camera_Rotation_F70AEBFB4CDEF611144DE3BBA0C06E0C;// 0x3184(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Martial_Artist_Instigator_Front__Direction_F70AEBFB4CDEF611144DE3BBA0C06E0C;// 0x3190(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x3191(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Martial_Artist_Instigator_Front;                          // 0x3198(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Martial_Artist_Instigator_Back_Camera_Offset_28F092594C0CD50C0A3EA1BF17E2C5E1;// 0x31A0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Martial_Artist_Instigator_Back_Camera_Rotation_28F092594C0CD50C0A3EA1BF17E2C5E1;// 0x31AC(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Martial_Artist_Instigator_Back__Direction_28F092594C0CD50C0A3EA1BF17E2C5E1;// 0x31B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x31B9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Martial_Artist_Instigator_Back;                           // 0x31C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CameraDodgeRoll_Relative_Position_4B7EB20A461034BB0B80418AE71BD9F4;// 0x31C8(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              CameraDodgeRoll_Camera_Boom_Length_4B7EB20A461034BB0B80418AE71BD9F4;// 0x31D4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraDodgeRoll__Direction_4B7EB20A461034BB0B80418AE71BD9F4;// 0x31D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x31D9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          CameraDodgeRoll;                                          // 0x31E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SprintFOVTimeline_FOVAlpha_F9A879E74FD1B4D844684CBEE4230863;// 0x31E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SprintFOVTimeline__Direction_F9A879E74FD1B4D844684CBEE4230863;// 0x31EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x31ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SprintFOVTimeline;                                        // 0x31F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EndImmunity_Invulnerable_4A69979040C00E80AB6D5687355E98EA;// 0x31F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EndImmunity__Direction_4A69979040C00E80AB6D5687355E98EA;  // 0x31FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x31FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EndImmunity;                                              // 0x3200(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StartImmunity_Invulnerable_F2F49BA44D30D2903638919AFE6C1704;// 0x3208(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StartImmunity__Direction_F2F49BA44D30D2903638919AFE6C1704;// 0x320C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x320D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StartImmunity;                                            // 0x3210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxFlashBang_Intensity_903D5CFF4807256AC97F4FBCA048B2A3;  // 0x3218(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MaxFlashBang__Direction_903D5CFF4807256AC97F4FBCA048B2A3; // 0x321C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x321D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MaxFlashBang;                                             // 0x3220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MinFlashBang_Intensity_42EF430246CEFDF053EF00838B3B84F1;  // 0x3228(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MinFlashBang__Direction_42EF430246CEFDF053EF00838B3B84F1; // 0x322C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x322D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          MinFlashBang;                                             // 0x3230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HalfFlashBang_Intensity_D97FC25547E6BB130F04FD98E9C402F9; // 0x3238(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    HalfFlashBang__Direction_D97FC25547E6BB130F04FD98E9C402F9;// 0x323C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x323D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          HalfFlashBang;                                            // 0x3240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Camera_Boom_Timeline_Player_Mesh_ADS_Weight_Reverse_7F7960E24E458B7FB9796A9428D9E3C5;// 0x3248(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Camera_Boom_Timeline_Player_Mesh_ADS_Weight_Forward_7F7960E24E458B7FB9796A9428D9E3C5;// 0x324C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Camera_Boom_Timeline_FOV_Weight_7F7960E24E458B7FB9796A9428D9E3C5;// 0x3250(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Camera_Boom_Timeline_Camera_Boom_Length_7F7960E24E458B7FB9796A9428D9E3C5;// 0x3254(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Camera_Boom_Timeline__Direction_7F7960E24E458B7FB9796A9428D9E3C5;// 0x3258(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x3259(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Camera_Boom_Timeline;                                     // 0x3260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Elapsed;                                                  // 0x3268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopwatchOn;                                              // 0x326C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x326D(0x0003) MISSED OFFSET
	struct FVector                                     PlayerLocation;                                           // 0x3270(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x327C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               Successful_Hit_AkEvent;                                   // 0x3280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ADS_Test;                                                 // 0x3288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x3289(0x0003) MISSED OFFSET
	float                                              Camera_Boom_Arm_Max;                                      // 0x328C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              Cached_1p_Field_of_View;                                  // 0x3290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              Test_Alpha;                                               // 0x3294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InFreeFall;                                               // 0x3298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Turn_Right;                                               // 0x3299(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Turn_Left;                                                // 0x329A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x1];                                       // 0x329B(0x0001) MISSED OFFSET
	float                                              Pitch;                                                    // 0x329C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Friendly_Free_Fall;                                       // 0x32A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Enemy_Free_Fall;                                          // 0x32A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Yaw;                                                      // 0x32B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Main_Camera_Cached_FOV;                                   // 0x32B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	int                                                HitDirs;                                                  // 0x32B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHitEnum                                           _HitEnum;                                                 // 0x32BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x32BD(0x0003) MISSED OFFSET
	struct FKSSpecialEffect                            DownedPPEffect;                                           // 0x32C0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Downed_PP_Transition_Duration;                            // 0x3310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTrailActive;                                            // 0x3314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x3315(0x0003) MISSED OFFSET
	class UMaterialInterface*                          FlashBang_PP_Material;                                    // 0x3318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FlashBang_PP_Material_Instance;                           // 0x3320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlashBang_PP_Max_Active;                                  // 0x3328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlashBang_PP_Half_Active;                                 // 0x3329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlashBang_PP_Min_Active;                                  // 0x332A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x5];                                       // 0x332B(0x0005) MISSED OFFSET
	struct FTimerHandle                                FlashBang_PP_Timer_Handle;                                // 0x3330(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FlashBang_PP_Duration;                                    // 0x3338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFlashBangIntensity                                _FlashBangIntensity;                                      // 0x333C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x333D(0x0003) MISSED OFFSET
	float                                              Current_MaxFlashBang_Intensity;                           // 0x3340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Half_FlashBang_Intensity;                         // 0x3344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Min_FlashBang_Intensity;                          // 0x3348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Flash_Bang_Effect_Distance;                           // 0x334C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Half_Flash_Bang_Effect_Distance;                          // 0x3350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x3354(0x0004) MISSED OFFSET
	TArray<class UClass*>                              SFX_Grenade_Damage_Type;                                  // 0x3358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              SFX_Blade_Damage_Type;                                    // 0x3368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      SFX_Damage_Target;                                        // 0x3378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LeftTempLoc;                                              // 0x3380(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AffectRange;                                              // 0x338C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightTempLoc;                                             // 0x3390(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x339C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Out_Of_Bounds_PP_Material;                                // 0x33A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Out_Of_Bounds_PP_Material_Instance;                       // 0x33A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CachedFOV;                                                // 0x33B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x33B4(0x0004) MISSED OFFSET
	struct FLastHitImpulse                             LastHitInfo;                                              // 0x33B8(0x0040) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FRotator                                    KnockbackRotation;                                        // 0x33F8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x3404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRagdoll;                                               // 0x3408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsLaunchedOnDown;                                        // 0x3409(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSnapshotPoseFacingUp;                                    // 0x340A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x5];                                       // 0x340B(0x0005) MISSED OFFSET
	class UAnimMontage*                                GetUpMontage;                                             // 0x3410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRagdollOnGround;                                       // 0x3418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x3419(0x0003) MISSED OFFSET
	struct FVector                                     RagdollPelvisLocation;                                    // 0x341C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RagdollCapsuleLocation;                                   // 0x3428(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeInRagdoll;                                            // 0x3434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeInRagdoll;                                         // 0x3438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x4];                                       // 0x343C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    FireParticle;                                             // 0x3440(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    GrenadeImpactPointMID;                                    // 0x3448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ZiplineActive;                                            // 0x3450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x3451(0x0003) MISSED OFFSET
	float                                              SprintFov;                                                // 0x3454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintFOVChangeDuration;                                  // 0x3458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZiplineFov;                                               // 0x345C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousFov;                                              // 0x3460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x3464(0x0004) MISSED OFFSET
	struct FDebugFloatHistory                          InterpLengthHist;                                         // 0x3468(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UKSFXCurveComponent*                         AppliedDownedCurveComponent;                              // 0x3488(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FDamageEffect                               _Effect;                                                  // 0x3490(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSSpecialEffect                            BloodPPEffect;                                            // 0x34D8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterial*                                   HealthPostProcess;                                        // 0x3528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Health_PP_MID;                                            // 0x3530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthPPInterpSpeed;                                      // 0x3538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x353C(0x0004) MISSED OFFSET
	struct FKSSpecialEffect                            SonarPPEffect;                                            // 0x3540(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSSpecialEffect                            EMPPPEffect;                                              // 0x3590(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bEnableDirectionalDowns;                                  // 0x35E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableComplexDirectionalDowns;                           // 0x35E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x2];                                       // 0x35E2(0x0002) MISSED OFFSET
	struct FVector                                     CrouchAimOriginOffset;                                    // 0x35E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AimOriginDefaultRelLoc;                                   // 0x35F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeFallParticleDetachTime;                               // 0x35FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSpecialEffect                            OutOfBoundsPPEffect;                                      // 0x3600(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UKSFXCurveComponent*                         OutOfBoundsEffectCurve;                                   // 0x3650(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FKSSpecialEffect                            NearMissPPEffect;                                         // 0x3658(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Active_Index;                                             // 0x36A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x36AC(0x0004) MISSED OFFSET
	struct FKSSpecialEffect                            FirePostProcess;                                          // 0x36B0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              K2Node_Event_Damage;                                      // 0x3700(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x3704(0x0004) MISSED OFFSET
	class UClass*                                      K2Node_Event_DamageTypeClass3;                            // 0x3708(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DamageImpulse;                               // 0x3710(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_Event_RelativeImpactLocation;                      // 0x3714(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_BoneName;                                    // 0x3720(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser3;                               // 0x3728(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetRagdollFacingDirection_IsUp;                  // 0x3730(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsGrounded;                            // 0x3731(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x6];                                       // 0x3732(0x0006) MISSED OFFSET
	struct FDamageEffect                               K2Node_CustomEvent_Effect3;                               // 0x3738(0x0048) (Transient, DuplicateTransient)
	struct FHitResult                                  CallFunc_K2_SetWorldLocation_SweepHitResult;              // 0x3780(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetPhysicsLinearVelocity_ReturnValue;            // 0x3808(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x3814(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable;                                   // 0x3818(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable1;                                  // 0x3828(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable2;                                  // 0x3838(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	bool                                               CallFunc_ShouldLastHitLaunchIntoRagdoll_bShouldRagdoll;   // 0x3848(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x3849(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x384C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate1;                    // 0x385C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	float                                              K2Node_CustomEvent_DeltaSeconds;                          // 0x386C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       Temp_name_Variable;                                       // 0x3870(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitLocation;      // 0x3878(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitNormal;        // 0x3884(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_VectorToHitSource;     // 0x3890(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EKSMovementDirection                               CallFunc_ProcessTakePointHitDamage_HitDirection;          // 0x389C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x389D(0x0003) MISSED OFFSET
	struct FName                                       Temp_name_Variable1;                                      // 0x38A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_SequenceName;                                // 0x38A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x38B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x38B1(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Camera_Rotation;                       // 0x38B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Uses_Rotation;                         // 0x38C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x38C1(0x0003) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Camera_Offset;                         // 0x38C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x38D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x38D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x38D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X1;                                  // 0x38DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y1;                                  // 0x38E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z1;                                  // 0x38E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable3;                                  // 0x38E8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FHitResult                                  CallFunc_K2_SetRelativeRotation_SweepHitResult;           // 0x38F8(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_K2_SetRelativeLocation_SweepHitResult;           // 0x3980(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	TArray<class UMaterialInterface*>                  CallFunc_GetMaterials_ReturnValue;                        // 0x3A08(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable4;                                  // 0x3A18(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	TArray<class UMaterialInterface*>                  CallFunc_GetMaterials_ReturnValue1;                       // 0x3A28(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable5;                                  // 0x3A38(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable6;                                  // 0x3A48(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	TArray<class UMaterialInterface*>                  CallFunc_GetMaterials_ReturnValue2;                       // 0x3A58(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable7;                                  // 0x3A68(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FDamageEffect                               K2Node_CustomEvent_Effect2;                               // 0x3A78(0x0048) (Transient, DuplicateTransient)
	TScriptInterface<class UBlendableInterface>        CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;// 0x3AC0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x3AD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x3AD1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             Temp_delegate_Variable8;                                  // 0x3AD4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x3AE4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x3AE5(0x0003) MISSED OFFSET
	TScriptInterface<class UBlendableInterface>        CallFunc_AddOrUpdateBlendable_InBlendableObject1_CastInput;// 0x3AE8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable9;                                  // 0x3AF8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable10;                                 // 0x3B08(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable11;                                 // 0x3B18(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable12;                                 // 0x3B28(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable13;                                 // 0x3B38(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	int                                                Temp_int_Array_Index_Variable;                            // 0x3B48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x3B4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x3B4D(0x0003) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item;                                  // 0x3B50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterial_Instance_Dynamic;           // 0x3B58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x3B60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bVisible;                                    // 0x3B61(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x3B62(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x1];                                       // 0x3B63(0x0001) MISSED OFFSET
	struct FScriptDelegate                             Temp_delegate_Variable14;                                 // 0x3B64(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x3B74(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable1;// 0x3B84(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable1;                       // 0x3B85(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x3B86(0x0002) MISSED OFFSET
	struct FDamageEffect                               K2Node_CustomEvent_Effect1;                               // 0x3B88(0x0048) (Transient, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable15;                                 // 0x3BD0(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable16;                                 // 0x3BE0(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UKSBloodSplatterComponent*                   K2Node_DynamicCast_AsKSBlood_Splatter_Component;          // 0x3BF0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess1;                             // 0x3BF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2;// 0x3BF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable1;                             // 0x3BFA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x1];                                       // 0x3BFB(0x0001) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable1;                          // 0x3BFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FDamageEffect                               K2Node_CustomEvent_Effect;                                // 0x3C00(0x0048) (Transient, DuplicateTransient)
	float                                              K2Node_Event_DamageAmount2;                               // 0x3C48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x4];                                       // 0x3C4C(0x0004) MISSED OFFSET
	class UClass*                                      K2Node_Event_DamageTypeClass2;                            // 0x3C50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_Target1;                                     // 0x3C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser2;                               // 0x3C60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x3C68(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	float                                              K2Node_Event_DamageAmount1;                               // 0x3C78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x4];                                       // 0x3C7C(0x0004) MISSED OFFSET
	class UClass*                                      K2Node_Event_DamageTypeClass1;                            // 0x3C80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser1;                               // 0x3C88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_Event_DamageOrigin;                                // 0x3C90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DamageAmount;                                // 0x3C9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_Event_DamageTypeClass;                             // 0x3CA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_Target;                                      // 0x3CA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x3CB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_ClassDynamicCast_AsKSDamage_Type_Base;             // 0x3CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ClassDynamicCast_bSuccess;                         // 0x3CC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x7];                                       // 0x3CC1(0x0007) MISSED OFFSET
	class UParticleSystem*                             CallFunc_GetDefaultObjectPropertiesFromDamageType_OutHitPawnEffect;// 0x3CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAkAudioEvent*                               CallFunc_GetDefaultObjectPropertiesFromDamageType_OutHitBodyAudioEvent;// 0x3CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAkAudioEvent*                               CallFunc_GetDefaultObjectPropertiesFromDamageType_OutHitHeadAudioEvent;// 0x3CD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAkAudioEvent*                               CallFunc_GetDefaultObjectPropertiesFromDamageType_OutHitByAudioEvent;// 0x3CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate4;                    // 0x3CE8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable17;                                 // 0x3CF8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable18;                                 // 0x3D08(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable19;                                 // 0x3D18(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable20;                                 // 0x3D28(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable21;                                 // 0x3D38(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate5;                    // 0x3D48(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	bool                                               Temp_bool_Has_Been_Initd_Variable2;                       // 0x3D58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x3];                                       // 0x3D59(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate6;                    // 0x3D5C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      UnknownData49[0x4];                                       // 0x3D6C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               CallFunc_GetHitByAudioEventOverride_SoundEffect;          // 0x3D70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate7;                    // 0x3D78(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FKey                                        K2Node_InputKeyEvent_Key;                                 // 0x3D88(0x0018) (Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate8;                    // 0x3DA0(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	class UParticleSystem*                             CallFunc_GetHitPawnEffectOverride_ParticleSystem;         // 0x3DB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           Temp_byte_Variable;                                       // 0x3DB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x7];                                       // 0x3DB9(0x0007) MISSED OFFSET
	struct FDamageEffect                               K2Node_Event_Effect1;                                     // 0x3DC0(0x0048) (Transient, DuplicateTransient)
	EHitEnum                                           Temp_byte_Variable1;                                      // 0x3E08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x7];                                       // 0x3E09(0x0007) MISSED OFFSET
	struct FDamageEffect                               K2Node_Event_Effect;                                      // 0x3E10(0x0048) (Transient, DuplicateTransient)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitLocation1;     // 0x3E58(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_WorldHitNormal1;       // 0x3E64(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_ProcessTakePointHitDamage_VectorToHitSource1;    // 0x3E70(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EKSMovementDirection                               CallFunc_ProcessTakePointHitDamage_HitDirection1;         // 0x3E7C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x3];                                       // 0x3E7D(0x0003) MISSED OFFSET
	class UClass*                                      K2Node_ClassDynamicCast_AsKSDamage_Type_Base1;            // 0x3E80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ClassDynamicCast_bSuccess1;                        // 0x3E88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x7];                                       // 0x3E89(0x0007) MISSED OFFSET
	class UKSDamageTypeBase*                           CallFunc_SpawnObject_ReturnValue;                         // 0x3E90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_ClassDynamicCast_AsKSDamage_Type_Base2;            // 0x3E98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ClassDynamicCast_bSuccess2;                        // 0x3EA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x7];                                       // 0x3EA1(0x0007) MISSED OFFSET
	class UParticleSystem*                             CallFunc_GetDefaultObjectPropertiesFromDamageType_OutHitPawnEffect1;// 0x3EA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAkAudioEvent*                               CallFunc_GetDefaultObjectPropertiesFromDamageType_OutHitBodyAudioEvent1;// 0x3EB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAkAudioEvent*                               CallFunc_GetDefaultObjectPropertiesFromDamageType_OutHitHeadAudioEvent1;// 0x3EB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAkAudioEvent*                               CallFunc_GetDefaultObjectPropertiesFromDamageType_OutHitByAudioEvent1;// 0x3EC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacterBase*                            K2Node_CustomEvent_Character1;                            // 0x3EC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           Temp_byte_Variable2;                                      // 0x3ED0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           Temp_byte_Variable3;                                      // 0x3ED1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable2;                             // 0x3ED2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x1];                                       // 0x3ED3(0x0001) MISSED OFFSET
	float                                              CallFunc_BreakVector_X2;                                  // 0x3ED4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x3ED8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x3EDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerState*                                K2Node_CustomEvent_Player;                                // 0x3EE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EKSMovementDirection                               Temp_byte_Variable4;                                      // 0x3EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x7];                                       // 0x3EE9(0x0007) MISSED OFFSET
	TScriptInterface<class UINameplateWidget_C>        K2Node_DynamicCast_AsINameplate_Widget;                   // 0x3EF0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess2;                             // 0x3F00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           K2Node_Select_Default;                                    // 0x3F01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x2];                                       // 0x3F02(0x0002) MISSED OFFSET
	float                                              K2Node_Event_ExtraTime;                                   // 0x3F04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TScriptInterface<class UINameplateWidget_C>        K2Node_DynamicCast_AsINameplate_Widget1;                  // 0x3F08(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess3;                             // 0x3F18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x7];                                       // 0x3F19(0x0007) MISSED OFFSET
	TScriptInterface<class UINameplateWidget_C>        K2Node_DynamicCast_AsINameplate_Widget2;                  // 0x3F20(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess4;                             // 0x3F30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         K2Node_Event_PrevMovementMode;                            // 0x3F31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         K2Node_Event_NewMovementMode;                             // 0x3F32(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_PrevCustomMode;                              // 0x3F33(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      K2Node_Event_NewCustomMode;                               // 0x3F34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x3];                                       // 0x3F35(0x0003) MISSED OFFSET
	class UKSCharacterMovementComponent*               K2Node_DynamicCast_AsKSCharacter_Movement_Component;      // 0x3F38(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess5;                             // 0x3F40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x7];                                       // 0x3F41(0x0007) MISSED OFFSET
	struct FCombatEventInfo                            K2Node_CustomEvent_EventInfo1;                            // 0x3F48(0x0058) (Transient, DuplicateTransient)
	int                                                K2Node_CustomEvent_ExpBonus1;                             // 0x3FA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x4];                                       // 0x3FA4(0x0004) MISSED OFFSET
	class AKSPlayerState*                              K2Node_CustomEvent_Revivee;                               // 0x3FA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSPlayerState*                              K2Node_CustomEvent_Reviver;                               // 0x3FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_ExpBonus;                              // 0x3FB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     Temp_struct_Variable;                                     // 0x3FBC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable;                                       // 0x3FC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x7];                                       // 0x3FC9(0x0007) MISSED OFFSET
	struct FCombatEventInfo                            K2Node_CustomEvent_EventInfo;                             // 0x3FD0(0x0058) (Transient, DuplicateTransient)
	struct FVector                                     K2Node_Select1_Default;                                   // 0x4028(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable3;                       // 0x4034(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable3;                             // 0x4035(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x2];                                       // 0x4036(0x0002) MISSED OFFSET
	int                                                Temp_int_Array_Index_Variable1;                           // 0x4038(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_Enabled;                                     // 0x403C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x3];                                       // 0x403D(0x0003) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item1;                                 // 0x4040(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterial_Instance_Dynamic1;          // 0x4048(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess6;                             // 0x4050(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable4;                       // 0x4051(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable1;                                      // 0x4052(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x5];                                       // 0x4053(0x0005) MISSED OFFSET
	class UParticleSystem*                             K2Node_Select2_Default;                                   // 0x4058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable2;                                      // 0x4060(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable4;                             // 0x4061(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x6];                                       // 0x4062(0x0006) MISSED OFFSET
	class AKSCharacter*                                K2Node_Event_Reviver2;                                    // 0x4068(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_ReviveTime;                                  // 0x4070(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_Remote;                                      // 0x4074(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x3];                                       // 0x4075(0x0003) MISSED OFFSET
	class AKSCharacter*                                K2Node_Event_Reviver1;                                    // 0x4078(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_Event_Reviver;                                     // 0x4080(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable22;                                 // 0x4088(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	bool                                               Temp_bool_Has_Been_Initd_Variable5;                       // 0x4098(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable3;// 0x4099(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable5;                             // 0x409A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x1];                                       // 0x409B(0x0001) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x409C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable3;                                      // 0x40A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x7];                                       // 0x40A1(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               K2Node_Select3_Default;                                   // 0x40A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsSprinting;                           // 0x40B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x3];                                       // 0x40B1(0x0003) MISSED OFFSET
	int                                                Temp_int_Array_Index_Variable2;                           // 0x40B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsDodgeRolling1;                       // 0x40B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x7];                                       // 0x40B9(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_Array_Get_Item2;                                 // 0x40C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterial_Instance_Dynamic2;          // 0x40C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess7;                             // 0x40D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x3];                                       // 0x40D1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_KeepActionCameraAboveWater_OutBoomPosition;      // 0x40D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable6;                       // 0x40E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x3];                                       // 0x40E1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             Temp_delegate_Variable23;                                 // 0x40E4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable24;                                 // 0x40F4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      UnknownData74[0x4];                                       // 0x4104(0x0004) MISSED OFFSET
	class AKSCharacter*                                K2Node_DynamicCast_AsKSCharacter;                         // 0x4108(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess8;                             // 0x4110(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x7];                                       // 0x4111(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               CallFunc_GetHitHeadAudioEventOverride_SoundEffect;        // 0x4118(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_K2_SetRelativeLocation_SweepHitResult1;          // 0x4120(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable25;                                 // 0x41A8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x41B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable26;                                 // 0x41BC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable27;                                 // 0x41CC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable28;                                 // 0x41DC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	float                                              K2Node_Event_HalfHeightAdjust1;                           // 0x41EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_ScaledHalfHeightAdjust1;                     // 0x41F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_HalfHeightAdjust;                            // 0x41F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_ScaledHalfHeightAdjust;                      // 0x41F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable29;                                 // 0x41FC(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FVector                                     K2Node_Event_BreakingLocation;                            // 0x420C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_Event_BreakingDirection;                           // 0x4218(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_Event_BreakingNormal;                              // 0x4224(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EKSPowerSlideEndReason                             K2Node_Event_EndReason;                                   // 0x4230(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable6;                             // 0x4231(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsPowerSliding;                        // 0x4232(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x1];                                       // 0x4233(0x0001) MISSED OFFSET
	float                                              CallFunc_GetTargetFov_TargetFov;                          // 0x4234(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsZiplining;                           // 0x4238(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x7];                                       // 0x4239(0x0007) MISSED OFFSET
	class UKSWeaponComponent*                          K2Node_DynamicCast_AsMaster_Weapon_Component;             // 0x4240(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess9;                             // 0x4248(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x3];                                       // 0x4249(0x0003) MISSED OFFSET
	struct FScriptDelegate                             Temp_delegate_Variable30;                                 // 0x424C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate9;                    // 0x425C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate10;                   // 0x426C(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	bool                                               K2Node_Event_bEnterNoseDive;                              // 0x427C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x3];                                       // 0x427D(0x0003) MISSED OFFSET
	float                                              K2Node_Event_AnimLength;                                  // 0x4280(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x4];                                       // 0x4284(0x0004) MISSED OFFSET
	struct FString                                     K2Node_Event_SwingMontageSectionName;                     // 0x4288(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class UKSWeaponComponent*                          K2Node_DynamicCast_AsMaster_Weapon_Component1;            // 0x4298(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess10;                            // 0x42A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x3];                                       // 0x42A1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             Temp_delegate_Variable31;                                 // 0x42A4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable32;                                 // 0x42B4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate11;                   // 0x42C4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      UnknownData82[0x4];                                       // 0x42D4(0x0004) MISSED OFFSET
	class APlayerController*                           K2Node_Event_PC1;                                         // 0x42D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_Event_PC;                                          // 0x42E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable33;                                 // 0x42E8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable34;                                 // 0x42F8(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	bool                                               K2Node_Event_UpdateTargetRotation;                        // 0x4308(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_AffectCapsule;                               // 0x4309(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x2];                                       // 0x430A(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_DetermineKnockbackFacing_ActorRotation;          // 0x430C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable35;                                 // 0x4318(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FHitResult                                  K2Node_Event_Hit;                                         // 0x4328(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             Temp_delegate_Variable36;                                 // 0x43B0(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             Temp_delegate_Variable37;                                 // 0x43C0(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	EHitEnum                                           Temp_byte_Variable5;                                      // 0x43D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           Temp_byte_Variable6;                                      // 0x43D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsDodgeRolling;                        // 0x43D2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x1];                                       // 0x43D3(0x0001) MISSED OFFSET
	struct FHitResult                                  CallFunc_K2_SetRelativeLocation_SweepHitResult2;          // 0x43D4(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  CallFunc_K2_SetRelativeLocation_SweepHitResult3;          // 0x445C(0x0088) (Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           Temp_byte_Variable7;                                      // 0x44E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           Temp_byte_Variable8;                                      // 0x44E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EKSMovementDirection                               Temp_byte_Variable9;                                      // 0x44E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	EHitEnum                                           K2Node_Select4_Default;                                   // 0x44E7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                Temp_object_Variable;                                     // 0x44E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                Temp_object_Variable1;                                    // 0x44F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AKSCharacter*                                K2Node_CustomEvent_Character;                             // 0x44F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable7;                       // 0x4500(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x7];                                       // 0x4501(0x0007) MISSED OFFSET
	class UKSWeaponComponent*                          K2Node_DynamicCast_AsMaster_Weapon_Component2;            // 0x4508(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess11;                            // 0x4510(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable4;                                      // 0x4511(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x6];                                       // 0x4512(0x0006) MISSED OFFSET
	class UKSWeaponComponent*                          K2Node_DynamicCast_AsMaster_Weapon_Component3;            // 0x4518(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess12;                            // 0x4520(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x7];                                       // 0x4521(0x0007) MISSED OFFSET
	class UKSCharacterAnimInst*                        K2Node_DynamicCast_AsPCM_Hero_ABP;                        // 0x4528(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess13;                            // 0x4530(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x7];                                       // 0x4531(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_Select5_Default;                                   // 0x4538(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLastHitImpulse                             K2Node_MakeStruct_LastHitImpulse;                         // 0x4540(0x0040) (Transient, DuplicateTransient)
	bool                                               Temp_bool_IsClosed_Variable7;                             // 0x4580(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0xF];                                       // 0x4581(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MainCharacter.MainCharacter_C");
		return ptr;
	}


	void Zipline_Pulley_Unhide();
	void Zipline_Pulley_Hide();
	void WasLastHitHeadshot(bool* bpp__bHeadshot__pf);
	void VO_Player_Revived();
	void VO_Player_Death();
	void VerifyLastHitDamageType(class UClass** bpp__DamageType__pf, bool* bpp__IsRelatedToThisType__pf);
	void VerifyLastHitBone(struct FName* bpp__ParentBoneName__pf, bool* bpp__IsRelatedToThisBone__pf);
	void UserConstructionScript();
	void Update_Action_Camera(struct FVector* bpp__CameraxRotation__pfT, bool* bpp__UsesxRotation__pfT, struct FVector* bpp__CameraxOffset__pfT);
	void UpdateRagdollOnGround(bool* bpp__IsGrounded__pf);
	void UpdateRagdollMeshLocation();
	void UpdateRagdoll(float* bpp__DeltaSeconds__pf);
	void UpdatePlayerState(class APlayerState** bpp__Player__pf);
	void UpdateHealthPP();
	void UpdateDebugHealthVisibility();
	void UnHide_Zipline_Pulley();
	void UnHide_Upline_Device();
	void TurnOffCapsulePhysics_Server();
	void TurnOffCapsulePhysics();
	void Transition_To_Main_Camera();
	void Transition_To_ADS_Camera();
	void SwitchToSnapshotPose();
	void Start_Viewed_Down_Hit();
	void StartImmunity__UpdateFunc();
	void StartImmunity__FinishedFunc();
	void StartHacking();
	void SprintFOVTimeline__UpdateFunc();
	void SprintFOVTimeline__FinishedFunc();
	void ShowDebugLocation(bool* bpp__bVisible__pf);
	void ShouldLastHitLaunchIntoRagdoll(bool* bpp__bShouldRagdoll__pf);
	void Set_Health_SFX_RTPC();
	void Setup_Debug_Info_Widget();
	void SetPostProcessHealthValue(float* bpp__Health__pf);
	void SetHitTargetArmorLevelRTPC(class AActor** bpp__HitxTarget__pfT, class AActor** bpp__RTPCxActor__pfT);
	void RestoreNormalCamera();
	void ReevaluateDebugWidgetAttachment();
	void ReceiveTick(float* bpp__DeltaSeconds__pf);
	void ReceiveBeginPlay();
	void Play_Viewed_Sonar_Hit(struct FDamageEffect* bpp__Effect__pf);
	void Play_Viewed_EMP_Hit(struct FDamageEffect* bpp__Effect__pf);
	void Play_Viewed_Blood_Hit(struct FDamageEffect* bpp__Effect__pf);
	void Play_Martial_Artist_Target_Front();
	void Play_Martial_Artist_Target_Back();
	void Play_Martial_Artist_Instigator_Front();
	void Play_Martial_Artist_Instigator_Back();
	void PlayViewFlashBangHit(struct FDamageEffect* bpp__Effect__pf);
	void PlayHitFromRadialDamage(struct FDamageEffect* bpp__Effect__pf__const);
	void PlayHitFromPointDamage(struct FDamageEffect* bpp__Effect__pf__const);
	void PlayerRevived(class AKSPlayerState** bpp__Revivee__pf, class AKSPlayerState** bpp__Reviver__pf, int* bpp__ExpBonus__pf);
	void PlayerDown(struct FCombatEventInfo* bpp__EventInfo__pf, int* bpp__ExpBonus__pf);
	void PlayerDeath(struct FCombatEventInfo* bpp__EventInfo__pf);
	void PlayEnemyHitSFX(class UClass** bpp__DamagexType__pfT, class AActor** bpp__Target__pf, class AActor** bpp__InxDamagexTarget__pfTT);
	void PlayActionCameraSequence(struct FName* bpp__SequenceName__pf);
	void OnZiplineChangeForFov(bool* bpp__IsZiplining__pf);
	void On_Shoulder_Swap_Changed_Event(class AKSCharacter** bpp__Character__pf);
	void OnUnhovered(float* bpp__ExtraTime__pf);
	void OnStartSkydive();
	void OnSprintChangedCallback(bool* bpp__IsSprinting__pf);
	void OnReviveStart(class AKSCharacter** bpp__Reviver__pf, float* bpp__ReviveTime__pf, bool* bpp__Remote__pf);
	void OnReviveInterrupt(class AKSCharacter** bpp__Reviver__pf);
	void OnReviveComplete(class AKSCharacter** bpp__Reviver__pf);
	void OnPowerSlideChangedCallback(bool* bpp__IsPowerSliding__pf);
	void OnLanded(struct FHitResult* bpp__Hit__pf__const);
	void OnImmuneStart();
	void OnImmuneEnd();
	void OnHovered();
	void OnHealthChanged(class AKSCharacterBase** bpp__Character__pf__const);
	void OnFieldOfViewModChange();
	void OnEndZiplineRagdoll();
	void OnEndSkydive();
	void OnEndPowerSlide(EKSPowerSlideEndReason* bpp__EndReason__pf);
	void OnEndOutOfBounds();
	void OnDodgeRollChangedEvent(bool* bpp__IsDodgeRolling__pf);
	void OnBeginZiplineRagdoll();
	void OnBeginPowerSlide();
	void OnBeginOutOfBounds();
	void NoseDiveFOVTimeline__UpdateFunc();
	void NoseDiveFOVTimeline__FinishedFunc();
	void NoseDiveCameraTransition(bool* bpp__bEnterNoseDive__pf, float* bpp__AnimLength__pf);
	void MinFlashBang__UpdateFunc();
	void MinFlashBang__FinishedFunc();
	void MaxFlashBang__UpdateFunc();
	void MaxFlashBang__FinishedFunc();
	void Martial_Artist_Target_Front__UpdateFunc();
	void Martial_Artist_Target_Front__FinishedFunc();
	void Martial_Artist_Target_Back__UpdateFunc();
	void Martial_Artist_Target_Back__FinishedFunc();
	void Martial_Artist_Instigator_Front__UpdateFunc();
	void Martial_Artist_Instigator_Front__FinishedFunc();
	void Martial_Artist_Instigator_Back__UpdateFunc();
	void Martial_Artist_Instigator_Back__FinishedFunc();
	void LandingRollEvent(bool* bpp__IsDodgeRolling__pf);
	void KeepActionCameraAboveWater(struct FVector* bpp__InBoomPosition__pf, struct FVector* bpp__OutBoomPosition__pf);
	void K2_OnStartCrouch(float* bpp__HalfHeightAdjust__pf, float* bpp__ScaledHalfHeightAdjust__pf);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* bpp__PrevMovementMode__pf, TEnumAsByte<EMovementMode>* bpp__NewMovementMode__pf, unsigned char* bpp__PrevCustomMode__pf, unsigned char* bpp__NewCustomMode__pf);
	void K2_OnEndViewTarget(class APlayerController** bpp__PC__pf);
	void K2_OnEndCrouch(float* bpp__HalfHeightAdjust__pf, float* bpp__ScaledHalfHeightAdjust__pf);
	void K2_OnBecomeViewTarget(class APlayerController** bpp__PC__pf);
	void InpActEvt_T_K2Node_InputKeyEvent_1(struct FKey* bpp__Key__pf);
	void InitRagdollOnDeath();
	void InitializeHealthPP();
	void Hide_Zipline_Pulley();
	void Hide_Upline_Device();
	void Handle_Downed_Ragdoll();
	void HalfFlashBang__UpdateFunc();
	void HalfFlashBang__FinishedFunc();
	void Get_ADS_Camera_By_Tag(struct FName* bpp__Tag__pf, class UCameraComponent** bpp__CameraxComponent__pfT);
	void Get_ADS_Bend_Target_Camera_Component(class UCameraComponent** bpp__CameraxComponent__pfT);
	void GetTargetFov(float* bpp__TargetFov__pf);
	void GetTargetArmorLevel(class AActor** bpp__HitxTarget__pfT, int* bpp__ArmorxLevel__pfT);
	void GetRagdollFacingDirection(bool* bpp__IsUp__pf);
	void GetLastHitDistance(float* bpp__OutDistance__pf);
	float GetFlashBangEffectDurationFromDistance(float* bpp__Distance__pf);
	void GetDownedTransitionMontage(class UAnimMontage** bpp__OutAnimMontage__pf);
	void GetDeathTransitionAnimation(class UAnimSequence** bpp__OutAnimSequence__pf);
	void FreeFall_Camera_Burst();
	void Finish_Action_Camera_Update();
	void FinishHacking();
	void ExitDownedRagdoll();
	void ExecuteUbergraph_MainCharacter_5(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_4(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_23(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_18(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_17(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_117(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_116(int* bpp__EntryPoint__pf);
	void ExecuteUbergraph_MainCharacter_12(int* bpp__EntryPoint__pf);
	void EventSetupCamerasForSpectator(bool* bpp__Enabled__pf);
	void EnterFreeFallFOVTimeline__UpdateFunc();
	void EnterFreeFallFOVTimeline__FinishedFunc();
	void EnterDownedRagdoll();
	void End_Down_PP();
	void EndImmunity__UpdateFunc();
	void EndImmunity__FinishedFunc();
	void DoSetOnFire();
	void DoExtinguishFire();
	void DoBindZiplineEvents();
	void DoBindSprintEvents();
	void DoBindDodgeRollEvents();
	void DetermineKnockbackFacing(struct FVector* bpp__HitDirection__pf, EHitEnum* bpp__SideHit__pf, struct FRotator* bpp__ActorRotation__pf);
	void DetachSkydiveParticle();
	void DestructibleSpeedGateOverlappedEvent(struct FVector* bpp__BreakingLocation__pf, struct FVector* bpp__BreakingDirection__pf, struct FVector* bpp__BreakingNormal__pf);
	void CheckFlashBangOnViewTargetChange();
	void Camera_Boom_Timeline__UpdateFunc();
	void Camera_Boom_Timeline__Switch_To_Main_Camera__EventFunc();
	void Camera_Boom_Timeline__Switch_To_ADS_Camera__EventFunc();
	void Camera_Boom_Timeline__FinishedFunc();
	void CameraDodgeRoll__UpdateFunc();
	void CameraDodgeRoll__FinishedFunc();
	void CacheRagdollPelvisLocation();
	void BlueprintOnStopSwimming();
	void BlueprintOnStartSwimming();
	bool BlueprintHandleDeath();
	void Audio_Init();
	void ApplyLastHitImpulse(bool* bpp__UpdateTargetRotation__pf, bool* bpp__AffectCapsule__pf);
	void PlayerReviveDelegate__DelegateSignature(class AKSPlayerState** bpp__Revivee__pf, class AKSPlayerState** bpp__Reviver__pf, int* bpp__ExpBonus__pf);
	void PlayerDownInfo__DelegateSignature(struct FCombatEventInfo* bpp__EventInfo__pf, int* bpp__ExpBonus__pf);
	void PlayerDeathInfo__DelegateSignature(struct FCombatEventInfo* bpp__EventInfo__pf);
	void OnSprintChanged__DelegateSignature(bool* bpp__IsSprinting__pf);
	void OnShoulderSwapChanged__DelegateSignature(class AKSCharacter** bpp__Character__pf);
	void OnPowerSlideChanged__DelegateSignature(bool* bpp__IsPowerSliding__pf);
	void OnPlayerStateChanged__DelegateSignature(class APlayerState** bpp__PlayerState__pf);
	void OnHealthChanged__DelegateSignature(class AKSCharacterBase** bpp__Character__pf);
	void OnGoDown__DelegateSignature();
	void OnEndZipline__DelegateSignature();
	void OnDodgeRollChanged__DelegateSignature(bool* bpp__IsDodgeRolling__pf);
	void OnBeginZipline__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
