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

// 0x3C (0x354 - 0x318)
// WidgetBlueprintGeneratedClass SubgameSelectScreen.SubgameSelectScreen_C
class USubgameSelectScreen_C : public UFortSubgameSelectScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SelectModeIdle;                                    // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                              ModeSelect;                                        // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressModalWidget_C*                LeavingMatchmakingDialog;                          // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Keyart;                                        // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture*>                      TextureCycle;                                      // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        TextureCycleIndex;                                 // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubgameSelectScreen_C");
		return Clss;
	}

	void StartSubgameSelectMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void IsMinorShutdownWarningEnabled(bool* Enabled, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool IsBusyMatchmaking(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMatchmakingLocal_ReturnValue);
	void AdvanceTextureCycle(int32 NextTextureIndex, int32 CurrentTextureIndex, int32 CallFunc_Array_Length_ReturnValue, class UTexture* CallFunc_Array_Get_Item, class UTexture* CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void InitializeTextureCycle(class UTexture* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, class UTexture* CallFunc_Array_Get_Item_1);
	void DialogResult_FE9F49084346A08B6F02BA99FB50F5CD(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnActivated();
	void BndEvt__SubgameTile_Campaign_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SubgameTile_BattleRoyale_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SubgameTile_Creative_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Clear_Party_and_Matchmaking_Delegates();
	void CustomEvent_0(enum class EMatchmakingCompleteResult Result);
	void CustomEvent_1();
	void OnShowPurchaseScreenFailed();
	void BndEvt__Screen_CampaignPurchase_K2Node_ComponentBoundEvent_1_OnWidgetActivationChanged__DelegateSignature();
	void ExecuteUbergraph_SubgameSelectScreen(int32 EntryPoint, enum class EFortDialogResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, bool CallFunc_IsBusyMatchmaking_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_3, class FText Temp_text_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText Temp_text_Variable_1, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, enum class EMatchmakingCompleteResult K2Node_CustomEvent_Result, bool CallFunc_IsBusyMatchmaking_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
