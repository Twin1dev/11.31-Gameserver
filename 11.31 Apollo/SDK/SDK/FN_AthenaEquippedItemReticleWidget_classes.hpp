#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB4 (0x52C - 0x478)
// WidgetBlueprintGeneratedClass AthenaEquippedItemReticleWidget.AthenaEquippedItemReticleWidget_C
class UAthenaEquippedItemReticleWidget_C : public UAthenaEquippedItemBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeOut;                                           // 0x480(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Reload;                                            // 0x488(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                AmmoIcon;                                          // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_AmmoCounter;                          // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_AmmoMeter;                                   // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MagazineAmmoCount;                                 // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OutOfAmmo;                                         // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ResourceCount;                                     // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ResourceIcon;                                      // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Split1;                                            // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      StandAloneAmmoCount;                               // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SurplusAmmoCount;                                  // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherContent;                                   // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UtilityItemImage;                                  // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          OutOfAmmoColor;                                    // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxAmmo;                                           // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FAA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              AmmoCounterMID;                                    // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReloadAnimationLength;                             // 0x510(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LowAmmoPercentage;                                 // 0x514(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Icons_Size;                                        // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FadeOutHandle;                                     // 0x520(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        TimeToOutro;                                       // 0x528(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaEquippedItemReticleWidget_C* GetDefaultObj();

	void UpdateGaugeValue(class AFortWeapon* Weapon, int32 CallFunc_GetLocalMagazineAmmoCount_ReturnValue, int32 CallFunc_GetLocalRemainingAmmo_ReturnValue, int32 CallFunc_GetBulletsPerClip_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class AFortWeaponRanged* K2Node_DynamicCast_AsFort_Weapon_Ranged, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsOverheated_ReturnValue, float CallFunc_GetOverheatingMaxValue_ReturnValue, float CallFunc_GetCurrentOverheatValue_ReturnValue, enum class EFortWeaponOverheatState CallFunc_GetOverheatState_ReturnValue, bool CallFunc_DoesWeaponOverheat_ReturnValue, float Temp_float_Variable, bool Temp_bool_Variable, float K2Node_Select_Default);
	void UpdateOverheatValue(float Current, float Max, enum class EFortWeaponOverheatState State, bool IsInCooldown, bool Temp_bool_Variable, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, enum class EFortWeaponOverheatState Temp_byte_Variable, const struct FLinearColor& K2Node_MakeStruct_LinearColor, enum class EFortWeaponOverheatState Temp_byte_Variable_1, enum class EFortWeaponOverheatState K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default_1);
	void UpdateAmmoCount(int32 MagazineAmmoCount, int32 RemainingAmmoCount, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_GetRemainingCountText_CurrentAmmoText, bool CallFunc_Greater_IntInt_ReturnValue_1, class FText CallFunc_GetCurrentAmmoText_CurrentAmmoText, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_2, float K2Node_Select_Default, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default_1, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, const struct FLinearColor& K2Node_Select_Default_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FLinearColor& K2Node_Select_Default_3);
	void SetResourceCount(int32 Count, class FText CallFunc_GetRemainingCountText_CurrentAmmoText);
	void GetRemainingCountText(int32 RemainingAmmoCount, bool Always_Sign, bool Use_Grouping, int32 Minimum_Integral_Digits, int32 Maximum_Integral_Digits, class FText* CurrentAmmoText, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText Temp_text_Variable, class FText K2Node_Select_Default);
	void GetCurrentAmmoText(int32 CurrentAmmoCount, class FText* CurrentAmmoText, bool CallFunc_Less_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void UpdateWidgetColor(bool HasAmmo, float Temp_float_Variable, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, float Temp_float_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_2, const struct FLinearColor& K2Node_Select_Default_1, float K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void WeaponTypeChanged(enum class EEquippedWeaponDisplay Mode);
	void ResourceTypeChanged(class UFortResourceItemDefinition* Item, int32 ResourceCount);
	void UtilityItemCountChanged(int32 Remaining);
	void UtilityItemTypeChanged(class AFortWeapon* Weapon, class UFortWeaponItemDefinition* Item);
	void Construct();
	void Event_Weapon_Equipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void AmmoTypeChanged(class AFortWeaponRanged* RangedWeapon, class UFortWorldItemDefinition* Item);
	void ResourceCountChanged(int32 ResourceCount);
	void WeaponReloadStarted(float ReloadTime, enum class EFortWeaponReloadType ReloadType);
	void WeaponReloadCancelled(class AFortWeapon* Weapon);
	void HasAmmoChanged(bool bHasAmmo);
	void Event_Outro();
	void AmmoChanged(int32 MagazineAmmoCount, int32 BackupAmmoCount, int32 TotalRemaining);
	void WeaponTargetingChanged(bool bIsTargeting);
	void WeaponOverheatValueChanged(float CurrentValue, float MaxValue, enum class EFortWeaponOverheatState State, bool bIsInCooldown);
	void EventFadeOut();
	void EventReloadFinished();
	void ExecuteUbergraph_AthenaEquippedItemReticleWidget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable, float Temp_float_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EEquippedWeaponDisplay K2Node_Event_Mode, bool K2Node_SwitchEnum_CmpSuccess, class UFortResourceItemDefinition* K2Node_Event_Item_2, int32 K2Node_Event_ResourceCount_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, int32 K2Node_Event_Remaining, class FText CallFunc_GetRemainingCountText_CurrentAmmoText, class AFortWeapon* K2Node_Event_Weapon_1, class UFortWeaponItemDefinition* K2Node_Event_Item_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue_1, enum class EEquippedWeaponDisplay Temp_byte_Variable_5, class AFortWeapon* K2Node_CustomEvent_NewWeapon, class AFortWeapon* K2Node_CustomEvent_PrevWeapon, enum class ESlateVisibility K2Node_Select_Default, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue, bool CallFunc_WeaponDataIsValid_ReturnValue, TArray<float>& CallFunc_GetReticleCornerAngles_ReturnValue, float CallFunc_Array_Get_Item, float CallFunc_GetLowAmmoPercentage_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class AFortWeaponRanged* K2Node_Event_RangedWeapon, class UFortWorldItemDefinition* K2Node_Event_Item, int32 K2Node_Event_ResourceCount, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue_2, int32 CallFunc_GetBulletsPerClip_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float K2Node_Event_ReloadTime, enum class EFortWeaponReloadType K2Node_Event_ReloadType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, float CallFunc_GetStartTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default_1, class AFortWeapon* K2Node_Event_Weapon, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_bHasAmmo, int32 K2Node_Event_MagazineAmmoCount, int32 K2Node_Event_BackupAmmoCount, int32 K2Node_Event_TotalRemaining, float CallFunc_GetEndTime_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool K2Node_Event_bIsTargeting, float K2Node_Event_CurrentValue, float K2Node_Event_MaxValue, enum class EFortWeaponOverheatState K2Node_Event_State, bool K2Node_Event_bIsInCooldown, class UFortHUDContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, enum class ESlateVisibility Temp_byte_Variable_8, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EEquippedWeaponDisplay Temp_byte_Variable_11, enum class ESlateVisibility K2Node_Select_Default_2);
};

}


