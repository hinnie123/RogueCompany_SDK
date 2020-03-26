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

// Class KillstreakUINew.KSWidget
// 0x0040 (0x04C8 - 0x0488)
class UKSWidget : public UPUMG_Widget
{
public:
	bool                                               bIsUIOnlyWidget;                                          // 0x0488(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsExclusiveMenuWidget;                                   // 0x0489(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x048A(0x0006) MISSED OFFSET
	class UTickAnimationManager*                       TickAnimations;                                           // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ViewportEvent;                                            // 0x0498(0x0010) (ZeroConstructor, InstancedReference)
	bool                                               bSubstituteKillCamWorld;                                  // 0x04A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSubstituteKillCamOwningPlayer;                           // 0x04A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWantsKillCamCallbacks;                                   // 0x04AA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1D];                                      // 0x04AB(0x001D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWidget");
		return ptr;
	}


	void UnbindFromViewportSizeChange();
	void StopTickAnimation(struct FName* AnimName);
	void SkipToEndTickAnimation(struct FName* AnimName);
	void SetAllAnimationsPlaybackSpeed(float* PlaybackSpeed);
	void ResumeTickAnimation(struct FName* AnimName);
	void RemoveTickAnimation(struct FName* AnimName);
	void PlayTickAnimation(struct FName* AnimName);
	void PauseTickAnimation(struct FName* AnimName);
	bool IsInKillCamPlayback();
	void InitializeTickAnimations();
	bool GetTickAnimationInfo(struct FName* AnimName, struct FTickAnimationParams* OutAnimParams);
	class APlayerController* GetNormalOwningPlayer();
	class APlayerController* GetKillCamSpectatorController();
	class APlayerController* GetActivePlayerController();
	void BlueprintPrepareKillCamPlayback();
	void BlueprintFinishKillCamPlayback();
	void BindToViewportSizeChange(struct FScriptDelegate* InViewportEvent);
	void AddTickAnimation(struct FName* AnimName, float* Duration, struct FScriptDelegate* UpdateEvent, struct FScriptDelegate* FinishedEvent);
};


// Class KillstreakUINew.KSAccoladeQueueWidget
// 0x0048 (0x0510 - 0x04C8)
class UKSAccoladeQueueWidget : public UKSWidget
{
public:
	bool                                               IsBusy;                                                   // 0x04C8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	int                                                NumInQueue;                                               // 0x04CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAccoladeReceived;                                       // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAccoladeUpdateMultiplier;                               // 0x04E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x20];                                      // 0x04F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAccoladeQueueWidget");
		return ptr;
	}


	void Queue(TArray<struct FAccoladeEventEntry>* Accolades);
	void OnAccoladeRemovedFromScreen(struct FAccoladeDisplayInfo* AccoladeRemoved);
	bool GetNext(struct FAccoladeDisplayInfo* Accolade);
	void ClearAccoladeQueue();
};


// Class KillstreakUINew.KSAcquisitionModal
// 0x0000 (0x04C8 - 0x04C8)
class UKSAcquisitionModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAcquisitionModal");
		return ptr;
	}


	void SetupBindings();
	void HandleShowAcquisitionModal(class UPUMG_StoreItem** pItem);
	class UPUMG_AcquisitionManager* GetAcquisitionManager();
};


// Class KillstreakUINew.KSPawnWidget
// 0x0020 (0x04E8 - 0x04C8)
class UKSPawnWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPawnWidget");
		return ptr;
	}


	void SetPlayerStateUIRelevanceChanged();
	void SetPawn(class AKSCharacter** NewPawn);
	void PreClearPlayerState();
	void PreClearPawn();
	void PostSetPlayerState();
	void PostSetPawn();
	void OnBoundPlayerStateDestroyed(class AActor** DestroyedActor);
	void OnBoundPawnDestroyed(class AActor** DestroyedActor);
	class AKSPlayerState* GetPlayerState();
	class AKSCharacterBase* GetPawnBase();
	class AKSCharacter* GetPawn();
};


// Class KillstreakUINew.KSPawnInventoryWidget
// 0x0070 (0x0558 - 0x04E8)
class UKSPawnInventoryWidget : public UKSPawnWidget
{
public:
	TMap<uint16_t, class UKSWeaponComponentWidget*>    EquipmentWidgets;                                         // 0x04E8(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0538(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPawnInventoryWidget");
		return ptr;
	}


	bool RemoveWidgetFor(class UKSWeaponComponent** InWeaponComponent);
	class UKSWeaponComponentWidget* GetWidgetForWeaponComponent(class UKSWeaponComponent** InWeaponComponent);
	void EquipmentRemoved(class UKSWeaponComponent** RemovedEquipment);
	void EquipmentEndActive(class UKSWeaponComponent** InactiveEquipment);
	void EquipmentBecomeActive(class UKSWeaponComponent** ActiveEquipment);
	void EquipmentAdded(class UKSWeaponComponent** AddedEquipment);
	class UKSWeaponComponentWidget* CreateWeaponComponentWidgetFor(class UObject** WorldContextObject, class UKSWeaponComponent** InWeaponComponent, class UClass** WidgetClass, class APlayerController** OwningPlayer);
};


// Class KillstreakUINew.KSActiveWeaponComponentWidget
// 0x0038 (0x0590 - 0x0558)
class UKSActiveWeaponComponentWidget : public UKSPawnInventoryWidget
{
public:
	int                                                ActiveWeaponSlot;                                         // 0x0558(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       EquipPointsToIgnore;                                      // 0x0560(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bDelayClearUntilNextTick;                                 // 0x0580(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0581(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UKSWeaponComponent>           WeakActiveWeaponComponentPtr;                             // 0x0584(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x058C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSActiveWeaponComponentWidget");
		return ptr;
	}


	void PreClearActiveWeaponComponent();
	void PostSetActiveWeaponComponent();
	class UKSWeaponComponent* GetActiveWeaponComponent();
};


// Class KillstreakUINew.KSAimAssistDebugWidget
// 0x0008 (0x04D0 - 0x04C8)
class UKSAimAssistDebugWidget : public UKSWidget
{
public:
	bool                                               bDrawAimAssistBoundary;                                   // 0x04C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawHeadAimCorrectionBoundary;                           // 0x04C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawMagnetismDebug;                                      // 0x04CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawTargetInfo;                                          // 0x04CB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAimAssistDebugWidget");
		return ptr;
	}


	class AKSPlayerController* GetOwningKSPlayer();
	class UKSAimAssistComponent* GetAimAssistComponent();
};


// Class KillstreakUINew.KSMapIconWidgetBase
// 0x0060 (0x0290 - 0x0230)
class UKSMapIconWidgetBase : public UUserWidget
{
public:
	bool                                               bDoesIconRotate;                                          // 0x0230(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0231(0x0003) MISSED OFFSET
	float                                              MarkerAnchorHeight;                                       // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightThreshold;                                          // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	int                                                UniqueId;                                                 // 0x0240(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       AssociatedActor;                                          // 0x0244(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      AssociatedObject;                                         // 0x024C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultLocation;                                          // 0x0254(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0260(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenMargins;                                            // 0x0264(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UKSMapWidgetBase>             ParentMapWidget;                                          // 0x026C(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	float                                              HoverDelaySeconds;                                        // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x027C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMapIconWidgetBase");
		return ptr;
	}


	void UpdateScreenRegion();
	void UpdateMetersAway(int* Meters);
	void UpdateMeetsHeightThreshold(bool* bHeight, bool* bDepth);
	ESlateVisibility Update();
	bool ShouldUpdateHover();
	bool ShouldUpdate();
	void SetScreenRegion(EIconMarkerScreenRegion* ScreenRegion);
	void SetLifeSpan(float* InLifespan);
	void SetArrowAngle(float* Angle);
	void OnUnhoverTimerComplete();
	void OnHoverTimerComplete();
	void OnHoverStateChanged(EIconHoverState* NewHoverState);
	void OnAssociatedActorDestroyed(class AActor** Actor);
	bool IsHovering();
	float GetWorldYaw();
	struct FVector GetWorldPosition();
	EIconHoverState GetHoverState();
	float GetDistanceToIcon();
};


// Class KillstreakUINew.KSAllyMarkerWidget
// 0x0038 (0x02C8 - 0x0290)
class UKSAllyMarkerWidget : public UKSMapIconWidgetBase
{
public:
	class UWidget*                                     ArrowWidget;                                              // 0x0290(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidget*                                     NameOrStatusWidget;                                       // 0x0298(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidget*                                     DownedSectionWidget;                                      // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAllyMarkerWidget");
		return ptr;
	}


	void View_SetRevivePercent(float* PercentValue);
	void View_SetNameText(struct FText* NameText);
	void View_SetMode(EAllyMarkerState* AllyMarkerState, bool* HasBomb);
	void View_SetJob(class UKSJobItem** Job);
	void View_SetHealthPercent(float* PercentValue);
	void HandlePlayerDown(struct FCombatEventInfo* CombatEventInfo, int* ExpBonus);
	void HandlePlayerDeath(struct FCombatEventInfo* DeathInfo);
	void HandleOnJobChanged();
	void HandleBombStateChanged(struct FKSNeutralBombState* BombState);
	struct FVector2D GetArrowPositionFromAngleBlueprint(float* Angle);
};


// Class KillstreakUINew.KSAlphaDisclaimer
// 0x0000 (0x04C8 - 0x04C8)
class UKSAlphaDisclaimer : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAlphaDisclaimer");
		return ptr;
	}


	bool STATIC_LoadAlphaDisclaimerText(struct FString* SaveText);
};


// Class KillstreakUINew.KSWeaponWidget
// 0x0008 (0x04D0 - 0x04C8)
class UKSWeaponWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWeaponWidget");
		return ptr;
	}


	void SetOwningWeapon(class AKSWeapon** InWeapon);
	void PreClearWeapon();
	void PostSetWeapon();
	void OtherWeaponUpdate();
	void OnOwningWeaponDestroyed(class AActor** DestroyedWeapon);
	class AKSWeapon* GetOwningWeapon();
};


// Class KillstreakUINew.KSAmmoWidget
// 0x0020 (0x04F0 - 0x04D0)
class UKSAmmoWidget : public UKSWeaponWidget
{
public:
	int                                                CachedAmmoInClip;                                         // 0x04D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CachedClipSize;                                           // 0x04D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CachedInReserve;                                          // 0x04D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CachedIsReloading;                                        // 0x04DC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x04DD(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAmmoWidget");
		return ptr;
	}


	void StopReloading();
	void StartReloading();
	void OnAmmoChanged(int* OldInClip, int* OldClipSize, int* OldReserve, int* NewInClip, int* NewClipSize, int* NewReserve);
};


// Class KillstreakUINew.KSAnnouncementQueuedMessageWidget
// 0x0048 (0x0510 - 0x04C8)
class UKSAnnouncementQueuedMessageWidget : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnEndDisplay;                                             // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FAnnouncementData                           _AnnouncementData;                                        // 0x04D8(0x0038) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAnnouncementQueuedMessageWidget");
		return ptr;
	}


	void DisplayAnnouncement();
};


// Class KillstreakUINew.KSAnnouncementQueueWidget
// 0x0028 (0x04F0 - 0x04C8)
class UKSAnnouncementQueueWidget : public UKSWidget
{
public:
	bool                                               IsBusy;                                                   // 0x04C8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReadyForNextAnnouncement;                               // 0x04D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAnnouncementQueueWidget");
		return ptr;
	}


	void Queue(struct FAnnouncementData* Announcement);
	bool GetNext(struct FAnnouncementData* Announcement);
	void ClearAnnoucementQueue();
};


// Class KillstreakUINew.KSAsyncImage
// 0x0038 (0x0290 - 0x0258)
class UKSAsyncImage : public UPUMG_AsyncImage
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0258(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KillstreakUINew.KSAsyncImage.PendingIconTexture
	class UKSItem*                                     PendingItem;                                              // 0x0280(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0288(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAsyncImage");
		return ptr;
	}


	void SetBrushFromTextureOnItem(class UKSItem** Item, bool* bMatchSize);
	void SetBrushFromItemIcon(class UKSItem** Item, bool* bMatchSize);
	void OnItemIconLoaded(class UTexture2D** ItemIcon);
};


