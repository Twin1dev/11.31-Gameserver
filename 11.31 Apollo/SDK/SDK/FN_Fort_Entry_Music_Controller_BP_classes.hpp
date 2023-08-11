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

// 0x48 (0x260 - 0x218)
// BlueprintGeneratedClass Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
class AFort_Entry_Music_Controller_BP_C : public AFortEntryMusicController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Enter_Menu_Loop;                                   // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MenuMusic_B;                                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       MenuMusic_A;                                       // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       LoginMusic;                                        // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EBF[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            CurrentMusic;                                      // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Music_Activate_Override;                        // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaMusicPackItemDefinition*        MusicPackToPlayLater;                              // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Fort_Entry_Music_Controller_BP_C");
		return Clss;
	}

	void Change_Music(class USoundBase* New_Music);
	void ListenToMusicPacks();
	void OnMusicPackChanged(class UAthenaMusicPackItemDefinition* NewMusicPack);
	void Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music);
	void MakeNextMusicPackStartFromBeginning();
	void DelayedPlayMusicPack(class UAthenaMusicPackItemDefinition* MusicPackToPlayLater);
	void ClearDelayedPlayMusicPack();
	void PlayEquippedMusicPack();
	void StartMusic();
	void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint, class UFortMusicContext* CallFunc_GetContext_ReturnValue, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue, class USoundBase* K2Node_CustomEvent_New_Music_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_NewMusicPack, bool K2Node_CustomEvent_Lobby_Music_Activate, class USoundBase* K2Node_CustomEvent_New_Music, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortMusicContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, class UAthenaMusicPackItemDefinition* CallFunc_GetEquippedMusicPack_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UAthenaMusicPackItemDefinition* K2Node_CustomEvent_MusicPackToPlayLater, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, class UFortMusicContext* CallFunc_GetContext_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
