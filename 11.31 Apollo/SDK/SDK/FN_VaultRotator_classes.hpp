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

// 0x115 (0x415 - 0x300)
// BlueprintGeneratedClass VaultRotator.VaultRotator_C
class AVaultRotator_C : public AItemPreviewVaultRotator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDirectionalLightComponent*            DirectionalLightMobile;                            // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*            DirectionalLight_LOWPC;                            // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DirectionalLights;                                 // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                    SkyLightLowMobile;                                 // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                    SkyLight;                                          // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                    SkyLight_LOWPC;                                    // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow;                                             // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcess_Mobile;                                // 0x340(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                 PostProcess_LOWPC;                                 // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       GenericLighting;                                   // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Zoom_CurrentZoomLevel_6FFD6729471BD965D850258DA1C0AF39; // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39; // 0x35C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5141[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    Timeline_Zoom;                                     // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x368(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714; // 0x374(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714; // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714; // 0x384(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714; // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5142[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    CameraTurn_180_to_360;                             // 0x390(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x398(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x3A4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x3B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x3B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0; // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5143[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    CameraTurn_0_to_180;                               // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5144[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            InitialCameraTransform;                            // 0x3D0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class USoundBase*                            ClockwiseSound;                                    // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CounterClockwiseSound;                             // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugMobile_Lighting;                              // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DebugLightingPC;                                   // 0x411(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsActive;                                          // 0x412(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AlwaysOn;                                          // 0x413(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DebugLighting_LOWDetailPC;                         // 0x414(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VaultRotator_C");
		return Clss;
	}

	void PlaySoundWhenEnabled(class USoundBase* Sound, bool CallFunc_IsSoundEnabled_ReturnValue);
	void SetBackgroundColor(const struct FLinearColor& RGBA0, const struct FLinearColor& RGBA1);
	void ToggleBackgroundText(bool bDisplayText);
	void LightControl(bool Active, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_IsErebus_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void SwitchPCLighting(bool Visibility);
	void SwitchPCLighting_LOWDetail(bool Visibility);
	void SwitchMobileLighting(bool Visibility);
	void SetBackgroundString(int32 StringIndex, class UUI_Background_Strings_C* CallFunc_Create_ReturnValue);
	void CameraTurn_180_to_360__FinishedFunc();
	void CameraTurn_180_to_360__UpdateFunc();
	void Timeline_Zoom__FinishedFunc();
	void Timeline_Zoom__UpdateFunc();
	void CameraTurn_0_to_180__FinishedFunc();
	void CameraTurn_0_to_180__UpdateFunc();
	void SetZoom(bool bZoomedIn);
	void UpdateSettings();
	void OnCameraTransitionReady(bool bPrimaryToSecondary, struct FVaultTransitionOptions& Options);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_VaultRotator(int32 EntryPoint, enum class ETimelineDirection Temp_byte_Variable, enum class ETimelineDirection Temp_byte_Variable_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetTimelineLength_ReturnValue, float CallFunc_GetTimelineLength_ReturnValue_1, float CallFunc_GetPlaybackPosition_ReturnValue, float CallFunc_GetPlaybackPosition_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, const struct FInterpolatedTransitionCamera& CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, bool K2Node_Event_bZoomedIn, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, bool K2Node_Event_bPrimaryToSecondary, const struct FVaultTransitionOptions& K2Node_Event_Options, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FInterpolatedTransitionCamera& CallFunc_GetInterpolatedTransitionCameraPosition_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
