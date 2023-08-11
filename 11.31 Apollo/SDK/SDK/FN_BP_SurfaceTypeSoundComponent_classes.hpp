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

// 0x6D (0x11D - 0xB0)
// BlueprintGeneratedClass BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C
class UBP_SurfaceTypeSoundComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EPhysicalSurface                  SurfaceType;                                       // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D13[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TMap<enum class EPhysicalSurface, class USoundBase*> SoundMap;                                          // 0xC0(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               Location;                                          // 0x110(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSurfaceTypeSet;                                  // 0x11C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_SurfaceTypeSoundComponent_C");
		return Clss;
	}

	void ActuallyPlaySound(class USoundBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void SetSurfaceType(enum class EPhysicalSurface SurfaceType, class AActor* Actor, enum class EPhysicalSurface Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor, bool K2Node_DynamicCast_bSuccess, enum class EPhysicalSurface Temp_byte_Variable_1, enum class EPhysicalSurface Temp_byte_Variable_2, enum class EPhysicalSurface Temp_byte_Variable_3, enum class EPhysicalSurface Temp_byte_Variable_4, enum class EFortResourceType Temp_byte_Variable_5, enum class EPhysicalSurface Temp_byte_Variable_6, enum class EPhysicalSurface K2Node_Select_Default);
	void PlaySound(const struct FVector& Location, class USoundBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Test_Delay();
	void ExecuteUbergraph_BP_SurfaceTypeSoundComponent(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
