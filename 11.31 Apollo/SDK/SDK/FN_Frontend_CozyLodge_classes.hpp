#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E8 (0x418 - 0x230)
// BlueprintGeneratedClass Frontend_CozyLodge.Frontend_CozyLodge_C
class AFrontend_CozyLodge_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FFrontendEventCamera>          SceneCameras;                                      // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFrontendEventNavObject>       NavObjects;                                        // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FFrontendEventHiddenObject>    HiddenObjects;                                     // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_Discoverable_MusicPlayer_C*        BP_Discoverable_MusicPlayer_2_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_Outside_0_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_Inside_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_pos1_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_pos2_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_pos3_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_Open_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_Fireplace_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_Fireplace_Close_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_C*     BP_CozyLodge_PileA_5_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_AnimCharacter_C*         BP_CozyLodge_AnimCharacter_CrackShot_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_C*     BP_CozyLodge_PileA_7_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_C*     BP_CozyLodge_PileA_8_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_C*     BP_CozyLodge_PileA_6_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_C*     BP_CozyLodge_PileA_13_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_C*     BP_CozyLodge_PileA_12_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_InteractablePresent_C*   BP_CozyLodge_OpenPresent_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_LogFire_C*               BP_CozyLodge_LogFire_2_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_C*     BP_CozyLodge_PileB_1_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_C*     BP_CozyLodge_PileA_1_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_C*     BP_CozyLodge_PileA_2_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_C*     BP_CozyLodge_PileA_4_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_C*     BP_CozyLodge_PileA_9_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_C*     BP_CozyLodge_PileA_11_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_C*     BP_CozyLodge_PileB_2_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_OutsideTransition_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_GenericSelectable_C*     BP_CozyLodge_GenericSelectable_OutsideFar_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_GenericSelectable_C*     BP_CozyLodge_GenericSelectable_OutsideWindow_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_Stockings_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Stockings_C*                  BP_Cozy_Stockings_2_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_FlyBy_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_GenericSelectable_C*     BP_CozyLodge_GenericSelectable_FlyBy_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_OpenCloseUp_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASoldierMannequin_Male_C*              SoldierMannequin_Wolly_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Display_C*                    BP_Cozy_Display_GingerBreadPickaxe_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Display_C*                    BP_Cozy_Display_MintMiner_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Display_C*                    BP_Cozy_Display_EmoteGlobe_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Display_C*                    BP_Cozy_Display_Rocket_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Display_C*                    BP_Cozy_Display_Wrap_WrappingPaper_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Display_C*                    BP_Cozy_Display_MusicTrack_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Display_C*                    BP_Cozy_Display_Wrap_NewYear_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_AnimCharacter2_C*        BP_CozyLodge_AnimCharacter_Tree_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Display_C*                    BP_Cozy_Display_GalileoSpeedBoat_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Display_C*                    BP_Cozy_Display_GliderPineTree_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Display_C*                    BP_Cozy_Display_HolidayGarland_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Display_C*                    BP_Cozy_Display_Banner1_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Display_C*                    BP_Cozy_Display_Banner2_12_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_ExplorLoc1_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_ExplorLoc2_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CozyLodge_SelectablePresent_Tree_C* BP_CozyLodge_SelectablePresent_Tree_2_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Discoverable_Banana_C*             BP_Discoverable_Banana2_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnite_CozyLodge_Camera_C*          Fortnite_CozyLodge_Camera_TreeInspection_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Discoverable_Nutcracker_C*         BP_Discoverable_Nutcracker_2_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Discoverable_Saxaphone_C*          BP_Discoverable_Saxaphone_2_ExecuteUbergraph_Frontend_CozyLodge_RefProperty; // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AFrontend_CozyLodge_C* GetDefaultObj();

	void SetUpHiddenObjectPairing(class AActor* Actor, const struct FGameplayTag& RewardGraphNodeTag, const struct FFrontendEventHiddenObject& K2Node_MakeStruct_FrontendEventHiddenObject, int32 CallFunc_Array_Add_ReturnValue);
	void SetupNavObjectPairing(class AFortEventLevelNavigationActor* Object, const struct FGameplayTagContainer& Camera, const struct FFrontendEventNavObject& K2Node_MakeStruct_FrontendEventNavObject, int32 CallFunc_Array_Add_ReturnValue);
	void SetUpCameraPairing(class AFortCameraBase* Camera, const struct FGameplayTag& Tag, const struct FFrontendEventCamera& K2Node_MakeStruct_FrontendEventCamera, int32 CallFunc_Array_Add_ReturnValue);
	void OnFailure_6A99741E47F07D31E84968A87E978BED();
	void OnIgnored_6A99741E47F07D31E84968A87E978BED();
	void OnSuccess_6A99741E47F07D31E84968A87E978BED();
	void ReceiveBeginPlay();
	void FillOutSceneCameraArray();
	void RegisterSceneCameras();
	void RegisterNavObjects();
	void FillOutNavObjects();
	void FilloutHidenObjects();
	void RegisterHiddenObjects();
	void OnSpecialInteraction(const struct FGameplayTag& InteractionTag, const struct FGameplayTag& CameraTag, class AFortEventLevelNavigationActor* InActor);
	void ExecuteUbergraph_Frontend_CozyLodge(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Array_Index_Variable_4, int32 CallFunc_Array_Length_ReturnValue, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, const struct FFrontendEventNavObject& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, int32 Temp_int_Array_Index_Variable_5, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue_2, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_5, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable_6, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_6, class AGameStateBase* CallFunc_GetGameState_ReturnValue_3, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue_3, const struct FFrontendEventHiddenObject& CallFunc_Array_Get_Item_3, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_6, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item_5, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item_6, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_6, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_InteractionTag, const struct FGameplayTag& K2Node_CustomEvent_CameraTag, class AFortEventLevelNavigationActor* K2Node_CustomEvent_InActor, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_Less_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 Temp_int_Array_Index_Variable_7, const struct FFrontendEventCamera& CallFunc_Array_Get_Item_7);
};

}


