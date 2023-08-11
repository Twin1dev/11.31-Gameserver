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

// 0x60 (0x378 - 0x318)
// WidgetBlueprintGeneratedClass GameFeatureStatus.GameFeatureStatus_C
class UGameFeatureStatus_C : public UAthenaGameFeatureStatus
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Downloading_Error;                                 // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Downloading;                                       // 0x328(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_ErrorIcon;                                   // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Pause;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher_ProgressOrError;                          // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          Progress;                                          // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Error;                                             // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Paused;                                            // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureStatus_C");
		return Clss;
	}

	void HandleStatusChanged(enum class EAthenaGameFeatureStatus CurrentStatus, bool K2Node_SwitchEnum_CmpSuccess, enum class EAthenaGameFeatureStatus Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class EAthenaGameFeatureStatus Temp_byte_Variable_1, const struct FLinearColor& K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWidget* K2Node_Select_Default_1, bool CallFunc_IsAnimationPlaying_ReturnValue);
	void OnStatusChanged(enum class EAthenaGameFeatureStatus NewStatus);
	void ExecuteUbergraph_GameFeatureStatus(int32 EntryPoint, enum class EAthenaGameFeatureStatus K2Node_Event_NewStatus);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
