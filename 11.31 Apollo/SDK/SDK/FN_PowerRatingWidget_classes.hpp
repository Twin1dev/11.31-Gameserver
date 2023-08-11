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

// 0x8C (0x304 - 0x278)
// WidgetBlueprintGeneratedClass PowerRatingWidget.PowerRatingWidget_C
class UPowerRatingWidget_C : public UFortPlayerPowerRating
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      BaseRatingValue;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BaseRatingValue_Large;                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BuffedRatingOuterGlow;                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHomebaseRatingBar_C*                  HomebaseRatingBar;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Power;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 ModeTypeSwitcher;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          OversizedMode;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PowerIconGlow;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Rating_Glow_Large;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RatingBar;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RegularMode;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TeamRatingValue;                                   // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TeamRatingValue_Large;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowDualPower;                                     // 0x2E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowProgress;                                      // 0x2E9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ShowGlow;                                          // 0x2EA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseLargeStyle;                                     // 0x2EB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseOversizedMode;                                  // 0x2EC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_442F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        InterpDuration;                                    // 0x2F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4430[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            PowerIncreasedSound;                               // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Power_Rating_Num;                                  // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PowerRatingWidget_C");
		return Clss;
	}

	void UpdateWidgetState(bool IsContributingToTeamPowerRating, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_GetBasePowerRating_ReturnValue, bool CallFunc_HasTeamMembers_ReturnValue, int32 CallFunc_GetBasePowerRating_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasTeamMembers_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3);
	void Construct();
	void OnBasePowerRatingUpdated(int32 BasePowerRating);
	void OnTeamPowerRatingUpdated(int32 TeamPowerRating);
	void OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress);
	void PreConstruct(bool IsDesignTime);
	void OnTeamMembershipChanged();
	void ExecuteUbergraph_PowerRatingWidget(int32 EntryPoint, bool CallFunc_HasTeamMembers_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 K2Node_Event_BasePowerRating, int32 K2Node_Event_TeamPowerRating, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float K2Node_Event_BaseRatingProgress, float K2Node_Event_TeamRatingProgress, class FText CallFunc_Format_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_Greater_FloatFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_GetBasePowerRating_ReturnValue, int32 CallFunc_GetTeamPowerRating_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget* K2Node_Select_Default_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
