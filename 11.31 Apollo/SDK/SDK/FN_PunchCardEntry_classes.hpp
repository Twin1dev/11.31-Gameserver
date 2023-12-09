#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2E8 - 0x288)
// WidgetBlueprintGeneratedClass PunchCardEntry.PunchCardEntry_C
class UPunchCardEntry_C : public UAthenaPunchCardEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SocketXP;                                          // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAccoladeImageWidget_C*                AccoladeImageWidget;                               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                        FortLazyImage_Socketed;                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_EmptySocket;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_FillingSocket;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SocketOutline;                               // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SocketOutline_2;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher_Placed;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_FrontendXPLabel;                              // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bAlreadyPunched;                                   // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_652E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortAccoladeItemDefinition*           Temp_Accolade;                                     // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPunchCardEntry_C* GetDefaultObj();

	void OnLoaded_5FE293294CDD1131C46B229A3E23F648(class UObject* Loaded);
	void OnLoaded_D1FE60014F4F3FD64C242F91B2A30C9C(class UObject* Loaded);
	void Construct();
	void OnNewMedalPlaced(class UFortAccoladeItemDefinition* PunchedMedal, bool bPlaySocketAnim);
	void NewMedalComplete();
	void SetAccoladeVisuals(class UFortAccoladeItemDefinition* ItemDef);
	void FinishLoadingMedalIcon();
	void EventSocketed();
	void OnSetMedal(class UFortAccoladeItemDefinition* PunchedMedal);
	void ExecuteUbergraph_PunchCardEntry(int32 EntryPoint, class UObject* Temp_object_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_1, bool Temp_bool_A_Execution_Happened_Variable, bool Temp_bool_B_Execution_Happened_Variable, bool CallFunc_BooleanAND_ReturnValue, class UFortAccoladeItemDefinition* K2Node_Event_PunchedMedal_1, bool K2Node_Event_bPlaySocketAnim, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortAccoladeItemDefinition* K2Node_CustomEvent_ItemDef, TSoftObjectPtr<class UTexture2D> CallFunc_GetPreviousAccoladeLargePreviewImage_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, float CallFunc_GetAccoladeLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class UObject* K2Node_CustomEvent_Loaded_1, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, bool Temp_bool_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class UMaterialInterface* K2Node_Select_Default_2, class UFortAccoladeItemDefinition* K2Node_Event_PunchedMedal, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


