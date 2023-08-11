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

// 0x8 (0x258 - 0x250)
// BlueprintGeneratedClass VaultWorld.VaultWorld_C
class AVaultWorld_C : public AFortItemPreviewVaultWorld
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VaultWorld_C");
		return Clss;
	}

	void GetVaultRotator(class AVaultRotator_C** VaultRotator, class AVaultRotator_C* K2Node_DynamicCast_AsVault_Rotator, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_VaultWorld(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AFortStaticMeshActor* K2Node_DynamicCast_AsFort_Static_Mesh_Actor, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
