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

// BlueprintGeneratedClass Hidden_WeaponComponent.Hidden_WeaponComponent_C
// 0x000F (0x08D8 - 0x08C9)
class UHidden_WeaponComponent_C : public UMaster_WeaponComponent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x08C9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x08D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Hidden_WeaponComponent.Hidden_WeaponComponent_C");
		return ptr;
	}


	bool CanUseCombatState(ECombatState* TestState);
	void ReceiveBeginPlay();
	void OnWeaponStateChanged(EWeaponStateNew* OldState, EWeaponStateNew* NewState);
	void OnInitialize();
	void ExecuteUbergraph_Hidden_WeaponComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
