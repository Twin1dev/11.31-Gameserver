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

// 0x0 (0x28 - 0x28)
// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimationBudgetBlueprintLibrary");
		return Clss;
	}

	void SetAnimationBudgetParameters(class UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters& InParameters);
	void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
};

// 0x28 (0xAB0 - 0xA88)
// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	uint8                                        Pad_1643[0x20];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	uint8                                        bAutoRegisterWithBudgetAllocator : 1;              // Mask: 0x1, PropSize: 0x10xAA8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAutoCalculateSignificance : 1;                    // Mask: 0x2, PropSize: 0x10xAA8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bShouldUseActorRenderedFlag : 1;                   // Mask: 0x4, PropSize: 0x10xAA8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1644[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SkeletalMeshComponentBudgeted");
		return Clss;
	}

	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
