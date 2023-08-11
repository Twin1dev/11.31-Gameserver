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

// 0x30 (0x4A0 - 0x470)
// WidgetBlueprintGeneratedClass SocialPanel.SocialPanel_C
class USocialPanel_C : public UFortSocialPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnOpened;                                          // 0x478(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Back;                                        // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialPanel_TopBarExtension_C*        SocialPanel_TopBarExtension;                       // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialPanel_C");
		return Clss;
	}

	void Play_Panel_Animation_Sound(bool CallFunc_IsAnimationPlaying_ReturnValue);
	void ClosePanelAfterAnimation();
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_IsActivated_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAnySlideOutMenuOpen_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ClosePanel();
	void HandleOutroEnded();
	void OnBeginOutro();
	void OnBeginIntro();
	void HandleIntroEnded();
	void ExecuteUbergraph_SocialPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsAnySlideOutMenuOpen_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
