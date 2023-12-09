#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0xEB8 - 0xDF0)
// BlueprintGeneratedClass B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C
class AB_Ranged_Ashton_Indigo_Athena_C : public AFortWeaponRangedDual
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Intensity_NewTrack_0_8BC0CF6945BEFDD97BD2A7A959C56E96; // 0xDF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Intensity__Direction_8BC0CF6945BEFDD97BD2A7A959C56E96; // 0xDFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5986[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Intensity;                                         // 0xE00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CenterReset_NewTrack_0_F953CC864E082C84D8FFC3B340618330; // 0xE08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CenterReset__Direction_F953CC864E082C84D8FFC3B340618330; // 0xE0C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5987[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CenterReset;                                       // 0xE10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CenterSize_NewTrack_0_3467D5114DEABC0D5FCCE59D65171599; // 0xE18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CenterSize__Direction_3467D5114DEABC0D5FCCE59D65171599; // 0xE1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5988[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CenterSize;                                        // 0xE20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       MuzzleParticleSystem;                              // 0xE28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastPlayFXTime;                                    // 0xE30(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinPlayFXTime;                                     // 0xE34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ReticleHUDElementTags;                             // 0xE38(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EDualWeaponHand                   LastHandFired;                                     // 0xE58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsIndigo;                                          // 0xE59(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5989[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInstanceDynamic*>      Post_Process_MIDs;                                 // 0xE60(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FWeightedBlendable>            BlendableMIDs;                                     // 0xE70(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              PostMID;                                           // 0xE80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HUD_Start_Offset;                                  // 0xE88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_598A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LockOnTarget;                                      // 0xE90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TurnSpeedMax;                                      // 0xE98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HomingDistanceThreshold;                           // 0xE9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeUntilMax;                                      // 0xEA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HUD_Scale;                                         // 0xEA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HUD_Playrate;                                      // 0xEA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_598B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAshton_Indigo_LockOnWidget_C*         LockOnWidget;                                      // 0xEB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Ranged_Ashton_Indigo_Athena_C* GetDefaultObj();

	void ShowReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void HideReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void CenterReset__FinishedFunc();
	void CenterReset__UpdateFunc();
	void CenterSize__FinishedFunc();
	void CenterSize__UpdateFunc();
	void Intensity__FinishedFunc();
	void Intensity__UpdateFunc();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void OnStopWeaponFireFX();
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ReceiveBeginPlay();
	void HandFired(enum class EDualWeaponHand Hand, bool bPersistantFire);
	void BindOnHandFired();
	void OnSetTargeting(bool bNewIsTargeting);
	void OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile);
	void LockOnStart();
	void LockOnEnd();
	void NewTarget();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_B_Ranged_Ashton_Indigo_Athena(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, enum class EDualWeaponHand K2Node_CustomEvent_Hand, bool K2Node_CustomEvent_bPersistantFire, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool K2Node_Event_bNewIsTargeting, class AFortProjectileBase* K2Node_Event_SpawnProjectile, class AB_Prj_Ashton_Indigo_C* K2Node_DynamicCast_AsB_Prj_Ashton_Indigo, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingStyle_self_CastInput, bool Temp_bool_Has_Been_Initd_Variable_1, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTurnSpeedMax_self_CastInput, float CallFunc_Subtract_FloatFloat_ReturnValue, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTurnSpeedMin_self_CastInput, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingLockTargetDistanceThreshold_self_CastInput, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTimeUntilMaxTurnSpeed_self_CastInput, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTarget_self_CastInput, class UAshton_Indigo_LockOnWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool Temp_bool_IsClosed_Variable_1);
};

}


