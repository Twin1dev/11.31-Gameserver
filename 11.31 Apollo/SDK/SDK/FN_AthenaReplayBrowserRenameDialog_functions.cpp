#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaReplayBrowserRenameDialog.AthenaReplayBrowserRenameDialog_C
// (None)

class UClass* UAthenaReplayBrowserRenameDialog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaReplayBrowserRenameDialog_C");

	return Clss;
}


// AthenaReplayBrowserRenameDialog_C AthenaReplayBrowserRenameDialog.Default__AthenaReplayBrowserRenameDialog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaReplayBrowserRenameDialog_C* UAthenaReplayBrowserRenameDialog_C::GetDefaultObj()
{
	static class UAthenaReplayBrowserRenameDialog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaReplayBrowserRenameDialog_C*>(UAthenaReplayBrowserRenameDialog_C::StaticClass()->DefaultObject);

	return Default;
}

}


