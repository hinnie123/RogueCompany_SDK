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

// BlueprintGeneratedClass Master_WeaponComponent.Master_WeaponComponent_C
// 0x0401 (0x08C9 - 0x04C8)
class UMaster_WeaponComponent_C : public UKSWeaponComponent
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x04C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               Is_ADS;                                                   // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	struct FName                                       Owner_Fire_Section;                                       // 0x04D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	TArray<struct FName>                               Owner_1p_ADS_Fire_Section;                                // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       Deattach_Slot_Name;                                       // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Attach_Slot_Name;                                         // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MIrror_Attach_Slot_Name;                                  // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Weapon_Fire_Sound_ID;                                     // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Weapon_Fire_Sound_Interrupts;                             // 0x050C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x050D(0x0003) MISSED OFFSET
	class UAkAudioEvent*                               Weapon_Casing_Sound;                                      // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Equip_Sound;                                              // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Speed_of_Sound;                                           // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Echo_Max_Distance;                                        // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FRotator>                            Echo_Directions;                                          // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     Echo_Sound_Location;                                      // 0x0538(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0544(0x0004) MISSED OFFSET
	class UParticleSystem*                             Muzzle_Flash_3p;                                          // 0x0548(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Muzzle_Flash_1p;                                          // 0x0550(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Muzzle_Flash_Attach_Name;                                 // 0x0558(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cartridge_Ejection_Attach_Name;                           // 0x0560(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitDecalInfo                               Default_Decal_Info;                                       // 0x0568(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<TEnumAsByte<EPhysicalSurface>, struct FHitDecalInfo> Physical_Decal_Materials;                                 // 0x0590(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             Tracer_Template;                                          // 0x05E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Next_Tracer_Time;                                         // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Minimum_Tracer_Delay;                                     // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Maximum_Tracer_Delay;                                     // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Shot_Count;                                               // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 Tracer_Mesh;                                              // 0x05F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Tracer_Frequency;                                         // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      Decal_Physical_Surface;                                   // 0x0604(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0605(0x0003) MISSED OFFSET
	struct FVector                                     Decal_Location;                                           // 0x0608(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0614(0x0004) MISSED OFFSET
	class UMaterialInterface*                          Temp_Mesh_Material_Override;                              // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CountedShotsLeft;                                         // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0624(0x0004) MISSED OFFSET
	class UClass*                                      _1P_ADS_Camera_Shake;                                     // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               Owner_3p_Fire_Section;                                    // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Counter;                                                  // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0644(0x0004) MISSED OFFSET
	class UClass*                                      AOS_Camera_Shake;                                         // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      _3P_Camera_Shake;                                         // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CountedMagSize;                                           // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSecondaryWeapon;                                       // 0x065C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Pistol;                                                // 0x065D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Dual_Guns;                                             // 0x065E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldSpawnTracers;                                       // 0x065F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldHaveBulletFX;                                       // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldHaveBulletSpangs;                                   // 0x0661(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasFiredByOwner;                                         // 0x0662(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x0663(0x0001) MISSED OFFSET
	float                                              NearMissDistance;                                         // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MagazineDropBone;                                         // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DropBoneOnWeapon;                                         // 0x0670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrackingMagDropBone;                                      // 0x0671(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0xE];                                       // 0x0672(0x000E) MISSED OFFSET
	struct FTransform                                  DropMagSpawnTransformOveride;                             // 0x0680(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DropBonePreviousPosition;                                 // 0x06B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DropBoneVelocity;                                         // 0x06BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DropVelocityOverride;                                     // 0x06C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Gun_Holstered;                                         // 0x06D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DropMultipleMags;                                         // 0x06D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x06D6(0x0002) MISSED OFFSET
	TArray<struct FMultiMagDropInfo>                   MultiMagArray;                                            // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             MultiMagBoneVelocities;                                   // 0x06E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             MultiMagBonePrevPositions;                                // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Is_Multi_Stage_Reload;                                    // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Maintain_Holster;                                         // 0x0709(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x070A(0x0002) MISSED OFFSET
	struct FName                                       Target_BackSlot;                                          // 0x070C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Shotgun;                                               // 0x0714(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0715(0x0003) MISSED OFFSET
	float                                              Turn_Directional_Amount;                                  // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Target_Shell_Housing_Spin;                                // 0x071C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Revolver_Index;                                           // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Missing_Shell_Count;                                      // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                Revolving_chamber_rotate_timer;                           // 0x0730(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Ease_Revolver_Rotate;                                     // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Revolver;                                              // 0x0739(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x073A(0x0002) MISSED OFFSET
	struct FRotator                                    Revolver_Hammer_Strike;                                   // 0x073C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DropAllShells;                                            // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0749(0x0003) MISSED OFFSET
	float                                              Interp_Speed;                                             // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VsWorldAlphaDiff;                                         // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastUpdatedAlpha;                                         // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               Prevent_Vs_World_Active;                                  // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Vs_World_Force_Reset_Delay;                            // 0x0759(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x075A(0x0002) MISSED OFFSET
	float                                              Vs_World_Reset_Delay_Time;                                // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Current_Active_Reload_Montage;                            // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Able_to_Magdrop_;                                         // 0x0768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Force_Holster_Mantle_;                                    // 0x0769(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Force_Holster_Zipline;                                    // 0x076A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Scope_Mesh_Scale;                                         // 0x076B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scope_Scale_Alpha;                                        // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  Hide_Materials_Array;                                     // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Is_Vcol_Hide_Needed;                                      // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0781(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSetScopeScaleAlpha;                                     // 0x0788(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSetRevolverHammerStrike;                                // 0x0798(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              CosmeticShotTraceDist;                                    // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x07AC(0x0004) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            CartridgeEjectParticles;                                  // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            _1PMuzzleFlashParticles;                                  // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            _3pMuzzleFlashParticles;                                  // 0x07D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bShouldPlayADSFire;                                       // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x07E1(0x0003) MISSED OFFSET
	float                                              ADSFirePlayPosition;                                      // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ADSFireDelay;                                             // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSetLobbyState;                                          // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               DropMagazineLockout;                                      // 0x0800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MGL_Varient;                                              // 0x0801(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x6];                                       // 0x0802(0x0006) MISSED OFFSET
	class UClass*                                      _3P_Camera_Shake_Hi;                                      // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Bullet_Near_Miss_Camera_Shake;                            // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Bullet_Near_Miss_Camera_Shake_Distance;                   // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x081C(0x0004) MISSED OFFSET
	class UClass*                                      FireCameraModifier;                                       // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FFullFireRepData>                    QueuedAimData;                                            // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FHitResult>                          ValidHits_Event;                                          // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Should_Play_Impact_Sound;                                 // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Prevent_Magazine_Hide;                                    // 0x0849(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Should_Hide_On_Holster;                                   // 0x084A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFireAudioMode>                        _FireAudioMode;                                           // 0x084B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowNewShotAudio;                                        // 0x084C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x084D(0x0003) MISSED OFFSET
	float                                              Post_Reload_Delay_Period;                                 // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x4];                                       // 0x0854(0x0004) MISSED OFFSET
	class UAnimMontage*                                Current_Active_Weapon_Reload_Montage;                     // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Folded_Stock;                                             // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0861(0x0003) MISSED OFFSET
	struct FRotator                                    Stock_Rotation;                                           // 0x0864(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Stock_alt_Rotation;                                       // 0x0870(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Multi_Stage_Reload_Lockout;                               // 0x087C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x087D(0x0003) MISSED OFFSET
	struct FVector                                     ViewPawnForwardDir;                                       // 0x0880(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ViewPawnLeftDir;                                          // 0x088C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastBulletMissTime;                                       // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoopingFireAudioCheckTriggerDelay;                        // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LoopingFireAudioFadeOutDuration;                          // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFirstShot;                                              // 0x08A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPlayerControlled;                                       // 0x08A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Lunging_Active;                                           // 0x08A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x1];                                       // 0x08A7(0x0001) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            _1PAuxMuzzleFlashParticles;                               // 0x08A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            _3pAuxMuzzleFlashParticles;                               // 0x08B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShouldPlayBlockedImpactSound;                             // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Master_WeaponComponent.Master_WeaponComponent_C");
		return ptr;
	}


	void GetTableRowNameForHit(struct FHitResult* Hit, struct FName* RowNamePrefix, struct FName* RowName);
	void Get_Player_3P_Lunge_Montage(class UAnimMontage** Montage);
	void Get_Scaled_Reload_Playrate(class UAnimMontage** Anim_Montage, float* Scaled_Playrate);
	void Get_Scaled_Post_Reload_Playrate(class UAnimMontage** Anim_Montage, float* Scaled_Playrate);
	void Get_Post_Reload_Weapon_Section_Time(class UAnimMontage** Anim_Montage, float* Post_Reload_Position);
	void End_Reload_Weapon(bool* Abort_Reload_Animation);
	void Get_Scaled_Multistage_Reload_Playrate(class UAnimMontage** Anim_Montage, float* Scaled_Playrate);
	void Calculate_Multistage_Reload_Time(class UAnimMontage** Reload_Montage, class UAnimMontage** Quick_Reload_Montage, float* PlayRate, class UAnimMontage** Selected_Montage, bool* Is_QuickReload);
	void Reload_Cooldown_Weapon();
	void ShouldPlayFireAnim1P(bool* Play_1P_Fire);
	void Fixup_Laser_Sight(class USkinnableSkeletalMeshComponent** MeshComponent);
	void Get_Player_1P_Fire_Montage(class UAnimMontage** Montage);
	void Play_Reload_MultiStage(float* Play_Rate, class UAnimMontage** Selected_Montage);
	void Play_Reload_Base(float* Play_Rate, class UAnimMontage** Selected_Montage);
	void Play_Weapon_Reload_animation(float* PlayRate, bool* Is_Quick_Reload);
	void Play_Reload_Logic(class UAnimMontage** Reload_Montage, class UAnimMontage** QuickReload_Montage, bool* Is_Multi_Stage_Reload_);
	void Play_Post_Reload();
	void AudioOnCooldown();
	void Calculate_Reload_Time(class UAnimMontage** Reload_Montage, class UAnimMontage** Quick_Reload_Montage, float* PlayRate, class UAnimMontage** Selected_Montage, bool* Is_QuickReload);
	void Spawn_Tracers_Simple(struct FVector* Trace_End, TArray<struct FHitResult>* Hits);
	void Filter_Cosmetic_Hit_Results(TArray<struct FHitResult>* Trace_Hit_Results, TArray<struct FHitResult>* Filtered_Hit_Results);
	void SpawnDecals(TArray<struct FHitResult>* Hits);
	void SpawnSpangs(TArray<struct FHitResult>* Hits);
	void Play_Fire_Camera_Shakes(bool* LocalOnly, class UClass** Primary_Shake, class UClass** HiFreq_Shake);
	void Fire_Montage_Jump_To_Section(struct FString* Section);
	void TryDisableCameraModifier(class UClass** Camera_Modifier, int* Player_Index, bool* Found);
	void EnableOrAddCameraModifier(class UClass** Modifier, int* PlayerIndex, class UCameraModifier** Modifier_Object);
	void Pre_Fire_Weapon();
	void Play_Fire_Tail_Sound(EAkCallbackType* Callback_Type, class UAkCallbackInfo** Callback_Info);
	void PlayInvalidFireSound();
	bool CanUseCombatState(ECombatState* TestState);
	void Set_Muzzle_Flash_Emitter_and_Offset();
	void SpawnTracers(TArray<struct FHitResult>* Hits, TArray<struct FFullFireRepData>* AimData);
	void SyncComputeCosmeticHits(struct FFullFireRepData* FireData, TArray<struct FHitResult>* Hits);
	void On_Character_Anim_Initialized();
	void Setup_Character_Anim_Init_Callback();
	void Set_Revolver_Hammer_Strike(struct FRotator* New_Hammer_Strike_Rotator);
	void Set_Scope_Scale_Alpha(float* New_Alpha);
	struct FName GetMuzzleSocketName();
	struct FName GetScopeSocketName();
	bool ShouldBroadcastWeaponStateChange(struct FKSWeaponDataUpdateContainer* OldState, struct FKSWeaponDataUpdateContainer* NewState, bool* bReliable);
	class UKSWeaponSkeletalMeshComponent* CreateWeaponSkeletalMeshComponent();
	void Anim_Init_On_Weapon_Mesh(class USkinnableSkeletalMeshComponent** SkelComp, class UAnimInstance** AnimInstance);
	void Get_Player_3P_Fire_Montage(class UAnimMontage** Montage);
	void Ancillary_Mesh_Scale_Set();
	void Play_Casing_Sound();
	void Post_Fire_Weapon();
	void DropMagInternal(int* Index);
	bool IsDropMeshValid(int* Index);
	void SetupMultiMagArrays();
	void GetDropVelocity(int* Index, struct FVector* WorldVelocity);
	void GetDropMesh(int* Index, class USkeletalMesh** SkelMesh, class UStaticMesh** StaticMesh);
	void GetMagDropBoneRotation(int* Index, struct FRotator* WorldRotation);
	void UpdateMagDropBoneVelocity(float* DeltaTime, int* Index);
	void GetMagDropBoneLocation(int* Index, struct FVector* WorldLocation);
	void PlayFireSound(struct FAimData* InputPin);
	void PlayBulletNearMissSound(struct FVector* In_Trace_Start, struct FVector* In_Trace_End, TArray<struct FHitResult>* Hits);
	void BuildupWeapon();
	void IdleWeapon();
	void DetermineMagSize();
	void Get_Character_3p_Fire_Section(struct FName* _3p_Fire_Section);
	void Fixup_Attach_Point();
	void GetPercentRemainingAmmo(float* Percent);
	void PlayEmptyFireAudio();
	void Play_Bullet_Impact_SFX(struct FHitResult* HitResult);
	void Spawn_Spangs_and_Decals(struct FFullFireRepData* Data, TArray<struct FHitResult>* Hits, struct FFullFireRepData* Out_Data);
	void Get_Character_1p_Fire_Section(struct FName* _1p_Fire_Section);
	void Get_Tracer_Start_Point(struct FVector* Start_Point);
	void Prepare_Next_Tracer_Spawn();
	void Can_Spawn_Tracer_Now(bool* Can_Spawn__Tracer);
	void Spawn_Tracer(struct FVector* EndPoint);
	void Get_Expected_Aim_Data(struct FAimData* AimData);
	void Get_Decal_Material(struct FHitResult* Hit, struct FHitDecalInfo* Decal_Info);
	void Get_Spang_Particle_System(struct FHitResult* Hit, class UParticleSystem** Spang_To_Use, bool* PlayOnHitCharacter);
	void Apply_Spang_From_Hit_Result(struct FHitResult* Hit);
	void Get_Character_Anim_Instance(class UKSCharacterAnimInst** Anim_Inst);
	void Attach_Weapon_To_Active_Socket();
	void Attach_Weapon_Holster_Socket();
	void Reload_Weapon();
	void Retrieve_Weapon();
	void Fire_Weapon(struct FFullFireRepData* Data, bool* PlayNoChainFireMontage);
	void Holster_Weapon();
	void AsyncComputeCosmeticHitsAndPlay(struct FFullFireRepData* Fire_Data);
	void On_Comestic_Trace_Complete(bool* bBlockingHit, TArray<struct FHitResult>* OutHits, struct FVector* start, struct FVector* end);
	void Delay_Spawn_Spangs(TArray<struct FHitResult>* Hits);
	void Delay_Spawn_Tracers(TArray<struct FHitResult>* Hits, struct FVector* Trace_End);
	void Delay_Spawn_Decals(TArray<struct FHitResult>* Hits, struct FVector* start, struct FVector* end);
	void On_Cosmetic_Trace_Complete_Internal(bool* Blocking_Hit, struct FVector* start, struct FVector* end, bool* Allow_Spangs, bool* Allow_Tracers, bool* Allow_Decals, TArray<struct FHitResult>* Out_Hits);
	void After_Spawn_Spangs_Delay(bool* bBlockingHit, TArray<struct FHitResult>* OutHits, struct FVector* start, struct FVector* end);
	void After_Spawn_Tracers_Delay(bool* bBlockingHit, TArray<struct FHitResult>* OutHits, struct FVector* start, struct FVector* end);
	void After_Spawn_Decals_Delay(bool* bBlockingHit, TArray<struct FHitResult>* OutHits, struct FVector* start, struct FVector* end);
	void ApplyDecalFromHit(struct FHitResult* Hit);
	void HandleWeaponFiringClientEffects(struct FFullFireRepData* Data);
	void Reset_Variables_at_Start_of_Firing_Instance();
	void ReceiveTick(float* DeltaSeconds);
	void OnWeaponStateChanged(EWeaponStateNew* OldState, EWeaponStateNew* NewState);
	void OnInitialize();
	void OnFireWeaponFull(struct FFullFireRepData* Data);
	void StartAimDownSights();
	void StopAimDownSights();
	void OnEmptyFire();
	void BlueprintPersistentCosmeticsUpdate();
	void OnUnsetAsActivePrimaryWeapon();
	void OnSetAsActivePrimaryWeapon();
	void BlueprintPrepareKillCamPlayback();
	void Force_ADS_Scope();
	void CheckKillCamScope(class APawn** ViewPawn);
	void Update_Combat_State(ECombatState* NewState);
	void OnInvalidFire();
	void AimDownSightsCheckpoint();
	void CancelReloadCosmetic();
	void StartAimOverShoulder();
	void StopAimOverShoulder();
	void Force_Exit_ADS_Pose();
	void OnActiveMaterialsApplied(class USkinnableSkeletalMeshComponent** SkinnableSkelComp);
	void NotifyStopFireReceived();
	void ForceRetrieveWeapon();
	void ForceHolsterWeapon();
	void DropMagazine();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void OnKilled_Event_1(class AKSCharacterBase** KillerCharacter);
	void OnPossessedBy_Event_1(class AController** NewController);
	void ExecuteUbergraph_Master_WeaponComponent(int* EntryPoint);
	void OnSetLobbyState__DelegateSignature(bool* Lobby_State);
	void OnSetRevolverHammerStrike__DelegateSignature(struct FRotator* New_Hammer_Strike_Rotator);
	void OnSetScopeScaleAlpha__DelegateSignature(float* New_Alpha);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
