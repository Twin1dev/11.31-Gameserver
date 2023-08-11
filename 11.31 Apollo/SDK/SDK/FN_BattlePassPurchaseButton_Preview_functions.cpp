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


// Function BattlePassPurchaseButton_Preview.BattlePassPurchaseButton_Preview_C.OnSetData
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassPurchaseButtonLayoutLayoutType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPurchaseButton_Preview_C::OnSetData(enum class EBattlePassPurchaseButtonLayout LayoutType)
{
	static auto Func = Class->GetFunction("BattlePassPurchaseButton_Preview_C", "OnSetData");

	Params::UBattlePassPurchaseButton_Preview_C_OnSetData_Params Parms;

	Parms.LayoutType = LayoutType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPurchaseButton_Preview.BattlePassPurchaseButton_Preview_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPurchaseButton_Preview_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("BattlePassPurchaseButton_Preview_C", "BP_OnHovered");

	Params::UBattlePassPurchaseButton_Preview_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPurchaseButton_Preview.BattlePassPurchaseButton_Preview_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPurchaseButton_Preview_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("BattlePassPurchaseButton_Preview_C", "BP_OnUnhovered");

	Params::UBattlePassPurchaseButton_Preview_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPurchaseButton_Preview.BattlePassPurchaseButton_Preview_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassPurchaseButton_Preview_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BattlePassPurchaseButton_Preview_C", "PreConstruct");

	Params::UBattlePassPurchaseButton_Preview_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPurchaseButton_Preview.BattlePassPurchaseButton_Preview_C.ExecuteUbergraph_BattlePassPurchaseButton_Preview
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBattlePassPurchaseButtonLayoutK2Node_Event_LayoutType                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPurchaseButton_Preview_C::ExecuteUbergraph_BattlePassPurchaseButton_Preview(int32 EntryPoint, enum class EBattlePassPurchaseButtonLayout K2Node_Event_LayoutType, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BattlePassPurchaseButton_Preview_C", "ExecuteUbergraph_BattlePassPurchaseButton_Preview");

	Params::UBattlePassPurchaseButton_Preview_C_ExecuteUbergraph_BattlePassPurchaseButton_Preview_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_LayoutType = K2Node_Event_LayoutType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_2 = CallFunc_PlayAnimationForward_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_3 = CallFunc_PlayAnimationForward_ReturnValue_3;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_4 = CallFunc_PlayAnimationForward_ReturnValue_4;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
