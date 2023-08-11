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


// Function DA_Butterfly.DA_Butterfly_C.BPPressSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_Butterfly_C::BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static auto Func = Class->GetFunction("DA_Butterfly_C", "BPPressSecondaryFire");

	Params::ADA_Butterfly_C_BPPressSecondaryFire_Params Parms;

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DA_Butterfly.DA_Butterfly_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_Butterfly_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static auto Func = Class->GetFunction("DA_Butterfly_C", "BPPressTrigger");

	Params::ADA_Butterfly_C_BPPressTrigger_Params Parms;

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DA_Butterfly.DA_Butterfly_C.BPOnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void ADA_Butterfly_C::BPOnUnEquip()
{
	static auto Func = Class->GetFunction("DA_Butterfly_C", "BPOnUnEquip");

	Params::ADA_Butterfly_C_BPOnUnEquip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function DA_Butterfly.DA_Butterfly_C.BPReleaseSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_Butterfly_C::BPReleaseSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static auto Func = Class->GetFunction("DA_Butterfly_C", "BPReleaseSecondaryFire");

	Params::ADA_Butterfly_C_BPReleaseSecondaryFire_Params Parms;

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DA_Butterfly.DA_Butterfly_C.ExecuteUbergraph_DA_Butterfly
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADA_Butterfly_C::ExecuteUbergraph_DA_Butterfly(int32 EntryPoint, class AFortDecoHelper* K2Node_Event_FortDecoHelper_2, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AFortDecoHelper* K2Node_Event_FortDecoHelper_1, class AFortDecoHelper* K2Node_Event_FortDecoHelper)
{
	static auto Func = Class->GetFunction("DA_Butterfly_C", "ExecuteUbergraph_DA_Butterfly");

	Params::ADA_Butterfly_C_ExecuteUbergraph_DA_Butterfly_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FortDecoHelper_2 = K2Node_Event_FortDecoHelper_2;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.K2Node_Event_FortDecoHelper_1 = K2Node_Event_FortDecoHelper_1;
	Parms.K2Node_Event_FortDecoHelper = K2Node_Event_FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
