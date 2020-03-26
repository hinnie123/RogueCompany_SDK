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

// Class PlatformUMG.PUMG_AcquisitionManager
// 0x0028 (0x0050 - 0x0028)
class UPUMG_AcquisitionManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnAcquisitionSuccess;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAcquisitionFailed;                                      // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UPUMG_StoreItemHelper*                       _StoreItemHelper;                                         // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_AcquisitionManager");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_AsyncImage
// 0x0048 (0x0258 - 0x0210)
class UPUMG_AsyncImage : public UImage
{
public:
	class UWidget*                                     WaitingWidget;                                            // 0x0210(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAsyncImageLoadStarted;                                  // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAsyncImageLoadComplete;                                 // 0x0228(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAsyncImageLoadCanceled;                                 // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAsyncImageBrushChanged;                                 // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_AsyncImage");
		return ptr;
	}


	void ShowWaitingWidget();
	void HideWaitingWidget();
};


// Class PlatformUMG.PUMG_BlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UPUMG_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_BlueprintFunctionLibrary");
		return ptr;
	}


	bool STATIC_IsWithEditor();
	float STATIC_GetUMG_DPI_Scaling();
	struct FName STATIC_GetKeyName(struct FKey* Key);
	struct FKey STATIC_GetGamepadConfirmButton();
	struct FKey STATIC_GetGamepadCancelButton();
	bool STATIC_GetGamepadButtonForAction(struct FName* Action, struct FKey* Button);
	bool STATIC_GetButtonForActionMappingUsingWidget(class UWidget** InWidget, struct FName* Action, struct FKey* Button);
	bool STATIC_GetButtonForActionMapping(struct FName* Action, bool* IsGamepadKey, struct FKey* Button);
	bool STATIC_GetAllButtonsForActionMappingUsingWidget(class UWidget** InWidget, struct FName* Action, TArray<struct FKey>* Buttons);
	bool STATIC_GetAllButtonsForActionMapping(struct FName* Action, bool* IsGamepadKey, TArray<struct FKey>* Buttons);
};


// Class PlatformUMG.PUMG_CanvasPanel
// 0x0000 (0x0130 - 0x0130)
class UPUMG_CanvasPanel : public UCanvasPanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_CanvasPanel");
		return ptr;
	}


	void PlaceWidgetUnder(class UUserWidget** BottomWidget, class UUserWidget** TopWidget);
};


// Class PlatformUMG.PUMG_DataFactory
// 0x0010 (0x0038 - 0x0028)
class UPUMG_DataFactory : public UObject
{
public:
	class APUMG_HUD*                                   MyHUD;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_DataFactory");
		return ptr;
	}


	bool IsLoggedIn();
};


// Class PlatformUMG.PUMG_ChatDataFactory
// 0x00E0 (0x0118 - 0x0038)
class UPUMG_ChatDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnChatMessageReceived;                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChatMessageRead;                                        // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChatChannelJoined;                                      // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnChatChannelLeft;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<int>                                        ChatMessageIds;                                           // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<int>                                        PendingChatMessageIds;                                    // 0x0088(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<int, struct FPUMG_ChatData>                   ChatMessagesById;                                         // 0x0098(0x0050) (ZeroConstructor)
	int                                                LastCreatedMessageId;                                     // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	TArray<int64_t>                                    m_FilteredPlayerIds;                                      // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FPUMG_ChatCommand>                   ChatCommands;                                             // 0x0100(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_ChatDataFactory");
		return ptr;
	}


	void SetMaxMessageCount(int* MaxMessageCount);
	void SendChatToPlayer(struct FString* Message, int64_t* TargetPlayerId);
	void SendChatToChannel(struct FString* Message, EPUMG_ChatChannel* Channel);
	bool RemovePlayerFilter(int64_t* PlayerId);
	bool RemoveChatCommand(struct FString* Command);
	bool RemoveAllChatCommands(class UObject** Target);
	void QueueCheckPendingMessages();
	void MarkMessageAsRead(int* MessageId);
	void ListChatCommands();
	bool IsValidMessage(struct FPUMG_ChatData* Message);
	bool IsPlayerFilteredFromChat(int64_t* PlayerId);
	void HandleCommunicationSettingChanged();
	struct FPUMG_ChatData GetMessage(int* MessageId);
	int GetMaxMessageCount();
	EPCOM_PrivilegeStatus GetChatPrivilegeStatus();
	void GetActiveChatChannels(bool* IncludePersonalChannel, TArray<struct FPUMG_ActiveChatChannelData>* ActiveChatChatChannels);
	int FindChatCommandIndex(struct FString* Command);
	bool ExecuteChatCommandLine(struct FString* CommandLine);
	void CheckPendingMessages();
	void BeginProcessingChatMessage(struct FPUMG_ChatData* Message);
	void AddSystemMessage(struct FText* Message);
	bool AddPlayerFilter(int64_t* PlayerId);
	bool AddChatCommand(struct FString* Command, struct FText* Desc, class UObject** Target, struct FString* Function, struct FString* Alias1, struct FString* Alias2, struct FString* Alias3, struct FString* Alias4);
};


