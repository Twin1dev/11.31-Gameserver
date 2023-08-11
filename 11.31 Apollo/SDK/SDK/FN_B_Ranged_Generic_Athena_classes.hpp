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

// 0x169 (0xF01 - 0xD98)
// BlueprintGeneratedClass B_Ranged_Generic_Athena.B_Ranged_Generic_Athena_C
class AB_Ranged_Generic_Athena_C : public AFortWeaponRanged
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              Muzzle1P_Empty_;                                   // 0xDA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  IronSightsMesh1P;                                  // 0xDA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              MuzzleWindParticle_Empty_;                         // 0xDB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Reload_Empty_;                                     // 0xDB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Shells_empty_;                                     // 0xDC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ScopeMesh1P;                                       // 0xDC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Muzzle_Empty_;                                     // 0xDD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        AnimateScopePostProcess_DownSightPostProcessAmount_8E980769412DEF67B9B63CAE644DA93B; // 0xDD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                AnimateScopePostProcess__Direction_8E980769412DEF67B9B63CAE644DA93B; // 0xDDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    AnimateScopePostProcess;                           // 0xDE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleParticleSystem;                              // 0xDE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffect;                     // 0xDF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WeaponDurabilityDestroyEffectIcon;                 // 0xDF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseDestroyEffect;                                  // 0xE00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RandomMuzzleFlashScaling;                          // 0xE01(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Use_Reload_Particles;                              // 0xE02(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43A7[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UParticleSystem*                       Reload_ParticleSystem;                             // 0xE08(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastPlayFXTime;                                    // 0xE10(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinPlayFXTime;                                     // 0xE14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseShellsOnFire_;                                  // 0xE18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseShellsOnReload_;                                // 0xE19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseShellsOnPump_;                                  // 0xE1A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43A8[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UParticleSystem*                       ShellsParticleSystemTemplate;                      // 0xE20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ReloadSocketName;                                  // 0xE28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortAIPawn*>                   Array_Of_Active_Enemy_AI;                          // 0xE30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         Scope___Render_Enemies_To_Custom_Depth_Buffer;     // 0xE40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_43A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  Shells_Socket_Name;                                // 0xE44(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class En_ShellTypes_01                  ShellTypeSelect;                                   // 0xE4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Shells_Spawn_Rate_Scale;                           // 0xE50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ShellsRotationRate;                                // 0xE54(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Velocity;                                   // 0xE60(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Gravity;                                    // 0xE6C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shells_Lifetime;                                   // 0xE78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Shells_Size;                                       // 0xE7C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Shells_Time_Dilation;                              // 0xE88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Target_Scope_Vignette_Blur_Screen_Percentage;      // 0xE8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Scope_Camera_Offset_Amount;                        // 0xE90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         SmallShells;                                       // 0xE94(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MediumShells;                                      // 0xE95(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LargeShells;                                       // 0xE96(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ShotgunShells;                                     // 0xE97(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnergyShells;                                      // 0xE98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Inherit_Parent_Velocity;                           // 0xE9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cylindrical_Radius;                                // 0xEA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Cylindrical_Height;                                // 0xEA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugShellsSocket_;                                // 0xEA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Sound_ScopeZoomIn;                                 // 0xEB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_ScopeZoomOut;                                // 0xEB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Alteration_Ambient_PS;                             // 0xEC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ReticleHUDElementTags;                             // 0xEC8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Is_Wind_Enabled;                                   // 0xEE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UParticleSystem*                       MuzzleWindParticleSystem;                          // 0xEF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleParticleSystem1P;                            // 0xEF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldHideReticleAfterDelay;                       // 0xF00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Ranged_Generic_Athena_C");
		return Clss;
	}

	void GetScopeParameters(class UStaticMeshComponent** ScopeComponent, struct FVector2D* DepthOfFieldVignetteRange, float* WeaponSightsCameraOffset, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void HandlePawnAndWeaponVisFor1PTargeting(bool IsTargeting, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetHiddenInGameControllerOnly_ReturnValue, bool CallFunc_SetHiddenInGameOtherLocalControllersOnly_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess);
	void ShowReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void HideReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void HideIronSightsMesh();
	void ActivateOrDeactivateWindParticle(bool bNewActive);
	void DeactivateMuzzleFX();
	void DeactivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue);
	void ActivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue);
	void ActivateShellsFX(bool Bool);
	void DeactivateShellsFX(bool CallFunc_IsActive_ReturnValue);
	void SetupShellFX(bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue);
	void UpdateShellEmittersFX(bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_1, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_3, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_4, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_5, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, int32 CallFunc_GetShellReloadCounter_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_8);
	void Muzzle_Play_Reload_FX(enum class EFortReloadFXState Selection, bool K2Node_SwitchEnum_CmpSuccess);
	void Muzzle_Flash_FX(bool Persistent_Fire, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_GetMuzzleLocation_ReturnValue, bool CallFunc_UseFirstPersonTargeting_ReturnValue, bool CallFunc_IsUsingScope_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GetIsTargeting_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, class UParticleSystemComponent* K2Node_Select_Default);
	void SetWpnRarity();
	void AddRandomScale(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1);
	void UserConstructionScript(class FName CallFunc_GetMuzzleSocketName_ReturnValue, class FName CallFunc_GetMuzzleSocketName_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2);
	void AnimateScopePostProcess__FinishedFunc();
	void AnimateScopePostProcess__UpdateFunc();
	void OnLoaded_43F549264BB135D3D385D4BB5846412A(class UObject* Loaded);
	void OnLoaded_109F12F046377B483CA7FF92A795CBD2(class UObject* Loaded);
	void OnLoaded_65280D504DA982E453E39BA22D9D1643(class UObject* Loaded);
	void OnLoaded_351A9D71483BD9CF417705946595CB08(class UObject* Loaded);
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStopWeaponFireFX();
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage);
	void OnSetTargeting(bool bNewIsTargeting);
	void K2_OnUnEquip();
	void InitializeScopeVariables();
	void Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 StencilBufferValue);
	void OnWeaponAttached();
	void OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration);
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void ShellsON__onPump_();
	void OnEquippedWeaponDestory();
	void SetWeaponPierceThrough(bool Enable, int32 TargetLimit);
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit);
	void ReceiveBeginPlay();
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void HideWeaponMesh();
	void ShowWeaponMesh();
	void HideGunMesh();
	void ShowGunMesh();
	void HideWeapon();
	void ShowWeapon();
	void ExecuteUbergraph_B_Ranged_Generic_Athena(int32 EntryPoint, float CallFunc_GetPI_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, bool CallFunc_UseFirstPersonTargeting_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, enum class EFortReloadFXState K2Node_Event_ReloadStage, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_MathExpression_ReturnValue, bool K2Node_MathExpression_ReturnValue_1, bool K2Node_Event_bNewIsTargeting, bool CallFunc_SetHiddenInGameOtherLocalControllersOnly_ReturnValue, bool CallFunc_SetHiddenInGameControllerOnly_ReturnValue, bool CallFunc_SetHiddenInGameControllerOnly_ReturnValue_1, TArray<class AFortAIPawn*>& CallFunc_GetAllActorsOfClass_OutActors, bool K2Node_CustomEvent_Enable_Or_Disable, int32 K2Node_CustomEvent_StencilBufferValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UFortAlterationItemDefinition* K2Node_Event_NewAlteration, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, bool CallFunc_IsAssetNull_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue_2, bool CallFunc_IsAssetNull_ReturnValue_3, float CallFunc_GetTimeToNextFire_ReturnValue, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_UseScopeTargeting_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UObject* Temp_object_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_CustomEvent_Enable_1, int32 K2Node_CustomEvent_TargetLimit_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, bool K2Node_CustomEvent_Enable, int32 K2Node_CustomEvent_TargetLimit, int32 CallFunc_SelectInt_ReturnValue_1, bool CallFunc_IsUsingFirstPersonCamera_ReturnValue, bool CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess_2, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, float CallFunc_GetADSTransitionInTime_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetInstigator_ReturnValue_1, class UObject* Temp_object_Variable_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_1, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_UseScopeTargeting_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class APawn* CallFunc_GetInstigator_ReturnValue_3, class APawn* CallFunc_GetInstigator_ReturnValue_4, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_3, bool K2Node_DynamicCast_bSuccess_6, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_4, bool K2Node_DynamicCast_bSuccess_7, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, bool CallFunc_UseScopeTargeting_ReturnValue_2, bool K2Node_Event_bVisible, bool K2Node_Event_bSetForLocalControllerOnly, class UObject* K2Node_CustomEvent_Loaded_1, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetRenderingDetailMode_ReturnValue_1, bool CallFunc_GetIsTargeting_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_GetIsTargeting_ReturnValue_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetWeaponDataSmallPreviewImage_ReturnValue, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue, class UTexture2D* CallFunc_GetOrLoadSynchronously_ReturnValue, class UParticleSystemComponent* CallFunc_GetBeamPSC_ReturnValue, bool CallFunc_GetUseBeamParticles_ReturnValue, class UObject* Temp_object_Variable_2, bool CallFunc_BooleanAND_ReturnValue_2, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_2, bool K2Node_DynamicCast_bSuccess_8, class UParticleSystem* CallFunc_SetBeamParticleSystem_ReturnValue, class UObject* K2Node_CustomEvent_Loaded_2, class UObject* Temp_object_Variable_3, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_3, bool K2Node_DynamicCast_bSuccess_9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UObject* K2Node_CustomEvent_Loaded_3, class AFortAIPawn* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsDedicatedServer_ReturnValue_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_VSize_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_DoesSocketExist_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
