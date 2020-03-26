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

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.NavigateBack
struct UWBP_SettingsRadioButtonGroup_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Selection To Index
struct UWBP_SettingsRadioButtonGroup_C_Set_Selection_To_Index_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Get Dirty Index
struct UWBP_SettingsRadioButtonGroup_C_Get_Dirty_Index_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.Set Desired Index
struct UWBP_SettingsRadioButtonGroup_C_Set_Desired_Index_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.OnWidgetSettingsInfoSet
struct UWBP_SettingsRadioButtonGroup_C_OnWidgetSettingsInfoSet_Params
{
};

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Radio Button Clicked
struct UWBP_SettingsRadioButtonGroup_C_On_Radio_Button_Clicked_Params
{
	class UWBP_SettingsRadio_C**                       Radio_Button;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.On Setting Value Changed
struct UWBP_SettingsRadioButtonGroup_C_On_Setting_Value_Changed_Params
{
	bool*                                              bChangedExternally;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.GamepadHover
struct UWBP_SettingsRadioButtonGroup_C_GamepadHover_Params
{
};

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.InitializeWidgetNavigation
struct UWBP_SettingsRadioButtonGroup_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateDownFailure
struct UWBP_SettingsRadioButtonGroup_C_FocusGroupNavigateDownFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.FocusGroupNavigateUpFailure
struct UWBP_SettingsRadioButtonGroup_C_FocusGroupNavigateUpFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsRadioButtonGroup.WBP_SettingsRadioButtonGroup_C.ExecuteUbergraph_WBP_SettingsRadioButtonGroup
struct UWBP_SettingsRadioButtonGroup_C_ExecuteUbergraph_WBP_SettingsRadioButtonGroup_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
