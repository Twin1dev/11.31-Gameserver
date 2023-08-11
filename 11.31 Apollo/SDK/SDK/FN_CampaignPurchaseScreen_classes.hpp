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

// 0x44 (0x39C - 0x358)
// WidgetBlueprintGeneratedClass CampaignPurchaseScreen.CampaignPurchaseScreen_C
class UCampaignPurchaseScreen_C : public UFortCampaignPurchaseScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SwitchTextures;                                    // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                         WasLastPlayForward;                                // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_468E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UProgressModalWidget_C*                LeavingMatchmakingDialog;                          // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Keyart;                                        // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CycleTimer;                                        // 0x380(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture*>                      TextureCycle;                                      // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        TextureCycleIndex;                                 // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CampaignPurchaseScreen_C");
		return Clss;
	}

	void IsMinorShutdownWarningEnabled(bool* Enabled, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void InitializeRedeemButton();
	bool IsBusyMatchmaking(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMatchmakingLocal_ReturnValue);
	void Update();
	void AdvanceTextureCycle(int32 NextTextureIndex, int32 CurrentTextureIndex, int32 CallFunc_Array_Length_ReturnValue, class UTexture* CallFunc_Array_Get_Item, class UTexture* CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void InitializeTextureCycle(class UTexture* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, class UTexture* CallFunc_Array_Get_Item_1);
	void ToggleTimer(bool Enabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Construct();
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnActivated();
	void OnImageCycleTimeElapsed();
	void ExecuteUbergraph_CampaignPurchaseScreen(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UFortMtxStoreRootBase* CallFunc_Create_ReturnValue, class UStoreMain_Root_C* K2Node_DynamicCast_AsStore_Main_Root, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
