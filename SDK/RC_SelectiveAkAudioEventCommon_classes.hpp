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

// Class SelectiveAkAudioEventCommon.AnimNotify_SelectiveAkEvent
// 0x0018 (0x0050 - 0x0038)
class UAnimNotify_SelectiveAkEvent : public UAnimNotify
{
public:
	struct FName                                       AttachName;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USelectiveAkAudioEvent*                      _Event;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFollow;                                                  // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SelectiveAkAudioEventCommon.AnimNotify_SelectiveAkEvent");
		return ptr;
	}

};


// Class SelectiveAkAudioEventCommon.SelectiveAkAudioEvent
// 0x0000 (0x0028 - 0x0028)
class USelectiveAkAudioEvent : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SelectiveAkAudioEventCommon.SelectiveAkAudioEvent");
		return ptr;
	}

};


// Class SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics
// 0x0000 (0x0028 - 0x0028)
class USelectiveAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics");
		return ptr;
	}


	void STATIC_PostSelectiveEventStopToAkComponent(class USelectiveAkAudioEvent** SelectiveEvent, class UAkComponent** AkComponent);
	void STATIC_PostSelectiveEventStop(class USelectiveAkAudioEvent** SelectiveEvent, class AActor** Actor, bool* bStopWhenAttachedToDestroyed);
	int STATIC_PostSelectiveEventPlayToAkComponent(class USelectiveAkAudioEvent** SelectiveEvent, class UAkComponent** AkComponent);
	int STATIC_PostSelectiveEventPlay(class USelectiveAkAudioEvent** SelectiveEvent, class AActor** Actor, bool* bStopWhenAttachedToDestroyed);
	void STATIC_GetStopEventsFromSelectiveEventForAkComponent(class USelectiveAkAudioEvent** SelectiveEvent, class UAkComponent** AkComponent, TArray<struct FSelectiveEventStopPair>* OutStopEvents);
	void STATIC_GetStopEventsFromSelectiveEvent(class USelectiveAkAudioEvent** SelectiveEvent, class AActor** Actor, TArray<struct FSelectiveEventStopPair>* OutStopEvents);
	class UAkAudioEvent* STATIC_GetPlayEventFromSelectiveEventForAkComponent(class USelectiveAkAudioEvent** SelectiveEvent, class UAkComponent** AkComponent, struct FString* OutEventName);
	class UAkAudioEvent* STATIC_GetPlayEventFromSelectiveEvent(class USelectiveAkAudioEvent** SelectiveEvent, class AActor** Actor, struct FString* OutEventName);
};


// Class SelectiveAkAudioEventCommon.ViewDependentAkAudioEvent
// 0x0028 (0x0050 - 0x0028)
class UViewDependentAkAudioEvent : public USelectiveAkAudioEvent
{
public:
	class UClass*                                      Rules;                                                    // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoClear, IsPlainOldData)
	class UAkAudioEvent*                               FirstPersonAkEventPlay;                                   // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ThirdPersonAkEventPlay;                                   // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               FirstPersonAkEventStop;                                   // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               ThirdPersonAkEventStop;                                   // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SelectiveAkAudioEventCommon.ViewDependentAkAudioEvent");
		return ptr;
	}

};


// Class SelectiveAkAudioEventCommon.ViewDependentAkEventRules
// 0x0000 (0x0028 - 0x0028)
class UViewDependentAkEventRules : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SelectiveAkAudioEventCommon.ViewDependentAkEventRules");
		return ptr;
	}

};


// Class SelectiveAkAudioEventCommon.ViewDependentRules_IsViewTarget
// 0x0000 (0x0028 - 0x0028)
class UViewDependentRules_IsViewTarget : public UViewDependentAkEventRules
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SelectiveAkAudioEventCommon.ViewDependentRules_IsViewTarget");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