// Class KillstreakUINew.KSChatDataFactory
// 0x0000 (0x0118 - 0x0118)
class UKSChatDataFactory : public UPUMG_ChatDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSChatDataFactory");
		return ptr;
	}

};


// Class KillstreakUINew.KSComponentReticleWidgetBase
// 0x0020 (0x05B0 - 0x0590)
class UKSComponentReticleWidgetBase : public UKSActiveWeaponComponentWidget
{
public:
	float                                              ShrinkAnimationTime;                                      // 0x0590(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedShotIconMaxScale;                                  // 0x0594(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedShotIconMinScale;                                  // 0x0598(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedShotMinScaleSqDist;                                // 0x059C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGrenadeCooking;                                          // 0x05A0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInADS;                                                   // 0x05A1(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCachedBlockIconVisible;                                  // 0x05A2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x05A3(0x0001) MISSED OFFSET
	float                                              CachedWeaponAccuracy;                                     // 0x05A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedReticleOffset;                                      // 0x05A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSComponentReticleWidgetBase");
		return ptr;
	}


	void ViewedPawnInstigatedDamageNotify(struct FCombatEventInfo* DamageInfo);
	void UpdateReticleOffset(float* OffsetFromCenterScreen);
	void UpdateBlockedShotIcon(bool* IconVisible, struct FVector2D* Translation, struct FVector2D* IconScale);
	void CalculateReticleOffset(float* DeltaTime);
	void CalculateBlockedShotIcon();
};


// Class KillstreakUINew.ContextActionData
// 0x0058 (0x0080 - 0x0028)
class UContextActionData : public UObject
{
public:
	struct FName                                       RowName;                                                  // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FContextAction                              RowData;                                                  // 0x0030(0x0040) (BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             OnContextAction;                                          // 0x0070(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.ContextActionData");
		return ptr;
	}


	void TriggerContextAction();
};


// Class KillstreakUINew.KSContextBarWidget
// 0x0068 (0x0530 - 0x04C8)
class UKSContextBarWidget : public UKSWidget
{
public:
	class UDataTable*                                  ContextActionDT;                                          // 0x04C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FRouteContextInfo>       RouteContextInfoMap;                                      // 0x04D0(0x0050) (ZeroConstructor)
	struct FName                                       ActiveRoute;                                              // 0x0520(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideRoute;                                            // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSContextBarWidget");
		return ptr;
	}


	void UpdateContextActions(TArray<class UContextActionData*>* ContextActions);
	void SetPrompts(struct FName* Route, TArray<struct FName>* ContextNames);
	void SetPromptAction(struct FName* Route, struct FName* ContextName, struct FScriptDelegate* EventCallback);
	void SetPrompt(struct FName* Route, struct FName* ContextName);
	void SetOverrideRoute(struct FName* Route);
	void SetActiveRoute(struct FName* Route);
	void RefreshContextBar();
	struct FName GetCurrentContextRoute();
	void ClearPromptByKey(struct FName* Route, struct FKey* Key);
	void ClearPrompt(struct FName* Route, struct FName* ContextName);
	void ClearOverrideRoute();
	void ClearAllPrompts(struct FName* Route);
};


// Class KillstreakUINew.KSContextualPingMarkerWidget
// 0x0050 (0x02E0 - 0x0290)
class UKSContextualPingMarkerWidget : public UKSMapIconWidgetBase
{
public:
	struct FScriptMulticastDelegate                    OnPingRemovedCalled;                                      // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FPingInfo                                   CurrentPingInfo;                                          // 0x02A0(0x0030) (BlueprintVisible)
	class UKSPingManager*                              _PingManager;                                             // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDataTable*                                  ContextualPingDT;                                         // 0x02D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSContextualPingMarkerWidget");
		return ptr;
	}


	void SetupPingOnReady();
	void SetPingInfo(struct FPingInfo* PingInfoVal);
	void OnPingUnhovered();
	void OnPingHovered(int* PingId);
	void OnInitializePing();
	void HandleOnContextualPingRemoved(int* PingId, class AKSPlayerState** PingingPlayer);
	float GetPingLifeSpan(EPingType* PingType);
	bool GetPingIconByType(EPingType* PingType);
	bool GetPingColorByType(EPingType* PingType, struct FLinearColor* PingColor);
	bool FindRowByType(EPingType* PingType, struct FContextualPing* ContextualPingRow);
};


// Class KillstreakUINew.KSCustomizationSelection
// 0x0000 (0x04C8 - 0x04C8)
class UKSCustomizationSelection : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSCustomizationSelection");
		return ptr;
	}


	TArray<class UPUMG_StoreItem*> GetItemsForSlot(EMercCosmeticSlot* slotType, class UKSJobItem** JobItem);
	class UKSStoreItemHelper* GetItemHelper();
};


// Class KillstreakUINew.KSDebugMenu
// 0x0010 (0x04D8 - 0x04C8)
class UKSDebugMenu : public UKSWidget
{
public:
	TArray<struct FDebugMenuCommandInfo>               DebugCommands;                                            // 0x04C8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSDebugMenu");
		return ptr;
	}


	bool GetSubmenu(struct FDebugMenuCommandInfo* BaseCommand, TArray<struct FDebugMenuCommandInfo>* Submenu);
	void GetSortedBaseDebugCommands(TArray<struct FDebugMenuCommandInfo>* SortedCommands);
	EConsoleCommandParamType GetParamTypeForSubCommand(struct FString* BaseCommandString);
};


// Class KillstreakUINew.KSEditableTextBox
// 0x0010 (0x0A38 - 0x0A28)
class UKSEditableTextBox : public UEditableTextBox
{
public:
	struct FScriptDelegate                             OnKeyDown;                                                // 0x0A28(0x0010) (Edit, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSEditableTextBox");
		return ptr;
	}

};


// Class KillstreakUINew.KSQueuedMessageWidget
// 0x0018 (0x04E0 - 0x04C8)
class UKSQueuedMessageWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04C8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQueuedMessageWidget");
		return ptr;
	}


	void QueueMessage(struct FText* Message);
	bool GetNextMessage(struct FText* Message);
};


// Class KillstreakUINew.KSEliminationMessageWidget
// 0x0030 (0x0510 - 0x04E0)
class UKSEliminationMessageWidget : public UKSQueuedMessageWidget
{
public:
	struct FScriptMulticastDelegate                    OnReceivedMessage;                                        // 0x04E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class APawn*                                       KillCamPawn;                                              // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x04F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSEliminationMessageWidget");
		return ptr;
	}


	void QueueCombatMessage(struct FEliminationMessage* CombatMessage);
	void OnPlayerDownReceived(struct FCombatEventInfo* EventInfo);
	void OnPlayerDeathReceived(struct FCombatEventInfo* EventInfo);
	void OnPlayerAssistReceived(struct FAssistInfo* EventInfo);
	bool IsViewedPlayerStateSelf(class APlayerState** ViewedPlayerState);
	bool IsViewedKillCamPlayerState(class APlayerState** KillCamPlayerState);
	bool GetNextCombatMessage(struct FEliminationMessage* CombatMessage);
	void ClearCombatMessages();
};


// Class KillstreakUINew.KSEMODataFactory
// 0x00F0 (0x0128 - 0x0038)
class UKSEMODataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	bool                                               haveRecieveMatchReport;                                   // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA7];                                      // 0x0041(0x00A7) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRewardsRecieved;                                        // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerLeveledUp;                                        // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerProgressionRecieved;                              // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSEMODataFactory");
		return ptr;
	}


	void LevelUp(struct FActivityTier* NewTier);
	bool IsLocalPlayer(int64_t* PlayerId);
	void HandlePlayerRewards(struct FPlayerRewardsSummary* PlayerRewardSummary);
	void HandleEOMDetail();
	struct FScoreboardStats GetScoreboardStats();
	struct FActivityTier GetPreviousTier(struct FActivityTier* CurrentTier);
	struct FPlayerRewardsSummary GetPlayerRewardsSummary();
	struct FActivityTier GetPlayerLastTier(int* PreviousXp);
	struct FActivityTier GetNextTier(struct FActivityTier* NextTier);
	bool FindPlayerProgressionActivity(class UKSActivityInstance** PlayerProgressionActivity);
	void ComputeEOMResults();
	void CalcPlayerProgression(int* XpEarned);
};


// Class KillstreakUINew.KSViewedPawnWidget
// 0x0010 (0x04F8 - 0x04E8)
class UKSViewedPawnWidget : public UKSPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedPawnWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSExpDisplayWidget
// 0x0018 (0x0510 - 0x04F8)
class UKSExpDisplayWidget : public UKSViewedPawnWidget
{
public:
	bool                                               bIsWaitingForNextQueue;                                   // 0x04F8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x04F9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSExpDisplayWidget");
		return ptr;
	}


	void QueueExpDisplays(struct FExpDisplayInfo* ExpInfo);
	void NativeHandleDisplayExpInfo();
	bool GetNextExpDisplay(struct FExpDisplayInfo* ExpInfo);
	void DisplayExpInfo();
};


// Class KillstreakUINew.KSFloatTickLerpWidgetBase
// 0x0018 (0x0248 - 0x0230)
class UKSFloatTickLerpWidgetBase : public UUserWidget
{
public:
	float                                              LerpTime;                                                 // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LerpPower;                                                // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0238(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSFloatTickLerpWidgetBase");
		return ptr;
	}


	void SetTargetValue(float* Value);
	void SetLerpTime(float* Time);
	void SetLerpPower(float* Power);
	bool IsLerping();
	float GetCurrentValue();
	void ForceCurrentValue(float* Value);
	void DisplayForValue(float* Value);
};


// Class KillstreakUINew.KSFriendDataFactory
// 0x0000 (0x00F0 - 0x00F0)
class UKSFriendDataFactory : public UPUMG_FriendDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSFriendDataFactory");
		return ptr;
	}


	void UIX_ShowExternalProfile(int64_t* PlayerId);
	TArray<class UPUMG_PlayerInfo*> GetSuggestedFriends_Info();
	TArray<class UPUMG_PlayerInfo*> GetPendingFriends_Info();
	TArray<class UPUMG_PlayerInfo*> GetOnlineFriends_Info();
	TArray<class UPUMG_PlayerInfo*> GetFriends_Info();
	TArray<class UPUMG_PlayerInfo*> GetFriendRequests_Info();
};


// Class KillstreakUINew.KSMapWidgetBase
// 0x00B8 (0x0580 - 0x04C8)
class UKSMapWidgetBase : public UKSWidget
{
public:
	EDisplayType                                       MapDisplayType;                                           // 0x04C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x04C9(0x0017) MISSED OFFSET
	TMap<class AKSPlayerState*, class UKSMapIconWidgetBase*> PlayerIconMap;                                            // 0x04E0(0x0050) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0530(0x0040) MISSED OFFSET
	bool                                               AbsoluteRotation;                                         // 0x0570(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanBeScrambled;                                           // 0x0571(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsScrambled;                                              // 0x0572(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAffectedByScramble;                                      // 0x0573(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0574(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMapWidgetBase");
		return ptr;
	}


	void UpdateIcon(class UKSMapIconWidgetBase** Icon);
	struct FVector2D ToIconRenderCoords(struct FVector2D* MapCoords);
	float ToIconRenderAngle(float* PlayerAngle);
	void TickCachedTransform();
	void SetScrambleState(bool* Scrambled);
	void OnScrambleStateChanged(bool* Scrambled);
	void OnReceiveDisplayWidgetInfo(struct FDisplayInfo* DisplayInfo);
	void OnGameStateSet(class AGameStateBase** GameStateBase);
	bool IsOnMap(struct FVector2D* MapCoords);
	float GetDistanceToIcon(class UKSMapIconWidgetBase** Icon);
	class APawn* GetCachedViewedPawn();
	struct FTransform GetCachedTransform();
	class UKSMapIconWidgetBase* CreateNewIconWidget(class UClass** WidgetClass, int* UniqueId, class AActor** AssociatedActor, class UObject** AssociatedObject, struct FVector* DefaultLocation, float* LifeSpan);
};


