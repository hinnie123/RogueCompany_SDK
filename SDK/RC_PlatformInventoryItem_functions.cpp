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

// Function PlatformInventoryItem.PlatformInventoryItem.SetFriendlySearchName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                InFriendlyName                 (Parm, ZeroConstructor)

void UPlatformInventoryItem::SetFriendlySearchName(struct FString* InFriendlyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.SetFriendlySearchName");

	UPlatformInventoryItem_SetFriendlySearchName_Params params;
	params.InFriendlyName = InFriendlyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UPlatformInventoryItem::GetSoftItemIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIcon");

	UPlatformInventoryItem_GetSoftItemIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemNameAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPlatformInventoryItem::GetItemNameAsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetItemNameAsString");

	UPlatformInventoryItem_GetItemNameAsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPlatformInventoryItem::GetItemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetItemName");

	UPlatformInventoryItem_GetItemName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlatformInventoryItem::GetItemId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetItemId");

	UPlatformInventoryItem_GetItemId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescriptionAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPlatformInventoryItem::GetItemDescriptionAsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescriptionAsString");

	UPlatformInventoryItem_GetItemDescriptionAsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPlatformInventoryItem::GetItemDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescription");

	UPlatformInventoryItem_GetItemDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemByFriendlyName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString*                InFriendlyName                 (Parm, ZeroConstructor)

void UPlatformInventoryItem::STATIC_GetItemByFriendlyName(struct FString* InFriendlyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetItemByFriendlyName");

	UPlatformInventoryItem_GetItemByFriendlyName_Params params;
	params.InFriendlyName = InFriendlyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
