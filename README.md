# Edit
For always up-to-date offsets, take a look at https://rc.dumps.host

# RogueCompany_SDK
SDK for the game Rogue Company

Useful game info:
```
GObjects:
4C 8B 1D ? ? ? ? 4D 85 C9
\x4C\x8B\x1D\x00\x00\x00\x00\x4D\x85\xC9 xxx????xxx

GNames:
48 8B 05 ? ? ? ? 48 85 C0 75 5F
\x48\x8B\x05\x00\x00\x00\x00\x48\x85\xC0\x75\x5F xxx????xxxxx

GWorld:
48 89 05 ? ? ? ? 48 8B B7
\x48\x89\x05\x00\x00\x00\x00\x48\x8B\xB7 xxx????xxx

GetBoundingBox:
48 8B C4 48 89 58 10 48 89 70 18 55 57 41 54 41 55
\x48\x8B\xC4\x48\x59\x58\x10\x48\x89\x70\x18\x55\x57\x41\x54\x41\x55 xxxxxxxxxxxxxxxxx

GetBonePos:
48 89 5C 24 ? 48 89 74 24 ? 57 48 81 EC ? ? ? ? F6 81
\x48\x89\x5C\x24\x00\x48\x89\x74\x24\x00\x57\x48\x81\xEC\x00\x00\x00\x00\xF6\x81 xxxx?xxxx?xxxx????xx

WorldToScreen:
48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 81 EC ? ? ? ? 41 0F B6 E9 49 8B D8
\x48\x89\x5C\x24\x00\x48\x89\x6C\x24\x00\x48\x89\x74\x24\x00\x57\x48\x81\xEC\x00\x00\x00\x00\x41\x0F\xB6\xE9\x49\x8B\xD8 xxxx?xxxx?xxxx?xxxx????xxxxxxx

ProcessEvent: 64
CreateDefaultObject: 103

void init_sdk()
{
	const auto gname_addr = utils::find_pattern("48 8B 05 ? ? ? ? 48 85 C0 75 5F");
	auto offset = *(uint32_t*)(gname_addr + 3);
	SDK::FName::GNames = (SDK::TNameEntryArray*)(*(uintptr_t*)(gname_addr + 7 + offset));

	const auto objects_addr = utils::find_pattern("4C 8B 1D ? ? ? ? 4D 85 C9");
	offset = *(int32_t*)(objects_addr + 3);
	SDK::TUObjectArray::g_objects = (uintptr_t)(objects_addr + 7 + offset) - (uintptr_t)GetModuleHandleA(0);
}

Loop actors like so:
auto actors = g_World->PersistentLevel->GetActors();
for (size_t i = 0; i < actors.Num(); ++i)
{
	SDK::AActor* actor = actors[i];
}
```

Useful files:
- RC_Basic.cpp
- RC_Basic.hpp
- RC_CoreUObject_classes.hpp
- RC_CoreUObject_functions.cpp
- RC_Engine_classes.hpp
- RC_Engine_functions.cpp
- RC_Killstreak_classes.hpp
- RC_Killstreak_Functions.cpp
