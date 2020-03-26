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

// Function SettingsInfo_Language.SettingsInfo_Language_C.FixupInvalidInt
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int*                           inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USettingsInfo_Language_C::FixupInvalidInt(int* inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.FixupInvalidInt");

	USettingsInfo_Language_C_FixupInvalidInt_Params params;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.IsValidValueInt
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USettingsInfo_Language_C::IsValidValueInt(int* inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.IsValidValueInt");

	USettingsInfo_Language_C_IsValidValueInt_Params params;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.GetCultureStringFromTextOptionIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           TextOptionIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 CultureString                  (Parm, OutParm, ZeroConstructor)

void USettingsInfo_Language_C::GetCultureStringFromTextOptionIndex(int* TextOptionIndex, bool* Success, struct FString* CultureString)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.GetCultureStringFromTextOptionIndex");

	USettingsInfo_Language_C_GetCultureStringFromTextOptionIndex_Params params;
	params.TextOptionIndex = TextOptionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CultureString != nullptr)
		*CultureString = params.CultureString;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.GetLanguageTextOptionIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Language                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            TextOptionIndex                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USettingsInfo_Language_C::GetLanguageTextOptionIndex(struct FString* Language, int* TextOptionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.GetLanguageTextOptionIndex");

	USettingsInfo_Language_C_GetLanguageTextOptionIndex_Params params;
	params.Language = Language;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextOptionIndex != nullptr)
		*TextOptionIndex = params.TextOptionIndex;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.SetUpLanguageOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USettingsInfo_Language_C::SetUpLanguageOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.SetUpLanguageOptions");

	USettingsInfo_Language_C_SetUpLanguageOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.SaveIntValue
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USettingsInfo_Language_C::SaveIntValue(int* inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.SaveIntValue");

	USettingsInfo_Language_C_SaveIntValue_Params params;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.ApplyIntValue
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           inInt                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USettingsInfo_Language_C::ApplyIntValue(int* inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.ApplyIntValue");

	USettingsInfo_Language_C_ApplyIntValue_Params params;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.InitializeValue
// (Event, Protected, BlueprintEvent)

void USettingsInfo_Language_C::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.InitializeValue");

	USettingsInfo_Language_C_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                StringValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void USettingsInfo_Language_C::HandleOnDisplayLanguageApplied(struct FString* StringValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageApplied");

	USettingsInfo_Language_C_HandleOnDisplayLanguageApplied_Params params;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageSaved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                StringValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void USettingsInfo_Language_C::HandleOnDisplayLanguageSaved(struct FString* StringValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageSaved");

	USettingsInfo_Language_C_HandleOnDisplayLanguageSaved_Params params;
	params.StringValue = StringValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.RevertSettingToDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void USettingsInfo_Language_C::RevertSettingToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.RevertSettingToDefault");

	USettingsInfo_Language_C_RevertSettingToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SettingsInfo_Language.SettingsInfo_Language_C.ExecuteUbergraph_SettingsInfo_Language
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USettingsInfo_Language_C::ExecuteUbergraph_SettingsInfo_Language(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SettingsInfo_Language.SettingsInfo_Language_C.ExecuteUbergraph_SettingsInfo_Language");

	USettingsInfo_Language_C_ExecuteUbergraph_SettingsInfo_Language_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
