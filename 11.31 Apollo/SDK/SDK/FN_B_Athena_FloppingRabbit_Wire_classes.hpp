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

// 0x118 (0x3A0 - 0x288)
// BlueprintGeneratedClass B_Athena_FloppingRabbit_Wire.B_Athena_FloppingRabbit_Wire_C
class AB_Athena_FloppingRabbit_Wire_C : public AFortHookGunRope
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       HookOffset;                                        // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Hook;                                              // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       ItemSocket;                                        // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Tight_NewTrack_0_2BE8D2B34AFDAA1683CD80A41CD171EB; // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Tight__Direction_2BE8D2B34AFDAA1683CD80A41CD171EB; // 0x2B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EEA[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    Tight;                                             // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Reel_In_Tighten_1E0649734E07457DB41A579E4AB855B8;  // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Reel_In_Reel_Lerp_Controller_1E0649734E07457DB41A579E4AB855B8; // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Reel_In__Direction_1E0649734E07457DB41A579E4AB855B8; // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    Reel_In;                                           // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APrj_Athena_FloppingRabbit_C*          Projectile_Actor;                                  // 0x2D8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x2E0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USoundBase*                            ReelSound;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ReattachSound;                                     // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RopeActiveTag;                                     // 0x2F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          BlockIncomingPickups;                              // 0x300(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 Change_Equipment_Tag;                              // 0x308(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ReelinPlayRate;                                    // 0x328(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Stop;                                            // 0x32C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EEC[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAnimMontage*                          ReelMontage;                                       // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Toss;                                              // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EED[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               HookRelativeStartingLoc;                           // 0x344(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              HookRelativeStartingRot;                           // 0x350(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CatchParticleOn;                                   // 0x35C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_4EEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAnimMontage*                          ReelWeaponMontage;                                 // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_FlopperSpawn;                                    // 0x368(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                            Sound_Pickup;                                      // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPickup*>                   PickedUpPickups;                                   // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Athena_FloppingRabbit_Wire_C");
		return Clss;
	}

	void OnRep_CatchParticleOn();
	void Reel_In__FinishedFunc();
	void Reel_In__UpdateFunc();
	void Tight__FinishedFunc();
	void Tight__UpdateFunc();
	void OnNotifyEnd_B5133DFD4E421DB08F1ED09C5E2197B4(class FName NotifyName);
	void OnNotifyBegin_B5133DFD4E421DB08F1ED09C5E2197B4(class FName NotifyName);
	void OnInterrupted_B5133DFD4E421DB08F1ED09C5E2197B4(class FName NotifyName);
	void OnBlendOut_B5133DFD4E421DB08F1ED09C5E2197B4(class FName NotifyName);
	void OnCompleted_B5133DFD4E421DB08F1ED09C5E2197B4(class FName NotifyName);
	void TightenRope();
	void PlayMontage();
	void DropAndDestroy();
	void AttachNonFishingPickups(class AFortPickup*& InputPin);
	void StartReeling();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Athena_FloppingRabbit_Wire(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_1, class FName K2Node_CustomEvent_NotifyName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class FName K2Node_CustomEvent_NotifyName_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Array_Index_Variable, class FName K2Node_CustomEvent_NotifyName_3, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess, const struct FFortItemEntry& CallFunc_GetItemEntry_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UFortWeaponItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Item_Definition, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_4, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class AFortPickup* K2Node_CustomEvent_InputPin, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_DistanceBetweenTwoVectors_Distance, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
