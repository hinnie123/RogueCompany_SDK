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

// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Left
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsSlider_C::Step_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Left");

	UWBP_SettingsSlider_C_Step_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Multiplier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsSlider_C::Step(float* Multiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step");

	UWBP_SettingsSlider_C_Step_Params params;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Right
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsSlider_C::Step_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Right");

	UWBP_SettingsSlider_C_Step_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Display Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsSlider_C::Set_Display_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Display Text");

	UWBP_SettingsSlider_C_Set_Display_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Desired Value
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsSlider_C::Set_Desired_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Desired Value");

	UWBP_SettingsSlider_C_Set_Desired_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Position Slider To Value
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsSlider_C::Position_Slider_To_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Position Slider To Value");

	UWBP_SettingsSlider_C_Position_Slider_To_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Slider To Value
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsSlider_C::Slider_To_Value(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Slider To Value");

	UWBP_SettingsSlider_C_Slider_To_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMaxSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Max_Value                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsSlider_C::GetMaxSliderValue(float* Max_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMaxSliderValue");

	UWBP_SettingsSlider_C_GetMaxSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Max_Value != nullptr)
		*Max_Value = params.Max_Value;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMinSliderValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Min_Value                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsSlider_C::GetMinSliderValue(float* Min_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMinSliderValue");

	UWBP_SettingsSlider_C_GetMinSliderValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min_Value != nullptr)
		*Min_Value = params.Min_Value;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Value To Slider
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Slider_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsSlider_C::Value_To_Slider(float* Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Value To Slider");

	UWBP_SettingsSlider_C_Value_To_Slider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slider_Value != nullptr)
		*Slider_Value = params.Slider_Value;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Get Dirty Value
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsSlider_C::Get_Dirty_Value(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Get Dirty Value");

	UWBP_SettingsSlider_C_Get_Dirty_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SettingsSlider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Construct");

	UWBP_SettingsSlider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsSlider_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.Tick");

	UWBP_SettingsSlider_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsSlider_C::BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_SettingsSlider_C_BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnWidgetSettingsInfoSet
// (Event, Protected, BlueprintEvent)

void UWBP_SettingsSlider_C::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnWidgetSettingsInfoSet");

	UWBP_SettingsSlider_C_OnWidgetSettingsInfoSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.On Value Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Changed_Externally             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsSlider_C::On_Value_Changed(bool* Changed_Externally)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.On Value Changed");

	UWBP_SettingsSlider_C_On_Value_Changed_Params params;
	params.Changed_Externally = Changed_Externally;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SettingsSlider_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseEnter");

	UWBP_SettingsSlider_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SettingsSlider_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseLeave");

	UWBP_SettingsSlider_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_SettingsSlider_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadHover");

	UWBP_SettingsSlider_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_SettingsSlider_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadUnhover");

	UWBP_SettingsSlider_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateLeftFailure
// (Event, Public, BlueprintEvent)

void UWBP_SettingsSlider_C::NavigateLeftFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateLeftFailure");

	UWBP_SettingsSlider_C_NavigateLeftFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateRightFailure
// (Event, Public, BlueprintEvent)

void UWBP_SettingsSlider_C::NavigateRightFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateRightFailure");

	UWBP_SettingsSlider_C_NavigateRightFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.ExecuteUbergraph_WBP_SettingsSlider
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsSlider_C::ExecuteUbergraph_WBP_SettingsSlider(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSlider.WBP_SettingsSlider_C.ExecuteUbergraph_WBP_SettingsSlider");

	UWBP_SettingsSlider_C_ExecuteUbergraph_WBP_SettingsSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
