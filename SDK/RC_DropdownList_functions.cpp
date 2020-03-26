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

// Function DropdownList.DropdownList_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDropdownList_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownList.DropdownList_C.NavigateBack");

	UDropdownList_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DropdownList.DropdownList_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropdownList_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownList.DropdownList_C.InitializeWidget");

	UDropdownList_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownList.DropdownList_C.Selection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UDropdownList_C::Selection(int* Index, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownList.DropdownList_C.Selection");

	UDropdownList_C_Selection_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownList.DropdownList_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDropdownList_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownList.DropdownList_C.OnMouseLeave");

	UDropdownList_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownList.DropdownList_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UDropdownList_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownList.DropdownList_C.InitializeWidgetNavigation");

	UDropdownList_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownList.DropdownList_C.HandleOnHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDropdownList_C::HandleOnHover(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownList.DropdownList_C.HandleOnHover");

	UDropdownList_C_HandleOnHover_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownList.DropdownList_C.ExecuteUbergraph_DropdownList
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropdownList_C::ExecuteUbergraph_DropdownList(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownList.DropdownList_C.ExecuteUbergraph_DropdownList");

	UDropdownList_C_ExecuteUbergraph_DropdownList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownList.DropdownList_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDropdownList_C::OnCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownList.DropdownList_C.OnCancel__DelegateSignature");

	UDropdownList_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownList.DropdownList_C.OnSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UDropdownList_C::OnSelection__DelegateSignature(int* Index, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownList.DropdownList_C.OnSelection__DelegateSignature");

	UDropdownList_C_OnSelection__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
