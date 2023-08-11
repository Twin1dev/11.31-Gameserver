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

// 0x100 (0x1B0 - 0xB0)
// Class UACBase.UACNetworkComponent
class UUACNetworkComponent : public UActorComponent
{
public:
	int32                                        PlayerID;                                          // 0xB0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2193[0xFC];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UACNetworkComponent");
		return Clss;
	}

	void SendPacketToServer(uint8 Type, TArray<uint8>& Packet);
	void SendPacketToClient(uint8 Type, TArray<uint8>& Packet);
	void SendClientHello(uint32 SessionKey);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
