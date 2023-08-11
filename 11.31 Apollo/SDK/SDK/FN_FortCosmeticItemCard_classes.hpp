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

// 0x8 (0x2A0 - 0x298)
// WidgetBlueprintGeneratedClass FortCosmeticItemCard.FortCosmeticItemCard_C
class UFortCosmeticItemCard_C : public UFortCosmeticItemCard
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCosmeticItemCard_C");
		return Clss;
	}

	void UpdateVisuals(struct FFortColorPalette& ColorPalette, bool bIsItem, bool bIsBorderAnimated, bool bIsHero);
	void UpdateItemIconVisibility();
	void HandleSizeChanged();
	void ExecuteUbergraph_FortCosmeticItemCard(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, const struct FFortColorPalette& K2Node_Event_ColorPalette, bool K2Node_Event_bIsItem, bool K2Node_Event_bIsBorderAnimated, bool K2Node_Event_bIsHero, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
