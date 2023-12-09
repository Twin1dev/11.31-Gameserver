#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x328 - 0x308)
// WidgetBlueprintGeneratedClass AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C
class UAthenaMOTDWatchVideoWidget_C : public UFortAthenaMOTDWatchVideoWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x308(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USafeZone*                             SafeZone_0;                                        // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActivatableMovieWidget_Monolithic_C*  MonolithicVideoWidget;                             // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortStreamMediaSource*                MediaSource;                                       // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaMOTDWatchVideoWidget_C* GetDefaultObj();

	void BindVideoEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void CloseWidgetNoURL();
	void CloseWidget(const class FString& URL, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnPopulateNews(struct FAthenaNewsEntry& NewsEntry);
	void ExecuteUbergraph_AthenaMOTDWatchVideoWidget(int32 EntryPoint, const struct FAthenaNewsEntry& K2Node_Event_NewsEntry, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UActivatableMovieWidget_Monolithic_C* CallFunc_Create_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, bool CallFunc_LoadStreamingVideo_NoAutoPlay, class UFortStreamMediaSource* CallFunc_LoadStreamingVideo_MediaSource);
};

}


