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

// 0x28 (0xBC8 - 0xBA0)
// WidgetBlueprintGeneratedClass AthenaReplayBrowserRow.AthenaReplayBrowserRow_C
class UAthenaReplayBrowserRow_C : public UAthenaReplayBrowserEntryWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Selected_Hovered;                                  // 0xBA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered;                                           // 0xBB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Selected_Direct;                                   // 0xBB8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         Border_Background;                                 // 0xBC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaReplayBrowserRow_C");
		return Clss;
	}

	void BP_OnSelected();
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_HandleReplayStateSet(bool bSaved, bool Bold, bool bCorrupt);
	void ExecuteUbergraph_AthenaReplayBrowserRow(int32 EntryPoint, bool K2Node_Event_bSaved, bool K2Node_Event_bOld, bool K2Node_Event_bCorrupt, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_GetSelected_ReturnValue_1, class UWidgetAnimation* K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
