#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuestStockingScreen.WinterQuestStockingScreen_C
// (None)

class UClass* UWinterQuestStockingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuestStockingScreen_C");

	return Clss;
}


// WinterQuestStockingScreen_C WinterQuestStockingScreen.Default__WinterQuestStockingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuestStockingScreen_C* UWinterQuestStockingScreen_C::GetDefaultObj()
{
	static class UWinterQuestStockingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuestStockingScreen_C*>(UWinterQuestStockingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WinterQuestStockingScreen.WinterQuestStockingScreen_C.OnFailure_ADF528A54FC41993276B459A2433A2A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWinterQuestStockingScreen_C::OnFailure_ADF528A54FC41993276B459A2433A2A3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestStockingScreen_C", "OnFailure_ADF528A54FC41993276B459A2433A2A3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestStockingScreen.WinterQuestStockingScreen_C.OnIgnored_ADF528A54FC41993276B459A2433A2A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWinterQuestStockingScreen_C::OnIgnored_ADF528A54FC41993276B459A2433A2A3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestStockingScreen_C", "OnIgnored_ADF528A54FC41993276B459A2433A2A3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestStockingScreen.WinterQuestStockingScreen_C.OnSuccess_ADF528A54FC41993276B459A2433A2A3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWinterQuestStockingScreen_C::OnSuccess_ADF528A54FC41993276B459A2433A2A3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestStockingScreen_C", "OnSuccess_ADF528A54FC41993276B459A2433A2A3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestStockingScreen.WinterQuestStockingScreen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestStockingScreen_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestStockingScreen_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestStockingScreen.WinterQuestStockingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWinterQuestStockingScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestStockingScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestStockingScreen.WinterQuestStockingScreen_C.Play Opening Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWinterQuestStockingScreen_C::Play_Opening_Audio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestStockingScreen_C", "Play Opening Audio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestStockingScreen.WinterQuestStockingScreen_C.Stop Opening Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWinterQuestStockingScreen_C::Stop_Opening_Audio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestStockingScreen_C", "Stop Opening Audio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestStockingScreen.WinterQuestStockingScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestStockingScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestStockingScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestStockingScreen.WinterQuestStockingScreen_C.OnGrantReward
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestStockingScreen_C::OnGrantReward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestStockingScreen_C", "OnGrantReward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestStockingScreen.WinterQuestStockingScreen_C.OnStartInteraction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestStockingScreen_C::OnStartInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestStockingScreen_C", "OnStartInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestStockingScreen.WinterQuestStockingScreen_C.OnStopInteraction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestStockingScreen_C::OnStopInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestStockingScreen_C", "OnStopInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestStockingScreen.WinterQuestStockingScreen_C.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        NewMethod                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuestStockingScreen_C::OnInputMethodChanged(enum class ECommonInputType NewMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestStockingScreen_C", "OnInputMethodChanged");

	Params::UWinterQuestStockingScreen_C_OnInputMethodChanged_Params Parms{};

	Parms.NewMethod = NewMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestStockingScreen.WinterQuestStockingScreen_C.ExecuteUbergraph_WinterQuestStockingScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHasStockingQuestActive_bHasStockingQuestActive       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetAllFortPlayerControllers_ReturnValue                 (ZeroConstructor, ReferenceParm)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// class UFortAsyncAction_SendQuestStatEvent*CallFunc_SendClientStatEvent_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWinterQuest_OpenPrompt_C*   K2Node_DynamicCast_AsWinter_Quest_Open_Prompt                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UWinterQuest_OpenPrompt_C*   K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Cozy_Stockings_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class UWinterQuest_OpenPrompt_C*   K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Cozy_Stockings_C*        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_Event_NewMethod                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHasStockingQuestActive_bHasStockingQuestActive_1     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)

void UWinterQuestStockingScreen_C::ExecuteUbergraph_WinterQuestStockingScreen(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Variable, bool CallFunc_GetHasStockingQuestActive_bHasStockingQuestActive, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ECommonInputType Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, class UWinterQuest_OpenPrompt_C* K2Node_DynamicCast_AsWinter_Quest_Open_Prompt, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UWinterQuest_OpenPrompt_C* K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_1, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, TArray<class ABP_Cozy_Stockings_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UWinterQuest_OpenPrompt_C* K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_2, bool K2Node_DynamicCast_bSuccess_2, class ABP_Cozy_Stockings_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, enum class ECommonInputType K2Node_Event_NewMethod, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_Less_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GetHasStockingQuestActive_bHasStockingQuestActive_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestStockingScreen_C", "ExecuteUbergraph_WinterQuestStockingScreen");

	Params::UWinterQuestStockingScreen_C_ExecuteUbergraph_WinterQuestStockingScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetHasStockingQuestActive_bHasStockingQuestActive = CallFunc_GetHasStockingQuestActive_bHasStockingQuestActive;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetAllFortPlayerControllers_ReturnValue = CallFunc_GetAllFortPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_SendClientStatEvent_ReturnValue = CallFunc_SendClientStatEvent_ReturnValue;
	Parms.K2Node_DynamicCast_AsWinter_Quest_Open_Prompt = K2Node_DynamicCast_AsWinter_Quest_Open_Prompt;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_1 = K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_2 = K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_Event_NewMethod = K2Node_Event_NewMethod;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetHasStockingQuestActive_bHasStockingQuestActive_1 = CallFunc_GetHasStockingQuestActive_bHasStockingQuestActive_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


