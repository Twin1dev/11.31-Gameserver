#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FireModeSelectTile.FireModeSelectTile_C
// (None)

class UClass* UFireModeSelectTile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FireModeSelectTile_C");

	return Clss;
}


// FireModeSelectTile_C FireModeSelectTile.Default__FireModeSelectTile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFireModeSelectTile_C* UFireModeSelectTile_C::GetDefaultObj()
{
	static class UFireModeSelectTile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFireModeSelectTile_C*>(UFireModeSelectTile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FireModeSelectTile.FireModeSelectTile_C.HandleSelectionBorderFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsHovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireModeSelectTile_C::HandleSelectionBorderFeedback(bool bIsSelected, bool bIsHovered, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "HandleSelectionBorderFeedback");

	Params::UFireModeSelectTile_C_HandleSelectionBorderFeedback_Params Parms{};

	Parms.bIsSelected = bIsSelected;
	Parms.bIsHovered = bIsHovered;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireModeSelectTile.FireModeSelectTile_C.StopMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMovieWidget_C*              K2Node_DynamicCast_AsMovie_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFireModeSelectTile_C::StopMovie(class UMovieWidget_C* K2Node_DynamicCast_AsMovie_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "StopMovie");

	Params::UFireModeSelectTile_C_StopMovie_Params Parms{};

	Parms.K2Node_DynamicCast_AsMovie_Widget = K2Node_DynamicCast_AsMovie_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireModeSelectTile.FireModeSelectTile_C.PlayMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMovieWidget_C*              K2Node_DynamicCast_AsMovie_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFireModeSelectTile_C::PlayMovie(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UMovieWidget_C* K2Node_DynamicCast_AsMovie_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "PlayMovie");

	Params::UFireModeSelectTile_C_PlayMovie_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsMovie_Widget = K2Node_DynamicCast_AsMovie_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireModeSelectTile.FireModeSelectTile_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFireModeSelectTile_C::Setup(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "Setup");

	Params::UFireModeSelectTile_C_Setup_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireModeSelectTile.FireModeSelectTile_C.Mark Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFireModeSelectTile_C::Mark_Selected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "Mark Selected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireModeSelectTile.FireModeSelectTile_C.PlayIntroOrOutro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayIntro                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireModeSelectTile_C::PlayIntroOrOutro(bool PlayIntro, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "PlayIntroOrOutro");

	Params::UFireModeSelectTile_C_PlayIntroOrOutro_Params Parms{};

	Parms.PlayIntro = PlayIntro;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireModeSelectTile.FireModeSelectTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFireModeSelectTile_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "PreConstruct");

	Params::UFireModeSelectTile_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireModeSelectTile.FireModeSelectTile_C.Save and Exit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UFireModeSelectTile_C::Save_and_Exit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "Save and Exit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireModeSelectTile.FireModeSelectTile_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_63_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireModeSelectTile_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent_63_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "BndEvt__SelectionButton_K2Node_ComponentBoundEvent_63_CommonButtonClicked__DelegateSignature");

	Params::UFireModeSelectTile_C_BndEvt__SelectionButton_K2Node_ComponentBoundEvent_63_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireModeSelectTile.FireModeSelectTile_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_91_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireModeSelectTile_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent_91_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "BndEvt__SelectionButton_K2Node_ComponentBoundEvent_91_CommonButtonClicked__DelegateSignature");

	Params::UFireModeSelectTile_C_BndEvt__SelectionButton_K2Node_ComponentBoundEvent_91_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireModeSelectTile.FireModeSelectTile_C.OnSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFireModeSelectTile_C::OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireModeSelectTile.FireModeSelectTile_C.OnDeselected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFireModeSelectTile_C::OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireModeSelectTile.FireModeSelectTile_C.BndEvt__SelectionButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireModeSelectTile_C::BndEvt__SelectionButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "BndEvt__SelectionButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UFireModeSelectTile_C_BndEvt__SelectionButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireModeSelectTile.FireModeSelectTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFireModeSelectTile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireModeSelectTile.FireModeSelectTile_C.SelectFireMode
// (Event, Public, BlueprintEvent)
// Parameters:

void UFireModeSelectTile_C::SelectFireMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "SelectFireMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FireModeSelectTile.FireModeSelectTile_C.ExecuteUbergraph_FireModeSelectTile
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUDLayoutToolContext*       CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFireModeAvailable_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFireModeSelectTile_C::ExecuteUbergraph_FireModeSelectTile(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility Temp_byte_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue_1, bool Temp_bool_Variable, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsFireModeAvailable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "ExecuteUbergraph_FireModeSelectTile");

	Params::UFireModeSelectTile_C_ExecuteUbergraph_FireModeSelectTile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsFireModeAvailable_ReturnValue = CallFunc_IsFireModeAvailable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireModeSelectTile.FireModeSelectTile_C.HandleDeselectTile__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFireModeSelectTile_C*       Tile                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireModeSelectTile_C::HandleDeselectTile__DelegateSignature(class UFireModeSelectTile_C* Tile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "HandleDeselectTile__DelegateSignature");

	Params::UFireModeSelectTile_C_HandleDeselectTile__DelegateSignature_Params Parms{};

	Parms.Tile = Tile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireModeSelectTile.FireModeSelectTile_C.HandleSelectConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFireModeSelectTile_C*       Tile                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireModeSelectTile_C::HandleSelectConfirmed__DelegateSignature(class UFireModeSelectTile_C* Tile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "HandleSelectConfirmed__DelegateSignature");

	Params::UFireModeSelectTile_C_HandleSelectConfirmed__DelegateSignature_Params Parms{};

	Parms.Tile = Tile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FireModeSelectTile.FireModeSelectTile_C.HandleFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFireModeSelectTile_C*       Tile                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFireModeSelectTile_C::HandleFocus__DelegateSignature(class UFireModeSelectTile_C* Tile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FireModeSelectTile_C", "HandleFocus__DelegateSignature");

	Params::UFireModeSelectTile_C_HandleFocus__DelegateSignature_Params Parms{};

	Parms.Tile = Tile;

	UObject::ProcessEvent(Func, &Parms);

}

}


