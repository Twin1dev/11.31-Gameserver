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

// 0x10A (0x542 - 0x438)
// WidgetBlueprintGeneratedClass PlayerBannedModal.PlayerBannedModal_C
class UPlayerBannedModal_C : public UFortPlayerBanned
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            BanMessage;                                        // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     CloseButton;                                       // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Disclaimer;                                        // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Severe;                                      // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TimeRemaining;                                     // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Title;                                             // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Triangles_1;                                       // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Triangles_2;                                       // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Triangles_3;                                       // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_SeverityImage;                      // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         AckSucceeded;                                      // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4284[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  BanInformation;                                    // 0x4A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastInlineDelegateProperty_            OnCloseSucceeded;                                  // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        TryCount;                                          // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsWarning;                                        // 0x4CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4285[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FMcpBanInfo                           McpBanInfo;                                        // 0x4D0(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  BanType;                                           // 0x528(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIsCompetitiveBan;                                 // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsTeamingWithCheaterBan;                          // 0x541(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerBannedModal_C");
		return Clss;
	}

	void HandleCloseAttempted(int32 Temp_int_Variable, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void RemoveModal();
	class FText BanEnumToText(enum class EPlayerBanReasons Index, const class FString& ExploitProgramName, enum class EPlayerCompetitiveBanReasons Competitive_Ban_Reason, bool bIsCompetitiveBan, enum class EPlayerCompetitiveBanReasons Temp_byte_Variable, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText Temp_text_Variable, bool CallFunc_BooleanAND_ReturnValue, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, bool Temp_bool_Variable, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, enum class EPlayerBanReasons Temp_byte_Variable_1, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText K2Node_Select_Default_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool Temp_bool_Variable_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText K2Node_Select_Default_2, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default_3, class FText K2Node_Select_Default_4);
	void OnBanAck(bool Success);
	void UpdateTimeRemaining(class FText Time, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_TextIsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void DisableButton(bool DisableButton, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateText(class FText Title, class FText Content);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnActivated();
	void ExecuteUbergraph_PlayerBannedModal(int32 EntryPoint, class FText Temp_text_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_2, const struct FMcpBanInfo& CallFunc_GetBanInfo_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_3, bool Temp_bool_Variable_1, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, enum class EPlayerBanReasons Temp_byte_Variable, bool Temp_bool_Variable_2, enum class EPlayerBanReasons Temp_byte_Variable_1, bool Temp_bool_Variable_3, int32 Temp_int_Array_Index_Variable, class FText Temp_text_Variable_5, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool Temp_bool_Variable_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, const struct FTimespan& CallFunc_GetBanDuration_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Len_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Greater_IntInt_ReturnValue, enum class EPlayerBanReasons CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTimespan& CallFunc_GetBanDuration_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, class FText K2Node_Select_Default_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText K2Node_Select_Default_3, class FText CallFunc_BanEnumToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_MakeLiteralText_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_5, class FText K2Node_Select_Default_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3);
	void OnCloseSucceeded__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
