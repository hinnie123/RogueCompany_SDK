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

// Function LW6Revolver_WeaponComponent.LW6Revolver_WeaponComponent_C.ExecuteUbergraph_LW6Revolver_WeaponComponent
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULW6Revolver_WeaponComponent_C::ExecuteUbergraph_LW6Revolver_WeaponComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LW6Revolver_WeaponComponent.LW6Revolver_WeaponComponent_C.ExecuteUbergraph_LW6Revolver_WeaponComponent");

	ULW6Revolver_WeaponComponent_C_ExecuteUbergraph_LW6Revolver_WeaponComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
