#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x350 - 0x2A0)
// WidgetBlueprintGeneratedClass AthenaSpectatorRebootWidget.AthenaSpectatorRebootWidget_C
class UAthenaSpectatorRebootWidget_C : public UFortSpectatorRebootWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_ProgressBarFull;                              // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RebootProgressBarFillUp;                           // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_ChipExpiresIn;                                // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Progress;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ResurrectionChipExpirationBar;               // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  MessageText_1;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  MessageText_2;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TimeLeftText;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  AwaitingReboot;                                    // 0x2E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  GrabCard;                                          // 0x300(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          CardTimerHandle;                                   // 0x318(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        HeartbeatDisplayDelayTime;                         // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6655[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          DisplayMessageHearbeatTimer;                       // 0x328(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                  RebootMomentarily;                                 // 0x330(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         LoadingScreenEnabled;                              // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6656[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RebootDurationTime;                                // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaSpectatorRebootWidget_C* GetDefaultObj();

	void HandleOnResurrectionStateChanged(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsResurrectingNow_ReturnValue, bool CallFunc_CanBeResurrected_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsResurrectionChipAvailable_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1);
	void DisplayChipAvailableMessage();
	void Construct();
	void Destruct();
	void HandleCardAvailableTimer();
	void OnResurrectionStateChanged();
	void HandleOnLoadScreenChanged(class AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, class FText HUDReasonText);
	void PlayRebootProgress();
	void OnFillComplete();
	void ResetProgressBar();
	void ExecuteUbergraph_AthenaSpectatorRebootWidget(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsAnimationPlaying_ReturnValue, float Temp_float_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_TextToUpper_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetRemainingResurrectionChipExpirationTime_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPlayerControllerAthena* K2Node_CustomEvent_PlayerController, bool K2Node_CustomEvent_bEnableLoadScreen, class FText K2Node_CustomEvent_HUDReasonText, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
};

}


