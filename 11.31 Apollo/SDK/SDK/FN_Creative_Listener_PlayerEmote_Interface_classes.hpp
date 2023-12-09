#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Creative_Listener_PlayerEmote_Interface.Creative_Listener_PlayerEmote_Interface_C
class ICreative_Listener_PlayerEmote_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICreative_Listener_PlayerEmote_Interface_C* GetDefaultObj();

	void OnPlayerEmoteEnded(class AFortPawn* PlayerEmoting);
	void OnPlayerEmoteStarted(class AFortPawn* PlayerEmoting);
};

}


