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

// 0x8 (0x110 - 0x108)
// BlueprintGeneratedClass FriendNotification.FriendNotification_C
class UFriendNotification_C : public UFortUIFriendNotification
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x108(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FriendNotification_C");
		return Clss;
	}

	void JoinPartyInvite();
	void ShowFriendInvites();
	void ExecuteUbergraph_FriendNotification(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
