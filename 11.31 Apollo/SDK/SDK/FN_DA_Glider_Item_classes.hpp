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

// 0x68 (0xB28 - 0xAC0)
// BlueprintGeneratedClass DA_Glider_Item.DA_Glider_Item_C
class ADA_Glider_Item_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 ErrorReason;                                       // 0xAC8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 ErrorReasonGamepad;                                // 0xAE8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 ErrorCannotUse;                                    // 0xB08(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DA_Glider_Item_C");
		return Clss;
	}

	void IsOnGround(bool* bOnGround, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void RaiseUsageError(struct FGameplayTagContainer& FailedReason, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_Glider_Item(int32 EntryPoint, class AFortDecoHelper* K2Node_Event_FortDecoHelper);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
