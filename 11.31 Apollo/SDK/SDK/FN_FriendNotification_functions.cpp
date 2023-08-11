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


// Function FriendNotification.FriendNotification_C.JoinPartyInvite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFriendNotification_C::JoinPartyInvite()
{
	static auto Func = Class->GetFunction("FriendNotification_C", "JoinPartyInvite");

	Params::UFriendNotification_C_JoinPartyInvite_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendNotification.FriendNotification_C.ShowFriendInvites
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFriendNotification_C::ShowFriendInvites()
{
	static auto Func = Class->GetFunction("FriendNotification_C", "ShowFriendInvites");

	Params::UFriendNotification_C_ShowFriendInvites_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FriendNotification.FriendNotification_C.ExecuteUbergraph_FriendNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFriendNotification_C::ExecuteUbergraph_FriendNotification(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("FriendNotification_C", "ExecuteUbergraph_FriendNotification");

	Params::UFriendNotification_C_ExecuteUbergraph_FriendNotification_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