// Class KillstreakUINew.KSFullMapWidget
// 0x0010 (0x0590 - 0x0580)
class UKSFullMapWidget : public UKSMapWidgetBase
{
public:
	float                                              MinimapWidth;                                             // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0584(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSFullMapWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSHUDCommon
// 0x0068 (0x0588 - 0x0520)
class AKSHUDCommon : public APUMG_HUD
{
public:
	struct FScriptMulticastDelegate                    OnPreferredSiteUpdated;                                   // 0x0520(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UPUMG_LoginDataFactory*                      _LoginDataFactory;                                        // 0x0530(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKSSettingsDataFactory*                      SettingsFactory;                                          // 0x0538(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKSChatDataFactory*                          _ChatDataFactory;                                         // 0x0540(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKSPartyDataFactory*                         _PartyDataFactory;                                        // 0x0548(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKSLoadoutDataFactory*                       _LoadoutDataFactory;                                      // 0x0550(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKSMercManager*                              _MercManager;                                             // 0x0558(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKSNPEDataFactory*                           _NPEDataFactory;                                          // 0x0560(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDisplayWatermark;                                        // 0x0568(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0569(0x0003) MISSED OFFSET
	float                                              WatermarkAlpha;                                           // 0x056C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              WatermarkOffsetLeft;                                      // 0x0570(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              WatermarkOffsetTop;                                       // 0x0574(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              WatermarkOffsetRight;                                     // 0x0578(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              WatermarkOffsetBottom;                                    // 0x057C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              WatermarkChangePositionTime;                              // 0x0580(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0584(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSHUDCommon");
		return ptr;
	}


	void ShowErrorPopup(struct FText* ErrorMsg);
	bool ShouldShowCrossplayIconForPlayer(int64_t* PlayerId);
	void SetPreferredSiteId(int* SiteId);
	void PrintToLog(struct FText* InText);
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player);
	void OpenOptionsMenu();
	void LogErrorMessage(struct FText* ErrorMsg);
	bool IsSamePortalAsLocalPlayer(int64_t* PlayerId);
	void HandleOpenTextChat(bool* BeginChatCommand);
	void HandleControllerDisconnect();
	class UKSUISessionManager* GetUISessionManager();
	void GetSiteList(TMap<int, struct FText>* OutSiteIdToNameMap);
	class UKSSettingsDataFactory* GetSettingsDataFactory();
	bool GetPreferredSiteId(int* OutSiteId);
	class UKSPartyDataFactory* GetPartyDataFactory();
	class UKSNPEDataFactory* GetNPEDataFactory();
	class UKSMercManager* GetMercManager();
	class UPUMG_LoginDataFactory* GetLoginDataFactory();
	class UKSLoadoutDataFactory* GetLoadoutDataFactory();
	class UKSStoreItemHelper* GetItemHelper();
	TArray<class UPanelWidget*> GetFocusableWidgetContainers();
	class UKSContextBarWidget* GetContextBarWidget();
	class UKSChatDataFactory* GetChatDataFactory();
	class UPUMG_AcquisitionManager* GetAcquisitionManager();
	void DisplayWatermark();
	void ApplySafeFrameScale(float* SafeFrameScale);
};


// Class KillstreakUINew.KSGameHUDNew
// 0x0010 (0x0598 - 0x0588)
class AKSGameHUDNew : public AKSHUDCommon
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0588(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSGameHUDNew");
		return ptr;
	}


	void UIX_ReturnLobby();
	bool UIX_ReportPlayer(class AKSGameState** KSGameState, class AKSPlayerState** KSPlayerState, int* LocalPlayerTeamNum, int* ReportedPlayerTeamNum, EReportPlayerReason* ReportReason, struct FString* InReportComment);
	bool UIX_MutePlayer(class AKSPlayerState** KSPlayerState, bool* Mute);
	void SetHUDVisible(bool* bVisible);
	void ReturnToHome();
	void OnToggleHUD();
	bool IsPlayerMuted(class AKSPlayerState** KSPlayerState);
	void HandleLoginStateChange(EPUMG_LoginState* LoginState);
};


// Class KillstreakUINew.KSGameInfoOverlayBase
// 0x0020 (0x04E8 - 0x04C8)
class UKSGameInfoOverlayBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSGameInfoOverlayBase");
		return ptr;
	}


	void HandlePlayerStateReady(class AKSPlayerState** PlayerState);
};


// Class KillstreakUINew.KSGamepadPromptWidget
// 0x0010 (0x04D8 - 0x04C8)
class UKSGamepadPromptWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSGamepadPromptWidget");
		return ptr;
	}


	void SetContext(struct FButtonPromptContext* PromptContext);
	void PushContext(struct FButtonPromptContext* PromptContext);
	bool PopContext(struct FButtonPromptContext* OutContext);
	void ClearAllContext();
	void ApplyContext(struct FButtonPromptContext* Context);
};


// Class KillstreakUINew.KSHealthWidget
// 0x0020 (0x0508 - 0x04E8)
class UKSHealthWidget : public UKSPawnWidget
{
public:
	float                                              CachedHealth;                                             // 0x04E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CachedMaxHealth;                                          // 0x04EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CachedOverheal;                                           // 0x04F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x04F4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSHealthWidget");
		return ptr;
	}


	void OverhealChangeFromChar(class AKSCharacterBase** Character, bool* bAnimatedChange);
	void OnOverhealChanged(float* OldOverheal, float* NewOverheal, bool* bAnimatedChange);
	void OnHealthChanged(float* OldHealth, float* OldMaxHealth, float* NewHealth, float* NewMaxHealth, bool* bAnimatedChange);
	void HealthChangeFromChar(class AKSCharacterBase** Character, bool* bAnimatedChange);
	void HandlePawnOverhealChange(class AKSCharacterBase** Character);
	void HandlePawnHealthChange(class AKSCharacterBase** Character);
};


// Class KillstreakUINew.KSInfoActorWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UKSInfoActorWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSInfoActorWidgetInterface");
		return ptr;
	}


	bool SetInfoActor(class AKSWidgetInfoActor** InfoActor);
};


// Class KillstreakUINew.KSInputManager
// 0x0000 (0x00C8 - 0x00C8)
class UKSInputManager : public UPUMG_InputManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSInputManager");
		return ptr;
	}

};


// Class KillstreakUINew.KSJobSelectionWidget
// 0x0000 (0x04C8 - 0x04C8)
class UKSJobSelectionWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSJobSelectionWidget");
		return ptr;
	}


	TArray<class UPUMG_StoreItem*> GetJobStoreItems();
	class UKSStoreItemHelper* GetItemHelper();
};


// Class KillstreakUINew.KSKevinTest
// 0x0000 (0x04C8 - 0x04C8)
class UKSKevinTest : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSKevinTest");
		return ptr;
	}


	int RequestJobItems();
	TArray<class UPUMG_StoreItem*> GetJobStoreItems();
	class UKSStoreItemHelper* GetItemHelper();
};


// Class KillstreakUINew.KSLoadoutDataFactory
// 0x0000 (0x00B0 - 0x00B0)
class UKSLoadoutDataFactory : public UPUMG_LoadoutDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLoadoutDataFactory");
		return ptr;
	}


	bool GetEquippedAccountItem(EPlayerAccountSlot* eSlot, class UKSItem** EquippedItem);
	bool EquipAccountItemToSlot(EPlayerAccountSlot* eSlot, class UKSItem** Item, bool* bSave);
};


// Class KillstreakUINew.KSLobbyHUDNew
// 0x00D0 (0x0658 - 0x0588)
class AKSLobbyHUDNew : public AKSHUDCommon
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0588(0x0018) MISSED OFFSET
	class UKSQueueDataFactory*                         _QueueDataFactory;                                        // 0x05A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSFriendDataFactory*                        _FriendDataFactory;                                       // 0x05A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSEMODataFactory*                           _EMODataFactory;                                          // 0x05B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSPlayerDataFactory*                        _PlayerDataFactory;                                       // 0x05B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSPlayerWhoDataFactory*                     _PlayerWhoDataFactory;                                    // 0x05C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05C8(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTriggerBlockerChange;                                   // 0x05D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               EnablePreMatchAnimation;                                  // 0x05E0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnablePostMatchAnimation;                                 // 0x05E1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableEOMIdleAnimation;                                   // 0x05E2(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x05E3(0x0001) MISSED OFFSET
	int                                                LastWhatsNewVersion;                                      // 0x05E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FScriptMulticastDelegate                    LobbyWidgetReady;                                         // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    MainLobbyCameraSet;                                       // 0x05F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LoginCameraSet;                                           // 0x0608(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BeginPlayingPreMatchAnim;                                 // 0x0618(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EndPlayingPreMatchAnim;                                   // 0x0628(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EndPlayingPostMatchAnim;                                  // 0x0638(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	ELobbyCharacterAnimState                           CurrentLobbyCharacterAnimState;                           // 0x0648(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPUMG_MatchStatus                                  CurrentMatchStatus;                                       // 0x0649(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x064A(0x0006) MISSED OFFSET
	float                                              LoadingScreenFadeInDelay;                                 // 0x0650(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              LoadingScreenFadeInDuration;                              // 0x0654(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLobbyHUDNew");
		return ptr;
	}


	void UpdateLobbySkinToEquippedSkin();
	bool UIX_MutePlayer(class UPUMG_PlayerInfo** PlayerData, bool* Mute);
	void TransitionCamera(struct FName* CameraTag, float* BlendTime);
	void ToggleDisablePartyLobbyCharacters(bool* Disable);
	void ShowPopupConfirmation(struct FText* Message, ESocialMessageType* MessageType);
	bool ShowAlphaDisclaimerCheckoff();
	bool ShouldShowWhatsNew();
	void SetNewLobbyAnimState(ELobbyCharacterAnimState* TargetState);
	void ResetLobbyCharacters();
	void PlayLoopingLevelSequence(struct FName* LvlSeqTag);
	void OnStoreVendorsLoaded(int* GroupId, TArray<int>* VendorIds);
	bool IsPlayerMuted(class UPUMG_PlayerInfo** PlayerData);
	void HandleSpecificPartyIdDataUpdated(int64_t* PlayerId);
	void HandleSpecificPartyDataUpdated(struct FPUMG_PartyMemberData* PartyMember);
	void HandleReturnFromBattleLevelSeqStopped();
	void HandlePlayerLoadoutsUpdated();
	void HandlePartyMemberDataUpdated(struct FPUMG_PartyMemberData* PartyMember, int* MemberIndex);
	void HandlePartyDataUpdated();
	void HandleMatchStatusUpdated(EPUMG_MatchStatus* MatchStatus);
	void HandleLoginStateChange(EPUMG_LoginState* LoginState);
	void HandleExitToGameLevelSeqStopped();
	void HandleDenyPartyInvitation();
	void HandleAcceptPartyInvitation();
	class UKSPlayerWhoDataFactory* GetPlayerWhoDataFactory();
	class UPUMG_PlayerDataFactory* GetPlayerDataFactory();
	class UKSLobbyWidget* GetLobbyWidget();
	bool GetLobbyCharacterByPosition(ELobbyCharacterIndex* CharacterIndex, class AKSLobbyCharacter** LobbyCharacter);
	class UKSQueueDataFactory* GetKSQueueDataFactory();
	class UKSJsonDataFactory* GetJsonDataFactory();
	class UKSFriendDataFactory* GetFriendDataFactory();
	class UKSEMODataFactory* GetEMODataFactory();
	void ForceEulaAccept();
	void CreateInitialPlayerLoadout();
	void CancelExitToGameLevelAnimStoppedHandling();
};


