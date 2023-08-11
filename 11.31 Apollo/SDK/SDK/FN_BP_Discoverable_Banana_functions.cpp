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


// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.Reveal__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Discoverable_Banana_C::Reveal__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Discoverable_Banana_C", "Reveal__FinishedFunc");

	Params::ABP_Discoverable_Banana_C_Reveal__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.Reveal__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Discoverable_Banana_C::Reveal__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Discoverable_Banana_C", "Reveal__UpdateFunc");

	Params::ABP_Discoverable_Banana_C_Reveal__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.Reveal__NewTrack_2__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_Discoverable_Banana_C::Reveal__NewTrack_2__EventFunc()
{
	static auto Func = Class->GetFunction("BP_Discoverable_Banana_C", "Reveal__NewTrack_2__EventFunc");

	Params::ABP_Discoverable_Banana_C_Reveal__NewTrack_2__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.Hide__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Discoverable_Banana_C::Hide__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Discoverable_Banana_C", "Hide__FinishedFunc");

	Params::ABP_Discoverable_Banana_C_Hide__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.Hide__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Discoverable_Banana_C::Hide__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Discoverable_Banana_C", "Hide__UpdateFunc");

	Params::ABP_Discoverable_Banana_C_Hide__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.HandleObjectSpecialInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ActionTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Discoverable_Banana_C::HandleObjectSpecialInteraction(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag)
{
	static auto Func = Class->GetFunction("BP_Discoverable_Banana_C", "HandleObjectSpecialInteraction");

	Params::ABP_Discoverable_Banana_C_HandleObjectSpecialInteraction_Params Parms;

	Parms.ActionTag = ActionTag;
	Parms.CameraTag = CameraTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.Commit_OnSpecialInteraction
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Discoverable_Banana_C::Commit_OnSpecialInteraction()
{
	static auto Func = Class->GetFunction("BP_Discoverable_Banana_C", "Commit_OnSpecialInteraction");

	Params::ABP_Discoverable_Banana_C_Commit_OnSpecialInteraction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Discoverable_Banana.BP_Discoverable_Banana_C.ExecuteUbergraph_BP_Discoverable_Banana
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Event_ActionTag                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_CameraTag                                           (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Discoverable_Banana_C::ExecuteUbergraph_BP_Discoverable_Banana(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Discoverable_Banana_C", "ExecuteUbergraph_BP_Discoverable_Banana");

	Params::ABP_Discoverable_Banana_C_ExecuteUbergraph_BP_Discoverable_Banana_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_ActionTag = K2Node_Event_ActionTag;
	Parms.K2Node_Event_CameraTag = K2Node_Event_CameraTag;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue_1 = CallFunc_VLerp_ReturnValue_1;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
