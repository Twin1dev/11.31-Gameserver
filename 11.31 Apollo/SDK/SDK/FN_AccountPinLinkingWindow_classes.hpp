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

// 0x18 (0x590 - 0x578)
// WidgetBlueprintGeneratedClass AccountPinLinkingWindow.AccountPinLinkingWindow_C
class UAccountPinLinkingWindow_C : public UFortAccountPinLinkingWindow
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_83;                                          // 0x580(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_255;                                         // 0x588(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AccountPinLinkingWindow_C");
		return Clss;
	}

	void BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void ExecuteUbergraph_AccountPinLinkingWindow(int32 EntryPoint, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, bool K2Node_SwitchInteger_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
