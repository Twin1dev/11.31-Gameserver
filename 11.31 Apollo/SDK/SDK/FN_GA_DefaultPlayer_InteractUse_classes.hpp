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
// BlueprintGeneratedClass GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C
class UGA_DefaultPlayer_InteractUse_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_DefaultPlayer_InteractUse_C");
		return Clss;
	}

	void OnCancelled_A513E1E044E129CC612DF5A23589BC9C();
	void OnInterrupted_A513E1E044E129CC612DF5A23589BC9C();
	void OnBlendOut_A513E1E044E129CC612DF5A23589BC9C();
	void OnCompleted_A513E1E044E129CC612DF5A23589BC9C();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_DefaultPlayer_InteractUse(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
