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

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeyUp
struct UWBP_InputKeySelector_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorHoverSFX
struct UWBP_InputKeySelector_C_InputKeySelectorHoverSFX_Params
{
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorClickSFX
struct UWBP_InputKeySelector_C_InputKeySelectorClickSFX_Params
{
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorInputSelectedSFX
struct UWBP_InputKeySelector_C_InputKeySelectorInputSelectedSFX_Params
{
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.Construct
struct UWBP_InputKeySelector_C_Construct_Params
{
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
struct UWBP_InputKeySelector_C_BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                SelectedKey;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature
struct UWBP_InputKeySelector_C_BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadHover
struct UWBP_InputKeySelector_C_GamepadHover_Params
{
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadUnhover
struct UWBP_InputKeySelector_C_GamepadUnhover_Params
{
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.Set Selected Key
struct UWBP_InputKeySelector_C_Set_Selected_Key_Params
{
	struct FInputChord*                                Selected_Key;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseEnter
struct UWBP_InputKeySelector_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseLeave
struct UWBP_InputKeySelector_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.InitializeWidget
struct UWBP_InputKeySelector_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetDisabledText
struct UWBP_InputKeySelector_C_SetDisabledText_Params
{
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetComboGamepadKey
struct UWBP_InputKeySelector_C_SetComboGamepadKey_Params
{
	struct FInputChord*                                Selected_Key;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInputChord*                                Selected_Combo_Key;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.Capture Combo
struct UWBP_InputKeySelector_C_Capture_Combo_Params
{
	bool*                                              bCapture;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.TabRight
struct UWBP_InputKeySelector_C_TabRight_Params
{
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.ExecuteUbergraph_WBP_InputKeySelector
struct UWBP_InputKeySelector_C_ExecuteUbergraph_WBP_InputKeySelector_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnComboKeySelected__DelegateSignature
struct UWBP_InputKeySelector_C_OnComboKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                Combo_Key;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature
struct UWBP_InputKeySelector_C_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeySelected__DelegateSignature
struct UWBP_InputKeySelector_C_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord*                                Selected_Key;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
