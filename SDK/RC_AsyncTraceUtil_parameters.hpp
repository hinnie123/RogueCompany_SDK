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

// DelegateFunction AsyncTraceUtil.AsyncTraceUtilBPLibrary.OnMultiAsyncTraceResult__DelegateSignature
struct UAsyncTraceUtilBPLibrary_OnMultiAsyncTraceResult__DelegateSignature_Params
{
	bool*                                              bBlockingHit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>*                         OutHits;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    start;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    end;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultipleLineTraceAsync
struct UAsyncTraceUtilBPLibrary_MultipleLineTraceAsync_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>*                            Starts;                                                   // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FVector>*                            Ends;                                                     // (ConstParm, Parm, ZeroConstructor)
	TEnumAsByte<ECollisionChannel>*                    TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo*                          LatentInfo;                                               // (Parm)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultiLineTraceByChannelAsync
struct UAsyncTraceUtilBPLibrary_MultiLineTraceByChannelAsync_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    start;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    end;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>*                    TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            OnTraceComplete;                                          // (Parm, ZeroConstructor)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo*                          LatentInfo;                                               // (Parm)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
