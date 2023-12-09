#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuestDetailsScreen.WinterQuestDetailsScreen_C
// (None)

class UClass* UWinterQuestDetailsScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuestDetailsScreen_C");

	return Clss;
}


// WinterQuestDetailsScreen_C WinterQuestDetailsScreen.Default__WinterQuestDetailsScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuestDetailsScreen_C* UWinterQuestDetailsScreen_C::GetDefaultObj()
{
	static class UWinterQuestDetailsScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuestDetailsScreen_C*>(UWinterQuestDetailsScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WinterQuestDetailsScreen.WinterQuestDetailsScreen_C.OnSetRewardsVaultRotator
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AItemPreviewVaultRotator*    ItemPreviewVaultRotator                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuestDetailsScreen_C::OnSetRewardsVaultRotator(class AItemPreviewVaultRotator* ItemPreviewVaultRotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestDetailsScreen_C", "OnSetRewardsVaultRotator");

	Params::UWinterQuestDetailsScreen_C_OnSetRewardsVaultRotator_Params Parms{};

	Parms.ItemPreviewVaultRotator = ItemPreviewVaultRotator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestDetailsScreen.WinterQuestDetailsScreen_C.OnResetVaultRotator
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AItemPreviewVaultRotator*    ItemPreviewVaultRotator                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuestDetailsScreen_C::OnResetVaultRotator(class AItemPreviewVaultRotator* ItemPreviewVaultRotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestDetailsScreen_C", "OnResetVaultRotator");

	Params::UWinterQuestDetailsScreen_C_OnResetVaultRotator_Params Parms{};

	Parms.ItemPreviewVaultRotator = ItemPreviewVaultRotator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestDetailsScreen.WinterQuestDetailsScreen_C.ExecuteUbergraph_WinterQuestDetailsScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UGSC_DynamicLevelStreaming_C*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGSC_DynamicLevelStreaming_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFrontendCamera_VaultRotator_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AItemPreviewVaultRotator*    K2Node_Event_ItemPreviewVaultRotator_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVaultRotator_C*             K2Node_DynamicCast_AsVault_Rotator                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AItemPreviewVaultRotator*    K2Node_Event_ItemPreviewVaultRotator                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVaultRotator_C*             K2Node_DynamicCast_AsVault_Rotator_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFrontendCamera_VaultRotator_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWinterQuestDetailsScreen_C::ExecuteUbergraph_WinterQuestDetailsScreen(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item, TArray<class AFrontendCamera_VaultRotator_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AItemPreviewVaultRotator* K2Node_Event_ItemPreviewVaultRotator_1, int32 CallFunc_Array_Length_ReturnValue_1, class AVaultRotator_C* K2Node_DynamicCast_AsVault_Rotator, bool K2Node_DynamicCast_bSuccess, class AItemPreviewVaultRotator* K2Node_Event_ItemPreviewVaultRotator, class AVaultRotator_C* K2Node_DynamicCast_AsVault_Rotator_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AFrontendCamera_VaultRotator_C* CallFunc_Array_Get_Item_1, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestDetailsScreen_C", "ExecuteUbergraph_WinterQuestDetailsScreen");

	Params::UWinterQuestDetailsScreen_C_ExecuteUbergraph_WinterQuestDetailsScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_Event_ItemPreviewVaultRotator_1 = K2Node_Event_ItemPreviewVaultRotator_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVault_Rotator = K2Node_DynamicCast_AsVault_Rotator;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_ItemPreviewVaultRotator = K2Node_Event_ItemPreviewVaultRotator;
	Parms.K2Node_DynamicCast_AsVault_Rotator_1 = K2Node_DynamicCast_AsVault_Rotator_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


