// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterEmotionComponent.CharacterEmotionComponent_C.ReceiveBeginPlay
// (Native, Event, Public)

void UCharacterEmotionComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterEmotionComponent.CharacterEmotionComponent_C.ReceiveBeginPlay");

	UCharacterEmotionComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Player Downed Changed
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSCharacter**           bpp__Character__pf             (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterEmotionComponent_C::Player_Downed_Changed(class AKSCharacter** bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterEmotionComponent.CharacterEmotionComponent_C.Player Downed Changed");

	UCharacterEmotionComponent_C_Player_Downed_Changed_Params params;
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Check Death State
// (Native, Public, BlueprintCallable)

void UCharacterEmotionComponent_C::Check_Death_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterEmotionComponent.CharacterEmotionComponent_C.Check Death State");

	UCharacterEmotionComponent_C_Check_Death_State_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Health Changed
// (Native, Public, BlueprintCallable)
// Parameters:
// class AKSCharacterBase**       bpp__KSCharacter__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterEmotionComponent_C::Character_Health_Changed(class AKSCharacterBase** bpp__KSCharacter__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Health Changed");

	UCharacterEmotionComponent_C_Character_Health_Changed_Params params;
	params.bpp__KSCharacter__pf = bpp__KSCharacter__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Aim State Changed
// (Native, Public, BlueprintCallable)
// Parameters:
// EKSCharacterAimMode*           bpp__NewParam__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterEmotionComponent_C::Character_Aim_State_Changed(EKSCharacterAimMode* bpp__NewParam__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterEmotionComponent.CharacterEmotionComponent_C.Character Aim State Changed");

	UCharacterEmotionComponent_C_Character_Aim_State_Changed_Params params;
	params.bpp__NewParam__pf = bpp__NewParam__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnHealthChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSCharacterBase**       bpp__Character__pf             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCharacterEmotionComponent_C::OnHealthChanged__DelegateSignature(class AKSCharacterBase** bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnHealthChanged__DelegateSignature");

	UCharacterEmotionComponent_C_OnHealthChanged__DelegateSignature_Params params;
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnDeathStateChanged__DelegateSignature
// (Public, Delegate)

void UCharacterEmotionComponent_C::OnDeathStateChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnDeathStateChanged__DelegateSignature");

	UCharacterEmotionComponent_C_OnDeathStateChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnCharacterDownedChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// class AKSCharacter**           bpp__Character__pf             (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterEmotionComponent_C::OnCharacterDownedChanged__DelegateSignature(class AKSCharacter** bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnCharacterDownedChanged__DelegateSignature");

	UCharacterEmotionComponent_C_OnCharacterDownedChanged__DelegateSignature_Params params;
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnAimStateChange__DelegateSignature
// (Public, Delegate)
// Parameters:
// EKSCharacterAimMode*           bpp__NewAimMode__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterEmotionComponent_C::OnAimStateChange__DelegateSignature(EKSCharacterAimMode* bpp__NewAimMode__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CharacterEmotionComponent.CharacterEmotionComponent_C.OnAimStateChange__DelegateSignature");

	UCharacterEmotionComponent_C_OnAimStateChange__DelegateSignature_Params params;
	params.bpp__NewAimMode__pf = bpp__NewAimMode__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
