#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SafeZoneStorm.BP_SafeZoneStorm_C
// (Actor)

class UClass* ABP_SafeZoneStorm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SafeZoneStorm_C");

	return Clss;
}


// BP_SafeZoneStorm_C BP_SafeZoneStorm.Default__BP_SafeZoneStorm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SafeZoneStorm_C* ABP_SafeZoneStorm_C::GetDefaultObj()
{
	static class ABP_SafeZoneStorm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SafeZoneStorm_C*>(ABP_SafeZoneStorm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SafeZoneStorm_C::UserConstructionScript(const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SafeZoneStorm_C", "UserConstructionScript");

	Params::ABP_SafeZoneStorm_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SafeZoneStorm_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SafeZoneStorm_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.MobileClouds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Mobile                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SafeZoneStorm_C::MobileClouds(bool Mobile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SafeZoneStorm_C", "MobileClouds");

	Params::ABP_SafeZoneStorm_C_MobileClouds_Params Parms{};

	Parms.Mobile = Mobile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowClouds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SafeZoneStorm_C::ShowClouds(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SafeZoneStorm_C", "ShowClouds");

	Params::ABP_SafeZoneStorm_C_ShowClouds_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowStormScreenEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SafeZoneStorm_C::ShowStormScreenEffect(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SafeZoneStorm_C", "ShowStormScreenEffect");

	Params::ABP_SafeZoneStorm_C_ShowStormScreenEffect_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ExecuteUbergraph_BP_SafeZoneStorm
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Mobile                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Show                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SafeZoneStorm_C::ExecuteUbergraph_BP_SafeZoneStorm(int32 EntryPoint, bool CallFunc_IsMobilePlatform_ReturnValue, bool K2Node_CustomEvent_Mobile, float K2Node_CustomEvent_Amount, bool K2Node_CustomEvent_Show, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SafeZoneStorm_C", "ExecuteUbergraph_BP_SafeZoneStorm");

	Params::ABP_SafeZoneStorm_C_ExecuteUbergraph_BP_SafeZoneStorm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.K2Node_CustomEvent_Mobile = K2Node_CustomEvent_Mobile;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.K2Node_CustomEvent_Show = K2Node_CustomEvent_Show;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


