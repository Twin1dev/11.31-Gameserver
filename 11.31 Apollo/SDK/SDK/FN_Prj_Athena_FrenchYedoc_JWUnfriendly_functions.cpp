#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Prj_Athena_FrenchYedoc_JWUnfriendly.Prj_Athena_FrenchYedoc_JWUnfriendly_C
// (Actor)

class UClass* APrj_Athena_FrenchYedoc_JWUnfriendly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Prj_Athena_FrenchYedoc_JWUnfriendly_C");

	return Clss;
}


// Prj_Athena_FrenchYedoc_JWUnfriendly_C Prj_Athena_FrenchYedoc_JWUnfriendly.Default__Prj_Athena_FrenchYedoc_JWUnfriendly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrj_Athena_FrenchYedoc_JWUnfriendly_C* APrj_Athena_FrenchYedoc_JWUnfriendly_C::GetDefaultObj()
{
	static class APrj_Athena_FrenchYedoc_JWUnfriendly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrj_Athena_FrenchYedoc_JWUnfriendly_C*>(APrj_Athena_FrenchYedoc_JWUnfriendly_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Prj_Athena_FrenchYedoc_JWUnfriendly.Prj_Athena_FrenchYedoc_JWUnfriendly_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrj_Athena_FrenchYedoc_JWUnfriendly_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Prj_Athena_FrenchYedoc_JWUnfriendly_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Prj_Athena_FrenchYedoc_JWUnfriendly.Prj_Athena_FrenchYedoc_JWUnfriendly_C.ExecuteUbergraph_Prj_Athena_FrenchYedoc_JWUnfriendly
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void APrj_Athena_FrenchYedoc_JWUnfriendly_C::ExecuteUbergraph_Prj_Athena_FrenchYedoc_JWUnfriendly(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Prj_Athena_FrenchYedoc_JWUnfriendly_C", "ExecuteUbergraph_Prj_Athena_FrenchYedoc_JWUnfriendly");

	Params::APrj_Athena_FrenchYedoc_JWUnfriendly_C_ExecuteUbergraph_Prj_Athena_FrenchYedoc_JWUnfriendly_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


