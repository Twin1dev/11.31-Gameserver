#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x148 - 0x28)
// Class SignificanceManager.SignificanceManager
class USignificanceManager : public UObject
{
public:
	uint8                                        Pad_1A6[0xE0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        SignificanceManagerClassName;                      // 0x108(0x18)(Edit, ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A7[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USignificanceManager* GetDefaultObj();

};

}


