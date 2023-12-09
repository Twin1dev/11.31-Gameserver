#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuestTitleScreen.WinterQuestTitleScreen_C
// (None)

class UClass* UWinterQuestTitleScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuestTitleScreen_C");

	return Clss;
}


// WinterQuestTitleScreen_C WinterQuestTitleScreen.Default__WinterQuestTitleScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuestTitleScreen_C* UWinterQuestTitleScreen_C::GetDefaultObj()
{
	static class UWinterQuestTitleScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuestTitleScreen_C*>(UWinterQuestTitleScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.EndTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWinterQuestTitleScreen_C::EndTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestTitleScreen_C", "EndTransition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.OnBeginCabinTransition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestTitleScreen_C::OnBeginCabinTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestTitleScreen_C", "OnBeginCabinTransition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.OnResetScreen
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestTitleScreen_C::OnResetScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestTitleScreen_C", "OnResetScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestTitleScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestTitleScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestTitleScreen_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestTitleScreen_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWinterQuestTitleScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestTitleScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.ExecuteUbergraph_WinterQuestTitleScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWinterQuestTitleScreen_C::ExecuteUbergraph_WinterQuestTitleScreen(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestTitleScreen_C", "ExecuteUbergraph_WinterQuestTitleScreen");

	Params::UWinterQuestTitleScreen_C_ExecuteUbergraph_WinterQuestTitleScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


