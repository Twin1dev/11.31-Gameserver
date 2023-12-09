#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CozyLodge_AnimCharacter.BP_CozyLodge_AnimCharacter_C
// (Actor)

class UClass* ABP_CozyLodge_AnimCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CozyLodge_AnimCharacter_C");

	return Clss;
}


// BP_CozyLodge_AnimCharacter_C BP_CozyLodge_AnimCharacter.Default__BP_CozyLodge_AnimCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CozyLodge_AnimCharacter_C* ABP_CozyLodge_AnimCharacter_C::GetDefaultObj()
{
	static class ABP_CozyLodge_AnimCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CozyLodge_AnimCharacter_C*>(ABP_CozyLodge_AnimCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CozyLodge_AnimCharacter.BP_CozyLodge_AnimCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CozyLodge_AnimCharacter_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CozyLodge_AnimCharacter_C", "UserConstructionScript");

	Params::ABP_CozyLodge_AnimCharacter_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


