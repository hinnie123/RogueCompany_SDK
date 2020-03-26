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

// Function PlatformUMG.PUMG_AsyncImage.ShowWaitingWidget
struct UPUMG_AsyncImage_ShowWaitingWidget_Params
{
};

// Function PlatformUMG.PUMG_AsyncImage.HideWaitingWidget
struct UPUMG_AsyncImage_HideWaitingWidget_Params
{
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.IsWithEditor
struct UPUMG_BlueprintFunctionLibrary_IsWithEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetUMG_DPI_Scaling
struct UPUMG_BlueprintFunctionLibrary_GetUMG_DPI_Scaling_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetKeyName
struct UPUMG_BlueprintFunctionLibrary_GetKeyName_Params
{
	struct FKey*                                       Key;                                                      // (Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadConfirmButton
struct UPUMG_BlueprintFunctionLibrary_GetGamepadConfirmButton_Params
{
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadCancelButton
struct UPUMG_BlueprintFunctionLibrary_GetGamepadCancelButton_Params
{
	struct FKey                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadButtonForAction
struct UPUMG_BlueprintFunctionLibrary_GetGamepadButtonForAction_Params
{
	struct FName*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Button;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMappingUsingWidget
struct UPUMG_BlueprintFunctionLibrary_GetButtonForActionMappingUsingWidget_Params
{
	class UWidget**                                    InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Button;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMapping
struct UPUMG_BlueprintFunctionLibrary_GetButtonForActionMapping_Params
{
	struct FName*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKey                                        Button;                                                   // (Parm, OutParm)
	bool*                                              IsGamepadKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMappingUsingWidget
struct UPUMG_BlueprintFunctionLibrary_GetAllButtonsForActionMappingUsingWidget_Params
{
	class UWidget**                                    InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                Buttons;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMapping
struct UPUMG_BlueprintFunctionLibrary_GetAllButtonsForActionMapping_Params
{
	struct FName*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                Buttons;                                                  // (Parm, OutParm, ZeroConstructor)
	bool*                                              IsGamepadKey;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_CanvasPanel.PlaceWidgetUnder
struct UPUMG_CanvasPanel_PlaceWidgetUnder_Params
{
	class UUserWidget**                                BottomWidget;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUserWidget**                                TopWidget;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlatformUMG.PUMG_DataFactory.IsLoggedIn
struct UPUMG_DataFactory_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.SetMaxMessageCount
struct UPUMG_ChatDataFactory_SetMaxMessageCount_Params
{
	int*                                               MaxMessageCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.SendChatToPlayer
struct UPUMG_ChatDataFactory_SendChatToPlayer_Params
{
	struct FString*                                    Message;                                                  // (Parm, ZeroConstructor)
	int64_t*                                           TargetPlayerId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.SendChatToChannel
struct UPUMG_ChatDataFactory_SendChatToChannel_Params
{
	struct FString*                                    Message;                                                  // (Parm, ZeroConstructor)
	EPUMG_ChatChannel*                                 Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.RemovePlayerFilter
struct UPUMG_ChatDataFactory_RemovePlayerFilter_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.RemoveChatCommand
struct UPUMG_ChatDataFactory_RemoveChatCommand_Params
{
	struct FString*                                    Command;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.RemoveAllChatCommands
struct UPUMG_ChatDataFactory_RemoveAllChatCommands_Params
{
	class UObject**                                    Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.QueueCheckPendingMessages
struct UPUMG_ChatDataFactory_QueueCheckPendingMessages_Params
{
};

// Function PlatformUMG.PUMG_ChatDataFactory.MarkMessageAsRead
struct UPUMG_ChatDataFactory_MarkMessageAsRead_Params
{
	int*                                               MessageId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.ListChatCommands
struct UPUMG_ChatDataFactory_ListChatCommands_Params
{
};

// Function PlatformUMG.PUMG_ChatDataFactory.IsValidMessage
struct UPUMG_ChatDataFactory_IsValidMessage_Params
{
	struct FPUMG_ChatData*                             Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.IsPlayerFilteredFromChat
struct UPUMG_ChatDataFactory_IsPlayerFilteredFromChat_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.HandleCommunicationSettingChanged
struct UPUMG_ChatDataFactory_HandleCommunicationSettingChanged_Params
{
};

// Function PlatformUMG.PUMG_ChatDataFactory.GetMessage
struct UPUMG_ChatDataFactory_GetMessage_Params
{
	int*                                               MessageId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPUMG_ChatData                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformUMG.PUMG_ChatDataFactory.GetMaxMessageCount
struct UPUMG_ChatDataFactory_GetMaxMessageCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.GetChatPrivilegeStatus
struct UPUMG_ChatDataFactory_GetChatPrivilegeStatus_Params
{
	EPCOM_PrivilegeStatus                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.GetActiveChatChannels
struct UPUMG_ChatDataFactory_GetActiveChatChannels_Params
{
	bool*                                              IncludePersonalChannel;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPUMG_ActiveChatChannelData>         ActiveChatChatChannels;                                   // (Parm, OutParm, ZeroConstructor)
};

// Function PlatformUMG.PUMG_ChatDataFactory.FindChatCommandIndex
struct UPUMG_ChatDataFactory_FindChatCommandIndex_Params
{
	struct FString*                                    Command;                                                  // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.ExecuteChatCommandLine
struct UPUMG_ChatDataFactory_ExecuteChatCommandLine_Params
{
	struct FString*                                    CommandLine;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.CheckPendingMessages
struct UPUMG_ChatDataFactory_CheckPendingMessages_Params
{
};

// Function PlatformUMG.PUMG_ChatDataFactory.BeginProcessingChatMessage
struct UPUMG_ChatDataFactory_BeginProcessingChatMessage_Params
{
	struct FPUMG_ChatData                              Message;                                                  // (Parm, OutParm)
};

// Function PlatformUMG.PUMG_ChatDataFactory.AddSystemMessage
struct UPUMG_ChatDataFactory_AddSystemMessage_Params
{
	struct FText*                                      Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlatformUMG.PUMG_ChatDataFactory.AddPlayerFilter
struct UPUMG_ChatDataFactory_AddPlayerFilter_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ChatDataFactory.AddChatCommand
struct UPUMG_ChatDataFactory_AddChatCommand_Params
{
	struct FString*                                    Command;                                                  // (Parm, ZeroConstructor)
	struct FText*                                      Desc;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject**                                    Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    Function;                                                 // (Parm, ZeroConstructor)
	struct FString*                                    Alias1;                                                   // (Parm, ZeroConstructor)
	struct FString*                                    Alias2;                                                   // (Parm, ZeroConstructor)
	struct FString*                                    Alias3;                                                   // (Parm, ZeroConstructor)
	struct FString*                                    Alias4;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRemoveFriend
struct UPUMG_FriendDataFactory_UIX_OnRemoveFriend_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRejectFriendRequest
struct UPUMG_FriendDataFactory_UIX_OnRejectFriendRequest_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnCancelFriendRequest
struct UPUMG_FriendDataFactory_UIX_OnCancelFriendRequest_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAddFriend
struct UPUMG_FriendDataFactory_UIX_OnAddFriend_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAcceptFriendRequest
struct UPUMG_FriendDataFactory_UIX_OnAcceptFriendRequest_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_FriendDataFactory.SetEnableFriendsListUpdatePolling
struct UPUMG_FriendDataFactory_SetEnableFriendsListUpdatePolling_Params
{
	bool*                                              InBool;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_FriendDataFactory.RequestUpdateFriendsList
struct UPUMG_FriendDataFactory_RequestUpdateFriendsList_Params
{
};

// Function PlatformUMG.PUMG_FriendDataFactory.IsCrossplaySocialEnabled
struct UPUMG_FriendDataFactory_IsCrossplaySocialEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_FriendDataFactory.HandleFriendsListUpdatePolling
struct UPUMG_FriendDataFactory_HandleFriendsListUpdatePolling_Params
{
};

// Function PlatformUMG.PUMG_FriendDataFactory.HandleCrossplaySettingChanged
struct UPUMG_FriendDataFactory_HandleCrossplaySettingChanged_Params
{
};

// Function PlatformUMG.PUMG_FriendDataFactory.GetPendingFriends
struct UPUMG_FriendDataFactory_GetPendingFriends_Params
{
	TArray<struct FPUMG_FriendData>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformUMG.PUMG_FriendDataFactory.GetFriends
struct UPUMG_FriendDataFactory_GetFriends_Params
{
	TArray<struct FPUMG_FriendData>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformUMG.PUMG_FriendDataFactory.GetFriendRequests
struct UPUMG_FriendDataFactory_GetFriendRequests_Params
{
	TArray<struct FPUMG_FriendData>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformUMG.PUMG_FriendDataFactory.GetFriendName
struct UPUMG_FriendDataFactory_GetFriendName_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformUMG.PUMG_FriendDataFactory.GetFriendAvatarTexture
struct UPUMG_FriendDataFactory_GetFriendAvatarTexture_Params
{
	struct FPUMG_FriendData*                           Friend;                                                   // (Parm)
};

// Function PlatformUMG.PUMG_FriendDataFactory.GetEnableFriendsListUpdatePolling
struct UPUMG_FriendDataFactory_GetEnableFriendsListUpdatePolling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_FriendDataFactory.FriendRemoveResponse
struct UPUMG_FriendDataFactory_FriendRemoveResponse_Params
{
};

// Function PlatformUMG.PUMG_FriendDataFactory.CheckAlreadyFriends
struct UPUMG_FriendDataFactory_CheckAlreadyFriends_Params
{
	struct FString*                                    FriendName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.GamepadPromptInterface.UnregisterOnClear
struct UGamepadPromptInterface_UnregisterOnClear_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.GamepadPromptInterface.SetPrompt
struct UGamepadPromptInterface_SetPrompt_Params
{
	struct FText*                                      PromptText;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlatformUMG.GamepadPromptInterface.ClearPrompt
struct UGamepadPromptInterface_ClearPrompt_Params
{
};

// Function PlatformUMG.PUMG_GamepadDataFactory.UnregisterPromptForButton
struct UPUMG_GamepadDataFactory_UnregisterPromptForButton_Params
{
	struct FKey*                                       Button;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_GamepadDataFactory.SetPromptForGamepadButton
struct UPUMG_GamepadDataFactory_SetPromptForGamepadButton_Params
{
	struct FKey*                                       Button;                                                   // (Parm)
	struct FText*                                      PromptText;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlatformUMG.PUMG_GamepadDataFactory.RemovePromptForGamepadButton
struct UPUMG_GamepadDataFactory_RemovePromptForGamepadButton_Params
{
	struct FKey*                                       Button;                                                   // (Parm)
};

// Function PlatformUMG.PUMG_GamepadDataFactory.RegisterPromptWidgetForButton
struct UPUMG_GamepadDataFactory_RegisterPromptWidgetForButton_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKey*                                       Button;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_GamepadDataFactory.ClearAllGamepadPrompts
struct UPUMG_GamepadDataFactory_ClearAllGamepadPrompts_Params
{
};

// Function PlatformUMG.PUMG_HUD.TestHirezLogin
struct APUMG_HUD_TestHirezLogin_Params
{
	struct FString*                                    user;                                                     // (Parm, ZeroConstructor)
	struct FString*                                    password;                                                 // (Parm, ZeroConstructor)
};

// Function PlatformUMG.PUMG_HUD.TestAutoLogin
struct APUMG_HUD_TestAutoLogin_Params
{
	int*                                               ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.SortWidgetsForFocus
struct APUMG_HUD_SortWidgetsForFocus_Params
{
	TArray<class UPUMG_Widget*>                        Widgets;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlatformUMG.PUMG_HUD.ShowSystemTrayNotification
struct APUMG_HUD_ShowSystemTrayNotification_Params
{
	struct FString*                                    popupType;                                                // (Parm, ZeroConstructor)
};

// Function PlatformUMG.PUMG_HUD.SetUseNewUIFeatures
struct APUMG_HUD_SetUseNewUIFeatures_Params
{
	bool*                                              UseNewFeatures;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.SetUIFocus
struct APUMG_HUD_SetUIFocus_Params
{
};

// Function PlatformUMG.PUMG_HUD.SetNavigationEnabled
struct APUMG_HUD_SetNavigationEnabled_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.OnQuit
struct APUMG_HUD_OnQuit_Params
{
};

// Function PlatformUMG.PUMG_HUD.OnNavigateBack
struct APUMG_HUD_OnNavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.OnConfirmQuit
struct APUMG_HUD_OnConfirmQuit_Params
{
};

// Function PlatformUMG.PUMG_HUD.NewPlayerInfo
struct APUMG_HUD_NewPlayerInfo_Params
{
	class UPUMG_PlayerInfo*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.IsLobbyHUD
struct APUMG_HUD_IsLobbyHUD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.IsCrossplayEnabled
struct APUMG_HUD_IsCrossplayEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.InputStateChangePassthrough
struct APUMG_HUD_InputStateChangePassthrough_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.GetViewManager
struct APUMG_HUD_GetViewManager_Params
{
	class UPUMG_ViewManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.GetPopupManager
struct APUMG_HUD_GetPopupManager_Params
{
	class UPUMG_PopupManager*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.GetPlayerControllerOwner
struct APUMG_HUD_GetPlayerControllerOwner_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.GetOrCreatePlayerInfo
struct APUMG_HUD_GetOrCreatePlayerInfo_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_PlayerInfo*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.GetInputManager
struct APUMG_HUD_GetInputManager_Params
{
	class UPUMG_InputManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.GetCurrentInputState
struct APUMG_HUD_GetCurrentInputState_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_HUD.DisplayGenericPopup
struct APUMG_HUD_DisplayGenericPopup_Params
{
	struct FString*                                    sTitle;                                                   // (Parm, ZeroConstructor)
	struct FString*                                    sDesc;                                                    // (Parm, ZeroConstructor)
};

// Function PlatformUMG.PUMG_HUD.DisplayGenericError
struct APUMG_HUD_DisplayGenericError_Params
{
	struct FString*                                    sDesc;                                                    // (Parm, ZeroConstructor)
};

// Function PlatformUMG.PUMG_InputManager.HandleModeChange
struct UPUMG_InputManager_HandleModeChange_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_InputManager.ClearNavInputThrottled
struct UPUMG_InputManager_ClearNavInputThrottled_Params
{
};

// Function PlatformUMG.PUMG_JsonDataFactory.HandleJsonReady
struct UPUMG_JsonDataFactory_HandleJsonReady_Params
{
	class UPGame_LandingPanelJSONHandler**             pHandler;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_JsonDataFactory.HandleImagesReady
struct UPUMG_JsonDataFactory_HandleImagesReady_Params
{
	class UPGame_LandingPanelJSONHandler**             pHandler;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UpdateControllers
struct UPUMG_LoginDataFactory_UpdateControllers_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorSubmit
struct UPUMG_LoginDataFactory_UIX_OnTwoFactorSubmit_Params
{
	struct FString*                                    AuthCode;                                                 // (Parm, ZeroConstructor)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorDecline
struct UPUMG_LoginDataFactory_UIX_OnTwoFactorDecline_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitLogin
struct UPUMG_LoginDataFactory_UIX_OnSubmitLogin_Params
{
	struct FString*                                    UserName;                                                 // (Parm, ZeroConstructor)
	struct FString*                                    password;                                                 // (Parm, ZeroConstructor)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitConsoleLogin
struct UPUMG_LoginDataFactory_UIX_OnSubmitConsoleLogin_Params
{
	int*                                               ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitAutoLogin
struct UPUMG_LoginDataFactory_UIX_OnSubmitAutoLogin_Params
{
	int*                                               ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnPlayerCreate
struct UPUMG_LoginDataFactory_UIX_OnPlayerCreate_Params
{
	struct FString*                                    PlayerName;                                               // (Parm, ZeroConstructor)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkExistingAccount
struct UPUMG_LoginDataFactory_UIX_OnLinkExistingAccount_Params
{
	struct FString*                                    UserName;                                                 // (Parm, ZeroConstructor)
	struct FString*                                    password;                                                 // (Parm, ZeroConstructor)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkDecline
struct UPUMG_LoginDataFactory_UIX_OnLinkDecline_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkCreateAccount
struct UPUMG_LoginDataFactory_UIX_OnLinkCreateAccount_Params
{
	struct FString*                                    UserName;                                                 // (Parm, ZeroConstructor)
	struct FString*                                    password;                                                 // (Parm, ZeroConstructor)
	struct FString*                                    Email;                                                    // (Parm, ZeroConstructor)
	bool*                                              bAcceptAgeReqs;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaDecline
struct UPUMG_LoginDataFactory_UIX_OnEulaDecline_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaAccept
struct UPUMG_LoginDataFactory_UIX_OnEulaAccept_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnChangeUserAccount
struct UPUMG_LoginDataFactory_UIX_OnChangeUserAccount_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnAccountCreate
struct UPUMG_LoginDataFactory_UIX_OnAccountCreate_Params
{
	struct FString*                                    UserName;                                                 // (Parm, ZeroConstructor)
	struct FString*                                    password;                                                 // (Parm, ZeroConstructor)
	struct FString*                                    Email;                                                    // (Parm, ZeroConstructor)
	bool*                                              bAcceptAgeReqs;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayUsername
struct UPUMG_LoginDataFactory_ShouldDisplayUsername_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayDisconnectError
struct UPUMG_LoginDataFactory_ShouldDisplayDisconnectError_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.RecordLoginState
struct UPUMG_LoginDataFactory_RecordLoginState_Params
{
	EPUMG_LoginState*                                  NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_ShowEula
struct UPUMG_LoginDataFactory_LoginEvent_ShowEula_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoginRequested
struct UPUMG_LoginDataFactory_LoginEvent_LoginRequested_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoggedIn
struct UPUMG_LoginDataFactory_LoginEvent_LoggedIn_Params
{
};

// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_Failed
struct UPUMG_LoginDataFactory_LoginEvent_Failed_Params
{
	uint32_t*                                          errorMsgId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_CreatePlayer
struct UPUMG_LoginDataFactory_LoginEvent_CreatePlayer_Params
{
	uint32_t*                                          errorMsgId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.LoadEULAFile
struct UPUMG_LoginDataFactory_LoadEULAFile_Params
{
	struct FString                                     SaveText;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerPairingChange
struct UPUMG_LoginDataFactory_HandleControllerPairingChange_Params
{
	int*                                               ControllerIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewUserId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OldUserId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerConnectionChange
struct UPUMG_LoginDataFactory_HandleControllerConnectionChange_Params
{
	bool*                                              IsConnection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UserId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ControllerIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.GetVersion
struct UPUMG_LoginDataFactory_GetVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentPlayerName
struct UPUMG_LoginDataFactory_GetCurrentPlayerName_Params
{
	struct FText                                       NameText;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentLoginState
struct UPUMG_LoginDataFactory_GetCurrentLoginState_Params
{
	EPUMG_LoginState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_PromoteMemberToLeader
struct UPUMG_PartyDataFactory_UIX_PromoteMemberToLeader_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_LeaveParty
struct UPUMG_PartyDataFactory_UIX_LeaveParty_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_KickMemberFromParty
struct UPUMG_PartyDataFactory_UIX_KickMemberFromParty_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_InviteMemberToParty
struct UPUMG_PartyDataFactory_UIX_InviteMemberToParty_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_GiveInvitePermission
struct UPUMG_PartyDataFactory_UIX_GiveInvitePermission_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_DisbandParty
struct UPUMG_PartyDataFactory_UIX_DisbandParty_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_DenyPartyInvitation
struct UPUMG_PartyDataFactory_UIX_DenyPartyInvitation_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.UIX_AcceptPartyInvitation
struct UPUMG_PartyDataFactory_UIX_AcceptPartyInvitation_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.PartyPromoteResponse
struct UPUMG_PartyDataFactory_PartyPromoteResponse_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.PartyLeaveResponse
struct UPUMG_PartyDataFactory_PartyLeaveResponse_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.PartyKickResponse
struct UPUMG_PartyDataFactory_PartyKickResponse_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.PartyDisbandResponse
struct UPUMG_PartyDataFactory_PartyDisbandResponse_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.IsPlayerInParty
struct UPUMG_PartyDataFactory_IsPlayerInParty_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.IsPending
struct UPUMG_PartyDataFactory_IsPending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.IsPartyMaxed
struct UPUMG_PartyDataFactory_IsPartyMaxed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.IsLeader
struct UPUMG_PartyDataFactory_IsLeader_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.IsInParty
struct UPUMG_PartyDataFactory_IsInParty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.HandleAppResume
struct UPUMG_PartyDataFactory_HandleAppResume_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.HandleAppReactivated
struct UPUMG_PartyDataFactory_HandleAppReactivated_Params
{
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetQueueId
struct UPUMG_PartyDataFactory_GetQueueId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemeberName
struct UPUMG_PartyDataFactory_GetPartyMemeberName_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMembers
struct UPUMG_PartyDataFactory_GetPartyMembers_Params
{
	TArray<struct FPUMG_PartyMemberData>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemberByID
struct UPUMG_PartyDataFactory_GetPartyMemberByID_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPUMG_PartyMemberData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviter
struct UPUMG_PartyDataFactory_GetPartyInviter_Params
{
	class UPUMG_PlayerInfo*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviteMode
struct UPUMG_PartyDataFactory_GetPartyInviteMode_Params
{
	EPUMG_PartyInviteRightsMode                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.GetMaxPartyMembers
struct UPUMG_PartyDataFactory_GetMaxPartyMembers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PartyDataFactory.CheckPartyMemberIsLeader
struct UPUMG_PartyDataFactory_CheckPartyMemberIsLeader_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PlayerDataFactory.OnSelectAvatar
struct UPUMG_PlayerDataFactory_OnSelectAvatar_Params
{
	int*                                               ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PlayerDataFactory.GetAvatarIcon
struct UPUMG_PlayerDataFactory_GetAvatarIcon_Params
{
};

// Function PlatformUMG.PUMG_PlayerInfo.SetIgnored
struct UPUMG_PlayerInfo_SetIgnored_Params
{
	bool*                                              Ignored;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PlayerInfo.IsIgnored
struct UPUMG_PlayerInfo_IsIgnored_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PlayerInfo.GetPlayerId
struct UPUMG_PlayerInfo_GetPlayerId_Params
{
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PlayerInfo.GetName
struct UPUMG_PlayerInfo_GetName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformUMG.PUMG_PlayerInfo.GetMctsName
struct UPUMG_PlayerInfo_GetMctsName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformUMG.PUMG_PlayerInfo.GetAvatarItemId
struct UPUMG_PlayerInfo_GetAvatarItemId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PlayerWhoDataFactory.UIX_SearchByNameForPlayer
struct UPUMG_PlayerWhoDataFactory_UIX_SearchByNameForPlayer_Params
{
	struct FString*                                    PlayerName;                                               // (Parm, ZeroConstructor)
	bool*                                              bIncludeOfflinePlayers;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PlayerWhoDataFactory.GetSearchByNameResults
struct UPUMG_PlayerWhoDataFactory_GetSearchByNameResults_Params
{
	TArray<class UPUMG_PlayerInfo*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformUMG.PUMG_Widget.UnregisterWidgetFromInputManager
struct UPUMG_Widget_UnregisterWidgetFromInputManager_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.UnregisterFocusGroup
struct UPUMG_Widget_UnregisterFocusGroup_Params
{
	int*                                               FocusGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.UninitializeWidget
struct UPUMG_Widget_UninitializeWidget_Params
{
};

// Function PlatformUMG.PUMG_Widget.SwapViewRoutePath
struct UPUMG_Widget_SwapViewRoutePath_Params
{
	struct FString*                                    RoutePath;                                                // (Parm, ZeroConstructor)
	struct FName*                                      SwapTargetRoute;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.SwapViewRoute
struct UPUMG_Widget_SwapViewRoute_Params
{
	struct FName*                                      RouteName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SwapTargetRoute;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.StartShowSequence
struct UPUMG_Widget_StartShowSequence_Params
{
	struct FName*                                      FromRoute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.StartHideSequence
struct UPUMG_Widget_StartHideSequence_Params
{
	struct FName*                                      FromRoute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.ShowWidget
struct UPUMG_Widget_ShowWidget_Params
{
};

// Function PlatformUMG.PUMG_Widget.SetFocusToThis
struct UPUMG_Widget_SetFocusToThis_Params
{
};

// Function PlatformUMG.PUMG_Widget.SetFocusToGroup
struct UPUMG_Widget_SetFocusToGroup_Params
{
	int*                                               FocusGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.SetDefaultFocusForGroup
struct UPUMG_Widget_SetDefaultFocusForGroup_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               FocusGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.ResetViewRouteStack
struct UPUMG_Widget_ResetViewRouteStack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.RemoveTopViewRoute
struct UPUMG_Widget_RemoveTopViewRoute_Params
{
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.RegisterWidgetToInputManager
struct UPUMG_Widget_RegisterWidgetToInputManager_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               FocusGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Up;                                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget**                                    Down;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget**                                    Left;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget**                                    Right;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.OnShown
struct UPUMG_Widget_OnShown_Params
{
};

// Function PlatformUMG.PUMG_Widget.OnHide
struct UPUMG_Widget_OnHide_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateUpFailure
struct UPUMG_Widget_NavigateUpFailure_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateRightFailure
struct UPUMG_Widget_NavigateRightFailure_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateLeftFailure
struct UPUMG_Widget_NavigateLeftFailure_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateDownFailure
struct UPUMG_Widget_NavigateDownFailure_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateConfirmPressed
struct UPUMG_Widget_NavigateConfirmPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.NavigateConfirmCancelled
struct UPUMG_Widget_NavigateConfirmCancelled_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateConfirm
struct UPUMG_Widget_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.NavigateBackPressed
struct UPUMG_Widget_NavigateBackPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.NavigateBackCancelled
struct UPUMG_Widget_NavigateBackCancelled_Params
{
};

// Function PlatformUMG.PUMG_Widget.NavigateBack
struct UPUMG_Widget_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.IsFocusEnabled
struct UPUMG_Widget_IsFocusEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.InitializeWidgetNavigation
struct UPUMG_Widget_InitializeWidgetNavigation_Params
{
};

// Function PlatformUMG.PUMG_Widget.InitializeWidgetButtonListeners
struct UPUMG_Widget_InitializeWidgetButtonListeners_Params
{
};

// Function PlatformUMG.PUMG_Widget.InitializeWidget
struct UPUMG_Widget_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.HideWidget
struct UPUMG_Widget_HideWidget_Params
{
};

// Function PlatformUMG.PUMG_Widget.GoToViewRoute
struct UPUMG_Widget_GoToViewRoute_Params
{
	struct FName*                                      RouteName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.GetViewManager
struct UPUMG_Widget_GetViewManager_Params
{
	class UPUMG_ViewManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.GetUsesBlocker
struct UPUMG_Widget_GetUsesBlocker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.GetPendingRouteData
struct UPUMG_Widget_GetPendingRouteData_Params
{
	struct FName*                                      RouteName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Data;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.GetGeometryFromLastTick
struct UPUMG_Widget_GetGeometryFromLastTick_Params
{
	struct FGeometry                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.GetCurrentFocusGroup
struct UPUMG_Widget_GetCurrentFocusGroup_Params
{
	int                                                OutFocusGroup;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.GetCurrentFocusForGroup
struct UPUMG_Widget_GetCurrentFocusForGroup_Params
{
	int*                                               FocusGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.GamepadUnhover
struct UPUMG_Widget_GamepadUnhover_Params
{
};

// Function PlatformUMG.PUMG_Widget.GamepadHover
struct UPUMG_Widget_GamepadHover_Params
{
};

// Function PlatformUMG.PUMG_Widget.GamepadButtonUp
struct UPUMG_Widget_GamepadButtonUp_Params
{
	struct FKey*                                       Button;                                                   // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformUMG.PUMG_Widget.GamepadButtonDown
struct UPUMG_Widget_GamepadButtonDown_Params
{
	struct FKey*                                       Button;                                                   // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateUpFailure
struct UPUMG_Widget_FocusGroupNavigateUpFailure_Params
{
	int*                                               FocusGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateRightFailure
struct UPUMG_Widget_FocusGroupNavigateRightFailure_Params
{
	int*                                               FocusGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateLeftFailure
struct UPUMG_Widget_FocusGroupNavigateLeftFailure_Params
{
	int*                                               FocusGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateDownFailure
struct UPUMG_Widget_FocusGroupNavigateDownFailure_Params
{
	int*                                               FocusGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.ExplicitNavigateUp
struct UPUMG_Widget_ExplicitNavigateUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.ExplicitNavigateRight
struct UPUMG_Widget_ExplicitNavigateRight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.ExplicitNavigateLeft
struct UPUMG_Widget_ExplicitNavigateLeft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.ExplicitNavigateDown
struct UPUMG_Widget_ExplicitNavigateDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.DisplayGenericPopup
struct UPUMG_Widget_DisplayGenericPopup_Params
{
	struct FString*                                    sTitle;                                                   // (Parm, ZeroConstructor)
	struct FString*                                    sDesc;                                                    // (Parm, ZeroConstructor)
};

// Function PlatformUMG.PUMG_Widget.DisplayGenericError
struct UPUMG_Widget_DisplayGenericError_Params
{
	struct FString*                                    sDesc;                                                    // (Parm, ZeroConstructor)
};

// Function PlatformUMG.PUMG_Widget.ClearNavigationInputThrottle
struct UPUMG_Widget_ClearNavigationInputThrottle_Params
{
};

// Function PlatformUMG.PUMG_Widget.CanCloseOnLogout
struct UPUMG_Widget_CanCloseOnLogout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.CallOnShowSequenceFinished
struct UPUMG_Widget_CallOnShowSequenceFinished_Params
{
};

// Function PlatformUMG.PUMG_Widget.CallOnHideSequenceFinished
struct UPUMG_Widget_CallOnHideSequenceFinished_Params
{
};

// Function PlatformUMG.PUMG_Widget.BindToInputManager
struct UPUMG_Widget_BindToInputManager_Params
{
	int*                                               DefaultFocusGroup;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.AsyncLoadTexture2D
struct UPUMG_Widget_AsyncLoadTexture2D_Params
{
};

// Function PlatformUMG.PUMG_Widget.AddViewRoutePath
struct UPUMG_Widget_AddViewRoutePath_Params
{
	struct FString*                                    RoutePath;                                                // (Parm, ZeroConstructor)
	bool*                                              ClearRouteStack;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_Widget.AddViewRoute
struct UPUMG_Widget_AddViewRoute_Params
{
	struct FName*                                      RouteName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ClearRouteStack;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PopupManager.ShowPopup
struct UPUMG_PopupManager_ShowPopup_Params
{
	struct FPUMG_PopupConfig*                          popupData;                                                // (Parm)
};

// Function PlatformUMG.PUMG_PopupManager.RemovePopup
struct UPUMG_PopupManager_RemovePopup_Params
{
	int*                                               PopupId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PopupManager.OnPopupResponse
struct UPUMG_PopupManager_OnPopupResponse_Params
{
	int*                                               nPopupId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               nResponseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_PopupManager.OnPopupCanceled
struct UPUMG_PopupManager_OnPopupCanceled_Params
{
};

// Function PlatformUMG.PUMG_PopupManager.NextPopup
struct UPUMG_PopupManager_NextPopup_Params
{
};

// Function PlatformUMG.PUMG_PopupManager.HidePopup
struct UPUMG_PopupManager_HidePopup_Params
{
};

// Function PlatformUMG.PUMG_PopupManager.CloseUnimportantPopups
struct UPUMG_PopupManager_CloseUnimportantPopups_Params
{
};

// Function PlatformUMG.PUMG_PopupManager.CloseAllPopups
struct UPUMG_PopupManager_CloseAllPopups_Params
{
};

// Function PlatformUMG.PUMG_PopupManager.AddPopup
struct UPUMG_PopupManager_AddPopup_Params
{
	struct FPUMG_PopupConfig*                          popupData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_QueueDataFactory.LeaveQueue
struct UPUMG_QueueDataFactory_LeaveQueue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_QueueDataFactory.JoinQueue
struct UPUMG_QueueDataFactory_JoinQueue_Params
{
	int*                                               QueueId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_QueueDataFactory.IsQueueActive
struct UPUMG_QueueDataFactory_IsQueueActive_Params
{
	int*                                               QueueId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_QueueDataFactory.IsInQueue
struct UPUMG_QueueDataFactory_IsInQueue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_QueueDataFactory.IsInGame
struct UPUMG_QueueDataFactory_IsInGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_QueueDataFactory.IsInCustomMatch
struct UPUMG_QueueDataFactory_IsInCustomMatch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetQueueIds
struct UPUMG_QueueDataFactory_GetQueueIds_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueMatchState
struct UPUMG_QueueDataFactory_GetCurrentQueueMatchState_Params
{
	EPUMG_MatchStatus                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueId
struct UPUMG_QueueDataFactory_GetCurrentQueueId_Params
{
	int                                                QueueId;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentMatchId
struct UPUMG_QueueDataFactory_GetCurrentMatchId_Params
{
	int                                                MatchID;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_QueueDataFactory.GetBaseQueueInfoById
struct UPUMG_QueueDataFactory_GetBaseQueueInfoById_Params
{
	int*                                               QueueId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPUMG_ClientQueueInfo                       InClientQueueInfo;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_QueueDataFactory.CanQueue
struct UPUMG_QueueDataFactory_CanQueue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_SettingsDataFactory.OnSettingChanged
struct UPUMG_SettingsDataFactory_OnSettingChanged_Params
{
	struct FName*                                      SettingId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SettingValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_SettingsDataFactory.InitSettingsForPlayer
struct UPUMG_SettingsDataFactory_InitSettingsForPlayer_Params
{
};

// Function PlatformUMG.PUMG_StoreItem.UIX_ShowPurchaseConfirmation
struct UPUMG_StoreItem_UIX_ShowPurchaseConfirmation_Params
{
	class UPUMG_StoreItemPrice**                       pPrice;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.PurchaseFromPortal
struct UPUMG_StoreItem_PurchaseFromPortal_Params
{
};

// Function PlatformUMG.PUMG_StoreItem.IsRented
struct UPUMG_StoreItem_IsRented_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.IsRecipeFulfilled
struct UPUMG_StoreItem_IsRecipeFulfilled_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.IsOwned
struct UPUMG_StoreItem_IsOwned_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.IsActive
struct UPUMG_StoreItem_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.HasPortalOffer
struct UPUMG_StoreItem_HasPortalOffer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.GetType
struct UPUMG_StoreItem_GetType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.GetSubType
struct UPUMG_StoreItem_GetSubType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.GetSortOrder
struct UPUMG_StoreItem_GetSortOrder_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.GetSoftItemIcon
struct UPUMG_StoreItem_GetSoftItemIcon_Params
{
};

// Function PlatformUMG.PUMG_StoreItem.GetQuantityOwned
struct UPUMG_StoreItem_GetQuantityOwned_Params
{
	int64_t*                                           PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.GetPurchaseRequest
struct UPUMG_StoreItem_GetPurchaseRequest_Params
{
	class UPUMG_StorePurchaseRequest*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.GetPrices
struct UPUMG_StoreItem_GetPrices_Params
{
	TMap<int, class UPUMG_StoreItemPrice*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformUMG.PUMG_StoreItem.GetPrice
struct UPUMG_StoreItem_GetPrice_Params
{
	int*                                               nCurrencyType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_StoreItemPrice*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.GetPortalOffer
struct UPUMG_StoreItem_GetPortalOffer_Params
{
	class UPUMG_PortalOffer*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.GetName
struct UPUMG_StoreItem_GetName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformUMG.PUMG_StoreItem.GetLootQuantity
struct UPUMG_StoreItem_GetLootQuantity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.GetLootId
struct UPUMG_StoreItem_GetLootId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItem.GetInventoryItem
struct UPUMG_StoreItem_GetInventoryItem_Params
{
};

// Function PlatformUMG.PUMG_StoreItem.GetDescription
struct UPUMG_StoreItem_GetDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformUMG.PUMG_StoreItem.ConfirmGotoPortalOffer
struct UPUMG_StoreItem_ConfirmGotoPortalOffer_Params
{
};

// Function PlatformUMG.PUMG_XpTable.GetXpAtLevel
struct UPUMG_XpTable_GetXpAtLevel_Params
{
	int*                                               XpLevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_XpTable.GetXpAtIndex
struct UPUMG_XpTable_GetXpAtIndex_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_XpTable.GetMinXpLevel
struct UPUMG_XpTable_GetMinXpLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_XpTable.GetLevelCount
struct UPUMG_XpTable_GetLevelCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_XpTable.GetLevelAtXp
struct UPUMG_XpTable_GetLevelAtXp_Params
{
	int64_t*                                           XpPoints;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_XpTable.GetId
struct UPUMG_XpTable_GetId_Params
{
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItemHelper.UIX_RedeemCode
struct UPUMG_StoreItemHelper_UIX_RedeemCode_Params
{
	struct FString*                                    Code;                                                     // (Parm, ZeroConstructor)
};

// Function PlatformUMG.PUMG_StoreItemHelper.UIX_CompletePurchaseItem
struct UPUMG_StoreItemHelper_UIX_CompletePurchaseItem_Params
{
	class UPUMG_StorePurchaseRequest**                 PurchaseRequest;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItemHelper.RequestVendorData
struct UPUMG_StoreItemHelper_RequestVendorData_Params
{
	TArray<int>*                                       VendorIds;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItemHelper.GetXpTable
struct UPUMG_StoreItemHelper_GetXpTable_Params
{
	int64_t*                                           XpTableId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_XpTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemsForVendor
struct UPUMG_StoreItemHelper_GetStoreItemsForVendor_Params
{
	int*                                               nVendorId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncludeInactiveItems;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UPUMG_StoreItem*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendorByItemId
struct UPUMG_StoreItemHelper_GetStoreItemForVendorByItemId_Params
{
	int*                                               nVendorId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               nItemId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_StoreItem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendor
struct UPUMG_StoreItemHelper_GetStoreItemForVendor_Params
{
	int*                                               nVendorId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               nLootItemId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_StoreItem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItem
struct UPUMG_StoreItemHelper_GetStoreItem_Params
{
	int*                                               LootId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_StoreItem*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItemHelper.GetPortalOffer
struct UPUMG_StoreItemHelper_GetPortalOffer_Params
{
	int64_t*                                           LootId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_PortalOffer*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItemHelper.ExitInGameStoreUI
struct UPUMG_StoreItemHelper_ExitInGameStoreUI_Params
{
};

// Function PlatformUMG.PUMG_StoreItemHelper.EnterInGameStoreUI
struct UPUMG_StoreItemHelper_EnterInGameStoreUI_Params
{
};

// Function PlatformUMG.PUMG_StoreItemHelper.DoesPortalHaveOffers
struct UPUMG_StoreItemHelper_DoesPortalHaveOffers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_StoreItemHelper.AreXpTablesLoaded
struct UPUMG_StoreItemHelper_AreXpTablesLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.SwapRouteWithRoutePath
struct UPUMG_ViewManager_SwapRouteWithRoutePath_Params
{
	struct FString*                                    RoutePath;                                                // (Parm, ZeroConstructor)
	struct FName*                                      SwapTargetRoute;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.SwapRoute
struct UPUMG_ViewManager_SwapRoute_Params
{
	struct FName*                                      RouteName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SwapTargetRoute;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.SetRoutes
struct UPUMG_ViewManager_SetRoutes_Params
{
	class UDataTable**                                 RouteTable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.ResetRouteStack
struct UPUMG_ViewManager_ResetRouteStack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.ReplaceRoutePath
struct UPUMG_ViewManager_ReplaceRoutePath_Params
{
	struct FString*                                    RoutePath;                                                // (Parm, ZeroConstructor)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.ReplaceRoute
struct UPUMG_ViewManager_ReplaceRoute_Params
{
	struct FName*                                      RouteName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.RegisterStickyWidget
struct UPUMG_ViewManager_RegisterStickyWidget_Params
{
	struct FName*                                      RegisterName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_Widget**                               Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.PushRoutePath
struct UPUMG_ViewManager_PushRoutePath_Params
{
	struct FString*                                    RoutePath;                                                // (Parm, ZeroConstructor)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.PushRoute
struct UPUMG_ViewManager_PushRoute_Params
{
	struct FName*                                      RouteName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    Data;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.PopRoute
struct UPUMG_ViewManager_PopRoute_Params
{
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.IsRouteValid
struct UPUMG_ViewManager_IsRouteValid_Params
{
	struct FName*                                      RouteName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.GoToRoute_InternalShowStep
struct UPUMG_ViewManager_GoToRoute_InternalShowStep_Params
{
};

// Function PlatformUMG.PUMG_ViewManager.GoToRoute_HandleShowFinished
struct UPUMG_ViewManager_GoToRoute_HandleShowFinished_Params
{
	class UPUMG_Widget**                               Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.GoToRoute_HandleHideFinished
struct UPUMG_ViewManager_GoToRoute_HandleHideFinished_Params
{
	class UPUMG_Widget**                               Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.GoToRoute
struct UPUMG_ViewManager_GoToRoute_Params
{
	struct FName*                                      NextRouteName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.GetPendingRouteData
struct UPUMG_ViewManager_GetPendingRouteData_Params
{
	struct FName*                                      RouteName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Data;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionState
struct UPUMG_ViewManager_GetCurrentTransitionState_Params
{
	EViewManagerTransitionState                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionRouteStack
struct UPUMG_ViewManager_GetCurrentTransitionRouteStack_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionRoute
struct UPUMG_ViewManager_GetCurrentTransitionRoute_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.GetCurrentRouteStack
struct UPUMG_ViewManager_GetCurrentRouteStack_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformUMG.PUMG_ViewManager.GetCurrentRoute
struct UPUMG_ViewManager_GetCurrentRoute_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformUMG.PUMG_ViewManager.ClearPendingTransition
struct UPUMG_ViewManager_ClearPendingTransition_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
