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

// 0x160 (0x608 - 0x4A8)
// WidgetBlueprintGeneratedClass ImportFriends.ImportFriends_C
class UImportFriends_C : public UFortSocialImportPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro_V2;                                          // 0x4B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ArrowPulse;                                        // 0x4B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      AddFriendsDescription;                             // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_AddFriendsDescription;                          // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_ChangeInSettingsText;                           // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_LimitedTimeHeader;                              // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CT_TakenToLauncher;                                // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoWidget_C*                     ItemInfoWidget;                                    // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             SBox_AddFriendButtonScaleBox;                      // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxDescription;                               // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxHeader;                                    // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFrontEndCamera                   DesiredFrontEndCamera;                             // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortItemDefinition*                   PreviewItemDef;                                    // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeartbeatDelayIntroAnimation;                      // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        DebugSocialImportType;                             // 0x53C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasReward;                                        // 0x53D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5FFE[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  FacebookHeader;                                    // 0x540(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  VKHeader;                                          // 0x558(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SteamHeader;                                       // 0x570(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PlaystationHeader;                                 // 0x588(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  XboxHeader;                                        // 0x5A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ESocialImportPanelPlatform        SocialPlatform;                                    // 0x5B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        WrapHeaderAt;                                      // 0x5BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  XboxDescriptionText;                               // 0x5C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  PSNDescriptionText;                                // 0x5D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  SwitchDescriptionText;                             // 0x5F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImportFriends_C");
		return Clss;
	}

	void ScaleTextButton(int32 CharThreshold, class UScaleBox* ContainingScaleBox, class UIconTextButton_C* Button, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue);
	void ScaleTextboxWithWrappingWorkaround(class UScaleBox* ContainingScaleBox, int32 CharLimitThreshold, class UCommonTextBlock* TargetText, int32 WrapAtHorrizontal, float ScaleCharThreshold, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Len_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void HandleHeaderText();
	void HandleDescriptionText();
	void OnPanelTypeSet(enum class ESocialImportPanelType NewType);
	void BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnActivated();
	void OnIncentivizedSet(bool bIncentivized);
	void ExecuteUbergraph_ImportFriends(int32 EntryPoint, class FText Temp_text_Variable, enum class ESocialImportPanelPlatform Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESocialImportPanelPlatform Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, enum class ESlateVisibility Temp_byte_Variable_13, enum class ESocialImportPanelPlatform Temp_byte_Variable_14, bool K2Node_Event_IsDesignTime, enum class ESocialImportPanelType K2Node_Event_NewType, enum class ESocialImportPanelPlatform Temp_byte_Variable_15, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESocialImportPanelPlatform CallFunc_GetSocialPlatform_OutPlatform, bool CallFunc_GetSocialPlatform_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_bIncentivized, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_TextToUpper_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button_1, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility K2Node_Select_Default_2, class FText K2Node_Select_Default_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
