#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Athena_IGiveSneakySnowman.Athena_IGiveSneakySnowman_C
class IAthena_IGiveSneakySnowman_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAthena_IGiveSneakySnowman_C* GetDefaultObj();

	void SpawnParticles();
	void GetNewSnowmanTransform(struct FTransform* Transform);
	void OnTookSneakySnowman();
	void OnStartedJumpingIn();
	void MovePlayer(class AActor* Player);
	void OnGaveSneakySnowman();
};

}


