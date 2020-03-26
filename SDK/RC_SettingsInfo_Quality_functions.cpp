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

// Function SettingsInfo_Quality.SettingsInfo_Quality_C.InitializeValue
// (Event, Protected, BlueprintEvent)

void USettingsInfo_Quality_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Quality.SettingsInfo_Quality_C.InitializeValue");

	USettingsInfo_Quality_C_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsInfo_Quality.SettingsInfo_Quality_C.ExecuteUbergraph_SettingsInfo_Quality
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsInfo_Quality_C::ExecuteUbergraph_SettingsInfo_Quality(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Quality.SettingsInfo_Quality_C.ExecuteUbergraph_SettingsInfo_Quality");

	USettingsInfo_Quality_C_ExecuteUbergraph_SettingsInfo_Quality_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
