#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KillFeedImageDecorator.KillFeedImageDecorator_C
// (None)

class UClass* UKillFeedImageDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KillFeedImageDecorator_C");

	return Clss;
}


// KillFeedImageDecorator_C KillFeedImageDecorator.Default__KillFeedImageDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKillFeedImageDecorator_C* UKillFeedImageDecorator_C::GetDefaultObj()
{
	static class UKillFeedImageDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKillFeedImageDecorator_C*>(UKillFeedImageDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


