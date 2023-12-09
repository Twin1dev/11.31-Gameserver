#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2E0 - 0x2A8)
// WidgetBlueprintGeneratedClass KillerInfoWidget.KillerInfoWidget_C
class UKillerInfoWidget_C : public UAthenaLastKillerInfoWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UKillerHealthAndShield_C*              KillerHealthAndShield;                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKillerInfoWeaponWidget_C*             KillerInfoWeaponWidget;                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKillerKillsWidget_C*                  KillerKillsWidget;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          KillerNameVertBox;                                 // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_KillerName;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_UserID;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UKillerInfoWidget_C* GetDefaultObj();

	void SetKillerName(const class FString& PlayerName, const class FString& PlayerID);
	void SetKillerWeaponIconAndName(class UTexture2D* IconTexture, class UFortWeaponItemDefinition* ItemDef);
	void SetKillerHealthAndShield(float HealthPercent, float ShieldPercent);
	void SetNumOfKillerKills(int32 NumOfKillers);
	void ExecuteUbergraph_KillerInfoWidget(int32 EntryPoint, const class FString& K2Node_Event_PlayerName, const class FString& K2Node_Event_PlayerID, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UTexture2D* K2Node_Event_IconTexture, class UFortWeaponItemDefinition* K2Node_Event_ItemDef, float K2Node_Event_HealthPercent, float K2Node_Event_ShieldPercent, int32 K2Node_Event_NumOfKillers);
};

}


