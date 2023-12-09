#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UACBase.UACNetworkComponent
// (None)

class UClass* UUACNetworkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UACNetworkComponent");

	return Clss;
}


// UACNetworkComponent UACBase.Default__UACNetworkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UUACNetworkComponent* UUACNetworkComponent::GetDefaultObj()
{
	static class UUACNetworkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UUACNetworkComponent*>(UUACNetworkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function UACBase.UACNetworkComponent.SendPacketToServer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint8                              Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Packet                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetworkComponent::SendPacketToServer(uint8 Type, TArray<uint8>& Packet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UACNetworkComponent", "SendPacketToServer");

	Params::UUACNetworkComponent_SendPacketToServer_Params Parms{};

	Parms.Type = Type;
	Parms.Packet = Packet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UACBase.UACNetworkComponent.SendPacketToClient
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// uint8                              Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Packet                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetworkComponent::SendPacketToClient(uint8 Type, TArray<uint8>& Packet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UACNetworkComponent", "SendPacketToClient");

	Params::UUACNetworkComponent_SendPacketToClient_Params Parms{};

	Parms.Type = Type;
	Parms.Packet = Packet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UACBase.UACNetworkComponent.SendClientHello
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// uint32                             SessionKey                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUACNetworkComponent::SendClientHello(uint32 SessionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UACNetworkComponent", "SendClientHello");

	Params::UUACNetworkComponent_SendClientHello_Params Parms{};

	Parms.SessionKey = SessionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


