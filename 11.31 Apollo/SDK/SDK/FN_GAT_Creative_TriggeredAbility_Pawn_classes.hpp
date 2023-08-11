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

// 0x10 (0xA70 - 0xA60)
// BlueprintGeneratedClass GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C
class UGAT_Creative_TriggeredAbility_Pawn_C : public UGAT_Creative_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPawn*                             AbilityOwner;                                      // 0xA68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAT_Creative_TriggeredAbility_Pawn_C");
		return Clss;
	}

	void SetupPawnActorAbility(class AFortPawn** FortPawn, class AFortPawn* LocalFortPawn, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class AFortPawn* CallFunc_SetupPawnActorAbility_FortPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
