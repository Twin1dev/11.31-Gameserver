#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StoreMain_Offer_VBucks_Modal.StoreMain_Offer_VBucks_Modal_C
// (None)

class UClass* UStoreMain_Offer_VBucks_Modal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoreMain_Offer_VBucks_Modal_C");

	return Clss;
}


// StoreMain_Offer_VBucks_Modal_C StoreMain_Offer_VBucks_Modal.Default__StoreMain_Offer_VBucks_Modal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStoreMain_Offer_VBucks_Modal_C* UStoreMain_Offer_VBucks_Modal_C::GetDefaultObj()
{
	static class UStoreMain_Offer_VBucks_Modal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoreMain_Offer_VBucks_Modal_C*>(UStoreMain_Offer_VBucks_Modal_C::StaticClass()->DefaultObject);

	return Default;
}

}