// Class PlatformUMG.PUMG_CollectionDataFactory
// 0x0030 (0x0068 - 0x0038)
class UPUMG_CollectionDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnCollectionAvatarsUpdated;                               // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCollectionAvatarAcquisition;                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FPUMG_AvatarData>                    CollectionAvatars;                                        // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_CollectionDataFactory");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_FriendDataFactory
// 0x00B8 (0x00F0 - 0x0038)
class UPUMG_FriendDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnFriendDataUpdated;                                      // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFriendAddSuccess;                                       // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFriendAddError;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FriendInviteReceived;                                     // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFriendAdded;                                            // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFriendRejected;                                         // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                OnlineFriends;                                            // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalFriends;                                             // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FPUMG_FriendData>                    CachedFriends;                                            // 0x00A0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPUMG_FriendData>                    CachedPendingFriends;                                     // 0x00B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPUMG_FriendData>                    CachedFriendRequests;                                     // 0x00C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	float                                              FriendsListUpdatePollInterval;                            // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	struct FTimerHandle                                FriendsListUpdatePollingTimerHandle;                      // 0x00E0(0x0008)
	bool                                               IsFriendsListUpdatePollingEnabled;                        // 0x00E8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_FriendDataFactory");
		return ptr;
	}


	void UIX_OnRemoveFriend(int64_t* PlayerId);
	void UIX_OnRejectFriendRequest(int64_t* PlayerId);
	void UIX_OnCancelFriendRequest(int64_t* PlayerId);
	void UIX_OnAddFriend(int64_t* PlayerId);
	void UIX_OnAcceptFriendRequest(int64_t* PlayerId);
	void SetEnableFriendsListUpdatePolling(bool* InBool);
	void RequestUpdateFriendsList();
	bool IsCrossplaySocialEnabled();
	void HandleFriendsListUpdatePolling();
	void HandleCrossplaySettingChanged();
	TArray<struct FPUMG_FriendData> GetPendingFriends();
	TArray<struct FPUMG_FriendData> GetFriends();
	TArray<struct FPUMG_FriendData> GetFriendRequests();
	struct FText GetFriendName(int64_t* PlayerId);
	void GetFriendAvatarTexture(struct FPUMG_FriendData* Friend);
	bool GetEnableFriendsListUpdatePolling();
	void FriendRemoveResponse();
	bool CheckAlreadyFriends(struct FString* FriendName);
};


// Class PlatformUMG.GamepadPromptInterface
// 0x0000 (0x0028 - 0x0028)
class UGamepadPromptInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.GamepadPromptInterface");
		return ptr;
	}


	bool UnregisterOnClear();
	void SetPrompt(struct FText* PromptText);
	void ClearPrompt();
};


// Class PlatformUMG.PUMG_GamepadDataFactory
// 0x0050 (0x0088 - 0x0038)
class UPUMG_GamepadDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_GamepadDataFactory");
		return ptr;
	}


	bool UnregisterPromptForButton(struct FKey* Button);
	void SetPromptForGamepadButton(struct FKey* Button, struct FText* PromptText);
	void RemovePromptForGamepadButton(struct FKey* Button);
	bool RegisterPromptWidgetForButton(class UWidget** Widget, struct FKey* Button);
	void ClearAllGamepadPrompts();
};


