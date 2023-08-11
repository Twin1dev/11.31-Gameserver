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

// 0x59 (0x59 - 0x0)
// Function GAT_Creative_ActiveAbility_BuildingActor.GAT_Creative_ActiveAbility_BuildingActor_C.SetupBuildingActorAbility
struct UGAT_Creative_ActiveAbility_BuildingActor_C_SetupBuildingActorAbility_Params
{
public:
	class ABuildingActor*                        BuildingActor;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingActor*                        LocalBuildingActor;                                // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityActorInfo             CallFunc_GetActorInfo_ReturnValue;                 // 0x10(0x40)(ContainsInstancedReference)
	class ABuildingActor*                        K2Node_DynamicCast_AsBuilding_Actor;               // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function GAT_Creative_ActiveAbility_BuildingActor.GAT_Creative_ActiveAbility_BuildingActor_C.K2_ActivateAbility
struct UGAT_Creative_ActiveAbility_BuildingActor_C_K2_ActivateAbility_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function GAT_Creative_ActiveAbility_BuildingActor.GAT_Creative_ActiveAbility_BuildingActor_C.ExecuteUbergraph_GAT_Creative_ActiveAbility_BuildingActor
struct UGAT_Creative_ActiveAbility_BuildingActor_C_ExecuteUbergraph_GAT_Creative_ActiveAbility_BuildingActor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4AD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class ABuildingActor*                        CallFunc_SetupBuildingActorAbility_BuildingActor;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
