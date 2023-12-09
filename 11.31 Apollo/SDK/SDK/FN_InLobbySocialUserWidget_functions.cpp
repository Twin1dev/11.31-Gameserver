#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InLobbySocialUserWidget.InLobbySocialUserWidget_C
// (None)

class UClass* UInLobbySocialUserWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InLobbySocialUserWidget_C");

	return Clss;
}


// InLobbySocialUserWidget_C InLobbySocialUserWidget.Default__InLobbySocialUserWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInLobbySocialUserWidget_C* UInLobbySocialUserWidget_C::GetDefaultObj()
{
	static class UInLobbySocialUserWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInLobbySocialUserWidget_C*>(UInLobbySocialUserWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InLobbySocialUserWidget.InLobbySocialUserWidget_C.OnNewLocation
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortPartyMemberLocationNewLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInLobbySocialUserWidget_C::OnNewLocation(enum class EFortPartyMemberLocation NewLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InLobbySocialUserWidget_C", "OnNewLocation");

	Params::UInLobbySocialUserWidget_C_OnNewLocation_Params Parms{};

	Parms.NewLocation = NewLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InLobbySocialUserWidget.InLobbySocialUserWidget_C.OnNewReadiness
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EGameReadiness          GameReadiness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInLobbySocialUserWidget_C::OnNewReadiness(enum class EGameReadiness GameReadiness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InLobbySocialUserWidget_C", "OnNewReadiness");

	Params::UInLobbySocialUserWidget_C_OnNewReadiness_Params Parms{};

	Parms.GameReadiness = GameReadiness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InLobbySocialUserWidget.InLobbySocialUserWidget_C.OnWidgetReset
// (Event, Protected, BlueprintEvent)
// Parameters:

void UInLobbySocialUserWidget_C::OnWidgetReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InLobbySocialUserWidget_C", "OnWidgetReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InLobbySocialUserWidget.InLobbySocialUserWidget_C.OnUserSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UInLobbySocialUserWidget_C::OnUserSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InLobbySocialUserWidget_C", "OnUserSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InLobbySocialUserWidget.InLobbySocialUserWidget_C.OnIsPartyLeaderChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsPartyLeader                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInLobbySocialUserWidget_C::OnIsPartyLeaderChanged(bool bIsPartyLeader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InLobbySocialUserWidget_C", "OnIsPartyLeaderChanged");

	Params::UInLobbySocialUserWidget_C_OnIsPartyLeaderChanged_Params Parms{};

	Parms.bIsPartyLeader = bIsPartyLeader;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InLobbySocialUserWidget.InLobbySocialUserWidget_C.ExecuteUbergraph_InLobbySocialUserWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingFortnite_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// enum class EGameReadiness          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_9                                             (None)
// enum class EFortPartyMemberLocationK2Node_Event_NewLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameReadiness          K2Node_Event_GameReadiness                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyMemberLocationTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsPartyLeader                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInLobbySocialUserWidget_C::ExecuteUbergraph_InLobbySocialUserWidget(int32 EntryPoint, bool CallFunc_IsPlayingFortnite_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, enum class EGameReadiness Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, class FText Temp_text_Variable_9, enum class EFortPartyMemberLocation K2Node_Event_NewLocation, enum class EGameReadiness K2Node_Event_GameReadiness, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_Select_Default, enum class EFortPartyMemberLocation Temp_byte_Variable_3, class FText K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class FText K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bIsPartyLeader, enum class ESlateVisibility K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InLobbySocialUserWidget_C", "ExecuteUbergraph_InLobbySocialUserWidget");

	Params::UInLobbySocialUserWidget_C_ExecuteUbergraph_InLobbySocialUserWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsPlayingFortnite_ReturnValue = CallFunc_IsPlayingFortnite_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.K2Node_Event_NewLocation = K2Node_Event_NewLocation;
	Parms.K2Node_Event_GameReadiness = K2Node_Event_GameReadiness;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_bIsPartyLeader = K2Node_Event_bIsPartyLeader;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


