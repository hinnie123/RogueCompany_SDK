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

// Function PlatformInventoryItem.PlatformInventoryItem.SetFriendlySearchName
struct UPlatformInventoryItem_SetFriendlySearchName_Params
{
	struct FString*                                    InFriendlyName;                                           // (Parm, ZeroConstructor)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIcon
struct UPlatformInventoryItem_GetSoftItemIcon_Params
{
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemNameAsString
struct UPlatformInventoryItem_GetItemNameAsString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemName
struct UPlatformInventoryItem_GetItemName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemId
struct UPlatformInventoryItem_GetItemId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescriptionAsString
struct UPlatformInventoryItem_GetItemDescriptionAsString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescription
struct UPlatformInventoryItem_GetItemDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemByFriendlyName
struct UPlatformInventoryItem_GetItemByFriendlyName_Params
{
	struct FString*                                    InFriendlyName;                                           // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
