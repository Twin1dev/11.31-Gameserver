#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemInspectionMainItemDetailsHostPanel.ItemInspectionMainItemDetailsHostPanel_C
// (None)

class UClass* UItemInspectionMainItemDetailsHostPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemInspectionMainItemDetailsHostPanel_C");

	return Clss;
}


// ItemInspectionMainItemDetailsHostPanel_C ItemInspectionMainItemDetailsHostPanel.Default__ItemInspectionMainItemDetailsHostPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemInspectionMainItemDetailsHostPanel_C* UItemInspectionMainItemDetailsHostPanel_C::GetDefaultObj()
{
	static class UItemInspectionMainItemDetailsHostPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemInspectionMainItemDetailsHostPanel_C*>(UItemInspectionMainItemDetailsHostPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemInspectionMainItemDetailsHostPanel.ItemInspectionMainItemDetailsHostPanel_C.GetItemDetailsVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectionMainItemDetailsHostPanel_C::GetItemDetailsVisibility(bool* IsVisible, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectionMainItemDetailsHostPanel_C", "GetItemDetailsVisibility");

	Params::UItemInspectionMainItemDetailsHostPanel_C_GetItemDetailsVisibility_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisible != nullptr)
		*IsVisible = Parms.IsVisible;

}


// Function ItemInspectionMainItemDetailsHostPanel.ItemInspectionMainItemDetailsHostPanel_C.SetItemsDetailsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DoNotShow                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HideInsteadOfCollapse                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseTransitionAnimation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectionMainItemDetailsHostPanel_C::SetItemsDetailsVisibility(bool DoNotShow, bool HideInsteadOfCollapse, bool UseTransitionAnimation, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectionMainItemDetailsHostPanel_C", "SetItemsDetailsVisibility");

	Params::UItemInspectionMainItemDetailsHostPanel_C_SetItemsDetailsVisibility_Params Parms{};

	Parms.DoNotShow = DoNotShow;
	Parms.HideInsteadOfCollapse = HideInsteadOfCollapse;
	Parms.UseTransitionAnimation = UseTransitionAnimation;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


