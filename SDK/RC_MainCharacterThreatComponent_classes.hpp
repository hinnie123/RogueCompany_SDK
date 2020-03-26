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

// DynamicClass MainCharacterThreatComponent.MainCharacterThreatComponent_C
// 0x0090 (0x0270 - 0x01E0)
class UMainCharacterThreatComponent_C : public UConfigurableThreatComponent_C
{
public:
	TMap<int, struct FLinearColor>                     DebugColorMap;                                            // 0x01E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DebuggingVisuals;                                         // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0231(0x0003) MISSED OFFSET
	struct FLinearColor                                K2Node_MakeStruct_LinearColor;                            // 0x0234(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x0244(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_Show;                                        // 0x0248(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	struct FLinearColor                                K2Node_MakeStruct_LinearColor1;                           // 0x024C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_Map_Find_Value;                                  // 0x025C(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x026C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MainCharacterThreatComponent.MainCharacterThreatComponent_C");
		return ptr;
	}


	void ReceiveTick(float* bpp__DeltaSeconds__pf);
	void DebugThreatLevels(bool* bpp__Show__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
