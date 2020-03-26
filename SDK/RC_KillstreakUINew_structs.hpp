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

// Enum KillstreakUINew.EPerkTreeNodeState
enum class EPerkTreeNodeState : uint8_t
{
	NODE_OFF                       = 0,
	NODE_ERROR                     = 1,
	NODE_UNREACHABLE               = 2,
	NODE_UNAFFORDABLE              = 3,
	NODE_UNLOCKABLE                = 4,
	NODE_OWNED                     = 5,
	NODE_OWNED_EQUIPPED            = 6,
	NODE_MAX                       = 7
};


// Enum KillstreakUINew.ESpecialtyItemType
enum class ESpecialtyItemType : uint8_t
{
	ESpecItemType_SpecialtyPerk    = 0,
	ESpecItemType_GlobalPerk       = 1,
	ESpecItemType_Killstreak       = 2,
	ESpecItemType_Gadget           = 3,
	ESpecItemType_PistolAttachment = 4,
	ESpecItemType_Pistol           = 5,
	ESpecItemType_Specialty        = 6,
	ESpecItemType_AutoEquippedPerk = 7,
	ESpecItemType_SecondaryAbility = 8,
	ESpecItemType_LoadoutClass     = 9,
	ESpecItemType_LoadoutBundle    = 10,
	ESpecItemType_MAX              = 11
};


// Enum KillstreakUINew.EQueueType
enum class EQueueType : uint8_t
{
	QT_Training                    = 0,
	QT_PVP                         = 1,
	QT_PVE                         = 2,
	QT_None                        = 3,
	QT_MAX                         = 4
};


// Enum KillstreakUINew.ECombatEventType
enum class ECombatEventType : uint8_t
{
	CombatEvent_Down               = 0,
	CombatEvent_Elim               = 1,
	CombatEvent_Assist             = 2,
	CombatEvent_MAX                = 3
};


// Enum KillstreakUINew.EAllyMarkerState
enum class EAllyMarkerState : uint8_t
{
	Normal                         = 0,
	Downed                         = 1,
	Reviving                       = 2,
	Dead                           = 3,
	Hidden                         = 4,
	EAllyMarkerState_MAX           = 5
};


// Enum KillstreakUINew.EContextPromptAnchoring
enum class EContextPromptAnchoring : uint8_t
{
	AnchorLeft                     = 0,
	AnchorRight                    = 1,
	AnchorCenter                   = 2,
	EContextPromptAnchoring_MAX    = 3
};


// Enum KillstreakUINew.EConsoleCommandParamType
enum class EConsoleCommandParamType : uint8_t
{
	None                           = 0,
	Bool                           = 1,
	String                         = 2,
	EConsoleCommandParamType_MAX   = 3
};


// Enum KillstreakUINew.EReportPlayerReason
enum class EReportPlayerReason : uint8_t
{
	Unknown_None                   = 0,
	Harassment                     = 1,
	Teaming                        = 2,
	IntentionalFeeding             = 3,
	StreamSniping                  = 4,
	LeavingTheGame_AFK             = 5,
	OtherReason                    = 6,
	EReportPlayerReason_MAX        = 7
};


// Enum KillstreakUINew.EPlayerAccountSlot
enum class EPlayerAccountSlot : uint8_t
{
	AVATAR_SLOT                    = 0,
	BANNER_SLOT                    = 1,
	PREFERRED_MERC_SLOT            = 2,
	EPlayerAccountSlot_MAX         = 3
};


// Enum KillstreakUINew.ESocialMessageType
enum class ESocialMessageType : uint8_t
{
	EInvite                        = 0,
	EInviteResponse                = 1,
	EInviteExpired                 = 2,
	EInviteError                   = 3,
	EGenericMsg                    = 4,
	ESocialMessageType_MAX         = 5
};


// Enum KillstreakUINew.ELowAmmoState
enum class ELowAmmoState : uint8_t
{
	Normal                         = 0,
	NeedsReload                    = 1,
	LowAmmo                        = 2,
	NoAmmo                         = 3,
	ELowAmmoState_MAX              = 4
};


