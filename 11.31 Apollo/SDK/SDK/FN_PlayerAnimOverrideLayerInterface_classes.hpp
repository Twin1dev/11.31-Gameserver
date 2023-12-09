#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class IPlayerAnimOverrideLayerInterface_C* GetDefaultObj();

	void FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride);
};

}


