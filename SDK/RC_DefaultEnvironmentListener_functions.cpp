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

// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.OnEnvironmentChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName*                  OldEnvironmentTag              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDefaultEnvironmentListener_C::OnEnvironmentChanged(struct FName* OldEnvironmentTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.OnEnvironmentChanged");

	UDefaultEnvironmentListener_C_OnEnvironmentChanged_Params params;
	params.OldEnvironmentTag = OldEnvironmentTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.Print State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Print_to_Screen                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Print_to_Log                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Text_Color                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDefaultEnvironmentListener_C::Print_State(bool* Print_to_Screen, bool* Print_to_Log, struct FLinearColor* Text_Color, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.Print State");

	UDefaultEnvironmentListener_C_Print_State_Params params;
	params.Print_to_Screen = Print_to_Screen;
	params.Print_to_Log = Print_to_Log;
	params.Text_Color = Text_Color;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UDefaultEnvironmentListener_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ReceiveBeginPlay");

	UDefaultEnvironmentListener_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ExecuteUbergraph_DefaultEnvironmentListener
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDefaultEnvironmentListener_C::ExecuteUbergraph_DefaultEnvironmentListener(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ExecuteUbergraph_DefaultEnvironmentListener");

	UDefaultEnvironmentListener_C_ExecuteUbergraph_DefaultEnvironmentListener_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
