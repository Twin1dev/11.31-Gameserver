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

// 0x80 (0xC90 - 0xC10)
// WidgetBlueprintGeneratedClass ChallengeTile_Mission.ChallengeTile_Mission_C
class UChallengeTile_Mission_C : public UAthenaChallengeSetTile_Mission
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC10(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AmbientPartyAssistAttention;                       // 0xC18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Outro;                                             // 0xC20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHover;                                           // 0xC28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              CountdownSB;                                       // 0xC30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_BattlePass;                                   // 0xC38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_LimitedTime;                                  // 0xC40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_Prestige;                                     // 0xC48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                        LazyImage_Background;                              // 0xC50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayPartyAssist;                                // 0xC58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PrestigeBorder;                                    // 0xC60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBoxTextScale;                                 // 0xC68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Reward;                                    // 0xC70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_ChallengeContext_1;                           // 0xC78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UnavailableBox;                                    // 0xC80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              UnavailableOvr;                                    // 0xC88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChallengeTile_Mission_C");
		return Clss;
	}

	void SetDynamicColors(class UImage* EventDynamicMaterialTarget, struct FFortChallengeSetStyle& FortChallengeSetStyle, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void OnChallengeSetEstablished(struct FFortChallengeSetStyle& DisplayStyle, bool bIsComplete, bool bIsLocked);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void OnContainsPartyAssistedChallengeChanged(bool bHasPartyAssistedChallenge);
	void ResetToLocked();
	void ExecuteUbergraph_ChallengeTile_Mission(int32 EntryPoint, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FFortChallengeSetStyle& K2Node_Event_DisplayStyle, bool K2Node_Event_bIsComplete, bool K2Node_Event_bIsLocked, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_bHasPartyAssistedChallenge, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSoftTextureForChaseReward_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UFortLazyImage* K2Node_DynamicCast_AsFort_Lazy_Image, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, class UMissionProgressDisplay_C* K2Node_DynamicCast_AsMission_Progress_Display, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