// Class PlatformUMG.PUMG_LobbyHUD
// 0x0000 (0x0028 - 0x0028)
class UPUMG_LobbyHUD : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_LobbyHUD");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_HUD
// 0x0100 (0x0520 - 0x0420)
class APUMG_HUD : public AHUD
{
public:
	struct FScriptMulticastDelegate                    OnInputStateChanged;                                      // 0x0420(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UPUMG_InputManager*                          _InputManager;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UPUMG_ViewManager*                           _ViewManager;                                             // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UClass*                                      InputManagerClass;                                        // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPUMG_UISoundTheme*                          _SoundTheme;                                              // 0x0448(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0450(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_HUD");
		return ptr;
	}


	void TestHirezLogin(struct FString* user, struct FString* password);
	void TestAutoLogin(int* ControllerId);
	void SortWidgetsForFocus(TArray<class UPUMG_Widget*>* Widgets);
	void ShowSystemTrayNotification(struct FString* popupType);
	void SetUseNewUIFeatures(bool* UseNewFeatures);
	void SetUIFocus();
	void SetNavigationEnabled(bool* Enabled);
	void OnQuit();
	bool OnNavigateBack();
	void OnConfirmQuit();
	class UPUMG_PlayerInfo* NewPlayerInfo();
	bool IsLobbyHUD();
	bool IsCrossplayEnabled();
	void InputStateChangePassthrough(TEnumAsByte<EPGAME_INPUT_STATE>* InputState);
	class UPUMG_ViewManager* GetViewManager();
	class UPUMG_PopupManager* GetPopupManager();
	class APlayerController* GetPlayerControllerOwner();
	class UPUMG_PlayerInfo* GetOrCreatePlayerInfo(int64_t* PlayerId);
	class UPUMG_InputManager* GetInputManager();
	TEnumAsByte<EPGAME_INPUT_STATE> GetCurrentInputState();
	void DisplayGenericPopup(struct FString* sTitle, struct FString* sDesc);
	void DisplayGenericError(struct FString* sDesc);
};


// Class PlatformUMG.PUMG_InputManager
// 0x00A0 (0x00C8 - 0x0028)
class UPUMG_InputManager : public UObject
{
public:
	TMap<class UPUMG_Widget*, struct FPUMG_InputFocusDetails> InputFocusData;                                           // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET
	class UInputComponent*                             _InputComponent;                                          // 0x00A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_InputManager");
		return ptr;
	}


	void HandleModeChange(TEnumAsByte<EPGAME_INPUT_STATE>* Mode);
	void ClearNavInputThrottled();
};


// Class PlatformUMG.PUMG_JsonDataFactory
// 0x0010 (0x0048 - 0x0038)
class UPUMG_JsonDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_JsonDataFactory");
		return ptr;
	}


	void HandleJsonReady(class UPGame_LandingPanelJSONHandler** pHandler);
	void HandleImagesReady(class UPGame_LandingPanelJSONHandler** pHandler);
};


// Class PlatformUMG.PUMG_Loadout
// 0x0078 (0x00A0 - 0x0028)
class UPUMG_Loadout : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnRenamed;                                                // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNumberChanged;                                          // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTypeChanged;                                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnServerUpdate;                                           // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_Loadout");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_LoadoutDataFactory
// 0x0078 (0x00B0 - 0x0038)
class UPUMG_LoadoutDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnLoadoutsInitialized;                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoadoutsUpdatedFromServer;                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoadoutFactoryReadyNoLoadouts;                          // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnLoadoutChanged;                                         // 0x0068(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnLoadoutAdded;                                           // 0x0078(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnLoadoutDeleted;                                         // 0x0088(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
	TArray<class UPUMG_Loadout*>                       Loadouts;                                                 // 0x00A0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_LoadoutDataFactory");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_LoginDataFactory
