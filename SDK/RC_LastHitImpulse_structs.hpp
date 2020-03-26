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

// ScriptStruct LastHitImpulse.LastHitImpulse
// 0x0040
struct FLastHitImpulse
{
	class AActor*                                      Instigator_20_5676A25747AAE4C1CAE6F7904A72E838;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      DamageTypeClass_8_14D8CFB249FFF88F6E22558B9519E6BC;       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damage_26_4F432E834F2E7B32B65B2DB29767FD53;               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DamageImpulse_31_89A6727F4083948B82A5FDB503B7442B;        // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitPosition_14_120F8D2B490F19F3A4CEBB901F6115CC;          // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitDirection_13_8E0293204787B83EDA90D29AEF408597;         // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       HitBoneName_16_43F2A6864AE18D72112E449F4233747C;          // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EHitEnum                                           SideHit_23_F8CB69E84C39514126DE2A8BB7DD8631;              // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
