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

// Function UIFunctionLibrary.UIFunctionLibrary_C.UpdateScrollBoxOffset
struct UUIFunctionLibrary_C_UpdateScrollBoxOffset_Params
{
	class UScrollBox**                                 ScrollBox;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TimeDelta;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Scrolled;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetMercMasteryTypeDetails
struct UUIFunctionLibrary_C_GetMercMasteryTypeDetails_Params
{
	EKSMercMasteryActivityType*                        Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetFormattedTimeSpan
struct UUIFunctionLibrary_C_GetFormattedTimeSpan_Params
{
	struct FTimespan                                   Timespan;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              Shorthand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.IsMatchTimerAtLeastThisUrgent
struct UUIFunctionLibrary_C_IsMatchTimerAtLeastThisUrgent_Params
{
	float*                                             Timer_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_MatchTimerVisualUrgency>*            Urgency_Level;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetMatchTimerVisualUrgency
struct UUIFunctionLibrary_C_GetMatchTimerVisualUrgency_Params
{
	float*                                             Timer_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_MatchTimerVisualUrgency>             Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityNameByTag
struct UUIFunctionLibrary_C_GetRarityNameByTag_Params
{
	struct FGameplayTagContainer*                      GameplayTagContainer;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       RarityName;                                               // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorByTag
struct UUIFunctionLibrary_C_GetRarityColorByTag_Params
{
	struct FGameplayTagContainer*                      GameplayTagContainer;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 RarityColor;                                              // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorLegendary
struct UUIFunctionLibrary_C_GetRarityColorLegendary_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 NewParam;                                                 // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorEpic
struct UUIFunctionLibrary_C_GetRarityColorEpic_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 NewParam;                                                 // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorRare
struct UUIFunctionLibrary_C_GetRarityColorRare_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 NewParam;                                                 // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorUncommon
struct UUIFunctionLibrary_C_GetRarityColorUncommon_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 NewParam;                                                 // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColorCommon
struct UUIFunctionLibrary_C_GetRarityColorCommon_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 NewParam;                                                 // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetPlatformViewProfileText
struct UUIFunctionLibrary_C_GetPlatformViewProfileText_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Return_Value;                                             // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetSelfColor
struct UUIFunctionLibrary_C_GetSelfColor_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetEnemyColor
struct UUIFunctionLibrary_C_GetEnemyColor_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetFriendlyColor
struct UUIFunctionLibrary_C_GetFriendlyColor_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextChatChannelName
struct UUIFunctionLibrary_C_GetTextChatChannelName_Params
{
	EPUMG_ChatChannel*                                 Channel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_PlayerInfo**                           PersonalChannelPlayer;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.SetTextChatWidgetColor
struct UUIFunctionLibrary_C_SetTextChatWidgetColor_Params
{
	EPUMG_ChatChannel*                                 Channel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock**                                 TextWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetCrossplayIcon
struct UUIFunctionLibrary_C_GetCrossplayIcon_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidIconFound;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  OutIconTexture;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetCashColor
struct UUIFunctionLibrary_C_GetCashColor_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.FormatSecondsToTimerText
struct UUIFunctionLibrary_C_FormatSecondsToTimerText_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Minute_Digits;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowTenths;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Timer_Text;                                               // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetSoundLibraries
struct UUIFunctionLibrary_C_GetSoundLibraries_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUISoundLibraries                           SoundLibrary;                                             // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorForLoadoutBundle
struct UUIFunctionLibrary_C_GetColorForLoadoutBundle_Params
{
	class UKSLoadoutBundle**                           Loadout_Bundle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Role_Dark_Color;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Role_Light_Color;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTextForSpecialtyCategory
struct UUIFunctionLibrary_C_GetTextForSpecialtyCategory_Params
{
	ESpecialtyRoleType*                                Specialty_Role_Type;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Role_Name;                                                // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorForSpecialtyCategory
struct UUIFunctionLibrary_C_GetColorForSpecialtyCategory_Params
{
	ESpecialtyRoleType*                                Specialty_Role_Type;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Role_Dark_Color;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Role_Light_Color;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetColorPalette
struct UUIFunctionLibrary_C_GetColorPalette_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUIColorPalette                             ColorPalette;                                             // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetSlateFontInfo
struct UUIFunctionLibrary_C_GetSlateFontInfo_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUIFontPalette                              UI_Fonts;                                                 // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetMedColor
struct UUIFunctionLibrary_C_GetMedColor_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Med_Green;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Med_Green_Light;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetHideAnimDefaultTime
struct UUIFunctionLibrary_C_GetHideAnimDefaultTime_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HideAnimTime;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetShowAnimDefaultTime
struct UUIFunctionLibrary_C_GetShowAnimDefaultTime_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShowAnimTime;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.CurrencyTypeToCurrencyIcon
struct UUIFunctionLibrary_C_CurrencyTypeToCurrencyIcon_Params
{
	unsigned char*                                     CurrencyType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  CurrencyIcon;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.CurrencyIdToCurrencyIcon
struct UUIFunctionLibrary_C_CurrencyIdToCurrencyIcon_Params
{
	int*                                               CurrencyId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  CurrencyIcon;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.Get Opposing Team Num
struct UUIFunctionLibrary_C_Get_Opposing_Team_Num_Params
{
	int*                                               Team_Num;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetAlignmentColors
struct UUIFunctionLibrary_C_GetAlignmentColors_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Friendly;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Enemy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Neutral;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.InvertColor
struct UUIFunctionLibrary_C_InvertColor_Params
{
	struct FLinearColor*                               Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetIconForGamepadButton
struct UUIFunctionLibrary_C_GetIconForGamepadButton_Params
{
	struct FKey*                                       Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.DrawCircle
struct UUIFunctionLibrary_C_DrawCircle_Params
{
	struct FPaintContext                               Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector2D*                                  Center;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Tint;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Line_Count;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Anti_Alias;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamName
struct UUIFunctionLibrary_C_GetTeamName_Params
{
	int*                                               teamNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Abbreviate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       teamName;                                                 // (Parm, OutParm)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetLargeTeamIcons
struct UUIFunctionLibrary_C_GetLargeTeamIcons_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  FriendlyBorder;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  FriendlyFill;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  FriendlyIcon;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  EnemyBorder;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  EnemyFill;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  EnemyIcon;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetTeamColor
struct UUIFunctionLibrary_C_GetTeamColor_Params
{
	int*                                               teamNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OwningPlayerNum;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Team_Color;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found_Color;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GetRarityColors
struct UUIFunctionLibrary_C_GetRarityColors_Params
{
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Common;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Rare;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Epic;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Legendary;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.GridIndexChecker
struct UUIFunctionLibrary_C_GridIndexChecker_Params
{
	TArray<class UPUMG_Widget*>                        Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               TestIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumColumns;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HorizontalWrapping;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SourceIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_Widget*                                Output;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.SetUpGridNavigation
struct UUIFunctionLibrary_C_SetUpGridNavigation_Params
{
	class UPUMG_Widget**                               ParentWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UPUMG_Widget*>                        NavWidgets;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumColumns;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              HorizontalWrapping;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.LinearIndexChecker
struct UUIFunctionLibrary_C_LinearIndexChecker_Params
{
	TArray<class UPUMG_Widget*>                        Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_Widget*                                Output;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UIFunctionLibrary.UIFunctionLibrary_C.SetUpLinearNavigation
struct UUIFunctionLibrary_C_SetUpLinearNavigation_Params
{
	class UPUMG_Widget**                               ParentWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UPUMG_Widget*>                        NavWidgets;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Horizontal;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
