#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20C (0x534 - 0x328)
// WidgetBlueprintGeneratedClass TabAccount.TabAccount_C
class UTabAccount_C : public UFortAccountOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          AccountInfoHeader;                                 // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AccountLinkText;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_AccountLinking;                             // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_CustomerService;                            // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_RefundRequest;                              // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonHierarchicalScrollBox*          CommonHierarchicalScrollBox_0;                     // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_2;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_5;                                 // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_6;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_7;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ConfigurationSwitcher;                             // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ContentHeader;                                     // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CopyCustomerIDButton;                              // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CopyEpicAccountIDButton;                           // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        DefaultConfigurationBox;                           // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          DesktopConsoleOptions;                             // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EpicId;                                            // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EpicIdLabel;                                       // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortTwitchLogin_C*                    FortTwitchLogin;                                   // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_6;                                   // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    LeaderboardPrivacy;                                // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LifetimeRefundDesc;                                // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LifetimeRefundText;                                // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    LocalNotificationsToggle;                          // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MobileOptions;                                     // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NotificationsHeader;                               // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    NotifyWhenPlayingToggle;                           // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    PlayerSurveysToggle;                               // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          PrivacySettings;                                   // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RailId;                                            // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      RailIdLabel;                                       // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    ReceiveGiftToggle;                                 // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RefundRequest;                                     // 0x438(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                    SamsungStoreToggle;                                // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_RefundRequest;                             // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SocialHeader;                                      // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialSettings_C*                     SocialSettings;                                    // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_RefundRequest;                              // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StaticURLText;                                     // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TencentRailInfoHBox;                               // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_RemainingRefunds;                             // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TooltipTextBox;                                    // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          UninstallSTW;                                      // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     UninstallStWButton;                                // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      UninstallSTWDesc;                                  // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     URLButton;                                         // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBox_TwitchSettings;                               // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          WebsiteConfigurationBox;                           // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        StWUninstallProgres;                               // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ScrollBarSizeDefault;                              // 0x4BC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ScrollBarSizeMobile;                               // 0x4C4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DefaultFontSize;                                   // 0x4CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MobileFontSize;                                    // 0x4D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MobileTitleSize;                                   // 0x4D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ButtonMinWidthMobile;                              // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ButtonMinHeightMobile;                             // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeftPaddingSelectorMobile;                         // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             RotatorContentBtnSize;                             // 0x4E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RefaundSpacerSizeMobile;                           // 0x4EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  PlayerSurveysToggleDisplayText;                    // 0x4F0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class FText                                  PlayerSurveysToggleHoverText;                      // 0x508(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	enum class ESettingType                      PlayerSurveysToggleSetting;                        // 0x520(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2928[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PlayerSurveysTogglePreviousValue;                  // 0x524(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESettingType                      NotifyWhenPlayingToggleSetting;                    // 0x528(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2929[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NotifyWhenPlayingTogglePreviousValue;              // 0x52C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalNotificationsTogglePreviousValue;             // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTabAccount_C* GetDefaultObj();

	void HandleUserSettingsUINeedsUpdate();
	void InitPreviousValues(class UFortSettingsContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetRotatorSettingValue_ReturnValue);
	void UpdateSize(const struct FMargin& TempPadding, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, TArray<class URotatorSelector_C*>& K2Node_MakeArray_Array, class URotatorSelector_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable_3, TArray<class UWidget*>& K2Node_MakeArray_Array_1, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue, TArray<class UTextBlock*>& K2Node_MakeArray_Array_2, class UTextBlock* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UWidget* CallFunc_FindParentWidgetOfType_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, class USizeBox* K2Node_DynamicCast_AsSize_Box, bool K2Node_DynamicCast_bSuccess_2, TArray<class UCommonTextBlock*>& K2Node_MakeArray_Array_3, int32 CallFunc_Array_Length_ReturnValue_3, class UCommonTextBlock* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3);
	void SetScrollBar(const struct FVector2D& DefaultSize, const struct FVector2D& MobileSize, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, const struct FVector2D& K2Node_Select_Default);
	void SetFontSize(class UCommonTextBlock* Text, int32 DefaultFontSize, int32 MobileFontSize, const struct FSlateFontInfo& TempFont, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, int32 K2Node_Select_Default);
	void CenterAppropriateWidget(bool CallFunc_IsMobileGame_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_ShouldShowLeaderboardPrivacySettings_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_IsDesktopPlatform_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void PrivacySettingsFromSelection(int32 A, struct FMcpPrivacySettings* McpPrivacySettings, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FMcpPrivacySettings& K2Node_MakeStruct_McpPrivacySettings);
	int32 PrivacySettingsToSelection(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 K2Node_Select_Default);
	void OnStWContentUninstalled(float StWUninstallProgress);
	class FText GetTencentId(class UFortMcpContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetTencentIdString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void InitializeWebsiteConfiguration(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue, const class FString& CallFunc_GetAccountLinkingUIURL_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortAccountLinkingUIConfig CallFunc_GetAccountLinkingUIConfig_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1);
	struct FFortAnalyticsEventAttribute Build_Player_Id_Analytic_Attribute(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, const class FString& CallFunc_GetDebugStringForUniqueId_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue);
	struct FFortAnalyticsEventAttribute Build_Player_Name_Analytic_Attribute(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortRegisteredPlayerInfo* CallFunc_GetPlayerInfoFromUniqueID_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue);
	void Initialize_Data(enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool Temp_bool_Variable_2, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, bool Temp_bool_Variable_4, bool CallFunc_IsDesktopPlatform_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, bool Temp_bool_Variable_6, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_GetEnableNotifyWhenPlaying_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_13, bool Temp_bool_Variable_7, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_4, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_14, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_8, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_17, bool CallFunc_BooleanAND_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, bool CallFunc_ShouldDisableReceiveGiftOption_ReturnValue, bool CallFunc_GetDisablePurchaseHistoryScreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_ShouldShowSamsungStore_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, TArray<class FText>& CallFunc_LoadSamsungOptions_OutOptions, int32 CallFunc_LoadSamsungOptions_CurrentOptionIdx, bool Temp_bool_Variable_9, enum class ESlateVisibility K2Node_Select_Default_3, bool CallFunc_CanLocalPlayerReceiveGifts_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class FText CallFunc_MakeLiteralText_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_ShouldShowLeaderboardPrivacySettings_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_4, enum class ESlateVisibility Temp_byte_Variable_18, class FText CallFunc_MakeLiteralText_ReturnValue_1, TArray<class FText>& K2Node_MakeArray_Array_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, bool CallFunc_IsConsolePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class EChunkInstallState CallFunc_GetOnDemandChunksInstallState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility K2Node_Select_Default_5, enum class ESlateVisibility Temp_byte_Variable_19, bool CallFunc_IsAthena_ReturnValue, bool Temp_bool_Variable_10, bool CallFunc_IsXboxPlatform_ReturnValue, class UFortSettingsContext* CallFunc_GetContext_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_GetRotatorSettingValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_IsMobileGame_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_4, enum class ESlateVisibility K2Node_Select_Default_6, class UFortSettingsContext* CallFunc_GetContext_ReturnValue_6, int32 CallFunc_GetRotatorSettingValue_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue_2, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_GetEnableLocalNotifications_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, enum class ESlateVisibility K2Node_Select_Default_7, enum class ESlateVisibility K2Node_Select_Default_8, class FText CallFunc_GetTencentId_ReturnValue, bool CallFunc_IsTencentBuild_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_9, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, const class FString& CallFunc_GetDebugStringForUniqueId_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_20, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_21, bool Temp_bool_Variable_11, enum class ESlateVisibility K2Node_Select_Default_10, enum class EFortAccountLinkingUIConfig CallFunc_GetAccountLinkingUIConfig_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UWidget* K2Node_Select_Default_11);
	void Update_Data();
	void DialogResult_38AE683A4765B23E84C880991D01C356(enum class EFortDialogResult Result, class FName ResultName);
	void UpdateOptionsTab();
	void CenterOnTab();
	void Construct();
	void BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature(class FText NewTooltipText);
	void BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CopyCustomerIDButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CopyEpicAccountIDButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_CustomerService_K2Node_ComponentBoundEvent_108_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Logout_K2Node_ComponentBoundEvent_164_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__UninstallStWButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetRefundRequestText(int32 RefundsRemaining, bool bCanRefundSomething);
	void BndEvt__Button_RefundRequest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__LeaderboardPrivacy_K2Node_ComponentBoundEvent_8_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void OnReadPrivacySettings(bool bSuccess, struct FMcpPrivacySettings& Settings);
	void BndEvt__ReceiveGiftToggle_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__SamsungStoreToggle_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__PlayerSurveysToggle_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void Destruct();
	void BndEvt__NotifyWhenPlayingToggle_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__LocalNotificationsToggle_K2Node_ComponentBoundEvent_7_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void ExecuteUbergraph_TabAccount(int32 EntryPoint, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UFortSettingsContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_Format_ReturnValue, class UFortSettingsContext* CallFunc_GetContext_ReturnValue_1, class UFortSettingsContext* CallFunc_GetContext_ReturnValue_2, class FText K2Node_ComponentBoundEvent_NewTooltipText, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_7, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, const class FString& CallFunc_GetAccountLinkingUIURL_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button_6, bool K2Node_SwitchEnum_CmpSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button_5, class FName Temp_name_Variable, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_UninstallAllOnDemandChunks_ReturnValue, int32 CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 K2Node_Event_RefundsRemaining, bool K2Node_Event_bCanRefundSomething, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_ShowWebURL_ReturnValue, class UPurchaseHistoryScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index_5, bool K2Node_CustomEvent_bSuccess, const struct FMcpPrivacySettings& K2Node_CustomEvent_Settings, const struct FMcpPrivacySettings& CallFunc_PrivacySettingsFromSelection_McpPrivacySettings, int32 CallFunc_PrivacySettingsToSelection_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index_4, bool CallFunc_Conv_IntToBool_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index_3, int32 K2Node_ComponentBoundEvent_Selected_Index_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_ComponentBoundEvent_Selected_Index_1, int32 K2Node_ComponentBoundEvent_Selected_Index, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_6);
};

}


