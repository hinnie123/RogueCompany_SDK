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

// Class KillstreakLoadingScreen.KSLoadingScreenSettings
// 0x0078 (0x00B0 - 0x0038)
class UKSLoadingScreenSettings : public UDeveloperSettings
{
public:
	struct FSoftObjectPath                             DefaultLoadingScreen;                                     // 0x0038(0x0018) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             ThrobberPiece;                                            // 0x0050(0x0018) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             HorizontalRule;                                           // 0x0068(0x0018) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             HeadingFont;                                              // 0x0080(0x0018) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             DefaultFont;                                              // 0x0098(0x0018) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakLoadingScreen.KSLoadingScreenSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
