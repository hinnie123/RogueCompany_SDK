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

// Enum Killstreak.EItemSourceType
enum class EItemSourceType : uint8_t
{
	Unknown                        = 0,
	AbilityUse                     = 1,
	Cheat                          = 2,
	InitialInventory               = 3,
	LobbyAnimation                 = 4,
	PickupInteraction              = 5,
	Refund                         = 6,
	RestoreInventory               = 7,
	StorePurchase                  = 8,
	WeaponSwap                     = 9,
	EItemSourceType_MAX            = 10
};


// Enum Killstreak.EKSCharacterAimMode
enum class EKSCharacterAimMode : uint8_t
{
	Default                        = 0,
	TransitionToDefault            = 1,
	Shoulder                       = 2,
	TransitionToShoulder           = 3,
	AimDownSights                  = 4,
	TransitionToAimDownSights      = 5,
	Alternate                      = 6,
	TransitionToAlternate          = 7,
	EKSCharacterAimMode_MAX        = 8
};


// Enum Killstreak.EKSEmotion
enum class EKSEmotion : uint8_t
{
	Neutral                        = 0,
	Focused                        = 1,
	Pain                           = 2,
	Wounded                        = 3,
	Dead                           = 4,
	MAX                            = 5
};


// Enum Killstreak.EAmmoType
enum class EAmmoType : uint8_t
{
	NINE_MM                        = 0,
	SEVEN                          = 1,
	FIVE                           = 2,
	TWELVE_G                       = 3,
	FORTY_FIVE                     = 4,
	THREE_HUND                     = 5,
	TWENTY_TWO                     = 6,
	FIFTY                          = 7,
	NONE                           = 8,
	EAmmoType_MAX                  = 9
};


// Enum Killstreak.ECharacterBehaviorState
enum class ECharacterBehaviorState : uint8_t
{
	Combat                         = 0,
	Idle                           = 1,
	Skydive                        = 2,
	ECharacterBehaviorState_MAX    = 3
};


// Enum Killstreak.EKSItemUsageFailureType
enum class EKSItemUsageFailureType : uint8_t
{
	Unknown                        = 0,
	NotEnoughQuantity              = 1,
	BlockingAction                 = 2,
	NoEffect                       = 3,
	EMP                            = 4,
	EKSItemUsageFailureType_MAX    = 5
};


// Enum Killstreak.EShotgunHitResult
enum class EShotgunHitResult : uint8_t
{
	Miss                           = 0,
	Hit                            = 1,
	Headshot                       = 2,
	EShotgunHitResult_MAX          = 3
};


// Enum Killstreak.ELootSiteRarity
enum class ELootSiteRarity : uint8_t
{
	Personal                       = 0,
	Normal                         = 1,
	Uncommon                       = 2,
	Epic                           = 3,
	Rare                           = 4,
	Legendary                      = 5,
	NonWeapons                     = 6,
	ChildSpawner                   = 7,
	CarePackage                    = 8,
	MedPack                        = 9,
	StartingDrop                   = 10,
	GameMode                       = 11,
	ELootSiteRarity_MAX            = 12
};


// Enum Killstreak.ECombatEventFriendlyFireType
enum class ECombatEventFriendlyFireType : uint8_t
{
	Enemy                          = 0,
	Friendly                       = 1,
	ReverseFriendly                = 2,
	Self                           = 3,
	ECombatEventFriendlyFireType_MAX = 4
};


// Enum Killstreak.ECombatEventRepType
enum class ECombatEventRepType : uint8_t
{
	Basic                          = 0,
	AdvancedStart                  = 1,
	AdvancedEnd                    = 2,
	ECombatEventRepType_MAX        = 3
};


// Enum Killstreak.EProjectileExplosionType
enum class EProjectileExplosionType : uint8_t
{
	Impact                         = 0,
	Fizzle                         = 1,
	FuseExpired                    = 2,
	EProjectileExplosionType_MAX   = 3
};


// Enum Killstreak.EHitLocationType
enum class EHitLocationType : uint8_t
{
	Body                           = 0,
	Head                           = 1,
	Limb                           = 2,
	None                           = 3,
	EHitLocationType_MAX           = 4
};


// Enum Killstreak.EKSVoicelineAudience
enum class EKSVoicelineAudience : uint8_t
{
	Self                           = 0,
	Nearby                         = 1,
	NearbyFriendlies               = 2,
	AllFriendlies                  = 3,
	Enemies                        = 4,
	EKSVoicelineAudience_MAX       = 5
};


// Enum Killstreak.EAccoladeEventType
enum class EAccoladeEventType : uint8_t
{
	AccoladeEvent_Unknown          = 0,
	AccoladeEvent_Elim             = 1,
	AccoladeEvent_Downed           = 2,
	AccoladeEvent_Revived          = 3,
	AccoladeEvent_DownAssist       = 4,
	AccoladeEvent_CombatEvent      = 5,
	AccoladeEvent_MAX              = 6
};


// Enum Killstreak.EAccoladeCategory
enum class EAccoladeCategory : uint8_t
{
	AccoladeCategory_DownsElims    = 0,
	AccoladeCategory_MultiKill     = 1,
	AccoladeCategory_Support       = 2,
	AccoladeCategory_MAX           = 3
};


// Enum Killstreak.EDisplayType
enum class EDisplayType : uint8_t
{
	Mini                           = 0,
	Full                           = 1,
	Overlay                        = 2,
	EDisplayType_MAX               = 3
};


// Enum Killstreak.EPingFailedType
enum class EPingFailedType : uint8_t
{
	None                           = 0,
	Throttled                      = 1,
	NoTarget                       = 2,
	InvalidPingType                = 3,
	EPingFailedType_MAX            = 4
};


// Enum Killstreak.EPingType
enum class EPingType : uint8_t
{
	None                           = 0,
	Waypoint                       = 1,
	EnemySpotted                   = 2,
	Caution                        = 3,
	Item                           = 4,
	Objective                      = 5,
	Task                           = 6,
	EPingType_MAX                  = 7
};


// Enum Killstreak.ESplineBehaviourType
enum class ESplineBehaviourType : uint8_t
{
	OneShot                        = 0,
	OneShot_Reverse                = 1,
	Loop_Reset                     = 2,
	PingPong                       = 3,
	ESplineBehaviourType_MAX       = 4
};


// Enum Killstreak.EShopItemType
enum class EShopItemType : uint8_t
{
	None                           = 0,
	PrimaryOne                     = 1,
	PrimaryTwo                     = 2,
	SecondaryOne                   = 3,
	SecondaryTwo                   = 4,
	GadgetOne                      = 5,
	GadgetTwo                      = 6,
	Melee                          = 7,
	PerkOne                        = 8,
	PerkTwo                        = 9,
	PerkThree                      = 10,
	PerkFour                       = 11,
	PerkFive                       = 12,
	PerkSix                        = 13,
	GambitOne                      = 14,
	GambitTwo                      = 15,
	GambitThree                    = 16,
	GlobalPerk1                    = 17,
	GlobalPerk2                    = 18,
	GlobalPerk3                    = 19,
	GlobalPerk4                    = 20,
	GlobalPerk5                    = 21,
	GlobalPerk6                    = 22,
	GlobalPerk7                    = 23,
	GlobalPerk8                    = 24,
	GlobalPerk9                    = 25,
	GlobalPerk10                   = 26,
	GlobalPerk11                   = 27,
	GlobalPerk12                   = 28,
	GlobalPerk13                   = 29,
	GlobalPerk14                   = 30,
	GlobalPerk15                   = 31,
	MAX                            = 32
};


// Enum Killstreak.ETrackedActorType
enum class ETrackedActorType : uint8_t
{
	Unknown                        = 0,
	ShieldWeapon                   = 1,
	MagGloveTarget                 = 2,
	CoopEscapePoint                = 3,
	BountyTarget                   = 4,
	BombDrop                       = 5,
	CashDrop                       = 6,
	Projectile                     = 7,
	HackTablet                     = 8,
	ETrackedActorType_MAX          = 9
};


// Enum Killstreak.EKSNeutralBombState
enum class EKSNeutralBombState : uint8_t
{
	Spawned                        = 0,
	Reset                          = 1,
	Held                           = 2,
	Dropped                        = 3,
	Arming                         = 4,
	Armed                          = 5,
	Disarming                      = 6,
	Disarmed                       = 7,
	EKSNeutralBombState_MAX        = 8
};


// Enum Killstreak.EJobSelectionState
enum class EJobSelectionState : uint8_t
{
	Available                      = 0,
	Selected                       = 1,
	LockedIn                       = 2,
	EJobSelectionState_MAX         = 3
};


// Enum Killstreak.EKSJobSelectPreviewLoadState
enum class EKSJobSelectPreviewLoadState : uint8_t
{
	NoPreview                      = 0,
	PreviewActive                  = 1,
	PreviewLoadingNoVisible        = 2,
	PreviewLoadingActiveVisible    = 3,
	EKSJobSelectPreviewLoadState_MAX = 4
};


// Enum Killstreak.ETeamAlignment
enum class ETeamAlignment : uint8_t
{
	TMAL_Neutral                   = 0,
	TMAL_Enemy                     = 1,
	TMAL_Friendly                  = 2,
	TMAL_MAX                       = 3
};


// Enum Killstreak.EAnnouncementType
enum class EAnnouncementType : uint8_t
{
	ANMT_Uknown                    = 0,
	ANMT_ObjectiveMilestone        = 1,
	ANMT_PlayersLeft               = 2,
	ANMT_LastPlayerStanding        = 3,
	ANMT_RoyalePhase               = 4,
	ANMT_MAX                       = 5
};


// Enum Killstreak.EGameResult
enum class EGameResult : uint8_t
{
	Victory                        = 0,
	Defeat                         = 1,
	Draw                           = 2,
	EGameResult_MAX                = 3
};


// Enum Killstreak.EKSInteractionResult
enum class EKSInteractionResult : uint8_t
{
	None                           = 0,
	Success                        = 1,
	Interrupted                    = 2,
	Failed                         = 3,
	EKSInteractionResult_MAX       = 4
};


// Enum Killstreak.EKSAbilityUsageFailureType
enum class EKSAbilityUsageFailureType : uint8_t
{
	Unknown                        = 0,
	Dead                           = 1,
	Downed                         = 2,
	EMP                            = 3,
	NoFireZone                     = 4,
	AlreadyActivating              = 5,
	Driving                        = 6,
	Stunned                        = 7,
	BlockingMovement               = 8,
	HardLanding                    = 9,
	OutOfBounds                    = 10,
	Locked                         = 11,
	AltLocked                      = 12,
	NotEnoughCharge                = 13,
	NoBountyTarget                 = 14,
	AlreadyHasWeapon               = 15,
	WeaponBusy                     = 16,
	RoundNotInProgress             = 17,
	EKSAbilityUsageFailureType_MAX = 18
};


// Enum Killstreak.EWeaponStateNew
enum class EWeaponStateNew : uint8_t
{
	Idle                           = 0,
	Buildup                        = 1,
	PreFire                        = 2,
	PostFire                       = 3,
	Cooldown                       = 4,
	PreReload                      = 5,
	PostReload                     = 6,
	ReloadCooldown                 = 7,
	Retrieve                       = 8,
	Holster                        = 9,
	Inactive                       = 10,
	EWeaponStateNew_MAX            = 11
};


// Enum Killstreak.EKSPingType
enum class EKSPingType : uint8_t
{
	PING_DEFAULT                   = 0,
	PING_RADAR                     = 1,
	PING_INTEL                     = 2,
	PING_TRACKER                   = 3,
	PING_BOMB_HOLDER               = 4,
	PING_MAX                       = 5
};


// Enum Killstreak.ESurfaceTargetErrorReason
enum class ESurfaceTargetErrorReason : uint8_t
{
	None                           = 0,
	TooFar                         = 1,
	TooHigh                        = 2,
	NoRoomAtOrigin                 = 3,
	InvalidSurface                 = 4,
	TooClose                       = 5,
	AimBlocked                     = 6,
	ESurfaceTargetErrorReason_MAX  = 7
};


// Enum Killstreak.EAimDataMode
enum class EAimDataMode : uint8_t
{
	NoEndTrace                     = 0,
	EndTraceFromStartTrace         = 1,
	EndTraceFromViewPoint          = 2,
	Shotgun                        = 3,
	EAimDataMode_MAX               = 4
};


// Enum Killstreak.EKSActivityProgressDisplayType
enum class EKSActivityProgressDisplayType : uint8_t
{
	Default                        = 0,
	RawProgress                    = 1,
	PercentToNextTier              = 2,
	PercentToMaxTier               = 3,
	MinutesAsDuration              = 4,
	CurrentTier                    = 5,
	None                           = 6,
	EKSActivityProgressDisplayType_MAX = 7
};


// Enum Killstreak.EKSActivityTimeQueryType
enum class EKSActivityTimeQueryType : uint8_t
{
	All                            = 0,
	OnlyFinished                   = 1,
	OnlyUnfinished                 = 2,
	EKSActivityTimeQueryType_MAX   = 3
};


// Enum Killstreak.EKSActivityManagerSetupPhase
enum class EKSActivityManagerSetupPhase : uint8_t
{
	None                           = 0,
	InitialAssetScan               = 1,
	RequestAchievements            = 2,
	RequestStoreVendors            = 3,
	RequestXpTables                = 4,
	LoadActivities                 = 5,
	WaitForSelectionPhaseFinished  = 6,
	AttemptInitialActivityCreation = 7,
	Done                           = 8,
	EKSActivityManagerSetupPhase_MAX = 9
};


// Enum Killstreak.EKSActivityInstanceQueryType
enum class EKSActivityInstanceQueryType : uint8_t
{
	LowestProgress                 = 0,
	HighestProgress                = 1,
	LowestTier                     = 2,
	HighestTier                    = 3,
	EKSActivityInstanceQueryType_MAX = 4
};


// Enum Killstreak.EReviveDroneFlightPath
enum class EReviveDroneFlightPath : uint8_t
{
	Drop                           = 0,
	Left                           = 1,
	Right                          = 2,
	EReviveDroneFlightPath_MAX     = 3
};


// Enum Killstreak.EReviveDroneState
enum class EReviveDroneState : uint8_t
{
	Release                        = 0,
	Transit                        = 1,
	Arrival                        = 2,
	Hover                          = 3,
	Leave                          = 4,
	EReviveDroneState_MAX          = 5
};


// Enum Killstreak.EAgentRefundMethod
enum class EAgentRefundMethod : uint8_t
{
	GiveWeaponAsset                = 0,
	BroadcastDelegate              = 1,
	EAgentRefundMethod_MAX         = 2
};


// Enum Killstreak.EKSAimAssistInputFlag
enum class EKSAimAssistInputFlag : uint8_t
{
	GamepadOnly                    = 0,
	GamepadAndTouch                = 1,
	AllInputModes                  = 2,
	EKSAimAssistInputFlag_MAX      = 3
};


// Enum Killstreak.EKSAimAssistActivationType
enum class EKSAimAssistActivationType : uint8_t
{
	AIMASSIST_DEFAULT              = 0,
	AIMASSIST_ALWAYSON             = 1,
	AIMASSIST_ALWAYSOFF            = 2,
	AIMASSIST_MAX                  = 3
};


// Enum Killstreak.EKSAnalogStickType
enum class EKSAnalogStickType : uint8_t
{
	Unknown                        = 0,
	Left                           = 1,
	Right                          = 2,
	EKSAnalogStickType_MAX         = 3
};


// Enum Killstreak.EActorFocalPoint
enum class EActorFocalPoint : uint8_t
{
	ActorFocalPoint_None           = 0,
	ActorFocalPoint_Head           = 1,
	ActorFocalPoint_Body           = 2,
	ActorFocalPoint_LeftShoulder   = 3,
	ActorFocalPoint_RightShoulder  = 4,
	ActorFocalPoint_MAX            = 5
};


// Enum Killstreak.EKSArmVisibilityType
enum class EKSArmVisibilityType : uint8_t
{
	HideNothing                    = 0,
	ArmAndWeapon                   = 1,
	WeaponOnly                     = 2,
	EKSArmVisibilityType_MAX       = 3
};


