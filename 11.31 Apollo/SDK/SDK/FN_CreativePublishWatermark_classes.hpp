#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2B0 - 0x298)
// WidgetBlueprintGeneratedClass CreativePublishWatermark.CreativePublishWatermark_C
class UCreativePublishWatermark_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextCreativeMnemonic;                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextCreatorName;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCreativePublishWatermark_C* GetDefaultObj();

	void SetTextCollapseIfDefault(class UTextBlock* Text_Widget, const class FString& InputText, const class FString& DefaultText, bool CallFunc_EqualEqual_StriStri_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Update_Watermark(class AFortVolume* Volume, const class FString& CreatorName, const class FString& CreativeMnemonic, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_ShouldShowPublishWatermarkForVolume_CreatorName, const class FString& CallFunc_ShouldShowPublishWatermarkForVolume_CreativeMnemonic, class FText CallFunc_ShouldShowPublishWatermarkForVolume_Title, bool CallFunc_ShouldShowPublishWatermarkForVolume_ReturnValue);
	void Construct();
	void Destruct();
	void OnLinkedVolumeChanged(class AFortVolume* Volume);
	void ExecuteUbergraph_CreativePublishWatermark(int32 EntryPoint, class AFortVolume* K2Node_CustomEvent_Volume, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


