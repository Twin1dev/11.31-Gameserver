#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xC20 - 0xBF8)
// WidgetBlueprintGeneratedClass ComOption.ComOption_C
class UComOption_C : public UFortCommunityVotingOption
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ComDivider_option;                                 // 0xC00(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ComRightImageBackground;                           // 0xC08(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_ComOptionButtonsContainer;                 // 0xC10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VFXVOTING;                                         // 0xC18(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UComOption_C* GetDefaultObj();

	void DisableButtons();
	void EnableButtons();
	void ExecuteUbergraph_ComOption(int32 EntryPoint, class UComOptionDetails_C* K2Node_DynamicCast_AsCom_Option_Details, bool K2Node_DynamicCast_bSuccess, class UComOptionDetails_C* K2Node_DynamicCast_AsCom_Option_Details_1, bool K2Node_DynamicCast_bSuccess_1, class UComOptionVote_C* K2Node_DynamicCast_AsCom_Option_Vote, bool K2Node_DynamicCast_bSuccess_2, class UFlameCounter_C* K2Node_DynamicCast_AsFlame_Counter, bool K2Node_DynamicCast_bSuccess_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UComOptionVote_C* K2Node_DynamicCast_AsCom_Option_Vote_1, bool K2Node_DynamicCast_bSuccess_4);
};

}


