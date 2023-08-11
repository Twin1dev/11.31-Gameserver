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
// BlueprintGeneratedClass InterfacePlayerPawn.InterfacePlayerPawn_C
class IInterfacePlayerPawn_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InterfacePlayerPawn_C");
		return Clss;
	}

	void MeleeSwingLeft_End();
	void MeleeSwingRight_End();
	void FootStepRight();
	void FootStepLeft();
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void MeleeSwingLeft(bool First_Left);
	void MeleeSwingRight(bool First_Right);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
