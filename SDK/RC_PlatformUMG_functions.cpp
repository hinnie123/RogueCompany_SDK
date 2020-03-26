// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlatformUMG.PUMG_AsyncImage.ShowWaitingWidget
// (Native, Event, Public, BlueprintEvent)

void UPUMG_AsyncImage::ShowWaitingWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_AsyncImage.ShowWaitingWidget");

	UPUMG_AsyncImage_ShowWaitingWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_AsyncImage.HideWaitingWidget
// (Native, Event, Public, BlueprintEvent)

void UPUMG_AsyncImage::HideWaitingWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_AsyncImage.HideWaitingWidget");

	UPUMG_AsyncImage_HideWaitingWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.IsWithEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_BlueprintFunctionLibrary::STATIC_IsWithEditor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.IsWithEditor");

	UPUMG_BlueprintFunctionLibrary_IsWithEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetUMG_DPI_Scaling
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPUMG_BlueprintFunctionLibrary::STATIC_GetUMG_DPI_Scaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetUMG_DPI_Scaling");

	UPUMG_BlueprintFunctionLibrary_GetUMG_DPI_Scaling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetKeyName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey*                   Key                            (Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UPUMG_BlueprintFunctionLibrary::STATIC_GetKeyName(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetKeyName");

	UPUMG_BlueprintFunctionLibrary_GetKeyName_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadConfirmButton
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKey UPUMG_BlueprintFunctionLibrary::STATIC_GetGamepadConfirmButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadConfirmButton");

	UPUMG_BlueprintFunctionLibrary_GetGamepadConfirmButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadCancelButton
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKey UPUMG_BlueprintFunctionLibrary::STATIC_GetGamepadCancelButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadCancelButton");

	UPUMG_BlueprintFunctionLibrary_GetGamepadCancelButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadButtonForAction
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Button                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_BlueprintFunctionLibrary::STATIC_GetGamepadButtonForAction(struct FName* Action, struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetGamepadButtonForAction");

	UPUMG_BlueprintFunctionLibrary_GetGamepadButtonForAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMappingUsingWidget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                InWidget                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Button                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_BlueprintFunctionLibrary::STATIC_GetButtonForActionMappingUsingWidget(class UWidget** InWidget, struct FName* Action, struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMappingUsingWidget");

	UPUMG_BlueprintFunctionLibrary_GetButtonForActionMappingUsingWidget_Params params;
	params.InWidget = InWidget;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMapping
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Button                         (Parm, OutParm)
// bool*                          IsGamepadKey                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_BlueprintFunctionLibrary::STATIC_GetButtonForActionMapping(struct FName* Action, bool* IsGamepadKey, struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetButtonForActionMapping");

	UPUMG_BlueprintFunctionLibrary_GetButtonForActionMapping_Params params;
	params.Action = Action;
	params.IsGamepadKey = IsGamepadKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMappingUsingWidget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget**                InWidget                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            Buttons                        (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_BlueprintFunctionLibrary::STATIC_GetAllButtonsForActionMappingUsingWidget(class UWidget** InWidget, struct FName* Action, TArray<struct FKey>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMappingUsingWidget");

	UPUMG_BlueprintFunctionLibrary_GetAllButtonsForActionMappingUsingWidget_Params params;
	params.InWidget = InWidget;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMapping
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            Buttons                        (Parm, OutParm, ZeroConstructor)
// bool*                          IsGamepadKey                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_BlueprintFunctionLibrary::STATIC_GetAllButtonsForActionMapping(struct FName* Action, bool* IsGamepadKey, TArray<struct FKey>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_BlueprintFunctionLibrary.GetAllButtonsForActionMapping");

	UPUMG_BlueprintFunctionLibrary_GetAllButtonsForActionMapping_Params params;
	params.Action = Action;
	params.IsGamepadKey = IsGamepadKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_CanvasPanel.PlaceWidgetUnder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget**            BottomWidget                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UUserWidget**            TopWidget                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPUMG_CanvasPanel::PlaceWidgetUnder(class UUserWidget** BottomWidget, class UUserWidget** TopWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_CanvasPanel.PlaceWidgetUnder");

	UPUMG_CanvasPanel_PlaceWidgetUnder_Params params;
	params.BottomWidget = BottomWidget;
	params.TopWidget = TopWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_DataFactory.IsLoggedIn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_DataFactory::IsLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_DataFactory.IsLoggedIn");

	UPUMG_DataFactory_IsLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.SetMaxMessageCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           MaxMessageCount                (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_ChatDataFactory::SetMaxMessageCount(int* MaxMessageCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.SetMaxMessageCount");

	UPUMG_ChatDataFactory_SetMaxMessageCount_Params params;
	params.MaxMessageCount = MaxMessageCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ChatDataFactory.SendChatToPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Message                        (Parm, ZeroConstructor)
// int64_t*                       TargetPlayerId                 (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_ChatDataFactory::SendChatToPlayer(struct FString* Message, int64_t* TargetPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.SendChatToPlayer");

	UPUMG_ChatDataFactory_SendChatToPlayer_Params params;
	params.Message = Message;
	params.TargetPlayerId = TargetPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ChatDataFactory.SendChatToChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Message                        (Parm, ZeroConstructor)
// EPUMG_ChatChannel*             Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_ChatDataFactory::SendChatToChannel(struct FString* Message, EPUMG_ChatChannel* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.SendChatToChannel");

	UPUMG_ChatDataFactory_SendChatToChannel_Params params;
	params.Message = Message;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ChatDataFactory.RemovePlayerFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ChatDataFactory::RemovePlayerFilter(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.RemovePlayerFilter");

	UPUMG_ChatDataFactory_RemovePlayerFilter_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.RemoveChatCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Command                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ChatDataFactory::RemoveChatCommand(struct FString* Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.RemoveChatCommand");

	UPUMG_ChatDataFactory_RemoveChatCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.RemoveAllChatCommands
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ChatDataFactory::RemoveAllChatCommands(class UObject** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.RemoveAllChatCommands");

	UPUMG_ChatDataFactory_RemoveAllChatCommands_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.QueueCheckPendingMessages
// (Final, Native, Protected)

void UPUMG_ChatDataFactory::QueueCheckPendingMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.QueueCheckPendingMessages");

	UPUMG_ChatDataFactory_QueueCheckPendingMessages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ChatDataFactory.MarkMessageAsRead
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           MessageId                      (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_ChatDataFactory::MarkMessageAsRead(int* MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.MarkMessageAsRead");

	UPUMG_ChatDataFactory_MarkMessageAsRead_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ChatDataFactory.ListChatCommands
// (Final, Native, Public, BlueprintCallable)

void UPUMG_ChatDataFactory::ListChatCommands()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.ListChatCommands");

	UPUMG_ChatDataFactory_ListChatCommands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ChatDataFactory.IsValidMessage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPUMG_ChatData*         Message                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ChatDataFactory::IsValidMessage(struct FPUMG_ChatData* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.IsValidMessage");

	UPUMG_ChatDataFactory_IsValidMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.IsPlayerFilteredFromChat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ChatDataFactory::IsPlayerFilteredFromChat(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.IsPlayerFilteredFromChat");

	UPUMG_ChatDataFactory_IsPlayerFilteredFromChat_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.HandleCommunicationSettingChanged
// (Final, Native, Protected)

void UPUMG_ChatDataFactory::HandleCommunicationSettingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.HandleCommunicationSettingChanged");

	UPUMG_ChatDataFactory_HandleCommunicationSettingChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ChatDataFactory.GetMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           MessageId                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FPUMG_ChatData          ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPUMG_ChatData UPUMG_ChatDataFactory::GetMessage(int* MessageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.GetMessage");

	UPUMG_ChatDataFactory_GetMessage_Params params;
	params.MessageId = MessageId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.GetMaxMessageCount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_ChatDataFactory::GetMaxMessageCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.GetMaxMessageCount");

	UPUMG_ChatDataFactory_GetMaxMessageCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.GetChatPrivilegeStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPCOM_PrivilegeStatus          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPCOM_PrivilegeStatus UPUMG_ChatDataFactory::GetChatPrivilegeStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.GetChatPrivilegeStatus");

	UPUMG_ChatDataFactory_GetChatPrivilegeStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.GetActiveChatChannels
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool*                          IncludePersonalChannel         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPUMG_ActiveChatChannelData> ActiveChatChatChannels         (Parm, OutParm, ZeroConstructor)

void UPUMG_ChatDataFactory::GetActiveChatChannels(bool* IncludePersonalChannel, TArray<struct FPUMG_ActiveChatChannelData>* ActiveChatChatChannels)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.GetActiveChatChannels");

	UPUMG_ChatDataFactory_GetActiveChatChannels_Params params;
	params.IncludePersonalChannel = IncludePersonalChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActiveChatChatChannels != nullptr)
		*ActiveChatChatChannels = params.ActiveChatChatChannels;
}


// Function PlatformUMG.PUMG_ChatDataFactory.FindChatCommandIndex
// (Final, Native, Protected)
// Parameters:
// struct FString*                Command                        (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_ChatDataFactory::FindChatCommandIndex(struct FString* Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.FindChatCommandIndex");

	UPUMG_ChatDataFactory_FindChatCommandIndex_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.ExecuteChatCommandLine
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                CommandLine                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ChatDataFactory::ExecuteChatCommandLine(struct FString* CommandLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.ExecuteChatCommandLine");

	UPUMG_ChatDataFactory_ExecuteChatCommandLine_Params params;
	params.CommandLine = CommandLine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.CheckPendingMessages
// (Final, Native, Protected)

void UPUMG_ChatDataFactory::CheckPendingMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.CheckPendingMessages");

	UPUMG_ChatDataFactory_CheckPendingMessages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ChatDataFactory.BeginProcessingChatMessage
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FPUMG_ChatData          Message                        (Parm, OutParm)

void UPUMG_ChatDataFactory::BeginProcessingChatMessage(struct FPUMG_ChatData* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.BeginProcessingChatMessage");

	UPUMG_ChatDataFactory_BeginProcessingChatMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
}


// Function PlatformUMG.PUMG_ChatDataFactory.AddSystemMessage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText*                  Message                        (ConstParm, Parm, OutParm, ReferenceParm)

void UPUMG_ChatDataFactory::AddSystemMessage(struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.AddSystemMessage");

	UPUMG_ChatDataFactory_AddSystemMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ChatDataFactory.AddPlayerFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ChatDataFactory::AddPlayerFilter(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.AddPlayerFilter");

	UPUMG_ChatDataFactory_AddPlayerFilter_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ChatDataFactory.AddChatCommand
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                Command                        (Parm, ZeroConstructor)
// struct FText*                  Desc                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject**                Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                Function                       (Parm, ZeroConstructor)
// struct FString*                Alias1                         (Parm, ZeroConstructor)
// struct FString*                Alias2                         (Parm, ZeroConstructor)
// struct FString*                Alias3                         (Parm, ZeroConstructor)
// struct FString*                Alias4                         (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ChatDataFactory::AddChatCommand(struct FString* Command, struct FText* Desc, class UObject** Target, struct FString* Function, struct FString* Alias1, struct FString* Alias2, struct FString* Alias3, struct FString* Alias4)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ChatDataFactory.AddChatCommand");

	UPUMG_ChatDataFactory_AddChatCommand_Params params;
	params.Command = Command;
	params.Desc = Desc;
	params.Target = Target;
	params.Function = Function;
	params.Alias1 = Alias1;
	params.Alias2 = Alias2;
	params.Alias3 = Alias3;
	params.Alias4 = Alias4;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRemoveFriend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_FriendDataFactory::UIX_OnRemoveFriend(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRemoveFriend");

	UPUMG_FriendDataFactory_UIX_OnRemoveFriend_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRejectFriendRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_FriendDataFactory::UIX_OnRejectFriendRequest(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnRejectFriendRequest");

	UPUMG_FriendDataFactory_UIX_OnRejectFriendRequest_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnCancelFriendRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_FriendDataFactory::UIX_OnCancelFriendRequest(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnCancelFriendRequest");

	UPUMG_FriendDataFactory_UIX_OnCancelFriendRequest_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAddFriend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_FriendDataFactory::UIX_OnAddFriend(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAddFriend");

	UPUMG_FriendDataFactory_UIX_OnAddFriend_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAcceptFriendRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_FriendDataFactory::UIX_OnAcceptFriendRequest(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.UIX_OnAcceptFriendRequest");

	UPUMG_FriendDataFactory_UIX_OnAcceptFriendRequest_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_FriendDataFactory.SetEnableFriendsListUpdatePolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InBool                         (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_FriendDataFactory::SetEnableFriendsListUpdatePolling(bool* InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.SetEnableFriendsListUpdatePolling");

	UPUMG_FriendDataFactory_SetEnableFriendsListUpdatePolling_Params params;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_FriendDataFactory.RequestUpdateFriendsList
// (Final, Native, Public, BlueprintCallable)

void UPUMG_FriendDataFactory::RequestUpdateFriendsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.RequestUpdateFriendsList");

	UPUMG_FriendDataFactory_RequestUpdateFriendsList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_FriendDataFactory.IsCrossplaySocialEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_FriendDataFactory::IsCrossplaySocialEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.IsCrossplaySocialEnabled");

	UPUMG_FriendDataFactory_IsCrossplaySocialEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.HandleFriendsListUpdatePolling
// (Final, Native, Public)

void UPUMG_FriendDataFactory::HandleFriendsListUpdatePolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.HandleFriendsListUpdatePolling");

	UPUMG_FriendDataFactory_HandleFriendsListUpdatePolling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_FriendDataFactory.HandleCrossplaySettingChanged
// (Final, Native, Protected)

void UPUMG_FriendDataFactory::HandleCrossplaySettingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.HandleCrossplaySettingChanged");

	UPUMG_FriendDataFactory_HandleCrossplaySettingChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_FriendDataFactory.GetPendingFriends
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FPUMG_FriendData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPUMG_FriendData> UPUMG_FriendDataFactory::GetPendingFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.GetPendingFriends");

	UPUMG_FriendDataFactory_GetPendingFriends_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.GetFriends
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FPUMG_FriendData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPUMG_FriendData> UPUMG_FriendDataFactory::GetFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.GetFriends");

	UPUMG_FriendDataFactory_GetFriends_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.GetFriendRequests
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FPUMG_FriendData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPUMG_FriendData> UPUMG_FriendDataFactory::GetFriendRequests()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.GetFriendRequests");

	UPUMG_FriendDataFactory_GetFriendRequests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.GetFriendName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPUMG_FriendDataFactory::GetFriendName(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.GetFriendName");

	UPUMG_FriendDataFactory_GetFriendName_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.GetFriendAvatarTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FPUMG_FriendData*       Friend                         (Parm)

void UPUMG_FriendDataFactory::GetFriendAvatarTexture(struct FPUMG_FriendData* Friend)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.GetFriendAvatarTexture");

	UPUMG_FriendDataFactory_GetFriendAvatarTexture_Params params;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_FriendDataFactory.GetEnableFriendsListUpdatePolling
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_FriendDataFactory::GetEnableFriendsListUpdatePolling()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.GetEnableFriendsListUpdatePolling");

	UPUMG_FriendDataFactory_GetEnableFriendsListUpdatePolling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_FriendDataFactory.FriendRemoveResponse
// (Final, Native, Public)

void UPUMG_FriendDataFactory::FriendRemoveResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.FriendRemoveResponse");

	UPUMG_FriendDataFactory_FriendRemoveResponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_FriendDataFactory.CheckAlreadyFriends
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                FriendName                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_FriendDataFactory::CheckAlreadyFriends(struct FString* FriendName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_FriendDataFactory.CheckAlreadyFriends");

	UPUMG_FriendDataFactory_CheckAlreadyFriends_Params params;
	params.FriendName = FriendName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.GamepadPromptInterface.UnregisterOnClear
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGamepadPromptInterface::UnregisterOnClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.GamepadPromptInterface.UnregisterOnClear");

	UGamepadPromptInterface_UnregisterOnClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.GamepadPromptInterface.SetPrompt
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  PromptText                     (ConstParm, Parm, OutParm, ReferenceParm)

void UGamepadPromptInterface::SetPrompt(struct FText* PromptText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.GamepadPromptInterface.SetPrompt");

	UGamepadPromptInterface_SetPrompt_Params params;
	params.PromptText = PromptText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.GamepadPromptInterface.ClearPrompt
// (Event, Public, BlueprintEvent)

void UGamepadPromptInterface::ClearPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.GamepadPromptInterface.ClearPrompt");

	UGamepadPromptInterface_ClearPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_GamepadDataFactory.UnregisterPromptForButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKey*                   Button                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_GamepadDataFactory::UnregisterPromptForButton(struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_GamepadDataFactory.UnregisterPromptForButton");

	UPUMG_GamepadDataFactory_UnregisterPromptForButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_GamepadDataFactory.SetPromptForGamepadButton
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FKey*                   Button                         (Parm)
// struct FText*                  PromptText                     (ConstParm, Parm, OutParm, ReferenceParm)

void UPUMG_GamepadDataFactory::SetPromptForGamepadButton(struct FKey* Button, struct FText* PromptText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_GamepadDataFactory.SetPromptForGamepadButton");

	UPUMG_GamepadDataFactory_SetPromptForGamepadButton_Params params;
	params.Button = Button;
	params.PromptText = PromptText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_GamepadDataFactory.RemovePromptForGamepadButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKey*                   Button                         (Parm)

void UPUMG_GamepadDataFactory::RemovePromptForGamepadButton(struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_GamepadDataFactory.RemovePromptForGamepadButton");

	UPUMG_GamepadDataFactory_RemovePromptForGamepadButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_GamepadDataFactory.RegisterPromptWidgetForButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FKey*                   Button                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_GamepadDataFactory::RegisterPromptWidgetForButton(class UWidget** Widget, struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_GamepadDataFactory.RegisterPromptWidgetForButton");

	UPUMG_GamepadDataFactory_RegisterPromptWidgetForButton_Params params;
	params.Widget = Widget;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_GamepadDataFactory.ClearAllGamepadPrompts
// (Final, Native, Public, BlueprintCallable)

void UPUMG_GamepadDataFactory::ClearAllGamepadPrompts()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_GamepadDataFactory.ClearAllGamepadPrompts");

	UPUMG_GamepadDataFactory_ClearAllGamepadPrompts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_HUD.TestHirezLogin
// (Final, Exec, Native, Protected)
// Parameters:
// struct FString*                user                           (Parm, ZeroConstructor)
// struct FString*                password                       (Parm, ZeroConstructor)

void APUMG_HUD::TestHirezLogin(struct FString* user, struct FString* password)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.TestHirezLogin");

	APUMG_HUD_TestHirezLogin_Params params;
	params.user = user;
	params.password = password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_HUD.TestAutoLogin
// (Final, Exec, Native, Protected)
// Parameters:
// int*                           ControllerId                   (Parm, ZeroConstructor, IsPlainOldData)

void APUMG_HUD::TestAutoLogin(int* ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.TestAutoLogin");

	APUMG_HUD_TestAutoLogin_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_HUD.SortWidgetsForFocus
// (Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UPUMG_Widget*>    Widgets                        (Parm, OutParm, ZeroConstructor, ReferenceParm)

void APUMG_HUD::SortWidgetsForFocus(TArray<class UPUMG_Widget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.SortWidgetsForFocus");

	APUMG_HUD_SortWidgetsForFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function PlatformUMG.PUMG_HUD.ShowSystemTrayNotification
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                popupType                      (Parm, ZeroConstructor)

void APUMG_HUD::ShowSystemTrayNotification(struct FString* popupType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.ShowSystemTrayNotification");

	APUMG_HUD_ShowSystemTrayNotification_Params params;
	params.popupType = popupType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_HUD.SetUseNewUIFeatures
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          UseNewFeatures                 (Parm, ZeroConstructor, IsPlainOldData)

void APUMG_HUD::SetUseNewUIFeatures(bool* UseNewFeatures)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.SetUseNewUIFeatures");

	APUMG_HUD_SetUseNewUIFeatures_Params params;
	params.UseNewFeatures = UseNewFeatures;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_HUD.SetUIFocus
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APUMG_HUD::SetUIFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.SetUIFocus");

	APUMG_HUD_SetUIFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_HUD.SetNavigationEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void APUMG_HUD::SetNavigationEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.SetNavigationEnabled");

	APUMG_HUD_SetNavigationEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_HUD.OnQuit
// (Native, Public, BlueprintCallable)

void APUMG_HUD::OnQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.OnQuit");

	APUMG_HUD_OnQuit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_HUD.OnNavigateBack
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APUMG_HUD::OnNavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.OnNavigateBack");

	APUMG_HUD_OnNavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.OnConfirmQuit
// (Native, Protected)

void APUMG_HUD::OnConfirmQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.OnConfirmQuit");

	APUMG_HUD_OnConfirmQuit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_HUD.NewPlayerInfo
// (Final, Native, Protected)
// Parameters:
// class UPUMG_PlayerInfo*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_PlayerInfo* APUMG_HUD::NewPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.NewPlayerInfo");

	APUMG_HUD_NewPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.IsLobbyHUD
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APUMG_HUD::IsLobbyHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.IsLobbyHUD");

	APUMG_HUD_IsLobbyHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.IsCrossplayEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool APUMG_HUD::IsCrossplayEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.IsCrossplayEnabled");

	APUMG_HUD_IsCrossplayEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.InputStateChangePassthrough
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (Parm, ZeroConstructor, IsPlainOldData)

void APUMG_HUD::InputStateChangePassthrough(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.InputStateChangePassthrough");

	APUMG_HUD_InputStateChangePassthrough_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_HUD.GetViewManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPUMG_ViewManager*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_ViewManager* APUMG_HUD::GetViewManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.GetViewManager");

	APUMG_HUD_GetViewManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.GetPopupManager
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PopupManager*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPUMG_PopupManager* APUMG_HUD::GetPopupManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.GetPopupManager");

	APUMG_HUD_GetPopupManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.GetPlayerControllerOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* APUMG_HUD::GetPlayerControllerOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.GetPlayerControllerOwner");

	APUMG_HUD_GetPlayerControllerOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.GetOrCreatePlayerInfo
// (Final, Native, Public)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_PlayerInfo*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_PlayerInfo* APUMG_HUD::GetOrCreatePlayerInfo(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.GetOrCreatePlayerInfo");

	APUMG_HUD_GetOrCreatePlayerInfo_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.GetInputManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPUMG_InputManager*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_InputManager* APUMG_HUD::GetInputManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.GetInputManager");

	APUMG_HUD_GetInputManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.GetCurrentInputState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EPGAME_INPUT_STATE> APUMG_HUD::GetCurrentInputState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.GetCurrentInputState");

	APUMG_HUD_GetCurrentInputState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_HUD.DisplayGenericPopup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                sTitle                         (Parm, ZeroConstructor)
// struct FString*                sDesc                          (Parm, ZeroConstructor)

void APUMG_HUD::DisplayGenericPopup(struct FString* sTitle, struct FString* sDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.DisplayGenericPopup");

	APUMG_HUD_DisplayGenericPopup_Params params;
	params.sTitle = sTitle;
	params.sDesc = sDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_HUD.DisplayGenericError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                sDesc                          (Parm, ZeroConstructor)

void APUMG_HUD::DisplayGenericError(struct FString* sDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_HUD.DisplayGenericError");

	APUMG_HUD_DisplayGenericError_Params params;
	params.sDesc = sDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_InputManager.HandleModeChange
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_InputManager::HandleModeChange(TEnumAsByte<EPGAME_INPUT_STATE>* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_InputManager.HandleModeChange");

	UPUMG_InputManager_HandleModeChange_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_InputManager.ClearNavInputThrottled
// (Final, Native, Public)

void UPUMG_InputManager::ClearNavInputThrottled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_InputManager.ClearNavInputThrottled");

	UPUMG_InputManager_ClearNavInputThrottled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_JsonDataFactory.HandleJsonReady
// (Native, Protected)
// Parameters:
// class UPGame_LandingPanelJSONHandler** pHandler                       (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_JsonDataFactory::HandleJsonReady(class UPGame_LandingPanelJSONHandler** pHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_JsonDataFactory.HandleJsonReady");

	UPUMG_JsonDataFactory_HandleJsonReady_Params params;
	params.pHandler = pHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_JsonDataFactory.HandleImagesReady
// (Native, Protected)
// Parameters:
// class UPGame_LandingPanelJSONHandler** pHandler                       (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_JsonDataFactory::HandleImagesReady(class UPGame_LandingPanelJSONHandler** pHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_JsonDataFactory.HandleImagesReady");

	UPUMG_JsonDataFactory_HandleImagesReady_Params params;
	params.pHandler = pHandler;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UpdateControllers
// (Final, Native, Public, BlueprintCallable)

void UPUMG_LoginDataFactory::UpdateControllers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UpdateControllers");

	UPUMG_LoginDataFactory_UpdateControllers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorSubmit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                AuthCode                       (Parm, ZeroConstructor)

void UPUMG_LoginDataFactory::UIX_OnTwoFactorSubmit(struct FString* AuthCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorSubmit");

	UPUMG_LoginDataFactory_UIX_OnTwoFactorSubmit_Params params;
	params.AuthCode = AuthCode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorDecline
// (Final, Native, Public, BlueprintCallable)

void UPUMG_LoginDataFactory::UIX_OnTwoFactorDecline()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnTwoFactorDecline");

	UPUMG_LoginDataFactory_UIX_OnTwoFactorDecline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitLogin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                UserName                       (Parm, ZeroConstructor)
// struct FString*                password                       (Parm, ZeroConstructor)

void UPUMG_LoginDataFactory::UIX_OnSubmitLogin(struct FString* UserName, struct FString* password)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitLogin");

	UPUMG_LoginDataFactory_UIX_OnSubmitLogin_Params params;
	params.UserName = UserName;
	params.password = password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitConsoleLogin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           ControllerId                   (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_LoginDataFactory::UIX_OnSubmitConsoleLogin(int* ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitConsoleLogin");

	UPUMG_LoginDataFactory_UIX_OnSubmitConsoleLogin_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitAutoLogin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           ControllerId                   (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_LoginDataFactory::UIX_OnSubmitAutoLogin(int* ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnSubmitAutoLogin");

	UPUMG_LoginDataFactory_UIX_OnSubmitAutoLogin_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnPlayerCreate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                PlayerName                     (Parm, ZeroConstructor)

void UPUMG_LoginDataFactory::UIX_OnPlayerCreate(struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnPlayerCreate");

	UPUMG_LoginDataFactory_UIX_OnPlayerCreate_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkExistingAccount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                UserName                       (Parm, ZeroConstructor)
// struct FString*                password                       (Parm, ZeroConstructor)

void UPUMG_LoginDataFactory::UIX_OnLinkExistingAccount(struct FString* UserName, struct FString* password)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkExistingAccount");

	UPUMG_LoginDataFactory_UIX_OnLinkExistingAccount_Params params;
	params.UserName = UserName;
	params.password = password;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkDecline
// (Final, Native, Public, BlueprintCallable)

void UPUMG_LoginDataFactory::UIX_OnLinkDecline()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkDecline");

	UPUMG_LoginDataFactory_UIX_OnLinkDecline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkCreateAccount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                UserName                       (Parm, ZeroConstructor)
// struct FString*                password                       (Parm, ZeroConstructor)
// struct FString*                Email                          (Parm, ZeroConstructor)
// bool*                          bAcceptAgeReqs                 (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_LoginDataFactory::UIX_OnLinkCreateAccount(struct FString* UserName, struct FString* password, struct FString* Email, bool* bAcceptAgeReqs)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnLinkCreateAccount");

	UPUMG_LoginDataFactory_UIX_OnLinkCreateAccount_Params params;
	params.UserName = UserName;
	params.password = password;
	params.Email = Email;
	params.bAcceptAgeReqs = bAcceptAgeReqs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaDecline
// (Final, Native, Public, BlueprintCallable)

void UPUMG_LoginDataFactory::UIX_OnEulaDecline()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaDecline");

	UPUMG_LoginDataFactory_UIX_OnEulaDecline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaAccept
// (Final, Native, Public, BlueprintCallable)

void UPUMG_LoginDataFactory::UIX_OnEulaAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnEulaAccept");

	UPUMG_LoginDataFactory_UIX_OnEulaAccept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnChangeUserAccount
// (Final, Native, Public, BlueprintCallable)

void UPUMG_LoginDataFactory::UIX_OnChangeUserAccount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnChangeUserAccount");

	UPUMG_LoginDataFactory_UIX_OnChangeUserAccount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnAccountCreate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                UserName                       (Parm, ZeroConstructor)
// struct FString*                password                       (Parm, ZeroConstructor)
// struct FString*                Email                          (Parm, ZeroConstructor)
// bool*                          bAcceptAgeReqs                 (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_LoginDataFactory::UIX_OnAccountCreate(struct FString* UserName, struct FString* password, struct FString* Email, bool* bAcceptAgeReqs)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.UIX_OnAccountCreate");

	UPUMG_LoginDataFactory_UIX_OnAccountCreate_Params params;
	params.UserName = UserName;
	params.password = password;
	params.Email = Email;
	params.bAcceptAgeReqs = bAcceptAgeReqs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayUsername
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_LoginDataFactory::ShouldDisplayUsername()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayUsername");

	UPUMG_LoginDataFactory_ShouldDisplayUsername_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayDisconnectError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_LoginDataFactory::ShouldDisplayDisconnectError()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.ShouldDisplayDisconnectError");

	UPUMG_LoginDataFactory_ShouldDisplayDisconnectError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_LoginDataFactory.RecordLoginState
// (Final, Native, Private)
// Parameters:
// EPUMG_LoginState*              NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_LoginDataFactory::RecordLoginState(EPUMG_LoginState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.RecordLoginState");

	UPUMG_LoginDataFactory_RecordLoginState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_ShowEula
// (Final, Native, Private)

void UPUMG_LoginDataFactory::LoginEvent_ShowEula()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_ShowEula");

	UPUMG_LoginDataFactory_LoginEvent_ShowEula_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoginRequested
// (Final, Native, Private)

void UPUMG_LoginDataFactory::LoginEvent_LoginRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoginRequested");

	UPUMG_LoginDataFactory_LoginEvent_LoginRequested_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoggedIn
// (Final, Native, Private)

void UPUMG_LoginDataFactory::LoginEvent_LoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_LoggedIn");

	UPUMG_LoginDataFactory_LoginEvent_LoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_Failed
// (Final, Native, Private)
// Parameters:
// uint32_t*                      errorMsgId                     (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_LoginDataFactory::LoginEvent_Failed(uint32_t* errorMsgId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_Failed");

	UPUMG_LoginDataFactory_LoginEvent_Failed_Params params;
	params.errorMsgId = errorMsgId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_CreatePlayer
// (Final, Native, Private)
// Parameters:
// uint32_t*                      errorMsgId                     (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_LoginDataFactory::LoginEvent_CreatePlayer(uint32_t* errorMsgId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.LoginEvent_CreatePlayer");

	UPUMG_LoginDataFactory_LoginEvent_CreatePlayer_Params params;
	params.errorMsgId = errorMsgId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.LoadEULAFile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 SaveText                       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_LoginDataFactory::STATIC_LoadEULAFile(struct FString* SaveText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.LoadEULAFile");

	UPUMG_LoginDataFactory_LoadEULAFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveText != nullptr)
		*SaveText = params.SaveText;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerPairingChange
// (Final, Native, Private)
// Parameters:
// int*                           ControllerIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewUserId                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldUserId                      (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_LoginDataFactory::HandleControllerPairingChange(int* ControllerIndex, int* NewUserId, int* OldUserId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerPairingChange");

	UPUMG_LoginDataFactory_HandleControllerPairingChange_Params params;
	params.ControllerIndex = ControllerIndex;
	params.NewUserId = NewUserId;
	params.OldUserId = OldUserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerConnectionChange
// (Final, Native, Private)
// Parameters:
// bool*                          IsConnection                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UserId                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ControllerIndex                (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_LoginDataFactory::HandleControllerConnectionChange(bool* IsConnection, int* UserId, int* ControllerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.HandleControllerConnectionChange");

	UPUMG_LoginDataFactory_HandleControllerConnectionChange_Params params;
	params.IsConnection = IsConnection;
	params.UserId = UserId;
	params.ControllerIndex = ControllerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_LoginDataFactory.GetVersion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPUMG_LoginDataFactory::STATIC_GetVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.GetVersion");

	UPUMG_LoginDataFactory_GetVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentPlayerName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   NameText                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_LoginDataFactory::GetCurrentPlayerName(struct FText* NameText)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentPlayerName");

	UPUMG_LoginDataFactory_GetCurrentPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NameText != nullptr)
		*NameText = params.NameText;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentLoginState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPUMG_LoginState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPUMG_LoginState UPUMG_LoginDataFactory::GetCurrentLoginState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_LoginDataFactory.GetCurrentLoginState");

	UPUMG_LoginDataFactory_GetCurrentLoginState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_PromoteMemberToLeader
// (Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_PartyDataFactory::UIX_PromoteMemberToLeader(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_PromoteMemberToLeader");

	UPUMG_PartyDataFactory_UIX_PromoteMemberToLeader_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_LeaveParty
// (Native, Public, BlueprintCallable)

void UPUMG_PartyDataFactory::UIX_LeaveParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_LeaveParty");

	UPUMG_PartyDataFactory_UIX_LeaveParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_KickMemberFromParty
// (Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_PartyDataFactory::UIX_KickMemberFromParty(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_KickMemberFromParty");

	UPUMG_PartyDataFactory_UIX_KickMemberFromParty_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_InviteMemberToParty
// (Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_PartyDataFactory::UIX_InviteMemberToParty(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_InviteMemberToParty");

	UPUMG_PartyDataFactory_UIX_InviteMemberToParty_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_GiveInvitePermission
// (Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_PartyDataFactory::UIX_GiveInvitePermission(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_GiveInvitePermission");

	UPUMG_PartyDataFactory_UIX_GiveInvitePermission_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_DisbandParty
// (Native, Public, BlueprintCallable)

void UPUMG_PartyDataFactory::UIX_DisbandParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_DisbandParty");

	UPUMG_PartyDataFactory_UIX_DisbandParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_DenyPartyInvitation
// (Final, Native, Public, BlueprintCallable)

void UPUMG_PartyDataFactory::UIX_DenyPartyInvitation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_DenyPartyInvitation");

	UPUMG_PartyDataFactory_UIX_DenyPartyInvitation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PartyDataFactory.UIX_AcceptPartyInvitation
// (Final, Native, Public, BlueprintCallable)

void UPUMG_PartyDataFactory::UIX_AcceptPartyInvitation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.UIX_AcceptPartyInvitation");

	UPUMG_PartyDataFactory_UIX_AcceptPartyInvitation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PartyDataFactory.PartyPromoteResponse
// (Final, Native, Public)

void UPUMG_PartyDataFactory::PartyPromoteResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.PartyPromoteResponse");

	UPUMG_PartyDataFactory_PartyPromoteResponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PartyDataFactory.PartyLeaveResponse
// (Final, Native, Public)

void UPUMG_PartyDataFactory::PartyLeaveResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.PartyLeaveResponse");

	UPUMG_PartyDataFactory_PartyLeaveResponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PartyDataFactory.PartyKickResponse
// (Final, Native, Public)

void UPUMG_PartyDataFactory::PartyKickResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.PartyKickResponse");

	UPUMG_PartyDataFactory_PartyKickResponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PartyDataFactory.PartyDisbandResponse
// (Final, Native, Public)

void UPUMG_PartyDataFactory::PartyDisbandResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.PartyDisbandResponse");

	UPUMG_PartyDataFactory_PartyDisbandResponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PartyDataFactory.IsPlayerInParty
// (Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_PartyDataFactory::IsPlayerInParty(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.IsPlayerInParty");

	UPUMG_PartyDataFactory_IsPlayerInParty_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.IsPending
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_PartyDataFactory::IsPending()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.IsPending");

	UPUMG_PartyDataFactory_IsPending_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.IsPartyMaxed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_PartyDataFactory::IsPartyMaxed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.IsPartyMaxed");

	UPUMG_PartyDataFactory_IsPartyMaxed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.IsLeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_PartyDataFactory::IsLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.IsLeader");

	UPUMG_PartyDataFactory_IsLeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.IsInParty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_PartyDataFactory::IsInParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.IsInParty");

	UPUMG_PartyDataFactory_IsInParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.HandleAppResume
// (Final, Native, Public)

void UPUMG_PartyDataFactory::HandleAppResume()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.HandleAppResume");

	UPUMG_PartyDataFactory_HandleAppResume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PartyDataFactory.HandleAppReactivated
// (Final, Native, Public)

void UPUMG_PartyDataFactory::HandleAppReactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.HandleAppReactivated");

	UPUMG_PartyDataFactory_HandleAppReactivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetQueueId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_PartyDataFactory::GetQueueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetQueueId");

	UPUMG_PartyDataFactory_GetQueueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemeberName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPUMG_PartyDataFactory::GetPartyMemeberName(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemeberName");

	UPUMG_PartyDataFactory_GetPartyMemeberName_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMembers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPUMG_PartyMemberData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPUMG_PartyMemberData> UPUMG_PartyDataFactory::GetPartyMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMembers");

	UPUMG_PartyDataFactory_GetPartyMembers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemberByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FPUMG_PartyMemberData   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPUMG_PartyMemberData UPUMG_PartyDataFactory::GetPartyMemberByID(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetPartyMemberByID");

	UPUMG_PartyDataFactory_GetPartyMemberByID_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPUMG_PlayerInfo*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_PlayerInfo* UPUMG_PartyDataFactory::GetPartyInviter()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviter");

	UPUMG_PartyDataFactory_GetPartyInviter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviteMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPUMG_PartyInviteRightsMode    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPUMG_PartyInviteRightsMode UPUMG_PartyDataFactory::GetPartyInviteMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetPartyInviteMode");

	UPUMG_PartyDataFactory_GetPartyInviteMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.GetMaxPartyMembers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_PartyDataFactory::GetMaxPartyMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.GetMaxPartyMembers");

	UPUMG_PartyDataFactory_GetMaxPartyMembers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PartyDataFactory.CheckPartyMemberIsLeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_PartyDataFactory::CheckPartyMemberIsLeader(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PartyDataFactory.CheckPartyMemberIsLeader");

	UPUMG_PartyDataFactory_CheckPartyMemberIsLeader_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PlayerDataFactory.OnSelectAvatar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           ItemId                         (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_PlayerDataFactory::OnSelectAvatar(int* ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerDataFactory.OnSelectAvatar");

	UPUMG_PlayerDataFactory_OnSelectAvatar_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PlayerDataFactory.GetAvatarIcon
// (Native, Public, BlueprintCallable)

void UPUMG_PlayerDataFactory::GetAvatarIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerDataFactory.GetAvatarIcon");

	UPUMG_PlayerDataFactory_GetAvatarIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PlayerInfo.SetIgnored
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Ignored                        (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_PlayerInfo::SetIgnored(bool* Ignored)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerInfo.SetIgnored");

	UPUMG_PlayerInfo_SetIgnored_Params params;
	params.Ignored = Ignored;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PlayerInfo.IsIgnored
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_PlayerInfo::IsIgnored()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerInfo.IsIgnored");

	UPUMG_PlayerInfo_IsIgnored_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PlayerInfo.GetPlayerId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UPUMG_PlayerInfo::GetPlayerId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerInfo.GetPlayerId");

	UPUMG_PlayerInfo_GetPlayerId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PlayerInfo.GetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPUMG_PlayerInfo::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerInfo.GetName");

	UPUMG_PlayerInfo_GetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PlayerInfo.GetMctsName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPUMG_PlayerInfo::GetMctsName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerInfo.GetMctsName");

	UPUMG_PlayerInfo_GetMctsName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PlayerInfo.GetAvatarItemId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_PlayerInfo::GetAvatarItemId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerInfo.GetAvatarItemId");

	UPUMG_PlayerInfo_GetAvatarItemId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PlayerWhoDataFactory.UIX_SearchByNameForPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                PlayerName                     (Parm, ZeroConstructor)
// bool*                          bIncludeOfflinePlayers         (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_PlayerWhoDataFactory::UIX_SearchByNameForPlayer(struct FString* PlayerName, bool* bIncludeOfflinePlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerWhoDataFactory.UIX_SearchByNameForPlayer");

	UPUMG_PlayerWhoDataFactory_UIX_SearchByNameForPlayer_Params params;
	params.PlayerName = PlayerName;
	params.bIncludeOfflinePlayers = bIncludeOfflinePlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PlayerWhoDataFactory.GetSearchByNameResults
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPUMG_PlayerInfo*> UPUMG_PlayerWhoDataFactory::GetSearchByNameResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PlayerWhoDataFactory.GetSearchByNameResults");

	UPUMG_PlayerWhoDataFactory_GetSearchByNameResults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.UnregisterWidgetFromInputManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPUMG_Widget::UnregisterWidgetFromInputManager(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.UnregisterWidgetFromInputManager");

	UPUMG_Widget_UnregisterWidgetFromInputManager_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.UnregisterFocusGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           FocusGroup                     (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_Widget::UnregisterFocusGroup(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.UnregisterFocusGroup");

	UPUMG_Widget_UnregisterFocusGroup_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.UninitializeWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPUMG_Widget::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.UninitializeWidget");

	UPUMG_Widget_UninitializeWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.SwapViewRoutePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                RoutePath                      (Parm, ZeroConstructor)
// struct FName*                  SwapTargetRoute                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::SwapViewRoutePath(struct FString* RoutePath, struct FName* SwapTargetRoute, bool* ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.SwapViewRoutePath");

	UPUMG_Widget_SwapViewRoutePath_Params params;
	params.RoutePath = RoutePath;
	params.SwapTargetRoute = SwapTargetRoute;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.SwapViewRoute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  RouteName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SwapTargetRoute                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::SwapViewRoute(struct FName* RouteName, struct FName* SwapTargetRoute, bool* ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.SwapViewRoute");

	UPUMG_Widget_SwapViewRoute_Params params;
	params.RouteName = RouteName;
	params.SwapTargetRoute = SwapTargetRoute;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.StartShowSequence
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_Widget::StartShowSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.StartShowSequence");

	UPUMG_Widget_StartShowSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.StartHideSequence
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_Widget::StartHideSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.StartHideSequence");

	UPUMG_Widget_StartHideSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.ShowWidget
// (Native, Public, BlueprintCallable)

void UPUMG_Widget::ShowWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.ShowWidget");

	UPUMG_Widget_ShowWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.SetFocusToThis
// (Final, Native, Public, BlueprintCallable)

void UPUMG_Widget::SetFocusToThis()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.SetFocusToThis");

	UPUMG_Widget_SetFocusToThis_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.SetFocusToGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           FocusGroup                     (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_Widget::SetFocusToGroup(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.SetFocusToGroup");

	UPUMG_Widget_SetFocusToGroup_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.SetDefaultFocusForGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           FocusGroup                     (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_Widget::SetDefaultFocusForGroup(class UWidget** Widget, int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.SetDefaultFocusForGroup");

	UPUMG_Widget_SetDefaultFocusForGroup_Params params;
	params.Widget = Widget;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.ResetViewRouteStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::ResetViewRouteStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.ResetViewRouteStack");

	UPUMG_Widget_ResetViewRouteStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.RemoveTopViewRoute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::RemoveTopViewRoute(bool* ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.RemoveTopViewRoute");

	UPUMG_Widget_RemoveTopViewRoute_Params params;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.RegisterWidgetToInputManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           FocusGroup                     (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget**                Up                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                Down                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                Left                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                Right                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPUMG_Widget::RegisterWidgetToInputManager(class UWidget** Widget, int* FocusGroup, class UWidget** Up, class UWidget** Down, class UWidget** Left, class UWidget** Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.RegisterWidgetToInputManager");

	UPUMG_Widget_RegisterWidgetToInputManager_Params params;
	params.Widget = Widget;
	params.FocusGroup = FocusGroup;
	params.Up = Up;
	params.Down = Down;
	params.Left = Left;
	params.Right = Right;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.OnShown
// (Event, Public, BlueprintEvent)

void UPUMG_Widget::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.OnShown");

	UPUMG_Widget_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.OnHide
// (Event, Public, BlueprintEvent)

void UPUMG_Widget::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.OnHide");

	UPUMG_Widget_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.NavigateUpFailure
// (Event, Public, BlueprintEvent)

void UPUMG_Widget::NavigateUpFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateUpFailure");

	UPUMG_Widget_NavigateUpFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.NavigateRightFailure
// (Event, Public, BlueprintEvent)

void UPUMG_Widget::NavigateRightFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateRightFailure");

	UPUMG_Widget_NavigateRightFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.NavigateLeftFailure
// (Event, Public, BlueprintEvent)

void UPUMG_Widget::NavigateLeftFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateLeftFailure");

	UPUMG_Widget_NavigateLeftFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.NavigateDownFailure
// (Event, Public, BlueprintEvent)

void UPUMG_Widget::NavigateDownFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateDownFailure");

	UPUMG_Widget_NavigateDownFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.NavigateConfirmPressed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::NavigateConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateConfirmPressed");

	UPUMG_Widget_NavigateConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.NavigateConfirmCancelled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPUMG_Widget::NavigateConfirmCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateConfirmCancelled");

	UPUMG_Widget_NavigateConfirmCancelled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.NavigateConfirm
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateConfirm");

	UPUMG_Widget_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.NavigateBackPressed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::NavigateBackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateBackPressed");

	UPUMG_Widget_NavigateBackPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.NavigateBackCancelled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPUMG_Widget::NavigateBackCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateBackCancelled");

	UPUMG_Widget_NavigateBackCancelled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.NavigateBack
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.NavigateBack");

	UPUMG_Widget_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.IsFocusEnabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::IsFocusEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.IsFocusEnabled");

	UPUMG_Widget_IsFocusEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UPUMG_Widget::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.InitializeWidgetNavigation");

	UPUMG_Widget_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)

void UPUMG_Widget::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.InitializeWidgetButtonListeners");

	UPUMG_Widget_InitializeWidgetButtonListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.InitializeWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_Widget::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.InitializeWidget");

	UPUMG_Widget_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.HideWidget
// (Native, Public, BlueprintCallable)

void UPUMG_Widget::HideWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.HideWidget");

	UPUMG_Widget_HideWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.GoToViewRoute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  RouteName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::GoToViewRoute(struct FName* RouteName, bool* ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GoToViewRoute");

	UPUMG_Widget_GoToViewRoute_Params params;
	params.RouteName = RouteName;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GetViewManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPUMG_ViewManager*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_ViewManager* UPUMG_Widget::GetViewManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GetViewManager");

	UPUMG_Widget_GetViewManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GetUsesBlocker
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::GetUsesBlocker()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GetUsesBlocker");

	UPUMG_Widget_GetUsesBlocker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GetPendingRouteData
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  RouteName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::GetPendingRouteData(struct FName* RouteName, class UObject** Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GetPendingRouteData");

	UPUMG_Widget_GetPendingRouteData_Params params;
	params.RouteName = RouteName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GetGeometryFromLastTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGeometry               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FGeometry UPUMG_Widget::GetGeometryFromLastTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GetGeometryFromLastTick");

	UPUMG_Widget_GetGeometryFromLastTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GetCurrentFocusGroup
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            OutFocusGroup                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::GetCurrentFocusGroup(int* OutFocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GetCurrentFocusGroup");

	UPUMG_Widget_GetCurrentFocusGroup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFocusGroup != nullptr)
		*OutFocusGroup = params.OutFocusGroup;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GetCurrentFocusForGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           FocusGroup                     (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UPUMG_Widget::GetCurrentFocusForGroup(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GetCurrentFocusForGroup");

	UPUMG_Widget_GetCurrentFocusForGroup_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UPUMG_Widget::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GamepadUnhover");

	UPUMG_Widget_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.GamepadHover
// (Event, Public, BlueprintEvent)

void UPUMG_Widget::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GamepadHover");

	UPUMG_Widget_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.GamepadButtonUp
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FKey*                   Button                         (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPUMG_Widget::GamepadButtonUp(struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GamepadButtonUp");

	UPUMG_Widget_GamepadButtonUp_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.GamepadButtonDown
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FKey*                   Button                         (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UPUMG_Widget::GamepadButtonDown(struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.GamepadButtonDown");

	UPUMG_Widget_GamepadButtonDown_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateUpFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_Widget::FocusGroupNavigateUpFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.FocusGroupNavigateUpFailure");

	UPUMG_Widget_FocusGroupNavigateUpFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateRightFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_Widget::FocusGroupNavigateRightFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.FocusGroupNavigateRightFailure");

	UPUMG_Widget_FocusGroupNavigateRightFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateLeftFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_Widget::FocusGroupNavigateLeftFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.FocusGroupNavigateLeftFailure");

	UPUMG_Widget_FocusGroupNavigateLeftFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.FocusGroupNavigateDownFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           FocusGroup                     (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_Widget::FocusGroupNavigateDownFailure(int* FocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.FocusGroupNavigateDownFailure");

	UPUMG_Widget_FocusGroupNavigateDownFailure_Params params;
	params.FocusGroup = FocusGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.ExplicitNavigateUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::ExplicitNavigateUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.ExplicitNavigateUp");

	UPUMG_Widget_ExplicitNavigateUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.ExplicitNavigateRight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::ExplicitNavigateRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.ExplicitNavigateRight");

	UPUMG_Widget_ExplicitNavigateRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.ExplicitNavigateLeft
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::ExplicitNavigateLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.ExplicitNavigateLeft");

	UPUMG_Widget_ExplicitNavigateLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.ExplicitNavigateDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::ExplicitNavigateDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.ExplicitNavigateDown");

	UPUMG_Widget_ExplicitNavigateDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.DisplayGenericPopup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                sTitle                         (Parm, ZeroConstructor)
// struct FString*                sDesc                          (Parm, ZeroConstructor)

void UPUMG_Widget::DisplayGenericPopup(struct FString* sTitle, struct FString* sDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.DisplayGenericPopup");

	UPUMG_Widget_DisplayGenericPopup_Params params;
	params.sTitle = sTitle;
	params.sDesc = sDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.DisplayGenericError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                sDesc                          (Parm, ZeroConstructor)

void UPUMG_Widget::DisplayGenericError(struct FString* sDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.DisplayGenericError");

	UPUMG_Widget_DisplayGenericError_Params params;
	params.sDesc = sDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.ClearNavigationInputThrottle
// (Final, Native, Public, BlueprintCallable)

void UPUMG_Widget::ClearNavigationInputThrottle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.ClearNavigationInputThrottle");

	UPUMG_Widget_ClearNavigationInputThrottle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.CanCloseOnLogout
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::CanCloseOnLogout()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.CanCloseOnLogout");

	UPUMG_Widget_CanCloseOnLogout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.CallOnShowSequenceFinished
// (Final, Native, Public, BlueprintCallable)

void UPUMG_Widget::CallOnShowSequenceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.CallOnShowSequenceFinished");

	UPUMG_Widget_CallOnShowSequenceFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.CallOnHideSequenceFinished
// (Final, Native, Public, BlueprintCallable)

void UPUMG_Widget::CallOnHideSequenceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.CallOnHideSequenceFinished");

	UPUMG_Widget_CallOnHideSequenceFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.BindToInputManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           DefaultFocusGroup              (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_Widget::BindToInputManager(int* DefaultFocusGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.BindToInputManager");

	UPUMG_Widget_BindToInputManager_Params params;
	params.DefaultFocusGroup = DefaultFocusGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.AsyncLoadTexture2D
// (Final, Native, Public, BlueprintCallable)

void UPUMG_Widget::AsyncLoadTexture2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.AsyncLoadTexture2D");

	UPUMG_Widget_AsyncLoadTexture2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_Widget.AddViewRoutePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                RoutePath                      (Parm, ZeroConstructor)
// bool*                          ClearRouteStack                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::AddViewRoutePath(struct FString* RoutePath, bool* ClearRouteStack, bool* ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.AddViewRoutePath");

	UPUMG_Widget_AddViewRoutePath_Params params;
	params.RoutePath = RoutePath;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_Widget.AddViewRoute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  RouteName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ClearRouteStack                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Data                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_Widget::AddViewRoute(struct FName* RouteName, bool* ClearRouteStack, bool* ForceTransition, class UObject** Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_Widget.AddViewRoute");

	UPUMG_Widget_AddViewRoute_Params params;
	params.RouteName = RouteName;
	params.ClearRouteStack = ClearRouteStack;
	params.ForceTransition = ForceTransition;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_PopupManager.ShowPopup
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPUMG_PopupConfig*      popupData                      (Parm)

void UPUMG_PopupManager::ShowPopup(struct FPUMG_PopupConfig* popupData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.ShowPopup");

	UPUMG_PopupManager_ShowPopup_Params params;
	params.popupData = popupData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PopupManager.RemovePopup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           PopupId                        (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_PopupManager::RemovePopup(int* PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.RemovePopup");

	UPUMG_PopupManager_RemovePopup_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PopupManager.OnPopupResponse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           nPopupId                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           nResponseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_PopupManager::OnPopupResponse(int* nPopupId, int* nResponseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.OnPopupResponse");

	UPUMG_PopupManager_OnPopupResponse_Params params;
	params.nPopupId = nPopupId;
	params.nResponseIndex = nResponseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PopupManager.OnPopupCanceled
// (Final, Native, Public, BlueprintCallable)

void UPUMG_PopupManager::OnPopupCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.OnPopupCanceled");

	UPUMG_PopupManager_OnPopupCanceled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PopupManager.NextPopup
// (Final, Native, Public, BlueprintCallable)

void UPUMG_PopupManager::NextPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.NextPopup");

	UPUMG_PopupManager_NextPopup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PopupManager.HidePopup
// (Event, Protected, BlueprintEvent)

void UPUMG_PopupManager::HidePopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.HidePopup");

	UPUMG_PopupManager_HidePopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PopupManager.CloseUnimportantPopups
// (Final, Native, Public, BlueprintCallable)

void UPUMG_PopupManager::CloseUnimportantPopups()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.CloseUnimportantPopups");

	UPUMG_PopupManager_CloseUnimportantPopups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PopupManager.CloseAllPopups
// (Final, Native, Public, BlueprintCallable)

void UPUMG_PopupManager::CloseAllPopups()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.CloseAllPopups");

	UPUMG_PopupManager_CloseAllPopups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_PopupManager.AddPopup
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPUMG_PopupConfig*      popupData                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_PopupManager::AddPopup(struct FPUMG_PopupConfig* popupData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_PopupManager.AddPopup");

	UPUMG_PopupManager_AddPopup_Params params;
	params.popupData = popupData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.LeaveQueue
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_QueueDataFactory::LeaveQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.LeaveQueue");

	UPUMG_QueueDataFactory_LeaveQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.JoinQueue
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_QueueDataFactory::JoinQueue(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.JoinQueue");

	UPUMG_QueueDataFactory_JoinQueue_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.IsQueueActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_QueueDataFactory::IsQueueActive(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.IsQueueActive");

	UPUMG_QueueDataFactory_IsQueueActive_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.IsInQueue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_QueueDataFactory::STATIC_IsInQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.IsInQueue");

	UPUMG_QueueDataFactory_IsInQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.IsInGame
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_QueueDataFactory::STATIC_IsInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.IsInGame");

	UPUMG_QueueDataFactory_IsInGame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.IsInCustomMatch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_QueueDataFactory::STATIC_IsInCustomMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.IsInCustomMatch");

	UPUMG_QueueDataFactory_IsInCustomMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetQueueIds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UPUMG_QueueDataFactory::GetQueueIds()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetQueueIds");

	UPUMG_QueueDataFactory_GetQueueIds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueMatchState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPUMG_MatchStatus              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPUMG_MatchStatus UPUMG_QueueDataFactory::STATIC_GetCurrentQueueMatchState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueMatchState");

	UPUMG_QueueDataFactory_GetCurrentQueueMatchState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            QueueId                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_QueueDataFactory::STATIC_GetCurrentQueueId(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentQueueId");

	UPUMG_QueueDataFactory_GetCurrentQueueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueueId != nullptr)
		*QueueId = params.QueueId;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentMatchId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int                            MatchID                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_QueueDataFactory::STATIC_GetCurrentMatchId(int* MatchID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetCurrentMatchId");

	UPUMG_QueueDataFactory_GetCurrentMatchId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MatchID != nullptr)
		*MatchID = params.MatchID;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.GetBaseQueueInfoById
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FPUMG_ClientQueueInfo   InClientQueueInfo              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_QueueDataFactory::GetBaseQueueInfoById(int* QueueId, struct FPUMG_ClientQueueInfo* InClientQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.GetBaseQueueInfoById");

	UPUMG_QueueDataFactory_GetBaseQueueInfoById_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InClientQueueInfo != nullptr)
		*InClientQueueInfo = params.InClientQueueInfo;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_QueueDataFactory.CanQueue
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_QueueDataFactory::CanQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_QueueDataFactory.CanQueue");

	UPUMG_QueueDataFactory_CanQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_SettingsDataFactory.OnSettingChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  SettingId                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SettingValue                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_SettingsDataFactory::OnSettingChanged(struct FName* SettingId, int* SettingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_SettingsDataFactory.OnSettingChanged");

	UPUMG_SettingsDataFactory_OnSettingChanged_Params params;
	params.SettingId = SettingId;
	params.SettingValue = SettingValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_SettingsDataFactory.InitSettingsForPlayer
// (Native, Protected, BlueprintCallable)

void UPUMG_SettingsDataFactory::InitSettingsForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_SettingsDataFactory.InitSettingsForPlayer");

	UPUMG_SettingsDataFactory_InitSettingsForPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_StoreItem.UIX_ShowPurchaseConfirmation
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPUMG_StoreItemPrice**   pPrice                         (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_StoreItem::UIX_ShowPurchaseConfirmation(class UPUMG_StoreItemPrice** pPrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.UIX_ShowPurchaseConfirmation");

	UPUMG_StoreItem_UIX_ShowPurchaseConfirmation_Params params;
	params.pPrice = pPrice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_StoreItem.PurchaseFromPortal
// (Final, Native, Public, BlueprintCallable)

void UPUMG_StoreItem::PurchaseFromPortal()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.PurchaseFromPortal");

	UPUMG_StoreItem_PurchaseFromPortal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_StoreItem.IsRented
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_StoreItem::IsRented(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.IsRented");

	UPUMG_StoreItem_IsRented_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.IsRecipeFulfilled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_StoreItem::IsRecipeFulfilled(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.IsRecipeFulfilled");

	UPUMG_StoreItem_IsRecipeFulfilled_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.IsOwned
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_StoreItem::IsOwned(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.IsOwned");

	UPUMG_StoreItem_IsOwned_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.IsActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_StoreItem::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.IsActive");

	UPUMG_StoreItem_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.HasPortalOffer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_StoreItem::HasPortalOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.HasPortalOffer");

	UPUMG_StoreItem_HasPortalOffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_StoreItem::GetType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetType");

	UPUMG_StoreItem_GetType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetSubType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_StoreItem::GetSubType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetSubType");

	UPUMG_StoreItem_GetSubType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetSortOrder
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_StoreItem::GetSortOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetSortOrder");

	UPUMG_StoreItem_GetSortOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetSoftItemIcon
// (Native, Public, BlueprintCallable, BlueprintPure, Const)

void UPUMG_StoreItem::GetSoftItemIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetSoftItemIcon");

	UPUMG_StoreItem_GetSoftItemIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_StoreItem.GetQuantityOwned
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_StoreItem::GetQuantityOwned(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetQuantityOwned");

	UPUMG_StoreItem_GetQuantityOwned_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetPurchaseRequest
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPUMG_StorePurchaseRequest* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_StorePurchaseRequest* UPUMG_StoreItem::GetPurchaseRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetPurchaseRequest");

	UPUMG_StoreItem_GetPurchaseRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetPrices
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TMap<int, class UPUMG_StoreItemPrice*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<int, class UPUMG_StoreItemPrice*> UPUMG_StoreItem::GetPrices()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetPrices");

	UPUMG_StoreItem_GetPrices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetPrice
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           nCurrencyType                  (Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_StoreItemPrice*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_StoreItemPrice* UPUMG_StoreItem::GetPrice(int* nCurrencyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetPrice");

	UPUMG_StoreItem_GetPrice_Params params;
	params.nCurrencyType = nCurrencyType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetPortalOffer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPUMG_PortalOffer*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_PortalOffer* UPUMG_StoreItem::GetPortalOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetPortalOffer");

	UPUMG_StoreItem_GetPortalOffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetName
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPUMG_StoreItem::GetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetName");

	UPUMG_StoreItem_GetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetLootQuantity
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_StoreItem::GetLootQuantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetLootQuantity");

	UPUMG_StoreItem_GetLootQuantity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetLootId
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_StoreItem::GetLootId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetLootId");

	UPUMG_StoreItem_GetLootId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.GetInventoryItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UPUMG_StoreItem::GetInventoryItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetInventoryItem");

	UPUMG_StoreItem_GetInventoryItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_StoreItem.GetDescription
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPUMG_StoreItem::GetDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.GetDescription");

	UPUMG_StoreItem_GetDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItem.ConfirmGotoPortalOffer
// (Final, Native, Public, BlueprintCallable)

void UPUMG_StoreItem::ConfirmGotoPortalOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItem.ConfirmGotoPortalOffer");

	UPUMG_StoreItem_ConfirmGotoPortalOffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_XpTable.GetXpAtLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           XpLevel                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UPUMG_XpTable::GetXpAtLevel(int* XpLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_XpTable.GetXpAtLevel");

	UPUMG_XpTable_GetXpAtLevel_Params params;
	params.XpLevel = XpLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_XpTable.GetXpAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UPUMG_XpTable::GetXpAtIndex(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_XpTable.GetXpAtIndex");

	UPUMG_XpTable_GetXpAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_XpTable.GetMinXpLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_XpTable::GetMinXpLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_XpTable.GetMinXpLevel");

	UPUMG_XpTable_GetMinXpLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_XpTable.GetLevelCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_XpTable::GetLevelCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_XpTable.GetLevelCount");

	UPUMG_XpTable_GetLevelCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_XpTable.GetLevelAtXp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64_t*                       XpPoints                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_XpTable::GetLevelAtXp(int64_t* XpPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_XpTable.GetLevelAtXp");

	UPUMG_XpTable_GetLevelAtXp_Params params;
	params.XpPoints = XpPoints;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_XpTable.GetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UPUMG_XpTable::GetId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_XpTable.GetId");

	UPUMG_XpTable_GetId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.UIX_RedeemCode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Code                           (Parm, ZeroConstructor)

void UPUMG_StoreItemHelper::UIX_RedeemCode(struct FString* Code)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.UIX_RedeemCode");

	UPUMG_StoreItemHelper_UIX_RedeemCode_Params params;
	params.Code = Code;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_StoreItemHelper.UIX_CompletePurchaseItem
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPUMG_StorePurchaseRequest** PurchaseRequest                (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_StoreItemHelper::UIX_CompletePurchaseItem(class UPUMG_StorePurchaseRequest** PurchaseRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.UIX_CompletePurchaseItem");

	UPUMG_StoreItemHelper_UIX_CompletePurchaseItem_Params params;
	params.PurchaseRequest = PurchaseRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_StoreItemHelper.RequestVendorData
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<int>*                   VendorIds                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPUMG_StoreItemHelper::RequestVendorData(TArray<int>* VendorIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.RequestVendorData");

	UPUMG_StoreItemHelper_RequestVendorData_Params params;
	params.VendorIds = VendorIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.GetXpTable
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64_t*                       XpTableId                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_XpTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_XpTable* UPUMG_StoreItemHelper::GetXpTable(int64_t* XpTableId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.GetXpTable");

	UPUMG_StoreItemHelper_GetXpTable_Params params;
	params.XpTableId = XpTableId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemsForVendor
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           nVendorId                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncludeInactiveItems          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPUMG_StoreItem*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPUMG_StoreItem*> UPUMG_StoreItemHelper::GetStoreItemsForVendor(int* nVendorId, bool* bIncludeInactiveItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemsForVendor");

	UPUMG_StoreItemHelper_GetStoreItemsForVendor_Params params;
	params.nVendorId = nVendorId;
	params.bIncludeInactiveItems = bIncludeInactiveItems;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendorByItemId
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           nVendorId                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           nItemId                        (Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_StoreItem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_StoreItem* UPUMG_StoreItemHelper::GetStoreItemForVendorByItemId(int* nVendorId, int* nItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendorByItemId");

	UPUMG_StoreItemHelper_GetStoreItemForVendorByItemId_Params params;
	params.nVendorId = nVendorId;
	params.nItemId = nItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendor
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           nVendorId                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           nLootItemId                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_StoreItem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_StoreItem* UPUMG_StoreItemHelper::GetStoreItemForVendor(int* nVendorId, int* nLootItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItemForVendor");

	UPUMG_StoreItemHelper_GetStoreItemForVendor_Params params;
	params.nVendorId = nVendorId;
	params.nLootItemId = nLootItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItem
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           LootId                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_StoreItem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_StoreItem* UPUMG_StoreItemHelper::GetStoreItem(int* LootId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.GetStoreItem");

	UPUMG_StoreItemHelper_GetStoreItem_Params params;
	params.LootId = LootId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.GetPortalOffer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64_t*                       LootId                         (Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_PortalOffer*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_PortalOffer* UPUMG_StoreItemHelper::GetPortalOffer(int64_t* LootId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.GetPortalOffer");

	UPUMG_StoreItemHelper_GetPortalOffer_Params params;
	params.LootId = LootId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.ExitInGameStoreUI
// (Final, Native, Public, BlueprintCallable)

void UPUMG_StoreItemHelper::ExitInGameStoreUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.ExitInGameStoreUI");

	UPUMG_StoreItemHelper_ExitInGameStoreUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_StoreItemHelper.EnterInGameStoreUI
// (Final, Native, Public, BlueprintCallable)

void UPUMG_StoreItemHelper::EnterInGameStoreUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.EnterInGameStoreUI");

	UPUMG_StoreItemHelper_EnterInGameStoreUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_StoreItemHelper.DoesPortalHaveOffers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_StoreItemHelper::DoesPortalHaveOffers()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.DoesPortalHaveOffers");

	UPUMG_StoreItemHelper_DoesPortalHaveOffers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_StoreItemHelper.AreXpTablesLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_StoreItemHelper::AreXpTablesLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_StoreItemHelper.AreXpTablesLoaded");

	UPUMG_StoreItemHelper_AreXpTablesLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.SwapRouteWithRoutePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                RoutePath                      (Parm, ZeroConstructor)
// struct FName*                  SwapTargetRoute                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ViewManager::SwapRouteWithRoutePath(struct FString* RoutePath, struct FName* SwapTargetRoute, bool* ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.SwapRouteWithRoutePath");

	UPUMG_ViewManager_SwapRouteWithRoutePath_Params params;
	params.RoutePath = RoutePath;
	params.SwapTargetRoute = SwapTargetRoute;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.SwapRoute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  RouteName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SwapTargetRoute                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ViewManager::SwapRoute(struct FName* RouteName, struct FName* SwapTargetRoute, bool* ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.SwapRoute");

	UPUMG_ViewManager_SwapRoute_Params params;
	params.RouteName = RouteName;
	params.SwapTargetRoute = SwapTargetRoute;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.SetRoutes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable**             RouteTable                     (Parm, ZeroConstructor, IsPlainOldData)

void UPUMG_ViewManager::SetRoutes(class UDataTable** RouteTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.SetRoutes");

	UPUMG_ViewManager_SetRoutes_Params params;
	params.RouteTable = RouteTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ViewManager.ResetRouteStack
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ViewManager::ResetRouteStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.ResetRouteStack");

	UPUMG_ViewManager_ResetRouteStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.ReplaceRoutePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                RoutePath                      (Parm, ZeroConstructor)
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ViewManager::ReplaceRoutePath(struct FString* RoutePath, bool* ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.ReplaceRoutePath");

	UPUMG_ViewManager_ReplaceRoutePath_Params params;
	params.RoutePath = RoutePath;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.ReplaceRoute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  RouteName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Data                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ViewManager::ReplaceRoute(struct FName* RouteName, bool* ForceTransition, class UObject** Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.ReplaceRoute");

	UPUMG_ViewManager_ReplaceRoute_Params params;
	params.RouteName = RouteName;
	params.ForceTransition = ForceTransition;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.RegisterStickyWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  RegisterName                   (Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_Widget**           Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPUMG_ViewManager::RegisterStickyWidget(struct FName* RegisterName, class UPUMG_Widget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.RegisterStickyWidget");

	UPUMG_ViewManager_RegisterStickyWidget_Params params;
	params.RegisterName = RegisterName;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ViewManager.PushRoutePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                RoutePath                      (Parm, ZeroConstructor)
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ViewManager::PushRoutePath(struct FString* RoutePath, bool* ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.PushRoutePath");

	UPUMG_ViewManager_PushRoutePath_Params params;
	params.RoutePath = RoutePath;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.PushRoute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  RouteName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                Data                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ViewManager::PushRoute(struct FName* RouteName, bool* ForceTransition, class UObject** Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.PushRoute");

	UPUMG_ViewManager_PushRoute_Params params;
	params.RouteName = RouteName;
	params.ForceTransition = ForceTransition;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.PopRoute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ViewManager::PopRoute(bool* ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.PopRoute");

	UPUMG_ViewManager_PopRoute_Params params;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.IsRouteValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  RouteName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ViewManager::IsRouteValid(struct FName* RouteName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.IsRouteValid");

	UPUMG_ViewManager_IsRouteValid_Params params;
	params.RouteName = RouteName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GoToRoute_InternalShowStep
// (Final, Native, Private)

void UPUMG_ViewManager::GoToRoute_InternalShowStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GoToRoute_InternalShowStep");

	UPUMG_ViewManager_GoToRoute_InternalShowStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ViewManager.GoToRoute_HandleShowFinished
// (Final, Native, Private)
// Parameters:
// class UPUMG_Widget**           Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPUMG_ViewManager::GoToRoute_HandleShowFinished(class UPUMG_Widget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GoToRoute_HandleShowFinished");

	UPUMG_ViewManager_GoToRoute_HandleShowFinished_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ViewManager.GoToRoute_HandleHideFinished
// (Final, Native, Private)
// Parameters:
// class UPUMG_Widget**           Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPUMG_ViewManager::GoToRoute_HandleHideFinished(class UPUMG_Widget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GoToRoute_HandleHideFinished");

	UPUMG_ViewManager_GoToRoute_HandleHideFinished_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformUMG.PUMG_ViewManager.GoToRoute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  NextRouteName                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ForceTransition                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ViewManager::GoToRoute(struct FName* NextRouteName, bool* ForceTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GoToRoute");

	UPUMG_ViewManager_GoToRoute_Params params;
	params.NextRouteName = NextRouteName;
	params.ForceTransition = ForceTransition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetPendingRouteData
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FName*                  RouteName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Data                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPUMG_ViewManager::GetPendingRouteData(struct FName* RouteName, class UObject** Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetPendingRouteData");

	UPUMG_ViewManager_GetPendingRouteData_Params params;
	params.RouteName = RouteName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EViewManagerTransitionState    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EViewManagerTransitionState UPUMG_ViewManager::GetCurrentTransitionState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionState");

	UPUMG_ViewManager_GetCurrentTransitionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionRouteStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UPUMG_ViewManager::GetCurrentTransitionRouteStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionRouteStack");

	UPUMG_ViewManager_GetCurrentTransitionRouteStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionRoute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UPUMG_ViewManager::GetCurrentTransitionRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetCurrentTransitionRoute");

	UPUMG_ViewManager_GetCurrentTransitionRoute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetCurrentRouteStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FName> UPUMG_ViewManager::GetCurrentRouteStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetCurrentRouteStack");

	UPUMG_ViewManager_GetCurrentRouteStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.GetCurrentRoute
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UPUMG_ViewManager::GetCurrentRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.GetCurrentRoute");

	UPUMG_ViewManager_GetCurrentRoute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformUMG.PUMG_ViewManager.ClearPendingTransition
// (Final, Native, Private)

void UPUMG_ViewManager::ClearPendingTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformUMG.PUMG_ViewManager.ClearPendingTransition");

	UPUMG_ViewManager_ClearPendingTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
