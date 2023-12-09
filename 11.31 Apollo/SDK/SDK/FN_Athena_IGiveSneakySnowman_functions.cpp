#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C
// (None)

class UClass* IAthena_IGiveSneakySnowman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_IGiveSneakySnowman_C");

	return Clss;
}


// Athena_IGiveSneakySnowman_C Athena_IGiveSneakySnowman.Default__Athena_IGiveSneakySnowman_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IAthena_IGiveSneakySnowman_C* IAthena_IGiveSneakySnowman_C::GetDefaultObj()
{
	static class IAthena_IGiveSneakySnowman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IAthena_IGiveSneakySnowman_C*>(IAthena_IGiveSneakySnowman_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C.SpawnParticles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IAthena_IGiveSneakySnowman_C::SpawnParticles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_IGiveSneakySnowman_C", "SpawnParticles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C.GetNewSnowmanTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)

void IAthena_IGiveSneakySnowman_C::GetNewSnowmanTransform(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_IGiveSneakySnowman_C", "GetNewSnowmanTransform");

	Params::IAthena_IGiveSneakySnowman_C_GetNewSnowmanTransform_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C.OnTookSneakySnowman
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IAthena_IGiveSneakySnowman_C::OnTookSneakySnowman()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_IGiveSneakySnowman_C", "OnTookSneakySnowman");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C.OnStartedJumpingIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IAthena_IGiveSneakySnowman_C::OnStartedJumpingIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_IGiveSneakySnowman_C", "OnStartedJumpingIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C.MovePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IAthena_IGiveSneakySnowman_C::MovePlayer(class AActor* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_IGiveSneakySnowman_C", "MovePlayer");

	Params::IAthena_IGiveSneakySnowman_C_MovePlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C.OnGaveSneakySnowman
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IAthena_IGiveSneakySnowman_C::OnGaveSneakySnowman()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_IGiveSneakySnowman_C", "OnGaveSneakySnowman");



	UObject::ProcessEvent(Func, nullptr);

}

}


