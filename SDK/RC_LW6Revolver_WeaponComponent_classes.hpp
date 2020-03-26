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

// BlueprintGeneratedClass LW6Revolver_WeaponComponent.LW6Revolver_WeaponComponent_C
// 0x000F (0x08D8 - 0x08C9)
class ULW6Revolver_WeaponComponent_C : public UMasterPistol_WeaponComponent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x08C9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x08D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LW6Revolver_WeaponComponent.LW6Revolver_WeaponComponent_C");
		return ptr;
	}


	void ExecuteUbergraph_LW6Revolver_WeaponComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