// 0x0058 (0x0090 - 0x0038)
class UPUMG_LoginDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnLoginUserChanged;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoginStateChanged;                                      // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLoginError;                                             // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnControllerDisconnected;                                 // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_LoginDataFactory");
		return ptr;
	}


	void UpdateControllers();
	void UIX_OnTwoFactorSubmit(struct FString* AuthCode);
	void UIX_OnTwoFactorDecline();
	void UIX_OnSubmitLogin(struct FString* UserName, struct FString* password);
	void UIX_OnSubmitConsoleLogin(int* ControllerId);
	void UIX_OnSubmitAutoLogin(int* ControllerId);
	void UIX_OnPlayerCreate(struct FString* PlayerName);
	void UIX_OnLinkExistingAccount(struct FString* UserName, struct FString* password);
	void UIX_OnLinkDecline();
	void UIX_OnLinkCreateAccount(struct FString* UserName, struct FString* password, struct FString* Email, bool* bAcceptAgeReqs);
	void UIX_OnEulaDecline();
	void UIX_OnEulaAccept();
	void UIX_OnChangeUserAccount();
	void UIX_OnAccountCreate(struct FString* UserName, struct FString* password, struct FString* Email, bool* bAcceptAgeReqs);
	bool ShouldDisplayUsername();
	bool ShouldDisplayDisconnectError();
	void RecordLoginState(EPUMG_LoginState* NewState);
	void LoginEvent_ShowEula();
	void LoginEvent_LoginRequested();
	void LoginEvent_LoggedIn();
	void LoginEvent_Failed(uint32_t* errorMsgId);
	void LoginEvent_CreatePlayer(uint32_t* errorMsgId);
	bool STATIC_LoadEULAFile(struct FString* SaveText);
	void HandleControllerPairingChange(int* ControllerIndex, int* NewUserId, int* OldUserId);
	void HandleControllerConnectionChange(bool* IsConnection, int* UserId, int* ControllerIndex);
	struct FString STATIC_GetVersion();
	bool GetCurrentPlayerName(struct FText* NameText);
	EPUMG_LoginState GetCurrentLoginState();
};


// Class PlatformUMG.PUMG_PartyDataFactory
// 0x0120 (0x0158 - 0x0038)
class UPUMG_PartyDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnPartyDataUpdated;                                       // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyLocalPlayerLeft;                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyLocalPlayerPromoted;                               // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMemberPromoted;                                    // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyDisbanded;                                         // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMemberDataUpdated;                                 // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMemberDataAdded;                                   // 0x0098(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyMemberRemoved;                                     // 0x00A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyInvitationError;                                   // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyInvitationSent;                                    // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyInvitationReceived;                                // 0x00D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyInvitationAccepted;                                // 0x00E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyInvitationRejected;                                // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPartyInvitationExpired;                                 // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
	TArray<struct FPUMG_PartyMemberData>               PartyMembers;                                             // 0x0128(0x0010) (ZeroConstructor, Transient)
	class UPUMG_PlayerInfo*                            PartyInviter;                                             // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0140(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PartyDataFactory");
		return ptr;
	}


	void UIX_PromoteMemberToLeader(int64_t* PlayerId);
	void UIX_LeaveParty();
	void UIX_KickMemberFromParty(int64_t* PlayerId);
	bool UIX_InviteMemberToParty(int64_t* PlayerId);
	void UIX_GiveInvitePermission(int64_t* PlayerId);
	void UIX_DisbandParty();
	void UIX_DenyPartyInvitation();
	void UIX_AcceptPartyInvitation();
	void PartyPromoteResponse();
	void PartyLeaveResponse();
	void PartyKickResponse();
	void PartyDisbandResponse();
	bool IsPlayerInParty(int64_t* PlayerId);
	bool IsPending();
	bool IsPartyMaxed();
	bool IsLeader();
	bool IsInParty();
	void HandleAppResume();
	void HandleAppReactivated();
	int GetQueueId();
	struct FText GetPartyMemeberName(int64_t* PlayerId);
	TArray<struct FPUMG_PartyMemberData> GetPartyMembers();
	struct FPUMG_PartyMemberData GetPartyMemberByID(int64_t* PlayerId);
	class UPUMG_PlayerInfo* GetPartyInviter();
	EPUMG_PartyInviteRightsMode GetPartyInviteMode();
	int GetMaxPartyMembers();
	bool CheckPartyMemberIsLeader(int64_t* PlayerId);
};


// Class PlatformUMG.PUMG_PlayerDataFactory
// 0x0088 (0x00C0 - 0x0038)
class UPUMG_PlayerDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnPlayerDataChanged;                                      // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlayerRankChanged;                                      // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCurrencyAcquisition;                                    // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCrossplayChanged;                                       // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int64_t                                            PlayerId;                                                 // 0x0078(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                Level;                                                    // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AvatarId;                                                 // 0x0094(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LastMMR;                                                  // 0x0098(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentMMR;                                               // 0x009C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BestMMR;                                                  // 0x00A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentWinRank;                                           // 0x00A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PreviousWinRank;                                          // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentWinPeak;                                           // 0x00AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PreviousWinPeak;                                          // 0x00B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrentWinStreak;                                         // 0x00B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PreviousWinStreak;                                        // 0x00B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PlayerDataFactory");
		return ptr;
	}


	void OnSelectAvatar(int* ItemId);
	void GetAvatarIcon();
};


