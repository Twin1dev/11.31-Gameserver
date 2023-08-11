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

// 0x18 (0x438 - 0x420)
// WidgetBlueprintGeneratedClass ControllerActionsMenu.ControllerActionsMenu_C
class UControllerActionsMenu_C : public UCommonPopupMenu
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_86;                                         // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDynamicEntryBox*                      DynamicEntryBox_77;                                // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControllerActionsMenu_C");
		return Clss;
	}

	void BP_OnActivated();
	void ExecuteUbergraph_ControllerActionsMenu(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
