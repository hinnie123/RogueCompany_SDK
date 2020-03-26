#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CensorAssets.CensorTableRow
// 0x0050 (0x0058 - 0x0008)
struct FCensorTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CensorAssets.CensorTableRow.CensoredAsset
	unsigned char                                      UnknownData01[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CensorAssets.CensorTableRow.ReplacementAsset
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
