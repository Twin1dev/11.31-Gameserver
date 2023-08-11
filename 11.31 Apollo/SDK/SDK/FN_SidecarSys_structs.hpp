#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// ScriptStruct SidecarSys.SidecarFileInfo
struct FSidecarFileInfo
{
public:
	TMap<class FString, class FString>           Meta;                                              // 0x0(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsCheckedOut;                                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOperationPending;                                 // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2[0x6];                                        // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CheckoutGuid;                                      // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct SidecarSys.InventoryFlushPayload
struct FInventoryFlushPayload
{
public:
	TArray<class FString>                        InventoryNames;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
