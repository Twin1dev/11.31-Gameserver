#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x310 - 0x2E0)
// WidgetBlueprintGeneratedClass AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C
class UAthenaTeamMemberIndicator_C : public UAthenaPlayerIndicatorBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      StatusIntro;                                       // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaTeamMemberDBNOState_C*          DBNOIndicator;                                     // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               IndicatorSpacer;                                   // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerName;                                        // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SquadMarker;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaTeamMemberIndicator_C* GetDefaultObj();

	void DBNOStateChanged(class AFortPlayerStateAthena* PS, bool bDBNO);
	void TalkingStateChanged(class AFortPlayerStateAthena* PS, bool bTalking);
	void BeingRevivedStateChanged(class AFortPlayerStateAthena* PS, bool bReviving, float MaxReviveTime);
	void PlayerNameChanged(class AFortPlayerStateAthena* PS, const class FString& PlayerName);
	void Construct();
	void DBNORefreshed(bool IsDBNO);
	void ExecuteUbergraph_AthenaTeamMemberIndicator(int32 EntryPoint, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class AFortPlayerStateAthena* K2Node_Event_PS_3, bool K2Node_Event_bDBNO, class AFortPlayerStateAthena* K2Node_Event_PS_2, bool K2Node_Event_bTalking, float CallFunc_SelectFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_PS_1, bool K2Node_Event_bReviving, float K2Node_Event_MaxReviveTime, class AFortPlayerStateAthena* K2Node_Event_PS, const class FString& K2Node_Event_PlayerName, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FLinearColor& CallFunc_GetPinColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool K2Node_CustomEvent_isDBNO, enum class ESlateVisibility K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


