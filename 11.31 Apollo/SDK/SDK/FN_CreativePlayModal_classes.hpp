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

// 0x90 (0x4F8 - 0x468)
// WidgetBlueprintGeneratedClass CreativePlayModal.CreativePlayModal_C
class UCreativePlayModal_C : public UFortCreativePlayOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FriendsAdded;                                      // 0x470(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x478(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     AddFriendsButton;                                  // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              AddFriendsContent;                                 // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      AddFriendsText;                                    // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CloseIcon;                                         // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCreativeLobbyAdSpace_C*               CreativeLobbyAdSpace;                              // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_158;                                         // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_IdlePulse;                                   // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     IslandCodeButton;                                  // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              IslandCodeContent;                                 // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        Mobile_CloseButton;                                // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayCloseButton;                                // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayTitle;                                      // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_3;                                        // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StartIslandText;                                   // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativePlayModal_C");
		return Clss;
	}

	void ManageCancelButton(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsUsingGamepad_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void SetStartIsland(class FText StartIslandName, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_TextIsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText Temp_text_Variable, class FText K2Node_Select_Default);
	void HandleSocialImportClosed(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void InitializeAddFriends(class FText PlatformName, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_ShouldShowImportPlatformFriendsOption_ReturnValue, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility K2Node_Select_Default, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1);
	void NullActionHandler(bool* bPassThrough);
	void InitFromObject(class UObject* InitObject);
	void BndEvt__CreativeOptionsServers_K2Node_ComponentBoundEvent_0_OnSelectedServerChanged__DelegateSignature(class UFortCreativeServerInfo* ServerInfo);
	void Construct();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void OnBeginOutro();
	void BndEvt__AddFriendsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IslandCodeButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void CreativeIslandCodeConfirmedEvent(class UFortCreativeIslandLink* IslandLink);
	void BndEvt__Mobile_CloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType);
	void ExecuteUbergraph_CreativePlayModal(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCreativeIslandLinkScreen_C* CallFunc_Create_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UObject* K2Node_Event_InitObject, class UFortCreativeServerInfo* K2Node_ComponentBoundEvent_ServerInfo, class UCreativeServerOptions_C* K2Node_DynamicCast_AsCreative_Server_Options, bool K2Node_DynamicCast_bSuccess, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, float K2Node_Select_Default, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsCreativeModeAccessLimited_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass* Temp_class_Variable, bool K2Node_Select_Default_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UClass* Temp_class_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, int32 CallFunc_GetSelectedButtonIndex_ReturnValue, bool Temp_bool_Variable_5, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class UCreativeServerOptionsTile_C* K2Node_DynamicCast_AsCreative_Server_Options_Tile, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility K2Node_Select_Default_2, class UFortCreativeIslandLink* K2Node_CustomEvent_IslandLink, class FText CallFunc_Conv_StringToText_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_IsUsingGamepad_ReturnValue, class UClass* K2Node_Select_Default_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
