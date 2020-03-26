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

// Function M16A6_ABP.M16A6_ABP_C.ExecuteUbergraph_M16A6_ABP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UM16A6_ABP_C::ExecuteUbergraph_M16A6_ABP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function M16A6_ABP.M16A6_ABP_C.ExecuteUbergraph_M16A6_ABP");

	UM16A6_ABP_C_ExecuteUbergraph_M16A6_ABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
