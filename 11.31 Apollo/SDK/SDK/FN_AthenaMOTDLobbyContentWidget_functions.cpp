#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMOTDLobbyContentWidget.AthenaMOTDLobbyContentWidget_C
// (None)

class UClass* UAthenaMOTDLobbyContentWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMOTDLobbyContentWidget_C");

	return Clss;
}


// AthenaMOTDLobbyContentWidget_C AthenaMOTDLobbyContentWidget.Default__AthenaMOTDLobbyContentWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMOTDLobbyContentWidget_C* UAthenaMOTDLobbyContentWidget_C::GetDefaultObj()
{
	static class UAthenaMOTDLobbyContentWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMOTDLobbyContentWidget_C*>(UAthenaMOTDLobbyContentWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


