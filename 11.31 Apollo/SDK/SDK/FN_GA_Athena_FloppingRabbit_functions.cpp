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


// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_Athena_FloppingRabbit_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_1, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_FloppingRabbit_C", "K2_CanActivateAbility");

	Params::UGA_Athena_FloppingRabbit_C_K2_CanActivateAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput = CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue = CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_1 = CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_1;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_1 = CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = Parms.RelevantTags;

	return Parms.ReturnValue;

}


// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnNotifyEnd_27A3BC8E4EB0B07EA2FD509EEE97AFC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_FloppingRabbit_C::OnNotifyEnd_27A3BC8E4EB0B07EA2FD509EEE97AFC7(class FName NotifyName)
{
	static auto Func = Class->GetFunction("GA_Athena_FloppingRabbit_C", "OnNotifyEnd_27A3BC8E4EB0B07EA2FD509EEE97AFC7");

	Params::UGA_Athena_FloppingRabbit_C_OnNotifyEnd_27A3BC8E4EB0B07EA2FD509EEE97AFC7_Params Parms;

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnNotifyBegin_27A3BC8E4EB0B07EA2FD509EEE97AFC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_FloppingRabbit_C::OnNotifyBegin_27A3BC8E4EB0B07EA2FD509EEE97AFC7(class FName NotifyName)
{
	static auto Func = Class->GetFunction("GA_Athena_FloppingRabbit_C", "OnNotifyBegin_27A3BC8E4EB0B07EA2FD509EEE97AFC7");

	Params::UGA_Athena_FloppingRabbit_C_OnNotifyBegin_27A3BC8E4EB0B07EA2FD509EEE97AFC7_Params Parms;

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnInterrupted_27A3BC8E4EB0B07EA2FD509EEE97AFC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_FloppingRabbit_C::OnInterrupted_27A3BC8E4EB0B07EA2FD509EEE97AFC7(class FName NotifyName)
{
	static auto Func = Class->GetFunction("GA_Athena_FloppingRabbit_C", "OnInterrupted_27A3BC8E4EB0B07EA2FD509EEE97AFC7");

	Params::UGA_Athena_FloppingRabbit_C_OnInterrupted_27A3BC8E4EB0B07EA2FD509EEE97AFC7_Params Parms;

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnBlendOut_27A3BC8E4EB0B07EA2FD509EEE97AFC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_FloppingRabbit_C::OnBlendOut_27A3BC8E4EB0B07EA2FD509EEE97AFC7(class FName NotifyName)
{
	static auto Func = Class->GetFunction("GA_Athena_FloppingRabbit_C", "OnBlendOut_27A3BC8E4EB0B07EA2FD509EEE97AFC7");

	Params::UGA_Athena_FloppingRabbit_C_OnBlendOut_27A3BC8E4EB0B07EA2FD509EEE97AFC7_Params Parms;

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.OnCompleted_27A3BC8E4EB0B07EA2FD509EEE97AFC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_FloppingRabbit_C::OnCompleted_27A3BC8E4EB0B07EA2FD509EEE97AFC7(class FName NotifyName)
{
	static auto Func = Class->GetFunction("GA_Athena_FloppingRabbit_C", "OnCompleted_27A3BC8E4EB0B07EA2FD509EEE97AFC7");

	Params::UGA_Athena_FloppingRabbit_C_OnCompleted_27A3BC8E4EB0B07EA2FD509EEE97AFC7_Params Parms;

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_FloppingRabbit_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_FloppingRabbit_C", "K2_ActivateAbility");

	Params::UGA_Athena_FloppingRabbit_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.ThrowMontageStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_FloppingRabbit_C::ThrowMontageStarted()
{
	static auto Func = Class->GetFunction("GA_Athena_FloppingRabbit_C", "ThrowMontageStarted");

	Params::UGA_Athena_FloppingRabbit_C_ThrowMontageStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C.ExecuteUbergraph_GA_Athena_FloppingRabbit
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_FloppingRabbit_Weap_Athena_C*K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APrj_Athena_FloppingRabbit_C*K2Node_DynamicCast_AsPrj_Athena_Flopping_Rabbit                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_FloppingRabbit_C::ExecuteUbergraph_GA_Athena_FloppingRabbit(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess_1, class APrj_Athena_FloppingRabbit_C* K2Node_DynamicCast_AsPrj_Athena_Flopping_Rabbit, bool K2Node_DynamicCast_bSuccess_2, class FName K2Node_CustomEvent_NotifyName_4, bool CallFunc_IsServer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_FloppingRabbit_C", "ExecuteUbergraph_GA_Athena_FloppingRabbit");

	Params::UGA_Athena_FloppingRabbit_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput = CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput;
	Parms.CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue = CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena = K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsPrj_Athena_Flopping_Rabbit = K2Node_DynamicCast_AsPrj_Athena_Flopping_Rabbit;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
