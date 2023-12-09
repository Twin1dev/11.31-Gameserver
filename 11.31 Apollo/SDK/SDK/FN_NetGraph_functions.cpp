#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NetGraph.NetGraph_C
// (None)

class UClass* UNetGraph_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetGraph_C");

	return Clss;
}


// NetGraph_C NetGraph.Default__NetGraph_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNetGraph_C* UNetGraph_C::GetDefaultObj()
{
	static class UNetGraph_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetGraph_C*>(UNetGraph_C::StaticClass()->DefaultObject);

	return Default;
}

}


