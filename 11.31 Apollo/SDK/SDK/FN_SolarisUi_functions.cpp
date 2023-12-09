#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SolarisUi.SolUserWidget
// (None)

class UClass* USolUserWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolUserWidget");

	return Clss;
}


// SolUserWidget SolarisUi.Default__SolUserWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class USolUserWidget* USolUserWidget::GetDefaultObj()
{
	static class USolUserWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<USolUserWidget*>(USolUserWidget::StaticClass()->DefaultObject);

	return Default;
}

}


