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

// 0x10 (0x288 - 0x278)
// WidgetBlueprintGeneratedClass ItemInfoWidget.ItemInfoWidget_C
class UItemInfoWidget_C : public UFortItemInfoWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                RarityGlow;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemInfoWidget_C");
		return Clss;
	}

	void SetRarityMaterialValues(class UFortItemDefinition* ItemDefinition);
	void ExecuteUbergraph_ItemInfoWidget(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UFortItemDefinition* K2Node_Event_ItemDefinition, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
