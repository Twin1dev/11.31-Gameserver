#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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
	uint8                                        Pad_1649[0xE0];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSoftClassPath                        SignificanceManagerClassName;                      // 0x108(0x18)(Edit, ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_164A[0x28];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SignificanceManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
