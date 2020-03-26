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

// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_InputKeySelector_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeyUp");

	UWBP_InputKeySelector_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorHoverSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_InputKeySelector_C::InputKeySelectorHoverSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorHoverSFX");

	UWBP_InputKeySelector_C_InputKeySelectorHoverSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorClickSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_InputKeySelector_C::InputKeySelectorClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorClickSFX");

	UWBP_InputKeySelector_C_InputKeySelectorClickSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorInputSelectedSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_InputKeySelector_C::InputKeySelectorInputSelectedSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.InputKeySelectorInputSelectedSFX");

	UWBP_InputKeySelector_C_InputKeySelectorInputSelectedSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InputKeySelector_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.Construct");

	UWBP_InputKeySelector_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FInputChord*            SelectedKey                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InputKeySelector_C::BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature");

	UWBP_InputKeySelector_C_BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature
// (BlueprintEvent)

void UWBP_InputKeySelector_C::BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature");

	UWBP_InputKeySelector_C_BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_InputKeySelector_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadHover");

	UWBP_InputKeySelector_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_InputKeySelector_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.GamepadUnhover");

	UWBP_InputKeySelector_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.Set Selected Key
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord*            Selected_Key                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InputKeySelector_C::Set_Selected_Key(struct FInputChord* Selected_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.Set Selected Key");

	UWBP_InputKeySelector_C_Set_Selected_Key_Params params;
	params.Selected_Key = Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_InputKeySelector_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseEnter");

	UWBP_InputKeySelector_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_InputKeySelector_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnMouseLeave");

	UWBP_InputKeySelector_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputKeySelector_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.InitializeWidget");

	UWBP_InputKeySelector_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetDisabledText
// (BlueprintCallable, BlueprintEvent)

void UWBP_InputKeySelector_C::SetDisabledText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetDisabledText");

	UWBP_InputKeySelector_C_SetDisabledText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetComboGamepadKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord*            Selected_Key                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInputChord*            Selected_Combo_Key             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InputKeySelector_C::SetComboGamepadKey(struct FInputChord* Selected_Key, struct FInputChord* Selected_Combo_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.SetComboGamepadKey");

	UWBP_InputKeySelector_C_SetComboGamepadKey_Params params;
	params.Selected_Key = Selected_Key;
	params.Selected_Combo_Key = Selected_Combo_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.Capture Combo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCapture                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputKeySelector_C::Capture_Combo(bool* bCapture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.Capture Combo");

	UWBP_InputKeySelector_C_Capture_Combo_Params params;
	params.bCapture = bCapture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.TabRight
// (BlueprintCallable, BlueprintEvent)

void UWBP_InputKeySelector_C::TabRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.TabRight");

	UWBP_InputKeySelector_C_TabRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.ExecuteUbergraph_WBP_InputKeySelector
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputKeySelector_C::ExecuteUbergraph_WBP_InputKeySelector(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.ExecuteUbergraph_WBP_InputKeySelector");

	UWBP_InputKeySelector_C_ExecuteUbergraph_WBP_InputKeySelector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnComboKeySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord*            Combo_Key                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InputKeySelector_C::OnComboKeySelected__DelegateSignature(struct FInputChord* Combo_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnComboKeySelected__DelegateSignature");

	UWBP_InputKeySelector_C_OnComboKeySelected__DelegateSignature_Params params;
	params.Combo_Key = Combo_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_InputKeySelector_C::OnIsSelectingKeyChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnIsSelectingKeyChanged__DelegateSignature");

	UWBP_InputKeySelector_C_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputChord*            Selected_Key                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InputKeySelector_C::OnKeySelected__DelegateSignature(struct FInputChord* Selected_Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputKeySelector.WBP_InputKeySelector_C.OnKeySelected__DelegateSignature");

	UWBP_InputKeySelector_C_OnKeySelected__DelegateSignature_Params params;
	params.Selected_Key = Selected_Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
