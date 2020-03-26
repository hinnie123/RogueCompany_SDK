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

// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventStopToAkComponent
struct USelectiveAkGameplayStatics_PostSelectiveEventStopToAkComponent_Params
{
	class USelectiveAkAudioEvent**                     SelectiveEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkComponent**                               AkComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventStop
struct USelectiveAkGameplayStatics_PostSelectiveEventStop_Params
{
	class USelectiveAkAudioEvent**                     SelectiveEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventPlayToAkComponent
struct USelectiveAkGameplayStatics_PostSelectiveEventPlayToAkComponent_Params
{
	class USelectiveAkAudioEvent**                     SelectiveEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkComponent**                               AkComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.PostSelectiveEventPlay
struct USelectiveAkGameplayStatics_PostSelectiveEventPlay_Params
{
	class USelectiveAkAudioEvent**                     SelectiveEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetStopEventsFromSelectiveEventForAkComponent
struct USelectiveAkGameplayStatics_GetStopEventsFromSelectiveEventForAkComponent_Params
{
	TArray<struct FSelectiveEventStopPair>             OutStopEvents;                                            // (Parm, OutParm, ZeroConstructor)
	class USelectiveAkAudioEvent**                     SelectiveEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkComponent**                               AkComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetStopEventsFromSelectiveEvent
struct USelectiveAkGameplayStatics_GetStopEventsFromSelectiveEvent_Params
{
	TArray<struct FSelectiveEventStopPair>             OutStopEvents;                                            // (Parm, OutParm, ZeroConstructor)
	class USelectiveAkAudioEvent**                     SelectiveEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetPlayEventFromSelectiveEventForAkComponent
struct USelectiveAkGameplayStatics_GetPlayEventFromSelectiveEventForAkComponent_Params
{
	class USelectiveAkAudioEvent**                     SelectiveEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkComponent**                               AkComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     OutEventName;                                             // (Parm, OutParm, ZeroConstructor)
	class UAkAudioEvent*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics.GetPlayEventFromSelectiveEvent
struct USelectiveAkGameplayStatics_GetPlayEventFromSelectiveEvent_Params
{
	class USelectiveAkAudioEvent**                     SelectiveEvent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OutEventName;                                             // (Parm, OutParm, ZeroConstructor)
	class UAkAudioEvent*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
