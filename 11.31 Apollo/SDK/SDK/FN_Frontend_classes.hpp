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

// 0x18 (0x248 - 0x230)
// BlueprintGeneratedClass Frontend.FrontEnd_C
class AFrontEnd_C : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         NewLobby;                                          // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NewVar_0;                                          // 0x239(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48B7[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AHBOnboardingFlow_C*                   HBOnboardingFlow_ExecuteUbergraph_Frontend_RefProperty; // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEnd_C");
		return Clss;
	}

	void PlaySpeech(const class FString& Filename, int32 SampleRate, class USoundWave* AssetFile, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerFrontEnd* K2Node_DynamicCast_AsFort_Player_Controller_Front_End, bool K2Node_DynamicCast_bSuccess);
	void OnMatchStarted();
	void EnableTutorial();
	void ExecuteUbergraph_FrontEnd(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
