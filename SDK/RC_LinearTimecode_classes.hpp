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

// Class LinearTimecode.LinearTimecodeComponent
// 0x0070 (0x02E0 - 0x0270)
class ULinearTimecodeComponent : public USceneComponent
{
public:
	class UMediaPlayer*                                _MediaPlayer;                                             // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDropTimecode                               _DropTimecode;                                            // 0x0278(0x001C) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTimecodeChange;                                         // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x38];                                      // 0x02A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LinearTimecode.LinearTimecodeComponent");
		return ptr;
	}


	void STATIC_SetDropTimecodeFrameNumber(struct FDropTimecode* Timecode, int* FrameNumber, struct FDropTimecode* OutTimecode);
	void STATIC_GetDropTimeCodeFrameNumber(struct FDropTimecode* Timecode, int* FrameNumber);
	int GetDropFrameNumber();
};


// Class LinearTimecode.DropTimecodeToStringConversion
// 0x0000 (0x0028 - 0x0028)
class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LinearTimecode.DropTimecodeToStringConversion");
		return ptr;
	}


	struct FString STATIC_Conv_DropTimecodeToString(struct FDropTimecode* InTimecode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
