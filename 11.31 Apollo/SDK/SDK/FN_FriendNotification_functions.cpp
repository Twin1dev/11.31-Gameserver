#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FriendNotification.FriendNotification_C
// (None)

class UClass* UFriendNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FriendNotification_C");

	return Clss;
}


// FriendNotification_C FriendNotification.Default__FriendNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFriendNotification_C* UFriendNotification_C::GetDefaultObj()
{
	static class UFriendNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFriendNotification_C*>(UFriendNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FriendNotification.FriendNotification_C.JoinPartyInvite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFriendNotification_C::JoinPartyInvite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendNotification_C", "JoinPartyInvite");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendNotification.FriendNotification_C.ShowFriendInvites
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFriendNotification_C::ShowFriendInvites()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendNotification_C", "ShowFriendInvites");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FriendNotification.FriendNotification_C.ExecuteUbergraph_FriendNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendNotification_C::ExecuteUbergraph_FriendNotification(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FriendNotification_C", "ExecuteUbergraph_FriendNotification");

	Params::UFriendNotification_C_ExecuteUbergraph_FriendNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


