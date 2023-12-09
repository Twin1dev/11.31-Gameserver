#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Galileo_Evaluator_FollowPatrolPath.Galileo_Evaluator_FollowPatrolPath_C
// (None)

class UClass* UGalileo_Evaluator_FollowPatrolPath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Galileo_Evaluator_FollowPatrolPath_C");

	return Clss;
}


// Galileo_Evaluator_FollowPatrolPath_C Galileo_Evaluator_FollowPatrolPath.Default__Galileo_Evaluator_FollowPatrolPath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGalileo_Evaluator_FollowPatrolPath_C* UGalileo_Evaluator_FollowPatrolPath_C::GetDefaultObj()
{
	static class UGalileo_Evaluator_FollowPatrolPath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGalileo_Evaluator_FollowPatrolPath_C*>(UGalileo_Evaluator_FollowPatrolPath_C::StaticClass()->DefaultObject);

	return Default;
}

}


