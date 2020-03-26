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

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Left
struct UWBP_SettingsSlider_C_Step_Left_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step
struct UWBP_SettingsSlider_C_Step_Params
{
	float*                                             Multiplier;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Right
struct UWBP_SettingsSlider_C_Step_Right_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Display Text
struct UWBP_SettingsSlider_C_Set_Display_Text_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Desired Value
struct UWBP_SettingsSlider_C_Set_Desired_Value_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Position Slider To Value
struct UWBP_SettingsSlider_C_Position_Slider_To_Value_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Slider To Value
struct UWBP_SettingsSlider_C_Slider_To_Value_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMaxSliderValue
struct UWBP_SettingsSlider_C_GetMaxSliderValue_Params
{
	float                                              Max_Value;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMinSliderValue
struct UWBP_SettingsSlider_C_GetMinSliderValue_Params
{
	float                                              Min_Value;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Value To Slider
struct UWBP_SettingsSlider_C_Value_To_Slider_Params
{
	float                                              Slider_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Get Dirty Value
struct UWBP_SettingsSlider_C_Get_Dirty_Value_Params
{
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Construct
struct UWBP_SettingsSlider_C_Construct_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Tick
struct UWBP_SettingsSlider_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_SettingsSlider_C_BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnWidgetSettingsInfoSet
struct UWBP_SettingsSlider_C_OnWidgetSettingsInfoSet_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.On Value Changed
struct UWBP_SettingsSlider_C_On_Value_Changed_Params
{
	bool*                                              Changed_Externally;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseEnter
struct UWBP_SettingsSlider_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseLeave
struct UWBP_SettingsSlider_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadHover
struct UWBP_SettingsSlider_C_GamepadHover_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadUnhover
struct UWBP_SettingsSlider_C_GamepadUnhover_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateLeftFailure
struct UWBP_SettingsSlider_C_NavigateLeftFailure_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateRightFailure
struct UWBP_SettingsSlider_C_NavigateRightFailure_Params
{
};

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.ExecuteUbergraph_WBP_SettingsSlider
struct UWBP_SettingsSlider_C_ExecuteUbergraph_WBP_SettingsSlider_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
