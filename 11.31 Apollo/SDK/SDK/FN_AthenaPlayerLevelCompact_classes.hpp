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

// 0x20 (0x2C0 - 0x2A0)
// WidgetBlueprintGeneratedClass AthenaPlayerLevelCompact.AthenaPlayerLevelCompact_C
class UAthenaPlayerLevelCompact_C : public UAthenaPlayerLevelDisplay
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_ProgressBar;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            LevelChanged;                                      // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaPlayerLevelCompact_C");
		return Clss;
	}

	void OnUpdateRewardIcon(class UFortItem* RewardItem, TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, int32 RewardLevel, bool bRequiresBattlePass);
	void OnUpdateXpBar(float Progress, bool bIsMaxLevel);
	void ExecuteUbergraph_AthenaPlayerLevelCompact(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, class UFortItem* K2Node_Event_RewardItem, TSoftObjectPtr<class UTexture2D> K2Node_Event_RewardTexture, bool K2Node_Event_bHasAdditionalStylesToDisplay, int32 K2Node_Event_RewardLevel, bool K2Node_Event_bRequiresBattlePass, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetRestXpBalance_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float K2Node_Event_Progress, bool K2Node_Event_bIsMaxLevel, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default_1);
	void LevelChanged__DelegateSignature(int32 Level);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
