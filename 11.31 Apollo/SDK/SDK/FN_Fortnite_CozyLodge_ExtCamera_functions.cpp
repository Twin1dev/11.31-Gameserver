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


// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortnite_CozyLodge_ExtCamera_C::OnActivated()
{
	static auto Func = Class->GetFunction("Fortnite_CozyLodge_ExtCamera_C", "OnActivated");

	Params::AFortnite_CozyLodge_ExtCamera_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortnite_CozyLodge_ExtCamera_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("Fortnite_CozyLodge_ExtCamera_C", "OnDeactivated");

	Params::AFortnite_CozyLodge_ExtCamera_C_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.Reset Location
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFortnite_CozyLodge_ExtCamera_C::Reset_Location()
{
	static auto Func = Class->GetFunction("Fortnite_CozyLodge_ExtCamera_C", "Reset Location");

	Params::AFortnite_CozyLodge_ExtCamera_C_Reset_Location_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.ManualActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFortnite_CozyLodge_ExtCamera_C::ManualActivate()
{
	static auto Func = Class->GetFunction("Fortnite_CozyLodge_ExtCamera_C", "ManualActivate");

	Params::AFortnite_CozyLodge_ExtCamera_C_ManualActivate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFortnite_CozyLodge_ExtCamera_C::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static auto Func = Class->GetFunction("Fortnite_CozyLodge_ExtCamera_C", "K2_OnBecomeViewTarget");

	Params::AFortnite_CozyLodge_ExtCamera_C_K2_OnBecomeViewTarget_Params Parms;

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.K2_OnEndViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFortnite_CozyLodge_ExtCamera_C::K2_OnEndViewTarget(class APlayerController* PC)
{
	static auto Func = Class->GetFunction("Fortnite_CozyLodge_ExtCamera_C", "K2_OnEndViewTarget");

	Params::AFortnite_CozyLodge_ExtCamera_C_K2_OnEndViewTarget_Params Parms;

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_CozyLodge_ExtCamera.Fortnite_CozyLodge_ExtCamera_C.ExecuteUbergraph_Fortnite_CozyLodge_ExtCamera
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_PC_1                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFortnite_CozyLodge_ExtCamera_C::ExecuteUbergraph_Fortnite_CozyLodge_ExtCamera(int32 EntryPoint, class APlayerController* K2Node_Event_PC, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, bool CallFunc_Greater_IntInt_ReturnValue, class ABP_Fortnite_CozyLodge_Exterior_LightSwitcher_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class APlayerController* K2Node_Event_PC_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static auto Func = Class->GetFunction("Fortnite_CozyLodge_ExtCamera_C", "ExecuteUbergraph_Fortnite_CozyLodge_ExtCamera");

	Params::AFortnite_CozyLodge_ExtCamera_C_ExecuteUbergraph_Fortnite_CozyLodge_ExtCamera_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_Event_PC_1 = K2Node_Event_PC_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
