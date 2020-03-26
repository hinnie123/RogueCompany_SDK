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

// Function DropdownEntry.DropdownEntry_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDropdownEntry_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.NavigateConfirm");

	UDropdownEntry_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DropdownEntry.DropdownEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDropdownEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.Construct");

	UDropdownEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDropdownEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UDropdownEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDropdownEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UDropdownEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UDropdownEntry_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UDropdownEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownEntry.DropdownEntry_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UDropdownEntry_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.GamepadHover");

	UDropdownEntry_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownEntry.DropdownEntry_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UDropdownEntry_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.GamepadUnhover");

	UDropdownEntry_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownEntry.DropdownEntry_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UDropdownEntry_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.GamepadConfirm");

	UDropdownEntry_C_GamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownEntry.DropdownEntry_C.ExecuteUbergraph_DropdownEntry
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDropdownEntry_C::ExecuteUbergraph_DropdownEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.ExecuteUbergraph_DropdownEntry");

	UDropdownEntry_C_ExecuteUbergraph_DropdownEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownEntry.DropdownEntry_C.OnOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDropdownEntry_C::OnOptionHovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.OnOptionHovered__DelegateSignature");

	UDropdownEntry_C_OnOptionHovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropdownEntry.DropdownEntry_C.OnOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UDropdownEntry_C::OnOptionSelected__DelegateSignature(int* Index, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropdownEntry.DropdownEntry_C.OnOptionSelected__DelegateSignature");

	UDropdownEntry_C_OnOptionSelected__DelegateSignature_Params params;
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
