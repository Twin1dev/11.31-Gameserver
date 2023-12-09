#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass KeyboardPresetRotator.KeyboardPresetRotator_C
// (None)

class UClass* UKeyboardPresetRotator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyboardPresetRotator_C");

	return Clss;
}


// KeyboardPresetRotator_C KeyboardPresetRotator.Default__KeyboardPresetRotator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKeyboardPresetRotator_C* UKeyboardPresetRotator_C::GetDefaultObj()
{
	static class UKeyboardPresetRotator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyboardPresetRotator_C*>(UKeyboardPresetRotator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Show Param Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::Show_Param_Name(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardPresetRotator_C", "Show Param Name");

	Params::UKeyboardPresetRotator_C_Show_Param_Name_Params Parms{};

	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Update Size
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   LargeSize                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   SmallSize                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::Update_Size(const struct FVector2D& LargeSize, const struct FVector2D& SmallSize, int32 Temp_int_Variable, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue_2, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, bool Temp_bool_Variable_2, const struct FVector2D& K2Node_Select_Default_1, const struct FVector2D& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardPresetRotator_C", "Update Size");

	Params::UKeyboardPresetRotator_C_Update_Size_Params Parms{};

	Parms.LargeSize = LargeSize;
	Parms.SmallSize = SmallSize;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue_1 = CallFunc_IsMobileGame_ReturnValue_1;
	Parms.CallFunc_IsMobileGame_ReturnValue_2 = CallFunc_IsMobileGame_ReturnValue_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UKeyboardPresetRotator_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardPresetRotator_C", "OnFocusReceived");

	Params::UKeyboardPresetRotator_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Update Options
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKeyboardPresetRotator_C::Update_Options(TArray<class FText>& NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardPresetRotator_C", "Update Options");

	Params::UKeyboardPresetRotator_C_Update_Options_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Center On Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::Center_On_Widget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardPresetRotator_C", "Center On Widget");

	Params::UKeyboardPresetRotator_C_Center_On_Widget_Params Parms{};

	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription(None)
// class FText                        CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription(None)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetNames (ZeroConstructor, ReferenceParm)
// TArray<class FText>                CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames(ZeroConstructor, ReferenceParm)

void UKeyboardPresetRotator_C::Initialize(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription, class FText CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription, enum class ESubGame CallFunc_GetSubGame_ReturnValue, TArray<class FString>& CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetNames, TArray<class FText>& CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardPresetRotator_C", "Initialize");

	Params::UKeyboardPresetRotator_C_Initialize_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription = CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription;
	Parms.CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription = CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetNames = CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetNames;
	Parms.CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames = CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Update Row Selector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Currently_Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::Update_Row_Selector(int32 Currently_Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardPresetRotator_C", "Update Row Selector");

	Params::UKeyboardPresetRotator_C_Update_Row_Selector_Params Parms{};

	Parms.Currently_Selected = Currently_Selected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UKeyboardPresetRotator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardPresetRotator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardPresetRotator_C", "BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature");

	Params::UKeyboardPresetRotator_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardPresetRotator_C", "BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UKeyboardPresetRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKeyboardPresetRotator_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardPresetRotator_C", "BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");

	Params::UKeyboardPresetRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKeyboardPresetRotator_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardPresetRotator_C", "PreConstruct");

	Params::UKeyboardPresetRotator_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeyboardPresetRotator.KeyboardPresetRotator_C.ExecuteUbergraph_KeyboardPresetRotator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription(None)
// class FText                        CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription(None)

void UKeyboardPresetRotator_C::ExecuteUbergraph_KeyboardPresetRotator(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Value, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription, class FText CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyboardPresetRotator_C", "ExecuteUbergraph_KeyboardPresetRotator");

	Params::UKeyboardPresetRotator_C_ExecuteUbergraph_KeyboardPresetRotator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription = CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription;
	Parms.CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription = CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription;

	UObject::ProcessEvent(Func, &Parms);

}

}


