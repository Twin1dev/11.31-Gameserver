#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x298 - 0x278)
// WidgetBlueprintGeneratedClass AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C
class UAthenaReadyUpTooltipTickWidget_C : public UAthenaReadyUpTooltipTickWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Ready;                                             // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Tick;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Tick_Shadow;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaReadyUpTooltipTickWidget_C* GetDefaultObj();

	void SetReadiness(bool bIsReady, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnSetPartyMember(class UFortPartyMember* NewPartyMember);
	void Destruct();
	void ExecuteUbergraph_AthenaReadyUpTooltipTickWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UFortPartyMember* K2Node_Event_NewPartyMember, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


