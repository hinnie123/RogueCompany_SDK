#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CharacterEmotionComponent.CharacterEmotionComponent_C.ReceiveBeginPlay
struct UCharacterEmotionComponent_C_ReceiveBeginPlay_Params
{
};

// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Player Downed Changed
struct UCharacterEmotionComponent_C_Player_Downed_Changed_Params
{
	class AKSCharacter**                               bpp__Character__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Check Death State
struct UCharacterEmotionComponent_C_Check_Death_State_Params
{
};

// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Health Changed
struct UCharacterEmotionComponent_C_Character_Health_Changed_Params
{
	class AKSCharacterBase**                           bpp__KSCharacter__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Aim State Changed
struct UCharacterEmotionComponent_C_Character_Aim_State_Changed_Params
{
	EKSCharacterAimMode*                               bpp__NewParam__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnHealthChanged__DelegateSignature
struct UCharacterEmotionComponent_C_OnHealthChanged__DelegateSignature_Params
{
	class AKSCharacterBase**                           bpp__Character__pf;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnDeathStateChanged__DelegateSignature
struct UCharacterEmotionComponent_C_OnDeathStateChanged__DelegateSignature_Params
{
};

// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnCharacterDownedChanged__DelegateSignature
struct UCharacterEmotionComponent_C_OnCharacterDownedChanged__DelegateSignature_Params
{
	class AKSCharacter**                               bpp__Character__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnAimStateChange__DelegateSignature
struct UCharacterEmotionComponent_C_OnAimStateChange__DelegateSignature_Params
{
	EKSCharacterAimMode*                               bpp__NewAimMode__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
