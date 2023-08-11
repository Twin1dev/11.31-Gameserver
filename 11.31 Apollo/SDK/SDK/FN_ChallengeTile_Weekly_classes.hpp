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

// 0x60 (0xC18 - 0xBB8)
// WidgetBlueprintGeneratedClass ChallengeTile_Weekly.ChallengeTile_Weekly_C
class UChallengeTile_Weekly_C : public UAthenaChallengeSetTile_Weekly
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AmbientPartyAssistAttention;                       // 0xBC0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Outro;                                             // 0xBC8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHover;                                           // 0xBD0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ImageBackground;                                   // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageCompletionBackground;                         // 0xBE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageLockIcon;                                     // 0xBE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               LockedMessageSpacer;                               // 0xBF0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayPartyAssist;                                // 0xBF8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       SwitcherBackground;                                // 0xC00(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherProgressInfo;                              // 0xC08(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               TextSpacer;                                        // 0xC10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChallengeTile_Weekly_C");
		return Clss;
	}

	void SetDynamicColors(class UImage* WeeklyDynamicMaterialTarget, struct FFortChallengeSetStyle& FortChallengeSetStyle, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void OnChallengeSetEstablished(struct FFortChallengeSetStyle& DisplayStyle, bool bIsComplete, bool bIsLocked);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void OnContainsPartyAssistedChallengeChanged(bool bHasPartyAssistedChallenge);
	void ExecuteUbergraph_ChallengeTile_Weekly(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFortChallengeSetStyle& K2Node_Event_DisplayStyle, bool K2Node_Event_bIsComplete, bool K2Node_Event_bIsLocked, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_Event_bHasPartyAssistedChallenge);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