// Class PlatformUMG.PUMG_PlayerInfo
// 0x0048 (0x0070 - 0x0028)
class UPUMG_PlayerInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PlayerInfo");
		return ptr;
	}


	void SetIgnored(bool* Ignored);
	bool IsIgnored();
	int64_t GetPlayerId();
	struct FText GetName();
	struct FString GetMctsName();
	int GetAvatarItemId();
};


// Class PlatformUMG.PUMG_PlayerInventoryHelper
// 0x00F0 (0x0118 - 0x0028)
class UPUMG_PlayerInventoryHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PlayerInventoryHelper");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_PlayerWhoDataFactory
// 0x0028 (0x0060 - 0x0038)
class UPUMG_PlayerWhoDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnSearchByNameResultsUpdated;                             // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UPUMG_PlayerInfo*>                    CachedSearchByNameResults;                                // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PlayerWhoDataFactory");
		return ptr;
	}


	void UIX_SearchByNameForPlayer(struct FString* PlayerName, bool* bIncludeOfflinePlayers);
	TArray<class UPUMG_PlayerInfo*> GetSearchByNameResults();
};


// Class PlatformUMG.PUMG_Widget
// 0x0258 (0x0488 - 0x0230)
class UPUMG_Widget : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnGamepadHovered;                                         // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseEntered;                                           // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNavigateBack;                                           // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTextureLoadComplete;                                    // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNavigateUpFailed;                                       // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNavigateDownFailed;                                     // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNavigateLeftFailed;                                     // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNavigateRightFailed;                                    // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusGroupNavigateUpFailed;                             // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusGroupNavigateDownFailed;                           // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusGroupNavigateLeftFailed;                           // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFocusGroupNavigateRightFailed;                          // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHideSequenceFinished;                                   // 0x02F0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnShowSequenceFinished;                                   // 0x0300(0x0010) (ZeroConstructor, InstancedReference)
	TWeakObjectPtr<class APUMG_HUD>                    MyHUD;                                                    // 0x0310(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CloseOnLogout;                                            // 0x0318(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsComponent;                                              // 0x0319(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               StartsHidden;                                             // 0x031A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UsesBlocker;                                              // 0x031B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               BlockerClickToClose;                                      // 0x031C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x031D(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x031D(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PlatformUMG.PUMG_Widget.LoadedTexture
	unsigned char                                      UnknownData02[0x13C];                                     // 0x0348(0x013C) MISSED OFFSET
	int                                                StaticFocusPriority;                                      // 0x0484(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_Widget");
		return ptr;
	}


	void UnregisterWidgetFromInputManager(class UWidget** Widget);
	void UnregisterFocusGroup(int* FocusGroup);
	void UninitializeWidget();
	bool SwapViewRoutePath(struct FString* RoutePath, struct FName* SwapTargetRoute, bool* ForceTransition);
	bool SwapViewRoute(struct FName* RouteName, struct FName* SwapTargetRoute, bool* ForceTransition);
	void StartShowSequence(struct FName* FromRoute, struct FName* ToRoute);
	void StartHideSequence(struct FName* FromRoute, struct FName* ToRoute);
	void ShowWidget();
	void SetFocusToThis();
	void SetFocusToGroup(int* FocusGroup);
	void SetDefaultFocusForGroup(class UWidget** Widget, int* FocusGroup);
	bool ResetViewRouteStack();
	bool RemoveTopViewRoute(bool* ForceTransition);
	void RegisterWidgetToInputManager(class UWidget** Widget, int* FocusGroup, class UWidget** Up, class UWidget** Down, class UWidget** Left, class UWidget** Right);
	void OnShown();
	void OnHide();
	void NavigateUpFailure();
	void NavigateRightFailure();
	void NavigateLeftFailure();
	void NavigateDownFailure();
	bool NavigateConfirmPressed();
	void NavigateConfirmCancelled();
	bool NavigateConfirm();
	bool NavigateBackPressed();
	void NavigateBackCancelled();
	bool NavigateBack();
	bool IsFocusEnabled();
	void InitializeWidgetNavigation();
	void InitializeWidgetButtonListeners();
	void InitializeWidget(class APUMG_HUD** HUD);
	void HideWidget();
	bool GoToViewRoute(struct FName* RouteName, bool* ForceTransition);
	class UPUMG_ViewManager* GetViewManager();
	bool GetUsesBlocker();
	bool GetPendingRouteData(struct FName* RouteName, class UObject** Data);
	struct FGeometry GetGeometryFromLastTick();
	bool GetCurrentFocusGroup(int* OutFocusGroup);
	class UWidget* GetCurrentFocusForGroup(int* FocusGroup);
	void GamepadUnhover();
	void GamepadHover();
	struct FEventReply GamepadButtonUp(struct FKey* Button);
	struct FEventReply GamepadButtonDown(struct FKey* Button);
	void FocusGroupNavigateUpFailure(int* FocusGroup);
	void FocusGroupNavigateRightFailure(int* FocusGroup);
	void FocusGroupNavigateLeftFailure(int* FocusGroup);
	void FocusGroupNavigateDownFailure(int* FocusGroup);
	bool ExplicitNavigateUp();
	bool ExplicitNavigateRight();
	bool ExplicitNavigateLeft();
	bool ExplicitNavigateDown();
	void DisplayGenericPopup(struct FString* sTitle, struct FString* sDesc);
	void DisplayGenericError(struct FString* sDesc);
	void ClearNavigationInputThrottle();
	bool CanCloseOnLogout();
	void CallOnShowSequenceFinished();
	void CallOnHideSequenceFinished();
	void BindToInputManager(int* DefaultFocusGroup);
	void AsyncLoadTexture2D();
	bool AddViewRoutePath(struct FString* RoutePath, bool* ClearRouteStack, bool* ForceTransition);
	bool AddViewRoute(struct FName* RouteName, bool* ClearRouteStack, bool* ForceTransition, class UObject** Data);
};


