#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2F0 - 0x2C8)
// WidgetBlueprintGeneratedClass CreativeLobbyAd.CreativeLobbyAd_C
class UCreativeLobbyAd_C : public UFortCreativeAdTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      Text_Description;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Header;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_SubHeader;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         Violator;                                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCreativeLobbyAd_C* GetDefaultObj();

	void OnCMSDataUpdated();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_CreativeLobbyAd(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime);
};

}


