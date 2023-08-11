#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xDC0 - 0xDA0)
// BlueprintGeneratedClass GA_Athena_FloppingRabbit.GA_Athena_FloppingRabbit_C
class UGA_Athena_FloppingRabbit_C : public UGA_ThrowConsumable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          T_Active;                                          // 0xDA8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_InWorld;                                         // 0xDB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CastMontageWeapon;                                 // 0xDB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_FloppingRabbit_C");
		return Clss;
	}

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_1, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void OnNotifyEnd_27A3BC8E4EB0B07EA2FD509EEE97AFC7(class FName NotifyName);
	void OnNotifyBegin_27A3BC8E4EB0B07EA2FD509EEE97AFC7(class FName NotifyName);
	void OnInterrupted_27A3BC8E4EB0B07EA2FD509EEE97AFC7(class FName NotifyName);
	void OnBlendOut_27A3BC8E4EB0B07EA2FD509EEE97AFC7(class FName NotifyName);
	void OnCompleted_27A3BC8E4EB0B07EA2FD509EEE97AFC7(class FName NotifyName);
	void K2_ActivateAbility();
	void ThrowMontageStarted();
	void ExecuteUbergraph_GA_Athena_FloppingRabbit(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess_1, class APrj_Athena_FloppingRabbit_C* K2Node_DynamicCast_AsPrj_Athena_Flopping_Rabbit, bool K2Node_DynamicCast_bSuccess_2, class FName K2Node_CustomEvent_NotifyName_4, bool CallFunc_IsServer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
