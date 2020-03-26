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

// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinObject
struct USkinnedAnimInstance_GetSkinObject_Params
{
	class UMultiSkinObject*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedBlendSpace
struct USkinnedAnimInstance_GetSkinnedBlendSpace_Params
{
	struct FName*                                      Keyword;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UBlendSpace**                                Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasOverride;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimSequence
struct USkinnedAnimInstance_GetSkinnedAnimSequence_Params
{
	struct FName*                                      Keyword;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence**                              Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasOverride;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimOffset
struct USkinnedAnimInstance_GetSkinnedAnimOffset_Params
{
	struct FName*                                      Keyword;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace**                       Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasOverride;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimMontage
struct USkinnedAnimInstance_GetSkinnedAnimMontage_Params
{
	struct FName*                                      Keyword;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage**                               Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasOverride;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
