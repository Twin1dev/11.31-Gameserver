#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMeshNetworkNodeType : uint8
{
	Root                           = 0,
	Inner                          = 1,
	Edge                           = 2,
	Client                         = 3,
	Unknown                        = 4,
	EMeshNetworkNodeType_MAX       = 5,
};

enum class EMeshNetworkRelevancy : uint8
{
	NotRelevant                    = 0,
	RelevantToEdgeNodes            = 1,
	RelevantToClients              = 2,
	EMeshNetworkRelevancy_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct MeshNetwork.NoAggregationParameters
struct FNoAggregationParameters
{
public:
	TSet<class FName>                            Parameters;                                        // 0x0(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MeshNetwork.AggregatedFunction
struct FAggregatedFunction
{
public:
	class UFunction*                             Function;                                          // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F81[0x20];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MeshNetwork.MeshMetaDataStruct
struct FMeshMetaDataStruct
{
public:
	uint8                                        Pad_1F82[0x1];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
