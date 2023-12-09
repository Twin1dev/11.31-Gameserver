#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x260 - 0x258)
// WidgetBlueprintGeneratedClass CreativeServerFriend.CreativeServerFriend_C
class UCreativeServerFriend_C : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      Text_FriendName;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCreativeServerFriend_C* GetDefaultObj();

	void InitData(const class FString& FriendName, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}


