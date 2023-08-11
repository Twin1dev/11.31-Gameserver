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

// 0x2F (0x260 - 0x231)
// BlueprintGeneratedClass TVPostProcessBPAthena.TVPostProcessBPAthena_C
class ATVPostProcessBPAthena_C : public ATVPostProcessBP_C
{
public:
	uint8                                        Pad_209C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 FullScreenTVPP_OnlyMaterialModified;               // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FrontEndCameraSwitchFadeAthena_SwipeLines_Animation_8828A7EA43DFA9153F986F805918F9F7; // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FrontEndCameraSwitchFadeAthena_PostProcessVisibility_8828A7EA43DFA9153F986F805918F9F7; // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FrontEndCameraSwitchFadeAthena__Direction_8828A7EA43DFA9153F986F805918F9F7; // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_209D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    FrontEndCameraSwitchFadeAthena;                    // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TVPostProcessBPAthena_C");
		return Clss;
	}

	void IsEnabledForCurrentSubgame(bool* bEnabled, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void FrontEndCameraSwitchFadeAthena__FinishedFunc();
	void FrontEndCameraSwitchFadeAthena__UpdateFunc();
	void ExecuteCameraSwitch();
	void Camera_DisableEffects();
	void ExecuteUbergraph_TVPostProcessBPAthena(int32 EntryPoint, float CallFunc_GetUnpausedTimeSeconds_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
