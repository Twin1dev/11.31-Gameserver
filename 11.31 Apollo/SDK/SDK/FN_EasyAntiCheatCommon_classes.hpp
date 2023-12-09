#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB8 - 0xB0)
// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	uint8                                        Pad_2478[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEasyAntiCheatNetComponent* GetDefaultObj();

	void ServerMessage(TArray<uint8>& Message);
	void ClientMessage(TArray<uint8>& Message);
};

}


