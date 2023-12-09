#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActivityBrowserTile.ActivityBrowserTile_C
// (None)

class UClass* UActivityBrowserTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivityBrowserTile_C");

	return Clss;
}


// ActivityBrowserTile_C ActivityBrowserTile.Default__ActivityBrowserTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActivityBrowserTile_C* UActivityBrowserTile_C::GetDefaultObj()
{
	static class UActivityBrowserTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivityBrowserTile_C*>(UActivityBrowserTile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActivityBrowserTile.ActivityBrowserTile_C.Set Disabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivityBrowserTile_C::Set_Disabled(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserTile_C", "Set Disabled");

	Params::UActivityBrowserTile_C_Set_Disabled_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityBrowserTile.ActivityBrowserTile_C.Set Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivityBrowserTile_C::Set_Enabled(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserTile_C", "Set Enabled");

	Params::UActivityBrowserTile_C_Set_Enabled_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityBrowserTile.ActivityBrowserTile_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActivityBrowserTile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserTile_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActivityBrowserTile.ActivityBrowserTile_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActivityBrowserTile_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserTile_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActivityBrowserTile.ActivityBrowserTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UActivityBrowserTile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserTile_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActivityBrowserTile.ActivityBrowserTile_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActivityBrowserTile_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserTile_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActivityBrowserTile.ActivityBrowserTile_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UActivityBrowserTile_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserTile_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActivityBrowserTile.ActivityBrowserTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActivityBrowserTile_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserTile_C", "PreConstruct");

	Params::UActivityBrowserTile_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityBrowserTile.ActivityBrowserTile_C.ExecuteUbergraph_ActivityBrowserTile
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivityBrowserTile_C::ExecuteUbergraph_ActivityBrowserTile(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActivityBrowserTile_C", "ExecuteUbergraph_ActivityBrowserTile");

	Params::UActivityBrowserTile_C_ExecuteUbergraph_ActivityBrowserTile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


