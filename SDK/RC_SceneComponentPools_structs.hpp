#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SceneComponentPools.EPoolOverflowHandling
enum class EPoolOverflowHandling : uint8_t
{
	IgnoreNewRequest               = 0,
	KillExistingRequest            = 1,
	CreateStandaloneInstance       = 2,
	EPoolOverflowHandling_MAX      = 3
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
