#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x378 - 0x368)
// WidgetBlueprintGeneratedClass ResourceFeedWidget.ResourceFeedWidget_C
class UResourceFeedWidget_C : public UFortResourceFeed
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              SBoxRoot;                                          // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UResourceFeedWidget_C* GetDefaultObj();

	void Construct();
	void OnCameraTypeChanged(class AFortPlayerControllerSpectating* SpectatorPC, enum class ESpectatorCameraType NewCameraType);
	void OnFollowPlayerChanged(class AFortPlayerControllerSpectating* SpectatorPC, class AFortPlayerState* NewFollowedPlayer);
	void ExecuteUbergraph_ResourceFeedWidget(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerSpectating* K2Node_CustomEvent_SpectatorPC_1, enum class ESpectatorCameraType K2Node_CustomEvent_NewCameraType, class AFortPlayerControllerSpectating* K2Node_CustomEvent_SpectatorPC, class AFortPlayerState* K2Node_CustomEvent_NewFollowedPlayer, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


