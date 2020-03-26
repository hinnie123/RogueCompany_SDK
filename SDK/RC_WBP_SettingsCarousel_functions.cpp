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

// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Make Indicator Lights
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsCarousel_C::Make_Indicator_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Make Indicator Lights");

	UWBP_SettingsCarousel_C_Make_Indicator_Lights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Add Indicator Light
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsCarousel_C::Add_Indicator_Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Add Indicator Light");

	UWBP_SettingsCarousel_C_Add_Indicator_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetAnimationTextToIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsCarousel_C::SetAnimationTextToIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetAnimationTextToIndex");

	UWBP_SettingsCarousel_C_SetAnimationTextToIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDisplayTextToIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsCarousel_C::SetDisplayTextToIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDisplayTextToIndex");

	UWBP_SettingsCarousel_C_SetDisplayTextToIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GetDirtyIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsCarousel_C::GetDirtyIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GetDirtyIndex");

	UWBP_SettingsCarousel_C_GetDirtyIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDesiredIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Desired_Index                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Index_Changed                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsCarousel_C::SetDesiredIndex(int* Desired_Index, bool* Index_Changed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetDesiredIndex");

	UWBP_SettingsCarousel_C_SetDesiredIndex_Params params;
	params.Desired_Index = Desired_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index_Changed != nullptr)
		*Index_Changed = params.Index_Changed;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetTextToIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock**             Text_Widget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsCarousel_C::SetTextToIndex(class UTextBlock** Text_Widget, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SetTextToIndex");

	UWBP_SettingsCarousel_C_SetTextToIndex_Params params;
	params.Text_Widget = Text_Widget;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselHoverSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsCarousel_C::SettingsCarouselHoverSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselHoverSFX");

	UWBP_SettingsCarousel_C_SettingsCarouselHoverSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselClickedSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsCarousel_C::SettingsCarouselClickedSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.SettingsCarouselClickedSFX");

	UWBP_SettingsCarousel_C_SettingsCarouselClickedSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_SettingsCarousel_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadHover");

	UWBP_SettingsCarousel_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_SettingsCarousel_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.GamepadUnhover");

	UWBP_SettingsCarousel_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsCarousel_C::BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UWBP_SettingsCarousel_C_BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsCarousel_C::BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UWBP_SettingsCarousel_C_BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsCarousel_C::BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UWBP_SettingsCarousel_C_BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsCarousel_C::BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UWBP_SettingsCarousel_C_BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Hover
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsCarousel_C::Master_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Hover");

	UWBP_SettingsCarousel_C_Master_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Unhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsCarousel_C::Master_Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Master Unhover");

	UWBP_SettingsCarousel_C_Master_Unhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsCarousel_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.InitializeWidget");

	UWBP_SettingsCarousel_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetSettingsInfoSet
// (Event, Protected, BlueprintEvent)

void UWBP_SettingsCarousel_C::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetSettingsInfoSet");

	UWBP_SettingsCarousel_C_OnWidgetSettingsInfoSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetConfigSet
// (Event, Protected, BlueprintEvent)

void UWBP_SettingsCarousel_C::OnWidgetConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.OnWidgetConfigSet");

	UWBP_SettingsCarousel_C_OnWidgetConfigSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsCarousel_C::BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_SettingsCarousel_C_BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_SettingsCarousel_C::BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWBP_SettingsCarousel_C_BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Set Text To Current Index
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Changed_Externally             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsCarousel_C::Set_Text_To_Current_Index(bool* Changed_Externally)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Set Text To Current Index");

	UWBP_SettingsCarousel_C_Set_Text_To_Current_Index_Params params;
	params.Changed_Externally = Changed_Externally;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Text
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsCarousel_C::Reset_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Text");

	UWBP_SettingsCarousel_C_Reset_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Light
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsCarousel_C::Reset_Indicator_Light()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Light");

	UWBP_SettingsCarousel_C_Reset_Indicator_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsCarousel_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset");

	UWBP_SettingsCarousel_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateRightFailure
// (Event, Public, BlueprintEvent)

void UWBP_SettingsCarousel_C::NavigateRightFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateRightFailure");

	UWBP_SettingsCarousel_C_NavigateRightFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateLeftFailure
// (Event, Public, BlueprintEvent)

void UWBP_SettingsCarousel_C::NavigateLeftFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.NavigateLeftFailure");

	UWBP_SettingsCarousel_C_NavigateLeftFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateDownFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsCarousel_C::FocusGroupNavigateDownFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateDownFailure");

	UWBP_SettingsCarousel_C_FocusGroupNavigateDownFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateUpFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsCarousel_C::FocusGroupNavigateUpFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.FocusGroupNavigateUpFailure");

	UWBP_SettingsCarousel_C_FocusGroupNavigateUpFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Lights
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsCarousel_C::Reset_Indicator_Lights()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.Reset Indicator Lights");

	UWBP_SettingsCarousel_C_Reset_Indicator_Lights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.ExecuteUbergraph_WBP_SettingsCarousel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsCarousel_C::ExecuteUbergraph_WBP_SettingsCarousel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsCarousel.WBP_SettingsCarousel_C.ExecuteUbergraph_WBP_SettingsCarousel");

	UWBP_SettingsCarousel_C_ExecuteUbergraph_WBP_SettingsCarousel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
