#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility
struct AMeshBeaconClient_ServerUpdateMultipleLevelsVisibility_Params
{
public:
	TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities;                                 // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility
struct AMeshBeaconClient_ServerUpdateLevelVisibility_Params
{
public:
	struct FUpdateLevelVisibilityLevelInfo       LevelVisibility;                                   // 0x0(0x14)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MeshNetwork.MeshBeaconClient.OnRep_MeshPingTime
struct AMeshBeaconClient_OnRep_MeshPingTime_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot
struct AMeshBeaconClient_OnRep_ConnectedToRoot_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType
struct UMeshNetworkComponent_GetMeshNetworkNodeType_Params
{
public:
	enum class EMeshNetworkNodeType              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey
struct UMeshNetworkSubsystem_SetMetaDataWithKey_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshMetaDataStruct                   MetaData;                                          // 0x8(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F7C[0x3];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x1 (0x1 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.SetMetaData
struct UMeshNetworkSubsystem_SetMetaData_Params
{
public:
	struct FMeshMetaDataStruct                   MetaData;                                          // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey
struct UMeshNetworkSubsystem_GetMetaDataWithKey_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshMetaDataStruct                   MetaData;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F7D[0x2];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x1 (0x1 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.GetMetadata
struct UMeshNetworkSubsystem_GetMetadata_Params
{
public:
	struct FMeshMetaDataStruct                   MetaData;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType
struct UMeshNetworkSubsystem_GetMeshNetworkNodeType_Params
{
public:
	enum class EMeshNetworkNodeType              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType
struct UMeshNetworkSubsystem_GetGameServerNodeType_Params
{
public:
	enum class EMeshNetworkNodeType              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot
struct UMeshNetworkSubsystem_GetConnectedToRoot_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.EnableMeshReplication
struct UMeshNetworkSubsystem_EnableMeshReplication_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMeshNetworkComponent>     MeshComponentClass;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MeshNetwork.MeshNetworkSubsystem.DisableMeshReplication
struct UMeshNetworkSubsystem_DisableMeshReplication_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
