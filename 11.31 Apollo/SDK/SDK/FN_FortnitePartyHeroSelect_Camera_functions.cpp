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


// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMousePress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetHeroPlayerPawnByIndex_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFortnitePartyHeroSelect_Camera_C::HandleMousePress(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class AFortPlayerPawn* CallFunc_GetHeroPlayerPawnByIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "HandleMousePress");

	Params::AFortnitePartyHeroSelect_Camera_C_HandleMousePress_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetHeroPlayerPawnByIndex_ReturnValue = CallFunc_GetHeroPlayerPawnByIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMouseRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFortnitePartyHeroSelect_Camera_C::HandleMouseRelease()
{
	static auto Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "HandleMouseRelease");

	Params::AFortnitePartyHeroSelect_Camera_C_HandleMouseRelease_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFortnitePartyHeroSelect_Camera_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3");

	Params::AFortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_Params Parms;

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFortnitePartyHeroSelect_Camera_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2");

	Params::AFortnitePartyHeroSelect_Camera_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params Parms;

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFortnitePartyHeroSelect_Camera_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1");

	Params::AFortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_Params Parms;

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFortnitePartyHeroSelect_Camera_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static auto Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0");

	Params::AFortnitePartyHeroSelect_Camera_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0_Params Parms;

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortnitePartyHeroSelect_Camera_C::OnActivated()
{
	static auto Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "OnActivated");

	Params::AFortnitePartyHeroSelect_Camera_C_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:

void AFortnitePartyHeroSelect_Camera_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "OnDeactivated");

	Params::AFortnitePartyHeroSelect_Camera_C_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFortnitePartyHeroSelect_Camera_C::ReceiveTick(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "ReceiveTick");

	Params::AFortnitePartyHeroSelect_Camera_C_ReceiveTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ExecuteUbergraph_FortnitePartyHeroSelect_Camera
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_3                                       (HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputMouseDelta_DeltaX                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputMouseDelta_DeltaY                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputKeyEvent_Key_2                                       (HasGetValueTypeHash)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ATVPostProcessBP_C*>  CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ATVPostProcessBP_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortTimeOfDayManager*       CallFunc_GetTimeOfDayManagerFromContext_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFortnitePartyHeroSelect_Camera_C::ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, const struct FKey& Temp_struct_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FKey& K2Node_InputKeyEvent_Key_3, float K2Node_Event_DeltaSeconds, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, float CallFunc_GetInputMouseDelta_DeltaX, float CallFunc_GetInputMouseDelta_DeltaY, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key_2, bool CallFunc_K2_SetActorRotation_ReturnValue, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("FortnitePartyHeroSelect_Camera_C", "ExecuteUbergraph_FortnitePartyHeroSelect_Camera");

	Params::AFortnitePartyHeroSelect_Camera_C_ExecuteUbergraph_FortnitePartyHeroSelect_Camera_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_InputKeyEvent_Key_3 = K2Node_InputKeyEvent_Key_3;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetInputMouseDelta_DeltaX = CallFunc_GetInputMouseDelta_DeltaX;
	Parms.CallFunc_GetInputMouseDelta_DeltaY = CallFunc_GetInputMouseDelta_DeltaY;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_InputKeyEvent_Key_2 = K2Node_InputKeyEvent_Key_2;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetTimeOfDayManagerFromContext_ReturnValue = CallFunc_GetTimeOfDayManagerFromContext_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
