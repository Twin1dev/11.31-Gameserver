#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CozyLodge_AnimCharacter2.BP_CozyLodge_AnimCharacter2_C
// (Actor)

class UClass* ABP_CozyLodge_AnimCharacter2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CozyLodge_AnimCharacter2_C");

	return Clss;
}


// BP_CozyLodge_AnimCharacter2_C BP_CozyLodge_AnimCharacter2.Default__BP_CozyLodge_AnimCharacter2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CozyLodge_AnimCharacter2_C* ABP_CozyLodge_AnimCharacter2_C::GetDefaultObj()
{
	static class ABP_CozyLodge_AnimCharacter2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CozyLodge_AnimCharacter2_C*>(ABP_CozyLodge_AnimCharacter2_C::StaticClass()->DefaultObject);

	return Default;
}

}


