#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Combo
struct UWBP_SettingsBinding_C_Set_Desired_Gamepad_Combo_Params
{
	struct FKey*                                       Gamepad_Key;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKey*                                       Combo_Key;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Dirtied;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Combo Key
struct UWBP_SettingsBinding_C_Get_Dirty_Combo_Key_Params
{
	struct FKey                                        Key;                                                      // (Parm, OutParm)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputStateChanged
struct UWBP_SettingsBinding_C_OnInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   Input_State;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.CanGamepadNavigate
struct UWBP_SettingsBinding_C_CanGamepadNavigate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.DisableUnbindableKeybinds
struct UWBP_SettingsBinding_C_DisableUnbindableKeybinds_Params
{
	class UKSSettingsInfo_Binding**                    Binding_Settings_Info;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.NavigateBack
struct UWBP_SettingsBinding_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Gamepad Key
struct UWBP_SettingsBinding_C_Set_Desired_Gamepad_Key_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Dirtied;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Secondary Key
struct UWBP_SettingsBinding_C_Set_Desired_Secondary_Key_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Dirtied;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Set Desired Primary Key
struct UWBP_SettingsBinding_C_Set_Desired_Primary_Key_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Dirtied;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Gamepad Key
struct UWBP_SettingsBinding_C_Get_Dirty_Gamepad_Key_Params
{
	struct FKey                                        Key;                                                      // (Parm, OutParm)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Secondary Key
struct UWBP_SettingsBinding_C_Get_Dirty_Secondary_Key_Params
{
	struct FKey                                        Key;                                                      // (Parm, OutParm)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Get Dirty Primary Key
struct UWBP_SettingsBinding_C_Get_Dirty_Primary_Key_Params
{
	struct FKey                                        Key;                                                      // (Parm, OutParm)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeysForBindingDisplays
struct UWBP_SettingsBinding_C_SetKeysForBindingDisplays_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForGamepadBindingDisplay
struct UWBP_SettingsBinding_C_SetKeyForGamepadBindingDisplay_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForSecondaryBindingDisplay
struct UWBP_SettingsBinding_C_SetKeyForSecondaryBindingDisplay_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.SetKeyForPrimaryBindingDisplay
struct UWBP_SettingsBinding_C_SetKeyForPrimaryBindingDisplay_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnWidgetSettingsInfoSet
struct UWBP_SettingsBinding_C_OnWidgetSettingsInfoSet_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.On Key Binding Changed
struct UWBP_SettingsBinding_C_On_Key_Binding_Changed_Params
{
	bool*                                              Changed_Externally;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadHover
struct UWBP_SettingsBinding_C_GamepadHover_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.GamepadUnhover
struct UWBP_SettingsBinding_C_GamepadUnhover_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidgetNavigation
struct UWBP_SettingsBinding_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature
struct UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                Selected_Key;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature
struct UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature
struct UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                Selected_Key;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature
struct UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature
struct UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                Selected_Key;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature
struct UWBP_SettingsBinding_C_BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateDownFailure
struct UWBP_SettingsBinding_C_FocusGroupNavigateDownFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.FocusGroupNavigateUpFailure
struct UWBP_SettingsBinding_C_FocusGroupNavigateUpFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.InitializeWidget
struct UWBP_SettingsBinding_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.StopCapturingCombo
struct UWBP_SettingsBinding_C_StopCapturingCombo_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.StartCapturingCombo
struct UWBP_SettingsBinding_C_StartCapturingCombo_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Succeed
struct UWBP_SettingsBinding_C_Combo_Succeed_Params
{
	struct FInputChord*                                Combo_Key;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.Combo Failed
struct UWBP_SettingsBinding_C_Combo_Failed_Params
{
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.OnInputAttached
struct UWBP_SettingsBinding_C_OnInputAttached_Params
{
	bool*                                              bGamepadAttached;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bMouseAttached;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsBinding.WBP_SettingsBinding_C.ExecuteUbergraph_WBP_SettingsBinding
struct UWBP_SettingsBinding_C_ExecuteUbergraph_WBP_SettingsBinding_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
