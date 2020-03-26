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

// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.OnEnvironmentChanged
struct UDefaultEnvironmentListener_C_OnEnvironmentChanged_Params
{
	struct FName*                                      OldEnvironmentTag;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.Print State
struct UDefaultEnvironmentListener_C_Print_State_Params
{
	bool*                                              Print_to_Screen;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Print_to_Log;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               Text_Color;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ReceiveBeginPlay
struct UDefaultEnvironmentListener_C_ReceiveBeginPlay_Params
{
};

// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ExecuteUbergraph_DefaultEnvironmentListener
struct UDefaultEnvironmentListener_C_ExecuteUbergraph_DefaultEnvironmentListener_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
