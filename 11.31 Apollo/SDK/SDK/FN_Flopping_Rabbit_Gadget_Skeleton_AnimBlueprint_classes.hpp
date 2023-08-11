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

// 0xCCC (0xF3C - 0x270)
// AnimBlueprintGeneratedClass Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C
class UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput_9F03130D41190B9467505BBF6A58F63F; // 0x278(0x70)()
	uint8                                        Pad_4982[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_EBD1134E472D714272509DB06222D85B; // 0x2F0(0x560)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_58CAB8BF4596861E8101E6A8C8A4854A; // 0x850(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_C29FDA5F41AF0CC6D1C988ABF6DECDAC; // 0x870(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8AD4E991416C83F13C8A7B99D2BDF356; // 0x890(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8DA89CB94777D4717B955994589D5E49; // 0x8B8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_F20BF14C458F7DE303D2EE9E19D54E92; // 0x8E0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2003D69B4262076F5089C99BD8B507B1; // 0x958(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_F02A90674C5FEBFC2015D997A270DDDA; // 0x988(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_93B0B14F4D5594FCE0AE2FA7AE7ED972; // 0xA00(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_6B0FE2534593A81B3DF477B5A6599BA5; // 0xA30(0xB0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8F1D46EB4F37E514903D9AA16CCBF804; // 0xAE0(0x108)()
	uint8                                        Pad_4983[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_Trail                       AnimGraphNode_Trail_F7EF4520434183E62FB46EA388A486EA; // 0xBF0(0x270)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_ED996A454E2BF7096BFC0181EE251F89; // 0xE60(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4D1E1D8D41EA517B10E682A4653DC378; // 0xEA8(0x30)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_DC4E95444A0BCBCB2B7434A2200CE6DA; // 0xED8(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_C46FCBD9462B5B7F2CDEAC9960096AB6; // 0xEF8(0x20)()
	struct FVector                               GripOffset;                                        // 0xF18(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OneHandGrip;                                       // 0xF24(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4984[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Trail_Alpha;                                       // 0xF28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Trail_RelaxScale;                                  // 0xF2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              GripRotation;                                      // 0xF30(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
