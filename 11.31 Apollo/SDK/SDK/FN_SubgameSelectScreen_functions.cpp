#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function SubgameSelectScreen.SubgameSelectScreen_C.StartSubgameSelectMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelectScreen_C::StartSubgameSelectMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "StartSubgameSelectMusic");

	Params::USubgameSelectScreen_C_StartSubgameSelectMusic_Params Parms;

	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.IsMinorShutdownWarningEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubgameSelectScreen_C::IsMinorShutdownWarningEnabled(bool* Enabled, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "IsMinorShutdownWarningEnabled");

	Params::USubgameSelectScreen_C_IsMinorShutdownWarningEnabled_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmaking
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMatchmakingLocal_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool USubgameSelectScreen_C::IsBusyMatchmaking(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMatchmakingLocal_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "IsBusyMatchmaking");

	Params::USubgameSelectScreen_C_IsBusyMatchmaking_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsMatchmakingLocal_ReturnValue = CallFunc_IsMatchmakingLocal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceTextureCycle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NextTextureIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentTextureIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::AdvanceTextureCycle(int32 NextTextureIndex, int32 CurrentTextureIndex, int32 CallFunc_Array_Length_ReturnValue, class UTexture* CallFunc_Array_Get_Item, class UTexture* CallFunc_Array_Get_Item_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "AdvanceTextureCycle");

	Params::USubgameSelectScreen_C_AdvanceTextureCycle_Params Parms;

	Parms.NextTextureIndex = NextTextureIndex;
	Parms.CurrentTextureIndex = CurrentTextureIndex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeTextureCycle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::InitializeTextureCycle(class UTexture* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, class UTexture* CallFunc_Array_Get_Item_1)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "InitializeTextureCycle");

	Params::USubgameSelectScreen_C_InitializeTextureCycle_Params Parms;

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.DialogResult_FE9F49084346A08B6F02BA99FB50F5CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::DialogResult_FE9F49084346A08B6F02BA99FB50F5CD(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "DialogResult_FE9F49084346A08B6F02BA99FB50F5CD");

	Params::USubgameSelectScreen_C_DialogResult_FE9F49084346A08B6F02BA99FB50F5CD_Params Parms;

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BP_OnActivated");

	Params::USubgameSelectScreen_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__SubgameTile_Campaign_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__SubgameTile_Campaign_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__SubgameTile_Campaign_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__SubgameTile_Campaign_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__SubgameTile_BattleRoyale_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__SubgameTile_BattleRoyale_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__SubgameTile_BattleRoyale_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__SubgameTile_BattleRoyale_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__SubgameTile_Creative_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::BndEvt__SubgameTile_Creative_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__SubgameTile_Creative_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__SubgameTile_Creative_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Clear Party and Matchmaking Delegates
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::Clear_Party_and_Matchmaking_Delegates()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "Clear Party and Matchmaking Delegates");

	Params::USubgameSelectScreen_C_Clear_Party_and_Matchmaking_Delegates_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMatchmakingCompleteResultResult                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::CustomEvent_0(enum class EMatchmakingCompleteResult Result)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "CustomEvent_0");

	Params::USubgameSelectScreen_C_CustomEvent_0_Params Parms;

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::CustomEvent_1()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "CustomEvent_1");

	Params::USubgameSelectScreen_C_CustomEvent_1_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnShowPurchaseScreenFailed
// (Event, Protected, BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::OnShowPurchaseScreenFailed()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "OnShowPurchaseScreenFailed");

	Params::USubgameSelectScreen_C_OnShowPurchaseScreenFailed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__Screen_CampaignPurchase_K2Node_ComponentBoundEvent_1_OnWidgetActivationChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USubgameSelectScreen_C::BndEvt__Screen_CampaignPurchase_K2Node_ComponentBoundEvent_1_OnWidgetActivationChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "BndEvt__Screen_CampaignPurchase_K2Node_ComponentBoundEvent_1_OnWidgetActivationChanged__DelegateSignature");

	Params::USubgameSelectScreen_C_BndEvt__Screen_CampaignPurchase_K2Node_ComponentBoundEvent_1_OnWidgetActivationChanged__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       K2Node_CustomEvent_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBusyMatchmaking_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class UProgressModalWidget_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMatchmakingCompleteResultK2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBusyMatchmaking_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubgameSelectScreen_C::ExecuteUbergraph_SubgameSelectScreen(int32 EntryPoint, enum class EFortDialogResult K2Node_CustomEvent_Result_1, class FName K2Node_CustomEvent_ResultName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, bool CallFunc_IsBusyMatchmaking_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_3, class FText Temp_text_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText Temp_text_Variable_1, class UProgressModalWidget_C* CallFunc_Create_ReturnValue, enum class EMatchmakingCompleteResult K2Node_CustomEvent_Result, bool CallFunc_IsBusyMatchmaking_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static auto Func = Class->GetFunction("SubgameSelectScreen_C", "ExecuteUbergraph_SubgameSelectScreen");

	Params::USubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Result_1 = K2Node_CustomEvent_Result_1;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_IsBusyMatchmaking_ReturnValue = CallFunc_IsBusyMatchmaking_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.CallFunc_IsBusyMatchmaking_ReturnValue_1 = CallFunc_IsBusyMatchmaking_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
