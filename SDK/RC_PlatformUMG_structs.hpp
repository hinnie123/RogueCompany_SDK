#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PlatformUMG.EPUMG_TextFilterStatus
enum class EPUMG_TextFilterStatus : uint8_t
{
	Unchecked                      = 0,
	CheckingNow                    = 1,
	Filtered                       = 2,
	EPUMG_MAX                      = 3
};


// Enum PlatformUMG.EPUMG_ChatPhase
enum class EPUMG_ChatPhase : uint8_t
{
	PortalAllowed                  = 0,
	PlayerNamesExist               = 1,
	LocalFilters                   = 2,
	PortalAllowedOtherUser         = 3,
	PortalTextFilter               = 4,
	ChannelAlreadyHasPending       = 5,
	Ready                          = 6,
	EPUMG_MAX                      = 7
};


// Enum PlatformUMG.EPUMG_ChatChannel
enum class EPUMG_ChatChannel : uint8_t
{
	UNKNOWN                        = 0,
	PERSONAL                       = 1,
	CLAN                           = 2,
	GLOBAL                         = 3,
	INSTANCE                       = 4,
	LOCAL_TEAM                     = 5,
	PARTY                          = 6,
	CITY                           = 7,
	PRIVATE                        = 8,
	EOM_LOBBY                      = 9,
	SYSTEM                         = 10,
	TRADE                          = 11,
	LFG                            = 12,
	LFG01                          = 13,
	HELP                           = 14,
	VOIP_NEWS                      = 15,
	GM                             = 16,
	VIP                            = 17,
	LFG02                          = 18,
	VOIP_ECHO                      = 19,
	VOIP_CONF                      = 20,
	COMBAT                         = 21,
	EMOTE                          = 22,
	NUM_CHAT_CHANNELS              = 23,
	EPUMG_MAX                      = 24
};


// Enum PlatformUMG.EPUMG_LoginState
enum class EPUMG_LoginState : uint8_t
{
	ELS_LoggedOut                  = 0,
	ELS_Eula                       = 1,
	ELS_CreateName                 = 2,
	ELS_LoggingIn                  = 3,
	ELS_LoggedIn                   = 4,
	ELS_TwoFactor                  = 5,
	ELS_LinkOffer                  = 6,
	ELS_Unknown                    = 7,
	ELS_MAX                        = 8
};


// Enum PlatformUMG.EPUMG_MatchStatus
enum class EPUMG_MatchStatus : uint8_t
{
	EPUMG_MatchStatus_NotQueued    = 0,
	EPUMG_MatchStatus_Declined     = 1,
	EPUMG_MatchStatus_Queued       = 2,
	EPUMG_MatchStatus_Invited      = 3,
	EPUMG_MatchStatus_Accepted     = 4,
	EPUMG_MatchStatus_Matching     = 5,
	EPUMG_MatchStatus_Waiting      = 6,
	EPUMG_MatchStatus_InGame       = 7,
	EPUMG_MatchStatus_SpectatorLobby = 8,
	EPUMG_MatchStatus_SpectatorGame = 9,
	EPUMG_MatchStatus_MAX          = 10
};


// Enum PlatformUMG.EPUMG_SettingUIType
enum class EPUMG_SettingUIType : uint8_t
{
	Header                         = 0,
	Slider                         = 1,
	OptionStepper                  = 2,
	Checkbox                       = 3,
	Button                         = 4,
	Dropdown                       = 5,
	KeyBinding                     = 6,
	EPUMG_MAX                      = 7
};


// Enum PlatformUMG.EPUMG_PartyInviteRightsMode
enum class EPUMG_PartyInviteRightsMode : uint8_t
{
	EPUMG_PIRM_OnlyLeader          = 0,
	EPUMG_PIRM_LeaderStartingCanGrant = 1,
	EPUMG_PIRM_AllMembers          = 2,
	EPUMG_PIRM_MAX                 = 3
};


// Enum PlatformUMG.EPUMG_PopupButtonType
enum class EPUMG_PopupButtonType : uint8_t
{
	Confirm                        = 0,
	Cancel                         = 1,
	Default                        = 2,
	EPUMG_MAX                      = 3
};


