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

// 0x10 (0x510 - 0x500)
// WidgetBlueprintGeneratedClass ProgressModalWidget.ProgressModalWidget_C
class UProgressModalWidget_C : public UFortProgressModal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x500(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULightbox_C*                           Lightbox;                                          // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProgressModalWidget_C");
		return Clss;
	}

	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Construct();
	void HandleIntroEnded();
	void HandleOutroEnded();
	void OnBeginIntro();
	void OnBeginOutro();
	void Destruct();
	void ExecuteUbergraph_ProgressModalWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
