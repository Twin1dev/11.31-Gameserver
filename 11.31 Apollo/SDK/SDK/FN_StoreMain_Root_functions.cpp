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


// Function StoreMain_Root.StoreMain_Root_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UStoreMain_Root_C::BP_GetDesiredFocusTarget()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "BP_GetDesiredFocusTarget");

	Params::UStoreMain_Root_C_BP_GetDesiredFocusTarget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StoreMain_Root.StoreMain_Root_C.GetVisibilityByChildrenPresence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPanelWidget*                Panel                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_Root_C::GetVisibilityByChildrenPresence(class UPanelWidget* Panel, enum class ESlateVisibility* NewParam, bool Temp_bool_Variable, bool CallFunc_HasAnyChildren_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "GetVisibilityByChildrenPresence");

	Params::UStoreMain_Root_C_GetVisibilityByChildrenPresence_Params Parms;

	Parms.Panel = Panel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function StoreMain_Root.StoreMain_Root_C.HandleAllOffersGenerated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CallFunc_GetVisibilityByChildrenPresence_NewParam                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibilityByChildrenPresence_NewParam_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_Root_C::HandleAllOffersGenerated(enum class ESlateVisibility CallFunc_GetVisibilityByChildrenPresence_NewParam, enum class ESlateVisibility CallFunc_GetVisibilityByChildrenPresence_NewParam_1, bool CallFunc_IsActivated_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "HandleAllOffersGenerated");

	Params::UStoreMain_Root_C_HandleAllOffersGenerated_Params Parms;

	Parms.CallFunc_GetVisibilityByChildrenPresence_NewParam = CallFunc_GetVisibilityByChildrenPresence_NewParam;
	Parms.CallFunc_GetVisibilityByChildrenPresence_NewParam_1 = CallFunc_GetVisibilityByChildrenPresence_NewParam_1;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.HandleGenerateOffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo*    OfferInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRealMoneyOffer*         StoreOfferWidget                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetStorefrontName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   CallFunc_AddChildToGrid_ReturnValue_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStoreMain_MTXOffer_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_Root_C::HandleGenerateOffer(class UFortStoreFrontOfferInfo* OfferInfo, class UFortRealMoneyOffer* StoreOfferWidget, class FName CallFunc_GetStorefrontName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStoreMain_MTXOffer_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "HandleGenerateOffer");

	Params::UStoreMain_Root_C_HandleGenerateOffer_Params Parms;

	Parms.OfferInfo = OfferInfo;
	Parms.StoreOfferWidget = StoreOfferWidget;
	Parms.CallFunc_GetStorefrontName_ReturnValue = CallFunc_GetStorefrontName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChildToGrid_ReturnValue = CallFunc_AddChildToGrid_ReturnValue;
	Parms.CallFunc_AddChildToGrid_ReturnValue_1 = CallFunc_AddChildToGrid_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.PlayEquippedLockerMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_Root_C::PlayEquippedLockerMusic(enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "PlayEquippedLockerMusic");

	Params::UStoreMain_Root_C_PlayEquippedLockerMusic_Params Parms;

	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassThrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_Root_C::HandleBack(bool* PassThrough)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "HandleBack");

	Params::UStoreMain_Root_C_HandleBack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;

}


// Function StoreMain_Root.StoreMain_Root_C.HandleRedeem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URedeemFriendCodeWindow_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_Root_C::HandleRedeem(bool* bPassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URedeemFriendCodeWindow_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "HandleRedeem");

	Params::UStoreMain_Root_C_HandleRedeem_Params Parms;

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function StoreMain_Root.StoreMain_Root_C.SetupForCampaignUpsell
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRuntimeOptions*         NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsDesktopPlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)

