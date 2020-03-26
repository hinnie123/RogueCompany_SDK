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

// Function DropdownList.DropdownList_C.NavigateBack
struct UDropdownList_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DropdownList.DropdownList_C.InitializeWidget
struct UDropdownList_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropdownList.DropdownList_C.Selection
struct UDropdownList_C_Selection_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function DropdownList.DropdownList_C.OnMouseLeave
struct UDropdownList_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DropdownList.DropdownList_C.InitializeWidgetNavigation
struct UDropdownList_C_InitializeWidgetNavigation_Params
{
};

// Function DropdownList.DropdownList_C.HandleOnHover
struct UDropdownList_C_HandleOnHover_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function DropdownList.DropdownList_C.ExecuteUbergraph_DropdownList
struct UDropdownList_C_ExecuteUbergraph_DropdownList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DropdownList.DropdownList_C.OnCancel__DelegateSignature
struct UDropdownList_C_OnCancel__DelegateSignature_Params
{
};

// Function DropdownList.DropdownList_C.OnSelection__DelegateSignature
struct UDropdownList_C_OnSelection__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
