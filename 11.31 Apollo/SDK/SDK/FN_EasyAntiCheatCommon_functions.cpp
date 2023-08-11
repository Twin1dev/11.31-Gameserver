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


// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<uint8>                      Message                                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEasyAntiCheatNetComponent::ServerMessage(TArray<uint8>& Message)
{
	static auto Func = Class->GetFunction("EasyAntiCheatNetComponent", "ServerMessage");

	Params::UEasyAntiCheatNetComponent_ServerMessage_Params Parms;

	Parms.Message = Message;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<uint8>                      Message                                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEasyAntiCheatNetComponent::ClientMessage(TArray<uint8>& Message)
{
	static auto Func = Class->GetFunction("EasyAntiCheatNetComponent", "ClientMessage");

	Params::UEasyAntiCheatNetComponent_ClientMessage_Params Parms;

	Parms.Message = Message;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
