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

// 0x70 (0xB70 - 0xB00)
// BlueprintGeneratedClass B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C
class AB_Athena_Pickaxe_DualWield_Generic_C : public AFortWeaponPickaxeDualWieldAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB00(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Equipped;                                          // 0xB08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EAttachmentRule                   IdleFX_Location_Rule;                              // 0xB09(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAttachmentRule                   Idle_FX_Rotation_Rule;                             // 0xB0A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAttachmentRule                   Idle_FX_Scale_Rule;                                // 0xB0B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAttachmentRule                   SwingFX_Location_Rule;                             // 0xB0C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAttachmentRule                   Swing_FX_Rotation_Rule;                            // 0xB0D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAttachmentRule                   Swing_FX_Scale_Rule;                               // 0xB0E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_547E[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UParticleSystemComponent*              Alteration_Ambient_PS;                             // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MeleeHeavy_ParticleSystem;                         // 0xB18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MeleeHeavy_PSC;                                    // 0xB20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  PokeAnimations;                                    // 0xB28(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         UseDestroyEffect;                                  // 0xB38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_547F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UParticleSystem*                       WeaponDurabilityDestroyEffect;                     // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffectIcon;                 // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Offhand_Alteration_Ambient_PS;                     // 0xB50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEquipPendingInstigator;                           // 0xB58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5480[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  Offhand_Socket_Name;                               // 0xB5C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5481[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAnimMontage*                          MontageReference;                                  // 0xB68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Athena_Pickaxe_DualWield_Generic_C");
		return Clss;
	}

	void Impact_Sequence(const struct FHitResult& Hit_Result, enum class EPhysicalSurface IMpact_Physical_Surface, class UFXSystemComponent* SpawnedPSC, const struct FRotator& FX_Combat_Rotation, const struct FVector& FX_Chest_Location, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Array_Contains_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Normal_ReturnValue_2, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromXY_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult);
	void PlayCQCPickaxeEnemyAudio(struct FHitResult& Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APawn* CallFunc_GetInstigator_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void SetWpnRarity(enum class EFortRarity Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, uint8 Temp_byte_Variable_4, uint8 Temp_byte_Variable_5, uint8 Temp_byte_Variable_6, uint8 Temp_byte_Variable_7, uint8 Temp_byte_Variable_8, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, uint8 K2Node_Select_Default, float CallFunc_Conv_ByteToFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue);
	void Unbind_Dual_Melee_Swing_Events(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class APawn* CallFunc_GetInstigator_ReturnValue_2, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void Bind_Dual_Melee_Swing_Events(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class APawn* CallFunc_GetInstigator_ReturnValue_2, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void Set_Active_Alteration_Idle_Particles(bool Active, bool Reset, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UserConstructionScript();
	void OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D(class UObject* Loaded);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void PlayRClickImpacts();
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void OnEquippedWeaponDestory();
	void OnWeaponAttached();
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void OnWeaponDetached();
	void OnInitWeaponCosmetics();
	void Swing_Left();
	void Swing_Left_End();
	void Swing_Right();
	void Swing_Right_End();
	void Swing_Left_2();
	void Swing_Right_2();
	void OnInstigatorSet();
	void K2_OnUnEquip();
	void ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_GetPI_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, const struct FHitResult& K2Node_Event_HitResult, enum class EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UFXSystemComponent* K2Node_Event_SpawnedPSC, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, bool K2Node_Event_bVisible, bool K2Node_Event_bSetForLocalControllerOnly, bool CallFunc_IsValid_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue, class UParticleSystemComponent* CallFunc_GetSwingPSC_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTexture2D* CallFunc_GetOrLoadSynchronously_ReturnValue, class UParticleSystemComponent* CallFunc_GetSwingPSC_ReturnValue_1, class UParticleSystemComponent* CallFunc_GetIdlePSC_ReturnValue, class UParticleSystemComponent* CallFunc_GetIdlePSC_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class FName CallFunc_GetIdleFXSocketName_ReturnValue, class FName CallFunc_GetSwingFXSocketName_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, class UObject* Temp_object_Variable, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess_1, class UParticleSystemComponent* CallFunc_GetIdleOffhandPSC_ReturnValue, class UParticleSystemComponent* CallFunc_GetSwingOffhandPSC_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class UParticleSystemComponent* CallFunc_GetSwingOffhandPSC_ReturnValue_1, class FName CallFunc_GetIdleFXOffhandSocketName_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_2, class FName CallFunc_GetSwingFXOffhandSocketName_ReturnValue, class UFXSystemComponent* CallFunc_GetAnimTrailsPSC_ReturnValue, class FName CallFunc_GetAnimTrailsSecondSocketName_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class FName CallFunc_GetAnimTrailsFirstSocketName_ReturnValue, float CallFunc_GetAnimTrailsWidth_ReturnValue, class UFXSystemComponent* CallFunc_GetAnimTrailsOffhandPSC_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class FName CallFunc_GetAnimTrailsOffhandSecondSocketName_ReturnValue, class FName CallFunc_GetAnimTrailsOffhandFirstSocketName_ReturnValue, float CallFunc_GetAnimTrailsOffhandWidth_ReturnValue, class UParticleSystemComponent* CallFunc_GetSwingOffhandPSC_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, class UFXSystemComponent* CallFunc_GetAnimTrailsOffhandPSC_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8, class UFXSystemComponent* CallFunc_GetAnimTrailsPSC_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, class UParticleSystemComponent* CallFunc_GetSwingPSC_ReturnValue_2, bool CallFunc_GetUseAnimTrailsPSC_ReturnValue, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_GetUseAnimTrailsOffhandPSC_ReturnValue, float CallFunc_GetPI_ReturnValue_1, bool CallFunc_GetUseAnimTrailsOffhandPSC_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_GetUseAnimTrailsPSC_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_11, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_12, class UFXSystemComponent* CallFunc_GetAnimTrailsPSC_ReturnValue_2, class UFXSystemComponent* CallFunc_GetAnimTrailsOffhandPSC_ReturnValue_2, class UParticleSystemComponent* CallFunc_GetIdleOffhandPSC_ReturnValue_1, bool CallFunc_DoesSocketExist_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_3, class UParticleSystemComponent* CallFunc_GetSwingOffhandPSC_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_13, class UParticleSystemComponent* CallFunc_GetSwingPSC_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_14, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class APlayerPawn_Generic_Parent_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_DoesSocketExist_ReturnValue_2, bool CallFunc_DoesSocketExist_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_3, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FVector& CallFunc_BreakTransform_Location_3, const struct FRotator& CallFunc_BreakTransform_Rotation_3, const struct FVector& CallFunc_BreakTransform_Scale_3, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_5, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, float CallFunc_VSize_ReturnValue_1, bool CallFunc_DoesSocketExist_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_7, const struct FVector& CallFunc_MakeVector_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_8, float CallFunc_Divide_FloatFloat_ReturnValue_9, const struct FVector& CallFunc_MakeVector_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_5, bool CallFunc_DoesSocketExist_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
