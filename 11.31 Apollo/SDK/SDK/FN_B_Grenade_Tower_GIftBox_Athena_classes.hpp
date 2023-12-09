#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xA4C - 0xA38)
// BlueprintGeneratedClass B_Grenade_Tower_GIftBox_Athena.B_Grenade_Tower_GIftBox_Athena_C
class AB_Grenade_Tower_GIftBox_Athena_C : public AB_Grenade_Tower_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SK_Gift_Box;                                       // 0xA40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        Colour_Random;                                     // 0xA48(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AB_Grenade_Tower_GIftBox_Athena_C* GetDefaultObj();

	void Update_Mesh(int32 Temp_int_Variable, class USkeletalMesh* Temp_object_Variable, class USkeletalMesh* Temp_object_Variable_1, class USkeletalMesh* Temp_object_Variable_2, bool CallFunc_IsDedicatedServer_ReturnValue, class USkeletalMesh* K2Node_Select_Default);
	void Randomize_Colour(bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue);
	void OnRep_Colour_Random();
	void ReceiveBeginPlay();
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void ExecuteUbergraph_B_Grenade_Tower_GIftBox_Athena(int32 EntryPoint, bool K2Node_Event_bVisible, bool K2Node_Event_bSetForLocalControllerOnly, bool CallFunc_HasAuthority_ReturnValue);
};

}


