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

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_SettingsDropdown_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateBack");

	UWBP_SettingsDropdown_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirmPressed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_SettingsDropdown_C::NavigateConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirmPressed");

	UWBP_SettingsDropdown_C_NavigateConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_SettingsDropdown_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirm");

	UWBP_SettingsDropdown_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SetDesiredIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsDropdown_C::SetDesiredIndex(int* Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SetDesiredIndex");

	UWBP_SettingsDropdown_C_SetDesiredIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GetDirtyIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsDropdown_C::GetDirtyIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GetDirtyIndex");

	UWBP_SettingsDropdown_C_GetDirtyIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Set Text To Index
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsDropdown_C::Set_Text_To_Index(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Set Text To Index");

	UWBP_SettingsDropdown_C_Set_Text_To_Index_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.OnWidgetSettingsInfoSet
// (Event, Protected, BlueprintEvent)

void UWBP_SettingsDropdown_C::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.OnWidgetSettingsInfoSet");

	UWBP_SettingsDropdown_C_OnWidgetSettingsInfoSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Selection Made
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsDropdown_C::Selection_Made(struct FText* Text, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Selection Made");

	UWBP_SettingsDropdown_C_Selection_Made_Params params;
	params.Text = Text;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Set Text To Current Index
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Changed_Externally             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsDropdown_C::Set_Text_To_Current_Index(bool* Changed_Externally)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Set Text To Current Index");

	UWBP_SettingsDropdown_C_Set_Text_To_Current_Index_Params params;
	params.Changed_Externally = Changed_Externally;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsDropdown_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidget");

	UWBP_SettingsDropdown_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_SettingsDropdown_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GamepadHover");

	UWBP_SettingsDropdown_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_SettingsDropdown_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidgetNavigation");

	UWBP_SettingsDropdown_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateDownFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsDropdown_C::FocusGroupNavigateDownFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateDownFailure");

	UWBP_SettingsDropdown_C_FocusGroupNavigateDownFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateUpFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsDropdown_C::FocusGroupNavigateUpFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateUpFailure");

	UWBP_SettingsDropdown_C_FocusGroupNavigateUpFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.ExecuteUbergraph_WBP_SettingsDropdown
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsDropdown_C::ExecuteUbergraph_WBP_SettingsDropdown(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.ExecuteUbergraph_WBP_SettingsDropdown");

	UWBP_SettingsDropdown_C_ExecuteUbergraph_WBP_SettingsDropdown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
