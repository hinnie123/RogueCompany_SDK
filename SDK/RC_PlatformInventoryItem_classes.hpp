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

// Class PlatformInventoryItem.PInv_AssetManager
// 0x0058 (0x0488 - 0x0430)
class UPInv_AssetManager : public UAssetManager
{
public:
	bool                                               bHasCompletedInitialAssetScan;                            // 0x0430(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x57];                                      // 0x0431(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformInventoryItem.PInv_AssetManager");
		return ptr;
	}

};


// Class PlatformInventoryItem.PlatformInventoryItem
// 0x0070 (0x00A0 - 0x0030)
class UPlatformInventoryItem : public UPrimaryDataAsset
{
public:
	int                                                ItemId;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FText                                       ItemDisplayName;                                          // 0x0038(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       ItemDescription;                                          // 0x0050(0x0018) (Edit, DisableEditOnInstance)
	struct FString                                     FriendlySearchName;                                       // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, DuplicateTransient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PlatformInventoryItem.PlatformInventoryItem.ItemIcon

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformInventoryItem.PlatformInventoryItem");
		return ptr;
	}


	void SetFriendlySearchName(struct FString* InFriendlyName);
	void GetSoftItemIcon();
	struct FString GetItemNameAsString();
	struct FText GetItemName();
	int GetItemId();
	struct FString GetItemDescriptionAsString();
	struct FText GetItemDescription();
	void STATIC_GetItemByFriendlyName(struct FString* InFriendlyName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
