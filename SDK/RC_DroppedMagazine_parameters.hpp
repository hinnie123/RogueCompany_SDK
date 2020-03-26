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

// Function DroppedMagazine.DroppedMagazine_C.ReceiveBeginPlay
struct ADroppedMagazine_C_ReceiveBeginPlay_Params
{
};

// Function DroppedMagazine.DroppedMagazine_C.SetMesh
struct ADroppedMagazine_C_SetMesh_Params
{
	class USkeletalMesh**                              NewSkelMesh;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh**                                NewStaticMesh;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DroppedMagazine.DroppedMagazine_C.SetVelocity
struct ADroppedMagazine_C_SetVelocity_Params
{
	struct FVector*                                    Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DroppedMagazine.DroppedMagazine_C.ExecuteUbergraph_DroppedMagazine
struct ADroppedMagazine_C_ExecuteUbergraph_DroppedMagazine_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
