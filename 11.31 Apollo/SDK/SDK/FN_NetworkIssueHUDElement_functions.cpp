#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NetworkIssueHUDElement.NetworkIssueHUDElement_C
// (None)

class UClass* UNetworkIssueHUDElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetworkIssueHUDElement_C");

	return Clss;
}


// NetworkIssueHUDElement_C NetworkIssueHUDElement.Default__NetworkIssueHUDElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNetworkIssueHUDElement_C* UNetworkIssueHUDElement_C::GetDefaultObj()
{
	static class UNetworkIssueHUDElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetworkIssueHUDElement_C*>(UNetworkIssueHUDElement_C::StaticClass()->DefaultObject);

	return Default;
}

}


