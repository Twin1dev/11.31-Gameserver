#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x57D (0x7E5 - 0x268)
// AnimBlueprintGeneratedClass Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C
class UWumba_Gadget_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_6139[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_8F111D564901765323C8E192F69A2215; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_E042805A4FC9BDA300C7FA9F1765F27D; // 0x2A8(0x48)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5500B0B14E0EDAF9450D4194AC5FC4B9; // 0x2F0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0EED461343F8B23C269868B0D0583F2A; // 0x318(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_B2B1A79A4CCF6F04EA325FA0D787FA17; // 0x390(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_22BFFA4B451879CE57E79D8E370A5C8E; // 0x3C0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_63BA50654EAEE2350E11FBBEDA826A6C; // 0x438(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_F2425CE84D159DC5F544ADA2678F5BC1; // 0x468(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_ED54A0CD47880BE9FD01F489C6135A1A; // 0x4E0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_3CDAF1304354EA88C3E966861B1C334C; // 0x510(0xB0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_B50FA6CA46FED06250B2A9BD6896AC55; // 0x5C0(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C6CF92A641A476ED1EBAA7BBFE99189D; // 0x688(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_A6A53C3D44947AD067F4D28799E70959; // 0x700(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_FF78EAF241FAFCF818CC76912D9FCFEE; // 0x730(0xB0)(None)
	float                                        PegBoard_Speed;                                    // 0x7E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Upgrading;                                         // 0x7E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWumba_Gadget_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Wumba_Gadget_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_Athena_Wumba_C* K2Node_DynamicCast_AsB_Athena_Wumba, bool K2Node_DynamicCast_bSuccess);
};

}


