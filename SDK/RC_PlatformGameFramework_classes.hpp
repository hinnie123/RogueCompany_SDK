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

// Class PlatformGameFramework.DistributionVectorUniformParameter
// 0x0028 (0x0060 - 0x0038)
class UDistributionVectorUniformParameter : public UDistributionVector
{
public:
	struct FName                                       MaxParamName;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       MinParamName;                                             // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultMaxValue;                                          // 0x0048(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultMinValue;                                          // 0x0054(0x000C) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.DistributionVectorUniformParameter");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_BlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPGame_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_BlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_ShowSkinnedMeshMaterialSection(class USkinnedMeshComponent** SkinnedMeshComponent, int* MaterialID, bool* bShow, int* LODIndex);
	void STATIC_SetLightingChannels(class UPrimitiveComponent** PrimitiveComponent, struct FLightingChannels* NewLightingChannels);
	bool STATIC_IsSteamClient();
	bool STATIC_IsPlatformType(bool* IsConsole, bool* IsPC, bool* IsMobile);
	bool STATIC_IsPlatform(bool* IsXboxOne, bool* IsPS4, bool* IsSwitch, bool* IsWindows, bool* IsMac, bool* IsLinux, bool* IsIOS, bool* IsAndroid);
	bool STATIC_IsGameBit(EGameBits* GameBit);
	bool STATIC_IsAnonymousLogin();
	float STATIC_GetPropertyClampedValue(struct FPGame_Property* prop);
	EGameLocalizationType STATIC_GetGameLocalizationType();
	void STATIC_FrameDelay(class UObject** WorldContextObject, int* NumFramesToDelay, struct FLatentActionInfo* LatentInfo);
	struct FLightingChannels STATIC_ConvertToEngineLightingChannels(struct FPGame_BlueprintableLightingChannels* BlueprintableLightingChannels);
	struct FPGame_BlueprintableLightingChannels STATIC_ConvertToBlueprintableLightingChannels(struct FLightingChannels* EngineLightChannels);
	bool STATIC_AreMeshComponentTexturesFullyStreamedIn(class UMeshComponent** InMeshComponent);
	bool STATIC_AreActorTexturesFullyStreamedIn(class AActor** InActor);
};


// Class PlatformGameFramework.PGame_Character
// 0x0040 (0x0790 - 0x0750)
class APGame_Character : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0750(0x0008) MISSED OFFSET
	class UPGame_EffectManagerComponent*               m_EffectManager;                                          // 0x0758(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FTweenInfo                                  r_TweenInfo;                                              // 0x0760(0x0014) (Net)
	struct FChargeInfo                                 r_ChargeInfo;                                             // 0x0774(0x001C) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_Character");
		return ptr;
	}


	void OnRep_Tween();
	void OnRep_Charge();
};


// Class PlatformGameFramework.PGame_CharacterMovementComponent
// 0x0060 (0x07A0 - 0x0740)
class UPGame_CharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0740(0x0020) MISSED OFFSET
	bool                                               bUseTweenWalkingPhysics;                                  // 0x0760(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0761(0x0007) MISSED OFFSET
	struct FChargeInfo                                 r_ChargeInfo;                                             // 0x0768(0x001C) (Edit, DisableEditOnTemplate, Transient, EditConst)
	struct FTweenInfo                                  r_TweenInfo;                                              // 0x0784(0x0014) (Edit, DisableEditOnTemplate, Transient, EditConst)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0798(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_CharacterMovementComponent");
		return ptr;
	}


	void StopTween();
	void StopCharge();
	void StartTween(unsigned char* TweenType, struct FVector* TweenDestination, float* TweenTime);
	void StartCharge(unsigned char* ChargeType, float* ChargeInitialYaw, struct FVector* ChargeInitialLocation, float* ChargeSpeed, float* ChargeRange);
	void OnRep_Tween(struct FTweenInfo* TweenInfo);
	void OnRep_Charge(struct FChargeInfo* ChargeInfo);
};


// Class PlatformGameFramework.PGame_CheatComponent
// 0x0000 (0x00F8 - 0x00F8)
class UPGame_CheatComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_CheatComponent");
		return ptr;
	}


	void ServerExecCall(struct FString* request);
	void ServerExec(struct FString* request);
	void gmmf();
	void gmJoinQueue(int* QueueId);
	void gmCommand(struct FString* request);
	void gmC(struct FString* request);
};


// Class PlatformGameFramework.PGame_CombatLogVisualizer
// 0x0010 (0x0340 - 0x0330)
class APGame_CombatLogVisualizer : public AActor
{
public:
	struct FString                                     LogFileName;                                              // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_CombatLogVisualizer");
		return ptr;
	}


	void Visualize();
	void LoadCombatLog();
	void ClearVisualization();
};


