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

// BlueprintGeneratedClass KillCamController.KillCamController_C
// 0x0008 (0x0C60 - 0x0C58)
class AKillCamController_C : public AKSKillCamController
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KillCamController.KillCamController_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_KillCamController(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
