#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CozyLodge_GenericSelectable.BP_CozyLodge_GenericSelectable_C
// (Actor)

class UClass* ABP_CozyLodge_GenericSelectable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CozyLodge_GenericSelectable_C");

	return Clss;
}


// BP_CozyLodge_GenericSelectable_C BP_CozyLodge_GenericSelectable.Default__BP_CozyLodge_GenericSelectable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CozyLodge_GenericSelectable_C* ABP_CozyLodge_GenericSelectable_C::GetDefaultObj()
{
	static class ABP_CozyLodge_GenericSelectable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CozyLodge_GenericSelectable_C*>(ABP_CozyLodge_GenericSelectable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CozyLodge_GenericSelectable.BP_CozyLodge_GenericSelectable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CozyLodge_GenericSelectable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CozyLodge_GenericSelectable_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CozyLodge_GenericSelectable.BP_CozyLodge_GenericSelectable_C.ExecuteUbergraph_BP_CozyLodge_GenericSelectable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CozyLodge_GenericSelectable_C::ExecuteUbergraph_BP_CozyLodge_GenericSelectable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CozyLodge_GenericSelectable_C", "ExecuteUbergraph_BP_CozyLodge_GenericSelectable");

	Params::ABP_CozyLodge_GenericSelectable_C_ExecuteUbergraph_BP_CozyLodge_GenericSelectable_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


