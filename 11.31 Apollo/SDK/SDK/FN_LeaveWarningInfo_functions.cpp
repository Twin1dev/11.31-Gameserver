#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LeaveWarningInfo.LeaveWarningInfo_C
// (None)

class UClass* ULeaveWarningInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaveWarningInfo_C");

	return Clss;
}


// LeaveWarningInfo_C LeaveWarningInfo.Default__LeaveWarningInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeaveWarningInfo_C* ULeaveWarningInfo_C::GetDefaultObj()
{
	static class ULeaveWarningInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaveWarningInfo_C*>(ULeaveWarningInfo_C::StaticClass()->DefaultObject);

	return Default;
}

}


