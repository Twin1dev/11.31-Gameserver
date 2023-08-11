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


// Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.SetVaultRotatorLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemRotatorTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AVaultWorld_C*>       CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AVaultWorld_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVaultRotator_C*             CallFunc_GetVaultRotator_VaultRotator                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFrontendCamera_VaultRotator_C::SetVaultRotatorLighting(class FName ItemRotatorTag, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AVaultWorld_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AVaultWorld_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AVaultRotator_C* CallFunc_GetVaultRotator_VaultRotator, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontendCamera_VaultRotator_C", "SetVaultRotatorLighting");

	Params::AFrontendCamera_VaultRotator_C_SetVaultRotatorLighting_Params Parms;

	Parms.ItemRotatorTag = ItemRotatorTag;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetVaultRotator_VaultRotator = CallFunc_GetVaultRotator_VaultRotator;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontendCamera_VaultRotator_C::OnActivated()
{
	static auto Func = Class->GetFunction("FrontendCamera_VaultRotator_C", "OnActivated");

	Params::AFrontendCamera_VaultRotator_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFrontendCamera_VaultRotator_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("FrontendCamera_VaultRotator_C", "OnDeactivated");

	Params::AFrontendCamera_VaultRotator_C_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.ExecuteUbergraph_FrontendCamera_VaultRotator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontendCamera_VaultRotator_C::ExecuteUbergraph_FrontendCamera_VaultRotator(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontendCamera_VaultRotator_C", "ExecuteUbergraph_FrontendCamera_VaultRotator");

	Params::AFrontendCamera_VaultRotator_C_ExecuteUbergraph_FrontendCamera_VaultRotator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
