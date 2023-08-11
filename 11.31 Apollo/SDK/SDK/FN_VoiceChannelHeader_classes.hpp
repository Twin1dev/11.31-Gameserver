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

// 0x10 (0x300 - 0x2F0)
// WidgetBlueprintGeneratedClass VoiceChannelHeader.VoiceChannelHeader_C
class UVoiceChannelHeader_C : public UFortVoiceChannelHeaderEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          VBox_ActiveChannelExtras;                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VoiceChannelHeader_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_VoiceChannelHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
