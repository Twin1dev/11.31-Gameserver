#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemPreviewPedestal.ItemPreviewPedestal_C
// (Actor)

class UClass* AItemPreviewPedestal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPreviewPedestal_C");

	return Clss;
}


// ItemPreviewPedestal_C ItemPreviewPedestal.Default__ItemPreviewPedestal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AItemPreviewPedestal_C* AItemPreviewPedestal_C::GetDefaultObj()
{
	static class AItemPreviewPedestal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AItemPreviewPedestal_C*>(AItemPreviewPedestal_C::StaticClass()->DefaultObject);

	return Default;
}

}


