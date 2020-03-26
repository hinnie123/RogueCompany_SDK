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

// ScriptStruct MultiMagDropInfo.MultiMagDropInfo
// 0x0030
struct FMultiMagDropInfo
{
	struct FName                                       DropBone_2_2CFC9A8F4F2664ED22B08296FB92E731;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DropBoneOnWeapon_5_BC9F11844B79F021078C9BA149D169AA;      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FRotator                                    DropBoneRotationAdjustment_9_1E5846CF40EC9849B3A94983CEDE53D6;// 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DropBoneVelocityOverride_12_71C6708D4D1C99CFB8A9DF90ED02BA49;// 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UStaticMesh*                                 DropMesh_15_6B58EE524E651CF10CEB8EA7288C667F;             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
