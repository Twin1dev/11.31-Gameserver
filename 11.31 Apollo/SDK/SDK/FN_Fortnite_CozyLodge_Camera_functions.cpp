#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C
// (Actor)

class UClass* AFortnite_CozyLodge_Camera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fortnite_CozyLodge_Camera_C");

	return Clss;
}


// Fortnite_CozyLodge_Camera_C Fortnite_CozyLodge_Camera.Default__Fortnite_CozyLodge_Camera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFortnite_CozyLodge_Camera_C* AFortnite_CozyLodge_Camera_C::GetDefaultObj()
{
	static class AFortnite_CozyLodge_Camera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFortnite_CozyLodge_Camera_C*>(AFortnite_CozyLodge_Camera_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortnite_CozyLodge_Camera_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_CozyLodge_Camera_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortnite_CozyLodge_Camera_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_CozyLodge_Camera_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.Reset Location
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFortnite_CozyLodge_Camera_C::Reset_Location()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_CozyLodge_Camera_C", "Reset Location");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.ManualActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFortnite_CozyLodge_Camera_C::ManualActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_CozyLodge_Camera_C", "ManualActivate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFortnite_CozyLodge_Camera_C::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_CozyLodge_Camera_C", "K2_OnBecomeViewTarget");

	Params::AFortnite_CozyLodge_Camera_C_K2_OnBecomeViewTarget_Params Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.K2_OnEndViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFortnite_CozyLodge_Camera_C::K2_OnEndViewTarget(class APlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_CozyLodge_Camera_C", "K2_OnEndViewTarget");

	Params::AFortnite_CozyLodge_Camera_C_K2_OnEndViewTarget_Params Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fortnite_CozyLodge_Camera.Fortnite_CozyLodge_Camera_C.ExecuteUbergraph_Fortnite_CozyLodge_Camera
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_PC                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Fortnite_CozyLodge_LightSwitcher_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ABP_Fortnite_CozyLodge_LightSwitcher_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_Fortnite_CozyLodge_LightSwitcher_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ZeroConstructor, ReferenceParm)
// class ABP_Fortnite_CozyLodge_LightSwitcher_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_PC_1                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFortnite_CozyLodge_Camera_C::ExecuteUbergraph_Fortnite_CozyLodge_Camera(int32 EntryPoint, class APlayerController* K2Node_Event_PC, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TArray<class ABP_Fortnite_CozyLodge_LightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Fortnite_CozyLodge_LightSwitcher_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class ABP_Fortnite_CozyLodge_LightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_Fortnite_CozyLodge_LightSwitcher_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class APlayerController* K2Node_Event_PC_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fortnite_CozyLodge_Camera_C", "ExecuteUbergraph_Fortnite_CozyLodge_Camera");

	Params::AFortnite_CozyLodge_Camera_C_ExecuteUbergraph_Fortnite_CozyLodge_Camera_Params Parms{};

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
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
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


