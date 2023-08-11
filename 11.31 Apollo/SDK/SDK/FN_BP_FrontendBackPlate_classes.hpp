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

// 0x169 (0x381 - 0x218)
// BlueprintGeneratedClass BP_FrontendBackPlate.BP_FrontendBackPlate_C
class ABP_FrontendBackPlate_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_DudeBro_MultiHomingProj_Trail;                   // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem11;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem1;                                   // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_FrontendBackPlate_Floor;                        // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh_fog;                                    // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        StopHyperSpeed_BlurControl_740818E745B3B8A476EC3CA79F88917D; // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StopHyperSpeed_LessBrightFlash_740818E745B3B8A476EC3CA79F88917D; // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StopHyperSpeed_Flash_740818E745B3B8A476EC3CA79F88917D; // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                StopHyperSpeed__Direction_740818E745B3B8A476EC3CA79F88917D; // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    StopHyperSpeed;                                    // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HyperSpace_StarUVScale_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HyperSpace_StarFieldFade_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HyperSpace_StarBloom_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HyperSpace_NumStarLoops_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HyperSpace_UVScale_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HyperSpace_ShowStarLines_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HyperSpace_bloom_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x288(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HyperSpace_Tunnel_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x28C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HyperSpace_flash_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HyperSpace_starlines_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                HyperSpace__Direction_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    HyperSpace;                                        // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UISpecailEventTransition_UsingUISpecialEventColors_26FA49894E4D045B21346598A2D837C2; // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                UISpecailEventTransition__Direction_26FA49894E4D045B21346598A2D837C2; // 0x2AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    UISpecailEventTransition;                          // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              BackgroundTexture;                                 // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Material_background;                               // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Material_Fog;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              BlurMaterial;                                      // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UpdateFoginRealTime;                               // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstanceDynamic*              MID_Floor;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    PreBlurMaterial;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                RenderTarget_preblur;                              // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Background;                                    // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Preblur;                                       // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            BeginRockyRidge;                                   // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            OnRockyRidgeFinished;                              // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            HidePlayer;                                        // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            RequestLobbyColorChanges;                          // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                          CurrentUIColorScheme;                              // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasUIColorOverride;                               // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AActor*>                        FloatingShapes;                                    // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UAudioComponent*                       LoopingAudio;                                      // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowMatchmakingInteraction;                       // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FrontendBackPlate_C");
		return Clss;
	}

	void HasMatcmakingInteraction(bool* HasInteraction);
	void SetFloatingShapeVisibility(bool Show, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetSpecialEventUIColorScheme(bool SetUIPanelColors, const struct FLinearColor& Backing, const struct FLinearColor& Backing_Hover, const struct FLinearColor& Backing_Selection, bool SetFontColors, const struct FLinearColor& Primary, const struct FLinearColor& Secondary, const struct FLinearColor& Tertiary, const struct FLinearColor& Quaternary);
	void HasUIColorOverride(bool* HasUIColorOverride);
	void ResetUIColorScheme(bool CallFunc_Not_PreBool_ReturnValue);
	void GetUIColorScheme(struct FLinearColor* ColorScheme, bool* bHasOverride);
	void RequestUIColorScheme(const struct FLinearColor& MainUIColor, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateRenderTargetRealtime();
	void EnableRealtimeUpdate(bool Enabled, bool Temp_bool_Variable, class UTexture* K2Node_Select_Default);
	void UpdateRenderTarget();
	void SetBackgroundTexture(class UTexture* Texture, class UMaterialInterface* Material, class UMaterialInterface* PreBlurMaterial, class UMaterialInterface* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* K2Node_Select_Default, bool Temp_bool_Variable_2, class UTexture* K2Node_Select_Default_1, class UMaterialInterface* K2Node_Select_Default_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2);
	void UISpecailEventTransition__FinishedFunc();
	void UISpecailEventTransition__UpdateFunc();
	void HyperSpace__FinishedFunc();
	void HyperSpace__UpdateFunc();
	void StopHyperSpeed__FinishedFunc();
	void StopHyperSpeed__UpdateFunc();
	void UpdateSettings();
	void SetEnableBlackMondayFX(bool IsEnabled);
	void PlayUISpecialEventTransition(bool bTransitionToSpecialEvent);
	void ReceiveTick(float DeltaSeconds);
	void PlayEnterMatchmakingAnim();
	void ResetMatchmakingAnim();
	void SetAllowMatchmakingInteraction(bool AllowInteraction);
	void TestBlur();
	void HandleSpecialEventAudioOnMatchmakingEnd(bool Success);
	void ReceiveBeginPlay();
	void MatchmakingEnded(bool bWasSuccess);
	void EnteringMatchmaking();
	void ExecuteUbergraph_BP_FrontendBackPlate(int32 EntryPoint, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float CallFunc_Subtract_FloatFloat_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue_1, bool K2Node_CustomEvent_IsEnabled, bool K2Node_Select_Default, bool K2Node_CustomEvent_bTransitionToSpecialEvent, float K2Node_Event_DeltaSeconds, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_AllowInteraction, bool K2Node_CustomEvent_Success, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool K2Node_Event_bWasSuccess);
	void RequestLobbyColorChanges__DelegateSignature(const struct FLinearColor& Color_A, bool UseDefaultScheme);
	void HidePlayer__DelegateSignature();
	void OnRockyRidgeFinished__DelegateSignature();
	void BeginRockyRidge__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