// Enum Killstreak.EKSRevealType
enum class EKSRevealType : uint8_t
{
	NotRevealed                    = 0,
	Normal                         = 1,
	Permanent                      = 2,
	EKSRevealType_MAX              = 3
};


// Enum Killstreak.EKSPlayerHand
enum class EKSPlayerHand : uint8_t
{
	LeftHand                       = 0,
	RightHand                      = 1,
	EKSPlayerHand_MAX              = 2
};


// Enum Killstreak.EKSMaterialHideType
enum class EKSMaterialHideType : uint8_t
{
	CastsShadowWhenHidden          = 0,
	DoesNotCastShadowWhenHidden    = 1,
	EKSMaterialHideType_MAX        = 2
};


// Enum Killstreak.EKSVehicleState
enum class EKSVehicleState : uint8_t
{
	Outside                        = 0,
	Entering                       = 1,
	Driver                         = 2,
	Passenger                      = 3,
	Exiting                        = 4,
	EKSVehicleState_MAX            = 5
};


// Enum Killstreak.EAimDownSightsMode
enum class EAimDownSightsMode : uint8_t
{
	Toggle                         = 0,
	PressAndHold                   = 1,
	EAimDownSightsMode_MAX         = 2
};


// Enum Killstreak.EKSQualitySwitch
enum class EKSQualitySwitch : uint8_t
{
	LocomotionCached               = 0,
	SecondLocomotionCached         = 1,
	PreAimArray                    = 2,
	PostWingSuit                   = 3,
	Finalized3p                    = 4,
	PreFacialAnimation             = 5,
	PostFacialAnimation            = 6,
	PrePowSlide_SklController      = 7,
	PreHitReactions                = 8,
	PostFootIK                     = 9,
	PostZiplinePullyLocks          = 10,
	PostZiplineSkeletalControllers = 11,
	PreRecoil                      = 12,
	PostRecoil                     = 13,
	PreCounterRotate               = 14,
	SkeletalControllersPostIK      = 15,
	PreVaulting_SKLController      = 16,
	PostVaulting_SKLController     = 17,
	EKSQualitySwitch_MAX           = 18
};


// Enum Killstreak.EKSTurnInPlaceAnimationVariant
enum class EKSTurnInPlaceAnimationVariant : uint8_t
{
	Left90                         = 0,
	Left180                        = 1,
	Right90                        = 2,
	Right180                       = 3,
	EKSTurnInPlaceAnimationVariant_MAX = 4
};


// Enum Killstreak.EKSLocomotionState
enum class EKSLocomotionState : uint8_t
{
	Idle                           = 0,
	InMotion                       = 1,
	Stopping                       = 2,
	Pivoting                       = 3,
	EKSLocomotionState_MAX         = 4
};


// Enum Killstreak.EKSQueuedMovement
enum class EKSQueuedMovement : uint8_t
{
	Jump                           = 0,
	DodgeRoll                      = 1,
	None                           = 2,
	EKSQueuedMovement_MAX          = 3
};


// Enum Killstreak.EKSDeathState
enum class EKSDeathState : uint8_t
{
	NotDead                        = 0,
	NormalDeath                    = 1,
	EKSDeathState_MAX              = 2
};


// Enum Killstreak.EFlashBangIntensity
enum class EFlashBangIntensity : uint8_t
{
	Min                            = 0,
	Half                           = 1,
	Max                            = 2
};


// Enum Killstreak.EInterruptNotifyBehaviorType
enum class EInterruptNotifyBehaviorType : uint8_t
{
	NoNotify                       = 0,
	OnlyIfMarkedPlaying            = 1,
	EInterruptNotifyBehaviorType_MAX = 2
};


// Enum Killstreak.EKSEmoteInterruptReason
enum class EKSEmoteInterruptReason : uint8_t
{
	Unknown                        = 0,
	NoCharacter                    = 1,
	Walking                        = 2,
	Sprinting                      = 3,
	Downed                         = 4,
	Dead                           = 5,
	Interacting                    = 6,
	Zipline                        = 7,
	SkyDiving                      = 8,
	DodgeRolling                   = 9,
	Falling                        = 10,
	NonEmoteEquipment              = 11,
	EmoteActivated                 = 12,
	EmoteCooldown                  = 13,
	InvalidTargeting               = 14,
	EKSEmoteInterruptReason_MAX    = 15
};


// Enum Killstreak.EKSLootRespawnMode
enum class EKSLootRespawnMode : uint8_t
{
	RespawnActiveSites             = 0,
	RespawnRandomSites             = 1,
	EKSLootRespawnMode_MAX         = 2
};


// Enum Killstreak.EKSRewardType
enum class EKSRewardType : uint8_t
{
	MatchInProgress                = 0,
	Winner                         = 1,
	Loser                          = 2,
	Draw                           = 3,
	EKSRewardType_MAX              = 4
};


// Enum Killstreak.EPlayerInfoInventoryRestoreType
enum class EPlayerInfoInventoryRestoreType : uint8_t
{
	ResetToStartingInventory       = 0,
	KeepInventory                  = 1,
	KeepInventoryIfNotDead         = 2,
	KeepGunsOnly                   = 3,
	UseNewMethod                   = 4,
	EPlayerInfoInventoryRestoreType_MAX = 5
};


// Enum Killstreak.EKillCamStatus
enum class EKillCamStatus : uint8_t
{
	KillCamEnabled                 = 0,
	KillCamDisabled                = 1,
	EKillCamStatus_MAX             = 2
};


// Enum Killstreak.EKSGamepadIcons
enum class EKSGamepadIcons : uint8_t
{
	XboxOne                        = 0,
	PlayStation4                   = 1,
	NintendoSwitch                 = 2,
	EKSGamepadIcons_MAX            = 3
};


// Enum Killstreak.EGyroMode
enum class EGyroMode : uint8_t
{
	None                           = 0,
	AimOnly                        = 1,
	Always                         = 2,
	EGyroMode_MAX                  = 3
};


// Enum Killstreak.EADSMode
enum class EADSMode : uint8_t
{
	Hold                           = 0,
	Toggle                         = 1,
	Both                           = 2,
	EADSMode_MAX                   = 3
};


// Enum Killstreak.EInMatchStoreError
enum class EInMatchStoreError : uint8_t
{
	NotEnoughMoney                 = 0,
	NullItem                       = 1,
	DeadCharacter                  = 2,
	InvalidPlayer                  = 3,
	BuyingSameItem                 = 4,
	CantEquip                      = 5,
	BadSlot                        = 6,
	EquipFailed                    = 7,
	InvalidGameMode                = 8,
	PurchasesLocked                = 9,
	ItemDidNotReplicate            = 10,
	EInMatchStoreError_MAX         = 11
};


// Enum Killstreak.EKSLabelAndHighlightState
enum class EKSLabelAndHighlightState : uint8_t
{
	NotTargeted                    = 0,
	Targeted                       = 1,
	EKSLabelAndHighlightState_MAX  = 2
};


// Enum Killstreak.EJobLoadoutSlot
enum class EJobLoadoutSlot : uint8_t
{
	JobSlot_Unknown                = 0,
	JobSlot_JobItem                = 1,
	JobSlot_UniqueItem             = 2,
	JobSlot_PrimaryWeapon          = 3,
	JobSlot_PrimaryWeaponAttachment = 4,
	JobSlot_SecondaryWeapon        = 5,
	JobSlot_SecondaryWeaponAttachment = 6,
	JobSlot_Gadget                 = 7,
	JobSlot_PerkOne                = 8,
	JobSlot_PerkTwo                = 9,
	JobSlot_PrimaryWeapon_Alt      = 10,
	JobSlot_SecondaryWeapon_Alt    = 11,
	JobSlot_Gadget_Alt             = 12,
	JobSlot_Melee                  = 13,
	JobSlot_QuickMelee             = 14,
	JobSlot_MAX                    = 15
};


// Enum Killstreak.EMercCosmeticSlot
enum class EMercCosmeticSlot : uint8_t
{
	EMOTE_SLOT                     = 0,
	SKIN_BUNDLE_SLOT               = 1,
	WEAPON_WRAP_SLOT               = 2,
	EMercCosmeticSlot_MAX          = 3
};


// Enum Killstreak.ELobbyCharacterIndex
enum class ELobbyCharacterIndex : uint8_t
{
	LobbyCharacter_Unknown         = 0,
	LobbyCharacter_LocalPlayer     = 1,
	LobbyCharacter_PartyMemberOne  = 2,
	LobbyCharacter_PartyMemberTwo  = 3,
	LobbyCharacter_PartyMemberThree = 4,
	LobbyCharacter_RogueScreen     = 5,
	LobbyCharacter_MAX             = 6
};


// Enum Killstreak.ELobbyCharacterAnimState
enum class ELobbyCharacterAnimState : uint8_t
{
	LobbyAnim_Unknown              = 0,
	LobbyAnim_Login                = 1,
	LobbyAnim_Default              = 2,
	LobbyAnim_Hidden               = 3,
	LobbyAnim_Idle                 = 4,
	LobbyAnim_IntroWalk            = 5,
	LobbyAnim_EmoteOne             = 6,
	LobbyAnim_EmoteTwo             = 7,
	LobbyAnim_EmoteThree           = 8,
	LobbyAnim_EmoteFour            = 9,
	LobbyAnim_EmoteFive            = 10,
	LobbyAnim_PreMatchWalk         = 11,
	LobbyAnim_EOMBackground        = 12,
	LobbyAnim_PostMatchWalk        = 13,
	LobbyAnim_MidSequence          = 14,
	LobbyAnim_MAX                  = 15
};


// Enum Killstreak.ELobbyPresenceState
enum class ELobbyPresenceState : uint8_t
{
	ELobbyPresence_Unknown         = 0,
	ELobbyPresence_NotPresent      = 1,
	ELobbyPresence_PendingInvite   = 2,
	ELobbyPresence_Idle            = 3,
	ELobbyPresence_MAX             = 4
};


// Enum Killstreak.ELobbyLevelSequenceTag
enum class ELobbyLevelSequenceTag : uint8_t
{
	ELobbyLvlSeqTag_Login          = 0,
	ELobbyLvlSeqTag_MAX            = 1
};


// Enum Killstreak.ELobbyCameraActorTag
enum class ELobbyCameraActorTag : uint8_t
{
	ELobbyCamTag_Home              = 0,
	ELobbyCamTag_CustomizeLoadout  = 1,
	ELobbyCamTag_LobbyMain         = 2,
	ELobbyCamTag_MAX               = 3
};


// Enum Killstreak.ELootSiteAlignment
enum class ELootSiteAlignment : uint8_t
{
	Attack                         = 0,
	Defend                         = 1,
	Contested                      = 2,
	ELootSiteAlignment_MAX         = 3
};


// Enum Killstreak.EKSMantleScaleType
enum class EKSMantleScaleType : uint8_t
{
	ScaleDistOnly                  = 0,
	ScaleDistAndTime               = 1,
	ShaveIntro                     = 2,
	EKSMantleScaleType_MAX         = 3
};


// Enum Killstreak.EKSMercMasteryActivityType
enum class EKSMercMasteryActivityType : uint8_t
{
	None                           = 0,
	MercXp                         = 1,
	Kills                          = 2,
	Deaths                         = 3,
	Damage                         = 4,
	Downs                          = 5,
	GamesPlayed                    = 6,
	GamesWon                       = 7,
	MinutesPlayed                  = 8,
	Headshots                      = 9,
	Revives                        = 10,
	MAX                            = 11
};


// Enum Killstreak.EKSRelativeMinimapHeight
enum class EKSRelativeMinimapHeight : uint8_t
{
	Below                          = 0,
	SameLevel                      = 1,
	Above                          = 2,
	EKSRelativeMinimapHeight_MAX   = 3
};


// Enum Killstreak.EThrowDirection
enum class EThrowDirection : uint8_t
{
	Back                           = 0,
	Front                          = 1,
	Left                           = 2,
	Right                          = 3,
	EThrowDirection_MAX            = 4
};


// Enum Killstreak.EKSNPEActivityType
enum class EKSNPEActivityType : uint8_t
{
	None                           = 0,
	TutorialCompleted              = 1,
	TutorialSkipped                = 2,
	MAX                            = 3
};


// Enum Killstreak.EObjectiveIconType
enum class EObjectiveIconType : uint8_t
{
	Hack                           = 0,
	Pickup                         = 1,
	EObjectiveIconType_MAX         = 2
};


// Enum Killstreak.EObjectiveType
enum class EObjectiveType : uint8_t
{
	None                           = 0,
	ExtractionPC                   = 1,
	BombZone                       = 2,
	EObjectiveType_MAX             = 3
};


// Enum Killstreak.EKSNavAreaType
enum class EKSNavAreaType : uint8_t
{
	Jump                           = 0,
	Hazard                         = 1,
	StartZipline                   = 2,
	TravelZipline                  = 3,
	Swim                           = 4,
	InteractiveObstacle            = 5,
	EKSNavAreaType_MAX             = 6
};


// Enum Killstreak.EKSInputType
enum class EKSInputType : uint8_t
{
	KBM                            = 0,
	GP                             = 1,
	Touch                          = 2,
	EKSInputType_MAX               = 3
};


// Enum Killstreak.EKSKeyBindType
enum class EKSKeyBindType : uint8_t
{
	ActionMapping                  = 0,
	AxisMapping                    = 1,
	EKSKeyBindType_MAX             = 2
};


// Enum Killstreak.EModPriorityResolution
enum class EModPriorityResolution : uint8_t
{
	TakeValue1                     = 0,
	TakeValue2                     = 1,
	Stack                          = 2,
	EModPriorityResolution_MAX     = 3
};


// Enum Killstreak.EPlayerModType
enum class EPlayerModType : uint8_t
{
	Perk                           = 0,
	GlobalPerk                     = 1,
	Activated                      = 2,
	TemporaryBuff                  = 3,
	TemporaryDebuff                = 4,
	Hidden                         = 5,
	Unknown                        = 6,
	EPlayerModType_MAX             = 7
};


// Enum Killstreak.EModInterferenceType
enum class EModInterferenceType : uint8_t
{
	Defer                          = 0,
	Stack                          = 1,
	WeakestWins                    = 2,
	StrongestWins                  = 3,
	BonusWins                      = 4,
	PenaltyWins                    = 5,
	EModInterferenceType_MAX       = 6
};


// Enum Killstreak.EEliminationState
enum class EEliminationState : uint8_t
{
	NotInPlay                      = 0,
	Playing                        = 1,
	Eliminated                     = 2,
	EEliminationState_MAX          = 3
};


// Enum Killstreak.EIsPlayer
enum class EIsPlayer : uint8_t
{
	Unknown                        = 0,
	Player                         = 1,
	NotPlayer                      = 2,
	EIsPlayer_MAX                  = 3
};


// Enum Killstreak.EKSPlayerStatsActivityType
enum class EKSPlayerStatsActivityType : uint8_t
{
	None                           = 0,
	PlayerXp                       = 1,
	Kills                          = 2,
	Deaths                         = 3,
	Damage                         = 4,
	Downs                          = 5,
	GamesPlayed                    = 6,
	GamesWon                       = 7,
	MinutesPlayed                  = 8,
	Headshots                      = 9,
	Revives                        = 10,
	MAX                            = 11
};


// Enum Killstreak.EProjectilePredictionType
enum class EProjectilePredictionType : uint8_t
{
	PassThrough                    = 0,
	Bounce                         = 1,
	Stop                           = 2,
	EProjectilePredictionType_MAX  = 3
};


// Enum Killstreak.EProjectileVisibilityType
enum class EProjectileVisibilityType : uint8_t
{
	Owner                          = 0,
	Ally                           = 1,
	All                            = 2,
	EProjectileVisibilityType_MAX  = 3
};


// Enum Killstreak.ERecoilStart2
enum class ERecoilStart2 : uint8_t
{
	ERS_Zero2                      = 0,
	ERS_Random2                    = 1,
	ERS_MAX                        = 2
};


