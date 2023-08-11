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

// 0x28 (0x2490 - 0x2468)
// BlueprintGeneratedClass Athena_GameState.Athena_GameState_C
class AAthena_GameState_C : public AFortGameStateAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_21F3C11243B4DF8C6B6A958D51E85950; // 0x2478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_21F3C11243B4DF8C6B6A958D51E85950; // 0x247C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4EDB[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x2480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Victory_Royale_Sound;                              // 0x2488(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Athena_GameState_C");
		return Clss;
	}

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnWinnerAnnounced();
	void ExecuteUbergraph_Athena_GameState(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_CanUseSlowMotionOnVictory_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
