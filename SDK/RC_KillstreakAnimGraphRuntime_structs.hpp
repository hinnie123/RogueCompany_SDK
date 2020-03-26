#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum KillstreakAnimGraphRuntime.EPoseMirrorPlane
enum class EPoseMirrorPlane : uint8_t
{
	XZ                             = 0,
	XY                             = 1,
	YZ                             = 2,
	EPoseMirrorPlane_MAX           = 3
};


// Enum KillstreakAnimGraphRuntime.ERecoilAllowMirror
enum class ERecoilAllowMirror : uint8_t
{
	Both                           = 0,
	UnmirroredOnly                 = 1,
	MirroredOnly                   = 2,
	ERecoilAllowMirror_MAX         = 3
};


// Enum KillstreakAnimGraphRuntime.ERecoilStart
enum class ERecoilStart : uint8_t
{
	ERS_SpecifyOffset              = 0,
	ERS_Random                     = 1,
	ERS_SpecifyOffsetRandom        = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KillstreakAnimGraphRuntime.RecoilParams
// 0x0010
struct FRecoilParams
{
	struct FVector                                     PhaseOffset;                                              // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ERecoilStart>                          X;                                                        // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ERecoilStart>                          Y;                                                        // 0x000D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ERecoilStart>                          Z;                                                        // 0x000E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.RecoilInfo
// 0x0060
struct FRecoilInfo
{
	float                                              TimeDurationPos;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeDurationRot;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RotAmplitude;                                             // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RotFrequency;                                             // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRecoilParams                               RotParams;                                                // 0x0020(0x0010) (Edit, DisableEditOnInstance)
	struct FVector                                     LocAmplitude;                                             // 0x0030(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocFrequency;                                             // 0x003C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRecoilParams                               LocParams;                                                // 0x0048(0x0010) (Edit, DisableEditOnInstance)
	float                                              BlendInTime;                                              // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x005C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Mirrored;                                                 // 0x005D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x005E(0x0002) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.RecoilProfile
// 0x01EC
struct FRecoilProfile
{
	struct FRecoilInfo                                 PelvisRecoil;                                             // 0x0000(0x0060) (Edit, BlueprintVisible)
	struct FRecoilInfo                                 SpineRecoil;                                              // 0x0060(0x0060) (Edit, BlueprintVisible)
	struct FRecoilInfo                                 NeckRecoil;                                               // 0x00C0(0x0060) (Edit, BlueprintVisible)
	struct FRecoilInfo                                 HandRecoil;                                               // 0x0120(0x0060) (Edit, BlueprintVisible)
	struct FRecoilInfo                                 RightClavicleRecoil;                                      // 0x0180(0x0060) (Edit, BlueprintVisible)
	float                                              Spine1RecoilAlpha;                                        // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spine2RecoilAlpha;                                        // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Spine3RecoilAlpha;                                        // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakAnimGraphRuntime.BoneMirrorPair
// 0x002C
struct FBoneMirrorPair
{
	struct FBoneReference                              BoneOne;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FBoneReference                              BoneTwo;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FVector                                     RotationFlipAxis;                                         // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakAnimGraphRuntime.BoneMirrorConfig
// 0x0020
struct FBoneMirrorConfig
{
	TArray<struct FBoneReference>                      UnpairedMirrorBones;                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBoneMirrorPair>                     PairedMirrorBones;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_Mirror
// 0x0048 (0x0110 - 0x00C8)
struct FKSAnimNode_Mirror : public FAnimNode_SkeletalControlBase
{
	struct FBoneMirrorConfig                           BoneMirrorConfig;                                         // 0x00C8(0x0020) (Edit, BlueprintVisible)
	EPoseMirrorPlane                                   MirrorPlane;                                              // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	struct FBoneMirrorConfig                           MirrorConfigCache;                                        // 0x00F0(0x0020) (Transient)
};

// ScriptStruct KillstreakAnimGraphRuntime.AnimOrientationWarpDefinition
// 0x0038
struct FAnimOrientationWarpDefinition
{
	TEnumAsByte<EAxis>                                 YawRotationAxis;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseBoneSpaceForSpineWarp;                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              OrientationAlpha;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FBoneReference>                      SpineBones;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FBoneReference                              IkFootRoot;                                               // 0x0018(0x0010) (Edit)
	TArray<struct FBoneReference>                      IkFootBones;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_OrientationWarp
// 0x0048 (0x0110 - 0x00C8)
struct FKSAnimNode_OrientationWarp : public FAnimNode_SkeletalControlBase
{
	float                                              Angle;                                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	struct FAnimOrientationWarpDefinition              WarpSettings;                                             // 0x00D0(0x0038) (Edit)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_Recoil
// 0x00E8 (0x01B0 - 0x00C8)
struct FKSAnimNode_Recoil : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              m_BoneToRecoil;                                           // 0x00C8(0x0010) (Edit, BlueprintVisible)
	bool                                               m_bBoneSpaceRecoil;                                       // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	float                                              RotTimeToGo;                                              // 0x00DC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PosTimeToGo;                                              // 0x00E0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRecoilInfo                                 m_Recoil;                                                 // 0x00E4(0x0060) (Edit, BlueprintVisible)
	bool                                               m_bApplyControl;                                          // 0x0144(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0145(0x0003) MISSED OFFSET
	float                                              m_fBlendInTime;                                           // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_fBlendInRemainingTime;                                  // 0x014C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     m_vBlendLoc;                                              // 0x0150(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    m_rBlendRot;                                              // 0x015C(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FRotator                                    RotOffset;                                                // 0x0168(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0174(0x000C) MISSED OFFSET
	struct FVector                                     LocOffset;                                                // 0x0180(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x018C(0x000C) MISSED OFFSET
	int                                                m_nFireImpulseCounter;                                    // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	ERecoilAllowMirror                                 m_eMirrorPermissions;                                     // 0x019C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPoseMirrorPlane                                   m_eMirrorPlane;                                           // 0x019D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x019E(0x0002) MISSED OFFSET
	struct FVector                                     m_vRotationFlipAxis;                                      // 0x01A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                m_nInternalFireImpulseCounter;                            // 0x01AC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct KillstreakAnimGraphRuntime.AnimSpeedWarpDefinition
// 0x0048
struct FAnimSpeedWarpDefinition
{
	struct FBoneReference                              IkFootRootBone;                                           // 0x0000(0x0010) (Edit)
	TArray<struct FBoneReference>                      IkFootBones;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FBoneReference                              PelvisBone;                                               // 0x0020(0x0010) (Edit)
	float                                              PelvisAdjustmentAlpha;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PelvisAdjustmentMaxIterations;                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PelvisAdjustmentStiffness;                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PelvisAdjustmentDamping;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DisableSpeedWarpCurveName;                                // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakAnimGraphRuntime.KSAnimNode_SpeedWarp
// 0x0058 (0x0120 - 0x00C8)
struct FKSAnimNode_SpeedWarp : public FAnimNode_SkeletalControlBase
{
	float                                              SpeedScaling;                                             // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpeedWarpForwardAxis;                                     // 0x00CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAnimSpeedWarpDefinition                    SpeedWarpSettings;                                        // 0x00D8(0x0048) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
