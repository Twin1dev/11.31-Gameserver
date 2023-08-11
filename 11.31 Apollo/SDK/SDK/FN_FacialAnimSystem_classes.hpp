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

// 0x8 (0x30 - 0x28)
// Class FacialAnimSystem.FacialLiveLinkRemapAsset
class UFacialLiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	bool                                         bExtractBoneTransform;                             // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExtractCurve;                                     // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1896[0x6];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FacialLiveLinkRemapAsset");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
