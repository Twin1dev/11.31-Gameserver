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

// 0x20 (0x2B8 - 0x298)
// WidgetBlueprintGeneratedClass BuildWatermark.BuildWatermark_C
class UBuildWatermark_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            BuildText;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_CalendarOffset;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextMcpVersion;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BuildWatermark_C");
		return Clss;
	}

	void UpdateCalenderOffset(class UFortMcpContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetCurrentSubGame_ReturnValue, const class FString& CallFunc_GetServerOffsetString_OutString, bool CallFunc_GetServerOffsetString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetTextCollapseIfDefault(class UTextBlock* Text_Widget, const class FString& InputText, const class FString& DefaultText, bool CallFunc_EqualEqual_StriStri_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Update_Watermark(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetWatermark_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, const class FString& CallFunc_GetAppName_ReturnValue);
	void Construct();
	void HandlePartyJoined();
	void Destruct();
	void HandlePlayerStateChanged(struct FFortTeamMemberInfo& PlayerInfo);
	void ExecuteUbergraph_BuildWatermark(int32 EntryPoint, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortPartyContext* CallFunc_GetContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
