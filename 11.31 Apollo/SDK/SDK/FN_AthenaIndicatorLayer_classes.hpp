#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x340 - 0x2E8)
// WidgetBlueprintGeneratedClass AthenaIndicatorLayer.AthenaIndicatorLayer_C
class UAthenaIndicatorLayer_C : public UAthenaIndicatorLayerBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UInterestIndicatorWidget_C*>    AvailableInterestIndicators;                       // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UInterestIndicatorWidget_C*>    ActiveInterestIndicators;                          // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         ShowInteractionWidget;                             // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6176[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UFortActorIndicatorWidget> SoftCreativeInfoIndicator;                         // 0x318(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaIndicatorLayer_C* GetDefaultObj();

	void HandleOnPointOfInterestRemoved(class AActor* PointOfInterest, bool Removed, class UInterestIndicatorWidget_C* CurrentPointOfInterestWidget, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_RemovePointOfInterest_Removed, class UInterestIndicatorWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleOnPointOfInterestAdded(class AActor* PointOfInterest, class FText DisplayText, class UTexture2D* DisplayImage, bool SpecifyColor, const struct FLinearColor& ImageColor, const struct FLinearColor& Temp_struct_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, class UInterestIndicatorWidget_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue);
	void CreateInterestIndicatorWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UInterestIndicatorWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue);
	void OnLoaded_0BEC012C4A6FDC641FED58A2C3D8BCE1(class UClass* Loaded);
	void OnReady_E8925CF449ED5EC2B87AD4AA3B994A28(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_AthenaIndicatorLayer(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UBuildingInfoIndicator_C* CallFunc_Create_ReturnValue, class UClass* Temp_class_Variable, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsFort_Actor_Indicator_Widget, bool K2Node_ClassDynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UAthenaInteractionIndicator_C* CallFunc_Create_ReturnValue_1, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AFortGameStateAthena* Temp_object_Variable, bool CallFunc_IsCreativeModePlaylist_ReturnValue, class UFortPlaylist* Temp_object_Variable_1, const struct FGameplayTagContainer& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UVehicleChangeSeatIndicator_C* CallFunc_Create_ReturnValue_2, class AFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortActorIndicatorWidget* CallFunc_Create_ReturnValue_3, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue_3, class UClass* K2Node_CustomEvent_Loaded, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class UVehicleInfoIndicator_C* CallFunc_Create_ReturnValue_4, class UFortActorCanvasSlot* CallFunc_AddActorIndicator_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


