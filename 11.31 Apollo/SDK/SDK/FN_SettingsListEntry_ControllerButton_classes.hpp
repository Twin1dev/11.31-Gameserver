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

// 0x10 (0x2B8 - 0x2A8)
// WidgetBlueprintGeneratedClass SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C
class USettingsListEntry_ControllerButton_C : public UFortSettingsListEntrySetting_ControllerButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonRichTextBlock*                  CommonRichTextBlock_97;                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SettingsListEntry_ControllerButton_C");
		return Clss;
	}

	void OnSettingAssigned(class FText& ActionText);
	void ExecuteUbergraph_SettingsListEntry_ControllerButton(int32 EntryPoint, class FText K2Node_Event_ActionText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
