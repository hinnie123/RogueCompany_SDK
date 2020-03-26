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

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Combo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Gamepad_Key                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKey*                   Combo_Key                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Dirtied                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsBinding_C::Set_Desired_Gamepad_Combo(struct FKey* Gamepad_Key, struct FKey* Combo_Key, bool* Dirtied)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Combo");

	UWBP_SettingsBinding_C_Set_Desired_Gamepad_Combo_Params params;
	params.Gamepad_Key = Gamepad_Key;
	params.Combo_Key = Combo_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dirtied != nullptr)
		*Dirtied = params.Dirtied;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Combo Key
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (Parm, OutParm)

void UWBP_SettingsBinding_C::Get_Dirty_Combo_Key(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Combo Key");

	UWBP_SettingsBinding_C_Get_Dirty_Combo_Key_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* Input_State                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsBinding_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* Input_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputStateChanged");

	UWBP_SettingsBinding_C_OnInputStateChanged_Params params;
	params.Input_State = Input_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.CanGamepadNavigate
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_SettingsBinding_C::CanGamepadNavigate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.CanGamepadNavigate");

	UWBP_SettingsBinding_C_CanGamepadNavigate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.DisableUnbindableKeybinds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSSettingsInfo_Binding** Binding_Settings_Info          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsBinding_C::DisableUnbindableKeybinds(class UKSSettingsInfo_Binding** Binding_Settings_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.DisableUnbindableKeybinds");

	UWBP_SettingsBinding_C_DisableUnbindableKeybinds_Params params;
	params.Binding_Settings_Info = Binding_Settings_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_SettingsBinding_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.NavigateBack");

	UWBP_SettingsBinding_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Key
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Dirtied                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsBinding_C::Set_Desired_Gamepad_Key(struct FKey* Key, bool* Dirtied)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Key");

	UWBP_SettingsBinding_C_Set_Desired_Gamepad_Key_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dirtied != nullptr)
		*Dirtied = params.Dirtied;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Secondary Key
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Dirtied                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsBinding_C::Set_Desired_Secondary_Key(struct FKey* Key, bool* Dirtied)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Secondary Key");

	UWBP_SettingsBinding_C_Set_Desired_Secondary_Key_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dirtied != nullptr)
		*Dirtied = params.Dirtied;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Primary Key
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Dirtied                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsBinding_C::Set_Desired_Primary_Key(struct FKey* Key, bool* Dirtied)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Primary Key");

	UWBP_SettingsBinding_C_Set_Desired_Primary_Key_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dirtied != nullptr)
		*Dirtied = params.Dirtied;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Gamepad Key
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (Parm, OutParm)

void UWBP_SettingsBinding_C::Get_Dirty_Gamepad_Key(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Gamepad Key");

	UWBP_SettingsBinding_C_Get_Dirty_Gamepad_Key_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Secondary Key
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (Parm, OutParm)

void UWBP_SettingsBinding_C::Get_Dirty_Secondary_Key(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Secondary Key");

	UWBP_SettingsBinding_C_Get_Dirty_Secondary_Key_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Primary Key
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (Parm, OutParm)

void UWBP_SettingsBinding_C::Get_Dirty_Primary_Key(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Primary Key");

	UWBP_SettingsBinding_C_Get_Dirty_Primary_Key_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeysForBindingDisplays
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsBinding_C::SetKeysForBindingDisplays()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeysForBindingDisplays");

	UWBP_SettingsBinding_C_SetKeysForBindingDisplays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForGamepadBindingDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsBinding_C::SetKeyForGamepadBindingDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForGamepadBindingDisplay");

	UWBP_SettingsBinding_C_SetKeyForGamepadBindingDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForSecondaryBindingDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsBinding_C::SetKeyForSecondaryBindingDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForSecondaryBindingDisplay");

	UWBP_SettingsBinding_C_SetKeyForSecondaryBindingDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForPrimaryBindingDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsBinding_C::SetKeyForPrimaryBindingDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForPrimaryBindingDisplay");

	UWBP_SettingsBinding_C_SetKeyForPrimaryBindingDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnWidgetSettingsInfoSet
// (Event, Protected, BlueprintEvent)

void UWBP_SettingsBinding_C::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnWidgetSettingsInfoSet");

	UWBP_SettingsBinding_C_OnWidgetSettingsInfoSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.On Key Binding Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Changed_Externally             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsBinding_C::On_Key_Binding_Changed(bool* Changed_Externally)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.On Key Binding Changed");

	UWBP_SettingsBinding_C_On_Key_Binding_Changed_Params params;
	params.Changed_Externally = Changed_Externally;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_SettingsBinding_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadHover");

	UWBP_SettingsBinding_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_SettingsBinding_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadUnhover");

	UWBP_SettingsBinding_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_SettingsBinding_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidgetNavigation");

	UWBP_SettingsBinding_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            Selected_Key                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(struct FInputChord* Selected_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature");

	UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature_Params params;
	params.Selected_Key = Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature");

	UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            Selected_Key                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature(struct FInputChord* Selected_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature");

	UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature_Params params;
	params.Selected_Key = Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature");

	UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            Selected_Key                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature(struct FInputChord* Selected_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature");

	UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature_Params params;
	params.Selected_Key = Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsBinding_C::BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature");

	UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateDownFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsBinding_C::FocusGroupNavigateDownFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateDownFailure");

	UWBP_SettingsBinding_C_FocusGroupNavigateDownFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateUpFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsBinding_C::FocusGroupNavigateUpFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateUpFailure");

	UWBP_SettingsBinding_C_FocusGroupNavigateUpFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsBinding_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidget");

	UWBP_SettingsBinding_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.StopCapturingCombo
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsBinding_C::StopCapturingCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.StopCapturingCombo");

	UWBP_SettingsBinding_C_StopCapturingCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.StartCapturingCombo
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsBinding_C::StartCapturingCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.StartCapturingCombo");

	UWBP_SettingsBinding_C_StartCapturingCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Succeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord*            Combo_Key                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SettingsBinding_C::Combo_Succeed(struct FInputChord* Combo_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Succeed");

	UWBP_SettingsBinding_C_Combo_Succeed_Params params;
	params.Combo_Key = Combo_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Failed
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsBinding_C::Combo_Failed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Failed");

	UWBP_SettingsBinding_C_Combo_Failed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputAttached
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bGamepadAttached               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMouseAttached                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsBinding_C::OnInputAttached(bool* bGamepadAttached, bool* bMouseAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputAttached");

	UWBP_SettingsBinding_C_OnInputAttached_Params params;
	params.bGamepadAttached = bGamepadAttached;
	params.bMouseAttached = bMouseAttached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsBinding.WBP_SettingsBinding_C.ExecuteUbergraph_WBP_SettingsBinding
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsBinding_C::ExecuteUbergraph_WBP_SettingsBinding(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsBinding.WBP_SettingsBinding_C.ExecuteUbergraph_WBP_SettingsBinding");

	UWBP_SettingsBinding_C_ExecuteUbergraph_WBP_SettingsBinding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
