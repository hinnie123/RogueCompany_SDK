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

// Enum PlatformGameFramework.EGameLocalizationType
enum class EGameLocalizationType : uint8_t
{
	Unknown                        = 0,
	PC                             = 1,
	XboxOne                        = 2,
	PS4_SIEA                       = 3,
	PS4_SIEE                       = 4,
	Switch                         = 5,
	Mobile                         = 6,
	EGameLocalizationType_MAX      = 7
};


// Enum PlatformGameFramework.EGameBits
enum class EGameBits : uint8_t
{
	NoStoreUI                      = 0,
	UseAltUI                       = 1,
	UseAltQueueUI                  = 2,
	UseSpectator                   = 3,
	EGameBits_MAX                  = 4
};


// Enum PlatformGameFramework.EPGame_CustomMovement
enum class EPGame_CustomMovement : uint8_t
{
	PLATMOVE_Tween                 = 0,
	PLATMOVE_Charge                = 1,
	PLATMOVE_MAX                   = 2
};


// Enum PlatformGameFramework.ECombatLogType
enum class ECombatLogType : uint8_t
{
	JSON                           = 0,
	AWS                            = 1,
	DEFAULT                        = 2,
	ECombatLogType_MAX             = 3
};


// Enum PlatformGameFramework.EEffectGroupApplicationRule
enum class EEffectGroupApplicationRule : uint8_t
{
	STACKABLE                      = 0,
	NEWEST                         = 1,
	STRONGEST                      = 2,
	REFRESH                        = 3,
	STACK_IN_PLACE                 = 4,
	STACK_IN_PLACE_INSTIGATOR      = 5,
	STRONGEST_BEFORE_NEWEST        = 6,
	EEffectGroupApplicationRule_MAX = 7
};


// Enum PlatformGameFramework.EPGame_EPropertyType
enum class EPGame_EPropertyType : uint8_t
{
	PROPTYPE_Modifier              = 0,
	PROPTYPE_Percent               = 1,
	PROPTYPE_Value                 = 2,
	PROPTYPE_Delta                 = 3,
	PROPTYPE_MAX                   = 4
};


// Enum PlatformGameFramework.PGAME_INPUT_STATE
enum class EPGAME_INPUT_STATE : uint8_t
{
	PIS_KEYMOUSE                   = 0,
	PIS_GAMEPAD                    = 1,
	PIS_TOUCH                      = 2,
	PIS_UNKNOWN                    = 3,
	PIS_MAX                        = 4
};


// Enum PlatformGameFramework.EPGame_ReplicateTimerState
enum class EPGame_ReplicateTimerState : uint8_t
{
	Inactive                       = 0,
	Active                         = 1,
	Overtime                       = 2,
	Unlimited                      = 3,
	Paused                         = 4,
	EPGame_MAX                     = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PlatformGameFramework.PlatformPropertyId
// 0x0002
struct FPlatformPropertyId
{
	uint16_t                                           ID;                                                       // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.PGame_Property
// 0x0018 (0x0024 - 0x000C)
struct FPGame_Property : public FFastArraySerializerItem
{
	struct FPlatformPropertyId                         PropertyId;                                               // 0x000C(0x0002) (Edit, DisableEditOnInstance)
	TEnumAsByte<EPGame_EPropertyType>                  Type;                                                     // 0x000E(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
	float                                              Base;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              RawFlat;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RawPercent;                                               // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Minimum;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              Maximum;                                                  // 0x0020(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.PGame_BlueprintableLightingChannels
// 0x0003
struct FPGame_BlueprintableLightingChannels
{
	bool                                               bChannel0;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChannel1;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bChannel2;                                                // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.TweenInfo
// 0x0014
struct FTweenInfo
{
	unsigned char                                      TweenType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     TweenDestination;                                         // 0x0004(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TweenTime;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.ChargeInfo
// 0x001C
struct FChargeInfo
{
	struct FVector                                     ChargeInitialLocation;                                    // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ChargeInitialYaw;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ChargeSpeed;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ChargeRange;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      ChargeType;                                               // 0x0018(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_PersistentEffectRepData
// 0x004C (0x0058 - 0x000C)
struct FPGame_PersistentEffectRepData : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class UPGame_EffectGroup*                          EffectGroupBlueprint;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	class UClass*                                      AttachmentBlueprint;                                      // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	uint16_t                                           EffectGroupId;                                            // 0x0020(0x0002) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              fTimeRemainingInitial;                                    // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0028(0x0004) MISSED OFFSET
	unsigned char                                      nNumStacks;                                               // 0x002C(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	class AActor*                                      SourceActor;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	uint32_t                                           ReplicatedEffectFlags;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	uint16_t                                           SkinId;                                                   // 0x003C(0x0002) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData04[0x12];                                      // 0x003E(0x0012) MISSED OFFSET
	class UPGame_EffectAttachment*                     pAttachment;                                              // 0x0050(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct PlatformGameFramework.PGame_PersistentEffectRepDataContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FPGame_PersistentEffectRepDataContainer : public FFastArraySerializer
{
	TArray<struct FPGame_PersistentEffectRepData>      Items;                                                    // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_EffectManagerPropertyContainer
// 0x00A8 (0x0158 - 0x00B0)
struct FPGame_EffectManagerPropertyContainer : public FFastArraySerializer
{
	TMap<uint16_t, struct FPGame_Property>             Properties;                                               // 0x00B0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0100(0x0058) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_InstantEffectRepData
// 0x0040
struct FPGame_InstantEffectRepData
{
	class UPGame_EffectGroup*                          EffectGroupBlueprint;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	class UClass*                                      AttachmentBlueprint;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	uint16_t                                           EffectGroupId;                                            // 0x0010(0x0002) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	class AActor*                                      SourceActor;                                              // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x002C(0x000C) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	uint32_t                                           ReplicatedEffectFlags;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	uint16_t                                           SkinId;                                                   // 0x003C(0x0002) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_InactivePlayerStateEntry
// 0x0010
struct FPGame_InactivePlayerStateEntry
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class APlayerState*                                PlayerState;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.PGame_PerformanceCaptureProfile
// 0x001C
struct FPGame_PerformanceCaptureProfile
{
	struct FName                                       ProfileName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ScalabilityBucket;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ResolutionX;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ResolutionY;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VsyncInterval;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bFullScreen;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.SerializedMctsNetId
// 0x0008
struct FSerializedMctsNetId
{
	uint64_t                                           A;                                                        // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.PrimitivePriority
// 0x0020
struct FPrimitivePriority
{
	class UPrimitiveComponent*                         Primitive;                                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Priority;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_EffectManagerCurrentProperty
// 0x0008
struct FPGame_EffectManagerCurrentProperty
{
	struct FPlatformPropertyId                         propId;                                                   // 0x0000(0x0002) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              propValue;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.PGame_PlayerProfile
// 0x0018
struct FPGame_PlayerProfile
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (ZeroConstructor)
	uint16_t                                           AccessFlags;                                              // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpectator;                                               // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0013(0x0005) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PlatformValidValueId
// 0x0002
struct FPlatformValidValueId
{
	uint16_t                                           ID;                                                       // 0x0000(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct PlatformGameFramework.CollisionDebugInfo
// 0x0040
struct FCollisionDebugInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct PlatformGameFramework.PGame_ReplicatedTimer
// 0x0038
struct FPGame_ReplicatedTimer
{
	EPGame_ReplicateTimerState                         TimerState;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              InitialTime;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	float                                              TimeRemaining;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x000C(0x002C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
