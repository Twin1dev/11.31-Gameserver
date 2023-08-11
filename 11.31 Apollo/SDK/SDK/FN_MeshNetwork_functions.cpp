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


// Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility
// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<struct FUpdateLevelVisibilityLevelInfo>LevelVisibilities                                                (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AMeshBeaconClient::ServerUpdateMultipleLevelsVisibility(TArray<struct FUpdateLevelVisibilityLevelInfo>& LevelVisibilities)
{
	static auto Func = Class->GetFunction("MeshBeaconClient", "ServerUpdateMultipleLevelsVisibility");

	Params::AMeshBeaconClient_ServerUpdateMultipleLevelsVisibility_Params Parms;

	Parms.LevelVisibilities = LevelVisibilities;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility
// (Final, Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FUpdateLevelVisibilityLevelInfoLevelVisibility                                                  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AMeshBeaconClient::ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo& LevelVisibility)
{
	static auto Func = Class->GetFunction("MeshBeaconClient", "ServerUpdateLevelVisibility");

	Params::AMeshBeaconClient_ServerUpdateLevelVisibility_Params Parms;

	Parms.LevelVisibility = LevelVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshNetwork.MeshBeaconClient.OnRep_MeshPingTime
// (Native, Protected)
// Parameters:

void AMeshBeaconClient::OnRep_MeshPingTime()
{
	static auto Func = Class->GetFunction("MeshBeaconClient", "OnRep_MeshPingTime");

	Params::AMeshBeaconClient_OnRep_MeshPingTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot
// (Final, Native, Protected)
// Parameters:

void AMeshBeaconClient::OnRep_ConnectedToRoot()
{
	static auto Func = Class->GetFunction("MeshBeaconClient", "OnRep_ConnectedToRoot");

	Params::AMeshBeaconClient_OnRep_ConnectedToRoot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMeshNetworkNodeType    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMeshNetworkNodeType UMeshNetworkComponent::GetMeshNetworkNodeType()
{
	static auto Func = Class->GetFunction("MeshNetworkComponent", "GetMeshNetworkNodeType");

	Params::UMeshNetworkComponent_GetMeshNetworkNodeType_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMeshMetaDataStruct         MetaData                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMeshNetworkSubsystem::SetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData)
{
	static auto Func = Class->GetFunction("MeshNetworkSubsystem", "SetMetaDataWithKey");

	Params::UMeshNetworkSubsystem_SetMetaDataWithKey_Params Parms;

	Parms.Key = Key;
	Parms.MetaData = MetaData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshNetwork.MeshNetworkSubsystem.SetMetaData
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMeshMetaDataStruct         MetaData                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMeshNetworkSubsystem::SetMetaData(struct FMeshMetaDataStruct& MetaData)
{
	static auto Func = Class->GetFunction("MeshNetworkSubsystem", "SetMetaData");

	Params::UMeshNetworkSubsystem_SetMetaData_Params Parms;

	Parms.MetaData = MetaData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        Key                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMeshMetaDataStruct         MetaData                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshNetworkSubsystem::GetMetaDataWithKey(class FName Key, struct FMeshMetaDataStruct& MetaData)
{
	static auto Func = Class->GetFunction("MeshNetworkSubsystem", "GetMetaDataWithKey");

	Params::UMeshNetworkSubsystem_GetMetaDataWithKey_Params Parms;

	Parms.Key = Key;
	Parms.MetaData = MetaData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshNetwork.MeshNetworkSubsystem.GetMetadata
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMeshMetaDataStruct         MetaData                                                         (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UMeshNetworkSubsystem::GetMetadata(struct FMeshMetaDataStruct& MetaData)
{
	static auto Func = Class->GetFunction("MeshNetworkSubsystem", "GetMetadata");

	Params::UMeshNetworkSubsystem_GetMetadata_Params Parms;

	Parms.MetaData = MetaData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMeshNetworkNodeType    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMeshNetworkNodeType UMeshNetworkSubsystem::GetMeshNetworkNodeType()
{
	static auto Func = Class->GetFunction("MeshNetworkSubsystem", "GetMeshNetworkNodeType");

	Params::UMeshNetworkSubsystem_GetMeshNetworkNodeType_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMeshNetworkNodeType    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMeshNetworkNodeType UMeshNetworkSubsystem::GetGameServerNodeType()
{
	static auto Func = Class->GetFunction("MeshNetworkSubsystem", "GetGameServerNodeType");

	Params::UMeshNetworkSubsystem_GetGameServerNodeType_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMeshNetworkSubsystem::GetConnectedToRoot()
{
	static auto Func = Class->GetFunction("MeshNetworkSubsystem", "GetConnectedToRoot");

	Params::UMeshNetworkSubsystem_GetConnectedToRoot_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MeshNetwork.MeshNetworkSubsystem.EnableMeshReplication
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMeshNetworkComponent>MeshComponentClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshNetworkSubsystem::EnableMeshReplication(class AActor* Actor, TSubclassOf<class UMeshNetworkComponent> MeshComponentClass)
{
	static auto Func = Class->GetFunction("MeshNetworkSubsystem", "EnableMeshReplication");

	Params::UMeshNetworkSubsystem_EnableMeshReplication_Params Parms;

	Parms.Actor = Actor;
	Parms.MeshComponentClass = MeshComponentClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshNetwork.MeshNetworkSubsystem.DisableMeshReplication
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshNetworkSubsystem::DisableMeshReplication(class AActor* Actor)
{
	static auto Func = Class->GetFunction("MeshNetworkSubsystem", "DisableMeshReplication");

	Params::UMeshNetworkSubsystem_DisableMeshReplication_Params Parms;

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
