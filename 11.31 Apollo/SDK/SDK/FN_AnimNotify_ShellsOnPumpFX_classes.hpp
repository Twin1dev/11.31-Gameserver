#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AnimNotify_ShellsOnPumpFX.AnimNotify_ShellsOnPumpFX_C
class UAnimNotify_ShellsOnPumpFX_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_ShellsOnPumpFX_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AB_Ranged_Generic_C* K2Node_DynamicCast_AsB_Ranged_Generic, bool K2Node_DynamicCast_bSuccess);
};

}