// Class PlatformUMG.PUMG_PopupManager
// 0x0108 (0x0590 - 0x0488)
class UPUMG_PopupManager : public UPUMG_Widget
{
public:
	TArray<struct FPUMG_PopupConfig>                   PopupQueue;                                               // 0x0488(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                m_nPopupId;                                               // 0x0498(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xDC];                                      // 0x049C(0x00DC) MISSED OFFSET
	struct FText                                       CommittedText;                                            // 0x0578(0x0018) (BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PopupManager");
		return ptr;
	}


	void ShowPopup(struct FPUMG_PopupConfig* popupData);
	void RemovePopup(int* PopupId);
	void OnPopupResponse(int* nPopupId, int* nResponseIndex);
	void OnPopupCanceled();
	void NextPopup();
	void HidePopup();
	void CloseUnimportantPopups();
	void CloseAllPopups();
	int AddPopup(struct FPUMG_PopupConfig* popupData);
};


// Class PlatformUMG.PUMG_QueueDataFactory
// 0x0080 (0x00B8 - 0x0038)
class UPUMG_QueueDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnQueueJoined;                                            // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQueueLeft;                                              // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQueueStatusChange;                                      // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnQueueDataUpdated;                                       // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMatchStatusUpdatedError;                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<int>                                        QueueIds;                                                 // 0x0088(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET
	float                                              QueueUpdatePollInterval;                                  // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	struct FTimerHandle                                QueueUpdateTimerHandle;                                   // 0x00B0(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_QueueDataFactory");
		return ptr;
	}


	bool LeaveQueue();
	bool JoinQueue(int* QueueId);
	bool IsQueueActive(int* QueueId);
	bool STATIC_IsInQueue();
	bool STATIC_IsInGame();
	bool STATIC_IsInCustomMatch();
	TArray<int> GetQueueIds();
	EPUMG_MatchStatus STATIC_GetCurrentQueueMatchState();
	bool STATIC_GetCurrentQueueId(int* QueueId);
	bool STATIC_GetCurrentMatchId(int* MatchID);
	bool GetBaseQueueInfoById(int* QueueId, struct FPUMG_ClientQueueInfo* InClientQueueInfo);
	bool CanQueue();
};


