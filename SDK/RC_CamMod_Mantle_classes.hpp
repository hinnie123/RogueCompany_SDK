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

// BlueprintGeneratedClass CamMod_Mantle.CamMod_Mantle_C
// 0x000C (0x0074 - 0x0068)
class UCamMod_Mantle_C : public UCamMod_Master_C
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0068(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                MantleIndex;                                              // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CamMod_Mantle.CamMod_Mantle_C");
		return ptr;
	}


	void ShouldModifyCamera(bool* bSuccess);
	void PlayTimeline();
	void ExecuteUbergraph_CamMod_Mantle(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
