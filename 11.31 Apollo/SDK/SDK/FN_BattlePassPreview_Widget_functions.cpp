#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassPreview_Widget.BattlePassPreview_Widget_C
// (None)

class UClass* UBattlePassPreview_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassPreview_Widget_C");

	return Clss;
}


// BattlePassPreview_Widget_C BattlePassPreview_Widget.Default__BattlePassPreview_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassPreview_Widget_C* UBattlePassPreview_Widget_C::GetDefaultObj()
{
	static class UBattlePassPreview_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassPreview_Widget_C*>(UBattlePassPreview_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.RenderSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_Widget_C::RenderSwap(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPreview_Widget_C", "RenderSwap");

	Params::UBattlePassPreview_Widget_C_RenderSwap_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.Unhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePassPreview_Widget_C::Unhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPreview_Widget_C", "Unhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePassPreview_Widget_C::Hovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPreview_Widget_C", "Hovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.RefreshVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_Widget_C::RefreshVisuals(const struct FLinearColor& NewLocalVar_0, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPreview_Widget_C", "RefreshVisuals");

	Params::UBattlePassPreview_Widget_C_RefreshVisuals_Params Parms{};

	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue_1 = CallFunc_GetDynamicFontMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue_2 = CallFunc_GetDynamicFontMaterial_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattlePassPreview_Widget_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPreview_Widget_C", "OnMouseLeave");

	Params::UBattlePassPreview_Widget_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattlePassPreview_Widget_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPreview_Widget_C", "OnMouseEnter");

	Params::UBattlePassPreview_Widget_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassPreview_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPreview_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassPreview_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPreview_Widget_C", "PreConstruct");

	Params::UBattlePassPreview_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.OnSetDataForCharacter
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsReadyToUnlock                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              LayoutPosition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_Widget_C::OnSetDataForCharacter(bool bIsReadyToUnlock, float LayoutPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPreview_Widget_C", "OnSetDataForCharacter");

	Params::UBattlePassPreview_Widget_C_OnSetDataForCharacter_Params Parms{};

	Parms.bIsReadyToUnlock = bIsReadyToUnlock;
	Parms.LayoutPosition = LayoutPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.OnSetDataForCurrency
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              LayoutPosition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_Widget_C::OnSetDataForCurrency(float LayoutPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPreview_Widget_C", "OnSetDataForCurrency");

	Params::UBattlePassPreview_Widget_C_OnSetDataForCurrency_Params Parms{};

	Parms.LayoutPosition = LayoutPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.ExecuteUbergraph_BattlePassPreview_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsReadyToUnlock                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_LayoutPosition_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_LayoutPosition                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)

void UBattlePassPreview_Widget_C::ExecuteUbergraph_BattlePassPreview_Widget(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsReadyToUnlock, float K2Node_Event_LayoutPosition_1, float K2Node_Event_LayoutPosition, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FPointerEvent& K2Node_Event_MouseEvent_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassPreview_Widget_C", "ExecuteUbergraph_BattlePassPreview_Widget");

	Params::UBattlePassPreview_Widget_C_ExecuteUbergraph_BattlePassPreview_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bIsReadyToUnlock = K2Node_Event_bIsReadyToUnlock;
	Parms.K2Node_Event_LayoutPosition_1 = K2Node_Event_LayoutPosition_1;
	Parms.K2Node_Event_LayoutPosition = K2Node_Event_LayoutPosition;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


