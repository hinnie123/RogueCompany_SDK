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

// BlueprintGeneratedClass CamMod_JumpLanding.CamMod_JumpLanding_C
// 0x0009 (0x0071 - 0x0068)
class UCamMod_JumpLanding_C : public UCamMod_Master_C
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0068(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               WasJumping;                                               // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CamMod_JumpLanding.CamMod_JumpLanding_C");
		return ptr;
	}


	void ShouldModifyCamera(bool* bSuccess);
	void PlayTimeline();
	void OnCamModFinished();
	void ExecuteUbergraph_CamMod_JumpLanding(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
