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

// Function NameplateWidget.NameplateWidget_C.View_SetResidualPercent
struct UNameplateWidget_C_View_SetResidualPercent_Params
{
	float*                                             bpp__PercentValue__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NameplateWidget.NameplateWidget_C.View_SetResidualFade
struct UNameplateWidget_C_View_SetResidualFade_Params
{
	float*                                             bpp__FadexAlpha__pfT;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NameplateWidget.NameplateWidget_C.View_SetHealthPercent
struct UNameplateWidget_C_View_SetHealthPercent_Params
{
	float*                                             bpp__PercentValue__pf;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NameplateWidget.NameplateWidget_C.Should Show Enemy Nameplate
struct UNameplateWidget_C_Should_Show_Enemy_Nameplate_Params
{
	bool                                               bpp__ShouldShow__pf;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NameplateWidget.NameplateWidget_C.Player Is Blinded
struct UNameplateWidget_C_Player_Is_Blinded_Params
{
	bool                                               bpp__IsxBlind__pfT;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NameplateWidget.NameplateWidget_C.OnUnhovered
struct UNameplateWidget_C_OnUnhovered_Params
{
};

// Function NameplateWidget.NameplateWidget_C.OnPossession
struct UNameplateWidget_C_OnPossession_Params
{
	class APlayerState**                               bpp__PlayerState__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               bpp__Character__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged_Event
struct UNameplateWidget_C_OnPlayerDownedChanged_Event_Params
{
	class AKSPlayerState**                             bpp__PlayerState__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NameplateWidget.NameplateWidget_C.OnKillCamEnabled
struct UNameplateWidget_C_OnKillCamEnabled_Params
{
	bool*                                              bpp__IsEnabled__pf;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NameplateWidget.NameplateWidget_C.OnHovered
struct UNameplateWidget_C_OnHovered_Params
{
};

// Function NameplateWidget.NameplateWidget_C.OnDead
struct UNameplateWidget_C_OnDead_Params
{
	class AKSPlayerState**                             bpp__PlayerState__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NameplateWidget.NameplateWidget_C.Manual Tick
struct UNameplateWidget_C_Manual_Tick_Params
{
};

// Function NameplateWidget.NameplateWidget_C.ExecuteUbergraph_NameplateWidget_4
struct UNameplateWidget_C_ExecuteUbergraph_NameplateWidget_4_Params
{
	int*                                               bpp__EntryPoint__pf;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NameplateWidget.NameplateWidget_C.Deferred Player State Open
struct UNameplateWidget_C_Deferred_Player_State_Open_Params
{
};

// Function NameplateWidget.NameplateWidget_C.Construct
struct UNameplateWidget_C_Construct_Params
{
};

// Function NameplateWidget.NameplateWidget_C.CharacterHealthChange
struct UNameplateWidget_C_CharacterHealthChange_Params
{
	class AKSCharacterBase**                           bpp__Character__pf__const;                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerEliminated__DelegateSignature
struct UNameplateWidget_C_OnPlayerEliminated__DelegateSignature_Params
{
	class AKSPlayerState**                             bpp__PlayerState__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnPlayerDownedChanged__DelegateSignature
struct UNameplateWidget_C_OnPlayerDownedChanged__DelegateSignature_Params
{
	class AKSPlayerState**                             bpp__PlayerState__pf;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnKillCamEnabled__DelegateSignature
struct UNameplateWidget_C_OnKillCamEnabled__DelegateSignature_Params
{
	bool*                                              bpp__bEnabled__pf;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction NameplateWidget.NameplateWidget_C.OnHealthChanged__DelegateSignature
struct UNameplateWidget_C_OnHealthChanged__DelegateSignature_Params
{
	class AKSCharacterBase**                           bpp__Character__pf;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
