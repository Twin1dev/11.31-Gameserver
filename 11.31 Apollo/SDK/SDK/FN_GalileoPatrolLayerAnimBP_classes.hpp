#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAE1 (0xE11 - 0x330)
// AnimBlueprintGeneratedClass GalileoPatrolLayerAnimBP.GalileoPatrolLayerAnimBP_C
class UGalileoPatrolLayerAnimBP_C : public UFortItemLayerAnimInstance_GalileoPatrol
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_B861CA0E42FA922C1F80C09CE58DDD24; // 0x338(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1D1B300A49496E4C8B728F93486936E0; // 0x368(0x70)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7CA3EE2B4965FF2C19DD1986E89992B8; // 0x3D8(0xA0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_01D08B9E4BABAA4A3D46678655830254; // 0x478(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4C8C5BC341139D65356C93B59C6C2E9B; // 0x4A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_34CA5CDF4D0FB2CC24FD9595249FB084; // 0x4C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_244B6E3D44CEC85B15CF49A000A03ACE; // 0x4F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_700730C640F1FA3355DE48A4B2FFE16B; // 0x518(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_0010812A40484D29A54938AF9CBB6EEF; // 0x540(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5A7053D2423AE1F986A7E4B7F9743770; // 0x568(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3A2F83604C79CBB0E41D19A8C98FE74B; // 0x590(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_A2C8F20A4882AA2870D8BE91B54C23B7; // 0x5B8(0x28)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_C741B17349BF49CD30BFC88DE16AE605; // 0x5E0(0xC0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_ED9987864A9E693EA64A4D92B5485FA7; // 0x6A0(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_697FE2684E7F69D5703DD7BE7E7B83DF; // 0x780(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8680E6B1475A69F064147D82BFA1F5BE; // 0x7B0(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2F9F9FD54BF9F93AF65EC6AC6EA66071; // 0x7D8(0x30)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_838F4E1140C12B6FC9F4FB8B0EBE07AD; // 0x808(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_54367C0142F8CAD9355695BB351F905D; // 0x850(0x78)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_0FC12C364FC1AE08F0F1239168E17B88; // 0x8C8(0x18)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_B31238E9432B393D7711A298E822D4EB; // 0x8E0(0xC0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_A7FE16E0479EA90E179384B3212C6C99; // 0x9A0(0xC8)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive_0DFBABDE49DC1DB82EDBB09E84D6E600; // 0xA68(0x38)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_AE0859EB4986413BA80F45B42BC45DAD; // 0xAA0(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3DB289124E18F3783CD6FB8A1F3AFAA3; // 0xB80(0x30)(None)
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer_C989081944BB2BAB91EB02AADEE2D1DA; // 0xBB0(0x68)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_E31A5AF740C83DB9CAAB9B9F404B9A87; // 0xC18(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_DC5B0B034C6282153DE6C7A15023158C; // 0xC48(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_26F41EFC41F09297EF9DD9B5B881B21D; // 0xCF8(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_F29A4D314058F96F261AAFB1D95156BB; // 0xDB0(0x28)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5A4DB5AB49B6D7364AB5378B70F80345; // 0xDD8(0x30)(None)
	bool                                         IsPatrollingOnLand;                                // 0xE08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6A76[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WalkAdditiveStartPos;                              // 0xE0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RecentlyFired;                                     // 0xE10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGalileoPatrolLayerAnimBP_C* GetDefaultObj();

	void FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_GalileoPatrolLayerAnimBP(int32 EntryPoint);
};

}


