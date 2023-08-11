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


// Function Ashton_Indigo_LockOnWidget.Ashton_Indigo_LockOnWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAshton_Indigo_LockOnWidget_C::Construct()
{
	static auto Func = Class->GetFunction("Ashton_Indigo_LockOnWidget_C", "Construct");

	Params::UAshton_Indigo_LockOnWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Ashton_Indigo_LockOnWidget.Ashton_Indigo_LockOnWidget_C.MoveUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAshton_Indigo_LockOnWidget_C::MoveUI()
{
	static auto Func = Class->GetFunction("Ashton_Indigo_LockOnWidget_C", "MoveUI");

	Params::UAshton_Indigo_LockOnWidget_C_MoveUI_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Ashton_Indigo_LockOnWidget.Ashton_Indigo_LockOnWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAshton_Indigo_LockOnWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("Ashton_Indigo_LockOnWidget_C", "Destruct");

	Params::UAshton_Indigo_LockOnWidget_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Ashton_Indigo_LockOnWidget.Ashton_Indigo_LockOnWidget_C.ExecuteUbergraph_Ashton_Indigo_LockOnWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Loudness                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BroadcastPlayerImpactAtLocation_Duration                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAshton_Indigo_LockOnWidget_C::ExecuteUbergraph_Ashton_Indigo_LockOnWidget(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_BroadcastPlayerImpactAtLocation_Loudness, float CallFunc_BroadcastPlayerImpactAtLocation_Duration, bool CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static auto Func = Class->GetFunction("Ashton_Indigo_LockOnWidget_C", "ExecuteUbergraph_Ashton_Indigo_LockOnWidget");

	Params::UAshton_Indigo_LockOnWidget_C_ExecuteUbergraph_Ashton_Indigo_LockOnWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Loudness = CallFunc_BroadcastPlayerImpactAtLocation_Loudness;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_Duration = CallFunc_BroadcastPlayerImpactAtLocation_Duration;
	Parms.CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue = CallFunc_BroadcastPlayerImpactAtLocation_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
