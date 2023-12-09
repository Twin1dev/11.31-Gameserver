#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x338 - 0x2E0)
// WidgetBlueprintGeneratedClass AthenaStormSurgePhase.AthenaStormSurgePhase_C
class UAthenaStormSurgePhase_C : public UAthenaStormSurgeWarningBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      StormDMGAlert;                                     // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      AlertText;                                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HelpText;                                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LightningBack;                                     // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StormIcon;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsDisplaying;                                     // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            StartStormSurgeDisplay;                            // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            StopStormSurgeDisplay;                             // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UAthenaStormSurgePhase_C* GetDefaultObj();

	void Anim_Load(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnStartDisplaying(class FText& TitleText, class FText& SubTitleText, bool bDisplaySubtitle, bool bPlayDamageActiveSound);
	void OnStopDisplaying();
	void StopDisplayAfterTime();
	void ExecuteUbergraph_AthenaStormSurgePhase(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText K2Node_Event_TitleText, class FText K2Node_Event_SubTitleText, bool K2Node_Event_bDisplaySubtitle, bool K2Node_Event_bPlayDamageActiveSound);
	void StopStormSurgeDisplay__DelegateSignature();
	void StartStormSurgeDisplay__DelegateSignature();
};

}


