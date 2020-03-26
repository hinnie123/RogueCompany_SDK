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

// Class AsyncTraceUtil.AsyncTraceUtilBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UAsyncTraceUtilBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AsyncTraceUtil.AsyncTraceUtilBPLibrary");
		return ptr;
	}


	void OnMultiAsyncTraceResult__DelegateSignature(bool* bBlockingHit, TArray<struct FHitResult>* OutHits, struct FVector* start, struct FVector* end);
	bool STATIC_MultipleLineTraceAsync(class UObject** WorldContextObject, TArray<struct FVector>* Starts, TArray<struct FVector>* Ends, TEnumAsByte<ECollisionChannel>* TraceChannel, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, bool* bIgnoreSelf, struct FLatentActionInfo* LatentInfo, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime, TArray<struct FHitResult>* OutHits);
	void STATIC_MultiLineTraceByChannelAsync(class UObject** WorldContextObject, struct FVector* start, struct FVector* end, TEnumAsByte<ECollisionChannel>* TraceChannel, bool* bTraceComplex, TArray<class AActor*>* ActorsToIgnore, TEnumAsByte<EDrawDebugTrace>* DrawDebugType, struct FScriptDelegate* OnTraceComplete, bool* bIgnoreSelf, struct FLatentActionInfo* LatentInfo, struct FLinearColor* TraceColor, struct FLinearColor* TraceHitColor, float* DrawTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
