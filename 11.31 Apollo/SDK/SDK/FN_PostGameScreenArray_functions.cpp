#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PostGameScreenArray.PostGameScreenArray_C
// (None)

class UClass* UPostGameScreenArray_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PostGameScreenArray_C");

	return Clss;
}


// PostGameScreenArray_C PostGameScreenArray.Default__PostGameScreenArray_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPostGameScreenArray_C* UPostGameScreenArray_C::GetDefaultObj()
{
	static class UPostGameScreenArray_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPostGameScreenArray_C*>(UPostGameScreenArray_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PostGameScreenArray.PostGameScreenArray_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPostGameScreenArray_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostGameScreenArray_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PostGameScreenArray.PostGameScreenArray_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPostGameScreenArray_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostGameScreenArray_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PostGameScreenArray.PostGameScreenArray_C.EventXPLayout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Placement                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPostGameScreenArray_C::EventXPLayout(class FName Placement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostGameScreenArray_C", "EventXPLayout");

	Params::UPostGameScreenArray_C_EventXPLayout_Params Parms{};

	Parms.Placement = Placement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PostGameScreenArray.PostGameScreenArray_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPostGameScreenArray_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostGameScreenArray_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PostGameScreenArray.PostGameScreenArray_C.EventToggleBlur
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPostGameScreenArray_C::EventToggleBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostGameScreenArray_C", "EventToggleBlur");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PostGameScreenArray.PostGameScreenArray_C.OnHUDScaleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HUDScale                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPostGameScreenArray_C::OnHUDScaleChanged(float HUDScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostGameScreenArray_C", "OnHUDScaleChanged");

	Params::UPostGameScreenArray_C_OnHUDScaleChanged_Params Parms{};

	Parms.HUDScale = HUDScale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PostGameScreenArray.PostGameScreenArray_C.OnCinematicBarStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECinematicBarState      NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPostGameScreenArray_C::OnCinematicBarStateChanged(enum class ECinematicBarState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostGameScreenArray_C", "OnCinematicBarStateChanged");

	Params::UPostGameScreenArray_C_OnCinematicBarStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PostGameScreenArray.PostGameScreenArray_C.ExecuteUbergraph_PostGameScreenArray
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1           (None)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_Placement                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_2           (None)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HUDScale                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECinematicBarState      K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPostGameScreenArray_C::ExecuteUbergraph_PostGameScreenArray(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_Placement, bool CallFunc_EqualEqual_NameName_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_2, class UFortHUDContext* CallFunc_GetContext_ReturnValue_2, float K2Node_Event_HUDScale, enum class ECinematicBarState K2Node_Event_NewState, bool K2Node_SwitchEnum_CmpSuccess, class UFortHUDContext* CallFunc_GetContext_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostGameScreenArray_C", "ExecuteUbergraph_PostGameScreenArray");

	Params::UPostGameScreenArray_C_ExecuteUbergraph_PostGameScreenArray_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1 = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_1;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Placement = K2Node_CustomEvent_Placement;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_2 = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue_2;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.K2Node_Event_HUDScale = K2Node_Event_HUDScale;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


