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
// BlueprintGeneratedClass Creative_Listener_PlayerEmote_Interface.Creative_Listener_PlayerEmote_Interface_C
class ICreative_Listener_PlayerEmote_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Creative_Listener_PlayerEmote_Interface_C");
		return Clss;
	}

	void OnPlayerEmoteEnded(class AFortPawn* PlayerEmoting);
	void OnPlayerEmoteStarted(class AFortPawn* PlayerEmoting);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