// Class KillstreakUINew.KSLobbyWidget
// 0x0000 (0x04C8 - 0x04C8)
class UKSLobbyWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLobbyWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSLootSiteIconWidget
// 0x0008 (0x0298 - 0x0290)
class UKSLootSiteIconWidget : public UKSMapIconWidgetBase
{
public:
	class AKSLootSiteBase*                             MarkedLootSite;                                           // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLootSiteIconWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSLootSiteMarkerWidget
// 0x0020 (0x02B0 - 0x0290)
class UKSLootSiteMarkerWidget : public UKSMapIconWidgetBase
{
public:
	class AKSLootSiteBase*                             MarkedLootSite;                                           // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDisplayDistance;                                       // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bViewedPawnHasEndedFreeFall;                              // 0x029C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x029D(0x0003) MISSED OFFSET
	TArray<ELootSiteRarity>                            TagsToHide;                                               // 0x02A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLootSiteMarkerWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSLowAmmoAlertWidget
// 0x0020 (0x05B0 - 0x0590)
class UKSLowAmmoAlertWidget : public UKSActiveWeaponComponentWidget
{
public:
	float                                              LowAmmoThreshold;                                         // 0x0590(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ELowAmmoState                                      CachedLowAmmoState;                                       // 0x0594(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAmmoStateChangedDel;                                    // 0x0598(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x05A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLowAmmoAlertWidget");
		return ptr;
	}


	ELowAmmoState GetAmmoState();
	ELowAmmoState CalcAmmoState();
	void AmmoStateChanged();
};


// Class KillstreakUINew.KSMarkerDisplayBase
// 0x0090 (0x0610 - 0x0580)
class UKSMarkerDisplayBase : public UKSMapWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0580(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMarkerDisplayBase");
		return ptr;
	}


	bool GetScreenPositionForMarker(struct FVector* TargetLocation, float* AnchorHeight, float* MarginX, float* MarginY, struct FVector2D* ScreenLocation);
};


// Class KillstreakUINew.KSMatchResult
// 0x0048 (0x0510 - 0x04C8)
class UKSMatchResult : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x04C8(0x000C) MISSED OFFSET
	float                                              FinalResultEndTime;                                       // 0x04D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRoundResultAnnoucement                     _RoundResultAnnoucement;                                  // 0x04D8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	int                                                pTeamNum;                                                 // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                pOpposeTeamNum;                                           // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                pTeamScore;                                               // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                pOpposeTeamScore;                                         // 0x0504(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEndOfMatch;                                            // 0x0508(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0509(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMatchResult");
		return ptr;
	}


	void UpdateRoundBaseScore(class AKSGameState_RoundGame** pGameState);
	void UpdateResultStatus(EGameResult* Result, struct FText* Status);
	void ProcessResultAnnoucement(EGameResult* Result);
	void HandleResultReceived(struct FRoundResultAnnoucement* ResultAnnoucement);
	void HandleEndOfMatch();
	void GetTeamNames(struct FText* pTeamName, struct FText* pOpposingTeamName);
};


// Class KillstreakUINew.KSMercManager
// 0x0008 (0x0030 - 0x0028)
class UKSMercManager : public UObject
{
public:
	class APUMG_HUD*                                   MyHUD;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMercManager");
		return ptr;
	}


	void Uninitialize();
	void Initialize(class APUMG_HUD** InHud);
	class UKSLoadoutDataFactory* GetLoadoutDataFactory();
	bool GetEquippedCosmeticItemBySlot(EMercCosmeticSlot* eSlot, int* SlotPosition, class UKSJobItem** JobItem, class UKSItem** CosmeticItem);
	bool EquipCosmeticItemToSlot(EMercCosmeticSlot* eSlot, int* SlotPosition, class UKSJobItem** JobItem, class UKSItem** CosmeticItem);
};


// Class KillstreakUINew.KSMinimapWidgetBase
// 0x0010 (0x0590 - 0x0580)
class UKSMinimapWidgetBase : public UKSMapWidgetBase
{
public:
	EMinimapWidgetClampStyle                           _ClampStyle;                                              // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0581(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMinimapWidgetBase");
		return ptr;
	}


	void UpdateMapMaterialTransform(class UMaterialInstanceDynamic** MapMaterial, float* NormalizedX, float* NormalizedY, float* Rotation, float* Scale);
};


// Class KillstreakUINew.KSModelViewer
// 0x0000 (0x0028 - 0x0028)
class UKSModelViewer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSModelViewer");
		return ptr;
	}


	void STATIC_ViewModelByName(class UObject** WorldContextObject, struct FName* InTargetItem, class UDataTable** InDataTable);
	void STATIC_ViewModelAttachment(class UObject** WorldContextObject, class UKSWeaponAttachment** InAttachment, struct FName* InSpawnOnActorName, unsigned char* Slot);
	void STATIC_ViewModel(class UObject** WorldContextObject, class UKSItem** InItem, struct FName* InSpawnOnActorName, EWeaponStateNew* DefaultWeaponState, bool* InScaleToFitTargetActor, struct FRotator* InDefaultRotation, bool* InBindControllerToSpawner);
	void STATIC_UnbindControllerFromSpawner(class UObject** WorldContextObject, struct FName* InSpawnActorName);
	void STATIC_UnbindAllControllersFromSpawners(class UObject** WorldContextObject);
	void STATIC_HideModelAttachment(class UObject** WorldContextObject, struct FName* InSpawnOnActorName, unsigned char* Slot);
	void STATIC_ClearModelAttachments(class UObject** WorldContextObject, struct FName* InSpawnOnActorName);
	void STATIC_ClearModel(class UObject** WorldContextObject, struct FName* InSpawnOnActorName);
	bool STATIC_BindDelForWeaponModelSet(class UObject** WorldContextObject, struct FName* InSpawnOnActorName, struct FScriptDelegate* InEventCallback);
	void STATIC_BindControllerToSpawner(class UObject** WorldContextObject, struct FName* InSpawnActorName);
};


// Class KillstreakUINew.KSModWidget_DetectEnemy
// 0x0018 (0x04E0 - 0x04C8)
class UKSModWidget_DetectEnemy : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04C8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSModWidget_DetectEnemy");
		return ptr;
	}


	void OnDetectChanged(class UKSModInst_DetectEnemy** DetectEnemyModInst, bool* bIsDetectingEnemy);
	class UHorizontalBox* GetIconBox();
};


// Class KillstreakUINew.KSModWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UKSModWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSModWidgetInterface");
		return ptr;
	}


	bool RemoveModInstance(class UKSPlayerModInstance** InInstance);
	bool AddModInstance(class UKSPlayerModInstance** InInstance);
};


// Class KillstreakUINew.KSNewsRotatorData
// 0x0020 (0x0048 - 0x0028)
class UKSNewsRotatorData : public UObject
{
public:
	class UTexture2DDynamic*                           Image;                                                    // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENewsActions                                       PanelAction;                                              // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     ActionDetails;                                            // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSNewsRotatorData");
		return ptr;
	}

};


// Class KillstreakUINew.KSNewsRotatorWidget
// 0x0018 (0x04E0 - 0x04C8)
class UKSNewsRotatorWidget : public UKSWidget
{
public:
	struct FString                                     JsonSection;                                              // 0x04C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	float                                              TimePerSection;                                           // 0x04D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSNewsRotatorWidget");
		return ptr;
	}


	void OnJsonChanged();
	TArray<class UKSNewsRotatorData*> GetPanelData();
	class UKSJsonDataFactory* GetJsonDataFactory();
};


// Class KillstreakUINew.KSNPEDataFactory
// 0x0010 (0x0048 - 0x0038)
class UKSNPEDataFactory : public UPUMG_DataFactory
{
public:
	class UKSNPETrackManager*                          _NPETrackManager;                                         // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSNPEDataFactory");
		return ptr;
	}


	void UIX_ClaimTutorialActivity();
	void SkipTutorial();
	bool ShouldShowTutorialPrompt();
	void QueueTutorial();
	void HandleTutorialPopup();
	class UKSQueueDataFactory* GetQueueDataFactory();
};


// Class KillstreakUINew.KSPartyDataFactory
// 0x0000 (0x0158 - 0x0158)
class UKSPartyDataFactory : public UPUMG_PartyDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPartyDataFactory");
		return ptr;
	}


	void BroadcastPartyInvitationError(struct FText* InvitationError);
};


// Class KillstreakUINew.KSPartyManagerWidgetBase
// 0x0000 (0x04C8 - 0x04C8)
class UKSPartyManagerWidgetBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPartyManagerWidgetBase");
		return ptr;
	}


	void RefreshFromPartyData();
	void HandlePartyMemberDataUpdated(struct FPUMG_PartyMemberData* MemberData);
	class UPUMG_PlayerInfo* GetSuggestedInvite();
	class UKSPartyDataFactory* GetPartyDataFactory();
	void ApplyPartyData(TArray<struct FPUMG_PartyMemberData>* PartyMembers);
};


// Class KillstreakUINew.KSPerkTreeBase
// 0x0040 (0x0508 - 0x04C8)
class UKSPerkTreeBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnPerkHovered;                                            // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPerkSelected;                                           // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPerkUnlockRequest;                                      // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UWidget*                                     HoverTarget;                                              // 0x04F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0500(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPerkTreeBase");
		return ptr;
	}


	void SetCursorLerping(bool* bLerping);
	void RefreshEdge(class UKSPerkTreeEdgeBase** Edge, int* column, int* Row, TMap<struct FIntPoint, class UKSPerkTreeNodeBase*>* NodesMap);
	TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> InitializeNodes();
	void HandleTreeNodeSelected(class UKSPerkTreeNodeBase** SelectedNode, struct FCustomLoadoutItem* SelectedPerk, bool* bAlreadyEquipped);
	void HandleTreeNodeHovered(class UKSPerkTreeNodeBase** HoveredNode, struct FCustomLoadoutItem* HoveredPerk);
	class UWidget* GetHoverCursor();
	class UKSPerkTreeNodeBase* GetDefaultFocusNode();
	void BindNode(class UKSPerkTreeNodeBase** TreeNode);
};


// Class KillstreakUINew.KSPerkTreeEdgeBase
// 0x0018 (0x04E0 - 0x04C8)
class UKSPerkTreeEdgeBase : public UKSWidget
{
public:
	bool                                               bTopEnabled;                                              // 0x04C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bLeftEnabled;                                             // 0x04C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bDiagonalEnabled;                                         // 0x04CA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bBackDiagonalEnabled;                                     // 0x04CB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                AccentColor;                                              // 0x04CC(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPerkTreeEdgeBase");
		return ptr;
	}


	void SetViewByState(struct FKSPerkTreeEdgeInfo* EdgeInfo);
};


// Class KillstreakUINew.KSPerkTreeNodeBase
// 0x0060 (0x0528 - 0x04C8)
class UKSPerkTreeNodeBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KillstreakUINew.KSPerkTreeNodeBase.AssignedPerk
	struct FScriptMulticastDelegate                    OnTreeNodeHovered;                                        // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTreeNodeSelected;                                       // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRequestPerkPurchase;                                    // 0x0510(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bIsPlaceholder;                                           // 0x0520(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	EPerkTreeNodeState                                 _NodeState;                                               // 0x0521(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0522(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPerkTreeNodeBase");
		return ptr;
	}


	void SetNodeState(EPerkTreeNodeState* NewNodeState);
	void RefreshView();
	EPerkTreeNodeState GetNodeState();
};


// Class KillstreakUINew.KSViewedActiveWeaponWidget
// 0x0010 (0x04E0 - 0x04D0)
class UKSViewedActiveWeaponWidget : public UKSWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedActiveWeaponWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSPlayerAmmoLoaderWidget
// 0x0108 (0x05E8 - 0x04E0)
class UKSPlayerAmmoLoaderWidget : public UKSViewedActiveWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04E0(0x0028) UNKNOWN PROPERTY: SoftClassProperty KillstreakUINew.KSPlayerAmmoLoaderWidget.PendingAmmoWidgetClass
	class UClass*                                      LoadedAmmoWidgetClass;                                    // 0x0508(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0510(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerAmmoLoaderWidget");
		return ptr;
	}


	void SetActiveAmmoWidget(class UClass** NewWidgetClass, class AKSWeapon** NewWeapon);
	class UKSAmmoWidget* GetActiveAmmoWidget();
	void ClearActiveAmmoWidget();
};


// Class KillstreakUINew.GuidedCalloutSceneData
// 0x0008 (0x0030 - 0x0028)
class UGuidedCalloutSceneData : public UObject
{
public:
	EConfigPropertyGuidedCalloutScenes                 SceneIndex;                                               // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.GuidedCalloutSceneData");
		return ptr;
	}

};


