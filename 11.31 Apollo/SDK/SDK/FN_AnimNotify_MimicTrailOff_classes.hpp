#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AnimNotify_MimicTrailOff.AnimNotify_MimicTrailOff_C
class UAnimNotify_MimicTrailOff_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_MimicTrailOff_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IFortAnimNotify_Interface_Interface_C> K2Node_DynamicCast_AsFort_Anim_Notify_Interface_Interface, bool K2Node_DynamicCast_bSuccess);
};

}


