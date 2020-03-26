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

// Class PlatformCommon.PComGameEngine
// 0x0038 (0x0E38 - 0x0E00)
class UPComGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0E00(0x0010) MISSED OFFSET
	bool                                               bRedirectLogsToConsole;                                   // 0x0E10(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x0E11(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PComGameEngine");
		return ptr;
	}

};


// Class PlatformCommon.PCom_IpConnection
// 0x0008 (0x18F0 - 0x18E8)
class UPCom_IpConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x18E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PCom_IpConnection");
		return ptr;
	}

};


// Class PlatformCommon.PCom_LocalPlayer
// 0x0000 (0x0280 - 0x0280)
class UPCom_LocalPlayer : public ULocalPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PCom_LocalPlayer");
		return ptr;
	}

};


// Class PlatformCommon.PCom_UDPEncryptionHandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UPCom_UDPEncryptionHandlerComponentFactory : public UHandlerComponentFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PCom_UDPEncryptionHandlerComponentFactory");
		return ptr;
	}

};


// Class PlatformCommon.PCom_SimpleTimecodeProvider
// 0x0010 (0x0038 - 0x0028)
class UPCom_SimpleTimecodeProvider : public UTimecodeProvider
{
public:
	struct FFrameRate                                  _FrameRate;                                               // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformCommon.PCom_SimpleTimecodeProvider");
		return ptr;
	}


	void SetFrameRate(struct FFrameRate* InFrameRate);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
