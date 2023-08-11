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

// 0xD0 (0x30F0 - 0x3020)
// BlueprintGeneratedClass PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
class APlayerPawn_Athena_Generic_Parent_C : public AFortPlayerPawnAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3020(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>            Default_Weapon_Materials;                          // 0x3028(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnBackpackMaterials;                             // 0x3038(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnHatMaterials;                                  // 0x3048(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnHeadMaterials;                                 // 0x3058(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnBodyMaterials;                                 // 0x3068(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnCharmMaterials;                                // 0x3078(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>      PawnFaceMaterials;                                 // 0x3088(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            PawnLegsMaterials;                                 // 0x3098(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            PawnTorsoMaterials;                                // 0x30A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPostProcessComponent*                 PlayerPostProcessFX;                               // 0x30B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        SkeletalMeshes;                                    // 0x30C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference)
	TArray<class UMaterialInstanceDynamic*>      PawnMaterials_ALL;                                 // 0x30D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	UMulticastInlineDelegateProperty_            ShootingTargetReactToJump;                         // 0x30E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerPawn_Athena_Generic_Parent_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void OnEnteredVehicle();
	void OnExitedVehicle();
	void OnJumped();
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float K2Node_Event_HalfHeightAdjust_1, float K2Node_Event_ScaledHalfHeightAdjust_1, float K2Node_Event_HalfHeightAdjust, float K2Node_Event_ScaledHalfHeightAdjust);
	void ShootingTargetReactToJump__DelegateSignature(class AFortPlayerPawnAthena* JumpingPlayer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