// Class KillstreakUINew.KSPlayerDataFactory
// 0x0020 (0x00E0 - 0x00C0)
class UKSPlayerDataFactory : public UPUMG_PlayerDataFactory
{
public:
	class UKSPlayerStatsManager*                       _PlayerStatsManager;                                      // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerLevelChanged;                                     // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerDataFactory");
		return ptr;
	}


	void SetNPEGuidedCalloutSeen(EConfigPropertyGuidedCalloutScenes* GuidedCalloutScene);
	bool HasSeenNPEGuidedCallout(EConfigPropertyGuidedCalloutScenes* GuidedCalloutScene);
	void HandlePlayerLevelIncremented(class UKSActivityInstance** ActivityInstance, int* Count);
	void HandlePlayerLevelChanged(class UKSActivityInstance** Activity, int* Tier, int* Count);
	int GetRogueBucksCount();
	int GetPlayerLevel();
	int GetPlayerBannerIndex();
};


// Class KillstreakUINew.KSPlayerHealthSegmentBase
// 0x0000 (0x04C8 - 0x04C8)
class UKSPlayerHealthSegmentBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerHealthSegmentBase");
		return ptr;
	}


	void View_SetResidualValue(float* PercentValue);
	void View_SetResidualColor(struct FLinearColor* Color);
	void View_SetMainValue(float* PercentValue, bool* bCanTriggerPulse);
	void View_SetMainColor(struct FLinearColor* Color);
	void View_PlayEmptiedPulse();
	void View_PlayDamagePulse(struct FLinearColor* PeakColor, struct FLinearColor* BaseColor);
};


// Class KillstreakUINew.KSViewedTargetHealthWidget
// 0x0010 (0x0518 - 0x0508)
class UKSViewedTargetHealthWidget : public UKSHealthWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0508(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedTargetHealthWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSPlayerHealthWidgetBase
// 0x0090 (0x05A8 - 0x0518)
class UKSPlayerHealthWidgetBase : public UKSViewedTargetHealthWidget
{
public:
	float                                              fDamageLerpTime;                                          // 0x0518(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fResFadePreDelayTime;                                     // 0x051C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fResFadeTime;                                             // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fDamageLerpPower;                                         // 0x0524(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fResFadePower;                                            // 0x0528(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7C];                                      // 0x052C(0x007C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerHealthWidgetBase");
		return ptr;
	}


	void View_ShowModifier();
	void View_SetResidualPercent(float* ResidualPercent);
	void View_SetResidualMode(bool* IsHealing);
	void View_SetResidualAlpha(float* ResidualAlpha);
	void View_SetModifierValue(float* ModifierValue);
	void View_SetModifierImage();
	void View_SetHealthTextValue(float* HealthValue, float* OverhealValue);
	void View_SetHealthPercent(float* HealthPercent);
	void View_SetHealthMode(bool* IsDowned, bool* IsOverhealed);
	void View_PlayModifierPulse();
	void View_PlayDamagePulse();
	void View_HideModifier();
	bool IsDisplayableModifier(class UKSPlayerModInstance** ModInstance);
	void HandlePlayerDownedChanged(class AKSPlayerState** pKSPlayerState);
	void HandleDisplayableModifierTriggered();
	void CheckPlayerMods(class AKSCharacter** ModsChar);
};


// Class KillstreakUINew.KSPlayerInfo
// 0x0000 (0x0070 - 0x0070)
class UKSPlayerInfo : public UPUMG_PlayerInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerInfo");
		return ptr;
	}


	void ViewExternalProfile();
	bool ShouldShowViewExternalProfile();
	bool ShouldShowCrossplayIconForPlayer();
	bool IsSuggestedFriend();
	bool IsSamePortalAsLocalPlayer();
	bool IsRequestingFriend();
	bool IsPendingFriend();
	bool IsOnline();
	bool IsInQueue();
	bool IsInMatch();
	bool IsInLobby();
	bool IsFriend();
	bool IsDND();
	bool InviteToParty(struct FText* OutErrorText);
	bool HasPortalRelationship();
	bool HasHRRelationship();
	struct FText GetStatusMessage();
	struct FText GetRichPresenceText();
	EKSPlayerOnlineStatus GetPlayerOnlineStatus();
	bool GetEquippedAccountItem(EPlayerAccountSlot* eSlot, class UKSItem** EquippedItem);
	bool CanBeSpectated();
	bool CanBeChallenged();
};


// Class KillstreakUINew.KSPlayerJobSelectWidgetBase
// 0x0040 (0x0508 - 0x04C8)
class UKSPlayerJobSelectWidgetBase : public UKSWidget
{
public:
	class UKSJobSelectionManager*                      _JobSelectionManager;                                     // 0x04C8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSJobSelectionComponent*                    _JobSelectionComponent;                                   // 0x04D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData)
	EPlayerSelectionState                              CurrentPlayerSelectionState;                              // 0x04D8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bJobComponentReady;                                       // 0x04D9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bJobDataFactoryReady;                                     // 0x04DA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04DB(0x0001) MISSED OFFSET
	int                                                MaxEntryCountPerSection;                                  // 0x04DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FJobSelectionEntry>                  JobEntries;                                               // 0x04E0(0x0010) (ZeroConstructor)
	TArray<struct FJobRoleSection>                     JobRoleSections;                                          // 0x04F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0500(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerJobSelectWidgetBase");
		return ptr;
	}


	bool UIX_RequestJobSelect(int* JobItemId, EJobSelectionState* RequestedState);
	void SortEntriesByRoles(TArray<struct FJobSelectionEntry>* JobEntriesList);
	void ResetJobSelect();
	void ReadyToPopulateJobs();
	void OnJobSelectReady(TArray<struct FJobRoleSection>* JobSections);
	void OnJobEntryChanged(struct FJobSelectionEntry* JobEntry);
	void OnJobEntryAdded(struct FJobSelectionEntry* JobEntry);
	void OnJobEntryAcknowledge(int* JobItemId, bool* bSuccess, EJobSelectionState* RequestState);
	void OnJobDataFactoryInitialized();
	void HandleJobsInitialized();
	void HandleJobSelectionManagerReady(class UKSJobSelectionManager** JobSelectionManager);
	void HandleJobSelectionInitialized();
	void HandleJobEntryStateChanged(struct FJobSelectionEntry* JobEntry);
	void HandleJobEntryAdded(struct FJobSelectionEntry* JobEntry);
	void HandleJobEntryAcknowledge(int* ItemId, bool* bSuccess, EJobSelectionState* RequestState);
	class UKSJobSelectionComponent* GetJobSelectionComponent();
	TArray<struct FJobRoleSection> GetJobRoleSection();
	class UKSJobItem* GetJobItemById(int* JobItemId);
	TArray<struct FJobSelectionEntry> GetJobEntries();
	EJobSelectionState GetCurrentSelectedJobState();
	int GetCurrentSelectedJobId();
	EPlayerSelectionState GetCurrentPlayerSelectionState();
};


// Class KillstreakUINew.KSPlayerShopWidgetBase
// 0x0010 (0x04D8 - 0x04C8)
class UKSPlayerShopWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	class AKSPlayerShop*                               _PlayerShop;                                              // 0x04D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerShopWidgetBase");
		return ptr;
	}


	void TriggerDisplayUpdate(bool* ForceUpdate);
	void ShopItemChanged(struct FShopItem* ChangedItem);
	void SetShopState(bool* IsOpen);
	void SetShopContent();
	void SetPromptShow(bool* ShouldShowPrompt);
	void SetCashValue(int* CashValue);
	void PurchaseAcknowledge(EShopItemType* ShopItemType);
	void HandleTeamsFlipped();
	void HandleShopOpened();
	void HandleShopItemChanged(struct FShopItem* ChangedItem);
	void HandleShopClosed();
	void HandleShopAvailabilityChanged(bool* bAvailable);
	void HandlePurchaseAcknowledged(EShopItemType* ShopItemType, bool* bSuccess);
	void HandleCashChanged(int* Cash, int* Delta);
};


// Class KillstreakUINew.KSPlayerWhoDataFactory
// 0x0000 (0x0060 - 0x0060)
class UKSPlayerWhoDataFactory : public UPUMG_PlayerWhoDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerWhoDataFactory");
		return ptr;
	}


	void ClearSearchResults();
};


// Class KillstreakUINew.KSPointObjectiveMarkerWidget
// 0x0030 (0x02C0 - 0x0290)
class UKSPointObjectiveMarkerWidget : public UKSMapIconWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0290(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPointObjectiveMarkerWidget");
		return ptr;
	}


	void ViewSetCaptureProgress(float* ProgressPercent);
	void ViewApplyTimerValue(float* TimerSeconds, float* TotalTimerSeconds);
	bool ShouldHideObjectiveIcon();
	void SetView(struct FKSPointObjectiveMarkerViewState* ViewState);
	struct FLinearColor SelectTeamColorForState(struct FLinearColor* AllyColor, struct FLinearColor* EnemyColor, struct FLinearColor* NeutralColor);
	bool IsInTimerState();
	bool IsInProgressState();
	bool IsInMatchTimerState();
	bool IsInLockedState();
	bool IsInCountdownState();
	bool IsInCapturedState();
	void HandlePhaseChanged(struct FName* PhaseName);
	void HandleBombStateChanged(struct FKSNeutralBombState* BombState);
	struct FKSPointObjectiveMarkerViewState GetCurrentViewState();
	class AKSObjectiveBase* GetAssociatedObjective();
	bool DoesAttackingTeamExist(bool* IsLocalPlayerOnAttackingTeam);
};


// Class KillstreakUINew.KSPortalOffersWidget
// 0x0000 (0x04C8 - 0x04C8)
class UKSPortalOffersWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPortalOffersWidget");
		return ptr;
	}


	TArray<class UPUMG_StoreItem*> GetPortalOfferItems();
	class UKSStoreItemHelper* GetItemHelper();
};


// Class KillstreakUINew.KSPurchaseModal
// 0x0000 (0x04C8 - 0x04C8)
class UKSPurchaseModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPurchaseModal");
		return ptr;
	}


	void SetupBindings();
	void HandleShowPurchaseModal(class UPUMG_StoreItem** Item, class UPUMG_StoreItemPrice** Price);
	class UPUMG_StoreItemHelper* GetStoreItemHelper();
};


// Class KillstreakUINew.KSQueueDataFactory
// 0x0028 (0x00E0 - 0x00B8)
class UKSQueueDataFactory : public UPUMG_QueueDataFactory
{
public:
	int                                                SelectedQueueId;                                          // 0x00B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSetQueueId;                                             // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UDataTable*                                  MapInfoDataTable;                                         // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQueueDataFactory");
		return ptr;
	}


	bool SetSelectedQueueId(int* QueueId);
	int GetSelectedQueueId();
	bool GetQueueInfoById(int* QueueId, struct FClientQueueInfo* InClientQueueInfo);
};


// Class KillstreakUINew.KSQuickPlay
// 0x00B8 (0x0580 - 0x04C8)
class UKSQuickPlay : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectedQueueChanged;                                   // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               CanCurrentlyJoinQueue;                                    // 0x04D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CanControlQueue;                                          // 0x04D9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04DA(0x0002) MISSED OFFSET
	int                                                DefaultSelectedQueueId;                                   // 0x04DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ChunksInstallingQueueId;                                  // 0x04E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x04E4(0x0014) MISSED OFFSET
	bool                                               ReadyForQueueing;                                         // 0x04F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04F9(0x0007) MISSED OFFSET
	struct FClientQueueInfo                            CurrentSelectedQueue;                                     // 0x0500(0x0080)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQuickPlay");
		return ptr;
	}


	void UpdateQueuePermissions();
	bool UIX_AttemptJoinSelectedQueue();
	bool UIX_AttemptCancelQueue();
	void SetupReadyForQueueing();
	void SetupBindings();
	bool SetDefaultSelectedQueue();
	bool SetCurrentlySelectedQueue(int* QueueId);
	void ReceiveMatchStatusUpdate(EPUMG_MatchStatus* CurrentMatchStatus);
	void OnQueuePermissionChanged(bool* CanQueue);
	void OnControlQueuePermissionChanged(bool* CanControl);
	bool IsValidQueue(int* QueueId);
	void HandlePartyMemberDataUpdated(struct FPUMG_PartyMemberData* PartyMember);
	TArray<struct FQueueSection> GetQueueSections(TArray<struct FClientQueueInfo>* ClientCachedQueueInfo);
	TArray<struct FClientQueueInfo> GetQueues();
	bool GetQueueInfoById(int* QueueId, struct FClientQueueInfo* QueueInfo);
	class UKSQueueDataFactory* GetQueueDataFactory();
	class UPUMG_PartyDataFactory* GetPartyDataFactory();
	int GetDefaultSelectedQueueId();
	struct FClientQueueInfo GetCurrentlySelectedQueue();
	bool CheckForDirtyQueues(TArray<struct FClientQueueInfo>* NewClientCachedQueueInfo);
};


