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


// Function ItemPresentationScreen.ItemPresentationScreen_C.Handle PaidItem Intro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationScreen_C::Handle_PaidItem_Intro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "Handle PaidItem Intro");

	Params::UItemPresentationScreen_C_Handle_PaidItem_Intro_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.Handle Fade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationScreen_C::Handle_Fade(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "Handle Fade");

	Params::UItemPresentationScreen_C_Handle_Fade_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.Handle Intro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationScreen_C::Handle_Intro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "Handle Intro");

	Params::UItemPresentationScreen_C_Handle_Intro_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.Handle Animation InitialState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationScreen_C::Handle_Animation_InitialState(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "Handle Animation InitialState");

	Params::UItemPresentationScreen_C_Handle_Animation_InitialState_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationScreen_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "BP_OnActivated");

	Params::UItemPresentationScreen_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateHeaderInformation
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortItemHeaderInformation  HeaderInformation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemPresentationScreen_C::OnUpdateHeaderInformation(struct FFortItemHeaderInformation& HeaderInformation)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "OnUpdateHeaderInformation");

	Params::UItemPresentationScreen_C_OnUpdateHeaderInformation_Params Parms;

	Parms.HeaderInformation = HeaderInformation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateItemInformation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   FortItem                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationScreen_C::OnUpdateItemInformation(class UFortItem* FortItem)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "OnUpdateItemInformation");

	Params::UItemPresentationScreen_C_OnUpdateItemInformation_Params Parms;

	Parms.FortItem = FortItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateOwnedItemText
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::OnUpdateOwnedItemText(bool bShowText)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "OnUpdateOwnedItemText");

	Params::UItemPresentationScreen_C_OnUpdateOwnedItemText_Params Parms;

	Parms.bShowText = bShowText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateItemEquipped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationScreen_C::OnUpdateItemEquipped()
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "OnUpdateItemEquipped");

	Params::UItemPresentationScreen_C_OnUpdateItemEquipped_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnInitialIconAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingListView                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::OnInitialIconAnimation(bool bUsingListView)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "OnInitialIconAnimation");

	Params::UItemPresentationScreen_C_OnInitialIconAnimation_Params Parms;

	Parms.bUsingListView = bUsingListView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnDisplayEquipButton
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCanEquip                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::OnDisplayEquipButton(bool bCanEquip)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "OnDisplayEquipButton");

	Params::UItemPresentationScreen_C_OnDisplayEquipButton_Params Parms;

	Parms.bCanEquip = bCanEquip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnCloseScreen
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationScreen_C::OnCloseScreen()
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "OnCloseScreen");

	Params::UItemPresentationScreen_C_OnCloseScreen_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateNextButtonText
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowNext                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::OnUpdateNextButtonText(bool bShowNext)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "OnUpdateNextButtonText");

	Params::UItemPresentationScreen_C_OnUpdateNextButtonText_Params Parms;

	Parms.bShowNext = bShowNext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnFinishDisplayingHotItems
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowOtherRewards                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::OnFinishDisplayingHotItems(bool bShowOtherRewards)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "OnFinishDisplayingHotItems");

	Params::UItemPresentationScreen_C_OnFinishDisplayingHotItems_Params Parms;

	Parms.bShowOtherRewards = bShowOtherRewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnDisplayItemsCollectedText
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCloseScreen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::OnDisplayItemsCollectedText(bool bCloseScreen)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "OnDisplayItemsCollectedText");

	Params::UItemPresentationScreen_C_OnDisplayItemsCollectedText_Params Parms;

	Parms.bCloseScreen = bCloseScreen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.SwitchToPaidItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemPresentationScreen_C::SwitchToPaidItems()
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "SwitchToPaidItems");

	Params::UItemPresentationScreen_C_SwitchToPaidItems_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateVaultWorld
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortItemPreviewVaultWorld*  FortItemPreviewVaultWorld                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSpecialEventRewards                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::OnUpdateVaultWorld(class AFortItemPreviewVaultWorld* FortItemPreviewVaultWorld, bool bIsSpecialEventRewards)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "OnUpdateVaultWorld");

	Params::UItemPresentationScreen_C_OnUpdateVaultWorld_Params Parms;

	Parms.FortItemPreviewVaultWorld = FortItemPreviewVaultWorld;
	Parms.bIsSpecialEventRewards = bIsSpecialEventRewards;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateGradientColor
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bIsWinterfestReward                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                PresentColor                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationScreen_C::OnUpdateGradientColor(bool bIsWinterfestReward, struct FLinearColor& PresentColor)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "OnUpdateGradientColor");

	Params::UItemPresentationScreen_C_OnUpdateGradientColor_Params Parms;

	Parms.bIsWinterfestReward = bIsWinterfestReward;
	Parms.PresentColor = PresentColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationScreen.ItemPresentationScreen_C.ExecuteUbergraph_ItemPresentationScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemInfoPresentationWidget_C*K2Node_DynamicCast_AsItem_Info_Presentation_Widget               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemInfoPresentationWidget_C*K2Node_DynamicCast_AsItem_Info_Presentation_Widget_1             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue                    (ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUserWidget*>         CallFunc_GetAllEntries_ReturnValue                               (ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemPresentationGenericRewardHeader_C*K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemPresentationGenericRewardHeader_C*K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header_1   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemHeaderInformation  K2Node_Event_HeaderInformation                                   (ConstParm)
// class UFortItem*                   K2Node_Event_FortItem                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowText                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bUsingListView                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetDisplayedEntryWidgets_ReturnValue_1                  (ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemPresentationEntry_C*    K2Node_DynamicCast_AsItem_Presentation_Entry                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemPresentationEntry_C*    K2Node_DynamicCast_AsItem_Presentation_Entry_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllEntries_ReturnValue_1                             (ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemPresentationEntry_C*    K2Node_DynamicCast_AsItem_Presentation_Entry_2                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCanEquip                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemPresentationEntry_C*    K2Node_DynamicCast_AsItem_Presentation_Entry_3                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bShowNext                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoloButton_C*               K2Node_DynamicCast_AsSolo_Button                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bShowOtherRewards                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bCloseScreen                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoloButton_C*               K2Node_DynamicCast_AsSolo_Button_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// class UItemInfoPresentationWidget_C*K2Node_DynamicCast_AsItem_Info_Presentation_Widget_2             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassTracker_C*        K2Node_DynamicCast_AsBattle_Pass_Tracker                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassTracker_C*        K2Node_DynamicCast_AsBattle_Pass_Tracker_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassItemTracker_C*    K2Node_DynamicCast_AsBattle_Pass_Item_Tracker                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassItemTracker_C*    K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassItemTracker_C*    K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassTracker_C*        K2Node_DynamicCast_AsBattle_Pass_Tracker_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassTracker_C*        K2Node_DynamicCast_AsBattle_Pass_Tracker_3                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassItemTracker_C*    K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortItemPreviewVaultWorld*  K2Node_Event_FortItemPreviewVaultWorld                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSpecialEventRewards                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFrontendCamera_VaultRotator_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AFrontendCamera_VaultRotator_C*CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AVaultWorld_C*               K2Node_DynamicCast_AsVault_World                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AVaultRotator_C*             CallFunc_GetVaultRotator_VaultRotator                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFrontendCamera_VaultRotator_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ZeroConstructor, ReferenceParm)
// class AFrontendCamera_VaultRotator_C*CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsWinterfestReward                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Event_PresentColor                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoloButton_WinterFest_C*    K2Node_DynamicCast_AsSolo_Button_Winter_Fest                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationScreen_C::ExecuteUbergraph_ItemPresentationScreen(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UItemInfoPresentationWidget_C* K2Node_DynamicCast_AsItem_Info_Presentation_Widget, bool K2Node_DynamicCast_bSuccess, class UItemInfoPresentationWidget_C* K2Node_DynamicCast_AsItem_Info_Presentation_Widget_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllEntries_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UItemPresentationGenericRewardHeader_C* K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header, bool K2Node_DynamicCast_bSuccess_2, class UItemPresentationGenericRewardHeader_C* K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header_1, bool K2Node_DynamicCast_bSuccess_3, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FFortItemHeaderInformation& K2Node_Event_HeaderInformation, class UFortItem* K2Node_Event_FortItem, bool K2Node_Event_bShowText, bool K2Node_Event_bUsingListView, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class UUserWidget*>& CallFunc_GetDisplayedEntryWidgets_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item, class UUserWidget* CallFunc_Array_Get_Item_1, class UItemPresentationEntry_C* K2Node_DynamicCast_AsItem_Presentation_Entry, bool K2Node_DynamicCast_bSuccess_4, class UItemPresentationEntry_C* K2Node_DynamicCast_AsItem_Presentation_Entry_1, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_Multiply_IntFloat_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetAllEntries_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item_2, class UItemPresentationEntry_C* K2Node_DynamicCast_AsItem_Presentation_Entry_2, bool K2Node_DynamicCast_bSuccess_6, int32 Temp_int_Array_Index_Variable_2, bool K2Node_Event_bCanEquip, int32 Temp_int_Array_Index_Variable_3, class UObject* CallFunc_Array_Get_Item_3, float CallFunc_Multiply_IntFloat_ReturnValue_1, class UItemPresentationEntry_C* K2Node_DynamicCast_AsItem_Presentation_Entry_3, bool K2Node_DynamicCast_bSuccess_7, bool K2Node_Event_bShowNext, class USoloButton_C* K2Node_DynamicCast_AsSolo_Button, bool K2Node_DynamicCast_bSuccess_8, bool K2Node_Event_bShowOtherRewards, bool K2Node_Event_bCloseScreen, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class USoloButton_C* K2Node_DynamicCast_AsSolo_Button_1, bool K2Node_DynamicCast_bSuccess_9, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UItemInfoPresentationWidget_C* K2Node_DynamicCast_AsItem_Info_Presentation_Widget_2, bool K2Node_DynamicCast_bSuccess_10, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker, bool K2Node_DynamicCast_bSuccess_11, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker_1, bool K2Node_DynamicCast_bSuccess_12, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker, bool K2Node_DynamicCast_bSuccess_13, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1, bool K2Node_DynamicCast_bSuccess_14, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2, bool K2Node_DynamicCast_bSuccess_15, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker_2, bool K2Node_DynamicCast_bSuccess_16, class UBattlePassTracker_C* K2Node_DynamicCast_AsBattle_Pass_Tracker_3, bool K2Node_DynamicCast_bSuccess_17, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3, bool K2Node_DynamicCast_bSuccess_18, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class AFortItemPreviewVaultWorld* K2Node_Event_FortItemPreviewVaultWorld, bool K2Node_Event_bIsSpecialEventRewards, TArray<class AFrontendCamera_VaultRotator_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFrontendCamera_VaultRotator_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue, class AVaultWorld_C* K2Node_DynamicCast_AsVault_World, bool K2Node_DynamicCast_bSuccess_19, class AVaultRotator_C* CallFunc_GetVaultRotator_VaultRotator, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TArray<class AFrontendCamera_VaultRotator_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AFrontendCamera_VaultRotator_C* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_Event_bIsWinterfestReward, const struct FLinearColor& K2Node_Event_PresentColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class USoloButton_WinterFest_C* K2Node_DynamicCast_AsSolo_Button_Winter_Fest, bool K2Node_DynamicCast_bSuccess_20)
{
	static auto Func = Class->GetFunction("ItemPresentationScreen_C", "ExecuteUbergraph_ItemPresentationScreen");

	Params::UItemPresentationScreen_C_ExecuteUbergraph_ItemPresentationScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Info_Presentation_Widget = K2Node_DynamicCast_AsItem_Info_Presentation_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsItem_Info_Presentation_Widget_1 = K2Node_DynamicCast_AsItem_Info_Presentation_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue = CallFunc_GetDisplayedEntryWidgets_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllEntries_ReturnValue = CallFunc_GetAllEntries_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header = K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header_1 = K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_Event_HeaderInformation = K2Node_Event_HeaderInformation;
	Parms.K2Node_Event_FortItem = K2Node_Event_FortItem;
	Parms.K2Node_Event_bShowText = K2Node_Event_bShowText;
	Parms.K2Node_Event_bUsingListView = K2Node_Event_bUsingListView;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetDisplayedEntryWidgets_ReturnValue_1 = CallFunc_GetDisplayedEntryWidgets_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsItem_Presentation_Entry = K2Node_DynamicCast_AsItem_Presentation_Entry;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsItem_Presentation_Entry_1 = K2Node_DynamicCast_AsItem_Presentation_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_GetAllEntries_ReturnValue_1 = CallFunc_GetAllEntries_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_DynamicCast_AsItem_Presentation_Entry_2 = K2Node_DynamicCast_AsItem_Presentation_Entry_2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_Event_bCanEquip = K2Node_Event_bCanEquip;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsItem_Presentation_Entry_3 = K2Node_DynamicCast_AsItem_Presentation_Entry_3;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_Event_bShowNext = K2Node_Event_bShowNext;
	Parms.K2Node_DynamicCast_AsSolo_Button = K2Node_DynamicCast_AsSolo_Button;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_Event_bShowOtherRewards = K2Node_Event_bShowOtherRewards;
	Parms.K2Node_Event_bCloseScreen = K2Node_Event_bCloseScreen;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSolo_Button_1 = K2Node_DynamicCast_AsSolo_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_DynamicCast_AsItem_Info_Presentation_Widget_2 = K2Node_DynamicCast_AsItem_Info_Presentation_Widget_2;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Tracker = K2Node_DynamicCast_AsBattle_Pass_Tracker;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Tracker_1 = K2Node_DynamicCast_AsBattle_Pass_Tracker_1;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Item_Tracker = K2Node_DynamicCast_AsBattle_Pass_Item_Tracker;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1 = K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2 = K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Tracker_2 = K2Node_DynamicCast_AsBattle_Pass_Tracker_2;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Tracker_3 = K2Node_DynamicCast_AsBattle_Pass_Tracker_3;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3 = K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_Event_FortItemPreviewVaultWorld = K2Node_Event_FortItemPreviewVaultWorld;
	Parms.K2Node_Event_bIsSpecialEventRewards = K2Node_Event_bIsSpecialEventRewards;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsVault_World = K2Node_DynamicCast_AsVault_World;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_GetVaultRotator_VaultRotator = CallFunc_GetVaultRotator_VaultRotator;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Event_bIsWinterfestReward = K2Node_Event_bIsWinterfestReward;
	Parms.K2Node_Event_PresentColor = K2Node_Event_PresentColor;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSolo_Button_Winter_Fest = K2Node_DynamicCast_AsSolo_Button_Winter_Fest;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
