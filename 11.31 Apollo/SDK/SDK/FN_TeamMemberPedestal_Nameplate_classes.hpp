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

// 0x400 (0x1010 - 0xC10)
// WidgetBlueprintGeneratedClass TeamMemberPedestal_Nameplate.TeamMemberPedestal_Nameplate_C
class UTeamMemberPedestal_Nameplate_C : public UFortTeamMemberPedestalNameplate
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC10(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NotReadyTextColor;                                 // 0xC18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ReadyTextColor;                                    // 0xC20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      On_Ready_Change_Text;                              // 0xC28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              SB_InputAction;                                    // 0xC30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Widget_PlayerLevel;                                // 0xC38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   TeamMemberInfo;                                    // 0xC40(0x200)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                        PlayerIndex;                                       // 0xE40(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHovered;                                          // 0xE44(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsTalking;                                        // 0xE45(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsMuted;                                          // 0xE46(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_66AB[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateBrush                           TalkingBrush;                                      // 0xE48(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           MutedBrush;                                        // 0xED0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           MicBrush;                                          // 0xF58(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          ReadyColor;                                        // 0xFE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          NotReadyColor;                                     // 0xFF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            UnReadySound;                                      // 0x1000(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ReadySound;                                        // 0x1008(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TeamMemberPedestal_Nameplate_C");
		return Clss;
	}

	void OnReadyStatusChanged(enum class EGameReadiness GameReadiness);
	void BP_OnTeamMemberEstablished(bool bHasValidMember);
	void Construct();
	void OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera);
	void OnPlayReadyAudio(bool bIsReadyForMatchmaking);
	void OnCurrentSubGameChanged(enum class ESubGame NewSubGame);
	void ExecuteUbergraph_TeamMemberPedestal_Nameplate(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsUsingGamepad_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_2, enum class EGameReadiness Temp_byte_Variable_5, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class EGameReadiness K2Node_Event_GameReadiness, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bHasValidMember, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_8, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_4, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, bool K2Node_Event_bIsReadyForMatchmaking, const struct FLinearColor& K2Node_Select_Default_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESubGame K2Node_Event_NewSubGame, class USoundBase* K2Node_Select_Default_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_5);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
