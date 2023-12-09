#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xC8 - 0x28)
// Class SidecarSys.SidecarDss
class USidecarDss : public UObject
{
public:
	TMap<class FString, struct FSidecarFileInfo> FileInfoMap;                                       // 0x28(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                DssDownloadUrl;                                    // 0x78(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DssCheckoutUrl;                                    // 0x88(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DssUploadUrl;                                      // 0x98(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DssRestoreUrl;                                     // 0xA8(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DssCheckinUrl;                                     // 0xB8(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USidecarDss* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class SidecarSys.SidecarInventorySys
class USidecarInventorySys : public UObject
{
public:
	class FString                                InventoryDownloadUrl;                              // 0x28(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                InventoryLockUrl;                                  // 0x38(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ItemUpdateUrl;                                     // 0x48(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ReleaseAllUrl;                                     // 0x58(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_0[0x78];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USidecarInventorySys* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class SidecarSys.SidecarSys
class USidecarSys : public UObject
{
public:
	uint8                                        Pad_1[0x10];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class USidecarDss*                           SidecarDss;                                        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USidecarInventorySys*                  SidecarInventory;                                  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USidecarSys* GetDefaultObj();

};

}


