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

// BlueprintGeneratedClass CamMod_JumpStart.CamMod_JumpStart_C
// 0x0008 (0x0070 - 0x0068)
class UCamMod_JumpStart_C : public UCamMod_Master_C
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0068(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CamMod_JumpStart.CamMod_JumpStart_C");
		return ptr;
	}


	void ShouldModifyCamera(bool* bSuccess);
	void PlayTimeline();
	void ExecuteUbergraph_CamMod_JumpStart(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
