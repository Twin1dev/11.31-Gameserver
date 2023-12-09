#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x4B1 - 0x468)
// WidgetBlueprintGeneratedClass CareerScreen.CareerScreen_C
class UCareerScreen_C : public UAthenaCareerScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       FeatDisplaySwitcher;                               // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GradOvr;                                           // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  NoAchievementMessage;                              // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SeasonHeadingTextLabel;                            // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Input_ReplayCinematic;                             // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UActivatableMovieWidget_C*             ActivatableMovieWidget;                            // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AutoPlayVideo;                                     // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCareerScreen_C* GetDefaultObj();

	void ReplayCinematic(bool* PassThrough);
	void PlayCinematic(class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_UseElectraForReplayCinematic_ReturnValue, class UActivatableMovieWidget_Monolithic_C* CallFunc_Create_ReturnValue, bool CallFunc_LoadStreamingVideo_NoAutoPlay, class UFortStreamMediaSource* CallFunc_LoadStreamingVideo_MediaSource);
	void ShowFeats(bool bShowFeats, bool bHasCompletedFeats);
	void BP_OnActivated();
	void OnInitialized();
	void ExecuteUbergraph_CareerScreen(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_bShowFeats, bool K2Node_Event_bHasCompletedFeats, int32 K2Node_Select_Default, int32 Temp_int_Variable_3, int32 K2Node_Select_Default_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AVaultWorld_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AVaultWorld_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AVaultRotator_C* CallFunc_GetVaultRotator_VaultRotator, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue);
};

}


