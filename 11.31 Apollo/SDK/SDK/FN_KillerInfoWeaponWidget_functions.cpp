#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass KillerInfoWeaponWidget.KillerInfoWeaponWidget_C
// (None)

class UClass* UKillerInfoWeaponWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KillerInfoWeaponWidget_C");

	return Clss;
}


// KillerInfoWeaponWidget_C KillerInfoWeaponWidget.Default__KillerInfoWeaponWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKillerInfoWeaponWidget_C* UKillerInfoWeaponWidget_C::GetDefaultObj()
{
	static class UKillerInfoWeaponWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKillerInfoWeaponWidget_C*>(UKillerInfoWeaponWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KillerInfoWeaponWidget.KillerInfoWeaponWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKillerInfoWeaponWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerInfoWeaponWidget_C", "PreConstruct");

	Params::UKillerInfoWeaponWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KillerInfoWeaponWidget.KillerInfoWeaponWidget_C.Set Icon And Name
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Weapon_Icon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   WID                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillerInfoWeaponWidget_C::Set_Icon_And_Name(class UTexture2D* Weapon_Icon, class UFortWeaponItemDefinition* WID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerInfoWeaponWidget_C", "Set Icon And Name");

	Params::UKillerInfoWeaponWidget_C_Set_Icon_And_Name_Params Parms{};

	Parms.Weapon_Icon = Weapon_Icon;
	Parms.WID = WID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KillerInfoWeaponWidget.KillerInfoWeaponWidget_C.Colorize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortRarity             Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillerInfoWeaponWidget_C::Colorize(enum class EFortRarity Rarity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerInfoWeaponWidget_C", "Colorize");

	Params::UKillerInfoWeaponWidget_C_Colorize_Params Parms{};

	Parms.Rarity = Rarity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KillerInfoWeaponWidget.KillerInfoWeaponWidget_C.ExecuteUbergraph_KillerInfoWeaponWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             K2Node_CustomEvent_Rarity                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_Weapon_Icon                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   K2Node_CustomEvent_WID                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue_1                           (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UKillerInfoWeaponWidget_C::ExecuteUbergraph_KillerInfoWeaponWidget(int32 EntryPoint, enum class EFortRarity K2Node_CustomEvent_Rarity, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UTexture2D* K2Node_CustomEvent_Weapon_Icon, class UFortWeaponItemDefinition* K2Node_CustomEvent_WID, bool K2Node_Event_IsDesignTime, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerInfoWeaponWidget_C", "ExecuteUbergraph_KillerInfoWeaponWidget");

	Params::UKillerInfoWeaponWidget_C_ExecuteUbergraph_KillerInfoWeaponWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Rarity = K2Node_CustomEvent_Rarity;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CustomEvent_Weapon_Icon = K2Node_CustomEvent_Weapon_Icon;
	Parms.K2Node_CustomEvent_WID = K2Node_CustomEvent_WID;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue_1 = CallFunc_BPGetRarityData_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


