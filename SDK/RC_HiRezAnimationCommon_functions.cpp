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

// Function HiRezAnimationCommon.HiRezAnimationStatics.FindPositionFromDistanceCurve
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  DistanceCurveName              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      InAnimSequence                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHiRezAnimationStatics::STATIC_FindPositionFromDistanceCurve(struct FName* DistanceCurveName, float* Distance, class UAnimSequenceBase** InAnimSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function HiRezAnimationCommon.HiRezAnimationStatics.FindPositionFromDistanceCurve");

	UHiRezAnimationStatics_FindPositionFromDistanceCurve_Params params;
	params.DistanceCurveName = DistanceCurveName;
	params.Distance = Distance;
	params.InAnimSequence = InAnimSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
