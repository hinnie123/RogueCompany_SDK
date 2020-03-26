#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UIFunctionLibrary.UIFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UIFunctionLibrary.UIFunctionLibrary_C");
		return ptr;
	}


	void STATIC_UpdateScrollBoxOffset(class UScrollBox** ScrollBox, float* Speed, float* TimeDelta, class UObject** __WorldContext, bool* Scrolled);
	void STATIC_GetMercMasteryTypeDetails(EKSMercMasteryActivityType* Type, class UObject** __WorldContext, struct FText* DisplayName);
	void STATIC_GetFormattedTimeSpan(bool* Shorthand, class UObject** __WorldContext, struct FTimespan* Timespan, struct FText* Text);
	void STATIC_IsMatchTimerAtLeastThisUrgent(float* Timer_Seconds, TEnumAsByte<E_MatchTimerVisualUrgency>* Urgency_Level, class UObject** __WorldContext, bool* Return_Value);
	void STATIC_GetMatchTimerVisualUrgency(float* Timer_Seconds, class UObject** __WorldContext, TEnumAsByte<E_MatchTimerVisualUrgency>* Return_Value);
	void STATIC_GetRarityNameByTag(struct FGameplayTagContainer* GameplayTagContainer, class UObject** __WorldContext, struct FText* RarityName);
	void STATIC_GetRarityColorByTag(struct FGameplayTagContainer* GameplayTagContainer, class UObject** __WorldContext, struct FSlateColor* RarityColor);
	void STATIC_GetRarityColorLegendary(class UObject** __WorldContext, struct FSlateColor* NewParam);
	void STATIC_GetRarityColorEpic(class UObject** __WorldContext, struct FSlateColor* NewParam);
	void STATIC_GetRarityColorRare(class UObject** __WorldContext, struct FSlateColor* NewParam);
	void STATIC_GetRarityColorUncommon(class UObject** __WorldContext, struct FSlateColor* NewParam);
	void STATIC_GetRarityColorCommon(class UObject** __WorldContext, struct FSlateColor* NewParam);
	void STATIC_GetPlatformViewProfileText(class UObject** __WorldContext, struct FText* Return_Value);
	void STATIC_GetSelfColor(class UObject** __WorldContext, struct FLinearColor* Return_Value);
	void STATIC_GetEnemyColor(class UObject** __WorldContext, struct FLinearColor* Return_Value);
	void STATIC_GetFriendlyColor(class UObject** __WorldContext, struct FLinearColor* Return_Value);
	void STATIC_GetTextChatChannelName(EPUMG_ChatChannel* Channel, class UPUMG_PlayerInfo** PersonalChannelPlayer, class UObject** __WorldContext, struct FText* Name);
	void STATIC_SetTextChatWidgetColor(EPUMG_ChatChannel* Channel, class UTextBlock** TextWidget, class UObject** __WorldContext);
	void STATIC_GetCrossplayIcon(class UObject** __WorldContext, bool* ValidIconFound, class UTexture2D** OutIconTexture);
	void STATIC_GetCashColor(class UObject** __WorldContext, struct FLinearColor* Return_Value);
	void STATIC_FormatSecondsToTimerText(float* Seconds, int* Minute_Digits, bool* ShowTenths, class UObject** __WorldContext, struct FText* Timer_Text);
	void STATIC_GetSoundLibraries(class UObject** __WorldContext, struct FUISoundLibraries* SoundLibrary);
	void STATIC_GetColorForLoadoutBundle(class UKSLoadoutBundle** Loadout_Bundle, class UObject** __WorldContext, struct FLinearColor* Role_Dark_Color, struct FLinearColor* Role_Light_Color);
	void STATIC_GetTextForSpecialtyCategory(ESpecialtyRoleType* Specialty_Role_Type, class UObject** __WorldContext, struct FText* Role_Name);
	void STATIC_GetColorForSpecialtyCategory(ESpecialtyRoleType* Specialty_Role_Type, class UObject** __WorldContext, struct FLinearColor* Role_Dark_Color, struct FLinearColor* Role_Light_Color);
	void STATIC_GetColorPalette(class UObject** __WorldContext, struct FUIColorPalette* ColorPalette);
	void STATIC_GetSlateFontInfo(class UObject** __WorldContext, struct FUIFontPalette* UI_Fonts);
	void STATIC_GetMedColor(class UObject** __WorldContext, struct FLinearColor* Med_Green, struct FLinearColor* Med_Green_Light);
	void STATIC_GetHideAnimDefaultTime(class UObject** __WorldContext, float* HideAnimTime);
	void STATIC_GetShowAnimDefaultTime(class UObject** __WorldContext, float* ShowAnimTime);
	void STATIC_CurrencyTypeToCurrencyIcon(unsigned char* CurrencyType, class UObject** __WorldContext, class UTexture2D** CurrencyIcon);
	void STATIC_CurrencyIdToCurrencyIcon(int* CurrencyId, class UObject** __WorldContext, class UTexture2D** CurrencyIcon);
	void STATIC_Get_Opposing_Team_Num(int* Team_Num, class UObject** __WorldContext, int* Return_Value);
	void STATIC_GetAlignmentColors(class UObject** __WorldContext, struct FLinearColor* Friendly, struct FLinearColor* Enemy, struct FLinearColor* Neutral);
	void STATIC_InvertColor(struct FLinearColor* Color, class UObject** __WorldContext, struct FLinearColor* Return_Value);
	void STATIC_GetIconForGamepadButton(struct FKey* Button, class UObject** __WorldContext, class UTexture2D** Icon);
	void STATIC_DrawCircle(struct FVector2D* Center, float* Radius, struct FLinearColor* Tint, int* Line_Count, bool* Anti_Alias, class UObject** __WorldContext, struct FPaintContext* Context);
	void STATIC_GetTeamName(int* teamNum, bool* Abbreviate, class UObject** __WorldContext, struct FText* teamName);
	void STATIC_GetLargeTeamIcons(class UObject** __WorldContext, class UTexture2D** FriendlyBorder, class UTexture2D** FriendlyFill, class UTexture2D** FriendlyIcon, class UTexture2D** EnemyBorder, class UTexture2D** EnemyFill, class UTexture2D** EnemyIcon);
	void STATIC_GetTeamColor(int* teamNum, int* OwningPlayerNum, class UObject** __WorldContext, struct FLinearColor* Team_Color, bool* Found_Color);
	void STATIC_GetRarityColors(class UObject** __WorldContext, struct FLinearColor* Common, struct FLinearColor* Rare, struct FLinearColor* Epic, struct FLinearColor* Legendary);
	void STATIC_GridIndexChecker(int* TestIndex, int* NumColumns, bool* HorizontalWrapping, int* SourceIndex, class UObject** __WorldContext, TArray<class UPUMG_Widget*>* Array, class UPUMG_Widget** Output);
	void STATIC_SetUpGridNavigation(class UPUMG_Widget** ParentWidget, int* FocusGroup, int* NumColumns, bool* HorizontalWrapping, class UObject** __WorldContext, TArray<class UPUMG_Widget*>* NavWidgets);
	void STATIC_LinearIndexChecker(int* Index, class UObject** __WorldContext, TArray<class UPUMG_Widget*>* Array, class UPUMG_Widget** Output);
	void STATIC_SetUpLinearNavigation(class UPUMG_Widget** ParentWidget, int* FocusGroup, bool* Horizontal, class UObject** __WorldContext, TArray<class UPUMG_Widget*>* NavWidgets);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
