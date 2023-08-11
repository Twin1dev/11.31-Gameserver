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

// 0xC (0x808 - 0x7FC)
// BlueprintGeneratedClass GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C
class AGC_Athena_OutsideSafeZone_Stage03_C : public AGC_Athena_OutsideSafeZone_C
{
public:
	uint8                                        Pad_43F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x800(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Athena_OutsideSafeZone_Stage03_C");
		return Clss;
	}

	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void On_Distant_Lightning_Spawn(class FName EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03(int32 EntryPoint, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UParticleSystemComponent* CallFunc_Array_Get_Item, class FName K2Node_CustomEvent_EventName, float K2Node_CustomEvent_EmitterTime, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_CustomEvent_Velocity, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