// Class PlatformUMG.PUMG_SettingsDataFactory
// 0x00A0 (0x00D8 - 0x0038)
class UPUMG_SettingsDataFactory : public UPUMG_DataFactory
{
public:
	struct FScriptMulticastDelegate                    OnPopulateUserSettings;                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPopulateUserBindings;                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPopulateUserGPBindings;                                 // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostLogin;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostLogoff;                                             // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSettingValueChanged;                                    // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0098(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_SettingsDataFactory");
		return ptr;
	}


	bool OnSettingChanged(struct FName* SettingId, int* SettingValue);
	void InitSettingsForPlayer();
};


// Class PlatformUMG.PUMG_StorePurchaseRequest
// 0x0028 (0x0050 - 0x0028)
class UPUMG_StorePurchaseRequest : public UObject
{
public:
	int                                                LootTableItemId;                                          // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                VendorId;                                                 // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PriceInUI;                                                // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrencyType;                                             // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LocationId;                                               // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CouponId;                                                 // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GiftPlayerId;                                             // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GiftMsgIndex;                                             // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AnonymousGift;                                            // 0x004C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_StorePurchaseRequest");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_PortalOffer
// 0x0090 (0x00B8 - 0x0028)
class UPUMG_PortalOffer : public UObject
{
public:
	struct FString                                     SKU;                                                      // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              cost;                                                     // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FText                                       DisplayCost;                                              // 0x0040(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       CurrencyCode;                                             // 0x0058(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Name;                                                     // 0x0070(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Desc;                                                     // 0x0088(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ShortDesc;                                                // 0x00A0(0x0018) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PortalOffer");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_StoreItemPrice
// 0x0010 (0x0038 - 0x0028)
class UPUMG_StoreItemPrice : public UObject
{
public:
	int                                                PreSalePrice;                                             // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Price;                                                    // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CurrencyType;                                             // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_StoreItemPrice");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_StoreItem
// 0x00A8 (0x00D0 - 0x0028)
class UPUMG_StoreItem : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPriceSetDirty;                                          // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TWeakObjectPtr<class UPUMG_StoreItemHelper>        pItemHelper;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	TMap<int, class UPUMG_StoreItemPrice*>             Prices;                                                   // 0x0058(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x28];                                      // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PlatformUMG.PUMG_StoreItem.InventoryItem

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_StoreItem");
		return ptr;
	}


	void UIX_ShowPurchaseConfirmation(class UPUMG_StoreItemPrice** pPrice);
	void PurchaseFromPortal();
	bool IsRented(int64_t* PlayerId);
	bool IsRecipeFulfilled(int64_t* PlayerId);
	bool IsOwned(int64_t* PlayerId);
	bool IsActive();
	bool HasPortalOffer();
	int GetType();
	int GetSubType();
	int GetSortOrder();
	void GetSoftItemIcon();
	int GetQuantityOwned(int64_t* PlayerId);
	class UPUMG_StorePurchaseRequest* GetPurchaseRequest();
	TMap<int, class UPUMG_StoreItemPrice*> GetPrices();
	class UPUMG_StoreItemPrice* GetPrice(int* nCurrencyType);
	class UPUMG_PortalOffer* GetPortalOffer();
	struct FText GetName();
	int GetLootQuantity();
	int GetLootId();
	void GetInventoryItem();
	struct FText GetDescription();
	void ConfirmGotoPortalOffer();
};


// Class PlatformUMG.PUMG_XpTable
// 0x0008 (0x0030 - 0x0028)
class UPUMG_XpTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_XpTable");
		return ptr;
	}


	int64_t GetXpAtLevel(int* XpLevel);
	int64_t GetXpAtIndex(int* Index);
	int GetMinXpLevel();
	int GetLevelCount();
	int GetLevelAtXp(int64_t* XpPoints);
	int64_t GetId();
};


