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

// Function INameplateWidget.INameplateWidget_C.OnUnhovered
struct UINameplateWidget_C_OnUnhovered_Params
{
};

// Function INameplateWidget.INameplateWidget_C.OnPossession
struct UINameplateWidget_C_OnPossession_Params
{
	class APlayerState**                               bpp__PlayerState__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               bpp__Character__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function INameplateWidget.INameplateWidget_C.OnHovered
struct UINameplateWidget_C_OnHovered_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
