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

// DelegateFunction AsyncTraceUtil.AsyncTraceUtilBPLibrary.OnMultiAsyncTraceResult__DelegateSignature
// (Public, Delegate, HasOutParms, HasDefaults)
// Parameters:
// bool*                          bBlockingHit                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>*     OutHits                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FVector*                start                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                end                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAsyncTraceUtilBPLibrary::OnMultiAsyncTraceResult__DelegateSignature(bool* bBlockingHit, TArray<struct FHitResult>* OutHits, struct FVector* start, struct FVector* end)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AsyncTraceUtil.AsyncTraceUtilBPLibrary.OnMultiAsyncTraceResult__DelegateSignature");

	UAsyncTraceUtilBPLibrary_OnMultiAsyncTraceResult__DelegateSignature_Params params;
	params.bBlockingHit = bBlockingHit;
	params.OutHits = OutHits;
	params.start = start;
	params.end = end;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultipleLineTraceAsync
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>*        Starts                         (ConstParm, Parm, ZeroConstructor)
// TArray<struct FVector>*        Ends                           (ConstParm, Parm, ZeroConstructor)
// TEnumAsByte<ECollisionChannel>* TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHitResult>      OutHits                        (Parm, OutParm, ZeroConstructor)
// bool*                          bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo*      LatentInfo                     (Parm)
// struct FLinearColor*           TraceColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAsyncTraceUtilBPLibrary::STATIC_MultipleLineTraceAsync(class UObject** WorldContextObject, TArray<struct FVector>* Starts, TArray<struct FVector>* Ends, TEnumAsByte<ECollisionChannel>* TraceChannel, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLatentActionInfo* LatentInfo, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, TArray<struct FHitResult>* OutHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultipleLineTraceAsync");

	UAsyncTraceUtilBPLibrary_MultipleLineTraceAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Starts = Starts;
	params.Ends = Ends;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.LatentInfo = LatentInfo;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHits != nullptr)
		*OutHits = params.OutHits;

	return params.ReturnValue;
}


// Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultiLineTraceByChannelAsync
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                start                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector*                end                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ECollisionChannel>* TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>*         ActorsToIgnore                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<EDrawDebugTrace>*  DrawDebugType                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        OnTraceComplete                (Parm, ZeroConstructor)
// bool*                          bIgnoreSelf                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo*      LatentInfo                     (Parm)
// struct FLinearColor*           TraceColor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           TraceHitColor                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UAsyncTraceUtilBPLibrary::STATIC_MultiLineTraceByChannelAsync(class UObject** WorldContextObject, struct FVector* start, struct FVector* end, TEnumAsByte<ECollisionChannel>* TraceChannel, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, struct FScriptDelegate* OnTraceComplete, bool* bIgnoreSelf, struct FLatentActionInfo* LatentInfo, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultiLineTraceByChannelAsync");

	UAsyncTraceUtilBPLibrary_MultiLineTraceByChannelAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.start = start;
	params.end = end;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.OnTraceComplete = OnTraceComplete;
	params.bIgnoreSelf = bIgnoreSelf;
	params.LatentInfo = LatentInfo;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
