#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xCD8 - 0xCB8)
// BlueprintGeneratedClass B_Athena_Galileo_Lobster_Kayak.B_Athena_Galileo_Lobster_Kayak_C
class AB_Athena_Galileo_Lobster_Kayak_C : public AB_Athena_Galileo_Lobster_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xCB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_2_ActivationSub_B4C83C5E41BD7B2B67CEE4BE7B40F62B; // 0xCC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_2_Activation_B4C83C5E41BD7B2B67CEE4BE7B40F62B; // 0xCC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_2__Direction_B4C83C5E41BD7B2B67CEE4BE7B40F62B; // 0xCC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AA9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_2;                                        // 0xCD0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Athena_Galileo_Lobster_Kayak_C* GetDefaultObj();

	void CreateSkeletalAudioComp(class UFortSkeletalAudioComponent** Component, const struct FTransform& Temp_struct_Variable, class UFortSkeletalAudioComponent* CallFunc_AddComponent_ReturnValue);
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_2__TurnOnIdleLightningBeam__EventFunc();
	void BlockBreak();
	void CurrentPoiseChanged(float CurrentPoise);
	void StartIdleFX();
	void DoBulletBlockEffect(const struct FVector& ImpactLocation);
	void TurnOnLobster();
	void ExecuteUbergraph_B_Athena_Galileo_Lobster_Kayak(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float K2Node_Event_CurrentPoise, const struct FVector& K2Node_Event_ImpactLocation, float CallFunc_GetGameTimeInSeconds_ReturnValue);
};

}


