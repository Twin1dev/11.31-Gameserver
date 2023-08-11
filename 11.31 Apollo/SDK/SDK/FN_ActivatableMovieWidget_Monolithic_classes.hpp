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

// 0x99 (0x561 - 0x4C8)
// WidgetBlueprintGeneratedClass ActivatableMovieWidget_Monolithic.ActivatableMovieWidget_Monolithic_C
class UActivatableMovieWidget_Monolithic_C : public UFortActivatableVideoPanel
{
public:
	class USafeZone*                             MainSafeZone;                                      // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsAutoplay;                                        // 0x4D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                StreamedVideoError;                                // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         StreamedVideoOpenError;                            // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D7E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStreamMediaSource*                ElectraMediaSource;                                // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                          StreamedMediaPlayer;                               // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          StreamedVideoOpeningTimer;                         // 0x500(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  StreamingVideoID;                                  // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FallbackVideoID;                                   // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FallbackExists;                                    // 0x518(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D7F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                ProdLinkID;                                        // 0x520(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                GameDevLinkID;                                     // 0x530(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         UseLinkIDs;                                        // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D80[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  VideoString;                                       // 0x544(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseFlatMetadataByUID;                              // 0x54C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D81[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                VideoUID;                                          // 0x550(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bShouldBeModal;                                    // 0x560(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActivatableMovieWidget_Monolithic_C");
		return Clss;
	}

	void LoadFallbackVideo(bool CallFunc_LoadVideo_ReturnValue);
	void StreamedVideoOnError(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void StreamedVideoOnOpenFailure(const class FString& URL);
	void StreamedVideoOnUrlFailure(const class FString& URL);
	void StreamedVideoOnUrlSuccess(const class FString& URL, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetTimeLimitForReplayCinematic_ReturnValue, bool CallFunc_LoadVideo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void StreamedVideoOnMediaOpened(const class FString& URL, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void StreamedVideoOnSkipButtonClicked(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void StreamedVideoOnMediaPlayerEndReached(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void StreamedVideoOpeningTimedOut(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void StreamedVideoOnSkipBeforeVideoURLReceived(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void ModifyStreamSourceTemplate(TMap<class FString, class FString> K2Node_MakeMap_Map);
	void LoadStreamingVideo(class UFortStreamMediaSource* StreamingMediaSource, class FName VideoString, class FName StreamingVideoID, class FName FallbackVideoID, const class FString& ProdLinkID, const class FString& GameDevLinkID, bool IsAutoplay, bool ForceAutoplay, bool StreamingEnabled, const class FString& VideoUID, bool* NoAutoPlay, class UFortStreamMediaSource** MediaSource, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_NameToText_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue_1, bool CallFunc_NotEqual_TextText_ReturnValue, bool CallFunc_ShouldAutoPlayVideo_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_NotEqual_TextText_ReturnValue_1, class FText CallFunc_Conv_NameToText_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_TextText_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
