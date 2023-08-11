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

// 0x1C (0x4A8 - 0x48C)
// BlueprintGeneratedClass B_Pickups_Default.B_Pickups_Default_C
class AB_Pickups_Default_C : public AB_Pickups_Parent_C
{
public:
	uint8                                        Pad_469C[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x490(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Background;                                        // 0x4A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Pickups_Default_C");
		return Clss;
	}

	void Set_Initial_BKGD_Param(class UMaterialInstanceDynamic* Mid, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue);
	void Setup_Light(bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void UserConstructionScript();
	void Randomize_Mesh_Rotation_for_BR();
	void OnTossed();
	void OnPickedUp();
	void HideBackgroundAndSpotlight();
	void ExecuteUbergraph_B_Pickups_Default(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_GetPickupRarityMID_bNeedsToBeInitialized, class UMaterialInstanceDynamic* CallFunc_GetPickupRarityMID_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