// Class KillstreakUINew.KSRadialSelectionWidgetBase
// 0x0020 (0x04E8 - 0x04C8)
class UKSRadialSelectionWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04C8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSRadialSelectionWidgetBase");
		return ptr;
	}


	void TraceSelectionCursor(float* Radius, float* Angle);
	void ShowSelector();
	void RadialOptionUnhover();
	void RadialOptionSelected(int* Index);
	void RadialOptionHovered(int* Index);
	void OnEmoteSelectReleased();
	void OnEmoteSelectPressed();
	bool IsSelectorActive();
	void InitializeTracking();
	void HideSelector();
	void HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* NewInputState);
	float GetWheelSize();
	int GetOptionsCount();
	struct FName GetInputName_CursorY();
	struct FName GetInputName_CursorX();
	struct FName GetInputName_Activate();
	float GetDeadZone();
	void ButtonClicked();
};


// Class KillstreakUINew.KSReticleWidgetBase
// 0x0020 (0x0500 - 0x04E0)
class UKSReticleWidgetBase : public UKSViewedActiveWeaponWidget
{
public:
	float                                              ShrinkAnimationTime;                                      // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedShotIconMaxScale;                                  // 0x04E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedShotIconMinScale;                                  // 0x04E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedShotMinScaleSqDist;                                // 0x04EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGrenadeCooking;                                          // 0x04F0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInADS;                                                   // 0x04F1(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCachedBlockIconVisible;                                  // 0x04F2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04F3(0x0001) MISSED OFFSET
	float                                              CachedWeaponAccuracy;                                     // 0x04F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedReticleOffset;                                      // 0x04F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSReticleWidgetBase");
		return ptr;
	}


	void UpdateReticleOffset(float* OffsetFromCenterScreen);
	void UpdateBlockedShotIcon(bool* IconVisible, struct FVector2D* Translation, struct FVector2D* IconScale);
	void CalculateReticleOffset(float* DeltaTime);
	void CalculateBlockedShotIcon();
};


// Class KillstreakUINew.KSScreenMarkerWidgetBase
// 0x0010 (0x02A0 - 0x0290)
class UKSScreenMarkerWidgetBase : public UKSMapIconWidgetBase
{
public:
	bool                                               bHideWhenOffscreen;                                       // 0x0290(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	struct FVector2D                                   OffscreenMargins;                                         // 0x0294(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x029C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSScreenMarkerWidgetBase");
		return ptr;
	}

};


// Class KillstreakUINew.KSSettingsContainer
// 0x0100 (0x05C8 - 0x04C8)
class UKSSettingsContainer : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C8(0x0010) MISSED OFFSET
	struct FKSSettingsContainerConfig                  _ContainerConfig;                                         // 0x04D8(0x00F0) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsContainer");
		return ptr;
	}


	void OnShowSettingsWidget(class UKSSettingsWidget** SettingsWidget);
	void OnHideSettingsWidget(class UKSSettingsWidget** SettingsWidget);
	void OnContainerConfigSet();
	struct FText GetWidgetContainerTitle();
	struct FText GetWidgetContainerDescription();
	TArray<class UKSSettingsWidget*> GetSettingsWidgets();
	void AddSettingsWidget(class UKSSettingsWidget** SettingsWidget);
};


// Class KillstreakUINew.KSSettingsMenuConfigAsset
// 0x0010 (0x0040 - 0x0030)
class UKSSettingsMenuConfigAsset : public UDataAsset
{
public:
	TArray<struct FKSSettingsPageConfig>               SettingsPages;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsMenuConfigAsset");
		return ptr;
	}

};


// Class KillstreakUINew.KSSettingsDataFactory
// 0x0240 (0x0318 - 0x00D8)
class UKSSettingsDataFactory : public UPUMG_SettingsDataFactory
{
public:
	struct FScriptMulticastDelegate                    OnSettingsReceivedFromPlayerAccount;                      // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                                      // 0x00E8(0x0050) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnKeyBindSettingsApplied;                                 // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnKeyBindSettingsSaved;                                   // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FKSSettingPropertyId>                BoolSettingPropertyIds;                                   // 0x0158(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0168(0x0050) MISSED OFFSET
	TArray<struct FKSSettingPropertyId>                IntSettingPropertyIds;                                    // 0x01B8(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x50];                                      // 0x01C8(0x0050) MISSED OFFSET
	TArray<struct FKSSettingPropertyId>                FloatSettingPropertyIds;                                  // 0x0218(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData03[0x60];                                      // 0x0228(0x0060) MISSED OFFSET
	struct FKSSettingsMenuConfig                       _KSSettingsMenuConfig;                                    // 0x0288(0x0010)
	unsigned char                                      UnknownData04[0x28];                                      // 0x0298(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KillstreakUINew.KSSettingsDataFactory.KSSettingsMenuConfigAssetSoftObjectPtr
	class UKSSettingsMenuConfigAsset*                  _KSSettingsMenuConfigAsset;                               // 0x02C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x02C8(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDisplayLanguageApplied;                                 // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisplayLanguageSaved;                                   // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScreenResolutionApplied;                                // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScreenResolutionSaved;                                  // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsDataFactory");
		return ptr;
	}


	void SaveSettings();
	void SaveSettingAsInt(struct FString* Name);
	void SaveSettingAsFloat(struct FString* Name);
	void SaveSettingAsBool(struct FString* Name);
	void SaveScreenResolution();
	void SaveLanguage();
	void SaveKeyBindings();
	void RevertScreenResolution();
	void RevertLanguageToDefault();
	void RevertKeyBindings();
	bool IsUserLoggedIn();
	bool GetSettingAsInt(struct FString* Name, int* OutInt);
	bool GetSettingAsFloat(struct FString* Name, float* OutFloat);
	bool GetSettingAsBool(struct FString* Name, bool* OutBool);
	struct FIntPoint GetScreenResolution();
	class UKSPlayerInput* GetKSPlayerInput();
	void GetCustomInputAxisKeys(struct FName* Name, EKSInputType* InputType, float* Scale, TArray<struct FKey>* OutKeys);
	void GetCustomInputActionKeys(struct FName* Name, EKSInputType* InputType, TArray<struct FKey>* OutKeys);
	struct FString GetCurrentLanguage();
	TArray<struct FString> GetAvailableLanguages();
	void BindSettingCallbacks(struct FString* Name, struct FSettingDelegateStruct* SettingDelegateStruct);
	void ApplySettingAsInt(struct FString* Name, int* Value);
	void ApplySettingAsFloat(struct FString* Name, float* Value);
	void ApplySettingAsBool(struct FString* Name, bool* Value);
	void ApplyScreenResolution(struct FIntPoint* ScreenResolution);
	void ApplyLanguage(struct FString* LanguageCulture);
};


// Class KillstreakUINew.KSSettingsGroup
// 0x0118 (0x05E0 - 0x04C8)
class UKSSettingsGroup : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C8(0x0010) MISSED OFFSET
	class UClass*                                      SettingsContainerClass;                                   // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSettingsGroupConfig                      _GroupConfig;                                             // 0x04E0(0x0100) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsGroup");
		return ptr;
	}


	void OnShowContainer(class UKSSettingsContainer** SettingsContainer);
	void OnHideContainer(class UKSSettingsContainer** SettingsContainer);
	void OnGroupConfigSet();
	TArray<class UKSSettingsContainer*> GetSettingsContainers();
	void AddSubSettingsContainerWidget(class UKSSettingsContainer** SettingsContainer);
	void AddMainSettingsContainerWidget(class UKSSettingsContainer** SettingsContainer);
};


// Class KillstreakUINew.KSSettingsInfoBase
// 0x0090 (0x00B8 - 0x0028)
class UKSSettingsInfoBase : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSettingValueChanged;                                    // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bIsAutoApplied;                                           // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAutoSaved;                                             // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x46];                                      // 0x003A(0x0046) MISSED OFFSET
	TArray<struct FText>                               TextOptions;                                              // 0x0080(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnTextOptionsChanged;                                     // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              MinValue;                                                 // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x00A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StepValue;                                                // 0x00A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRoundValue;                                              // 0x00AC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              RoundToNearest;                                           // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPercent;                                               // 0x00B4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfoBase");
		return ptr;
	}


	void UpdateTextOptions(TArray<struct FText>* NewOptions);
	bool SetDesiredValueKeyBind(struct FKSKeyBind* InKeyBind);
	bool SetDesiredValueInt(int* inInt);
	bool SetDesiredValueFloat(float* InFloat);
	bool SetDesiredValueBool(bool* InBool);
	bool SaveKeyBindValue(struct FKSKeyBind* InKeyBind);
	bool SaveIntValue(int* inInt);
	bool SaveFloatValue(float* InFloat);
	bool SaveBoolValue(bool* InBool);
	void Save();
	float RoundToNearestValueFloat(float* ValueToRound);
	void RevertSettingToDefault();
	void Revert();
	void OnValueKeyBindSaved(struct FKSKeyBind* SavedKeyBind);
	void OnValueKeyBindApplied(struct FKSKeyBind* AppliedKeyBind);
	void OnValueIntSaved(int* SavedInt);
	void OnValueIntApplied(int* AppliedInt);
	void OnValueFloatSaved(float* SavedFloat);
	void OnValueFloatApplied(float* AppliedFloat);
	void OnValueBoolSaved(bool* SavedBool);
	void OnValueBoolApplied(bool* AppliedBool);
	bool IsValidValueKeyBind(struct FKSKeyBind* InKey);
	bool IsValidValueInt(int* inInt);
	bool IsValidValueFloat(float* InFloat);
	bool IsValidValueBool(bool* InBool);
	bool IsDirty();
	void InitializeValue();
	struct FKSKeyBind GetValueKeyBind();
	int GetValueInt();
	float GetValueFloat();
	bool GetValueBool();
	TArray<struct FText> GetTextOptions();
	struct FText GetTextOption(int* Index);
	float GetStep();
	EKSSettingType GetSettingType();
	float GetRoundToNearest();
	bool GetRound();
	int GetNumTextOptions();
	float GetMin();
	float GetMax();
	class AKSHUDCommon* GetKSHUD();
	bool GetIsPercent();
	struct FKSKeyBind GetDirtyValueKeyBind();
	int GetDirtyValueInt();
	float GetDirtyValueFloat();
	bool GetDirtyValueBool();
	struct FKSKeyBind FixupInvalidKeyBind(struct FKSKeyBind* InKey);
	int FixupInvalidInt(int* inInt);
	float FixupInvalidFloat(float* InFloat);
	bool FixupInvalidBool(bool* InBool);
	bool CanRevert();
	bool ApplyKeyBindValue(struct FKSKeyBind* InKeyBind);
	bool ApplyIntValue(int* inInt);
	bool ApplyFloatValue(float* InFloat);
	bool ApplyBoolValue(bool* InBool);
	void Apply();
};


// Class KillstreakUINew.KSSettingsInfo_Binding
// 0x0020 (0x00D8 - 0x00B8)
class UKSSettingsInfo_Binding : public UKSSettingsInfoBase
{
public:
	struct FKSKeyBindInfo                              PrimaryKeyBindInfo;                                       // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FKSKeyBindInfo                              GamepadKeyBindInfo;                                       // 0x00C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_Binding");
		return ptr;
	}


	void OnKeyBindingsSaved(struct FName* Name);
	void OnKeyBindingsApplied(struct FName* Name);
};


