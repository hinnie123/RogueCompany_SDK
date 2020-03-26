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

// Enum PlatformCommon.EPCOM_SessionUpdateEvent
enum class EPCOM_SessionUpdateEvent : uint8_t
{
	Unknown                        = 0,
	JoinFailure                    = 1,
	JoinFailure_NoOpenConnections  = 2,
	JoinFailure_SessionNotAvailable = 3,
	JoinSuccess                    = 4,
	EPCOM_MAX                      = 5
};


// Enum PlatformCommon.EPCOM_PrivilegeStatus
enum class EPCOM_PrivilegeStatus : uint8_t
{
	Unchecked                      = 0,
	Pending                        = 1,
	Denied                         = 2,
	Allowed                        = 3,
	EPCOM_MAX                      = 4
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
