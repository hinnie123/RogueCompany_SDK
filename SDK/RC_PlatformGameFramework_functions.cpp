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

// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ShowSkinnedMeshMaterialSection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkinnedMeshComponent**  SkinnedMeshComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           MaterialID                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bShow                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           LODIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UPGame_BlueprintFunctionLibrary::STATIC_ShowSkinnedMeshMaterialSection(class USkinnedMeshComponent** SkinnedMeshComponent, int* MaterialID, bool* bShow, int* LODIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ShowSkinnedMeshMaterialSection");

	UPGame_BlueprintFunctionLibrary_ShowSkinnedMeshMaterialSection_Params params;
	params.SkinnedMeshComponent = SkinnedMeshComponent;
	params.MaterialID = MaterialID;
	params.bShow = bShow;
	params.LODIndex = LODIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.SetLightingChannels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLightingChannels*      NewLightingChannels            (Parm)

void UPGame_BlueprintFunctionLibrary::STATIC_SetLightingChannels(class UPrimitiveComponent** PrimitiveComponent, struct FLightingChannels* NewLightingChannels)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.SetLightingChannels");

	UPGame_BlueprintFunctionLibrary_SetLightingChannels_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.NewLightingChannels = NewLightingChannels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsSteamClient
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPGame_BlueprintFunctionLibrary::STATIC_IsSteamClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsSteamClient");

	UPGame_BlueprintFunctionLibrary_IsSteamClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatformType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          IsConsole                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsPC                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMobile                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPGame_BlueprintFunctionLibrary::STATIC_IsPlatformType(bool* IsConsole, bool* IsPC, bool* IsMobile)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatformType");

	UPGame_BlueprintFunctionLibrary_IsPlatformType_Params params;
	params.IsConsole = IsConsole;
	params.IsPC = IsPC;
	params.IsMobile = IsMobile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          IsXboxOne                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsPS4                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsSwitch                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsWindows                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMac                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsLinux                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsIOS                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsAndroid                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPGame_BlueprintFunctionLibrary::STATIC_IsPlatform(bool* IsXboxOne, bool* IsPS4, bool* IsSwitch, bool* IsWindows, bool* IsMac, bool* IsLinux, bool* IsIOS, bool* IsAndroid)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsPlatform");

	UPGame_BlueprintFunctionLibrary_IsPlatform_Params params;
	params.IsXboxOne = IsXboxOne;
	params.IsPS4 = IsPS4;
	params.IsSwitch = IsSwitch;
	params.IsWindows = IsWindows;
	params.IsMac = IsMac;
	params.IsLinux = IsLinux;
	params.IsIOS = IsIOS;
	params.IsAndroid = IsAndroid;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsGameBit
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EGameBits*                     GameBit                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPGame_BlueprintFunctionLibrary::STATIC_IsGameBit(EGameBits* GameBit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsGameBit");

	UPGame_BlueprintFunctionLibrary_IsGameBit_Params params;
	params.GameBit = GameBit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsAnonymousLogin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPGame_BlueprintFunctionLibrary::STATIC_IsAnonymousLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.IsAnonymousLogin");

	UPGame_BlueprintFunctionLibrary_IsAnonymousLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetPropertyClampedValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPGame_Property*        prop                           (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPGame_BlueprintFunctionLibrary::STATIC_GetPropertyClampedValue(struct FPGame_Property* prop)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetPropertyClampedValue");

	UPGame_BlueprintFunctionLibrary_GetPropertyClampedValue_Params params;
	params.prop = prop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetGameLocalizationType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EGameLocalizationType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGameLocalizationType UPGame_BlueprintFunctionLibrary::STATIC_GetGameLocalizationType()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.GetGameLocalizationType");

	UPGame_BlueprintFunctionLibrary_GetGameLocalizationType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.FrameDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NumFramesToDelay               (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo*      LatentInfo                     (Parm)

void UPGame_BlueprintFunctionLibrary::STATIC_FrameDelay(class UObject** WorldContextObject, int* NumFramesToDelay, struct FLatentActionInfo* LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.FrameDelay");

	UPGame_BlueprintFunctionLibrary_FrameDelay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NumFramesToDelay = NumFramesToDelay;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToEngineLightingChannels
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPGame_BlueprintableLightingChannels* BlueprintableLightingChannels  (Parm)
// struct FLightingChannels       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLightingChannels UPGame_BlueprintFunctionLibrary::STATIC_ConvertToEngineLightingChannels(struct FPGame_BlueprintableLightingChannels* BlueprintableLightingChannels)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToEngineLightingChannels");

	UPGame_BlueprintFunctionLibrary_ConvertToEngineLightingChannels_Params params;
	params.BlueprintableLightingChannels = BlueprintableLightingChannels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToBlueprintableLightingChannels
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLightingChannels*      EngineLightChannels            (Parm)
// struct FPGame_BlueprintableLightingChannels ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPGame_BlueprintableLightingChannels UPGame_BlueprintFunctionLibrary::STATIC_ConvertToBlueprintableLightingChannels(struct FLightingChannels* EngineLightChannels)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.ConvertToBlueprintableLightingChannels");

	UPGame_BlueprintFunctionLibrary_ConvertToBlueprintableLightingChannels_Params params;
	params.EngineLightChannels = EngineLightChannels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreMeshComponentTexturesFullyStreamedIn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMeshComponent**         InMeshComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPGame_BlueprintFunctionLibrary::STATIC_AreMeshComponentTexturesFullyStreamedIn(class UMeshComponent** InMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreMeshComponentTexturesFullyStreamedIn");

	UPGame_BlueprintFunctionLibrary_AreMeshComponentTexturesFullyStreamedIn_Params params;
	params.InMeshComponent = InMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreActorTexturesFullyStreamedIn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor**                 InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPGame_BlueprintFunctionLibrary::STATIC_AreActorTexturesFullyStreamedIn(class AActor** InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_BlueprintFunctionLibrary.AreActorTexturesFullyStreamedIn");

	UPGame_BlueprintFunctionLibrary_AreActorTexturesFullyStreamedIn_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_Character.OnRep_Tween
// (Native, Protected)

void APGame_Character::OnRep_Tween()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_Character.OnRep_Tween");

	APGame_Character_OnRep_Tween_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_Character.OnRep_Charge
// (Native, Protected)

void APGame_Character::OnRep_Charge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_Character.OnRep_Charge");

	APGame_Character_OnRep_Charge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CharacterMovementComponent.StopTween
// (Native, Public)

void UPGame_CharacterMovementComponent::StopTween()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CharacterMovementComponent.StopTween");

	UPGame_CharacterMovementComponent_StopTween_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CharacterMovementComponent.StopCharge
// (Native, Public)

void UPGame_CharacterMovementComponent::StopCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CharacterMovementComponent.StopCharge");

	UPGame_CharacterMovementComponent_StopCharge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CharacterMovementComponent.StartTween
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// unsigned char*                 TweenType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TweenDestination               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         TweenTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPGame_CharacterMovementComponent::StartTween(unsigned char* TweenType, struct FVector* TweenDestination, float* TweenTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CharacterMovementComponent.StartTween");

	UPGame_CharacterMovementComponent_StartTween_Params params;
	params.TweenType = TweenType;
	params.TweenDestination = TweenDestination;
	params.TweenTime = TweenTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CharacterMovementComponent.StartCharge
// (Native, Public, HasOutParms, HasDefaults)
// Parameters:
// unsigned char*                 ChargeType                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ChargeInitialYaw               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                ChargeInitialLocation          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         ChargeSpeed                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ChargeRange                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UPGame_CharacterMovementComponent::StartCharge(unsigned char* ChargeType, float* ChargeInitialYaw, struct FVector* ChargeInitialLocation, float* ChargeSpeed, float* ChargeRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CharacterMovementComponent.StartCharge");

	UPGame_CharacterMovementComponent_StartCharge_Params params;
	params.ChargeType = ChargeType;
	params.ChargeInitialYaw = ChargeInitialYaw;
	params.ChargeInitialLocation = ChargeInitialLocation;
	params.ChargeSpeed = ChargeSpeed;
	params.ChargeRange = ChargeRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Tween
// (Native, Public, HasOutParms)
// Parameters:
// struct FTweenInfo*             TweenInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UPGame_CharacterMovementComponent::OnRep_Tween(struct FTweenInfo* TweenInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Tween");

	UPGame_CharacterMovementComponent_OnRep_Tween_Params params;
	params.TweenInfo = TweenInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Charge
// (Native, Public, HasOutParms)
// Parameters:
// struct FChargeInfo*            ChargeInfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UPGame_CharacterMovementComponent::OnRep_Charge(struct FChargeInfo* ChargeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CharacterMovementComponent.OnRep_Charge");

	UPGame_CharacterMovementComponent_OnRep_Charge_Params params;
	params.ChargeInfo = ChargeInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CheatComponent.ServerExecCall
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FString*                request                        (Parm, ZeroConstructor)

void UPGame_CheatComponent::ServerExecCall(struct FString* request)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.ServerExecCall");

	UPGame_CheatComponent_ServerExecCall_Params params;
	params.request = request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CheatComponent.ServerExec
// (Exec, Native, Protected)
// Parameters:
// struct FString*                request                        (Parm, ZeroConstructor)

void UPGame_CheatComponent::ServerExec(struct FString* request)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.ServerExec");

	UPGame_CheatComponent_ServerExec_Params params;
	params.request = request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CheatComponent.gmmf
// (Final, Exec, Native, Protected)

void UPGame_CheatComponent::gmmf()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.gmmf");

	UPGame_CheatComponent_gmmf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CheatComponent.gmJoinQueue
// (Final, Exec, Native, Protected)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)

void UPGame_CheatComponent::gmJoinQueue(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.gmJoinQueue");

	UPGame_CheatComponent_gmJoinQueue_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CheatComponent.gmCommand
// (Final, Exec, Native, Protected)
// Parameters:
// struct FString*                request                        (Parm, ZeroConstructor)

void UPGame_CheatComponent::gmCommand(struct FString* request)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.gmCommand");

	UPGame_CheatComponent_gmCommand_Params params;
	params.request = request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CheatComponent.gmC
// (Final, Exec, Native, Protected)
// Parameters:
// struct FString*                request                        (Parm, ZeroConstructor)

void UPGame_CheatComponent::gmC(struct FString* request)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CheatComponent.gmC");

	UPGame_CheatComponent_gmC_Params params;
	params.request = request;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CombatLogVisualizer.Visualize
// (Event, Public, BlueprintEvent)

void APGame_CombatLogVisualizer::Visualize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CombatLogVisualizer.Visualize");

	APGame_CombatLogVisualizer_Visualize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CombatLogVisualizer.LoadCombatLog
// (Final, Native, Public)

void APGame_CombatLogVisualizer::LoadCombatLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CombatLogVisualizer.LoadCombatLog");

	APGame_CombatLogVisualizer_LoadCombatLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_CombatLogVisualizer.ClearVisualization
// (Event, Public, BlueprintEvent)

void APGame_CombatLogVisualizer::ClearVisualization()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_CombatLogVisualizer.ClearVisualization");

	APGame_CombatLogVisualizer_ClearVisualization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.OnRep_EffectData
// (Native, Public)

void UPGame_EffectManagerComponent::OnRep_EffectData()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.OnRep_EffectData");

	UPGame_EffectManagerComponent_OnRep_EffectData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.InstantEffectBroadcast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FPGame_InstantEffectRepData* repData                        (Parm)

void UPGame_EffectManagerComponent::InstantEffectBroadcast(struct FPGame_InstantEffectRepData* repData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.InstantEffectBroadcast");

	UPGame_EffectManagerComponent_InstantEffectBroadcast_Params params;
	params.repData = repData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueIntFromBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           PropertyId                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPGame_EffectManagerComponent::GetPropertyValueIntFromBlueprint(int* PropertyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueIntFromBlueprint");

	UPGame_EffectManagerComponent_GetPropertyValueIntFromBlueprint_Params params;
	params.PropertyId = PropertyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueFromBlueprint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           PropertyId                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPGame_EffectManagerComponent::GetPropertyValueFromBlueprint(int* PropertyId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.GetPropertyValueFromBlueprint");

	UPGame_EffectManagerComponent_GetPropertyValueFromBlueprint_Params params;
	params.PropertyId = PropertyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForPersistentRepData
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FPGame_PersistentEffectRepData* repData                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UPGame_EffectGroupPersistent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPGame_EffectGroupPersistent* UPGame_EffectManagerComponent::GetDefaultEffectGroupForPersistentRepData(struct FPGame_PersistentEffectRepData* repData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForPersistentRepData");

	UPGame_EffectManagerComponent_GetDefaultEffectGroupForPersistentRepData_Params params;
	params.repData = repData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForInstantRepData
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// struct FPGame_InstantEffectRepData* repData                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UPGame_EffectGroupInstant* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPGame_EffectGroupInstant* UPGame_EffectManagerComponent::GetDefaultEffectGroupForInstantRepData(struct FPGame_InstantEffectRepData* repData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.GetDefaultEffectGroupForInstantRepData");

	UPGame_EffectManagerComponent_GetDefaultEffectGroupForInstantRepData_Params params;
	params.repData = repData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.CreatePersistentAttachment
// (Native, Public, HasOutParms)
// Parameters:
// struct FPGame_PersistentEffectRepData* repData                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UPGame_EffectAttachment* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPGame_EffectAttachment* UPGame_EffectManagerComponent::CreatePersistentAttachment(struct FPGame_PersistentEffectRepData* repData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.CreatePersistentAttachment");

	UPGame_EffectManagerComponent_CreatePersistentAttachment_Params params;
	params.repData = repData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_EffectManagerComponent.CreateInstantAttachment
// (Native, Public, HasOutParms)
// Parameters:
// struct FPGame_InstantEffectRepData* repData                        (ConstParm, Parm, OutParm, ReferenceParm)

void UPGame_EffectManagerComponent::CreateInstantAttachment(struct FPGame_InstantEffectRepData* repData)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_EffectManagerComponent.CreateInstantAttachment");

	UPGame_EffectManagerComponent_CreateInstantAttachment_Params params;
	params.repData = repData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_Effectable.GetIntPropertyValue
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           propIdInt                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPGame_Effectable::GetIntPropertyValue(int* propIdInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_Effectable.GetIntPropertyValue");

	UPGame_Effectable_GetIntPropertyValue_Params params;
	params.propIdInt = propIdInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_Effectable.GetFloatPropertyValue
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           propIdInt                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPGame_Effectable::GetFloatPropertyValue(int* propIdInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_Effectable.GetFloatPropertyValue");

	UPGame_Effectable_GetFloatPropertyValue_Params params;
	params.propIdInt = propIdInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformGameFramework.PGame_GameInstance.EndLoadingScreen
// (Native, Protected)
// Parameters:
// class UWorld**                 World                          (Parm, ZeroConstructor, IsPlainOldData)

void UPGame_GameInstance::EndLoadingScreen(class UWorld** World)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_GameInstance.EndLoadingScreen");

	UPGame_GameInstance_EndLoadingScreen_Params params;
	params.World = World;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_GameInstance.BeginLoadingScreen
// (Native, Protected)
// Parameters:
// struct FString*                mapName                        (Parm, ZeroConstructor)

void UPGame_GameInstance::BeginLoadingScreen(struct FString* mapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_GameInstance.BeginLoadingScreen");

	UPGame_GameInstance_BeginLoadingScreen_Params params;
	params.mapName = mapName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_GameMode.InactivePlayerStateDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor**                 InActor                        (Parm, ZeroConstructor, IsPlainOldData)

void APGame_GameMode::InactivePlayerStateDestroyed(class AActor** InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_GameMode.InactivePlayerStateDestroyed");

	APGame_GameMode_InactivePlayerStateDestroyed_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_GameMode.FinalizeMatchEnded
// (Native, Protected)

void APGame_GameMode::FinalizeMatchEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_GameMode.FinalizeMatchEnded");

	APGame_GameMode_FinalizeMatchEnded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_LandingPanelJSONHandler.RequestNewJson
// (Final, Native, Private)

void UPGame_LandingPanelJSONHandler::RequestNewJson()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_LandingPanelJSONHandler.RequestNewJson");

	UPGame_LandingPanelJSONHandler_RequestNewJson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_PositionHistoryComponent.RemoveTrackedPrimitive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    InPrimitive                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPGame_PositionHistoryComponent::RemoveTrackedPrimitive(class UPrimitiveComponent** InPrimitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_PositionHistoryComponent.RemoveTrackedPrimitive");

	UPGame_PositionHistoryComponent_RemoveTrackedPrimitive_Params params;
	params.InPrimitive = InPrimitive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformGameFramework.PGame_PositionHistoryComponent.AddTrackedPrimitive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent**    InPrimitive                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           Priority                       (Parm, ZeroConstructor, IsPlainOldData)

void UPGame_PositionHistoryComponent::AddTrackedPrimitive(class UPrimitiveComponent** InPrimitive, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformGameFramework.PGame_PositionHistoryComponent.AddTrackedPrimitive");

	UPGame_PositionHistoryComponent_AddTrackedPrimitive_Params params;
	params.InPrimitive = InPrimitive;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
