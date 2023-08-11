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

// 0x40 (0xB00 - 0xAC0)
// BlueprintGeneratedClass DA_Butterfly.DA_Butterfly_C
class ADA_Butterfly_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         CanCancelAbility;                                  // 0xAC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A0F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          CanCancelTimer;                                    // 0xAD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        CancelDelay;                                       // 0xAD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DA_Butterfly_C");
		return Clss;
	}

	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPOnUnEquip();
	void BPReleaseSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_Butterfly(int32 EntryPoint, class AFortDecoHelper* K2Node_Event_FortDecoHelper_2, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AFortDecoHelper* K2Node_Event_FortDecoHelper_1, class AFortDecoHelper* K2Node_Event_FortDecoHelper);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