// Class PlatformGameFramework.PGame_EffectManagerComponent
// 0x0260 (0x0358 - 0x00F8)
class UPGame_EffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00F8(0x0028) MISSED OFFSET
	struct FPGame_PersistentEffectRepDataContainer     r_ReplicatedEffectData;                                   // 0x0120(0x00C8) (Edit, Net, DisableEditOnTemplate, EditConst)
	struct FPGame_EffectManagerPropertyContainer       r_ReplicatedProperties;                                   // 0x01E8(0x0158) (Edit, Net)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0340(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_EffectManagerComponent");
		return ptr;
	}


	void OnRep_EffectData();
	void InstantEffectBroadcast(struct FPGame_InstantEffectRepData* repData);
	int GetPropertyValueIntFromBlueprint(int* PropertyId);
	float GetPropertyValueFromBlueprint(int* PropertyId);
	class UPGame_EffectGroupPersistent* GetDefaultEffectGroupForPersistentRepData(struct FPGame_PersistentEffectRepData* repData);
	class UPGame_EffectGroupInstant* GetDefaultEffectGroupForInstantRepData(struct FPGame_InstantEffectRepData* repData);
	class UPGame_EffectAttachment* CreatePersistentAttachment(struct FPGame_PersistentEffectRepData* repData);
	void CreateInstantAttachment(struct FPGame_InstantEffectRepData* repData);
};


// Class PlatformGameFramework.PGame_EffectAttachment
// 0x0000 (0x00F8 - 0x00F8)
class UPGame_EffectAttachment : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_EffectAttachment");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_EffectGroup
// 0x0058 (0x0080 - 0x0028)
class UPGame_EffectGroup : public UObject
{
public:
	struct FGameplayTagContainer                       m_EffectGroupTypes;                                       // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       m_BehaviorCategories;                                     // 0x0048(0x0020) (Edit, DisableEditOnInstance)
	TArray<class UPGame_Effect*>                       m_Effects;                                                // 0x0068(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      m_AttachmentClass;                                        // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_EffectGroup");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_EffectGroupPersistent
// 0x0020 (0x00A0 - 0x0080)
class UPGame_EffectGroupPersistent : public UPGame_EffectGroup
{
public:
	struct FGameplayTag                                m_StackingCategory;                                       // 0x0080(0x0008) (Edit, DisableEditOnInstance)
	EEffectGroupApplicationRule                        m_ApplicationRule;                                        // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0088(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      m_nMaxStackCount;                                         // 0x008C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               m_bApplyInstantOnInterval;                                // 0x008D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               m_bApplyStackOnInterval;                                  // 0x008E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x008F(0x0001) MISSED OFFSET
	float                                              m_fStartDuration;                                         // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_fDuration;                                              // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_fIntervalDuration;                                      // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              m_fApplicationStrength;                                   // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_EffectGroupPersistent");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_EffectGroupInstant
// 0x0000 (0x0080 - 0x0080)
class UPGame_EffectGroupInstant : public UPGame_EffectGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_EffectGroupInstant");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_Effect
// 0x0028 (0x0050 - 0x0028)
class UPGame_Effect : public UObject
{
public:
	struct FPGame_Property                             m_Property;                                               // 0x0028(0x0024) (Edit, DisableEditOnInstance)
	bool                                               m_bApplyOnInternal;                                       // 0x004C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_Effect");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_Effectable
// 0x0000 (0x0028 - 0x0028)
class UPGame_Effectable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_Effectable");
		return ptr;
	}


	int GetIntPropertyValue(int* propIdInt);
	float GetFloatPropertyValue(int* propIdInt);
};


// Class PlatformGameFramework.PGame_EffectSource
// 0x0000 (0x0028 - 0x0028)
class UPGame_EffectSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_EffectSource");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_GameInstance
// 0x0080 (0x01E8 - 0x0168)
class UPGame_GameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0168(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_GameInstance");
		return ptr;
	}


	void EndLoadingScreen(class UWorld** World);
	void BeginLoadingScreen(struct FString* mapName);
};


// Class PlatformGameFramework.PGame_GameMode
// 0x00A8 (0x04C0 - 0x0418)
class APGame_GameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0418(0x0080) MISSED OFFSET
	bool                                               bAutoEnableCombatLog;                                     // 0x0498(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUploadCombatLogOverride;                                 // 0x0499(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x16];                                      // 0x049A(0x0016) MISSED OFFSET
	TArray<struct FPGame_InactivePlayerStateEntry>     PGame_InactivePlayerArray;                                // 0x04B0(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_GameMode");
		return ptr;
	}


	void InactivePlayerStateDestroyed(class AActor** InActor);
	void FinalizeMatchEnded();
};


