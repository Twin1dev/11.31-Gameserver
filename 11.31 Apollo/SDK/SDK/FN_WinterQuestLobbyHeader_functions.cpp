#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuestLobbyHeader.WinterQuestLobbyHeader_C
// (None)

class UClass* UWinterQuestLobbyHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuestLobbyHeader_C");

	return Clss;
}


// WinterQuestLobbyHeader_C WinterQuestLobbyHeader.Default__WinterQuestLobbyHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuestLobbyHeader_C* UWinterQuestLobbyHeader_C::GetDefaultObj()
{
	static class UWinterQuestLobbyHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuestLobbyHeader_C*>(UWinterQuestLobbyHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WinterQuestLobbyHeader.WinterQuestLobbyHeader_C.HandleLogoIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuestLobbyHeader_C::HandleLogoIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestLobbyHeader_C", "HandleLogoIntro");

	Params::UWinterQuestLobbyHeader_C_HandleLogoIntro_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