// Class KillstreakUINew.KSSettingsInfo_Generic
// 0x0018 (0x00D0 - 0x00B8)
class UKSSettingsInfo_Generic : public UKSSettingsInfoBase
{
public:
	EKSSettingType                                     _KSSettingType;                                           // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B9(0x0007) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x00C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_Generic");
		return ptr;
	}


	void OnSettingSaved();
	void OnSettingApplied();
	class UKSSettingsDataFactory* GetKSSettingsDataFactory();
};


// Class KillstreakUINew.KSSettingsInfo_MuteAudio
// 0x0000 (0x00B8 - 0x00B8)
class UKSSettingsInfo_MuteAudio : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_MuteAudio");
		return ptr;
	}

};


// Class KillstreakUINew.KSSettingsInfo_Region
// 0x0000 (0x00B8 - 0x00B8)
class UKSSettingsInfo_Region : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_Region");
		return ptr;
	}


	void OnPreferredSiteUpdated();
};


// Class KillstreakUINew.KSSettingsInfo_Resolution
// 0x0010 (0x00C8 - 0x00B8)
class UKSSettingsInfo_Resolution : public UKSSettingsInfoBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_Resolution");
		return ptr;
	}


	void OnScreenResolutionSaved(struct FIntPoint* SavedScreenResolution);
	void OnScreenResolutionApplied(struct FIntPoint* AppliedScreenResolution);
};


// Class KillstreakUINew.KSSettingsMenu
// 0x0030 (0x04F8 - 0x04C8)
class UKSSettingsMenu : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04C8(0x0018) MISSED OFFSET
	class UClass*                                      SettingsPageClass;                                        // 0x04E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSettingsMenuConfig                       _MenuConfig;                                              // 0x04E8(0x0010) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsMenu");
		return ptr;
	}


	void RebuildNavigation();
	void OnShowPage(class UKSSettingsPage** SettingsPage);
	void OnSaveSettings();
	void OnRevertSettings();
	void OnMenuConfigSet();
	void OnHidePage(class UKSSettingsPage** SettingsPage);
	void OnConfirmExit(bool* ShouldSaveSettings);
	TArray<class UKSSettingsPage*> GetSettingsPages();
	void CheckSavePendingChanges();
	void AddSettingsPageWidget(class UKSSettingsPage** SettingsPage);
};


// Class KillstreakUINew.KSSettingsPage
// 0x0090 (0x0558 - 0x04C8)
class UKSSettingsPage : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C8(0x0010) MISSED OFFSET
	class UClass*                                      SettingsSectionClass;                                     // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSettingsPageConfig                       _PageConfig;                                              // 0x04E0(0x0078) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsPage");
		return ptr;
	}


	void OnShowSection(class UKSSettingsSection** SettingsSection);
	void OnPageConfigSet();
	void OnHideSection(class UKSSettingsSection** SettingsSection);
	TArray<class UKSSettingsSection*> GetSettingsSections();
	class UScrollBox* GetScrollBox();
	void AddSettingsSectionWidget(class UKSSettingsSection** SettingsSection);
};


// Class KillstreakUINew.KSSettingsSection
// 0x0090 (0x0558 - 0x04C8)
class UKSSettingsSection : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04C8(0x0010) MISSED OFFSET
	class UClass*                                      SettingsGroupClass;                                       // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSettingsSectionConfig                    _SectionConfig;                                           // 0x04E0(0x0078) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsSection");
		return ptr;
	}


	void OnShowGroup(class UKSSettingsGroup** SettingsGroup);
	void OnSectionConfigSet();
	void OnHideGroup(class UKSSettingsGroup** SettingsGroup);
	TArray<class UKSSettingsGroup*> GetSettingsGroups();
	void AddSettingsGroupWidget(class UKSSettingsGroup** SettingsGroup);
};


// Class KillstreakUINew.KSSettingsWidget
// 0x0048 (0x0510 - 0x04C8)
class UKSSettingsWidget : public UKSWidget
{
public:
	struct FKSSettingsWidgetConfig                     _WidgetConfig;                                            // 0x04C8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       WidgetContainerTitle;                                     // 0x04D8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       WidgetContainerDescription;                               // 0x04F0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UKSSettingsInfoBase*                         _SettingsInfo;                                            // 0x0508(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsWidget");
		return ptr;
	}


	void SaveSetting();
	void RevertSetting();
	void OnWidgetSettingsInfoSet();
	void OnWidgetContainerTitleSet();
	void OnWidgetContainerDescriptionSet();
	void OnWidgetConfigSet();
	void OnInputAttached(bool* bGamepadAttached, bool* bMouseAttached);
	bool IsSaved();
	bool IsApplied();
	bool CanGamepadNavigate();
	void ApplySetting();
};


// Class KillstreakUINew.KSShopItemButtonBase
// 0x0028 (0x04F0 - 0x04C8)
class UKSShopItemButtonBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnShopSelection;                                          // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnShopViewItemDetails;                                    // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EShopItemType                                      ActiveShopSlot;                                           // 0x04E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSShopItemButtonBase");
		return ptr;
	}


	class UButton* GetHitTarget();
	void DisplayShopItem(struct FShopItem* ShopItem, bool* IsAffordable, bool* IsToggleSlot);
	void ButtonUnhovered();
	void ButtonReleased();
	void ButtonPressed();
	void ButtonHovered();
	void ButtonClicked();
};


// Class KillstreakUINew.KSSocialWidgetBase
// 0x0008 (0x04D0 - 0x04C8)
class UKSSocialWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSocialWidgetBase");
		return ptr;
	}


	void SortFriendData(TArray<class UPUMG_PlayerInfo*>* Friends);
	void SearchPlayerName(struct FString* PlayerName);
	void OnFriendRequestsUpdated();
	void HandleSearchByNameResultsUpdated();
	void HandlePartyDataUpdated();
	void HandleFriendInviteReceived(struct FPUMG_FriendData* PlayerData);
	void HandleFriendDataUpdated();
	TArray<class UPUMG_PlayerInfo*> GetSortedFriends();
	TArray<class UPUMG_PlayerInfo*> GetSearchResults();
	class UKSPlayerWhoDataFactory* GetPlayerWhoDataFactory();
	class UKSPartyDataFactory* GetPartyDataFactory();
	class UKSFriendDataFactory* GetFriendDataFactory();
	void ClearSearchResults();
};


// Class KillstreakUINew.KSSortableGridPanel
// 0x0018 (0x0168 - 0x0150)
class UKSSortableGridPanel : public UGridPanel
{
public:
	TEnumAsByte<EOrientation>                          _Orientation;                                             // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnSortCompareChildrenEvent;                               // 0x0154(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0164(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSortableGridPanel");
		return ptr;
	}


	bool SortChildrenComparator__DelegateSignature(class UWidget** LHS, class UWidget** RHS);
	void SortChildren();
	class UGridSlot* AddChildAutoLayout(class UWidget** Content);
};


// Class KillstreakUINew.KSSortableVerticalBox
// 0x0010 (0x0140 - 0x0130)
class UKSSortableVerticalBox : public UVerticalBox
{
public:
	struct FScriptDelegate                             OnSortCompareChildrenEvent;                               // 0x0130(0x0010) (Edit, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSortableVerticalBox");
		return ptr;
	}


	bool SortChildrenComparator__DelegateSignature(class UWidget** LHS, class UWidget** RHS);
	void SortChildren();
};


// Class KillstreakUINew.KSTargetMarkerWidget
// 0x0030 (0x02D0 - 0x02A0)
class UKSTargetMarkerWidget : public UKSScreenMarkerWidgetBase
{
public:
	struct FScriptMulticastDelegate                    OnTargetChanged;                                          // 0x02A0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnModUsed;                                                // 0x02B0(0x0010) (ZeroConstructor, InstancedReference)
	class AActor*                                      CurrentTarget;                                            // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class UKSModInst_DirectTargetWeapon*               TargetModInst;                                            // 0x02C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSTargetMarkerWidget");
		return ptr;
	}


	void UpdateCharge(class UKSModInst_Activated** ModInst);
	void ReceiveNewTarget(class UKSModInst_DirectTargetWeapon** ModInst, class AActor** NewTarget);
	void OnNewTarget();
	void OnGamepadSelectedChanged(int* NewSelectionIndex);
	void ApplyGuestModInst(class UKSModInst_DirectTargetWeapon** GuestModInst);
};


// Class KillstreakUINew.KSTextChatWidget
// 0x0030 (0x04F8 - 0x04C8)
class UKSTextChatWidget : public UKSWidget
{
public:
	bool                                               ActiveChatChannelsDirty;                                  // 0x04C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	TArray<struct FPUMG_ActiveChatChannelData>         ActiveChatChannels;                                       // 0x04D0(0x0010) (ZeroConstructor)
	int                                                CurrentChatChannelIndex;                                  // 0x04E0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCurrentChatChannelChanged;                              // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSTextChatWidget");
		return ptr;
	}


	void Whisper(struct FString* PlayerName, struct FString* Message);
	void Unblock(struct FString* PlayerName);
	void UIX_SubmitTextInput(struct FString* Message);
	void UIX_SendMessageToPlayer(struct FString* Message, int64_t* PlayerId);
	void UIX_SendMessageToChannel(struct FString* Message, EPUMG_ChatChannel* Channel);
	void UIX_MarkMessageAsRead(int* MessageIndex);
	void UIX_ExecuteChatCommandLine(struct FString* CommandLine);
	void ToggleDND();
	bool SetChatChannelToPlayer(int64_t* PlayerId);
	bool SetChatChannel(EPUMG_ChatChannel* Channel, int64_t* PersonalChannelPlayerId);
	void Reply(struct FString* Message);
	void PreviousChatChannel();
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player);
	void OpenTextChat(bool* BeginChatCommand);
	void NextChatChannel();
	bool IsActiveChatChannel(EPUMG_ChatChannel* Channel);
	void HandleChatMessageReceived(struct FPUMG_ChatData* ReceivedMessage);
	void HandleChatMessageRead(struct FPUMG_ChatData* ReadMessage);
	void HandleChatChannelLeft(EPUMG_ChatChannel* Channel);
	void HandleChatChannelJoined(EPUMG_ChatChannel* Channel);
	struct FPUMG_ActiveChatChannelData GetCurrentChatChannel();
	class UKSChatDataFactory* GetChatDataFactory();
	TArray<struct FPUMG_ActiveChatChannelData> GetActiveChatChannels();
	bool CanChatInChannel(EPUMG_ChatChannel* Channel);
	void Block(struct FString* PlayerName);
};


// Class KillstreakUINew.KSToastNotificationWidgetBase
// 0x0038 (0x0500 - 0x04C8)
class UKSToastNotificationWidgetBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnToastReceived;                                          // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                MaxToastNotification;                                     // 0x04D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04DC(0x0004) MISSED OFFSET
	bool                                               IsBusy;                                                   // 0x04E0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	int                                                CurrentToastCount;                                        // 0x04E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x04E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSToastNotificationWidgetBase");
		return ptr;
	}


	void StoreToastQueue(struct FToastData* ToastNotification);
	void ShowToastNotification();
	void OnToastNotificationReceived(struct FToastData* ToastData);
	void HandlePartyMemberPromoted(int64_t* PlayerId);
	void HandlePartyMemberLeave();
	void HandlePartyMemberKick(int64_t* PlayerId);
	void HandlePartyMemberAdded(struct FPUMG_PartyMemberData* PartyMemberData);
	void HandlePartyInviteSent(struct FText* PlayerName);
	void HandlePartyInviteRejected();
	void HandlePartyInviteReceived(class UPUMG_PlayerInfo** PartyInviter);
	void HandlePartyInviteError(struct FText* PlayerName);
	void HandlePartyInviteAccepted();
	void HandlePartyDisbanded();
	void HandleFriendRejected(struct FText* PlayerName);
	void HandleFriendInviteReceived(struct FPUMG_FriendData* PlayerData);
	void HandleFriendAddSuccess(struct FString* PlayerName);
	void HandleFriendAdded(struct FText* PlayerName);
	class UKSPartyDataFactory* GetPartyDataFactory();
	bool GetNext(struct FToastData* NextToastNotification);
	class UKSFriendDataFactory* GetFriendDataFactory();
	void ClearNotificationQueue();
};


