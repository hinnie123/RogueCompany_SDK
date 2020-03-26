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

// Function Dropdown.Dropdown_C.IsSelecting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSelecting                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDropdown_C::IsSelecting(bool* IsSelecting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.IsSelecting");

	UDropdown_C_IsSelecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSelecting != nullptr)
		*IsSelecting = params.IsSelecting;
}


// Function Dropdown.Dropdown_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDropdown_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.NavigateConfirm");

	UDropdown_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dropdown.Dropdown_C.AppendOptions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           OptionsToAppend                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDropdown_C::AppendOptions(TArray<struct FText>* OptionsToAppend)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.AppendOptions");

	UDropdown_C_AppendOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionsToAppend != nullptr)
		*OptionsToAppend = params.OptionsToAppend;
}


// Function Dropdown.Dropdown_C.ForceClose
// (Public, BlueprintCallable, BlueprintEvent)

void UDropdown_C::ForceClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.ForceClose");

	UDropdown_C_ForceClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.ForceToggle
// (Public, BlueprintCallable, BlueprintEvent)

void UDropdown_C::ForceToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.ForceToggle");

	UDropdown_C_ForceToggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.ForceOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UDropdown_C::ForceOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.ForceOpen");

	UDropdown_C_ForceOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.InitializeDropdownList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UDropdown_C::InitializeDropdownList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.InitializeDropdownList");

	UDropdown_C_InitializeDropdownList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dropdown.Dropdown_C.SetSelectedOptionByIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDropdown_C::SetSelectedOptionByIndex(int* Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.SetSelectedOptionByIndex");

	UDropdown_C_SetSelectedOptionByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Dropdown.Dropdown_C.SetSelectedOptionByText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDropdown_C::SetSelectedOptionByText(struct FText* Text, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.SetSelectedOptionByText");

	UDropdown_C_SetSelectedOptionByText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Dropdown.Dropdown_C.RemoveOptionByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDropdown_C::RemoveOptionByIndex(int* Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.RemoveOptionByIndex");

	UDropdown_C_RemoveOptionByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Dropdown.Dropdown_C.RemoveOptionByText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Option                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDropdown_C::RemoveOptionByText(struct FText* Option, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.RemoveOptionByText");

	UDropdown_C_RemoveOptionByText_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Dropdown.Dropdown_C.GetSelectedOption
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Selection                      (Parm, OutParm)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDropdown_C::GetSelectedOption(struct FText* Selection, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.GetSelectedOption");

	UDropdown_C_GetSelectedOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selection != nullptr)
		*Selection = params.Selection;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function Dropdown.Dropdown_C.GetOptionCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDropdown_C::GetOptionCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.GetOptionCount");

	UDropdown_C_GetOptionCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function Dropdown.Dropdown_C.FindIndexForOption
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Option                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDropdown_C::FindIndexForOption(struct FText* Option, bool* Success, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.FindIndexForOption");

	UDropdown_C_FindIndexForOption_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Index != nullptr)
		*Index = params.Index;
}


// Function Dropdown.Dropdown_C.FindOptionByIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Option                         (Parm, OutParm)

void UDropdown_C::FindOptionByIndex(int* Index, bool* Success, struct FText* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.FindOptionByIndex");

	UDropdown_C_FindOptionByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Option != nullptr)
		*Option = params.Option;
}


// Function Dropdown.Dropdown_C.ClearSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UDropdown_C::ClearSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.ClearSelection");

	UDropdown_C_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.ClearOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UDropdown_C::ClearOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.ClearOptions");

	UDropdown_C_ClearOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.AddOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  OptionText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UDropdown_C::AddOption(struct FText* OptionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.AddOption");

	UDropdown_C_AddOption_Params params;
	params.OptionText = OptionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDropdown_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UDropdown_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.SelectionMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Selection                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UDropdown_C::SelectionMade(int* Index, struct FText* Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.SelectionMade");

	UDropdown_C_SelectionMade_Params params;
	params.Index = Index;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDropdown_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UDropdown_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.SelectionCancel
// (BlueprintCallable, BlueprintEvent)

void UDropdown_C::SelectionCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.SelectionCancel");

	UDropdown_C_SelectionCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropdown_C::BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool* bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	UDropdown_C_BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.HandleSetCurrentHoverIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrentHoverIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropdown_C::HandleSetCurrentHoverIndex(int* CurrentHoverIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.HandleSetCurrentHoverIndex");

	UDropdown_C_HandleSetCurrentHoverIndex_Params params;
	params.CurrentHoverIndex = CurrentHoverIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDropdown_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UDropdown_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UDropdown_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.GamepadHover");

	UDropdown_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UDropdown_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.GamepadUnhover");

	UDropdown_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.On Selected
// (BlueprintCallable, BlueprintEvent)

void UDropdown_C::On_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.On Selected");

	UDropdown_C_On_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.Hover
// (BlueprintCallable, BlueprintEvent)

void UDropdown_C::Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.Hover");

	UDropdown_C_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.Unhover
// (BlueprintCallable, BlueprintEvent)

void UDropdown_C::Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.Unhover");

	UDropdown_C_Unhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.ExecuteUbergraph_Dropdown
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropdown_C::ExecuteUbergraph_Dropdown(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.ExecuteUbergraph_Dropdown");

	UDropdown_C_ExecuteUbergraph_Dropdown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dropdown.Dropdown_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  SelectionText                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           SelectionIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropdown_C::OnSelectionChanged__DelegateSignature(struct FText* SelectionText, int* SelectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dropdown.Dropdown_C.OnSelectionChanged__DelegateSignature");

	UDropdown_C_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectionText = SelectionText;
	params.SelectionIndex = SelectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
