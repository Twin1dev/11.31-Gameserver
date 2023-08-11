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

// 0x650 (0x8C0 - 0x270)
// AnimBlueprintGeneratedClass Pickaxe_Rhino_AnimBlueprint.Pickaxe_Rhino_AnimBlueprint_C
class UPickaxe_Rhino_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_B338F36F4A96F29AF29546A430EEB6D1; // 0x278(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput_0A688F724C4804496F7057B1DA3573EF; // 0x2A8(0x70)()
	uint8                                        Pad_64CE[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_69841E3A45072CCDC404A5BB8795C346; // 0x320(0x560)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_28CBDE064A82CB1CEAD5B4963C22704A; // 0x880(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_62E8F4EB43FE70F8EDDEF08EAD87625B; // 0x8A0(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Pickaxe_Rhino_AnimBlueprint_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
