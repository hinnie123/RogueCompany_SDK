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

// Function SettingsInfo_Language.SettingsInfo_Language_C.FixupInvalidInt
struct USettingsInfo_Language_C_FixupInvalidInt_Params
{
	int*                                               inInt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.IsValidValueInt
struct USettingsInfo_Language_C_IsValidValueInt_Params
{
	int*                                               inInt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.GetCultureStringFromTextOptionIndex
struct USettingsInfo_Language_C_GetCultureStringFromTextOptionIndex_Params
{
	int*                                               TextOptionIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     CultureString;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.GetLanguageTextOptionIndex
struct USettingsInfo_Language_C_GetLanguageTextOptionIndex_Params
{
	struct FString*                                    Language;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                TextOptionIndex;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.SetUpLanguageOptions
struct USettingsInfo_Language_C_SetUpLanguageOptions_Params
{
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.SaveIntValue
struct USettingsInfo_Language_C_SaveIntValue_Params
{
	int*                                               inInt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.ApplyIntValue
struct USettingsInfo_Language_C_ApplyIntValue_Params
{
	int*                                               inInt;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.InitializeValue
struct USettingsInfo_Language_C_InitializeValue_Params
{
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageApplied
struct USettingsInfo_Language_C_HandleOnDisplayLanguageApplied_Params
{
	struct FString*                                    StringValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.HandleOnDisplayLanguageSaved
struct USettingsInfo_Language_C_HandleOnDisplayLanguageSaved_Params
{
	struct FString*                                    StringValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.RevertSettingToDefault
struct USettingsInfo_Language_C_RevertSettingToDefault_Params
{
};

// Function SettingsInfo_Language.SettingsInfo_Language_C.ExecuteUbergraph_SettingsInfo_Language
struct USettingsInfo_Language_C_ExecuteUbergraph_SettingsInfo_Language_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
