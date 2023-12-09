#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InGameSocialUserWidget.InGameSocialUserWidget_C
// (None)

class UClass* UInGameSocialUserWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InGameSocialUserWidget_C");

	return Clss;
}


// InGameSocialUserWidget_C InGameSocialUserWidget.Default__InGameSocialUserWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInGameSocialUserWidget_C* UInGameSocialUserWidget_C::GetDefaultObj()
{
	static class UInGameSocialUserWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInGameSocialUserWidget_C*>(UInGameSocialUserWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InGameSocialUserWidget.InGameSocialUserWidget_C.OnUserSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UInGameSocialUserWidget_C::OnUserSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InGameSocialUserWidget_C", "OnUserSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InGameSocialUserWidget.InGameSocialUserWidget_C.OnWidgetReset
// (Event, Protected, BlueprintEvent)
// Parameters:

void UInGameSocialUserWidget_C::OnWidgetReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InGameSocialUserWidget_C", "OnWidgetReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InGameSocialUserWidget.InGameSocialUserWidget_C.OnNewReadiness
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EGameReadiness          GameReadiness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInGameSocialUserWidget_C::OnNewReadiness(enum class EGameReadiness GameReadiness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InGameSocialUserWidget_C", "OnNewReadiness");

	Params::UInGameSocialUserWidget_C_OnNewReadiness_Params Parms{};

	Parms.GameReadiness = GameReadiness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InGameSocialUserWidget.InGameSocialUserWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInGameSocialUserWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InGameSocialUserWidget_C", "PreConstruct");

	Params::UInGameSocialUserWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InGameSocialUserWidget.InGameSocialUserWidget_C.OnIsPartyLeaderChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsPartyLeader                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInGameSocialUserWidget_C::OnIsPartyLeaderChanged(bool bIsPartyLeader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InGameSocialUserWidget_C", "OnIsPartyLeaderChanged");

	Params::UInGameSocialUserWidget_C_OnIsPartyLeaderChanged_Params Parms{};

	Parms.bIsPartyLeader = bIsPartyLeader;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InGameSocialUserWidget.InGameSocialUserWidget_C.ExecuteUbergraph_InGameSocialUserWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameReadiness          K2Node_Event_GameReadiness                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameReadiness          Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsPartyLeader                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInGameSocialUserWidget_C::ExecuteUbergraph_InGameSocialUserWidget(int32 EntryPoint, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EGameReadiness K2Node_Event_GameReadiness, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText Temp_text_Variable_2, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class EGameReadiness Temp_byte_Variable_2, bool K2Node_Event_IsDesignTime, class FText K2Node_Select_Default, float K2Node_Select_Default_1, bool K2Node_Event_bIsPartyLeader, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InGameSocialUserWidget_C", "ExecuteUbergraph_InGameSocialUserWidget");

	Params::UInGameSocialUserWidget_C_ExecuteUbergraph_InGameSocialUserWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_GameReadiness = K2Node_Event_GameReadiness;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Event_bIsPartyLeader = K2Node_Event_bIsPartyLeader;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


