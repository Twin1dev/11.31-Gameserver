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

// 0x28 (0x260 - 0x238)
// WidgetBlueprintGeneratedClass MatchmakingRegionAndPool.MatchmakingRegionAndPool_C
class UMatchmakingRegionAndPool_C : public UMatchmakingRegionAndPoolBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      ClassicModeText;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       IBMSwitcher;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        InputRegion;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RegionText;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MatchmakingRegionAndPool_C");
		return Clss;
	}

	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_MatchmakingRegionAndPool(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue, class FText CallFunc_GetLegacyNonInputBasedPlayAgainstText_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool Temp_bool_Variable, bool CallFunc_ShouldShowInputKeys_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue_2, bool CallFunc_IsInputBasedMatchmakingEnabled_ReturnValue_1, int32 K2Node_Select_Default_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_3, class FText CallFunc_GetMCPRegionText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
