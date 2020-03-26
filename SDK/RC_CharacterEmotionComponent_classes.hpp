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

// DynamicClass CharacterEmotionComponent.CharacterEmotionComponent_C
// 0x0078 (0x02F8 - 0x0280)
class UCharacterEmotionComponent_C : public UKSEmotionComponent
{
public:
	float                                              CachedPlayerHealth;                                       // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PainedDuration;                                           // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FocusedId;                                                // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DeadId;                                                   // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WoundedId;                                                // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0294(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	class AKSCharacter*                                K2Node_DynamicCast_AsKSCharacter;                         // 0x02A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess;                              // 0x02B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02B1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate1;                    // 0x02B4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x02C4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class AKSCharacterBase*                            K2Node_DynamicCast_AsKSCharacter_Base;                    // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_bSuccess1;                             // 0x02E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x02E4(0x0010) (ZeroConstructor, Transient, InstancedReference, DuplicateTransient)
	unsigned char                                      UnknownData04[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass CharacterEmotionComponent.CharacterEmotionComponent_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void Player_Downed_Changed(class AKSCharacter** bpp__Character__pf);
	void Check_Death_State();
	void Character_Health_Changed(class AKSCharacterBase** bpp__KSCharacter__pf);
	void Character_Aim_State_Changed(EKSCharacterAimMode* bpp__NewParam__pf);
	void OnHealthChanged__DelegateSignature(class AKSCharacterBase** bpp__Character__pf);
	void OnDeathStateChanged__DelegateSignature();
	void OnCharacterDownedChanged__DelegateSignature(class AKSCharacter** bpp__Character__pf);
	void OnAimStateChange__DelegateSignature(EKSCharacterAimMode* bpp__NewAimMode__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