// Class PlatformGameFramework.PGame_LandingPanelJSONHandler
// 0x0138 (0x0160 - 0x0028)
class UPGame_LandingPanelJSONHandler : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnHandlerObjectReady;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnJsonDownloaded;                                         // 0x0038(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnImagesDownloaded;                                       // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0058(0x00B8) MISSED OFFSET
	TMap<struct FString, class UTexture2DDynamic*>     mapFilePathToTexture;                                     // 0x0110(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_LandingPanelJSONHandler");
		return ptr;
	}


	void RequestNewJson();
};


// Class PlatformGameFramework.PGame_PerformanceCaptureSettings
// 0x0038 (0x0060 - 0x0028)
class UPGame_PerformanceCaptureSettings : public UObject
{
public:
	float                                              FOV;                                                      // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TArray<struct FString>                             StatsToCollect;                                           // 0x0030(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             MapsToProfile;                                            // 0x0040(0x0010) (ZeroConstructor, Config)
	TArray<struct FPGame_PerformanceCaptureProfile>    Profiles;                                                 // 0x0050(0x0010) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_PerformanceCaptureSettings");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_PlayerController
// 0x0020 (0x06B0 - 0x0690)
class APGame_PlayerController : public APlayerController
{
public:
	class UClass*                                      m_CheatComponentClass;                                    // 0x0690(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPGame_CheatComponent*                       r_CheatComponent;                                         // 0x0698(0x0008) (ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSerializedMctsNetId                        r_ReplicatedNetId;                                        // 0x06A0(0x0008) (Net)
	class UClass*                                      InputComponentClass;                                      // 0x06A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_PlayerController");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_PlayerInput
// 0x0040 (0x1330 - 0x12F0)
class UPGame_PlayerInput : public UPlayerInput
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x12F0(0x0020) MISSED OFFSET
	float                                              KeyMouseSwitchDelta;                                      // 0x1310(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1314(0x0004) MISSED OFFSET
	float                                              GamepadSwitchDelta;                                       // 0x1318(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x131C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_PlayerInput");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_HierarchicalInputComponent
// 0x0060 (0x01E0 - 0x0180)
class UPGame_HierarchicalInputComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0180(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_HierarchicalInputComponent");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_PositionHistoryComponent
// 0x0030 (0x0128 - 0x00F8)
class UPGame_PositionHistoryComponent : public UActorComponent
{
public:
	bool                                               bAutoPopulateOnBeginPlay;                                 // 0x00F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x00F9(0x0017) MISSED OFFSET
	TArray<struct FPrimitivePriority>                  TrackedPrimitives;                                        // 0x0110(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_PositionHistoryComponent");
		return ptr;
	}


	void RemoveTrackedPrimitive(class UPrimitiveComponent** InPrimitive);
	void AddTrackedPrimitive(class UPrimitiveComponent** InPrimitive, int* Priority);
};


// Class PlatformGameFramework.PGame_ShippingConsole
// 0x0000 (0x0138 - 0x0138)
class UPGame_ShippingConsole : public UShippingConsole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_ShippingConsole");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_WorldSettings
// 0x0010 (0x0498 - 0x0488)
class APGame_WorldSettings : public AWorldSettings
{
public:
	TArray<class UClass*>                              ActorsToAlwaysSpawn;                                      // 0x0488(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_WorldSettings");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTComposite_ParallelSequence
// 0x0000 (0x0090 - 0x0090)
class UPGameBTComposite_ParallelSequence : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGameBTComposite_ParallelSequence");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTComposite_Random
// 0x0010 (0x00A0 - 0x0090)
class UPGameBTComposite_Random : public UBTCompositeNode
{
public:
	TArray<float>                                      Probabilities;                                            // 0x0090(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGameBTComposite_Random");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTComposite_Random_Selector
// 0x0000 (0x00A0 - 0x00A0)
class UPGameBTComposite_Random_Selector : public UPGameBTComposite_Random
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGameBTComposite_Random_Selector");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTComposite_Random_Sequence
// 0x0000 (0x00A0 - 0x00A0)
class UPGameBTComposite_Random_Sequence : public UPGameBTComposite_Random
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGameBTComposite_Random_Sequence");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTTask_AlwaysReturn
// 0x0008 (0x0078 - 0x0070)
class UPGameBTTask_AlwaysReturn : public UBTTaskNode
{
public:
	TEnumAsByte<EBTNodeResult>                         AlwaysReturn;                                             // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGameBTTask_AlwaysReturn");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTTask_ClearBlackboardKey
// 0x0000 (0x0098 - 0x0098)
class UPGameBTTask_ClearBlackboardKey : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGameBTTask_ClearBlackboardKey");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
