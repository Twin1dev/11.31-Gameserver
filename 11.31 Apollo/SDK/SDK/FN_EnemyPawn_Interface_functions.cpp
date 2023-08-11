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


// Function EnemyPawn_Interface.EnemyPawn_Interface_C.Orphaned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOrphaned                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   AttachedPawn                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IEnemyPawn_Interface_C::Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn)
{
	static auto Func = Class->GetFunction("EnemyPawn_Interface_C", "Orphaned");

	Params::IEnemyPawn_Interface_C_Orphaned_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (IsOrphaned != nullptr)
		*IsOrphaned = Parms.IsOrphaned;

	if (AttachedPawn != nullptr)
		*AttachedPawn = Parms.AttachedPawn;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
