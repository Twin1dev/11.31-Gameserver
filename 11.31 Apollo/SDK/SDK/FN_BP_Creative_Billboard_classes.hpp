#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0xBB0 - 0xB08)
// BlueprintGeneratedClass BP_Creative_Billboard.BP_Creative_Billboard_C
class ABP_Creative_Billboard_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortMinigameLogicComponent*           FortMinigameLogic;                                 // 0xB10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayReceiverMessageComponent* HideTextReceiverComponent;                         // 0xB18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayReceiverMessageComponent* ShowTextReceiverComponent;                         // 0xB20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         ToolPickingBox;                                    // 0xB28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                ToyOptionsComponent;                               // 0xB30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Background;                                        // 0xB38(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FString                                UserDefinedText;                                   // 0xB40(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bShowBorder;                                       // 0xB50(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_5FCB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BackgroundColor;                                   // 0xB54(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	enum class ETextJustify                      HorizontalTextAlignment;                           // 0xB64(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FCC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TextSize;                                          // 0xB68(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        ViewDistance;                                      // 0xB6C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAlwaysFaceCamera;                                 // 0xB70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WasInRangeLastCheck;                               // 0xB71(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5FCD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BackgroundColorOverride;                           // 0xB74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TextColor;                                         // 0xB78(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsTextVisible;                                    // 0xB88(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_5FCE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnabledIndex;                                      // 0xB8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TextFont;                                          // 0xB90(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Debug_Text;                                   // 0xB94(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5FCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              BackgroundRelativeRotationWithBorder;              // 0xB98(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              BackgroundRelativeRotationWithoutBorder;           // 0xBA4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Creative_Billboard_C* GetDefaultObj();

	class UStaticMesh* GetCollisionStaticMesh();
	TArray<class UMeshComponent*> GetMeshComponents(TArray<class UMeshComponent*>& K2Node_MakeArray_Array);
	void SetTextFont(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void OnRep_TextFont();
	void SetVisibilityBasedOnState(enum class EFortMinigameState MinigameState, enum class EFortMinigameState CachedMinigameState, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void OnRep_bIsTextVisible();
	void SetTextVisibility(bool Visible, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void OnRep_TextColor();
	void OnRep_TextSize();
	void OnRep_HorizontalTextAlignment();
	void OnRep_BackgroundColor();
	void OnRep_bShowBorder();
	void SetViewDistance(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void SetTextColor(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void UpdateProperties(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_ColorToText_ReturnValue, const class FString& CallFunc_Conv_ByteToString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_ColorToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Conv_BoolToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void SetTextAlignment(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void ShowBorder(enum class ECollisionEnabled CollisionSetting, bool Temp_bool_Variable, const struct FRotator& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetTextSize(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void SetDisplayText(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess);
	void SetBackgroundColor(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, class UCreative_Background_Widget_C* K2Node_DynamicCast_AsCreative_Background_Widget_1, bool K2Node_DynamicCast_bSuccess_1);
	void ReceiveBeginPlay();
	void PostUpdateProperties();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void PostFinishSpawning();
	void BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature(class AController* TriggerInstigator);
	void BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature(class AController* TriggerInstigator);
	void BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature(class AFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState);
	void ExecuteUbergraph_BP_Creative_Billboard(int32 EntryPoint, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable, enum class ECollisionResponse Temp_byte_Variable, bool Temp_bool_Variable_1, enum class ECollisionResponse Temp_byte_Variable_1, enum class ECollisionResponse Temp_byte_Variable_2, enum class ECollisionResponse K2Node_Select_Default, class AController* K2Node_ComponentBoundEvent_TriggerInstigator_1, class AController* K2Node_ComponentBoundEvent_TriggerInstigator, class AFortMinigame* K2Node_ComponentBoundEvent_Minigame, enum class EFortMinigameState K2Node_ComponentBoundEvent_NewMinigameState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ECollisionResponse K2Node_Select_Default_1);
};

}


