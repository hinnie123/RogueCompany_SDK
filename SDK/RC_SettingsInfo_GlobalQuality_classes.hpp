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

// BlueprintGeneratedClass SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C
// 0x0018 (0x00E8 - 0x00D0)
class USettingsInfo_GlobalQuality_C : public UKSSettingsInfo_Generic
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FString>                             QualityNames;                                             // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C");
		return ptr;
	}


	void InitializeValue();
	void ExecuteUbergraph_SettingsInfo_GlobalQuality(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
