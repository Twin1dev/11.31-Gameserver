#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C
// (None)

class UClass* UBattlePassPurchaseButton_Track_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassPurchaseButton_Track_C");

	return Clss;
}


// BattlePassPurchaseButton_Track_C BattlePassPurchaseButton_Track.Default__BattlePassPurchaseButton_Track_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassPurchaseButton_Track_C* UBattlePassPurchaseButton_Track_C::GetDefaultObj()
{
	static class UBattlePassPurchaseButton_Track_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassPurchaseButton_Track_C*>(UBattlePassPurchaseButton_Track_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C.HandleText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)

void UBattlePassPurchaseButton_Track_C::HandleText(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseButton_Track_C", "HandleText");

	Params::UBattlePassPurchaseButton_Track_C_HandleText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPurchaseButton_Track_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseButton_Track_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPurchaseButton_Track_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseButton_Track_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassPurchaseButton_Track_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseButton_Track_C", "PreConstruct");

	Params::UBattlePassPurchaseButton_Track_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C.OnSetData
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassPurchaseButtonLayoutLayoutType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPurchaseButton_Track_C::OnSetData(enum class EBattlePassPurchaseButtonLayout LayoutType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseButton_Track_C", "OnSetData");

	Params::UBattlePassPurchaseButton_Track_C_OnSetData_Params Parms{};

	Parms.LayoutType = LayoutType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPurchaseButton_Track.BattlePassPurchaseButton_Track_C.ExecuteUbergraph_BattlePassPurchaseButton_Track
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBattlePassPurchaseButtonLayoutK2Node_Event_LayoutType                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassPurchaseButton_Track_C::ExecuteUbergraph_BattlePassPurchaseButton_Track(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, enum class EBattlePassPurchaseButtonLayout K2Node_Event_LayoutType, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPurchaseButton_Track_C", "ExecuteUbergraph_BattlePassPurchaseButton_Track");

	Params::UBattlePassPurchaseButton_Track_C_ExecuteUbergraph_BattlePassPurchaseButton_Track_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_2 = CallFunc_PlayAnimationForward_ReturnValue_2;
	Parms.K2Node_Event_LayoutType = K2Node_Event_LayoutType;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_3 = CallFunc_PlayAnimationForward_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


