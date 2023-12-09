#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2C0 - 0x2A8)
// WidgetBlueprintGeneratedClass AthenaRespawnTimer.AthenaRespawnTimer_C
class UAthenaRespawnTimer_C : public UAthenaRespawnTimer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      TickDown;                                          // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          Content;                                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaRespawnTimer_C* GetDefaultObj();

	void OnTickDown();
	void OnTimeEnded();
	void AddExtensionWidget_BP(class UWidget* Widget);
	void Construct();
	void ExecuteUbergraph_AthenaRespawnTimer(int32 EntryPoint, class UWidget* K2Node_Event_Widget, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}