void UStoreMain_Root_C::SetupForCampaignUpsell(class UFortRuntimeOptions* NewLocalVar_0, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsDesktopPlatform_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, TArray<class FString>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "SetupForCampaignUpsell");

	Params::UStoreMain_Root_C_SetupForCampaignUpsell_Params Parms;

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsDesktopPlatform_ReturnValue = CallFunc_IsDesktopPlatform_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.SetupFirstFocusableTile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_Root_C::SetupFirstFocusableTile(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "SetupFirstFocusableTile");

	Params::UStoreMain_Root_C_SetupFirstFocusableTile_Params Parms;

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.LayoutVBuckTiles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Child                                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStoreMain_MTXOffer_C*       K2Node_DynamicCast_AsStore_Main_MTXOffer                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGridSlot*                   CallFunc_SlotAsGridSlot_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_Root_C::LayoutVBuckTiles(class UWidget* Child, int32 Index, int32 CallFunc_Divide_IntInt_ReturnValue, class UStoreMain_MTXOffer_C* K2Node_DynamicCast_AsStore_Main_MTXOffer, bool K2Node_DynamicCast_bSuccess, class UGridSlot* CallFunc_SlotAsGridSlot_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "LayoutVBuckTiles");

	Params::UStoreMain_Root_C_LayoutVBuckTiles_Params Parms;

	Parms.Child = Child;
	Parms.Index = Index;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsStore_Main_MTXOffer = K2Node_DynamicCast_AsStore_Main_MTXOffer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SlotAsGridSlot_ReturnValue = CallFunc_SlotAsGridSlot_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.Get Main Tab Reference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMainTabsScreen_C*           K2Node_DynamicCast_AsMain_Tabs_Screen                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetWidgetAtIndex_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UStoreMain_Root_C::Get_Main_Tab_Reference(class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UMainTabsScreen_C* K2Node_DynamicCast_AsMain_Tabs_Screen, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "Get Main Tab Reference");

	Params::UStoreMain_Root_C_Get_Main_Tab_Reference_Params Parms;

	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Tabs_Screen = K2Node_DynamicCast_AsMain_Tabs_Screen;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWidgetAtIndex_ReturnValue = CallFunc_GetWidgetAtIndex_ReturnValue;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StoreMain_Root.StoreMain_Root_C.Start Ambient Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_Root_C::Start_Ambient_Sound(bool Condition, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "Start Ambient Sound");

	Params::UStoreMain_Root_C_Start_Ambient_Sound_Params Parms;

	Parms.Condition = Condition;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.UpdateCurrencyNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMtxBreakdown               CallFunc_GetMtxBreakdown_ReturnValue                             (NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_Root_C::UpdateCurrencyNotification(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, const struct FMtxBreakdown& CallFunc_GetMtxBreakdown_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "UpdateCurrencyNotification");

	Params::UStoreMain_Root_C_UpdateCurrencyNotification_Params Parms;

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetMtxBreakdown_ReturnValue = CallFunc_GetMtxBreakdown_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::Focus()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "Focus");

	Params::UStoreMain_Root_C_Focus_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::NoOffersAvailable()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "NoOffersAvailable");

	Params::UStoreMain_Root_C_NoOffersAvailable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::OnOffersGenerated()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "OnOffersGenerated");

	Params::UStoreMain_Root_C_OnOffersGenerated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "BP_OnActivated");

	Params::UStoreMain_Root_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::BP_OnDeactivated()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "BP_OnDeactivated");

	Params::UStoreMain_Root_C_BP_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.ClearOfferWidgets
// (Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::ClearOfferWidgets()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "ClearOfferWidgets");

	Params::UStoreMain_Root_C_ClearOfferWidgets_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.OnAddedToActivationStack
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::OnAddedToActivationStack()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "OnAddedToActivationStack");

	Params::UStoreMain_Root_C_OnAddedToActivationStack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.OnRemovedFromActivationStack
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::OnRemovedFromActivationStack()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "OnRemovedFromActivationStack");

	Params::UStoreMain_Root_C_OnRemovedFromActivationStack_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.OnUpdateOtherPlatformMTXMessage
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               HasOtherPlatformCurrency                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CurrencyMessageLocText                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStoreMain_Root_C::OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, class FText& CurrencyMessageLocText)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "OnUpdateOtherPlatformMTXMessage");

	Params::UStoreMain_Root_C_OnUpdateOtherPlatformMTXMessage_Params Parms;

	Parms.HasOtherPlatformCurrency = HasOtherPlatformCurrency;
	Parms.CurrencyMessageLocText = CurrencyMessageLocText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.GenerateOfferWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo*    OfferData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStoreMain_Root_C::GenerateOfferWidget(class UFortStoreFrontOfferInfo* OfferData)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "GenerateOfferWidget");

	Params::UStoreMain_Root_C_GenerateOfferWidget_Params Parms;

	Parms.OfferData = OfferData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.OnPurchasingDisabled
// (Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::OnPurchasingDisabled()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "OnPurchasingDisabled");

	Params::UStoreMain_Root_C_OnPurchasingDisabled_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::OnStartReadingOffers()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "OnStartReadingOffers");

	Params::UStoreMain_Root_C_OnStartReadingOffers_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.OnTransitionedBySwitcher
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStoreMain_Root_C::OnTransitionedBySwitcher()
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "OnTransitionedBySwitcher");

	Params::UStoreMain_Root_C_OnTransitionedBySwitcher_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFrontEndCamera         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Main_Tab_Reference_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortStoreContext*           CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_HasOtherPlatformCurrency                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_CurrencyMessageLocText                              (ConstParm)
// class UFortStoreFrontOfferInfo*    K2Node_Event_OfferData                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFrontEndCamera         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStoreMain_Root_C::ExecuteUbergraph_StoreMain_Root(int32 EntryPoint, bool Temp_bool_Variable, enum class EFrontEndCamera Temp_byte_Variable, enum class EFrontEndCamera Temp_byte_Variable_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_Get_Main_Tab_Reference_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue_1, class UFortStoreContext* CallFunc_GetContext_ReturnValue_2, bool K2Node_Event_HasOtherPlatformCurrency, class FText K2Node_Event_CurrencyMessageLocText, class UFortStoreFrontOfferInfo* K2Node_Event_OfferData, enum class EFrontEndCamera K2Node_Select_Default, bool CallFunc_IsActivated_ReturnValue)
{
	static auto Func = Class->GetFunction("StoreMain_Root_C", "ExecuteUbergraph_StoreMain_Root");

	Params::UStoreMain_Root_C_ExecuteUbergraph_StoreMain_Root_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Get_Main_Tab_Reference_ReturnValue = CallFunc_Get_Main_Tab_Reference_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.K2Node_Event_HasOtherPlatformCurrency = K2Node_Event_HasOtherPlatformCurrency;
	Parms.K2Node_Event_CurrencyMessageLocText = K2Node_Event_CurrencyMessageLocText;
	Parms.K2Node_Event_OfferData = K2Node_Event_OfferData;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