// Enum KillstreakUINew.EIconMarkerScreenRegion
enum class EIconMarkerScreenRegion : uint8_t
{
	Normal                         = 0,
	Center                         = 1,
	Edge                           = 2,
	EIconMarkerScreenRegion_MAX    = 3
};


// Enum KillstreakUINew.EIconHoverState
enum class EIconHoverState : uint8_t
{
	Unhovered                      = 0,
	Hovering                       = 1,
	Hovered                        = 2,
	Unhovering                     = 3,
	EIconHoverState_MAX            = 4
};


// Enum KillstreakUINew.EMinimapWidgetClampStyle
enum class EMinimapWidgetClampStyle : uint8_t
{
	Circular                       = 0,
	Square                         = 1,
	SquareByAngle                  = 2,
	SquareByProjection             = 3,
	EMinimapWidgetClampStyle_MAX   = 4
};


// Enum KillstreakUINew.ENewsActions
enum class ENewsActions : uint8_t
{
	ENewsActions_Unknown           = 0,
	ENewsActions_ExternalURL       = 1,
	ENewsActions_NavToRoute        = 2,
	ENewsActions_MAX               = 3
};


// Enum KillstreakUINew.EPerkTreeEdgeState
enum class EPerkTreeEdgeState : uint8_t
{
	EDGE_OFF                       = 0,
	EDGE_ERROR                     = 1,
	EDGE_UNREACHABLE               = 2,
	EDGE_TO_UNLOCKABLE             = 3,
	EDGE_OWNED                     = 4,
	EDGE_MAX                       = 5
};


// Enum KillstreakUINew.EPerkTreeEdgeType
enum class EPerkTreeEdgeType : uint8_t
{
	EDGE_TOP                       = 0,
	EDGE_LEFT                      = 1,
	EDGE_DIAGONAL                  = 2,
	EDGE_BACK_DIAGONAL             = 3,
	EDGE_MAX                       = 4
};


// Enum KillstreakUINew.EConfigPropertyGuidedCalloutScenes
enum class EConfigPropertyGuidedCalloutScenes : uint8_t
{
	NONE                           = 0,
	ROGUE_SCENE                    = 1,
	MAX_DO_NOT_GO_OVER             = 2,
	EConfigPropertyGuidedCalloutScenes_MAX = 3
};


// Enum KillstreakUINew.EKSPlayerOnlineStatus
enum class EKSPlayerOnlineStatus : uint8_t
{
	FGS_InParty                    = 0,
	FGS_Online                     = 1,
	FGS_DND                        = 2,
	FGS_Offline                    = 3,
	FGS_MAX                        = 4
};


// Enum KillstreakUINew.EPlayerSelectionState
enum class EPlayerSelectionState : uint8_t
{
	EPlayerState_Selecting         = 0,
	EPlayerState_Selected          = 1,
	EPlayerState_LockedIn          = 2,
	EPlayerState_MAX               = 3
};


// Enum KillstreakUINew.EPointObjectiveMarkerTeamState
enum class EPointObjectiveMarkerTeamState : uint8_t
{
	Neutral                        = 0,
	AllyOwned                      = 1,
	EnemyOwned                     = 2,
	Contested                      = 3,
	EPointObjectiveMarkerTeamState_MAX = 4
};


// Enum KillstreakUINew.EPointObjectiveMarkerObjectiveState
enum class EPointObjectiveMarkerObjectiveState : uint8_t
{
	Locked                         = 0,
	Unlocked                       = 1,
	Capturing                      = 2,
	Captured                       = 3,
	Recapturing                    = 4,
	EPointObjectiveMarkerObjectiveState_MAX = 5
};


// Enum KillstreakUINew.EAmmoState
enum class EAmmoState : uint8_t
{
	EAmmoState_Full                = 0,
	EAmmoState_NeedsReload         = 1,
	EAmmoState_LowAmmo             = 2,
	EAmmoState_CriticallyLowAmmo   = 3,
	EAmmoState_NoAmmo              = 4,
	EAmmoState_MAX                 = 5
};


// Enum KillstreakUINew.EKSSettingType
enum class EKSSettingType : uint8_t
{
	Bool                           = 0,
	Int                            = 1,
	Float                          = 2,
	Key                            = 3,
	Invalid                        = 4,
	EKSSettingType_MAX             = 5
};


