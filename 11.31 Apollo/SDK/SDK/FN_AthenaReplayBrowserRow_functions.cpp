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


// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserRow_C::BP_OnSelected()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRow_C", "BP_OnSelected");

	Params::UAthenaReplayBrowserRow_C_BP_OnSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserRow_C::BP_OnDeselected()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRow_C", "BP_OnDeselected");

	Params::UAthenaReplayBrowserRow_C_BP_OnDeselected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserRow_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRow_C", "BP_OnHovered");

	Params::UAthenaReplayBrowserRow_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaReplayBrowserRow_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRow_C", "BP_OnUnhovered");

	Params::UAthenaReplayBrowserRow_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.BP_HandleReplayStateSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSaved                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Bold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bCorrupt                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReplayBrowserRow_C::BP_HandleReplayStateSet(bool bSaved, bool Bold, bool bCorrupt)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRow_C", "BP_HandleReplayStateSet");

	Params::UAthenaReplayBrowserRow_C_BP_HandleReplayStateSet_Params Parms;

	Parms.bSaved = bSaved;
	Parms.Bold = Bold;
	Parms.bCorrupt = bCorrupt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReplayBrowserRow.AthenaReplayBrowserRow_C.ExecuteUbergraph_AthenaReplayBrowserRow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSaved                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bOld                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bCorrupt                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelected_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSelected_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReplayBrowserRow_C::ExecuteUbergraph_AthenaReplayBrowserRow(int32 EntryPoint, bool K2Node_Event_bSaved, bool K2Node_Event_bOld, bool K2Node_Event_bCorrupt, bool Temp_bool_Variable, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_GetSelected_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_GetSelected_ReturnValue_1, class UWidgetAnimation* K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static auto Func = Class->GetFunction("AthenaReplayBrowserRow_C", "ExecuteUbergraph_AthenaReplayBrowserRow");

	Params::UAthenaReplayBrowserRow_C_ExecuteUbergraph_AthenaReplayBrowserRow_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bSaved = K2Node_Event_bSaved;
	Parms.K2Node_Event_bOld = K2Node_Event_bOld;
	Parms.K2Node_Event_bCorrupt = K2Node_Event_bCorrupt;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue_1 = CallFunc_GetSelected_ReturnValue_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
