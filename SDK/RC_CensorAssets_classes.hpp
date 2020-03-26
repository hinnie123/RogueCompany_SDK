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

// Class CensorAssets.CensorTable
// 0x0018 (0x0040 - 0x0028)
class UCensorTable : public UObject
{
public:
	struct FSoftObjectPath                             CensorTablePath;                                          // 0x0028(0x0018) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CensorAssets.CensorTable");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
