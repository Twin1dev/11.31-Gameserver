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

// 0x40 (0xBF0 - 0xBB0)
// WidgetBlueprintGeneratedClass TeamMemberBanner.TeamMemberBanner_C
class UTeamMemberBanner_C : public UFortCampaignTeamMemberBanner
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonPartyFinder;                                 // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Connected;                                         // 0xBC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Connecting;                                        // 0xBC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_571;                                         // 0xBD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Open;                                              // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OpenImage;                                         // 0xBE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_MemberState;                              // 0xBE8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TeamMemberBanner_C");
		return Clss;
	}

	void OpenPartyFinder(class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class USocialPanel_C* K2Node_DynamicCast_AsSocial_Panel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShouldShowExternalFriendsUI_ReturnValue, bool CallFunc_IsActivated_ReturnValue);
	void HandleMouseHoverVisualState(bool Hover, bool Temp_bool_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnTeamMemberConnectionStateChanged(enum class EFortMemberConnectionState NewConnectionState);
	void ExecuteUbergraph_TeamMemberBanner(int32 EntryPoint, enum class EFortMemberConnectionState Temp_byte_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class EFortMemberConnectionState K2Node_Event_NewConnectionState, class UWidget* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
