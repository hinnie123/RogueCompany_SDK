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

// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventStopToAkComponent
// (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
// Parameters:
// class USelectiveAkAudioEvent** SelectiveEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent**           AkComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USelectiveAkGameplayStatics::STATIC_PostSelectiveEventStopToAkComponent(class USelectiveAkAudioEvent** SelectiveEvent, class UAkComponent** AkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventStopToAkComponent");

	USelectiveAkGameplayStatics_PostSelectiveEventStopToAkComponent_Params params;
	params.SelectiveEvent = SelectiveEvent;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventStop
// (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
// Parameters:
// class USelectiveAkAudioEvent** SelectiveEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)

void USelectiveAkGameplayStatics::STATIC_PostSelectiveEventStop(class USelectiveAkAudioEvent** SelectiveEvent, class AActor** Actor, bool* bStopWhenAttachedToDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventStop");

	USelectiveAkGameplayStatics_PostSelectiveEventStop_Params params;
	params.SelectiveEvent = SelectiveEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventPlayToAkComponent
// (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
// Parameters:
// class USelectiveAkAudioEvent** SelectiveEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent**           AkComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USelectiveAkGameplayStatics::STATIC_PostSelectiveEventPlayToAkComponent(class USelectiveAkAudioEvent** SelectiveEvent, class UAkComponent** AkComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventPlayToAkComponent");

	USelectiveAkGameplayStatics_PostSelectiveEventPlayToAkComponent_Params params;
	params.SelectiveEvent = SelectiveEvent;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventPlay
// (Final, BlueprintCosmetic, Native, Static, Private, BlueprintCallable)
// Parameters:
// class USelectiveAkAudioEvent** SelectiveEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USelectiveAkGameplayStatics::STATIC_PostSelectiveEventPlay(class USelectiveAkAudioEvent** SelectiveEvent, class AActor** Actor, bool* bStopWhenAttachedToDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventPlay");

	USelectiveAkGameplayStatics_PostSelectiveEventPlay_Params params;
	params.SelectiveEvent = SelectiveEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetStopEventsFromSelectiveEventForAkComponent
// (Final, BlueprintCosmetic, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FSelectiveEventStopPair> OutStopEvents                  (Parm, OutParm, ZeroConstructor)
// class USelectiveAkAudioEvent** SelectiveEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent**           AkComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USelectiveAkGameplayStatics::STATIC_GetStopEventsFromSelectiveEventForAkComponent(class USelectiveAkAudioEvent** SelectiveEvent, class UAkComponent** AkComponent, TArray<struct FSelectiveEventStopPair>* OutStopEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetStopEventsFromSelectiveEventForAkComponent");

	USelectiveAkGameplayStatics_GetStopEventsFromSelectiveEventForAkComponent_Params params;
	params.SelectiveEvent = SelectiveEvent;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStopEvents != nullptr)
		*OutStopEvents = params.OutStopEvents;
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetStopEventsFromSelectiveEvent
// (Final, BlueprintCosmetic, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FSelectiveEventStopPair> OutStopEvents                  (Parm, OutParm, ZeroConstructor)
// class USelectiveAkAudioEvent** SelectiveEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void USelectiveAkGameplayStatics::STATIC_GetStopEventsFromSelectiveEvent(class USelectiveAkAudioEvent** SelectiveEvent, class AActor** Actor, TArray<struct FSelectiveEventStopPair>* OutStopEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetStopEventsFromSelectiveEvent");

	USelectiveAkGameplayStatics_GetStopEventsFromSelectiveEvent_Params params;
	params.SelectiveEvent = SelectiveEvent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStopEvents != nullptr)
		*OutStopEvents = params.OutStopEvents;
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetPlayEventFromSelectiveEventForAkComponent
// (Final, BlueprintCosmetic, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class USelectiveAkAudioEvent** SelectiveEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent**           AkComponent                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 OutEventName                   (Parm, OutParm, ZeroConstructor)
// class UAkAudioEvent*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAkAudioEvent* USelectiveAkGameplayStatics::STATIC_GetPlayEventFromSelectiveEventForAkComponent(class USelectiveAkAudioEvent** SelectiveEvent, class UAkComponent** AkComponent, struct FString* OutEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetPlayEventFromSelectiveEventForAkComponent");

	USelectiveAkGameplayStatics_GetPlayEventFromSelectiveEventForAkComponent_Params params;
	params.SelectiveEvent = SelectiveEvent;
	params.AkComponent = AkComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEventName != nullptr)
		*OutEventName = params.OutEventName;

	return params.ReturnValue;
}


// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetPlayEventFromSelectiveEvent
// (Final, BlueprintCosmetic, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class USelectiveAkAudioEvent** SelectiveEvent                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutEventName                   (Parm, OutParm, ZeroConstructor)
// class UAkAudioEvent*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAkAudioEvent* USelectiveAkGameplayStatics::STATIC_GetPlayEventFromSelectiveEvent(class USelectiveAkAudioEvent** SelectiveEvent, class AActor** Actor, struct FString* OutEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetPlayEventFromSelectiveEvent");

	USelectiveAkGameplayStatics_GetPlayEventFromSelectiveEvent_Params params;
	params.SelectiveEvent = SelectiveEvent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEventName != nullptr)
		*OutEventName = params.OutEventName;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
