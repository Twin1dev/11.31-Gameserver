#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaKillFeedItem.AthenaKillFeedItem_C
// (None)

class UClass* UAthenaKillFeedItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaKillFeedItem_C");

	return Clss;
}


// AthenaKillFeedItem_C AthenaKillFeedItem.Default__AthenaKillFeedItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaKillFeedItem_C* UAthenaKillFeedItem_C::GetDefaultObj()
{
	static class UAthenaKillFeedItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaKillFeedItem_C*>(UAthenaKillFeedItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaKillFeedItem.AthenaKillFeedItem_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaKillFeedItem_C::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaKillFeedItem_C", "SetText");

	Params::UAthenaKillFeedItem_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


