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

// 0x12F (0xCD7 - 0xBA8)
// WidgetBlueprintGeneratedClass PartySuggestionButton.PartySuggestionButton_C
class UPartySuggestionButton_C : public UFortPartySuggestionButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      RequestAccepted;                                   // 0xBB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MouseHovered;                                      // 0xBB8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Outro;                                             // 0xBC0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered;                                           // 0xBC8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0xBD0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BorderOfDarkenedText;                              // 0xBE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_ActionPrompt;                                   // 0xBE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                I_SquiglyTail;                                     // 0xBF0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SparklyTraingles;                                  // 0xBF8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsLFG;                                            // 0xC00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsHovered;                                        // 0xC01(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_669D[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstanceDynamic*              MID_MainBorder_Normal;                             // 0xC08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_MainBorder_Normal_Tail;                        // 0xC10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatSpringState                     SpringState_ShapeChange;                           // 0xC18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        SS_0_Stiffness;                                    // 0xC20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SS_0_Damping;                                      // 0xC24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SS_0_Mass;                                         // 0xC28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spring_ShapeChange_NewVal;                         // 0xC2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spring_ShapeChange_Target;                         // 0xC30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_ShapeParam;                                    // 0xC34(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_669E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInterface*                    M_MainBorder_Normal;                               // 0xC40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    M_MainBorder_Normal_Tail;                          // 0xC48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    M_MainBorder_Highlight;                            // 0xC50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    M_MainBorder_Highlight_Tail;                       // 0xC58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_HighlightBorder;                               // 0xC60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_HighlightBorder_Tail;                          // 0xC68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Cur_Border;                                    // 0xC70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Cur_Tail;                                      // 0xC78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_SparkleTraingles;                              // 0xC80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    M_SparkleTriangles;                                // 0xC88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_Color_R_Param;                                 // 0xC90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_Sparkles_InnerColorParam;                      // 0xC98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_Sparkles_OuterColorParam;                      // 0xCA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_Color_L_Param;                                 // 0xCA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MID_Sparkles_TriangleColor_A;                      // 0xCB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatSpringState                     SpringState_Scale;                                 // 0xCB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Spring_Scale_NewVal;                               // 0xCC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spring_Scale_Target;                               // 0xCC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SS_1_Mass;                                         // 0xCC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SS_1_Damping;                                      // 0xCCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SS_1_Stiffness;                                    // 0xCD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseSpringInterpAnims;                             // 0xCD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInvited;                                         // 0xCD5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bNewSuggestionInQueue;                             // 0xCD6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PartySuggestionButton_C");
		return Clss;
	}

	void SetupMIDReferences(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4);
	void SetMainMIDs(class UMaterialInstanceDynamic* BorderMID, class UMaterialInstanceDynamic* TailMID, class UMaterialInstanceDynamic* SparklesMID, const struct FLinearColor& LC_Cur_Border_L, const struct FLinearColor& LC_CurBorder_R, float CurMIDScalar_ShapeChange, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue);
	void InitPhysAnim(const struct FFloatSpringState& K2Node_MakeStruct_FloatSpringState, const struct FFloatSpringState& K2Node_MakeStruct_FloatSpringState_1);
	void InitMIDs();
	void HandleOutroAnimationFinished();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PlayIntro();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void OnDisplayInfoUpdated(struct FDateTime& LFGTime, bool bIsInvited, bool bIsPlaying);
	void OnSuggestionAccepted();
	void OnDismissSuggestion();
	void OnNewSuggestionAdded();
	void PlayOutro();
	void OnInitialized();
	void OnSuggestionChanged();
	void ExecuteUbergraph_PartySuggestionButton(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FDateTime& CallFunc_DateTimeMinValue_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Less_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_FloatSpringInterp_ReturnValue, class UMaterialInstanceDynamic* K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, bool CallFunc_IsPartyInProgressEnabled_ReturnValue, const struct FDateTime& K2Node_Event_LFGTime, bool K2Node_Event_bIsInvited, bool K2Node_Event_bIsPlaying, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_NotEqual_DateTimeDateTime_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5, bool CallFunc_IsAnimationPlaying_ReturnValue_2, bool Temp_bool_Variable_3, class UMaterialInstanceDynamic* K2Node_Select_Default_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
