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

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateBack
struct UWBP_SettingsDropdown_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirmPressed
struct UWBP_SettingsDropdown_C_NavigateConfirmPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.NavigateConfirm
struct UWBP_SettingsDropdown_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.SetDesiredIndex
struct UWBP_SettingsDropdown_C_SetDesiredIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GetDirtyIndex
struct UWBP_SettingsDropdown_C_GetDirtyIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Set Text To Index
struct UWBP_SettingsDropdown_C_Set_Text_To_Index_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.OnWidgetSettingsInfoSet
struct UWBP_SettingsDropdown_C_OnWidgetSettingsInfoSet_Params
{
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Selection Made
struct UWBP_SettingsDropdown_C_Selection_Made_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.Set Text To Current Index
struct UWBP_SettingsDropdown_C_Set_Text_To_Current_Index_Params
{
	bool*                                              Changed_Externally;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidget
struct UWBP_SettingsDropdown_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.GamepadHover
struct UWBP_SettingsDropdown_C_GamepadHover_Params
{
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.InitializeWidgetNavigation
struct UWBP_SettingsDropdown_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateDownFailure
struct UWBP_SettingsDropdown_C_FocusGroupNavigateDownFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.FocusGroupNavigateUpFailure
struct UWBP_SettingsDropdown_C_FocusGroupNavigateUpFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsDropdown.WBP_SettingsDropdown_C.ExecuteUbergraph_WBP_SettingsDropdown
struct UWBP_SettingsDropdown_C_ExecuteUbergraph_WBP_SettingsDropdown_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
