#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass KillerInfoWidget.KillerInfoWidget_C
// (None)

class UClass* UKillerInfoWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KillerInfoWidget_C");

	return Clss;
}


// KillerInfoWidget_C KillerInfoWidget.Default__KillerInfoWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKillerInfoWidget_C* UKillerInfoWidget_C::GetDefaultObj()
{
	static class UKillerInfoWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKillerInfoWidget_C*>(UKillerInfoWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KillerInfoWidget.KillerInfoWidget_C.SetKillerName
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UKillerInfoWidget_C::SetKillerName(const class FString& PlayerName, const class FString& PlayerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerInfoWidget_C", "SetKillerName");

	Params::UKillerInfoWidget_C_SetKillerName_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.PlayerID = PlayerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KillerInfoWidget.KillerInfoWidget_C.SetKillerWeaponIconAndName
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  IconTexture                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   ItemDef                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillerInfoWidget_C::SetKillerWeaponIconAndName(class UTexture2D* IconTexture, class UFortWeaponItemDefinition* ItemDef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerInfoWidget_C", "SetKillerWeaponIconAndName");

	Params::UKillerInfoWidget_C_SetKillerWeaponIconAndName_Params Parms{};

	Parms.IconTexture = IconTexture;
	Parms.ItemDef = ItemDef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KillerInfoWidget.KillerInfoWidget_C.SetKillerHealthAndShield
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HealthPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ShieldPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillerInfoWidget_C::SetKillerHealthAndShield(float HealthPercent, float ShieldPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerInfoWidget_C", "SetKillerHealthAndShield");

	Params::UKillerInfoWidget_C_SetKillerHealthAndShield_Params Parms{};

	Parms.HealthPercent = HealthPercent;
	Parms.ShieldPercent = ShieldPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KillerInfoWidget.KillerInfoWidget_C.SetNumOfKillerKills
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NumOfKillers                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillerInfoWidget_C::SetNumOfKillerKills(int32 NumOfKillers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerInfoWidget_C", "SetNumOfKillerKills");

	Params::UKillerInfoWidget_C_SetNumOfKillerKills_Params Parms{};

	Parms.NumOfKillers = NumOfKillers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KillerInfoWidget.KillerInfoWidget_C.ExecuteUbergraph_KillerInfoWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_PlayerName                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_PlayerID                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class UTexture2D*                  K2Node_Event_IconTexture                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   K2Node_Event_ItemDef                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HealthPercent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ShieldPercent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NumOfKillers                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillerInfoWidget_C::ExecuteUbergraph_KillerInfoWidget(int32 EntryPoint, const class FString& K2Node_Event_PlayerName, const class FString& K2Node_Event_PlayerID, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UTexture2D* K2Node_Event_IconTexture, class UFortWeaponItemDefinition* K2Node_Event_ItemDef, float K2Node_Event_HealthPercent, float K2Node_Event_ShieldPercent, int32 K2Node_Event_NumOfKillers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerInfoWidget_C", "ExecuteUbergraph_KillerInfoWidget");

	Params::UKillerInfoWidget_C_ExecuteUbergraph_KillerInfoWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerName = K2Node_Event_PlayerName;
	Parms.K2Node_Event_PlayerID = K2Node_Event_PlayerID;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_Event_IconTexture = K2Node_Event_IconTexture;
	Parms.K2Node_Event_ItemDef = K2Node_Event_ItemDef;
	Parms.K2Node_Event_HealthPercent = K2Node_Event_HealthPercent;
	Parms.K2Node_Event_ShieldPercent = K2Node_Event_ShieldPercent;
	Parms.K2Node_Event_NumOfKillers = K2Node_Event_NumOfKillers;

	UObject::ProcessEvent(Func, &Parms);

}

}


