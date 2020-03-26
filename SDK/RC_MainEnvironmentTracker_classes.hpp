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

// DynamicClass MainEnvironmentTracker.MainEnvironmentTracker_C
// 0x0040 (0x01B8 - 0x0178)
class UMainEnvironmentTracker_C : public UEnvironmentTrackerComponent
{
public:
	TArray<struct FName>                               Environment_Priorties;                                    // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       Temp_name_Variable;                                       // 0x0188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchName_CmpSuccess;                             // 0x0190(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	struct FName                                       Temp_name_Variable1;                                      // 0x0194(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       Temp_name_Variable2;                                      // 0x019C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       Temp_name_Variable3;                                      // 0x01A4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_OldEnvironment;                              // 0x01AC(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MainEnvironmentTracker.MainEnvironmentTracker_C");
		return ptr;
	}


	void BlueprintEnvironmentChanged(struct FName* bpp__OldEnvironment__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
