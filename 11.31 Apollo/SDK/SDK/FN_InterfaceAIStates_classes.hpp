#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass InterfaceAIStates.InterfaceAIStates_C
class IInterfaceAIStates_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterfaceAIStates_C* GetDefaultObj();

	void PortalCollision(bool Collide_);
	void PortalFX();
	void PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList, class AActor* BT);
	void TakerSoulSuckInterrupted();
	void PortalClear();
	void PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList);
	void TakerSoulSuckSoundEnd();
	void TakerSoulSuckSoundBegin(bool Success);
	void TakerAttackFSM(bool SuccessfulHit);
	void IsTakerWallPortalAvailable(bool Portal_Available_);
	void TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug);
	void EndTakerSwoopAttack();
	void BeginTakerSwoopAttack();
	void ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal);
	void VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal);
	void HuskEvadeStart();
	void MantleEnd();
	void MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall);
};

}


