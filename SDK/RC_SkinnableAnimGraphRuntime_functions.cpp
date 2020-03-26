// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMultiSkinObject*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMultiSkinObject* USkinnedAnimInstance::GetSkinObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinObject");

	USkinnedAnimInstance_GetSkinObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedBlendSpace
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Keyword                        (Parm, ZeroConstructor, IsPlainOldData)
// class UBlendSpace**            Default                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasOverride                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBlendSpace*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlendSpace* USkinnedAnimInstance::GetSkinnedBlendSpace(struct FName* Keyword, class UBlendSpace** Default, bool* bHasOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedBlendSpace");

	USkinnedAnimInstance_GetSkinnedBlendSpace_Params params;
	params.Keyword = Keyword;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasOverride != nullptr)
		*bHasOverride = params.bHasOverride;

	return params.ReturnValue;
}


// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimSequence
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Keyword                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence**          Default                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasOverride                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* USkinnedAnimInstance::GetSkinnedAnimSequence(struct FName* Keyword, class UAnimSequence** Default, bool* bHasOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimSequence");

	USkinnedAnimInstance_GetSkinnedAnimSequence_Params params;
	params.Keyword = Keyword;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasOverride != nullptr)
		*bHasOverride = params.bHasOverride;

	return params.ReturnValue;
}


// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimOffset
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Keyword                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAimOffsetBlendSpace**   Default                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasOverride                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAimOffsetBlendSpace*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAimOffsetBlendSpace* USkinnedAnimInstance::GetSkinnedAnimOffset(struct FName* Keyword, class UAimOffsetBlendSpace** Default, bool* bHasOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimOffset");

	USkinnedAnimInstance_GetSkinnedAnimOffset_Params params;
	params.Keyword = Keyword;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasOverride != nullptr)
		*bHasOverride = params.bHasOverride;

	return params.ReturnValue;
}


// Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimMontage
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Keyword                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage**           Default                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasOverride                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* USkinnedAnimInstance::GetSkinnedAnimMontage(struct FName* Keyword, class UAnimMontage** Default, bool* bHasOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkinnableAnimGraphRuntime.SkinnedAnimInstance.GetSkinnedAnimMontage");

	USkinnedAnimInstance_GetSkinnedAnimMontage_Params params;
	params.Keyword = Keyword;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasOverride != nullptr)
		*bHasOverride = params.bHasOverride;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
