#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xBC0 - 0xBB0)
// WidgetBlueprintGeneratedClass TeamMemberPedestal_XPBoostInfo.TeamMemberPedestal_XPBoostInfo_C
class UTeamMemberPedestal_XPBoostInfo_C : public UFortTeamMemberXPBoostInfo
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              PrimaryOvr;                                        // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTeamMemberPedestal_XPBoostInfo_C* GetDefaultObj();

	void Construct();
	void OnCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera);
	void ExecuteUbergraph_TeamMemberPedestal_XPBoostInfo(int32 EntryPoint, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EFrontEndCamera K2Node_CustomEvent_NewCamera, enum class EFrontEndCamera K2Node_CustomEvent_OldCamera, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


