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

// 0x8 (0x338 - 0x330)
// WidgetBlueprintGeneratedClass TabAudioOptions_New.TabAudioOptions_New_C
class UTabAudioOptions_New_C : public UFortTabAudioOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabAudioOptions_New_C");
		return Clss;
	}

	void SettingValueChanged(float Value);
	void CenterOnTab();
	void ExecuteUbergraph_TabAudioOptions_New(int32 EntryPoint, float K2Node_CustomEvent_Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
