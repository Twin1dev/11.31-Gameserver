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

// 0x60 (0x90 - 0x30)
// BlueprintGeneratedClass AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C
class UAnimNotifyState_AttachAsset_C : public UAnimNotifyState
{
public:
	struct FAssetAttachment                      Attachment;                                        // 0x30(0x30)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference)
	class UAnimSequence*                         Animation;                                         // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Looping;                                           // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CB1[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        PlayRate;                                          // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 DoNotAttachTagContainer;                           // 0x70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotifyState_AttachAsset_C");
		return Clss;
	}

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class USkeletalMeshComponent* CallFunc_GetAssetSkeletalMeshComponentAttachment_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
