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

// Function PlatformCommon.PCom_SimpleTimecodeProvider.SetFrameRate
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FFrameRate*             InFrameRate                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPCom_SimpleTimecodeProvider::SetFrameRate(struct FFrameRate* InFrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PCom_SimpleTimecodeProvider.SetFrameRate");

	UPCom_SimpleTimecodeProvider_SetFrameRate_Params params;
	params.InFrameRate = InFrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
