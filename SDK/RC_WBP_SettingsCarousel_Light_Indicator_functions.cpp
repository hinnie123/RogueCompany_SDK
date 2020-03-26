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

// Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Light Up
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsCarousel_Light_Indicator_C::Light_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Light Up");

	UWBP_SettingsCarousel_Light_Indicator_C_Light_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Dim Light
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsCarousel_Light_Indicator_C::Dim_Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Dim Light");

	UWBP_SettingsCarousel_Light_Indicator_C_Dim_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Toggle Lit Up
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsCarousel_Light_Indicator_C::Toggle_Lit_Up()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.Toggle Lit Up");

	UWBP_SettingsCarousel_Light_Indicator_C_Toggle_Lit_Up_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.ExecuteUbergraph_WBP_SettingsCarousel_Light_Indicator
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsCarousel_Light_Indicator_C::ExecuteUbergraph_WBP_SettingsCarousel_Light_Indicator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C.ExecuteUbergraph_WBP_SettingsCarousel_Light_Indicator");

	UWBP_SettingsCarousel_Light_Indicator_C_ExecuteUbergraph_WBP_SettingsCarousel_Light_Indicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
