#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x300 - 0x2F0)
// WidgetBlueprintGeneratedClass VoiceChannelHeader.VoiceChannelHeader_C
class UVoiceChannelHeader_C : public UFortVoiceChannelHeaderEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VBox_ActiveChannelExtras;                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVoiceChannelHeader_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_VoiceChannelHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


