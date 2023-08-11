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

// 0x8 (0xA38 - 0xA30)
// BlueprintGeneratedClass GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C
class UGA_Athena_HidingProp_JumpOut_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_HidingProp_JumpOut_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_HidingProp_JumpOut(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool Temp_bool_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, bool Temp_bool_Variable_2, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasMatchingGameplayTag_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