// Enum KillstreakUINew.EPUMG_ShopItemUpgradeSegmentType
enum class EPUMG_ShopItemUpgradeSegmentType : uint8_t
{
	Single                         = 0,
	First                          = 1,
	Middle                         = 2,
	Last                           = 3,
	EPUMG_MAX                      = 4
};


// Enum KillstreakUINew.EToastCategory
enum class EToastCategory : uint8_t
{
	ETOAST_INFO                    = 0,
	ETOAST_ERROR                   = 1,
	ETOAST_FRIEND                  = 2,
	ETOAST_PARTY                   = 3,
	ETOAST_MAX                     = 4
};


// Enum KillstreakUINew.EKSVendorTypes
enum class EKSVendorTypes : uint8_t
{
	Unknown                        = 0,
	Equipment                      = 1,
	Specialty                      = 2,
	SpecialtyItem                  = 3,
	StarterSpecLoadout             = 4,
	Apparel                        = 5,
	StarterApparelLoadout          = 6,
	MalwearApparelLoadout          = 7,
	MercTwoApparelLoadout          = 8,
	HitmanApparelLoadout           = 9,
	EKSVendorTypes_MAX             = 10
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KillstreakUINew.TickAnimationParams
// 0x002C
struct FTickAnimationParams
{
	float                                              Duration;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             UpdateEvent;                                              // 0x0004(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             FinishedEvent;                                            // 0x0014(0x0010) (ZeroConstructor, InstancedReference)
	bool                                               IsPlaying;                                                // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	float                                              ElapsedTime;                                              // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.ContextAction
// 0x0038 (0x0040 - 0x0008)
struct FContextAction : public FTableRowBase
{
	struct FKey                                        Key;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Text;                                                     // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                SortOrder;                                                // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EContextPromptAnchoring                            Anchor;                                                   // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.RouteContextInfo
// 0x0010
struct FRouteContextInfo
{
	TArray<class UContextActionData*>                  ActionData;                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct KillstreakUINew.ContextualPing
// 0x0040 (0x0048 - 0x0008)
struct FContextualPing : public FTableRowBase
{
	EPingType                                          PingType;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FLinearColor                                PingColor;                                                // 0x000C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x28];                                      // 0x001C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KillstreakUINew.ContextualPing.PingIcon
};

// ScriptStruct KillstreakUINew.DebugMenuCommandInfo
// 0x0018
struct FDebugMenuCommandInfo
{
	struct FString                                     CommandName;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EConsoleCommandParamType                           ParamType;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.EliminationMessage
// 0x0040
struct FEliminationMessage
{
	struct FString                                     VictimName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     InstigatorName;                                           // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FText                                       Message;                                                  // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                DamageDealt;                                              // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECombatEventType                                   EventType;                                                // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsVictim;                                                 // 0x003D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsSelf;                                                   // 0x003E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x003F(0x0001) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.ExpDisplayInfo
// 0x0028
struct FExpDisplayInfo
{
	int                                                EventDelta;                                               // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       EventReason;                                              // 0x0008(0x0018) (BlueprintVisible)
	bool                                               bIsBonus;                                                 // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.ButtonPromptData
// 0x0030
struct FButtonPromptData
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (BlueprintVisible)
	struct FText                                       Text;                                                     // 0x0018(0x0018) (BlueprintVisible)
};

// ScriptStruct KillstreakUINew.ButtonPromptContext
// 0x0010
struct FButtonPromptContext
{
	TArray<struct FButtonPromptData>                   PromptInfo;                                               // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct KillstreakUINew.RoundResultAnnoucement
// 0x0020
struct FRoundResultAnnoucement
{
	int                                                WinningTeamID;                                            // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       ResultText;                                               // 0x0008(0x0018) (BlueprintVisible)
};

// ScriptStruct KillstreakUINew.CustomLoadoutItem
// 0x0010
struct FCustomLoadoutItem
{
	class UKSItem*                                     Item;                                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESpecialtyItemType                                 SpecialtyItemType;                                        // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                LoadoutClassItemId;                                       // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSPerkTreeEdgeInfo
// 0x0002
struct FKSPerkTreeEdgeInfo
{
	EPerkTreeEdgeType                                  EdgeType;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPerkTreeEdgeState                                 EdgeState;                                                // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.JobEntry
// 0x0010
struct FJobEntry
{
	class UKSJobItem*                                  JobItem;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EJobSelectionState                                 JobSelectionState;                                        // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.JobRoleSection
// 0x0018
struct FJobRoleSection
{
	class UKSJobRole*                                  JobRole;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FJobEntry>                           AssociatedEntries;                                        // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct KillstreakUINew.KSPointObjectiveMarkerViewState
// 0x000C
struct FKSPointObjectiveMarkerViewState
{
	struct FName                                       ObjectiveState;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPointObjectiveMarkerTeamState                     TeamState;                                                // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsBombDeployedHere;                                       // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.UIMapInfo
// 0x0048 (0x0050 - 0x0008)
struct FUIMapInfo : public FTableRowBase
{
	int                                                MapId;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       DisplayName;                                              // 0x0010(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KillstreakUINew.UIMapInfo.MapThumbnail
};

// ScriptStruct KillstreakUINew.ClientQueueInfo
// 0x0040 (0x0080 - 0x0040)
struct FClientQueueInfo : public FPUMG_ClientQueueInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KillstreakUINew.ClientQueueInfo.ItemIcon
	EQueueType                                         QueueType;                                                // 0x0068(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	TArray<struct FUIMapInfo>                          MapRotationInfos;                                         // 0x0070(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct KillstreakUINew.QueueSection
// 0x0018
struct FQueueSection
{
	EQueueType                                         QueueSectionType;                                         // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FClientQueueInfo>                    AssociatedQueues;                                         // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct KillstreakUINew.KSAllowedPlatformTypes
// 0x0008
struct FKSAllowedPlatformTypes
{
	bool                                               XboxOne;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PS4;                                                      // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Switch;                                                   // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Windows;                                                  // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Mac;                                                      // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Linux;                                                    // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IOS;                                                      // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Android;                                                  // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSRequiredInputTypes
// 0x0002
struct FKSRequiredInputTypes
{
	bool                                               Gamepad;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Mouse;                                                    // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSSettingsWidgetConfig
// 0x0010
struct FKSSettingsWidgetConfig
{
	class UClass*                                      WidgetClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SettingInfo;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct KillstreakUINew.KSSettingsContainerConfig
// 0x00F0
struct FKSSettingsContainerConfig
{
	struct FText                                       SettingName;                                              // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<struct FString, struct FText>                 SettingNameByPlatform;                                    // 0x0018(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       SettingDescription;                                       // 0x0068(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<struct FString, struct FText>                 SettingDescriptionByPlatform;                             // 0x0080(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsAvailableOffline;                                      // 0x00D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSAllowedPlatformTypes                     AllowedPlatformTypes;                                     // 0x00D1(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FKSRequiredInputTypes                       RequiredInputTypes;                                       // 0x00D9(0x0002) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x5];                                       // 0x00DB(0x0005) MISSED OFFSET
	TArray<struct FKSSettingsWidgetConfig>             WidgetConfigs;                                            // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct KillstreakUINew.KSSettingsGroupConfig
// 0x0100
struct FKSSettingsGroupConfig
{
	struct FKSSettingsContainerConfig                  MainSettingContainer;                                     // 0x0000(0x00F0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FKSSettingsContainerConfig>          SubSettingContainers;                                     // 0x00F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct KillstreakUINew.KSSettingsSectionConfig
// 0x0078
struct FKSSettingsSectionConfig
{
	struct FText                                       Heading;                                                  // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<struct FString, struct FText>                 HeadingByPlatform;                                        // 0x0018(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FKSSettingsGroupConfig>              SettingsGroups;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct KillstreakUINew.KSSettingsPageConfig
// 0x0078
struct FKSSettingsPageConfig
{
	struct FText                                       PageName;                                                 // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TMap<struct FString, struct FText>                 HeadingByPlatform;                                        // 0x0018(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FKSSettingsSectionConfig>            SettingsSections;                                         // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct KillstreakUINew.KSSettingPropertyId
// 0x0018
struct FKSSettingPropertyId
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	int                                                ID;                                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSSettingsMenuConfig
// 0x0010
struct FKSSettingsMenuConfig
{
	TArray<struct FKSSettingsPageConfig>               SettingsPages;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct KillstreakUINew.SettingDelegateStruct
// 0x0020
struct FSettingDelegateStruct
{
	struct FScriptDelegate                             SettingApplied;                                           // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             SettingSaved;                                             // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)
};

// ScriptStruct KillstreakUINew.KSKeyBind
// 0x0060
struct FKSKeyBind
{
	struct FKey                                        Primary;                                                  // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        Secondary;                                                // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        Gamepad;                                                  // 0x0030(0x0018) (Edit, BlueprintVisible)
	struct FKey                                        Combo;                                                    // 0x0048(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct KillstreakUINew.KSKeyBindInfo
// 0x0010
struct FKSKeyBindInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EKSInputType                                       InputType;                                                // 0x000C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EKSKeyBindType                                     KeyBindType;                                              // 0x000D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsPermanentBinding;                                       // 0x000E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.ToastData
// 0x0020
struct FToastData
{
	EToastCategory                                     ToastCategory;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       Message;                                                  // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct KillstreakUINew.PlayerInventorySlot
// 0x0018
struct FPlayerInventorySlot
{
	int                                                SlotIndex;                                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UKSWeaponAsset*                              WeaponAsset;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                SlotEquipPoint;                                           // 0x0010(0x0008) (BlueprintVisible)
};

// ScriptStruct KillstreakUINew.KeyValue
// 0x0020
struct FKeyValue
{
	struct FString                                     Account;                                                  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct KillstreakUINew.PlayerLevelUp
// 0x0030
struct FPlayerLevelUp
{
	struct FActivityTier                               PlayerCurrentTier;                                        // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FActivityTier                               PlayerNewTier;                                            // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FActivityTier                               PlayerNextTier;                                           // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct KillstreakUINew.PlayerProgression
// 0x0048
struct FPlayerProgression
{
	struct FActivityTier                               CurrentTier;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FActivityTier                               NextTier;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FActivityTier                               PrevTier;                                                 // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly)
	int                                                PreviousProgress;                                         // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentProgress;                                          // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ProgressEarned;                                           // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlayerPreLevel;                                           // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlayerCurrentLevel;                                       // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.MatchDetail
// 0x0038
struct FMatchDetail
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.KSKeyGroup
// 0x0010
struct FKSKeyGroup
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct KillstreakUINew.SpecialtyData
// 0x0048
struct FSpecialtyData
{
	class UKSSpecialty*                                Specialty;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FCustomLoadoutItem                          Killstreak;                                               // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FCustomLoadoutItem                          SecondaryAbility;                                         // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FCustomLoadoutItem                          PassiveAbility;                                           // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly)
	TArray<int>                                        AssociatedLoadoutItemIds;                                 // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct KillstreakUINew.SpecialtyCustomLoadout
// 0x01A0
struct FSpecialtyCustomLoadout
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	int                                                LoadoutClassItemId;                                       // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LoadoutBundleItemId;                                      // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSpecialtyData                              SpecialtyOne;                                             // 0x0010(0x0048) (BlueprintVisible)
	struct FSpecialtyData                              SpecialtyTwo;                                             // 0x0058(0x0048) (BlueprintVisible)
	struct FCustomLoadoutItem                          PerkOne;                                                  // 0x00A0(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PerkTwo;                                                  // 0x00B0(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PerkThree;                                                // 0x00C0(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PerkFour;                                                 // 0x00D0(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PassiveOne;                                               // 0x00E0(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PassiveTwo;                                               // 0x00F0(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          KillstreakOne;                                            // 0x0100(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          KillstreakTwo;                                            // 0x0110(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          SecondaryAbilityOne;                                      // 0x0120(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          SecondaryAbilityTwo;                                      // 0x0130(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          GadgetOne;                                                // 0x0140(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          Pistol;                                                   // 0x0150(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PistolAttachmentOne;                                      // 0x0160(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PistolAttachmentTwo;                                      // 0x0170(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PistolAttachmentThree;                                    // 0x0180(0x0010) (BlueprintVisible)
	struct FCustomLoadoutItem                          PrimaryWeapon;                                            // 0x0190(0x0010) (BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
