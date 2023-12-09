#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x709 (0x971 - 0x268)
// AnimBlueprintGeneratedClass Happy_Ghost_Gadget_AnimBP.Happy_Ghost_Gadget_AnimBP_C
class UHappy_Ghost_Gadget_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_6F15[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_7DBD4748410FAE13049F208F009689BE; // 0x278(0x30)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_175C2AB04806C67CFC494AB8C2116C36; // 0x2A8(0x18)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_061C81994C77DE53C5C949A4C2806833; // 0x2C0(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7F8A30074542AC67F813D18B56057636; // 0x3C8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_DF525914422FF99003CE9F8483D2CEF8; // 0x3E8(0x20)(None)
	uint8                                        Pad_6F16[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_03119100418B973295C865A10AEAFA76; // 0x410(0x560)(None)
	bool                                         IsFired;                                           // 0x970(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UHappy_Ghost_Gadget_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Happy_Ghost_Gadget_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, const struct FGameplayTagContainer& Temp_struct_Variable, class AB_Hookgun_Athena_C* K2Node_DynamicCast_AsB_Hookgun_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasTag_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_2, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, float K2Node_Event_DeltaTimeX);
};

}


