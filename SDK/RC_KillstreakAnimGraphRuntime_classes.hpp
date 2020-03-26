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

// Class KillstreakAnimGraphRuntime.RecoilProfileAsset
// 0x01F0 (0x0220 - 0x0030)
class URecoilProfileAsset : public UDataAsset
{
public:
	struct FRecoilProfile                              _RecoilProfile;                                           // 0x0030(0x01EC) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               DontPlayRecoilMontage;                                    // 0x021C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x021D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakAnimGraphRuntime.RecoilProfileAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
