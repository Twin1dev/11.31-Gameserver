#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemInfoPresentationWidget.ItemInfoPresentationWidget_C
// (None)

class UClass* UItemInfoPresentationWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemInfoPresentationWidget_C");

	return Clss;
}


// ItemInfoPresentationWidget_C ItemInfoPresentationWidget.Default__ItemInfoPresentationWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemInfoPresentationWidget_C* UItemInfoPresentationWidget_C::GetDefaultObj()
{
	static class UItemInfoPresentationWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemInfoPresentationWidget_C*>(UItemInfoPresentationWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemInfoPresentationWidget.ItemInfoPresentationWidget_C.HandleOutro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInfoPresentationWidget_C::HandleOutro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInfoPresentationWidget_C", "HandleOutro");

	Params::UItemInfoPresentationWidget_C_HandleOutro_Params Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInfoPresentationWidget.ItemInfoPresentationWidget_C.HandleInitialState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInfoPresentationWidget_C::HandleInitialState(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInfoPresentationWidget_C", "HandleInitialState");

	Params::UItemInfoPresentationWidget_C_HandleInitialState_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInfoPresentationWidget.ItemInfoPresentationWidget_C.HandleIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInfoPresentationWidget_C::HandleIntro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInfoPresentationWidget_C", "HandleIntro");

	Params::UItemInfoPresentationWidget_C_HandleIntro_Params Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


