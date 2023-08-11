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

// 0x9 (0x3991 - 0x3988)
// BlueprintGeneratedClass BP_PlayerPawn_Athena_Galileo.BP_PlayerPawn_Athena_Galileo_C
class ABP_PlayerPawn_Athena_Galileo_C : public APlayerPawn_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3988(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsPatrolling;                                      // 0x3990(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PlayerPawn_Athena_Galileo_C");
		return Clss;
	}

	void OnRep_IsPatrolling(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortPlayerAnimInstance* K2Node_DynamicCast_AsFort_Player_Anim_Instance, bool K2Node_DynamicCast_bSuccess);
	void ReceiveTick(float DeltaSeconds);
	void OnCharacterCustomizationCompleted(class AFortPlayerPawn* Pawn);
	void ExecuteUbergraph_BP_PlayerPawn_Athena_Galileo(int32 EntryPoint, class AFortPlayerPawn* K2Node_Event_Pawn, float K2Node_Event_DeltaSeconds);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
