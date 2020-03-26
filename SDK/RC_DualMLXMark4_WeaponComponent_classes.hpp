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

// BlueprintGeneratedClass DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C
// 0x0034 (0x090C - 0x08D8)
class UDualMLXMark4_WeaponComponent_C : public UHidden_WeaponComponent_C
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x08D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Heat_Scale;                                               // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08E4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Weapon_Material_Instance;                                 // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Duplicate_Weapon_Material_Instance;                       // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Muzzle_Glow;                                              // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Heat_Per_Shot;                                            // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCoolingDown;                                           // 0x0904(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0905(0x0003) MISSED OFFSET
	float                                              Time_Until_Cooldown;                                      // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DualMLXMark4_WeaponComponent.DualMLXMark4_WeaponComponent_C");
		return ptr;
	}


	void Update_Heat(float* Delta_Seconds);
	void Play_Muzzle_Fire_On_Duplicate_Mesh();
	void ReceiveTick(float* DeltaSeconds);
	void Cool_Down();
	void PlayFireSound(struct FAimData* InputPin);
	void Scale_Out();
	void Scale_In();
	void ReceiveBeginPlay();
	void Event_Activate();
	void Holster_Weapon();
	void Fire_Weapon(struct FFullFireRepData* Data, bool* PlayNoChainFireMontage);
	void ForceRetrieveWeapon();
	void ForceHolsterWeapon();
	void ExecuteUbergraph_DualMLXMark4_WeaponComponent(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
