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

// Function Dropdown.Dropdown_C.IsSelecting
struct UDropdown_C_IsSelecting_Params
{
	bool                                               IsSelecting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dropdown.Dropdown_C.NavigateConfirm
struct UDropdown_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Dropdown.Dropdown_C.AppendOptions
struct UDropdown_C_AppendOptions_Params
{
	TArray<struct FText>                               OptionsToAppend;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Dropdown.Dropdown_C.ForceClose
struct UDropdown_C_ForceClose_Params
{
};

// Function Dropdown.Dropdown_C.ForceToggle
struct UDropdown_C_ForceToggle_Params
{
};

// Function Dropdown.Dropdown_C.ForceOpen
struct UDropdown_C_ForceOpen_Params
{
};

// Function Dropdown.Dropdown_C.InitializeDropdownList
struct UDropdown_C_InitializeDropdownList_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Dropdown.Dropdown_C.SetSelectedOptionByIndex
struct UDropdown_C_SetSelectedOptionByIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dropdown.Dropdown_C.SetSelectedOptionByText
struct UDropdown_C_SetSelectedOptionByText_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dropdown.Dropdown_C.RemoveOptionByIndex
struct UDropdown_C_RemoveOptionByIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dropdown.Dropdown_C.RemoveOptionByText
struct UDropdown_C_RemoveOptionByText_Params
{
	struct FText*                                      Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dropdown.Dropdown_C.GetSelectedOption
struct UDropdown_C_GetSelectedOption_Params
{
	struct FText                                       Selection;                                                // (Parm, OutParm)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dropdown.Dropdown_C.GetOptionCount
struct UDropdown_C_GetOptionCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dropdown.Dropdown_C.FindIndexForOption
struct UDropdown_C_FindIndexForOption_Params
{
	struct FText*                                      Option;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dropdown.Dropdown_C.FindOptionByIndex
struct UDropdown_C_FindOptionByIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Option;                                                   // (Parm, OutParm)
};

// Function Dropdown.Dropdown_C.ClearSelection
struct UDropdown_C_ClearSelection_Params
{
};

// Function Dropdown.Dropdown_C.ClearOptions
struct UDropdown_C_ClearOptions_Params
{
};

// Function Dropdown.Dropdown_C.AddOption
struct UDropdown_C_AddOption_Params
{
	struct FText*                                      OptionText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UDropdown_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Dropdown.Dropdown_C.SelectionMade
struct UDropdown_C_SelectionMade_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct UDropdown_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Dropdown.Dropdown_C.SelectionCancel
struct UDropdown_C_SelectionCancel_Params
{
};

// Function Dropdown.Dropdown_C.BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
struct UDropdown_C_BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool*                                              bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dropdown.Dropdown_C.HandleSetCurrentHoverIndex
struct UDropdown_C_HandleSetCurrentHoverIndex_Params
{
	int*                                               CurrentHoverIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UDropdown_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function Dropdown.Dropdown_C.GamepadHover
struct UDropdown_C_GamepadHover_Params
{
};

// Function Dropdown.Dropdown_C.GamepadUnhover
struct UDropdown_C_GamepadUnhover_Params
{
};

// Function Dropdown.Dropdown_C.On Selected
struct UDropdown_C_On_Selected_Params
{
};

// Function Dropdown.Dropdown_C.Hover
struct UDropdown_C_Hover_Params
{
};

// Function Dropdown.Dropdown_C.Unhover
struct UDropdown_C_Unhover_Params
{
};

// Function Dropdown.Dropdown_C.ExecuteUbergraph_Dropdown
struct UDropdown_C_ExecuteUbergraph_Dropdown_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dropdown.Dropdown_C.OnSelectionChanged__DelegateSignature
struct UDropdown_C_OnSelectionChanged__DelegateSignature_Params
{
	struct FText*                                      SelectionText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               SelectionIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
