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


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetColorBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleMaterialProgressBar_C::SetColorBackground(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("SimpleMaterialProgressBar_C", "SetColorBackground");

	Params::USimpleMaterialProgressBar_C_SetColorBackground_Params Parms;

	Parms.Value = Value;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetColorB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleMaterialProgressBar_C::SetColorB(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("SimpleMaterialProgressBar_C", "SetColorB");

	Params::USimpleMaterialProgressBar_C_SetColorB_Params Parms;

	Parms.Value = Value;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetColorA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleMaterialProgressBar_C::SetColorA(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("SimpleMaterialProgressBar_C", "SetColorA");

	Params::USimpleMaterialProgressBar_C_SetColorA_Params Parms;

	Parms.Value = Value;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleMaterialProgressBar_C::SetProgress(float Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("SimpleMaterialProgressBar_C", "SetProgress");

	Params::USimpleMaterialProgressBar_C_SetProgress_Params Parms;

	Parms.Value = Value;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USimpleMaterialProgressBar_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("SimpleMaterialProgressBar_C", "PreConstruct");

	Params::USimpleMaterialProgressBar_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USimpleMaterialProgressBar_C::Construct()
{
	static auto Func = Class->GetFunction("SimpleMaterialProgressBar_C", "Construct");

	Params::USimpleMaterialProgressBar_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.AnimateProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartAmount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EndAmount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AnimSpeed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleMaterialProgressBar_C::AnimateProgress(float StartAmount, float EndAmount, float AnimSpeed)
{
	static auto Func = Class->GetFunction("SimpleMaterialProgressBar_C", "AnimateProgress");

	Params::USimpleMaterialProgressBar_C_AnimateProgress_Params Parms;

	Parms.StartAmount = StartAmount;
	Parms.EndAmount = EndAmount;
	Parms.AnimSpeed = AnimSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.EventFillFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USimpleMaterialProgressBar_C::EventFillFinished()
{
	static auto Func = Class->GetFunction("SimpleMaterialProgressBar_C", "EventFillFinished");

	Params::USimpleMaterialProgressBar_C_EventFillFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.ExecuteUbergraph_SimpleMaterialProgressBar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartAmount                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_EndAmount                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_AnimSpeed                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USimpleMaterialProgressBar_C::ExecuteUbergraph_SimpleMaterialProgressBar(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_CustomEvent_StartAmount, float K2Node_CustomEvent_EndAmount, float K2Node_CustomEvent_AnimSpeed, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("SimpleMaterialProgressBar_C", "ExecuteUbergraph_SimpleMaterialProgressBar");

	Params::USimpleMaterialProgressBar_C_ExecuteUbergraph_SimpleMaterialProgressBar_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CustomEvent_StartAmount = K2Node_CustomEvent_StartAmount;
	Parms.K2Node_CustomEvent_EndAmount = K2Node_CustomEvent_EndAmount;
	Parms.K2Node_CustomEvent_AnimSpeed = K2Node_CustomEvent_AnimSpeed;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SimpleMaterialProgressBar.SimpleMaterialProgressBar_C.FinishedFillDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void USimpleMaterialProgressBar_C::FinishedFillDispatcher__DelegateSignature()
{
	static auto Func = Class->GetFunction("SimpleMaterialProgressBar_C", "FinishedFillDispatcher__DelegateSignature");

	Params::USimpleMaterialProgressBar_C_FinishedFillDispatcher__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
