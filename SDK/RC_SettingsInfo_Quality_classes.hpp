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

// BlueprintGeneratedClass SettingsInfo_Quality.SettingsInfo_Quality_C
// 0x0008 (0x00D8 - 0x00D0)
class USettingsInfo_Quality_C : public UKSSettingsInfo_Generic
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SettingsInfo_Quality.SettingsInfo_Quality_C");
		return ptr;
	}


	void InitializeValue();
	void ExecuteUbergraph_SettingsInfo_Quality(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
