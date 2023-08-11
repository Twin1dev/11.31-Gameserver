#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.UpdateVisuals
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortColorPalette           ColorPalette                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               bIsItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsBorderAnimated                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsHero                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortCosmeticItemCard_C::UpdateVisuals(struct FFortColorPalette& ColorPalette, bool bIsItem, bool bIsBorderAnimated, bool bIsHero)
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "UpdateVisuals");

	Params::UFortCosmeticItemCard_C_UpdateVisuals_Params Parms;

	Parms.ColorPalette = ColorPalette;
	Parms.bIsItem = bIsItem;
	Parms.bIsBorderAnimated = bIsBorderAnimated;
	Parms.bIsHero = bIsHero;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.UpdateItemIconVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCosmeticItemCard_C::UpdateItemIconVisibility()
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "UpdateItemIconVisibility");

	Params::UFortCosmeticItemCard_C_UpdateItemIconVisibility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleSizeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortCosmeticItemCard_C::HandleSizeChanged()
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "HandleSizeChanged");

	Params::UFortCosmeticItemCard_C_HandleSizeChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.ExecuteUbergraph_FortCosmeticItemCard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortColorPalette           K2Node_Event_ColorPalette                                        (ConstParm, NoDestructor)
// bool                               K2Node_Event_bIsItem                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsBorderAnimated                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsHero                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortCosmeticItemCard_C::ExecuteUbergraph_FortCosmeticItemCard(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, const struct FFortColorPalette& K2Node_Event_ColorPalette, bool K2Node_Event_bIsItem, bool K2Node_Event_bIsBorderAnimated, bool K2Node_Event_bIsHero, float CallFunc_Conv_BoolToFloat_ReturnValue_1, float CallFunc_Conv_BoolToFloat_ReturnValue_2, float CallFunc_Conv_BoolToFloat_ReturnValue_3)
{
	static auto Func = Class->GetFunction("FortCosmeticItemCard_C", "ExecuteUbergraph_FortCosmeticItemCard");

	Params::UFortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.K2Node_Event_ColorPalette = K2Node_Event_ColorPalette;
	Parms.K2Node_Event_bIsItem = K2Node_Event_bIsItem;
	Parms.K2Node_Event_bIsBorderAnimated = K2Node_Event_bIsBorderAnimated;
	Parms.K2Node_Event_bIsHero = K2Node_Event_bIsHero;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_1 = CallFunc_Conv_BoolToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_2 = CallFunc_Conv_BoolToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue_3 = CallFunc_Conv_BoolToFloat_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
