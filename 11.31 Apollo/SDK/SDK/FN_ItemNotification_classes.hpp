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

// 0x40 (0x4C8 - 0x488)
// WidgetBlueprintGeneratedClass ItemNotification.ItemNotification_C
class UItemNotification_C : public UFortItemNotification
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x488(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Content_Intro;                                     // 0x490(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Content_Fade;                                      // 0x498(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Fade;                                              // 0x4A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      InitialState;                                      // 0x4A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x4B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Backplate;                                         // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_Content;                                  // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemNotification_C");
		return Clss;
	}

	void HandleFade(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void HandleIntro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void HandleInitialState(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void OnNextItemDisplay();
	void OnCloseScreen();
	void Construct();
	void OnSetButtonText(bool bCanCloseWidget);
	void ExecuteUbergraph_ItemNotification(int32 EntryPoint, class USoloButton_C* K2Node_DynamicCast_AsSolo_Button, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, bool K2Node_Event_bCanCloseWidget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
