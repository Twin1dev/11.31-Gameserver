#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EditNicknameButton.EditNicknameButton_C
// (None)

class UClass* UEditNicknameButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditNicknameButton_C");

	return Clss;
}


// EditNicknameButton_C EditNicknameButton.Default__EditNicknameButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEditNicknameButton_C* UEditNicknameButton_C::GetDefaultObj()
{
	static class UEditNicknameButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditNicknameButton_C*>(UEditNicknameButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EditNicknameButton.EditNicknameButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEditNicknameButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditNicknameButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EditNicknameButton.EditNicknameButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEditNicknameButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditNicknameButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EditNicknameButton.EditNicknameButton_C.ExecuteUbergraph_EditNicknameButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEditNicknameButton_C::ExecuteUbergraph_EditNicknameButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditNicknameButton_C", "ExecuteUbergraph_EditNicknameButton");

	Params::UEditNicknameButton_C_ExecuteUbergraph_EditNicknameButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