// Class KillstreakUINew.KSUIBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UKSUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSUIBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_SetHiddenCursorMode(class UObject** WorldContextObject, class APlayerController** PlayerController, bool* ShouldHide);
	void STATIC_ResetHiddenCursorMode(class UObject** WorldContextObject, class APlayerController** PlayerController);
	void STATIC_RegisterGridNavigation(class UPUMG_Widget** ParentWidget, int* FocusGroup, TArray<class UWidget*>* NavWidgets, int* GridWidth);
	struct FText STATIC_Key_GetShortDisplayName(struct FKey* Key);
	bool STATIC_IsInsideMargins(class UObject** WorldContextObject, struct FVector2D* Translation, struct FVector2D* Margins);
	bool STATIC_IsInCenteredScreenRect(float* PositionX, float* PositionY, float* MarginX, float* MarginY);
	class UKSStoreItemHelper* STATIC_GetStoreItemHelper(class UObject** WorldContextObject);
	bool STATIC_GetQueueDisplayName(struct FText* DisplayNameText);
	class UPUMG_PlayerInfo* STATIC_GetLocalPlayerInfo(class APUMG_HUD** HUD);
	bool STATIC_GetKSJobItemByLootId(class UObject** WorldContextObject, int* LootTableItemId, bool* RequireActive, class UKSJobItem** JobItem);
	bool STATIC_GetKSJobItemByItemId(class UObject** WorldContextObject, int* ItemId, bool* RequireActive, class UKSJobItem** JobItem);
	TArray<int> STATIC_GetDigitsFromInt(int* Value);
	int STATIC_CompareStrings(struct FString* LeftString, struct FString* RightString);
	void STATIC_ClearKeyboardFocus();
};


// Class KillstreakUINew.KSUISoundLibrary
// 0x0000 (0x0028 - 0x0028)
class UKSUISoundLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSUISoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSGenericSoundLibrary
// 0x0018 (0x0040 - 0x0028)
class UKSGenericSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               BackToScreenSound;                                        // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ErrorSound;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ScreenTransitionSound;                                    // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSGenericSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSButtonSoundLibrary
// 0x0018 (0x0040 - 0x0028)
class UKSButtonSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               ButtonClicked;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ButtonHovered;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ButtonUnhovered;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSButtonSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSScrollButtonSoundLibrary
// 0x0020 (0x0048 - 0x0028)
class UKSScrollButtonSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               ScrollClicked;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ScrollHovered;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ScrollUnhovered;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ScrollingSound;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSScrollButtonSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSShopSoundLibrary
// 0x0020 (0x0048 - 0x0028)
class UKSShopSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               ShopOpen;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ShopClose;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PurchaseSucceeded;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PurchaseFailed;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSShopSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSToastSoundLibrary
// 0x0020 (0x0048 - 0x0028)
class UKSToastSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               FriendToast;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PartyToast;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ErrorToast;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               InfoToast;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSToastSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.CommonVendorHelper
// 0x0000 (0x0028 - 0x0028)
class UCommonVendorHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.CommonVendorHelper");
		return ptr;
	}


	int STATIC_GetVendorIDFromEnum(EKSVendorTypes* VendorType);
};


// Class KillstreakUINew.KSViewedActiveWeaponCompWidget
// 0x0010 (0x05A0 - 0x0590)
class UKSViewedActiveWeaponCompWidget : public UKSActiveWeaponComponentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0590(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedActiveWeaponCompWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedActiveGadgetWidget
// 0x0010 (0x04E0 - 0x04D0)
class UKSViewedActiveGadgetWidget : public UKSWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedActiveGadgetWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedActiveMedPackWidget
// 0x0010 (0x04E0 - 0x04D0)
class UKSViewedActiveMedPackWidget : public UKSWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedActiveMedPackWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedItemLabel
// 0x0018 (0x0510 - 0x04F8)
class UKSViewedItemLabel : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04F8(0x0008) MISSED OFFSET
	bool                                               UpdateViewLimitPosition;                                  // 0x0500(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0501(0x0003) MISSED OFFSET
	struct FVector2D                                   ViewLimitPosition;                                        // 0x0504(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x050C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedItemLabel");
		return ptr;
	}


	void UpdateLabelPosition();
	void UnbindToViewportResizeEvent();
	void TriggerLabelPositionUpdate();
	void OnLabelShow();
	void OnLabelHide();
	class UImage* GetViewLimitImage();
	class AActor* GetTrackedActor();
	class UCanvasPanel* GetOutermostCanvasPanel();
	bool GetOnScreenPositionForLabel(class APlayerController** Player, class AActor** InActor, struct FBox2D* OutBounds);
	class UCanvasPanel* GetLabelCanvasPanel();
	void BindToViewportResizeEvent();
};


// Class KillstreakUINew.KSViewedPawnDamageDisplay
// 0x0038 (0x0530 - 0x04F8)
class UKSViewedPawnDamageDisplay : public UKSViewedPawnWidget
{
public:
	float                                              StackingDelay;                                            // 0x04F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               TetherToEventLocation;                                    // 0x04FC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04FD(0x0003) MISSED OFFSET
	int                                                MaxNumDamageWidgetsOnScreen;                              // 0x0500(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	TArray<class UDamageNumberDisplayWidget*>          CurrentDamageNumbersOnScreen;                             // 0x0508(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UDamageNumberDisplayWidget*>          DamageNumbersPool;                                        // 0x0518(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0528(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedPawnDamageDisplay");
		return ptr;
	}


	void HandlePhaseChange(struct FName* PhaseName);
	void HandleInstigateDamageNotify(struct FCombatEventInfo* DamageInfo);
	void HandleFlourishAnimationCompleted(class UDamageNumberDisplayWidget** DamageNumberWidget);
	class UDamageNumberDisplayWidget* GetDamageNumberWidgetInstance();
	void ClearDamageNumbersOnScreen();
};


// Class KillstreakUINew.DamageNumberDisplayWidget
// 0x0040 (0x0270 - 0x0230)
class UDamageNumberDisplayWidget : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnFlourishAnimationComplete;                              // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AActor*                                      DamageTarget;                                             // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialDamageLocation;                                    // 0x0248(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               TetherToEventLocation;                                    // 0x0254(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	float                                              DamageAmount;                                             // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsLethal;                                                 // 0x025C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadshot;                                               // 0x025D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x025E(0x0002) MISSED OFFSET
	float                                              DelayBeforeFade;                                          // 0x0260(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayingFlourish;                                          // 0x0264(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0265(0x0003) MISSED OFFSET
	float                                              VerticalWorldOffset;                                      // 0x0268(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x026C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.DamageNumberDisplayWidget");
		return ptr;
	}


	void SetDisplayInformation(class AActor** InTargetActor, bool* InTetherToEventLocation, float* InDamageAmount, bool* InIsLethal, bool* InIsHeadshot, float* InDelayWindow, bool* InShieldHit);
	void PlayFlourishAnimation();
	void OnDisplayInformationReset(class AActor** CurrentTargetActor, float* CurrentDamageAmount, bool* CurrentIsLethal, bool* CurrentIsHeadshot, bool* CurrentShieldHit);
	bool IsDisplayStacking();
};


// Class KillstreakUINew.KSViewedPawnInventoryWidget
// 0x0038 (0x0590 - 0x0558)
class UKSViewedPawnInventoryWidget : public UKSPawnInventoryWidget
{
public:
	struct FPlayerInventorySlot                        ActiveInventoryItem;                                      // 0x0558(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0570(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedPawnInventoryWidget");
		return ptr;
	}


	void OnUpdatedPawnInventorySlot(struct FPlayerInventorySlot* InventorySlot);
	void OnRemovedPawnInventorySlot(struct FPlayerInventorySlot* InventorySlot);
	void OnActivePawnInventorySlot(struct FPlayerInventorySlot* InventorySlot);
	int GetSlotIndex(struct FGameplayTag* EquipPoint);
};


// Class KillstreakUINew.KSViewedPawnModsWidget
// 0x0018 (0x0510 - 0x04F8)
class UKSViewedPawnModsWidget : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedPawnModsWidget");
		return ptr;
	}


	void OnViewedPawnModAdded(class UKSPlayerMod** Mod, class UKSPlayerModInstance** ModInstance);
	class UOverlay* GetOverlay();
};


// Class KillstreakUINew.KSVoiceActivityWidget
// 0x0060 (0x0528 - 0x04C8)
class UKSVoiceActivityWidget : public UKSWidget
{
public:
	TMap<struct FString, struct FString>               PlayerNames;                                              // 0x04C8(0x0050) (BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    PlayerNamesUpdated;                                       // 0x0518(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSVoiceActivityWidget");
		return ptr;
	}


	void OnVoiceParticipantUpdated(struct FString* Account, bool* bIsTalking, bool* bIsMuted);
	void OnVoiceParticipantRemoved(struct FString* Account);
	void OnVoiceParticipantAdded(struct FString* Account);
	void HandlePlayerStateChanged(class AKSPlayerState** PlayerState);
	TArray<struct FKeyValue> GetAccountAndNames();
};


// Class KillstreakUINew.KSWeaponComponentWidget
// 0x0020 (0x04E8 - 0x04C8)
class UKSWeaponComponentWidget : public UKSWidget
{
public:
	TWeakObjectPtr<class UKSWeaponComponent>           _WeaponComponent;                                         // 0x04C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	uint16_t                                           EquipmentId;                                              // 0x04D0(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x04D2(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWeaponComponentWidget");
		return ptr;
	}


	void SetOwningWeaponComponent(class UKSWeaponComponent** InWeaponComponent);
	void PreClearWeaponComponent();
	void PostSetWeaponComponent();
	void OnEndActiveWeaponComponent();
	void OnBecomeActiveWeaponComponent();
	bool IsWeaponComponentActive();
	class UKSWeaponComponent* GetWeaponComponent();
};


// Class KillstreakUINew.KSWeaponComponentAmmoWidget
// 0x0020 (0x0508 - 0x04E8)
class UKSWeaponComponentAmmoWidget : public UKSWeaponComponentWidget
{
public:
	int                                                CachedAmmoInClip;                                         // 0x04E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CachedClipSize;                                           // 0x04EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CachedInReserve;                                          // 0x04F0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               CachedIsReloading;                                        // 0x04F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x04F5(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWeaponComponentAmmoWidget");
		return ptr;
	}


	void StopReloading();
	void StartReloading();
	void OnAmmoChanged(int* OldInClip, int* OldClipSize, int* OldReserve, int* NewInClip, int* NewClipSize, int* NewReserve);
	bool IsReloading();
	int GetClipSize();
	int GetAmmoInReserve();
	int GetAmmoInClip();
};


// Class KillstreakUINew.KSWhatsNewPanel
// 0x0048 (0x0070 - 0x0028)
class UKSWhatsNewPanel : public UObject
{
public:
	struct FText                                       Header;                                                   // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0040(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UTexture2DDynamic*                           Image;                                                    // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     URL;                                                      // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWhatsNewPanel");
		return ptr;
	}

};


// Class KillstreakUINew.KSWhatsNewModal
// 0x0000 (0x04C8 - 0x04C8)
class UKSWhatsNewModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWhatsNewModal");
		return ptr;
	}


	void OnJsonChanged();
	TArray<class UKSWhatsNewPanel*> GetPanelData();
	class UKSJsonDataFactory* GetJsonDataFactory();
};


// Class KillstreakUINew.TickAnimationManager
// 0x0050 (0x0078 - 0x0028)
class UTickAnimationManager : public UObject
{
public:
	TMap<struct FName, struct FTickAnimationParams>    AnimsByName;                                              // 0x0028(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.TickAnimationManager");
		return ptr;
	}


	void StopAnimation(struct FName* AnimName);
	void SkipToEndAnimation(struct FName* AnimName);
	void ResumeAnimation(struct FName* AnimName);
	void RemoveAnimation(struct FName* AnimName);
	void PlayAnimation(struct FName* AnimName);
	void PauseAnimation(struct FName* AnimName);
	bool GetAnimationInfo(struct FName* AnimName, struct FTickAnimationParams* OutAnimParams);
	void ApplyTick(float* DeltaTime);
	void AddAnimation(struct FName* AnimName, float* Duration, struct FScriptDelegate* UpdateEvent, struct FScriptDelegate* FinishedEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
