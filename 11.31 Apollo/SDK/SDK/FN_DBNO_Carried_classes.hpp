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

// 0xB21 (0xBD71 - 0xB250)
// AnimBlueprintGeneratedClass DBNO_Carried.DBNO_Carried_C
class UDBNO_Carried_C : public UFortPlayerAnimInstance_DBNOCarried
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_6FDF76E049A24B1EF9D7DEBBD91751CF; // 0xB258(0x30)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_647109C14F48E941AEF9E486BCFFCB5B; // 0xB288(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_59E069244645BEF22808AB9196186F3F; // 0xB2A8(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_32956B0E479193012ACF3FB15ECAFEE6; // 0xB3B0(0x108)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_80446D5E4D39FC4DB897698A65CD29AC; // 0xB4B8(0x78)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_56B19EE040BEEBC25D674F8DC99831B9; // 0xB530(0xC8)()
	uint8                                        Pad_44C3[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_A2B587A34E6D45FD2755F6A163B2A7AD; // 0xB600(0x1E0)()
	enum class EFortPlayerAnimBodyType           __CustomProperty_my_animbodytype_BC9172D64300E6A13C48509FE2988A40; // 0xB7E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCustomGender                 __CustomProperty_my_gender_BC9172D64300E6A13C48509FE2988A40; // 0xB7E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44C4[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_SubInstance_BC9172D64300E6A13C48509FE2988A40; // 0xB7E8(0x90)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2362F79B4764FBA8C8FEEDA5DC88C3B1; // 0xB878(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_AC1F897843DFD7A8178B8A82E3A790EE; // 0xB898(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2DF19C19483B180CCD9B0395F0443067; // 0xB8C0(0x28)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_78D4698F4DBD0C20473F7A9407EBB46C; // 0xB8E8(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_A08B893F416A2C075FC4E584C74BAC5C; // 0xB930(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_339D53304C96E6E9CA54849FD42463D2; // 0xB960(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2845F0614F1F506F5C75FEB6DB44688C; // 0xB9D8(0x30)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_F7E4CA4748A4826364AE6EAADE5CBA3C; // 0xBA08(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_0DF022F34E2D19939A036B970D6F6AFA; // 0xBA50(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_928ECAB14B37D35EE66BE6A15B810F70; // 0xBA80(0xB0)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_AA9C546E4B1C5BEF0332B08ECB6BFC83; // 0xBB30(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_DB53A2DF4CAE9120C146E49AC957D990; // 0xBBF8(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_88EB1D724EB384A84A32F184D445B4B9; // 0xBCB0(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_0634F0B8457CE9932959C29729FE76F9; // 0xBCD8(0x28)()
	bool                                         Carried;                                           // 0xBD00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerPawn_Athena_C*                  CarrierPawn;                                       // 0xBD08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAnimInstance*               CarrierAnimBP;                                     // 0xBD10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LHandIKLocation;                                   // 0xBD18(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LHandIKRotation;                                   // 0xBD24(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               TempAttachLocation;                                // 0xBD30(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              TempAttachRotation;                                // 0xBD3C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        SubAnimPhysicsWeight;                              // 0xBD48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBeingDropped;                                    // 0xBD4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        DropMontagePosition;                               // 0xBD50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_44C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAnimMontage*                          CarrierDropMontage;                                // 0xBD58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CarrierPickupMontage;                              // 0xBD60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBeingPickedUp;                                   // 0xBD68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        PickupMontagePosition;                             // 0xBD6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TransitionFromPickupToIdle;                        // 0xBD70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DBNO_Carried_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ModifyBone_59E069244645BEF22808AB9196186F3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ApplyAdditive_56B19EE040BEEBC25D674F8DC99831B9();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_LinkedAnimGraph_BC9172D64300E6A13C48509FE2988A40();
	void ExecuteUbergraph_DBNO_Carried(int32 EntryPoint, float CallFunc_GetInstanceStateWeight_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class UFortPlayerAnimInstance* K2Node_DynamicCast_AsFort_Player_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Montage_GetPosition_ReturnValue, float CallFunc_Montage_GetPlayRate_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Montage_GetPosition_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