// Enum Killstreak.EPlayerStatType
enum class EPlayerStatType : uint8_t
{
	UNKNOWN                        = 0,
	Kills                          = 1,
	Deaths                         = 2,
	Assists                        = 3,
	Downs                          = 4,
	Revives                        = 5,
	Eliminations                   = 6,
	RoundsPlayed                   = 7,
	Hacks                          = 8,
	Dehacks                        = 9,
	RawDamageDealt                 = 10,
	MitigatedDamageDealt           = 11,
	RawDamageReceived              = 12,
	MitigatedDamageReceived        = 13,
	TimeAlive                      = 14,
	Rank                           = 15,
	TimePlayed                     = 16,
	Score                          = 17,
	Cash                           = 18,
	EPlayerStatType_MAX            = 19
};


// Enum Killstreak.ELimitPerRound
enum class ELimitPerRound : uint8_t
{
	None                           = 0,
	OneActive                      = 1,
	OnePerRound                    = 2,
	ELimitPerRound_MAX             = 3
};


// Enum Killstreak.ELocalRequirements
enum class ELocalRequirements : uint8_t
{
	None                           = 0,
	Controlled                     = 1,
	Viewed                         = 2,
	ControlledOrViewed             = 3,
	ELocalRequirements_MAX         = 4
};


// Enum Killstreak.EPlayerShopTransactionType
enum class EPlayerShopTransactionType : uint8_t
{
	Purchase                       = 0,
	SetActive                      = 1,
	EPlayerShopTransactionType_MAX = 2
};


// Enum Killstreak.ESpecialtyRoleType
enum class ESpecialtyRoleType : uint8_t
{
	Unknown                        = 0,
	Attack                         = 1,
	Defense                        = 2,
	Support                        = 3,
	Movement                       = 4,
	ESpecialtyRoleType_MAX         = 5
};


// Enum Killstreak.EExtractionTeamType
enum class EExtractionTeamType : uint8_t
{
	NotSet                         = 0,
	Attacker                       = 1,
	Defender                       = 2,
	EExtractionTeamType_MAX        = 3
};


// Enum Killstreak.ECameraShoulder
enum class ECameraShoulder : uint8_t
{
	Right                          = 0,
	Left                           = 1,
	ECameraShoulder_MAX            = 2
};


// Enum Killstreak.EControllerInputType
enum class EControllerInputType : uint8_t
{
	None                           = 0,
	ADSBit                         = 1,
	KeyboardMouse                  = 2,
	KeyboardMouseADS               = 3,
	Gamepad                        = 4,
	GamepadADS                     = 5,
	JoyCon                         = 6,
	JoyConADS                      = 7,
	Touch                          = 8,
	TouchADS                       = 9,
	EControllerInputType_MAX       = 10
};


// Enum Killstreak.EOcclusionType
enum class EOcclusionType : uint8_t
{
	None                           = 0,
	Simple                         = 1,
	Advanced                       = 2,
	EOcclusionType_MAX             = 3
};


// Enum Killstreak.EKSPowerSlideEndReason
enum class EKSPowerSlideEndReason : uint8_t
{
	Expired                        = 0,
	Collide                        = 1,
	Fall                           = 2,
	Action                         = 3,
	Interrupted                    = 4,
	FaceAway                       = 5,
	Unknown                        = 6,
	EKSPowerSlideEndReason_MAX     = 7
};


// Enum Killstreak.EKSGame_CustomMovement
enum class EKSGame_CustomMovement : uint8_t
{
	KSMOVE_Vaulting                = 0,
	KSMOVE_DiveFreeFall            = 1,
	KSMOVE_DiveParachute           = 2,
	KSMOVE_DodgeRoll               = 3,
	KSMOVE_ZipLine                 = 4,
	KSMOVE_FlightRecovery          = 5,
	KSMOVE_Ability                 = 6,
	KSMOVE_PowerSlide              = 7,
	KSMOVE_Kick                    = 8,
	KSMOVE_MAX                     = 9
};


// Enum Killstreak.EKSRespawnMode
enum class EKSRespawnMode : uint8_t
{
	NoRespawn                      = 0,
	TicketRespawn                  = 1,
	AlwaysRespawn                  = 2,
	EKSRespawnMode_MAX             = 3
};


// Enum Killstreak.EKSMovementDirection
enum class EKSMovementDirection : uint8_t
{
	Forward                        = 0,
	Right                          = 1,
	Back                           = 2,
	Left                           = 3,
	EKSMovementDirection_MAX       = 4
};


// Enum Killstreak.EKSApparelGender
enum class EKSApparelGender : uint8_t
{
	Unisex                         = 0,
	Male                           = 1,
	Female                         = 2,
	EKSApparelGender_MAX           = 3
};


// Enum Killstreak.EKSCharacterGender
enum class EKSCharacterGender : uint8_t
{
	Unknown                        = 0,
	Male                           = 1,
	Female                         = 2,
	EKSCharacterGender_MAX         = 3
};


// Enum Killstreak.ECombatState
enum class ECombatState : uint8_t
{
	Combat                         = 0,
	Engaged                        = 1,
	NonCombat                      = 2,
	ECombatState_MAX               = 3
};


// Enum Killstreak.EPlayerSilhouetteType
enum class EPlayerSilhouetteType : uint8_t
{
	None                           = 0,
	Neutral                        = 1,
	Selected                       = 2,
	Friendly                       = 3,
	Enemy                          = 4,
	EPlayerSilhouetteType_MAX      = 5
};


// Enum Killstreak.EDamageCategory
enum class EDamageCategory : uint8_t
{
	Default                        = 0,
	NonDamage                      = 1,
	Firearm                        = 2,
	Impact                         = 3,
	Explosion                      = 4,
	Melee                          = 5,
	InstantDeath                   = 6,
	Environmental                  = 7,
	Bleed                          = 8,
	Fire                           = 9,
	EDamageCategory_MAX            = 10
};


// Enum Killstreak.ELoadoutSlot
enum class ELoadoutSlot : uint8_t
{
	LoadoutSlot_None               = 0,
	LoadoutSlot_SpecialtyOne       = 1,
	LoadoutSlot_SpecialtyTwo       = 2,
	LoadoutSlot_PerkOne            = 3,
	LoadoutSlot_PerkTwo            = 4,
	LoadoutSlot_PerkFour           = 5,
	LoadoutSlot_KillstreakOne      = 6,
	LoadoutSlot_KillstreakTwo      = 7,
	LoadoutSlot_Pistol             = 8,
	LoadoutSlot_PistolAttachOne    = 9,
	LoadoutSlot_PistolAttachTwo    = 10,
	LoadoutSlot_PistolAttachThree  = 11,
	LoadoutSlot_PrimaryWeapon      = 12,
	LoadoutSlot_PerkThree          = 13,
	LoadoutSlot_GadgetOne          = 14,
	LoadoutSlot_PassiveOne         = 15,
	LoadoutSlot_PassiveTwo         = 16,
	LoadoutSlot_SecondaryAbilityOne = 17,
	LoadoutSlot_SecondaryAbilityTwo = 18,
	LoadoutSlot_LoadoutBundleId    = 19,
	LoadoutSlot_MAX                = 20
};


// Enum Killstreak.TG_EQUIP_POINT
enum class ETG_EQUIP_POINT : uint8_t
{
	EQP_NONE                       = 0,
	EQP_AUTO                       = 1,
	EQP_OFFHAND                    = 2,
	EQP_OFFHAND01                  = 3,
	EQP_OFFHAND02                  = 4,
	EQP_OFFHAND03                  = 5,
	EQP_RECALL                     = 6,
	EQP_PASSIVE                    = 7,
	EQP_ACTIVE                     = 8,
	EQP_ACTIVE01                   = 9,
	EQP_ACTIVE02                   = 10,
	EQP_CONSUMABLE                 = 11,
	EQP_CONSUMABLE01               = 12,
	EQP_UNUSED                     = 13,
	EQP_UNUSED01                   = 14,
	EQP_UNUSED02                   = 15,
	EQP_UNUSED03                   = 16,
	EQP_UNUSED04                   = 17,
	EQP_UNUSED05                   = 18,
	EQP_ITEM_STORE                 = 19,
	EQP_ITEM_STORE01               = 20,
	EQP_ITEM_STORE02               = 21,
	EQP_ITEM_STORE03               = 22,
	EQP_ITEM_STORE04               = 23,
	EQP_OVER_DRAW                  = 24,
	EQP_MAX                        = 25
};


// Enum Killstreak.EKSWeaponDestroyReason
enum class EKSWeaponDestroyReason : uint8_t
{
	None                           = 0,
	RemoveNoReplace                = 1,
	RemoveWithReplace              = 2,
	DropNoReplace                  = 3,
	DropWithReplace                = 4,
	EKSWeaponDestroyReason_MAX     = 5
};


// Enum Killstreak.EReloadReplicationFlags
enum class EReloadReplicationFlags : uint8_t
{
	MinimumReplication             = 0,
	ReplicateAmmo                  = 1,
	EReloadReplicationFlags_MAX    = 2
};


// Enum Killstreak.EFiredReplicationFlags
enum class EFiredReplicationFlags : uint8_t
{
	MinimumReplication             = 0,
	ReplicateAmmo                  = 1,
	ReplicateAim                   = 2,
	ReplicateAimAndAmmo            = 3,
	ReplicateAllFireParameters     = 4,
	EFiredReplicationFlags_MAX     = 5
};


// Enum Killstreak.EKSBuildState
enum class EKSBuildState : uint8_t
{
	BUILD_PENDING_VALID            = 0,
	BUILD_PENDING_INVALID          = 1,
	BUILD_SUCCEEDED                = 2,
	BUILD_FAILED                   = 3,
	BUILD_MAX                      = 4
};


// Enum Killstreak.EThirdPersonAimOriginType
enum class EThirdPersonAimOriginType : uint8_t
{
	ActorEyes                      = 0,
	FixedRelativeLocation          = 1,
	ComponentByTag                 = 2,
	SocketOnCharacterMesh          = 3,
	EThirdPersonAimOriginType_MAX  = 4
};


// Enum Killstreak.EReticleType
enum class EReticleType : uint8_t
{
	Pistol                         = 0,
	Rifle                          = 1,
	Shotgun                        = 2,
	DualAR                         = 3,
	EReticleType_MAX               = 4
};


// Enum Killstreak.EReloadType
enum class EReloadType : uint8_t
{
	Clip                           = 0,
	SingleShot                     = 1,
	EReloadType_MAX                = 2
};


// Enum Killstreak.EFireModeType
enum class EFireModeType : uint8_t
{
	Single                         = 0,
	Burst                          = 1,
	SemiAuto                       = 2,
	EFireModeType_MAX              = 3
};


// Enum Killstreak.EExtendedMagazineRounding
enum class EExtendedMagazineRounding : uint8_t
{
	NearestInteger                 = 0,
	RoundUp                        = 1,
	RoundDown                      = 2,
	EExtendedMagazineRounding_MAX  = 3
};


// Enum Killstreak.EKSVariableScopeType
enum class EKSVariableScopeType : uint8_t
{
	FixedFOV                       = 0,
	ScopeMultiplier                = 1,
	EKSVariableScopeType_MAX       = 2
};


// Enum Killstreak.EBundledAmmoType
enum class EBundledAmmoType : uint8_t
{
	FullClip                       = 0,
	DefaultAmmoFromAsset           = 1,
	Override                       = 2,
	EBundledAmmoType_MAX           = 3
};


// Enum Killstreak.EWeaponComponentAttachmentType
enum class EWeaponComponentAttachmentType : uint8_t
{
	AttachToCharacter              = 0,
	AttachToMesh                   = 1,
	EWeaponComponentAttachmentType_MAX = 2
};


// Enum Killstreak.ESkinObjectParentingType
enum class ESkinObjectParentingType : uint8_t
{
	Never                          = 0,
	ActiveAndMainHand              = 1,
	Active                         = 2,
	InAction                       = 3,
	Always                         = 4,
	ESkinObjectParentingType_MAX   = 5
};


// Enum Killstreak.EWeaponComponentTickType
enum class EWeaponComponentTickType : uint8_t
{
	NeverTick                      = 0,
	TickWhenActive                 = 1,
	AlwaysTick                     = 2,
	EWeaponComponentTickType_MAX   = 3
};


