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

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_BlendByDedicatedServer
// 0x0028 (0x0038 - 0x0010)
struct FAnimNode_BlendByDedicatedServer : public FAnimNode_Base
{
	struct FPoseLink                                   NotDedicatedServer;                                       // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   DedicatedServer;                                          // 0x0020(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