// Enum PlatformUMG.EViewManagerTransitionState
enum class EViewManagerTransitionState : uint8_t
{
	Idle                           = 0,
	Loading                        = 1,
	AnimatingHide                  = 2,
	AnimatingShow                  = 3,
	Locked                         = 4,
	EViewManagerTransitionState_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlatformUMG.PUMG_ChatData
// 0x0040
struct FPUMG_ChatData
{
	class UPUMG_PlayerInfo*                            Sender;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPUMG_PlayerInfo*                            Recipient;                                                // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly)
	bool                                               IsOwnMessage;                                             // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSeen;                                                   // 0x0029(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SystemMessage;                                            // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsReplayedMessage;                                        // 0x002B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPUMG_ChatChannel                                  ChatChannel;                                              // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPUMG_ChatPhase                                    ChatPhase;                                                // 0x002D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPCOM_PrivilegeStatus                              UserPrivilege;                                            // 0x002E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPUMG_TextFilterStatus                             PortalTextFilterStatus;                                   // 0x002F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MessageId;                                                // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	int64_t                                            MctsMessageId;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_ChatCommand
// 0x0040
struct FPUMG_ChatCommand
{
	struct FString                                     Function;                                                 // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             Commands;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Desc;                                                     // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UObject*                                     Target;                                                   // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_ActiveChatChannelData
// 0x0010
struct FPUMG_ActiveChatChannelData
{
	EPUMG_ChatChannel                                  ChatChannel;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UPUMG_PlayerInfo*                            PersonalChannelPlayer;                                    // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_AvatarData
// 0x0048
struct FPUMG_AvatarData
{
	int                                                ItemId;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0004(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PlatformUMG.PUMG_AvatarData.Texture
	struct FString                                     Name;                                                     // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               owned;                                                    // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Selected;                                                 // 0x0041(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_FriendData
// 0x0028
struct FPUMG_FriendData
{
	class UPUMG_PlayerInfo*                            PlayerData;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       StatusMessage;                                            // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	bool                                               Online;                                                   // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CanChallenge;                                             // 0x0021(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CanSpectate;                                              // 0x0022(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasHRRelationship;                                        // 0x0023(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasPortalRelationship;                                    // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_InputFocusGroup
// 0x0038
struct FPUMG_InputFocusGroup
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_InputFocusDetails
// 0x0018
struct FPUMG_InputFocusDetails
{
	TArray<struct FPUMG_InputFocusGroup>               FocusGroups;                                              // 0x0000(0x0010) (ZeroConstructor)
	int                                                DefaultFocusGroupIndex;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentFocusGroupIndex;                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_PartyMemberData
// 0x0030
struct FPUMG_PartyMemberData
{
	class UPUMG_PlayerInfo*                            PlayerData;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFriend;                                                 // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       StatusMessage;                                            // 0x0010(0x0018) (BlueprintVisible, BlueprintReadOnly)
	bool                                               Online;                                                   // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPending;                                                // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CanInvite;                                                // 0x002A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsLeader;                                                 // 0x002B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsReady;                                                  // 0x002C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_PopupButtonConfig
// 0x0030
struct FPUMG_PopupButtonConfig
{
	struct FText                                       Label;                                                    // 0x0000(0x0018) (BlueprintVisible)
	struct FScriptMulticastDelegate                    Action;                                                   // 0x0018(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EPUMG_PopupButtonType                              Type;                                                     // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_PopupConfig
// 0x00D8
struct FPUMG_PopupConfig
{
	struct FText                                       Header;                                                   // 0x0000(0x0018) (BlueprintVisible)
	struct FText                                       SubHeading;                                               // 0x0018(0x0018) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PlatformUMG.PUMG_PopupConfig.HeadingIcon
	struct FText                                       Description;                                              // 0x0058(0x0018) (BlueprintVisible)
	struct FText                                       Warning;                                                  // 0x0070(0x0018) (BlueprintVisible)
	bool                                               TextEntry;                                                // 0x0088(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
	struct FText                                       TextEntryHint;                                            // 0x0090(0x0018) (BlueprintVisible)
	bool                                               IsImportant;                                              // 0x00A8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	TArray<struct FPUMG_PopupButtonConfig>             Buttons;                                                  // 0x00B0(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    CancelAction;                                             // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TEnumAsByte<ETextJustify>                          TextAlignment;                                            // 0x00D0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	int                                                PopupId;                                                  // 0x00D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_ClientQueueInfo
// 0x0040
struct FPUMG_ClientQueueInfo
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                ID;                                                       // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LevelLock;                                                // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxPartySize;                                             // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_SoundThemeEventMapping
// 0x0010
struct FPUMG_SoundThemeEventMapping
{
	struct FName                                       SoundEventName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SoundToPlay;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct PlatformUMG.PUMG_SettingsConfig
// 0x0050
struct FPUMG_SettingsConfig
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FText>                               ValueNames;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EPUMG_SettingUIType                                Type;                                                     // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FName                                       SettingId;                                                // 0x002C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinValue;                                                 // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxValue;                                                 // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StepValue;                                                // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DisplayAsPercent;                                         // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	int                                                Value;                                                    // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AvailableOffline;                                         // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsStoredInDatabase;                                       // 0x0049(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_KeyBindConfig
// 0x0080
struct FPUMG_KeyBindConfig
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       InputName;                                                // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPUMG_SettingUIType                                Type;                                                     // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FName                                       SettingId;                                                // 0x0024(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FKey                                        PrimaryKey;                                               // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FKey                                        SecondaryKey;                                             // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FKey                                        GamepadKey;                                               // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly)
	bool                                               IsGamepadOnly;                                            // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.InventoryId
// 0x0020
struct FInventoryId
{
	int64_t                                            PlayerId;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            ItemId;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct PlatformUMG.InventoryTypeId
// 0x0020
struct FInventoryTypeId
{
	int64_t                                            PlayerId;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemTypeId;                                               // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemSubTypeId;                                            // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct PlatformUMG.PUMG_LoadoutItem
// 0x0028
struct FPUMG_LoadoutItem
{
	struct FText                                       Name;                                                     // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                ItemId;                                                   // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SortOrder;                                                // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ItemType;                                                 // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformUMG.ViewRoute
// 0x0020 (0x0028 - 0x0008)
struct FViewRoute : public FTableRowBase
{
	class UClass*                                      ViewWidget;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ViewStickyWidgets;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
	bool                                               IsPopup;                                                  // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldHideWhenPopupOpened;                                // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsDefaultRoute;                                           // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldPreload;                                            // 0x0023(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