// Enum Killstreak.EKSWeaponMasteryActivityType
enum class EKSWeaponMasteryActivityType : uint8_t
{
	None                           = 0,
	Shots                          = 1,
	Hits                           = 2,
	Damage                         = 3,
	Downs                          = 4,
	Kills                          = 5,
	Headshots                      = 6,
	Deaths                         = 7,
	MAX                            = 8
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Killstreak.KSVoicelineEvent
// 0x0024
struct FKSVoicelineEvent
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKSVoicelineAudience                               Audience;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ActivationChance;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectedByGlobalCooldown;                                // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                CooldownGroup;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CooldownDuration;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VoicelineChangeValue;                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPlayedByOwnerAlready;                                    // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct Killstreak.AccoladeDisplayInfo
// 0x0058
struct FAccoladeDisplayInfo
{
	EAccoladeCategory                                  Category;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EAccoladeEventType                                 Type;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UTexture2D*                                  DisplayIcon;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       DisplayTitle;                                             // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              DisplayDuration;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Multiplier;                                               // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FKSVoicelineEvent                           AccoladeVoiceLine;                                        // 0x0030(0x0024) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.CombatEventInfo
// 0x0058
struct FCombatEventInfo
{
	TWeakObjectPtr<class APlayerState>                 EventVictim;                                              // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APlayerState>                 EventInstigator;                                          // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AController>                  InstigatorController;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class APlayerState>>         EventAssistants;                                          // 0x0018(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class AActor>                       DamagedActor;                                             // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       DamageCauser;                                             // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset*                              WeaponAsset;                                              // 0x0040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DownEvent;                                                // 0x0048(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               KillEvent;                                                // 0x0049(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EHitLocationType                                   HitLocationType;                                          // 0x004A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x004B(0x0001) MISSED OFFSET
	float                                              DamageDealt;                                              // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OriginalDamageDealt;                                      // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsArmorHit;                                               // 0x0054(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct Killstreak.ActivityAchievementInfo
// 0x0058
struct FActivityAchievementInfo
{
	bool                                               bIsAchievement;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TMap<struct FName, struct FString>                 AchievementIdByOSSName;                                   // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Killstreak.ActivityReference
// 0x0030
struct FActivityReference
{
	int64_t                                            ReferenceValue1;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReferenceValue2;                                          // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReferenceValue3;                                          // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct Killstreak.ActivityTier
// 0x0010
struct FActivityTier
{
	int                                                Tier;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int64_t                                            LootId;                                                   // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSBTDifficultyConfig
// 0x0078
struct FKSBTDifficultyConfig
{
	float                                              AccuracyMultiplierStandard;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccuracyMultiplierThrownMelee;                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccuracyMultiplierWhenBlinded;                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccuracyMultiplierWhenCrosshairHidden;                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NewTargetAccuracyMultiplier;                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NewTargetTime;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMultiplier;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackDelayClipPercentMin;                                // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackDelayClipPercentMax;                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackDelay;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageDealtMultiplier;                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeadshotDamageDealtMultiplier;                            // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageTakenMultiplier;                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeadshotDamageTakenMultiplier;                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AimForHeadshotProbability;                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DodgeRollProbability;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StrafeProbability;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrowGrenadeProbability;                                  // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ThrowMeleeProbability;                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PerceptionStrengthMin;                                    // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PerceptionStrengthMax;                                    // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	TArray<class UKSBTAction*>                         AllowedActions;                                           // 0x0058(0x0010) (Edit, ZeroConstructor)
	TArray<class UKSBTAction*>                         DisallowedActions;                                        // 0x0068(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Killstreak.KSInitialLoadout
// 0x0010
struct FKSInitialLoadout
{
	TArray<class UKSItem*>                             LoadoutItems;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Killstreak.KSBTItemPriorityTableRow
// 0x0038 (0x0040 - 0x0008)
struct FKSBTItemPriorityTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSBTItemPriorityTableRow.ItemAsset
	float                                              Weight;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShopPurchaseWeight;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShopPriorityGroup;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Multiplier;                                               // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AimAssistActorHealthInfo
// 0x0008
struct FAimAssistActorHealthInfo
{
	float                                              CurrentHealth;                                            // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKilled;                                                  // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Killstreak.RankedAimAssistTarget
// 0x0048
struct FRankedAimAssistTarget
{
	class UKSAimAssistAnchorComponent*                 Anchor;                                                   // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class UKSAimAssistTargetInterface> Target;                                                   // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeadWeight;                                               // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BodyLocation;                                             // 0x001C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   HeadLocation;                                             // 0x0024(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FBox2D                                      ScaledProjectionBounds;                                   // 0x002C(0x0014) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              DistanceFromCamera;                                       // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UpdateCount;                                              // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSBTObjectivePriorityTableRow
// 0x0048 (0x0050 - 0x0008)
struct FKSBTObjectivePriorityTableRow : public FTableRowBase
{
	class UKSBTObjective*                              Objective;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDistance;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSecondsElapsed;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSecondsElapsed;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSecondsRemaining;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSecondsRemaining;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Priority;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x002C(0x0010) UNKNOWN PROPERTY: ArrayProperty Killstreak.KSBTObjectivePriorityTableRow.RequiredAbilities
	class UKSBTTargetSelector*                         ProcessObjectiveSelector;                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  TargetSelectionTable;                                     // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSStimulusEvent
// 0x0048
struct FKSStimulusEvent
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // 0x0008(0x003C) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAIMapPointStimulusEvent
// 0x0010
struct FKSAIMapPointStimulusEvent
{
	class AActor*                                      Broadcaster;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.AIObjectiveEvent
// 0x0030
struct FAIObjectiveEvent
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	struct FVector                                     ObjectiveLocation;                                        // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Loudness;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAIPlayerStimulusEvent
// 0x0038
struct FKSAIPlayerStimulusEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class AActor*                                      Broadcaster;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Enemy;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSAITeamStimulusEvent
// 0x0038
struct FKSAITeamStimulusEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
	class AActor*                                      Broadcaster;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      Enemy;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.GiveItemParameters
// 0x0008
struct FGiveItemParameters
{
	EItemSourceType                                    ItemSource;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                OriginalOwnerId;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.DropItemParameters
// 0x0004
struct FDropItemParameters
{
	int                                                OriginalOwnerId;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ItemDisplayStatParams
// 0x0010 (0x0018 - 0x0008)
struct FItemDisplayStatParams : public FTableRowBase
{
	float                                              RangeMin;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShowsBar;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct Killstreak.ItemDisplayStat
// 0x0038
struct FItemDisplayStat
{
	struct FText                                       DisplayText;                                              // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	float                                              Value;                                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FItemDisplayStatParams                      StatProperties;                                           // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Killstreak.Announcement
// 0x0030
struct FAnnouncement
{
	class UAkAudioEvent*                               AkEvent;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               AltAkEvent;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Priority;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lifetime;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ValidUntil;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Lockout;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RTPC;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                teamNum;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.TimeAnnouncement
// 0x0050
struct FTimeAnnouncement
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FAnnouncement                               Announcement;                                             // 0x0008(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FName>                               AnnouncementGroups;                                       // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               Block;                                                    // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Killstreak.TimeAnnouncementList
// 0x0010
struct FTimeAnnouncementList
{
	TArray<struct FTimeAnnouncement>                   TimeAnnouncements;                                        // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Killstreak.SizedArraySerializer
// 0x0000 (0x0070 - 0x0070)
struct FSizedArraySerializer : public FReplicatedLog
{

};

// ScriptStruct Killstreak.AnnouncementItem
// 0x002F (0x0030 - 0x0001)
struct FAnnouncementItem : public FReplicatedLogItem
{
	struct FAnnouncement                               Announcement;                                             // 0x0000(0x0030)
};

// ScriptStruct Killstreak.AnnouncementList
// 0x0018 (0x0088 - 0x0070)
struct FAnnouncementList : public FSizedArraySerializer
{
	TArray<struct FAnnouncementItem>                   Items;                                                    // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.SoftDataTableInfo
// 0x0078
struct FSoftDataTableInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.SoftDataTableInfo.DataTable
	int                                                TablePriority;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FGameplayTagQuery                           SkinTagQuery;                                             // 0x0030(0x0048) (Edit, BlueprintVisible)
};

// ScriptStruct Killstreak.KSEquipRepInfo
// 0x0014
struct FKSEquipRepInfo
{
	bool                                               NoEquipPoint;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FGameplayTag                                EquipPoint;                                               // 0x0004(0x0008)
	uint32_t                                           UpdateId;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.AuxiliaryWeaponInfo
// 0x0010
struct FAuxiliaryWeaponInfo
{
	struct FName                                       AuxiliarySlot;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AKSWeapon*                                   ParentWeapon;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.WeaponStateChangeRequest
// 0x0010
struct FWeaponStateChangeRequest
{
	uint16_t                                           RequestID;                                                // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	bool                                               bChangeWeaponState;                                       // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	EWeaponStateNew                                    PreviousState;                                            // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	EWeaponStateNew                                    NextState;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bChangeWeaponAimMode;                                     // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	EKSCharacterAimMode                                AimMode;                                                  // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0007(0x0001) MISSED OFFSET
	struct FRandomStream                               RandomStream;                                             // 0x0008(0x0008) (ZeroConstructor)
};

// ScriptStruct Killstreak.KSActionRestrictor
// 0x0008
struct FKSActionRestrictor
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	bool                                               bRestrictMove;                                            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictFire;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictAltFire;                                         // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictRoll;                                            // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AimData
// 0x0050
struct FAimData
{
	struct FVector                                     StartTrace;                                               // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ViewPoint;                                                // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAimDataMode                                       AimDataMode;                                              // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FVector                                     EndTrace;                                                 // 0x0028(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x0034(0x000C) (BlueprintVisible)
	TArray<struct FVector>                             SpreadDirections;                                         // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Killstreak.WeaponStateGraph
// 0x0010
struct FWeaponStateGraph
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Killstreak.PrefireSkipWindow
// 0x0028
struct FPrefireSkipWindow
{
	float                                              WindowDuration;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WindowExpiration;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     LungeMontageSequence;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FString                                     TargetMontageSequence;                                    // 0x0018(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Killstreak.BundledAmmoInfo
// 0x000C
struct FBundledAmmoInfo
{
	EBundledAmmoType                                   BundleType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ReserveAmmo;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AmmoInClip;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSWeaponDropAttachmentContainerEntry
// 0x002C (0x0038 - 0x000C)
struct FKSWeaponDropAttachmentContainerEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UKSWeaponAttachment*                         Attachment;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FGameplayTag                                ReplicatedAttachPoint;                                    // 0x0020(0x0008) (Transient)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
};

// ScriptStruct Killstreak.KSWeaponDropAttachmentContainer
// 0x0020 (0x00D0 - 0x00B0)
struct FKSWeaponDropAttachmentContainer : public FFastArraySerializer
{
	TArray<struct FKSWeaponDropAttachmentContainerEntry> Attachments;                                              // 0x00B0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	class AKSWeaponAssetDrop*                          Owner;                                                    // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Killstreak.KSEquipmentContainerEntry
// 0x00AC (0x00B8 - 0x000C)
struct FKSEquipmentContainerEntry : public FFastArraySerializerItem
{
	uint16_t                                           EquipmentId;                                              // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	uint16_t                                           ParentEquipmentId;                                        // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	struct FGameplayTag                                EquipPoint;                                               // 0x0014(0x0008)
	unsigned char                                      UnknownData02[0x8];                                       // 0x001C(0x0008) MISSED OFFSET
	bool                                               bAlwaysReplicateExtraInfo;                                // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0025(0x0001) MISSED OFFSET
	uint16_t                                           ExtraInfo;                                                // 0x0026(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UKSItem*                                     Item;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSItem*                                     LocalItem;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bWeaponComponentIsReplicated;                             // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UKSEquipmentCosmeticComponent> CosmeticComponent;                                        // 0x0044(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UKSWeaponAttachmentCosmeticInst> AttachmentCosmeticComponent;                              // 0x004C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bMarkedStale;                                             // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData06[0x3B];                                      // 0x0055(0x003B) MISSED OFFSET
	unsigned char                                      UnknownData07[0x28];                                      // 0x0055(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSEquipmentContainerEntry.ParentAsset
};

// ScriptStruct Killstreak.KSEquipmentContainer
// 0x00E8 (0x0198 - 0x00B0)
struct FKSEquipmentContainer : public FFastArraySerializer
{
	class AActor*                                      Owner;                                                    // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<uint16_t, struct FKSEquipmentContainerEntry>  PendingEquipment;                                         // 0x00B8(0x0050) (ZeroConstructor, Transient)
	TArray<struct FKSEquipmentContainerEntry>          Equipment;                                                // 0x0108(0x0010) (ZeroConstructor)
	uint16_t                                           NextEquipmentId;                                          // 0x0118(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	TArray<struct FKSEquipmentContainerEntry>          StaleEquipment;                                           // 0x0120(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0130(0x0068) MISSED OFFSET
};

// ScriptStruct Killstreak.KSNeutralBombState
// 0x0018
struct FKSNeutralBombState
{
	EKSNeutralBombState                                CurrentState;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKSNeutralBombState                                OldState;                                                 // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                BombTeam;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              BombHolder;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AKSNeutralBombZone*                          BombZone;                                                 // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ObjectiveState
// 0x0014
struct FObjectiveState
{
	struct FName                                       CurrentState;                                             // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PreviousState;                                            // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Owner;                                                    // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PlayerCombatInfo
// 0x0020
struct FPlayerCombatInfo
{
	int                                                PlayerId;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlayerTeamNum;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              PlayerState;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              PlayerVictim;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TimeLeft;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.SkeletalMeshMaterialToReductionGroup
// 0x0018
struct FSkeletalMeshMaterialToReductionGroup
{
	struct FString                                     NameToMatch;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ReductionGroup;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.ShopSubItem
// 0x0010
struct FShopSubItem
{
	class UKSItem*                                     Item;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Price;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPurchased;                                               // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Killstreak.ShopItem
// 0x0084 (0x0090 - 0x000C)
struct FShopItem : public FFastArraySerializerItem
{
	EShopItemType                                      Type;                                                     // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<struct FShopSubItem>                        SubItemList;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bResetable;                                               // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FGameplayTag                                EquipPoint;                                               // 0x0024(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<EShopItemType>                              ItemsToDeactivate;                                        // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<EShopItemType>                              Prerequisites;                                            // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<EShopItemType>                              Restrictions;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)
	int                                                NextSubItemIndex;                                         // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                CurrentSubItemIndex;                                      // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsActive;                                                // 0x0068(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bStartInactive;                                           // 0x0069(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOneTimePurchase;                                         // 0x006A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAuthorityIsActive;                                       // 0x006B(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                AuthorityPurchaseIndex;                                   // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AuthorityLatestTransactionId;                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSimulatedIsActive;                                       // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                SimulatedPurchaseIndex;                                   // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                SimulatedLatestTransactionId;                             // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0080(0x0010) MISSED OFFSET
};

// ScriptStruct Killstreak.KSOutlineParameters
// 0x0030
struct FKSOutlineParameters
{
	EPlayerSilhouetteType                              ColorType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                OutlineColor;                                             // 0x0004(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FillColor;                                                // 0x0014(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OutlineThickness;                                         // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldFill;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideWhenOccluded;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHot;                                                   // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFriendly;                                              // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCutoutOtherOutlines;                                     // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct Killstreak.ItemTableElement
// 0x0028 (0x0030 - 0x0008)
struct FItemTableElement : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.ItemTableElement.Item
};

// ScriptStruct Killstreak.KSCSVRow
// 0x0010
struct FKSCSVRow
{
	TArray<struct FString>                             CSVColumn;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Killstreak.BotSpawnTableRow
// 0x0180 (0x0188 - 0x0008)
struct FBotSpawnTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty Killstreak.BotSpawnTableRow.Character
	unsigned char                                      UnknownData01[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty Killstreak.BotSpawnTableRow.Controller
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.BotSpawnTableRow.BehaviorTree1
	class UKSBTDifficulty*                             InitialDifficulty;                                        // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DifficultyTable;                                          // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowDynamicDifficulty;                                   // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	struct FKSBTDifficultyConfig                       SpawnDifficultyConfig;                                    // 0x0098(0x0078) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0110(0x0010) UNKNOWN PROPERTY: ArrayProperty Killstreak.BotSpawnTableRow.ItemLoadoutTables
	class UDataTable*                                  ObjectivePriorityTable;                                   // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  ItemPriorityTable;                                        // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery                           AllowedJobQuery;                                          // 0x0130(0x0048) (Edit, BlueprintVisible)
	class UDataTable*                                  AbilityTable;                                             // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // 0x0180(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseGameModeInventory;                                    // 0x0181(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0182(0x0006) MISSED OFFSET
};

// ScriptStruct Killstreak.RoundInitState
// 0x0010
struct FRoundInitState
{
	unsigned char                                      RoundNumber;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                AttackingTeam;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DefendingTeam;                                            // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LastPrepareTriggered;                                     // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      LastRoundStartTriggered;                                  // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAffiliationFilter
// 0x0004
struct FKSAffiliationFilter
{
	bool                                               bCountEnemies;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCountAllies;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCountSelf;                                               // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCountUnaffiliated;                                       // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSCharacterStateFilter
// 0x0040
struct FKSCharacterStateFilter
{
	bool                                               bCheckHealth;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EArithmeticKeyOperation>               HealthOperation;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              HealthPercent;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckDowned;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Downed;                                                   // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckDead;                                               // 0x000A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Dead;                                                     // 0x000B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckCrouched;                                           // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Crouched;                                                 // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckFalling;                                            // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Falling;                                                  // 0x000F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckSprinting;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Sprinting;                                                // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckSwimming;                                           // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Swimming;                                                 // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckRidingZipline;                                      // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    RidingZipline;                                            // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckIsBot;                                              // 0x0016(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsBot;                                                    // 0x0017(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckBehaviorState;                                      // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    BehaviorOperation;                                        // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECharacterBehaviorState                            BehaviorState;                                            // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckInteracting;                                        // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Interacting;                                              // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckInteractableClass;                                  // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	class UClass*                                      InteractableClass;                                        // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinInteractTimeRemaining;                                 // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxInteractTimeRemaining;                                 // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckADS;                                                // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    ADS;                                                      // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckHasReviver;                                         // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    HasReviver;                                               // 0x0033(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckReviverAffiliation;                                 // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKSAffiliationFilter                        ReviverAffiliation;                                       // 0x0035(0x0004) (Edit)
	bool                                               bCheckIsOnFire;                                           // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsOnFire;                                                 // 0x003A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x003B(0x0005) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInteractableStateFilter
// 0x0018
struct FKSInteractableStateFilter
{
	bool                                               bCheckIsInteracting;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsInteracting;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckInteractorAffiliation;                              // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKSAffiliationFilter                        InteractorAffiliation;                                    // 0x0003(0x0004) (Edit)
	bool                                               bCheckCanInteract;                                        // 0x0007(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    CanInteract;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckInteractableClass;                                  // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
	class UClass*                                      InteractableClass;                                        // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSDestructibleStateFilter
// 0x0002
struct FKSDestructibleStateFilter
{
	bool                                               bCheckIsDestroyed;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    Destroyed;                                                // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSItemDropStateFilter
// 0x0010
struct FKSItemDropStateFilter
{
	bool                                               bCheckEquipPoint;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FGameplayTag                                EquipPoint;                                               // 0x0004(0x0008) (Edit)
	bool                                               bCheckHasBeenSeen;                                        // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    HasBeenSeen;                                              // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct Killstreak.KSLootSiteFilter
// 0x0002
struct FKSLootSiteFilter
{
	bool                                               bCheckHasBeenSeen;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    HasBeenSeen;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSDestroyableHazardStateFilter
// 0x0007
struct FKSDestroyableHazardStateFilter
{
	bool                                               bReturnTrueIfNotDestroyableHazard;                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckCanBotDetect;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    CanBotDetect;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckShouldDestroyWithGunfire;                           // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    ShouldDestroyWithGunfire;                                 // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckShouldDestroyWithEMP;                               // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    ShouldDestroyWithEMP;                                     // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSMapPointStateFilter
// 0x0030
struct FKSMapPointStateFilter
{
	bool                                               bCheckMapPointType;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       RequiredMapPointTypes;                                    // 0x0008(0x0020) (Edit)
	bool                                               bCheckIsPointActive;                                      // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsPointActive;                                            // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckIsPointAvailable;                                   // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsPointAvailable;                                         // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckIsPointFriendly;                                    // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBasicKeyOperation>                    IsPointFriendly;                                          // 0x002D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x002E(0x0002) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPerceptionFilter
// 0x0100
struct FKSPerceptionFilter
{
	struct FName                                       PerceptionEvent;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKSAffiliationFilter                        AffiliationFilter;                                        // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FKSCharacterStateFilter                     CharacterStateFilter;                                     // 0x0010(0x0040) (Edit)
	struct FKSInteractableStateFilter                  InteractableStateFilter;                                  // 0x0050(0x0018) (Edit)
	struct FKSDestructibleStateFilter                  DestructibleStateFilter;                                  // 0x0068(0x0002) (Edit)
	unsigned char                                      UnknownData01[0x2];                                       // 0x006A(0x0002) MISSED OFFSET
	struct FKSItemDropStateFilter                      ItemDropStateFilter;                                      // 0x006C(0x0010) (Edit)
	struct FKSLootSiteFilter                           LootSiteFilter;                                           // 0x007C(0x0002) (Edit)
	struct FKSDestroyableHazardStateFilter             DestroyableHazardStateFilter;                             // 0x007E(0x0007) (Edit)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	struct FKSMapPointStateFilter                      MapPointStateFilter;                                      // 0x0088(0x0030) (Edit)
	bool                                               bCheckDistance;                                           // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EArithmeticKeyOperation>               DistanceOperation;                                        // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00BA(0x0002) MISSED OFFSET
	float                                              Distance;                                                 // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckDistanceRange;                                      // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              MinDistance;                                              // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckActorClass;                                         // 0x00CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00CD(0x0003) MISSED OFFSET
	class UClass*                                      ActorClass;                                               // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckActorClassArray;                                    // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	TArray<class UClass*>                              ActorClassArray;                                          // 0x00E0(0x0010) (Edit, ZeroConstructor)
	bool                                               bCheckLOS;                                                // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckForward;                                            // 0x00F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	float                                              MaxForwardAngle;                                          // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckIntersectsNavMeshPath;                              // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x00F9(0x0007) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPowerSlideInfo
// 0x0002
struct FKSPowerSlideInfo
{
	bool                                               bIsInPowerSlide;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EKSPowerSlideEndReason                             EndReason;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSLungeInfo
// 0x0010
struct FKSLungeInfo
{
	class AActor*                                      LungeTarget;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxLungeDistance;                                         // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxLungeDuration;                                         // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSZipLineInfo
// 0x0010
struct FKSZipLineInfo
{
	class AKSZipLine*                                  ZipLine;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bZipLineReverse;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Killstreak.ReplicatedViewInfo
// 0x0008
struct FReplicatedViewInfo
{
	float                                              Pitch;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSDeathInfo
// 0x0028
struct FKSDeathInfo
{
	EKSDeathState                                      DeathState;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageDirection;                                          // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              FinalBlowDamage;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bImmediateRagdoll;                                        // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Killstreak.KSMantleInfo
// 0x0044
struct FKSMantleInfo
{
	bool                                               bIsMantling;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bVaultingOver;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ApproachDist;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MantleHeight;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ForwardDist;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VaultDrop;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MantleUpDuration;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VaultAcrossDuration;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VaultDownDuration;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MantleName;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldSpaceGrabLocation;                                   // 0x0028(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldTowardsWallDir;                                      // 0x0034(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bFromStanding;                                            // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
};

// ScriptStruct Killstreak.RevealInfo
// 0x0014
struct FRevealInfo
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	TWeakObjectPtr<class AKSCharacter>                 Target;                                                   // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AKSCharacter>                 Revealer;                                                 // 0x000C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.CompressedShotgunHitData
// 0x0010
struct FCompressedShotgunHitData
{
	class UKSWeaponAsset_Shotgun*                      ShotgunAsset;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           CompressedHitResults;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSShotgunHitChangeItem
// 0x000F (0x0010 - 0x0001)
struct FKSShotgunHitChangeItem : public FReplicatedLogItem
{
	struct FCompressedShotgunHitData                   ShotgunHitData;                                           // 0x0000(0x0010)
};

// ScriptStruct Killstreak.KSShotgunHitChangeList
// 0x0018 (0x0088 - 0x0070)
struct FKSShotgunHitChangeList : public FReplicatedLog
{
	TArray<struct FKSShotgunHitChangeItem>             Items;                                                    // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.SmoothedComponentInfo
// 0x0030
struct FSmoothedComponentInfo
{
	class USceneComponent*                             Component;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     InitialTranslationOffset;                                 // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
	struct FQuat                                       InitialRotationOffset;                                    // 0x0020(0x0010) (IsPlainOldData)
};

// ScriptStruct Killstreak.KSOutOfBoundsInfo
// 0x0008
struct FKSOutOfBoundsInfo
{
	bool                                               bOutOfBounds;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              WarningLength;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSInitialInventoryItem
// 0x0020
struct FKSInitialInventoryItem
{
	struct FGameplayTag                                EquipPoint;                                               // 0x0000(0x0008) (Edit)
	class UKSItem*                                     ItemAsset;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UKSWeaponAttachment*>                 Attachments;                                              // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Killstreak.KSInitialAmmo
// 0x0008
struct FKSInitialAmmo
{
	EAmmoType                                          AmmoType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                AmmoCount;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSLootLockerItem
// 0x0020
struct FKSLootLockerItem
{
	class UKSWeaponAsset*                              WeaponAsset;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachment*                         Attachment1;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachment*                         Attachment2;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachment*                         Attachment3;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSWeaponDataUpdateContainer
// 0x0004
struct FKSWeaponDataUpdateContainer
{
	bool                                               bChangeWeaponState;                                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew                                    WeaponState;                                              // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChangeAimMode;                                           // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EKSCharacterAimMode                                AimMode;                                                  // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSPendingWeaponStateUpdates
// 0x000C
struct FKSPendingWeaponStateUpdates
{
	uint32_t                                           BroadcastId;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           nEquipmentId;                                             // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	struct FKSWeaponDataUpdateContainer                UpdateData;                                               // 0x0006(0x0004)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAmmoManagerEntry
// 0x0010 (0x001C - 0x000C)
struct FKSAmmoManagerEntry : public FFastArraySerializerItem
{
	EAmmoType                                          AmmoType;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	uint32_t                                           UpdateId;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AmmoCount;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0018(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAmmoTransactions
// 0x0018
struct FKSAmmoTransactions
{
	uint64_t                                           TransactionId;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           UpdateIdAtTimeOfTransaction;                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	EAmmoType                                          AmmoType;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                AmmoDelta;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAmmoManager
// 0x0068 (0x0118 - 0x00B0)
struct FKSAmmoManager : public FFastArraySerializer
{
	TWeakObjectPtr<class AActor>                       Owner;                                                    // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<unsigned char, struct FKSAmmoManagerEntry>    AmmoSupply;                                               // 0x00B8(0x0050) (ZeroConstructor)
	TArray<struct FKSAmmoTransactions>                 UnverifiedAmmoTransactions;                               // 0x0108(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.AssistTag
// 0x0010
struct FAssistTag
{
	float                                              ExpirationTime;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class AKSPlayerState*                              Assistant;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ReviveInfo
// 0x0028
struct FReviveInfo
{
	bool                                               bIsBeingRevived;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSelectedToRevive;                                        // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bReviveGuaranteed;                                        // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0003(0x0005) MISSED OFFSET
	class AKSPlayerState*                              Reviver;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class AKSCharacter*                                ReviverCharacter;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              ReviveProgress;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReviveRate;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LocalReviveProgress;                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      RequestID;                                                // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInteractableCameraTransition
// 0x0028
struct FKSInteractableCameraTransition
{
	struct FName                                       CameraName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransitionInTime;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EViewTargetBlendFunction>              TransitionInFunction;                                     // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              TransitionInExp;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TransitionOutTime;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationLockAngle;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RotationLockout;                                          // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCameraShake;                                             // 0x001D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	class UClass*                                      CameraShake;                                              // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.RevealManagerEntry
// 0x0024 (0x0030 - 0x000C)
struct FRevealManagerEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
	class AKSCharacter*                                Target;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	EPlayerSilhouetteType                              Type;                                                     // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bFill;                                                    // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bMark;                                                    // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0023(0x000D) MISSED OFFSET
};

// ScriptStruct Killstreak.RevealManager
// 0x0060 (0x0110 - 0x00B0)
struct FRevealManager : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B0(0x0020) MISSED OFFSET
	TArray<struct FRevealManagerEntry>                 Reveals;                                                  // 0x00D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00E0(0x0010) MISSED OFFSET
	TArray<class AKSCharacter*>                        RequestedLocalReveals;                                    // 0x00F0(0x0010) (ZeroConstructor)
	class AKSCharacter*                                Owner;                                                    // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.HaulingInfo
// 0x0010
struct FHaulingInfo
{
	bool                                               bHaulInProgress;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      CarriedActor;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.CarriedInfo
// 0x0010
struct FCarriedInfo
{
	bool                                               bCarryInProgress;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AKSCharacter*                                Hauler;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSPostProcessFloatCurve
// 0x0010
struct FKSPostProcessFloatCurve
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FloatParameterName;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSPostProcessColorCurve
// 0x0010
struct FKSPostProcessColorCurve
{
	class UCurveLinearColor*                           ColorCurve;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColorParameterName;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSSpecialEffect
// 0x0050
struct FKSSpecialEffect
{
	struct FName                                       FXID;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectEndTime;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              LoopStartTime;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LoopEndTime;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveOnForwardComplete;                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveOnReverseComplete;                                 // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	TArray<struct FKSPostProcessFloatCurve>            FloatCurves;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKSPostProcessColorCurve>            ColorCurves;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      FXCurveClass;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EffectAsset;                                              // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.DamageEffect
// 0x0048
struct FDamageEffect
{
	float                                              Damage;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DamageOrigin;                                             // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bArmorBroke;                                              // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FVector                                     RelativeImpactLocation;                                   // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantizeNormal                   RelativeImpactNormal;                                     // 0x0034(0x000C) (Edit, BlueprintVisible)
	struct FName                                       BoneName;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ShotgunHitData
// 0x0018
struct FShotgunHitData
{
	class UKSWeaponAsset_Shotgun*                      ShotgunAsset;                                             // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<EShotgunHitResult>                          HitResults;                                               // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Killstreak.FullFireRepData
// 0x0068
struct FFullFireRepData
{
	struct FAimData                                    Aim;                                                      // 0x0000(0x0050) (BlueprintVisible)
	bool                                               bIgnoreExtraData;                                         // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FRandomStream                               RandomStream;                                             // 0x0054(0x0008) (BlueprintVisible, ZeroConstructor)
	float                                              Accuracy;                                                 // 0x005C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AmmoAfterThisShot;                                        // 0x0060(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAmmo;                                              // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0062(0x0006) MISSED OFFSET
};

// ScriptStruct Killstreak.KSParticleSystemAttachment
// 0x0020
struct FKSParticleSystemAttachment
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.FloatHitSpringState
// 0x0008
struct FFloatHitSpringState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.HitReaction
// 0x0014
struct FHitReaction
{
	struct FVector                                     WorldHitDirection;                                        // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitTime;                                                  // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.MantleConfig
// 0x00A8
struct FMantleConfig
{
	struct FName                                       MantleSequenceName;                                       // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               DefaultMantleSequence;                                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKSMantleScaleType                                 DistanceScaleMethod;                                      // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              IdealHeight;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeight;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DefaultMinHeight;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              ShaveCutoffTime;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasDropSegment;                                          // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseOnJump;                                               // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStartWhileFalling;                                    // 0x0026(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0027(0x0001) MISSED OFFSET
	float                                              EarlyOutTime;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanEndWithStand;                                         // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanEndWithSlide;                                         // 0x002D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCanEndWithFall;                                          // 0x002E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x49];                                      // 0x002F(0x0049) MISSED OFFSET
	class UAnimSequence*                               CachedSequence;                                           // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0080(0x0028) MISSED OFFSET
};

// ScriptStruct Killstreak.AdvancedCombatEvent
// 0x009F (0x00A0 - 0x0001)
struct FAdvancedCombatEvent : public FReplicatedLogItem
{
	ECombatEventRepType                                RepType;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TWeakObjectPtr<class APlayerState>                 DamageInstigator;                                         // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class APawn>                        DamageInstigatorPawn;                                     // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       DamageCauser;                                             // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0020(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset*                              WeaponAsset;                                              // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VictimId;                                                 // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FString                                     Victim;                                                   // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FVector_NetQuantize                         VictimLocation;                                           // 0x0048(0x000C) (BlueprintVisible, BlueprintReadOnly)
	int                                                VictimTeamNum;                                            // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InstigatorId;                                             // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FString                                     Instigator;                                               // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ECombatEventFriendlyFireType                       FriendlyFireType;                                         // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	float                                              GameTimeStamp;                                            // 0x0074(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         HitLocation;                                              // 0x0078(0x000C) (BlueprintVisible, BlueprintReadOnly)
	struct FName                                       HitBone;                                                  // 0x0084(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Headshot;                                                 // 0x008C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               DowningHit;                                               // 0x008D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               FatalHit;                                                 // 0x008E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x11];                                      // 0x008F(0x0011) MISSED OFFSET
};

// ScriptStruct Killstreak.AdvancedCombatSummary
// 0x0020
struct FAdvancedCombatSummary
{
	class APawn*                                       DamageInstigatorPawn;                                     // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FAdvancedCombatEvent>                CombatEvents;                                             // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Killstreak.AdvancedCombatSummaryParser
// 0x0028
struct FAdvancedCombatSummaryParser
{
	bool                                               bHasPendingSummary;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FAdvancedCombatSummary                      PendingSummary;                                           // 0x0008(0x0020) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Killstreak.CombatSummaryLog
// 0x0048 (0x00B8 - 0x0070)
struct FCombatSummaryLog : public FReplicatedLog
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
	TArray<struct FAdvancedCombatEvent>                Items;                                                    // 0x0078(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class UKSCombatLogComponent>        OwnerCombatLogComp;                                       // 0x0088(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FAdvancedCombatSummaryParser                Parser;                                                   // 0x0090(0x0028) (Transient, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct Killstreak.CombatEvent
// 0x0014
struct FCombatEvent
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               Fatal;                                                    // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              Damage;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Killstreak.revive
// 0x000C
struct Frevive
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Killstreak.assist
// 0x000C
struct Fassist
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Killstreak.advcombat
// 0x000C
struct Fadvcombat
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Killstreak.CharacterArray
// 0x0050
struct FCharacterArray
{
	TArray<struct FVector>                             Positions;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FCombatEvent>                        CombatEvents;                                             // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct Frevive>                             Revives;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct Fassist>                             Assists;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct Fadvcombat>                          AdvCombats;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct Killstreak.TargetingModuleTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FTargetingModuleTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.KSEmoteInterruptRules
// 0x0004
struct FKSEmoteInterruptRules
{
	unsigned char                                      UnknownData00 : 2;                                        // 0x0000(0x0001)
	unsigned char                                      Walking : 1;                                              // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      Sprinting : 1;                                            // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      Downed : 1;                                               // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      Dead : 1;                                                 // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      Interacting : 1;                                          // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      ZipLine : 1;                                              // 0x0000(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      SkyDiving : 1;                                            // 0x0001(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      DodgeRolling : 1;                                         // 0x0001(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      Falling : 1;                                              // 0x0001(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      NonEmoteEquipment : 1;                                    // 0x0001(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      EmoteActivated : 1;                                       // 0x0001(0x0001) (Edit, EditConst)
	unsigned char                                      Cooldown : 1;                                             // 0x0001(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct Killstreak.KSEmoteInterrupTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FKSEmoteInterrupTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.KSEmoteConversionEntry
// 0x000C
struct FKSEmoteConversionEntry
{
	struct FName                                       EmotionName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EKSEmotion                                         EmotionEnum;                                              // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAnimStats
// 0x0008
struct FKSAnimStats
{
	float                                              PlayTime;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PlayTimeWeighted;                                         // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSRespawnConfig
// 0x000C
struct FKSRespawnConfig
{
	EKSRespawnMode                                     RespawnMode;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                TotalRespawns;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RespawnTime;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSLootGroupGuarantee
// 0x0018
struct FKSLootGroupGuarantee
{
	int                                                Quantity;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        ObjectiveLootGroups;                                      // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Killstreak.KSLootGroupGuaranteeMap
// 0x0058
struct FKSLootGroupGuaranteeMap
{
	int                                                TotalLootSitesActive;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<unsigned char, struct FKSLootGroupGuarantee>  GuaranteeMap;                                             // 0x0008(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Killstreak.KSLootRaritySwapInfo
// 0x000C
struct FKSLootRaritySwapInfo
{
	float                                              Chance;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ELootSiteRarity                                    OldRarity;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ELootSiteRarity                                    NewRarity;                                                // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
};

// ScriptStruct Killstreak.KSGameHUDSettings
// 0x0010
struct FKSGameHUDSettings
{
	bool                                               TestBooleanProperty;                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      GameModeWidget;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.KSEventAssistants
// 0x0010
struct FKSEventAssistants
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Killstreak.InventoryRestoreInfo
// 0x0010
struct FInventoryRestoreInfo
{
	struct FGameplayTag                                EquipPoint;                                               // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	class UKSItem*                                     Item;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.RoyaleZoneData
// 0x0014
struct FRoyaleZoneData
{
	float                                              ZoneRadius;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeToShrink;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeAfterShrink;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamagePerTick;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageTickPeriod;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.CombatEventItem
// 0x0057 (0x0058 - 0x0001)
struct FCombatEventItem : public FReplicatedLogItem
{
	struct FCombatEventInfo                            CombatEvent;                                              // 0x0000(0x0058)
};

// ScriptStruct Killstreak.CombatEventList
// 0x0018 (0x0088 - 0x0070)
struct FCombatEventList : public FSizedArraySerializer
{
	TArray<struct FCombatEventItem>                    Items;                                                    // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.AssistInfo
// 0x0028
struct FAssistInfo
{
	TWeakObjectPtr<class AKSPlayerState>               Assistant;                                                // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageContributed;                                        // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ContributionPercent;                                      // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PointsAwarded;                                            // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AKSPlayerState>               Victim;                                                   // 0x0014(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AKSPlayerState>               DownInstigator;                                           // 0x001C(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLethal;                                                  // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Killstreak.AssistEventItem
// 0x0027 (0x0028 - 0x0001)
struct FAssistEventItem : public FReplicatedLogItem
{
	struct FAssistInfo                                 AssistInfo;                                               // 0x0000(0x0028)
};

// ScriptStruct Killstreak.AssistEventList
// 0x0018 (0x0088 - 0x0070)
struct FAssistEventList : public FSizedArraySerializer
{
	TArray<struct FAssistEventItem>                    Items;                                                    // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.ReviveEvent
// 0x0014
struct FReviveEvent
{
	TWeakObjectPtr<class AKSPlayerState>               Reviver;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AKSPlayerState>               Revivee;                                                  // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ExpBonus;                                                 // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ReviveEventItem
// 0x0013 (0x0014 - 0x0001)
struct FReviveEventItem : public FReplicatedLogItem
{
	struct FReviveEvent                                ReviveEvent;                                              // 0x0000(0x0014)
};

// ScriptStruct Killstreak.ReviveEventList
// 0x0018 (0x0088 - 0x0070)
struct FReviveEventList : public FSizedArraySerializer
{
	TArray<struct FReviveEventItem>                    Items;                                                    // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.KSLootRarityTimerPair
// 0x0010
struct FKSLootRarityTimerPair
{
	ELootSiteRarity                                    Rarity;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UKSTimerComponent*                           Timer;                                                    // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Killstreak.AccoladeEventEntry
// 0x0068
struct FAccoladeEventEntry
{
	TWeakObjectPtr<class AKSPlayerState>               RelevantPlayer;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAccoladeDisplayInfo                        AccoladeDisplayInfo;                                      // 0x0008(0x0058)
	bool                                               IgnoreRelevantPlayerId;                                   // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
};

// ScriptStruct Killstreak.AccoladeEventItem
// 0x0067 (0x0068 - 0x0001)
struct FAccoladeEventItem : public FReplicatedLogItem
{
	struct FAccoladeEventEntry                         AccoladeEventEntry;                                       // 0x0000(0x0068)
};

// ScriptStruct Killstreak.AccoladeEventList
// 0x0018 (0x0088 - 0x0070)
struct FAccoladeEventList : public FSizedArraySerializer
{
	TArray<struct FAccoladeEventItem>                  Items;                                                    // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.DisplayInfo
// 0x0080
struct FDisplayInfo
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty Killstreak.DisplayInfo.DisplayWidgetMap
	int                                                UniqueId;                                                 // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class AActor*                                      AssociatedActor;                                          // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AssociatedObject;                                         // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultLocation;                                          // 0x0068(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x0078(0x0008)
};

// ScriptStruct Killstreak.ReplicatedRoundInfo
// 0x000C
struct FReplicatedRoundInfo
{
	struct FName                                       RoundState;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      RoundNumber;                                              // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Killstreak.RoundResult
// 0x0020
struct FRoundResult
{
	unsigned char                                      RoundNumber;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AKSTeamState*                                WinningTeam;                                              // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WinnerScore;                                              // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               WinByElimination;                                         // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LastTriggeredRound;                                       // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	class AKSObjectiveBase*                            ObjectiveChosen;                                          // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSTeamCashPair
// 0x0008
struct FKSTeamCashPair
{
	int                                                teamNum;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.SettingConfigPair
// 0x0020
struct FSettingConfigPair
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.KSGlobalShotInfo
// 0x0018
struct FKSGlobalShotInfo
{
	class APlayerState*                                FiringPlayer;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     FiringLocation;                                           // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              AudibleRange;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSWidgetInfoParams
// 0x0048
struct FKSWidgetInfoParams
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty Killstreak.KSWidgetInfoParams.Widget
	bool                                               bPreloadWidget;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     WidgetParentTarget;                                       // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class AKSWidgetInfoActor*                          InfoActor;                                                // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.InMatchStoreItem
// 0x0010
struct FInMatchStoreItem
{
	class UKSItem*                                     RepresentedItem;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Price;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.InMatchPurchaseInfo
// 0x0020
struct FInMatchPurchaseInfo
{
	struct FInMatchStoreItem                           RequestedItem;                                            // 0x0000(0x0010) (BlueprintVisible)
	struct FGameplayTag                                Slot;                                                     // 0x0010(0x0008) (BlueprintVisible)
	class UObject*                                     PurchasedItem;                                            // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.InMatchStoreFilterInfo
// 0x0030
struct FInMatchStoreFilterInfo
{
	bool                                               LookingForAttachment;                                     // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AKSWeapon*                                   WeaponToAttach;                                           // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AttachmentIndex;                                          // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class UKSItem*                                     ItemAlreadyInSlot;                                        // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                SlotTag;                                                  // 0x0020(0x0008) (BlueprintVisible)
	struct FName                                       ItemCategory;                                             // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.LootSiteState
// 0x0002
struct FLootSiteState
{
	bool                                               bActive;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLooted;                                                  // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.LootSiteDropInfo
// 0x0028
struct FLootSiteDropInfo
{
	class UKSItem*                                     Item;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachment*                         Attachment1;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachment*                         Attachment2;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachment*                         Attachment3;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToSkipAttachment;                                   // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.SkinnableAudioEvent
// 0x0010
struct FSkinnableAudioEvent
{
	struct FName                                       SoundRowName;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DefaultSound;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.JobSelectionEntry
// 0x001C (0x0028 - 0x000C)
struct FJobSelectionEntry : public FFastArraySerializerItem
{
	int                                                JobId;                                                    // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AKSPlayerState>               CurrentPlayerState;                                       // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSerializedMctsNetId                        NetId;                                                    // 0x0018(0x0008)
	bool                                               bSelectedByBot;                                           // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	EJobSelectionState                                 SelectionState;                                           // 0x0021(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct Killstreak.JobSelectionList
// 0x0058 (0x0108 - 0x00B0)
struct FJobSelectionList : public FFastArraySerializer
{
	TMap<int, struct FJobSelectionEntry>               EntryMap;                                                 // 0x00B0(0x0050) (ZeroConstructor)
	class UKSJobSelectionComponent*                    Owner;                                                    // 0x0100(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
};

// ScriptStruct Killstreak.DeferredViewTargetChangeInfo
// 0x0010
struct FDeferredViewTargetChangeInfo
{
	class AActor*                                      OldTarget;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewTarget;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ClientSpec
// 0x00E0
struct FClientSpec
{
	struct FString                                     BuildVersion;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     EngineVersionCurrent;                                     // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     EngineVersionCompatible;                                  // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     OSVersionLabel;                                           // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     OSSubVersionLabel;                                        // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     OSVersion;                                                // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     CPUBrand;                                                 // 0x0060(0x0010) (ZeroConstructor)
	struct FString                                     DeviceMakeAndModel;                                       // 0x0070(0x0010) (ZeroConstructor)
	struct FString                                     PrimaryGPUBrand;                                          // 0x0080(0x0010) (ZeroConstructor)
	struct FString                                     BuildConfiguration;                                       // 0x0090(0x0010) (ZeroConstructor)
	struct FString                                     BranchName;                                               // 0x00A0(0x0010) (ZeroConstructor)
	struct FString                                     CompiledWith;                                             // 0x00B0(0x0010) (ZeroConstructor)
	uint64_t                                           AvailablePhysicalMemory;                                  // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           TotalPhysicalMemory;                                      // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           AvailableVirtualMemory;                                   // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           TotalVirtualMemory;                                       // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ClientStatistics
// 0x0018
struct FClientStatistics
{
	float                                              smoothed;                                                 // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              Minimum;                                                  // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              average;                                                  // 0x000C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                SampleCount;                                              // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.KickbackPlayback
// 0x0020
struct FKickbackPlayback
{
	float                                              AccumulatedTime;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FInterpCurveVector2D                        KickbackCurve;                                            // 0x0008(0x0018) (ZeroConstructor)
};

// ScriptStruct Killstreak.TeamStats
// 0x0020
struct FTeamStats
{
	int                                                teamNum;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     teamName;                                                 // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                teamScore;                                                // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerMatchStatInfo
// 0x0010
struct FPlayerMatchStatInfo
{
	EPlayerStatType                                    StatType;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              StatValue;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StatPlaceTeam;                                            // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StatPlaceAll;                                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PlayerEntryStats
// 0x00A8
struct FPlayerEntryStats
{
	int                                                PlayerId;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	int64_t                                            netPlayerID;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                teamNum;                                                  // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UKSJobItem*                                  PlayerJob;                                                // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPlayerMatchStatInfo                        elimCount;                                                // 0x0030(0x0010) (BlueprintVisible)
	struct FPlayerMatchStatInfo                        downCount;                                                // 0x0040(0x0010) (BlueprintVisible)
	struct FPlayerMatchStatInfo                        deathCount;                                               // 0x0050(0x0010) (BlueprintVisible)
	struct FPlayerMatchStatInfo                        reviveCount;                                              // 0x0060(0x0010) (BlueprintVisible)
	struct FPlayerMatchStatInfo                        DamageDealt;                                              // 0x0070(0x0010) (BlueprintVisible)
	struct FPlayerMatchStatInfo                        hackCount;                                                // 0x0080(0x0010) (BlueprintVisible)
	struct FPlayerMatchStatInfo                        dehackCount;                                              // 0x0090(0x0010) (BlueprintVisible)
	int                                                pointCount;                                               // 0x00A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              timePlayed;                                               // 0x00A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ScoreboardStats
// 0x0040
struct FScoreboardStats
{
	int                                                userPlayerID;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                winTeamNum;                                               // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     mapName;                                                  // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                matchInstanceId;                                          // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GameMode;                                                 // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FTeamStats>                          teams;                                                    // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayerEntryStats>                   playerStats;                                              // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Killstreak.PlayerRewardsSummaryReplicated
// 0x0030
struct FPlayerRewardsSummaryReplicated
{
	TArray<int64_t>                                    ActivityKeys;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        ActivityValues;                                           // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FPlayerMatchStatInfo>                BestStats;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.TrackedPlayers
// 0x0018
struct FTrackedPlayers
{
	int                                                PlayerId;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class AKSPlayerState*                              PlayerState;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.LocationRecord
// 0x000C
struct FLocationRecord
{
	float                                              X;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ObjectiveRecord
// 0x0010
struct FObjectiveRecord
{
	int                                                Type;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             Location;                                                 // 0x0004(0x000C)
};

// ScriptStruct Killstreak.MinimapData
// 0x0020
struct FMinimapData
{
	struct FLocationRecord                             northwest_corner;                                         // 0x0000(0x000C)
	float                                              Width;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FObjectiveRecord>                    objectives;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.PlayerRecord
// 0x00A8
struct FPlayerRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hz_player_id;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     player_name;                                              // 0x0008(0x0010) (ZeroConstructor)
	int                                                team_id;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                class_id;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                player_type;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                portal_id;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                input_type;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                platform_type;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ranking;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ranking_variance;                                         // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                task_force_id;                                            // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                group_id;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                party_id;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                party_size;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                skin_id;                                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                account_level;                                            // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                class_level;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kills_single;                                             // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kills_double;                                             // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kills_triple;                                             // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kills_quadra;                                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kills_penta;                                              // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                deaths;                                                   // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                executes;                                                 // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                downs;                                                    // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Revives;                                                  // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                shots_fired;                                              // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                shots_hit;                                                // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                head_shots;                                               // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_damage;                                       // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_self_damage;                                  // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_friendly_damage;                              // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_reverse_friendly_damage;                      // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                gadget_uses;                                              // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ability_uses;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_earned;                                             // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_spent;                                              // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.ClientSpecRecord
// 0x00E8
struct FClientSpecRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                hz_player_id;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     build_version;                                            // 0x0008(0x0010) (ZeroConstructor)
	struct FString                                     engine_version_current;                                   // 0x0018(0x0010) (ZeroConstructor)
	struct FString                                     engine_version_compatible;                                // 0x0028(0x0010) (ZeroConstructor)
	struct FString                                     os_version_label;                                         // 0x0038(0x0010) (ZeroConstructor)
	struct FString                                     os_subversion_label;                                      // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     os_version;                                               // 0x0058(0x0010) (ZeroConstructor)
	struct FString                                     cpu_brand;                                                // 0x0068(0x0010) (ZeroConstructor)
	struct FString                                     device_make_and_model;                                    // 0x0078(0x0010) (ZeroConstructor)
	struct FString                                     primary_gpu_brand;                                        // 0x0088(0x0010) (ZeroConstructor)
	struct FString                                     build_configuration;                                      // 0x0098(0x0010) (ZeroConstructor)
	struct FString                                     branch_name;                                              // 0x00A8(0x0010) (ZeroConstructor)
	struct FString                                     compiled_with;                                            // 0x00B8(0x0010) (ZeroConstructor)
	uint64_t                                           available_ram;                                            // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           total_ram;                                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           available_virtual;                                        // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           total_virtual;                                            // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PlayerStartingCashRecord
// 0x0008
struct FPlayerStartingCashRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Cash;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PurchasedItemEventRecord
// 0x000C
struct FPurchasedItemEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                item_id;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                cost;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.CashCollectionEventRecord
// 0x0028
struct FCashCollectionEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             Location;                                                 // 0x0004(0x000C)
	struct FString                                     Timestamp;                                                // 0x0010(0x0010) (ZeroConstructor)
	int                                                Amount;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.DownEventRecord
// 0x0038
struct FDownEventRecord
{
	int                                                instigator_ue_player_id;                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             instigator_location;                                      // 0x0004(0x000C)
	int                                                victim_ue_player_id;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             victim_location;                                          // 0x0014(0x000C)
	int                                                weapon_id;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     Timestamp;                                                // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.ExecuteEventRecord
// 0x0038
struct FExecuteEventRecord
{
	int                                                instigator_ue_player_id;                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             instigator_location;                                      // 0x0004(0x000C)
	int                                                victim_ue_player_id;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             victim_location;                                          // 0x0014(0x000C)
	int                                                weapon_id;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FString                                     Timestamp;                                                // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.ReviveEventRecord
// 0x0030
struct FReviveEventRecord
{
	int                                                reviver_ue_player_id;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             reviver_location;                                         // 0x0004(0x000C)
	int                                                revivee_ue_player_id;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             revivee_location;                                         // 0x0014(0x000C)
	struct FString                                     Timestamp;                                                // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.WeaponUseSummaryRecord
// 0x0034
struct FWeaponUseSummaryRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                weapon_id;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                shots_fired;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                shots_hit;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                head_shots;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_damage;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_self_damage;                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_friendly_damage;                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_reverse_friendly_damage;                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatingDamage;                                       // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingSelfDamage;                                   // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingFriendlyDamage;                               // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingReverseFriendlyDamage;                        // 0x0030(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Killstreak.AbilityUseEventRecord
// 0x0050
struct FAbilityUseEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             Location;                                                 // 0x0004(0x000C)
	int                                                ability_id;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Timestamp;                                                // 0x0018(0x0010) (ZeroConstructor)
	int                                                accumulated_damage;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_self_damage;                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_friendly_damage;                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_reverse_friendly_damage;                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatingDamage;                                       // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingSelfDamage;                                   // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingFriendlyDamage;                               // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingReverseFriendlyDamage;                        // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FireGameTime;                                             // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.GadgetUseEventRecord
// 0x0050
struct FGadgetUseEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             Location;                                                 // 0x0004(0x000C)
	int                                                gadget_id;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Timestamp;                                                // 0x0018(0x0010) (ZeroConstructor)
	int                                                accumulated_damage;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_self_damage;                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_friendly_damage;                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                accumulated_reverse_friendly_damage;                      // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatingDamage;                                       // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingSelfDamage;                                   // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingFriendlyDamage;                               // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AccumulatingReverseFriendlyDamage;                        // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FireGameTime;                                             // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.EliminationStreakEventRecord
// 0x0008
struct FEliminationStreakEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.MultipleKillEventRecord
// 0x0008
struct FMultipleKillEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ObjectiveCaptureEventRecord
// 0x0028
struct FObjectiveCaptureEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                objective_type;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             Location;                                                 // 0x0008(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     Timestamp;                                                // 0x0018(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.BotStartingDifficultyRecord
// 0x0008
struct FBotStartingDifficultyRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                difficulty_index;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.BotDifficultyChangeEventRecord
// 0x0018
struct FBotDifficultyChangeEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                difficulty_index;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Timestamp;                                                // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.RotationRecord
// 0x0008
struct FRotationRecord
{
	float                                              Yaw;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ClientStatisticsRecord
// 0x0014
struct FClientStatisticsRecord
{
	float                                              smoothed;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minimum;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              average;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                sample_count;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.OrientationEventRecord
// 0x0098
struct FOrientationEventRecord
{
	int                                                ue_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FLocationRecord                             Location;                                                 // 0x0004(0x000C)
	struct FRotationRecord                             Rotation;                                                 // 0x0010(0x0008)
	int                                                movement_state;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     Timestamp;                                                // 0x0020(0x0010) (ZeroConstructor)
	int                                                ping_ms;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FClientStatisticsRecord                     Render;                                                   // 0x0034(0x0014) (ZeroConstructor, IsPlainOldData)
	struct FClientStatisticsRecord                     Game;                                                     // 0x0048(0x0014) (ZeroConstructor, IsPlainOldData)
	struct FClientStatisticsRecord                     gpu;                                                      // 0x005C(0x0014) (ZeroConstructor, IsPlainOldData)
	struct FClientStatisticsRecord                     frame;                                                    // 0x0070(0x0014) (ZeroConstructor, IsPlainOldData)
	struct FClientStatisticsRecord                     rhit;                                                     // 0x0084(0x0014) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.RoundEventRecord
// 0x0110
struct FRoundEventRecord
{
	int                                                round_id;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     round_start_time;                                         // 0x0008(0x0010) (ZeroConstructor)
	int                                                Duration;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                winning_team;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayerStartingCashRecord>           round_starting_cash;                                      // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FPurchasedItemEventRecord>           purchased_item_events;                                    // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FCashCollectionEventRecord>          cash_collection_events;                                   // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FDownEventRecord>                    down_events;                                              // 0x0050(0x0010) (ZeroConstructor)
	TArray<struct FExecuteEventRecord>                 execute_events;                                           // 0x0060(0x0010) (ZeroConstructor)
	TArray<struct FReviveEventRecord>                  revive_events;                                            // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FWeaponUseSummaryRecord>             weapon_use_summaries;                                     // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FAbilityUseEventRecord>              ability_use_events;                                       // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FGadgetUseEventRecord>               gadget_use_events;                                        // 0x00A0(0x0010) (ZeroConstructor)
	TArray<struct FEliminationStreakEventRecord>       elimination_streak_events;                                // 0x00B0(0x0010) (ZeroConstructor)
	TArray<struct FMultipleKillEventRecord>            multiple_kill_events;                                     // 0x00C0(0x0010) (ZeroConstructor)
	TArray<struct FObjectiveCaptureEventRecord>        objective_capture_events;                                 // 0x00D0(0x0010) (ZeroConstructor)
	TArray<struct FBotStartingDifficultyRecord>        round_starting_bot_difficulties;                          // 0x00E0(0x0010) (ZeroConstructor)
	TArray<struct FBotDifficultyChangeEventRecord>     bot_difficulty_change_events;                             // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FOrientationEventRecord>             orientation_events;                                       // 0x0100(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.PlayerConnectionEventRecord
// 0x0020
struct FPlayerConnectionEventRecord
{
	int                                                hz_player_id;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ue_player_id;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                round_id;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             is_connected;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     Timestamp;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.TeamSideEventRecord
// 0x000C
struct FTeamSideEventRecord
{
	int                                                team_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                side_id;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                round_id;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.MatchRecord
// 0x00E8
struct FMatchRecord
{
	int                                                version_major;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                version_minor;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                match_id;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FString                                     map_name;                                                 // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     mode_name;                                                // 0x0020(0x0010) (ZeroConstructor)
	int                                                map_game_id;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                queue_id;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                team_size;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                winning_team;                                             // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     match_start_time;                                         // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     match_end_time;                                           // 0x0050(0x0010) (ZeroConstructor)
	int                                                Duration;                                                 // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_rounds;                                             // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_players;                                            // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_bots;                                               // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_earned;                                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_spent;                                              // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FMinimapData                                Minimap;                                                  // 0x0078(0x0020)
	TArray<struct FPlayerRecord>                       players;                                                  // 0x0098(0x0010) (ZeroConstructor)
	TArray<struct FClientSpecRecord>                   specs;                                                    // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FRoundEventRecord>                   rounds;                                                   // 0x00B8(0x0010) (ZeroConstructor)
	TArray<struct FPlayerConnectionEventRecord>        player_connections;                                       // 0x00C8(0x0010) (ZeroConstructor)
	TArray<struct FTeamSideEventRecord>                side_assigned_for_team_events;                            // 0x00D8(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.DownedEnemyPingHandle
// 0x0018
struct FDownedEnemyPingHandle
{
	TWeakObjectPtr<class AKSPlayerState>               DownedEnemyPlayer;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                PingTimerHandle;                                          // 0x0008(0x0008)
	int                                                PingsSent;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.AccoladeMultiDownTracker
// 0x0060
struct FAccoladeMultiDownTracker
{
	int                                                DownReqAmount;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FAccoladeDisplayInfo                        AccoladeReward;                                           // 0x0008(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct Killstreak.AccoladePlayerTrackers
// 0x0020
struct FAccoladePlayerTrackers
{
	int                                                PlayerId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class AKSPlayerState*                              PlayerState;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                downCount;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                elimCount;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeLeft;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.AccoladeMultiElimTracker
// 0x0060
struct FAccoladeMultiElimTracker
{
	int                                                ElimReqAmount;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FAccoladeDisplayInfo                        AccoladeReward;                                           // 0x0008(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct Killstreak.TrackPlayerElim
// 0x0008
struct FTrackPlayerElim
{
	int                                                PlayerInstigatorId;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerVictimId;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PingInfo
// 0x0030
struct FPingInfo
{
	EPingType                                          PingType;                                                 // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector_NetQuantize                         Location;                                                 // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly)
	class AActor*                                      PingedActor;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState*                              PingingPlayer;                                            // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                ExpirationHandle;                                         // 0x0020(0x0008) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                PingId;                                                   // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.PingInfoChangeItem
// 0x0034 (0x0040 - 0x000C)
struct FPingInfoChangeItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FPingInfo                                   PingInfo;                                                 // 0x0010(0x0030)
};

// ScriptStruct Killstreak.PingInfoChangeList
// 0x0018 (0x00C8 - 0x00B0)
struct FPingInfoChangeList : public FFastArraySerializer
{
	TArray<struct FPingInfoChangeItem>                 Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.KSCustomInputActionKey
// 0x0014
struct FKSCustomInputActionKey
{
	int                                                propId;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KeyboardName;                                             // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GamepadName;                                              // 0x000C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.KSCustomInputAxisKey
// 0x001C
struct FKSCustomInputAxisKey
{
	int                                                propId;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       KeyboardName;                                             // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              KeyboardScale;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GamepadName;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GamepadScale;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.KSCustomInputActionKeyMappings
// 0x0030
struct FKSCustomInputActionKeyMappings
{
	TArray<struct FInputActionKeyMapping>              KBM_Mappings;                                             // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FInputActionKeyMapping>              GP_Mappings;                                              // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FInputActionKeyMapping>              Touch_Mappings;                                           // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.KSInputAxisKeyMappings
// 0x0010
struct FKSInputAxisKeyMappings
{
	TArray<struct FInputAxisKeyMapping>                InputAxisKeyMappings;                                     // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.KSCustomInputAxisKeyMappings
// 0x00F0
struct FKSCustomInputAxisKeyMappings
{
	TMap<float, struct FKSInputAxisKeyMappings>        KBM_Mappings;                                             // 0x0000(0x0050) (ZeroConstructor)
	TMap<float, struct FKSInputAxisKeyMappings>        GP_Mappings;                                              // 0x0050(0x0050) (ZeroConstructor)
	TMap<float, struct FKSInputAxisKeyMappings>        Touch_Mappings;                                           // 0x00A0(0x0050) (ZeroConstructor)
};

// ScriptStruct Killstreak.ShopManifest
// 0x0058 (0x0108 - 0x00B0)
struct FShopManifest : public FFastArraySerializer
{
	TMap<unsigned char, struct FShopItem>              Manifest;                                                 // 0x00B0(0x0050) (ZeroConstructor)
	class AKSPlayerShop*                               Owner;                                                    // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Killstreak.PlayerShopTransaction
// 0x0008
struct FPlayerShopTransaction
{
	EPlayerShopTransactionType                         TransactionType;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EShopItemType                                      ItemType;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	uint32_t                                           TransactionRequestId;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSScoreChangeEvent
// 0x0030
struct FKSScoreChangeEvent
{
	int                                                Delta;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FText                                       Reason;                                                   // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bBonus;                                                   // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AKSPlayerState>               Instigator;                                               // 0x0024(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.KSClientShotInfo
// 0x0018
struct FKSClientShotInfo
{
	struct FVector                                     FiringLocation;                                           // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UniqueId;                                                 // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EKSPingType                                        PingType;                                                 // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct Killstreak.KSScoreChangeItem
// 0x002F (0x0030 - 0x0001)
struct FKSScoreChangeItem : public FReplicatedLogItem
{
	struct FKSScoreChangeEvent                         ScoreChange;                                              // 0x0000(0x0030)
};

// ScriptStruct Killstreak.KSScoreChangeList
// 0x0020 (0x0090 - 0x0070)
struct FKSScoreChangeList : public FSizedArraySerializer
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET
	TArray<struct FKSScoreChangeItem>                  Items;                                                    // 0x0078(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct Killstreak.KSCashChangeList
// 0x0000 (0x0090 - 0x0090)
struct FKSCashChangeList : public FKSScoreChangeList
{

};

// ScriptStruct Killstreak.ProjectileExplosionInfo
// 0x001C
struct FProjectileExplosionInfo
{
	EProjectileExplosionType                           ExplosionType;                                            // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector_NetQuantize                         ImpactPoint;                                              // 0x0004(0x000C) (BlueprintVisible)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x0010(0x000C) (BlueprintVisible)
};

// ScriptStruct Killstreak.LaggedProjectileHit
// 0x0094
struct FLaggedProjectileHit
{
	struct FHitResult                                  HitResult;                                                // 0x0000(0x0088) (IsPlainOldData)
	float                                              ClientHitTimeStamp;                                       // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              AdditionalPredictionTime;                                 // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	EProjectilePredictionType                          PredictionType;                                           // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
};

// ScriptStruct Killstreak.KSSpreadTransform
// 0x0060
struct FKSSpreadTransform
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USphereComponent*                            Sphere;                                                   // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMeshComponent*                              Mesh;                                                     // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CurrentHealth;                                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.KSSpreadEntry
// 0x0064 (0x0070 - 0x000C)
struct FKSSpreadEntry : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FKSSpreadTransform                          Entry;                                                    // 0x0010(0x0060)
};

// ScriptStruct Killstreak.KSSpreadList
// 0x0018 (0x00C8 - 0x00B0)
struct FKSSpreadList : public FFastArraySerializer
{
	TArray<struct FKSSpreadEntry>                      List;                                                     // 0x00B0(0x0010) (ZeroConstructor)
	class AKSProjectile_GrenadeSpread*                 Owner;                                                    // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSActorProximityInfo
// 0x0018
struct FKSActorProximityInfo
{
	bool                                               bInLOS;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              LastTimeUpdated;                                          // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UPrimitiveComponent*>                 OverlappedComponents;                                     // 0x0008(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Killstreak.KSProjectileClusterSegment
// 0x0020
struct FKSProjectileClusterSegment
{
	class UClass*                                      ProjectileClass;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset*                              WeaponAsset;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.KSProximityFilter
// 0x0020
struct FKSProximityFilter
{
	TArray<class UClass*>                              ValidActorClasses;                                        // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bCountAllies;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCountEnemies;                                            // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCountUnaffiliated;                                       // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCheckLOS;                                                // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LOSTraceStartOffset;                                      // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PlayerDamageInfo
// 0x0030
struct FPlayerDamageInfo
{
	int                                                InstigatorPlayerId;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     InstigatorPlayerName;                                     // 0x0008(0x0010) (ZeroConstructor)
	int                                                VictimPlayerId;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     VictimPlayerName;                                         // 0x0020(0x0010) (ZeroConstructor)
};

// ScriptStruct Killstreak.PlayerRewardsSummary
// 0x0060
struct FPlayerRewardsSummary
{
	TMap<int64_t, int>                                 ActivityRewards;                                          // 0x0000(0x0050) (BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayerMatchStatInfo>                BestStats;                                                // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Killstreak.SafeZoneParams
// 0x0010
struct FSafeZoneParams
{
	struct FVector                                     CenterPosition;                                           // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.EquipPointDefinition
// 0x0058
struct FEquipPointDefinition
{
	struct FGameplayTag                                EquipPoint;                                               // 0x0000(0x0008) (Edit)
	struct FGameplayTagQuery                           WeaponTypeQuery;                                          // 0x0008(0x0048) (Edit)
	bool                                               bCanSwapToManually;                                       // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct Killstreak.PlayerTeamTracker
// 0x0018
struct FPlayerTeamTracker
{
	int                                                PlayerId;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PlayerTeamNum;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        PlayerElimIds;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Killstreak.KSRiderSeatPair
// 0x0010
struct FKSRiderSeatPair
{
	class AKSCharacter*                                Rider;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSVehicleSeatComponent*                     Seat;                                                     // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Killstreak.KSVehicleDestructionStage
// 0x0060
struct FKSVehicleDestructionStage
{
	class UParticleSystem*                             StageVFX;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StageSFX;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StageEcho;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
	struct FTransform                                  StageEffectTransform;                                     // 0x0020(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              StageDeteriorationRate;                                   // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
};

// ScriptStruct Killstreak.WeaponAttachmentAnimationData
// 0x03A0 (0x03A8 - 0x0008)
struct FWeaponAttachmentAnimationData : public FTableRowBase
{
	bool                                               bUseDefaultIfNone;                                        // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0009(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.WeaponAsset
	unsigned char                                      UnknownData02[0x28];                                      // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.WeaponAttachmentMesh
	unsigned char                                      UnknownData03[0x28];                                      // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.WeaponAttachmentSequence
	unsigned char                                      UnknownData04[0x28];                                      // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PHolsterMontage
	unsigned char                                      UnknownData05[0x28];                                      // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PRetrieveMontage
	unsigned char                                      UnknownData06[0x28];                                      // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PFireMontage
	unsigned char                                      UnknownData07[0x28];                                      // 0x0100(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PReloadMontage
	unsigned char                                      UnknownData08[0x28];                                      // 0x0128(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PStandingAimOffset
	unsigned char                                      UnknownData09[0x28];                                      // 0x0150(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PCrouchedAimOffset
	unsigned char                                      UnknownData10[0x28];                                      // 0x0178(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PStandingBlendSpace
	unsigned char                                      UnknownData11[0x28];                                      // 0x01A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PCrouchedBlendSpace
	unsigned char                                      UnknownData12[0x28];                                      // 0x01C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PStandingIdleSequence
	unsigned char                                      UnknownData13[0x28];                                      // 0x01F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player3PCrouchedIdleSequence
	unsigned char                                      UnknownData14[0x28];                                      // 0x0218(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PFireMontage
	unsigned char                                      UnknownData15[0x28];                                      // 0x0240(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PStandingBlendSpace
	unsigned char                                      UnknownData16[0x28];                                      // 0x0268(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PCrouchedBlendSpace
	unsigned char                                      UnknownData17[0x28];                                      // 0x0290(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PStandingAimOffset
	unsigned char                                      UnknownData18[0x28];                                      // 0x02B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PRetrieveMontage
	unsigned char                                      UnknownData19[0x28];                                      // 0x02E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PReloadMontage
	unsigned char                                      UnknownData20[0x28];                                      // 0x0308(0x0028) UNKNOWN PROPERTY: SoftClassProperty Killstreak.WeaponAttachmentAnimationData.Player1PCameraShake
	unsigned char                                      UnknownData21[0x28];                                      // 0x0330(0x0028) UNKNOWN PROPERTY: SoftClassProperty Killstreak.WeaponAttachmentAnimationData.Player1PADSCameraShake
	unsigned char                                      UnknownData22[0x28];                                      // 0x0358(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PAdditiveStandGunPose
	unsigned char                                      UnknownData23[0x28];                                      // 0x0380(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.WeaponAttachmentAnimationData.Player1PAdditiveCrouchGunPose
};

// ScriptStruct Killstreak.LoadedWeaponAttachmentAnimationData
// 0x00B0
struct FLoadedWeaponAttachmentAnimationData
{
	class USkeletalMesh*                               WeaponAttachmentMesh;                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               WeaponAttachmentSequence;                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player3PHolsterMontage;                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player3PRetrieveMontage;                                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player3PFireMontage;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player3PReloadMontage;                                    // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        Player3PStandingAimOffset;                                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        Player3PCrouchedAimOffset;                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Player3PStandingBlendSpace;                               // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Player3PCrouchedBlendSpace;                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Player3PStandingIdleSequence;                             // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Player3PCrouchedIdleSequence;                             // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player1PFireMontage;                                      // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Player1PStandingBlendSpace;                               // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 Player1PCrouchedBlendSpace;                               // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        Player1PStandingAimOffset;                                // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player1PRetrieveMontage;                                  // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Player1PReloadMontage;                                    // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Player1PCameraShake;                                      // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Player1PADSCameraShake;                                   // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Player1PAdditiveStandGunPose;                             // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               Player1PAdditiveCrouchGunPose;                            // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSWayPointLink
// 0x0020
struct FKSWayPointLink
{
	TArray<class AKSWayPoint*>                         NextWayPoints;                                            // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class AKSWayPoint*>                         PrevWayPoints;                                            // 0x0010(0x0010) (ZeroConstructor, Transient)
};

// ScriptStruct Killstreak.WeaponLeadingInfo
// 0x0010
struct FWeaponLeadingInfo
{
	float                                              fMaxWeaponLeading;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fWeaponLeadingSmoothingFactor;                            // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fWeaponLeadingInterpSpeed;                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fWeaponLeadingRecoverInterpSpeed;                         // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.AncillaryWeaponMeshInfo
// 0x0018
struct FAncillaryWeaponMeshInfo
{
	class USkeletalMesh*                               Mesh;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DefaultAttachSocket;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DefaultDetachSocket;                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct Killstreak.CongregatedShotgunHit
// 0x00B0
struct FCongregatedShotgunHit
{
	struct FHitResult                                  FirstHit;                                                 // 0x0000(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // 0x0088(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TimesHit;                                                 // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedDamage;                                        // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TimesHitHead;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               HeadshotRegistered;                                       // 0x009C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x009D(0x0003) MISSED OFFSET
	struct FName                                       BackupBodyBone;                                           // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BackupHeadBone;                                           // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.LoadingScreenImageInfo
// 0x0070
struct FLoadingScreenImageInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.LoadingScreenImageInfo.LoadingScreenImage
	struct FText                                       MapDisplayName;                                           // 0x0028(0x0018) (Edit)
	struct FText                                       MapRegion;                                                // 0x0040(0x0018) (Edit)
	struct FText                                       MapDescription;                                           // 0x0058(0x0018) (Edit)
};

// ScriptStruct Killstreak.TimelineSimulationHandler
// 0x0014
struct FTimelineSimulationHandler
{
	float                                              ServerTimeStamp;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ErrorTolerance;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bLooping : 1;                                             // 0x0008(0x0001)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0008(0x0001)
	unsigned char                                      bPlaying : 1;                                             // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              PlayRate;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.ActiveThermalPPComponentInfo
// 0x0010
struct FActiveThermalPPComponentInfo
{
	class UThermalScopePPComponent*                    ThermalPPComponent;                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AKSPlayerCameraManager*                      PlayerCameraManager;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AnnouncementData
// 0x0038
struct FAnnouncementData
{
	EAnnouncementType                                  Type;                                                     // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       MessageText;                                              // 0x0008(0x0018) (BlueprintVisible)
	ETeamAlignment                                     TeamAlignment;                                            // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                TeamAlignmentNum;                                         // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FriendlyTeamAlive;                                        // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnemyTeamAlive;                                           // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Seconds;                                                  // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisplayDuration;                                          // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AttachmentData
// 0x0048
struct FAttachmentData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.AttachmentData.SoftObjectPtr
	struct FGameplayTagContainer                       CachedCompatibleWeaponTypes;                              // 0x0028(0x0020) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct Killstreak.AccoladeTrackerTableRow
// 0x0028 (0x0030 - 0x0008)
struct FAccoladeTrackerTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty Killstreak.AccoladeTrackerTableRow.AccoladeTrackerObject
};

// ScriptStruct Killstreak.PlayerActivityInstances
// 0x0058
struct FPlayerActivityInstances
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TMap<struct FInventoryId, class UKSActivityInstance*> ActivityInstances;                                        // 0x0008(0x0050) (ZeroConstructor)
};

// ScriptStruct Killstreak.BotNameTableRow
// 0x0000 (0x0008 - 0x0008)
struct FBotNameTableRow : public FTableRowBase
{

};

// ScriptStruct Killstreak.KSInitialLoadoutRow
// 0x0010 (0x0018 - 0x0008)
struct FKSInitialLoadoutRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) UNKNOWN PROPERTY: ArrayProperty Killstreak.KSInitialLoadoutRow.LoadoutItems
};

// ScriptStruct Killstreak.KSAnimInstanceProxy
// 0x0060 (0x0740 - 0x06E0)
struct FKSAnimInstanceProxy : public FSkinnedAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x06E0(0x0060) MISSED OFFSET
};

// ScriptStruct Killstreak.KSBotAbilityTableRow
// 0x0038 (0x0040 - 0x0008)
struct FKSBotAbilityTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSBotAbilityTableRow.Ability
	TArray<class UKSBTAction*>                         RequiredActions;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct Killstreak.KSBotJobConfig
// 0x0058
struct FKSBotJobConfig
{
	bool                                               bAllowJob;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0001(0x0050) UNKNOWN PROPERTY: MapProperty Killstreak.KSBotJobConfig.AllowedAlternateSkins
};

// ScriptStruct Killstreak.KSBTDifficultyTableRow
// 0x0088 (0x0090 - 0x0008)
struct FKSBTDifficultyTableRow : public FTableRowBase
{
	class UKSBTDifficulty*                             Difficulty;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FKSBTDifficultyConfig                       DifficultyModifierConfig;                                 // 0x0010(0x0078) (Edit)
	class UDataTable*                                  ObjectivePriorityTable;                                   // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSBTTargetSelectionTableRow
// 0x0008 (0x0010 - 0x0008)
struct FKSBTTargetSelectionTableRow : public FTableRowBase
{
	class UKSBTTargetSelector*                         TargetSelector;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.KSPendingAction
// 0x0028
struct FKSPendingAction
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Killstreak.KSInputAction
// 0x0048
struct FKSInputAction
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Killstreak.VOTableRow
// 0x0030 (0x0038 - 0x0008)
struct FVOTableRow : public FTableRowBase
{
	struct FGameplayTag                                VOEvent;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.VOTableRow.AudioEvent
};

// ScriptStruct Killstreak.KSEquipmentCommonDummyStruct
// 0x0001
struct FKSEquipmentCommonDummyStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Killstreak.LoadingScreenImageRow
// 0x0088 (0x0090 - 0x0008)
struct FLoadingScreenImageRow : public FTableRowBase
{
	struct FSoftObjectPath                             Map;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.LoadingScreenImageRow.LoadingScreenImage
	struct FText                                       MapDisplayName;                                           // 0x0048(0x0018) (Edit, BlueprintVisible)
	struct FText                                       MapRegion;                                                // 0x0060(0x0018) (Edit, BlueprintVisible)
	struct FText                                       MapDescription;                                           // 0x0078(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct Killstreak.LoadingScreenTipTextRow
// 0x0020 (0x0028 - 0x0008)
struct FLoadingScreenTipTextRow : public FTableRowBase
{
	struct FText                                       TipText;                                                  // 0x0008(0x0018) (Edit, BlueprintVisible)
	bool                                               IsStaticTip;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct Killstreak.KSPlayerProfile
// 0x0008 (0x0020 - 0x0018)
struct FKSPlayerProfile : public FPGame_PlayerProfile
{
	int                                                TeamNumber;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.KSItemMasterTableRow
// 0x0040 (0x0048 - 0x0008)
struct FKSItemMasterTableRow : public FTableRowBase
{
	struct FString                                     ItemDisplayName;                                          // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                ItemId;                                                   // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x001C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSItemMasterTableRow.KSItemSoftObject
};

// ScriptStruct Killstreak.LootSiteTableRow
// 0x00A8 (0x00B0 - 0x0008)
struct FLootSiteTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.LootSiteTableRow.Item
	unsigned char                                      UnknownData01[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.LootSiteTableRow.Attachment1
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.LootSiteTableRow.Attachment2
	unsigned char                                      UnknownData03[0x28];                                      // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.LootSiteTableRow.Attachment3
	float                                              Weight;                                                   // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToSkipAttachment;                                   // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.AirElimTracker
// 0x0008
struct FAirElimTracker
{
	int                                                InstigatorId;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                downCount;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.PingCacher
// 0x0010
struct FPingCacher
{
	class AKSPlayerState*                              PingingPlayer;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PingId;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.RecoilParams2
// 0x0003
struct FRecoilParams2
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct Killstreak.RecoilInfo2
// 0x0070
struct FRecoilInfo2
{
	float                                              TimeToGo;                                                 // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeDuration;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RotAmplitude;                                             // 0x0008(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RotFrequency;                                             // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0020(0x000C) MISSED OFFSET
	struct FRecoilParams2                              RotParams;                                                // 0x002C(0x0003) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x002F(0x0001) MISSED OFFSET
	struct FRotator                                    RotOffset;                                                // 0x0030(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     LocAmplitude;                                             // 0x003C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocFrequency;                                             // 0x0048(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0054(0x000C) MISSED OFFSET
	struct FRecoilParams2                              LocParams;                                                // 0x0060(0x0003) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	struct FVector                                     LocOffset;                                                // 0x0064(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Killstreak.RecoilProfile2
// 0x01C0
struct FRecoilProfile2
{
	struct FRecoilInfo2                                PelvisRecoil;                                             // 0x0000(0x0070) (Edit, BlueprintVisible)
	struct FRecoilInfo2                                SpineRecoil;                                              // 0x0070(0x0070) (Edit, BlueprintVisible)
	struct FRecoilInfo2                                NeckRecoil;                                               // 0x00E0(0x0070) (Edit, BlueprintVisible)
	struct FRecoilInfo2                                HandRecoil;                                               // 0x0150(0x0070) (Edit, BlueprintVisible)
};

// ScriptStruct Killstreak.KSInitialInventoryTableEntry
// 0x0040
struct FKSInitialInventoryTableEntry
{
	struct FGameplayTag                                EquipPoint;                                               // 0x0000(0x0008) (Edit)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSInitialInventoryTableEntry.ItemAsset
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty Killstreak.KSInitialInventoryTableEntry.Attachments
};

// ScriptStruct Killstreak.ViewModelInfo
// 0x0010
struct FViewModelInfo
{
	class UKSItem*                                     Item;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EWeaponStateNew                                    DefaultWeaponState;                                       // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Killstreak.AttachmentInfo
// 0x0010
struct FAttachmentInfo
{
	class UKSWeaponAttachment*                         Attachment;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Slot;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Killstreak.KSAssetOverrideTable_TableRow
// 0x00A0 (0x00A8 - 0x0008)
struct FKSAssetOverrideTable_TableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSAssetOverrideTable_TableRow.WeaponAsset
	unsigned char                                      UnknownData01[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Killstreak.KSAssetOverrideTable_TableRow.WeaponSpecificOverrideTable
	int                                                TablePriority;                                            // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FGameplayTagQuery                           SkinTagQuery;                                             // 0x0060(0x0048) (Edit, BlueprintVisible)
};

// ScriptStruct Killstreak.WeaponGraphEdge
// 0x0002
struct FWeaponGraphEdge
{
	EWeaponStateNew                                    OldState;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EWeaponStateNew                                    NewState;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Killstreak.HitDecalInfo
// 0x0028
struct FHitDecalInfo
{
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Size;                                                     // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumScaling;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumScaling;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumAngle;                                             // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumAngle;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Killstreak.TraceCommonEmpty
// 0x0001
struct FTraceCommonEmpty
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
