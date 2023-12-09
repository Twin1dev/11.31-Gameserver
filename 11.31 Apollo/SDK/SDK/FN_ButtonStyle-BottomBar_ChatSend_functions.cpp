#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle-BottomBar_ChatSend.ButtonStyle-BottomBar_ChatSend_C
// (None)

class UClass* UButtonStyleMinusBottomBar_ChatSend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle-BottomBar_ChatSend_C");

	return Clss;
}


// ButtonStyle-BottomBar_ChatSend_C ButtonStyle-BottomBar_ChatSend.Default__ButtonStyle-BottomBar_ChatSend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyleMinusBottomBar_ChatSend_C* UButtonStyleMinusBottomBar_ChatSend_C::GetDefaultObj()
{
	static class UButtonStyleMinusBottomBar_ChatSend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyleMinusBottomBar_ChatSend_C*>(UButtonStyleMinusBottomBar_ChatSend_C::StaticClass()->DefaultObject);

	return Default;
}

}


