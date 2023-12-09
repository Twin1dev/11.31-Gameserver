#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GSC_DynamicLevelStreaming.GSC_DynamicLevelStreaming_C
// (None)

class UClass* UGSC_DynamicLevelStreaming_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GSC_DynamicLevelStreaming_C");

	return Clss;
}


// GSC_DynamicLevelStreaming_C GSC_DynamicLevelStreaming.Default__GSC_DynamicLevelStreaming_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGSC_DynamicLevelStreaming_C* UGSC_DynamicLevelStreaming_C::GetDefaultObj()
{
	static class UGSC_DynamicLevelStreaming_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGSC_DynamicLevelStreaming_C*>(UGSC_DynamicLevelStreaming_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GSC_DynamicLevelStreaming.GSC_DynamicLevelStreaming_C.OnNavActorHovered
// (Event, Public, BlueprintEvent)
// Parameters:

void UGSC_DynamicLevelStreaming_C::OnNavActorHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSC_DynamicLevelStreaming_C", "OnNavActorHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GSC_DynamicLevelStreaming.GSC_DynamicLevelStreaming_C.OnNavActorSelected
// (Event, Public, BlueprintEvent)
// Parameters:

void UGSC_DynamicLevelStreaming_C::OnNavActorSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSC_DynamicLevelStreaming_C", "OnNavActorSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GSC_DynamicLevelStreaming.GSC_DynamicLevelStreaming_C.ExecuteUbergraph_GSC_DynamicLevelStreaming
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGSC_DynamicLevelStreaming_C::ExecuteUbergraph_GSC_DynamicLevelStreaming(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GSC_DynamicLevelStreaming_C", "ExecuteUbergraph_GSC_DynamicLevelStreaming");

	Params::UGSC_DynamicLevelStreaming_C_ExecuteUbergraph_GSC_DynamicLevelStreaming_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


