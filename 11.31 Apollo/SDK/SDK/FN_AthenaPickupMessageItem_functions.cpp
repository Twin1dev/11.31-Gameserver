#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaPickupMessageItem.AthenaPickupMessageItem_C
// (None)

class UClass* UAthenaPickupMessageItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaPickupMessageItem_C");

	return Clss;
}


// AthenaPickupMessageItem_C AthenaPickupMessageItem.Default__AthenaPickupMessageItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaPickupMessageItem_C* UAthenaPickupMessageItem_C::GetDefaultObj()
{
	static class UAthenaPickupMessageItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaPickupMessageItem_C*>(UAthenaPickupMessageItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupMessageItem_C::Setup(TSoftObjectPtr<class UTexture2D> Icon, int32 Count, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsAssetNull_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPickupMessageItem_C", "Setup");

	Params::UAthenaPickupMessageItem_C_Setup_Params Parms{};

	Parms.Icon = Icon;
	Parms.Count = Count;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


