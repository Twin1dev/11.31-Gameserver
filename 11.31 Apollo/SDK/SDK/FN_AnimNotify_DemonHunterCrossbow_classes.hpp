#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AnimNotify_DemonHunterCrossbow.AnimNotify_DemonHunterCrossbow_C
class UAnimNotify_DemonHunterCrossbow_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_DemonHunterCrossbow_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AB_DemonHunter_Crossbow_Athena_C* K2Node_DynamicCast_AsB_Demon_Hunter_Crossbow_Athena, bool K2Node_DynamicCast_bSuccess);
};

}


