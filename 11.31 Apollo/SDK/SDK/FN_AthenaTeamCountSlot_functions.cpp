#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaTeamCountSlot.AthenaTeamCountSlot_C
// (None)

class UClass* UAthenaTeamCountSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaTeamCountSlot_C");

	return Clss;
}


// AthenaTeamCountSlot_C AthenaTeamCountSlot.Default__AthenaTeamCountSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaTeamCountSlot_C* UAthenaTeamCountSlot_C::GetDefaultObj()
{
	static class UAthenaTeamCountSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaTeamCountSlot_C*>(UAthenaTeamCountSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaTeamCountSlot.AthenaTeamCountSlot_C.SetTeamSlotData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAthenaTeamCountSlotData    TeamSlotData                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              DrawOpacity                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamCountSlot_C::SetTeamSlotData(const struct FAthenaTeamCountSlotData& TeamSlotData, float DrawOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamCountSlot_C", "SetTeamSlotData");

	Params::UAthenaTeamCountSlot_C_SetTeamSlotData_Params Parms{};

	Parms.TeamSlotData = TeamSlotData;
	Parms.DrawOpacity = DrawOpacity;

	UObject::ProcessEvent(Func, &Parms);

}

}


