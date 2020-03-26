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

// BlueprintGeneratedClass ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C
// 0x000C (0x01BC - 0x01B0)
class UReloadOnDodgeRollModInst_C : public UKSModInst_OnDodgeRoll
{
public:
	struct FPointerToUberGraphFrame                    _UberGraphFrame;                                          // 0x01B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Previous_ammo_in_clip;                                    // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C");
		return ptr;
	}


	void MagDropForDodgeReload(class UKSWeaponComponent** Master_Weapon_Ref);
	bool StopAnimationFromEvent(struct FName* AnimEventName, class UKSCharacterAnimInst** CharAnimInstance);
	bool ReactsToAnimationEvent(struct FName* AnimEventName, int* Priority);
	void OnDodgeRoll(float* RollDuration);
	void RemotePlayerAudio();
	void Dodge_Reload_Mod_Notified();
	void ExecuteUbergraph_ReloadOnDodgeRollModInst(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
