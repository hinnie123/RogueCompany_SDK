#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_AimOffsetSkinned
// 0x0028 (0x01B0 - 0x0188)
struct FAnimNode_AimOffsetSkinned : public FAnimNode_RotationOffsetBlendSpace
{
	struct FName                                       SkinKeyword;                                              // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             TargetBlendSpace;                                         // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBlendSpaceBase*                             DefaultBlendSpace;                                        // 0x0198(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01A0(0x0010) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_BlendPoseNodeSkinned
// 0x0030 (0x00B8 - 0x0088)
struct FAnimNode_BlendPoseNodeSkinned : public FAnimNode_PoseBlendNode
{
	struct FName                                       SkinKeyword;                                              // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPoseAsset*                                  TargetPose;                                               // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUsePoseAssetPinAsFallback;                               // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	class UPoseAsset*                                  FallbackPose;                                             // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_BlendSpacePlayerSkinned
// 0x0110 (0x01F0 - 0x00E0)
struct FAnimNode_BlendSpacePlayerSkinned : public FAnimNode_BlendSpacePlayer
{
	struct FPoseLink                                   Source;                                                   // 0x00E0(0x0010) (Edit, BlueprintVisible)
	struct FName                                       SkinKeyword;                                              // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendFromSourceTime;                                      // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendToSourceTime;                                        // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  BlendType;                                                // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                             // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 BlendFromSource;                                          // 0x0118(0x0030)
	struct FAlphaBlend                                 BlendToSource;                                            // 0x0148(0x0030)
	class UBlendSpaceBase*                             TargetBlendSpace;                                         // 0x0178(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBlendSpaceBase*                             LastTargetBlendSpace;                                     // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLastHadTargetBlendSpace;                                 // 0x0188(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	float                                              SourceBlendWeight;                                        // 0x018C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingBlendTime;                                       // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	struct FBlendSampleData                            PerBoneSampleData;                                        // 0x0198(0x0040)
	bool                                               bResetSourceOnActivation;                                 // 0x01D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x17];                                      // 0x01D9(0x0017) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_BSpaceEvalSkinned
// 0x0110 (0x01F8 - 0x00E8)
struct FAnimNode_BSpaceEvalSkinned : public FAnimNode_BlendSpaceEvaluator
{
	struct FPoseLink                                   Source;                                                   // 0x00E8(0x0010) (Edit, BlueprintVisible)
	struct FName                                       SkinKeyword;                                              // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendFromSourceTime;                                      // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendToSourceTime;                                        // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  BlendType;                                                // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0110(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                             // 0x0118(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 BlendFromSource;                                          // 0x0120(0x0030)
	struct FAlphaBlend                                 BlendToSource;                                            // 0x0150(0x0030)
	class UBlendSpaceBase*                             TargetBlendSpace;                                         // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UBlendSpaceBase*                             LastTargetBlendSpace;                                     // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLastHadTargetBlendSpace;                                 // 0x0190(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	float                                              SourceBlendWeight;                                        // 0x0194(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingBlendTime;                                       // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
	struct FBlendSampleData                            PerBoneSampleData;                                        // 0x01A0(0x0040)
	bool                                               bResetSourceOnActivation;                                 // 0x01E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x17];                                      // 0x01E1(0x0017) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SeqEvalSkinned
// 0x0118 (0x0160 - 0x0048)
struct FAnimNode_SeqEvalSkinned : public FAnimNode_SequenceEvaluator
{
	struct FPoseLink                                   Source;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible)
	struct FName                                       SkinKeyword;                                              // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendFromSourceTime;                                      // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendToSourceTime;                                        // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  BlendType;                                                // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                             // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 BlendFromSource;                                          // 0x0080(0x0030)
	struct FAlphaBlend                                 BlendToSource;                                            // 0x00B0(0x0030)
	class UAnimSequenceBase*                           TargetSequence;                                           // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequenceBase*                           LastTargetSequence;                                       // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUseSequencePinAsFallback;                                // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLastHadTargetSequence;                                   // 0x00F1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	float                                              SourceBlendWeight;                                        // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingBlendTime;                                       // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	struct FBlendSampleData                            PerBoneSampleData;                                        // 0x0100(0x0040)
	bool                                               bResetSourceOnActivation;                                 // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           FallbackSequence;                                         // 0x0148(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0150(0x0010) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SeqCurveEvalSkinned
// 0x0010 (0x0170 - 0x0160)
struct FAnimNode_SeqCurveEvalSkinned : public FAnimNode_SeqEvalSkinned
{
	struct FName                                       CurveName;                                                // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SequenceSkinned
// 0x0120 (0x0150 - 0x0030)
struct FAnimNode_SequenceSkinned : public FAnimNode_AssetPlayerBase
{
	struct FPoseLink                                   Source;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible)
	struct FName                                       SkinKeyword;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoopAnimation;                                           // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayRateBasis;                                            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartPosition;                                            // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendFromSourceTime;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendToSourceTime;                                        // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAlphaBlendOption                                  BlendType;                                                // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomBlendCurve;                                         // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                             // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FAlphaBlend                                 BlendFromSource;                                          // 0x0078(0x0030)
	struct FAlphaBlend                                 BlendToSource;                                            // 0x00A8(0x0030)
	class UAnimSequenceBase*                           CurrentSequence;                                          // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAnimSequenceBase*                           LastSequence;                                             // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLastHadSequence;                                         // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	float                                              SourceBlendWeight;                                        // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RemainingBlendTime;                                       // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FBlendSampleData                            PerBoneSampleData;                                        // 0x00F8(0x0040)
	bool                                               bResetSourceOnActivation;                                 // 0x0138(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x17];                                      // 0x0139(0x0017) MISSED OFFSET
};

// ScriptStruct SkinnableAnimGraphRuntime.AnimNode_SequenceSkinnedCurvePlay
// 0x0008 (0x0158 - 0x0150)
struct FAnimNode_SequenceSkinnedCurvePlay : public FAnimNode_SequenceSkinned
{
	struct FName                                       CurveName;                                                // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SkinnableAnimGraphRuntime.SkinnedAnimInstanceProxy
// 0x0050 (0x06E0 - 0x0690)
struct FSkinnedAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0690(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
