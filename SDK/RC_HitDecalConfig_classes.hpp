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

// BlueprintGeneratedClass HitDecalConfig.HitDecalConfig_C
// 0x0028 (0x0050 - 0x0028)
class UHitDecalConfig_C : public UObject
{
public:
	struct FHitDecalInfo                               _Info;                                                    // 0x0028(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HitDecalConfig.HitDecalConfig_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
