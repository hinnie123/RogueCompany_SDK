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

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_SettingsRadioButtonGroup_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.NavigateBack");

	UWBP_SettingsRadioButtonGroup_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Selection To Index
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsRadioButtonGroup_C::Set_Selection_To_Index(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Selection To Index");

	UWBP_SettingsRadioButtonGroup_C_Set_Selection_To_Index_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Get Dirty Index
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsRadioButtonGroup_C::Get_Dirty_Index(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Get Dirty Index");

	UWBP_SettingsRadioButtonGroup_C_Get_Dirty_Index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Desired Index
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsRadioButtonGroup_C::Set_Desired_Index(int* Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Desired Index");

	UWBP_SettingsRadioButtonGroup_C_Set_Desired_Index_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.OnWidgetSettingsInfoSet
// (Event, Protected, BlueprintEvent)

void UWBP_SettingsRadioButtonGroup_C::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.OnWidgetSettingsInfoSet");

	UWBP_SettingsRadioButtonGroup_C_OnWidgetSettingsInfoSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Radio Button Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_SettingsRadio_C**   Radio_Button                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsRadioButtonGroup_C::On_Radio_Button_Clicked(class UWBP_SettingsRadio_C** Radio_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Radio Button Clicked");

	UWBP_SettingsRadioButtonGroup_C_On_Radio_Button_Clicked_Params params;
	params.Radio_Button = Radio_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Setting Value Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bChangedExternally             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsRadioButtonGroup_C::On_Setting_Value_Changed(bool* bChangedExternally)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Setting Value Changed");

	UWBP_SettingsRadioButtonGroup_C_On_Setting_Value_Changed_Params params;
	params.bChangedExternally = bChangedExternally;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_SettingsRadioButtonGroup_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.GamepadHover");

	UWBP_SettingsRadioButtonGroup_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_SettingsRadioButtonGroup_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.InitializeWidgetNavigation");

	UWBP_SettingsRadioButtonGroup_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateDownFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsRadioButtonGroup_C::FocusGroupNavigateDownFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateDownFailure");

	UWBP_SettingsRadioButtonGroup_C_FocusGroupNavigateDownFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateUpFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsRadioButtonGroup_C::FocusGroupNavigateUpFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateUpFailure");

	UWBP_SettingsRadioButtonGroup_C_FocusGroupNavigateUpFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.ExecuteUbergraph_WBP_SettingsRadioButtonGroup
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsRadioButtonGroup_C::ExecuteUbergraph_WBP_SettingsRadioButtonGroup(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.ExecuteUbergraph_WBP_SettingsRadioButtonGroup");

	UWBP_SettingsRadioButtonGroup_C_ExecuteUbergraph_WBP_SettingsRadioButtonGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
