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

// BlueprintGeneratedClass GamePlayerController.GamePlayerController_C
// 0x0009 (0x0C09 - 0x0C00)
class AGamePlayerController_C : public AGamePlayerControllerNoHUD_C
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x0C00(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               NewVar_1;                                                 // 0x0C08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GamePlayerController.GamePlayerController_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_GamePlayerController(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
