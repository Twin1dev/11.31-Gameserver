#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0x260 - 0x231)
// BlueprintGeneratedClass TVPostProcessBPAthena.TVPostProcessBPAthena_C
class ATVPostProcessBPAthena_C : public ATVPostProcessBP_C
{
public:
	uint8                                        Pad_6E8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 FullScreenTVPPMinusOnlyMaterialModified;           // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FrontEndCameraSwitchFadeAthena_SwipeLines_Animation_8828A7EA43DFA9153F986F805918F9F7; // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FrontEndCameraSwitchFadeAthena_PostProcessVisibility_8828A7EA43DFA9153F986F805918F9F7; // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FrontEndCameraSwitchFadeAthena__Direction_8828A7EA43DFA9153F986F805918F9F7; // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FrontEndCameraSwitchFadeAthena;                    // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATVPostProcessBPAthena_C* GetDefaultObj();

	void IsEnabledForCurrentSubgame(bool* bEnabled, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void FrontEndCameraSwitchFadeAthena__FinishedFunc();
	void FrontEndCameraSwitchFadeAthena__UpdateFunc();
	void ExecuteCameraSwitch();
	void Camera_DisableEffects();
	void ExecuteUbergraph_TVPostProcessBPAthena(int32 EntryPoint, float CallFunc_GetUnpausedTimeSeconds_ReturnValue);
};

}


