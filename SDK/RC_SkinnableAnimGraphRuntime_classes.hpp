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

// Class SkinnableAnimGraphRuntime.AnimNotify_PlaySkinnedParticleEffect
// 0x0010 (0x00A0 - 0x0090)
class UAnimNotify_PlaySkinnedParticleEffect : public UAnimNotify_PlayParticleEffect
{
public:
	struct FName                                       SkinKeyword;                                              // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SkinnableAnimGraphRuntime.AnimNotify_PlaySkinnedParticleEffect");
		return ptr;
	}

};


// Class SkinnableAnimGraphRuntime.AnimNotify_SkinnedAkEvent
// 0x0030 (0x0068 - 0x0038)
class UAnimNotify_SkinnedAkEvent : public UAnimNotify
{
public:
	struct FName                                       AttachName;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               _Event;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFollow;                                                  // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	struct FString                                     EventName;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       SkinKeyword;                                              // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SkinnableAnimGraphRuntime.AnimNotify_SkinnedAkEvent");
		return ptr;
	}

};


// Class SkinnableAnimGraphRuntime.AnimNotify_SkinSelectiveAkEvent
// 0x0008 (0x0058 - 0x0050)
class UAnimNotify_SkinSelectiveAkEvent : public UAnimNotify_SelectiveAkEvent
{
public:
	struct FName                                       SkinKeyword;                                              // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SkinnableAnimGraphRuntime.AnimNotify_SkinSelectiveAkEvent");
		return ptr;
	}

};


// Class SkinnableAnimGraphRuntime.SkinnedAnimInstance
// 0x0000 (0x0270 - 0x0270)
class USkinnedAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SkinnableAnimGraphRuntime.SkinnedAnimInstance");
		return ptr;
	}


	class UMultiSkinObject* GetSkinObject();
	class UBlendSpace* GetSkinnedBlendSpace(struct FName* Keyword, class UBlendSpace** Default, bool* bHasOverride);
	class UAnimSequence* GetSkinnedAnimSequence(struct FName* Keyword, class UAnimSequence** Default, bool* bHasOverride);
	class UAimOffsetBlendSpace* GetSkinnedAnimOffset(struct FName* Keyword, class UAimOffsetBlendSpace** Default, bool* bHasOverride);
	class UAnimMontage* GetSkinnedAnimMontage(struct FName* Keyword, class UAnimMontage** Default, bool* bHasOverride);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
