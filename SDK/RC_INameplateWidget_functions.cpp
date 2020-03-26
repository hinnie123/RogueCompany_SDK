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

// Function INameplateWidget.INameplateWidget_C.OnUnhovered
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UINameplateWidget_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function INameplateWidget.INameplateWidget_C.OnUnhovered");

	UINameplateWidget_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function INameplateWidget.INameplateWidget_C.OnPossession
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           bpp__PlayerState__pf           (Parm, ZeroConstructor, IsPlainOldData)
// class AKSCharacter**           bpp__Character__pf             (Parm, ZeroConstructor, IsPlainOldData)

void UINameplateWidget_C::OnPossession(class APlayerState** bpp__PlayerState__pf, class AKSCharacter** bpp__Character__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function INameplateWidget.INameplateWidget_C.OnPossession");

	UINameplateWidget_C_OnPossession_Params params;
	params.bpp__PlayerState__pf = bpp__PlayerState__pf;
	params.bpp__Character__pf = bpp__Character__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function INameplateWidget.INameplateWidget_C.OnHovered
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UINameplateWidget_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function INameplateWidget.INameplateWidget_C.OnHovered");

	UINameplateWidget_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
