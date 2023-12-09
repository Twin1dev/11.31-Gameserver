#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x8E1 - 0x8C8)
// WidgetBlueprintGeneratedClass GlobalActionKeybindWidget.GlobalActionKeybindWidget_C
class UGlobalActionKeybindWidget_C : public UActionDetailsSourceKeybindWidget_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EFortGlobalAction                 GlobalAction;                                      // 0x8D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStandardGlobalActionDetailsDataSource* TypedActionSource;                                 // 0x8D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGlobalActionDetailsFunctionContext ActionDetailsContext;                              // 0x8E0(0x1)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UGlobalActionKeybindWidget_C* GetDefaultObj();

	void PropagateActionDetailsContext();
	void SetActionDetailsContext(const struct FFortGlobalActionDetailsFunctionContext& Value);
	void SetGlobalAction(enum class EFortGlobalAction Value);
	void PropagateGlobalAction();
	void OnInitialized();
	void ExecuteUbergraph_GlobalActionKeybindWidget(int32 EntryPoint, const struct FFortGlobalActionDetailsFunctionContext& Temp_struct_Variable, class UFortStandardGlobalActionDetailsDataSource* CallFunc_ConstructWithDefaultContexts_ReturnValue, TScriptInterface<class IFortGlobalActionDetailsDataSource> CallFunc_SetActionSource_Value_CastInput);
};

}