// Class PlatformUMG.PUMG_StoreItemHelper
// 0x0160 (0x0188 - 0x0028)
class UPUMG_StoreItemHelper : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPurchaseItem;                                           // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPurchasePortalItem;                                     // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotEnoughCurrency;                                      // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReceiveVendor;                                          // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReceiveXpTables;                                        // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPortalOffersReceived;                                   // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	TMap<int, class UPUMG_StoreItem*>                  StoreItems;                                               // 0x0090(0x0050) (ZeroConstructor, Transient)
	TMap<int64_t, class UPUMG_XpTable*>                XpTables;                                                 // 0x00E0(0x0050) (ZeroConstructor, Transient)
	bool                                               XpTablesLoaded;                                           // 0x0130(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	TMap<int64_t, class UPUMG_PortalOffer*>            PortalOffers;                                             // 0x0138(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_StoreItemHelper");
		return ptr;
	}


	void UIX_RedeemCode(struct FString* Code);
	void UIX_CompletePurchaseItem(class UPUMG_StorePurchaseRequest** PurchaseRequest);
	int RequestVendorData(TArray<int>* VendorIds);
	class UPUMG_XpTable* GetXpTable(int64_t* XpTableId);
	TArray<class UPUMG_StoreItem*> GetStoreItemsForVendor(int* nVendorId, bool* bIncludeInactiveItems);
	class UPUMG_StoreItem* GetStoreItemForVendorByItemId(int* nVendorId, int* nItemId);
	class UPUMG_StoreItem* GetStoreItemForVendor(int* nVendorId, int* nLootItemId);
	class UPUMG_StoreItem* GetStoreItem(int* LootId);
	class UPUMG_PortalOffer* GetPortalOffer(int64_t* LootId);
	void ExitInGameStoreUI();
	void EnterInGameStoreUI();
	bool DoesPortalHaveOffers();
	bool AreXpTablesLoaded();
};


// Class PlatformUMG.PUMG_UISoundTheme
// 0x0050 (0x0078 - 0x0028)
class UPUMG_UISoundTheme : public UObject
{
public:
	TMap<struct FName, struct FPUMG_SoundThemeEventMapping> SoundEventBindings;                                       // 0x0028(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_UISoundTheme");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_ViewManager
// 0x0160 (0x0188 - 0x0028)
class UPUMG_ViewManager : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnViewStateChanged;                                       // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnViewStateChangeStarted;                                 // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class APUMG_HUD*                                   HudRef;                                                   // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  Routes;                                                   // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                DisplayTarget;                                            // 0x0058(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                PopupDisplayTarget;                                       // 0x0060(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	EViewManagerTransitionState                        CurrentTransitionState;                                   // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET
	TArray<struct FName>                               CurrentRouteStack;                                        // 0x0070(0x0010) (ZeroConstructor)
	TArray<struct FName>                               CurrentTransitionRouteStack;                              // 0x0080(0x0010) (ZeroConstructor)
	TMap<struct FName, class UPUMG_Widget*>            StickyWidgetMap;                                          // 0x0090(0x0050) (ExportObject, ZeroConstructor)
	TMap<struct FName, class UPUMG_Widget*>            RouteWidgetMap;                                           // 0x00E0(0x0050) (ExportObject, ZeroConstructor)
	struct FName                                       DefaultRoute;                                             // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, class UObject*>                 PendingRouteData;                                         // 0x0138(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_ViewManager");
		return ptr;
	}


	bool SwapRouteWithRoutePath(struct FString* RoutePath, struct FName* SwapTargetRoute, bool* ForceTransition);
	bool SwapRoute(struct FName* RouteName, struct FName* SwapTargetRoute, bool* ForceTransition);
	void SetRoutes(class UDataTable** RouteTable);
	bool ResetRouteStack();
	bool ReplaceRoutePath(struct FString* RoutePath, bool* ForceTransition);
	bool ReplaceRoute(struct FName* RouteName, bool* ForceTransition, class UObject** Data);
	void RegisterStickyWidget(struct FName* RegisterName, class UPUMG_Widget** Widget);
	bool PushRoutePath(struct FString* RoutePath, bool* ForceTransition);
	bool PushRoute(struct FName* RouteName, bool* ForceTransition, class UObject** Data);
	bool PopRoute(bool* ForceTransition);
	bool IsRouteValid(struct FName* RouteName);
	void GoToRoute_InternalShowStep();
	void GoToRoute_HandleShowFinished(class UPUMG_Widget** Widget);
	void GoToRoute_HandleHideFinished(class UPUMG_Widget** Widget);
	bool GoToRoute(struct FName* NextRouteName, bool* ForceTransition);
	bool GetPendingRouteData(struct FName* RouteName, class UObject** Data);
	EViewManagerTransitionState GetCurrentTransitionState();
	TArray<struct FName> GetCurrentTransitionRouteStack();
	struct FName GetCurrentTransitionRoute();
	TArray<struct FName> GetCurrentRouteStack();
	struct FName GetCurrentRoute();
	void ClearPendingTransition();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
