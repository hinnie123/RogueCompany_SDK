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

// Function UIFunctionLibrary.UIFunctionLibrary_C.UpdateScrollBoxOffset
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox**             ScrollBox                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TimeDelta                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Scrolled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_UpdateScrollBoxOffset(class UScrollBox** ScrollBox, float* Speed, float* TimeDelta, class UObject** __WorldContext, bool* Scrolled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.UpdateScrollBoxOffset");

	UUIFunctionLibrary_C_UpdateScrollBoxOffset_Params params;
	params.ScrollBox = ScrollBox;
	params.Speed = Speed;
	params.TimeDelta = TimeDelta;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scrolled != nullptr)
		*Scrolled = params.Scrolled;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetMercMasteryTypeDetails
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EKSMercMasteryActivityType*    Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayName                    (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetMercMasteryTypeDetails(EKSMercMasteryActivityType* Type, class UObject** __WorldContext, struct FText* DisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetMercMasteryTypeDetails");

	UUIFunctionLibrary_C_GetMercMasteryTypeDetails_Params params;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetFormattedTimeSpan
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan               Timespan                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          Shorthand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetFormattedTimeSpan(bool* Shorthand, class UObject** __WorldContext, struct FTimespan* Timespan, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetFormattedTimeSpan");

	UUIFunctionLibrary_C_GetFormattedTimeSpan_Params params;
	params.Shorthand = Shorthand;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Timespan != nullptr)
		*Timespan = params.Timespan;
	if (Text != nullptr)
		*Text = params.Text;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.IsMatchTimerAtLeastThisUrgent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Timer_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_MatchTimerVisualUrgency>* Urgency_Level                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_IsMatchTimerAtLeastThisUrgent(float* Timer_Seconds, TEnumAsByte<E_MatchTimerVisualUrgency>* Urgency_Level, class UObject** __WorldContext, bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.IsMatchTimerAtLeastThisUrgent");

	UUIFunctionLibrary_C_IsMatchTimerAtLeastThisUrgent_Params params;
	params.Timer_Seconds = Timer_Seconds;
	params.Urgency_Level = Urgency_Level;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetMatchTimerVisualUrgency
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Timer_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_MatchTimerVisualUrgency> Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetMatchTimerVisualUrgency(float* Timer_Seconds, class UObject** __WorldContext, TEnumAsByte<E_MatchTimerVisualUrgency>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetMatchTimerVisualUrgency");

	UUIFunctionLibrary_C_GetMatchTimerVisualUrgency_Params params;
	params.Timer_Seconds = Timer_Seconds;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityNameByTag
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer*  GameplayTagContainer           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   RarityName                     (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetRarityNameByTag(struct FGameplayTagContainer* GameplayTagContainer, class UObject** __WorldContext, struct FText* RarityName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityNameByTag");

	UUIFunctionLibrary_C_GetRarityNameByTag_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RarityName != nullptr)
		*RarityName = params.RarityName;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorByTag
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer*  GameplayTagContainer           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             RarityColor                    (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetRarityColorByTag(struct FGameplayTagContainer* GameplayTagContainer, class UObject** __WorldContext, struct FSlateColor* RarityColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorByTag");

	UUIFunctionLibrary_C_GetRarityColorByTag_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RarityColor != nullptr)
		*RarityColor = params.RarityColor;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorLegendary
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             NewParam                       (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetRarityColorLegendary(class UObject** __WorldContext, struct FSlateColor* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorLegendary");

	UUIFunctionLibrary_C_GetRarityColorLegendary_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorEpic
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             NewParam                       (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetRarityColorEpic(class UObject** __WorldContext, struct FSlateColor* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorEpic");

	UUIFunctionLibrary_C_GetRarityColorEpic_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorRare
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             NewParam                       (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetRarityColorRare(class UObject** __WorldContext, struct FSlateColor* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorRare");

	UUIFunctionLibrary_C_GetRarityColorRare_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorUncommon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             NewParam                       (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetRarityColorUncommon(class UObject** __WorldContext, struct FSlateColor* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorUncommon");

	UUIFunctionLibrary_C_GetRarityColorUncommon_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorCommon
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             NewParam                       (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetRarityColorCommon(class UObject** __WorldContext, struct FSlateColor* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorCommon");

	UUIFunctionLibrary_C_GetRarityColorCommon_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlatformViewProfileText
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Return_Value                   (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetPlatformViewProfileText(class UObject** __WorldContext, struct FText* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlatformViewProfileText");

	UUIFunctionLibrary_C_GetPlatformViewProfileText_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetSelfColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetSelfColor(class UObject** __WorldContext, struct FLinearColor* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetSelfColor");

	UUIFunctionLibrary_C_GetSelfColor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetEnemyColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetEnemyColor(class UObject** __WorldContext, struct FLinearColor* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetEnemyColor");

	UUIFunctionLibrary_C_GetEnemyColor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetFriendlyColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetFriendlyColor(class UObject** __WorldContext, struct FLinearColor* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetFriendlyColor");

	UUIFunctionLibrary_C_GetFriendlyColor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextChatChannelName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPUMG_ChatChannel*             Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_PlayerInfo**       PersonalChannelPlayer          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetTextChatChannelName(EPUMG_ChatChannel* Channel, class UPUMG_PlayerInfo** PersonalChannelPlayer, class UObject** __WorldContext, struct FText* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextChatChannelName");

	UUIFunctionLibrary_C_GetTextChatChannelName_Params params;
	params.Channel = Channel;
	params.PersonalChannelPlayer = PersonalChannelPlayer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.SetTextChatWidgetColor
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel*             Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock**             TextWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_SetTextChatWidgetColor(EPUMG_ChatChannel* Channel, class UTextBlock** TextWidget, class UObject** __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.SetTextChatWidgetColor");

	UUIFunctionLibrary_C_SetTextChatWidgetColor_Params params;
	params.Channel = Channel;
	params.TextWidget = TextWidget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetCrossplayIcon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidIconFound                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              OutIconTexture                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetCrossplayIcon(class UObject** __WorldContext, bool* ValidIconFound, class UTexture2D** OutIconTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetCrossplayIcon");

	UUIFunctionLibrary_C_GetCrossplayIcon_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidIconFound != nullptr)
		*ValidIconFound = params.ValidIconFound;
	if (OutIconTexture != nullptr)
		*OutIconTexture = params.OutIconTexture;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetCashColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetCashColor(class UObject** __WorldContext, struct FLinearColor* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetCashColor");

	UUIFunctionLibrary_C_GetCashColor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.FormatSecondsToTimerText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Minute_Digits                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowTenths                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Timer_Text                     (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_FormatSecondsToTimerText(float* Seconds, int* Minute_Digits, bool* ShowTenths, class UObject** __WorldContext, struct FText* Timer_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.FormatSecondsToTimerText");

	UUIFunctionLibrary_C_FormatSecondsToTimerText_Params params;
	params.Seconds = Seconds;
	params.Minute_Digits = Minute_Digits;
	params.ShowTenths = ShowTenths;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Timer_Text != nullptr)
		*Timer_Text = params.Timer_Text;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetSoundLibraries
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUISoundLibraries       SoundLibrary                   (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetSoundLibraries(class UObject** __WorldContext, struct FUISoundLibraries* SoundLibrary)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetSoundLibraries");

	UUIFunctionLibrary_C_GetSoundLibraries_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SoundLibrary != nullptr)
		*SoundLibrary = params.SoundLibrary;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorForLoadoutBundle
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSLoadoutBundle**       Loadout_Bundle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Role_Dark_Color                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Role_Light_Color               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetColorForLoadoutBundle(class UKSLoadoutBundle** Loadout_Bundle, class UObject** __WorldContext, struct FLinearColor* Role_Dark_Color, struct FLinearColor* Role_Light_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorForLoadoutBundle");

	UUIFunctionLibrary_C_GetColorForLoadoutBundle_Params params;
	params.Loadout_Bundle = Loadout_Bundle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Role_Dark_Color != nullptr)
		*Role_Dark_Color = params.Role_Dark_Color;
	if (Role_Light_Color != nullptr)
		*Role_Light_Color = params.Role_Light_Color;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextForSpecialtyCategory
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESpecialtyRoleType*            Specialty_Role_Type            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Role_Name                      (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetTextForSpecialtyCategory(ESpecialtyRoleType* Specialty_Role_Type, class UObject** __WorldContext, struct FText* Role_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextForSpecialtyCategory");

	UUIFunctionLibrary_C_GetTextForSpecialtyCategory_Params params;
	params.Specialty_Role_Type = Specialty_Role_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Role_Name != nullptr)
		*Role_Name = params.Role_Name;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorForSpecialtyCategory
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESpecialtyRoleType*            Specialty_Role_Type            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Role_Dark_Color                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Role_Light_Color               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetColorForSpecialtyCategory(ESpecialtyRoleType* Specialty_Role_Type, class UObject** __WorldContext, struct FLinearColor* Role_Dark_Color, struct FLinearColor* Role_Light_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorForSpecialtyCategory");

	UUIFunctionLibrary_C_GetColorForSpecialtyCategory_Params params;
	params.Specialty_Role_Type = Specialty_Role_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Role_Dark_Color != nullptr)
		*Role_Dark_Color = params.Role_Dark_Color;
	if (Role_Light_Color != nullptr)
		*Role_Light_Color = params.Role_Light_Color;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorPalette
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUIColorPalette         ColorPalette                   (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetColorPalette(class UObject** __WorldContext, struct FUIColorPalette* ColorPalette)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorPalette");

	UUIFunctionLibrary_C_GetColorPalette_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ColorPalette != nullptr)
		*ColorPalette = params.ColorPalette;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetSlateFontInfo
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUIFontPalette          UI_Fonts                       (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetSlateFontInfo(class UObject** __WorldContext, struct FUIFontPalette* UI_Fonts)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetSlateFontInfo");

	UUIFunctionLibrary_C_GetSlateFontInfo_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UI_Fonts != nullptr)
		*UI_Fonts = params.UI_Fonts;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetMedColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Med_Green                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Med_Green_Light                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetMedColor(class UObject** __WorldContext, struct FLinearColor* Med_Green, struct FLinearColor* Med_Green_Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetMedColor");

	UUIFunctionLibrary_C_GetMedColor_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Med_Green != nullptr)
		*Med_Green = params.Med_Green;
	if (Med_Green_Light != nullptr)
		*Med_Green_Light = params.Med_Green_Light;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetHideAnimDefaultTime
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          HideAnimTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetHideAnimDefaultTime(class UObject** __WorldContext, float* HideAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetHideAnimDefaultTime");

	UUIFunctionLibrary_C_GetHideAnimDefaultTime_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HideAnimTime != nullptr)
		*HideAnimTime = params.HideAnimTime;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetShowAnimDefaultTime
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ShowAnimTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetShowAnimDefaultTime(class UObject** __WorldContext, float* ShowAnimTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetShowAnimDefaultTime");

	UUIFunctionLibrary_C_GetShowAnimDefaultTime_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShowAnimTime != nullptr)
		*ShowAnimTime = params.ShowAnimTime;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.CurrencyTypeToCurrencyIcon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// unsigned char*                 CurrencyType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              CurrencyIcon                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_CurrencyTypeToCurrencyIcon(unsigned char* CurrencyType, class UObject** __WorldContext, class UTexture2D** CurrencyIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.CurrencyTypeToCurrencyIcon");

	UUIFunctionLibrary_C_CurrencyTypeToCurrencyIcon_Params params;
	params.CurrencyType = CurrencyType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrencyIcon != nullptr)
		*CurrencyIcon = params.CurrencyIcon;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.CurrencyIdToCurrencyIcon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           CurrencyId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              CurrencyIcon                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_CurrencyIdToCurrencyIcon(int* CurrencyId, class UObject** __WorldContext, class UTexture2D** CurrencyIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.CurrencyIdToCurrencyIcon");

	UUIFunctionLibrary_C_CurrencyIdToCurrencyIcon_Params params;
	params.CurrencyId = CurrencyId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrencyIcon != nullptr)
		*CurrencyIcon = params.CurrencyIcon;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.Get Opposing Team Num
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Team_Num                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_Get_Opposing_Team_Num(int* Team_Num, class UObject** __WorldContext, int* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.Get Opposing Team Num");

	UUIFunctionLibrary_C_Get_Opposing_Team_Num_Params params;
	params.Team_Num = Team_Num;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetAlignmentColors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Friendly                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Enemy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Neutral                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetAlignmentColors(class UObject** __WorldContext, struct FLinearColor* Friendly, struct FLinearColor* Enemy, struct FLinearColor* Neutral)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetAlignmentColors");

	UUIFunctionLibrary_C_GetAlignmentColors_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friendly != nullptr)
		*Friendly = params.Friendly;
	if (Enemy != nullptr)
		*Enemy = params.Enemy;
	if (Neutral != nullptr)
		*Neutral = params.Neutral;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.InvertColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor*           Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_InvertColor(struct FLinearColor* Color, class UObject** __WorldContext, struct FLinearColor* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.InvertColor");

	UUIFunctionLibrary_C_InvertColor_Params params;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetIconForGamepadButton
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Button                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetIconForGamepadButton(struct FKey* Button, class UObject** __WorldContext, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetIconForGamepadButton");

	UUIFunctionLibrary_C_GetIconForGamepadButton_Params params;
	params.Button = Button;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.DrawCircle
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPaintContext           Context                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector2D*              Center                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           Tint                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Line_Count                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Anti_Alias                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_DrawCircle(struct FVector2D* Center, float* Radius, struct FLinearColor* Tint, int* Line_Count, bool* Anti_Alias, class UObject** __WorldContext, struct FPaintContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.DrawCircle");

	UUIFunctionLibrary_C_DrawCircle_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.Tint = Tint;
	params.Line_Count = Line_Count;
	params.Anti_Alias = Anti_Alias;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           teamNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Abbreviate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   teamName                       (Parm, OutParm)

void UUIFunctionLibrary_C::STATIC_GetTeamName(int* teamNum, bool* Abbreviate, class UObject** __WorldContext, struct FText* teamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamName");

	UUIFunctionLibrary_C_GetTeamName_Params params;
	params.teamNum = teamNum;
	params.Abbreviate = Abbreviate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (teamName != nullptr)
		*teamName = params.teamName;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetLargeTeamIcons
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              FriendlyBorder                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              FriendlyFill                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              FriendlyIcon                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              EnemyBorder                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              EnemyFill                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              EnemyIcon                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetLargeTeamIcons(class UObject** __WorldContext, class UTexture2D** FriendlyBorder, class UTexture2D** FriendlyFill, class UTexture2D** FriendlyIcon, class UTexture2D** EnemyBorder, class UTexture2D** EnemyFill, class UTexture2D** EnemyIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetLargeTeamIcons");

	UUIFunctionLibrary_C_GetLargeTeamIcons_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendlyBorder != nullptr)
		*FriendlyBorder = params.FriendlyBorder;
	if (FriendlyFill != nullptr)
		*FriendlyFill = params.FriendlyFill;
	if (FriendlyIcon != nullptr)
		*FriendlyIcon = params.FriendlyIcon;
	if (EnemyBorder != nullptr)
		*EnemyBorder = params.EnemyBorder;
	if (EnemyFill != nullptr)
		*EnemyFill = params.EnemyFill;
	if (EnemyIcon != nullptr)
		*EnemyIcon = params.EnemyIcon;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           teamNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OwningPlayerNum                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Team_Color                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found_Color                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetTeamColor(int* teamNum, int* OwningPlayerNum, class UObject** __WorldContext, struct FLinearColor* Team_Color, bool* Found_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamColor");

	UUIFunctionLibrary_C_GetTeamColor_Params params;
	params.teamNum = teamNum;
	params.OwningPlayerNum = OwningPlayerNum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Team_Color != nullptr)
		*Team_Color = params.Team_Color;
	if (Found_Color != nullptr)
		*Found_Color = params.Found_Color;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Common                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Rare                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Epic                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Legendary                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GetRarityColors(class UObject** __WorldContext, struct FLinearColor* Common, struct FLinearColor* Rare, struct FLinearColor* Epic, struct FLinearColor* Legendary)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColors");

	UUIFunctionLibrary_C_GetRarityColors_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Common != nullptr)
		*Common = params.Common;
	if (Rare != nullptr)
		*Rare = params.Rare;
	if (Epic != nullptr)
		*Epic = params.Epic;
	if (Legendary != nullptr)
		*Legendary = params.Legendary;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.GridIndexChecker
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           TestIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumColumns                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HorizontalWrapping             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           SourceIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_Widget*            Output                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_GridIndexChecker(int* TestIndex, int* NumColumns, bool* HorizontalWrapping, int* SourceIndex, class UObject** __WorldContext, TArray<class UPUMG_Widget*>* Array, class UPUMG_Widget** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.GridIndexChecker");

	UUIFunctionLibrary_C_GridIndexChecker_Params params;
	params.TestIndex = TestIndex;
	params.NumColumns = NumColumns;
	params.HorizontalWrapping = HorizontalWrapping;
	params.SourceIndex = SourceIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Output != nullptr)
		*Output = params.Output;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.SetUpGridNavigation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_Widget**           ParentWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UPUMG_Widget*>    NavWidgets                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumColumns                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HorizontalWrapping             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_SetUpGridNavigation(class UPUMG_Widget** ParentWidget, int* FocusGroup, int* NumColumns, bool* HorizontalWrapping, class UObject** __WorldContext, TArray<class UPUMG_Widget*>* NavWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.SetUpGridNavigation");

	UUIFunctionLibrary_C_SetUpGridNavigation_Params params;
	params.ParentWidget = ParentWidget;
	params.FocusGroup = FocusGroup;
	params.NumColumns = NumColumns;
	params.HorizontalWrapping = HorizontalWrapping;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.LinearIndexChecker
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_Widget*            Output                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_LinearIndexChecker(int* Index, class UObject** __WorldContext, TArray<class UPUMG_Widget*>* Array, class UPUMG_Widget** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.LinearIndexChecker");

	UUIFunctionLibrary_C_LinearIndexChecker_Params params;
	params.Index = Index;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Output != nullptr)
		*Output = params.Output;
}


// Function UIFunctionLibrary.UIFunctionLibrary_C.SetUpLinearNavigation
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_Widget**           ParentWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UPUMG_Widget*>    NavWidgets                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           FocusGroup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Horizontal                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIFunctionLibrary_C::STATIC_SetUpLinearNavigation(class UPUMG_Widget** ParentWidget, int* FocusGroup, bool* Horizontal, class UObject** __WorldContext, TArray<class UPUMG_Widget*>* NavWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIFunctionLibrary.UIFunctionLibrary_C.SetUpLinearNavigation");

	UUIFunctionLibrary_C_SetUpLinearNavigation_Params params;
	params.ParentWidget = ParentWidget;
	params.FocusGroup = FocusGroup;
	params.Horizontal = Horizontal;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
