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

// 0x704 (0xA84 - 0x380)
// AnimBlueprintGeneratedClass CrackShot_Frontend_AnimBP.CrackShot_Frontend_AnimBP_C
class UCrackShot_Frontend_AnimBP_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_55FAC4AE463B7CB66FDC49AF1E7838EC; // 0x388(0x30)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_93D1A9E646C8ECD8EE982F93947F0EC5; // 0x3B8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_C6604ADE415A07BC5D79DD8A1A32DF58; // 0x3E0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_39079FB34DCCD007F53BC49AF7B38BA5; // 0x408(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_C92434A14007F9D5B4C31CA5F9F6C516; // 0x430(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_725103B745B3B1F985396F85E71DB073; // 0x458(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3DE232A44677766AC125D2BA8E519E35; // 0x480(0x28)()
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer_330781CA42F83AAC20DBD187D9544732; // 0x4A8(0x68)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4E5EEADC4F5C12032D5327A818585BC2; // 0x510(0x30)()
	struct FAnimNode_RandomPlayer                AnimGraphNode_RandomPlayer_7B3E4D314AD1117D579AC1B3F7F3BDB8; // 0x540(0x68)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_FA11DC8042016A685E654CBCF6B17ED7; // 0x5A8(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_125E44F144F19A5B5E046FBEF8EE184E; // 0x5D8(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_0BB61FEC49411EA7EBB41BB4BFB4AFD1; // 0x650(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C9633B6F44FE4527E4917DB9D1929D1D; // 0x680(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8202E6784EE6097325AE57BA8A89041B; // 0x6F8(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8F57B6684E88FA018F2EABABE98CFD79; // 0x728(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_82F7E0014F8375B086EDC6B4601F9AEE; // 0x7A0(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_74B0F3574F54788A1AD0E692306EC881; // 0x7D0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_952D9AD5431C59E1075F5E8AC17F0041; // 0x848(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_D9701AE342C7FF71C63437A86431CA86; // 0x878(0xB0)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_DFA6A2CD49F2A5CE80315FA84D4285EB; // 0x928(0x108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_C9063B3E480E263E2FF3AA93213BD870; // 0xA30(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3EC9AC9F436815CC2E6590AFC46F2C8F; // 0xA50(0x20)()
	bool                                         IsFireplaceCamera;                                 // 0xA70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F36[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRotator                              Rotator;                                           // 0xA74(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        CorrectionAngle;                                   // 0xA80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CrackShot_Frontend_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_C6604ADE415A07BC5D79DD8A1A32DF58();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_93D1A9E646C8ECD8EE982F93947F0EC5();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_CrackShot_Frontend_AnimBP(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue, float CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float K2Node_Event_DeltaTimeX, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Contains_ReturnValue, float CallFunc_GetCurveValue_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
