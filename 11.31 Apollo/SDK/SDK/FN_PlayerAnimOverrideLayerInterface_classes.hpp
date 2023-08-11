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

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C
class IPlayerAnimOverrideLayerInterface_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerAnimOverrideLayerInterface_C");
		return Clss;
	}

	void FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
