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

// Function SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C.InitializeValue
// (Event, Protected, BlueprintEvent)

void USettingsInfo_GlobalQuality_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C.InitializeValue");

	USettingsInfo_GlobalQuality_C_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C.ExecuteUbergraph_SettingsInfo_GlobalQuality
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsInfo_GlobalQuality_C::ExecuteUbergraph_SettingsInfo_GlobalQuality(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C.ExecuteUbergraph_SettingsInfo_GlobalQuality");

	USettingsInfo_GlobalQuality_C_ExecuteUbergraph_SettingsInfo_GlobalQuality_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
