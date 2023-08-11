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

// 0x48 (0x338 - 0x2F0)
// WidgetBlueprintGeneratedClass AthenaChatWidget.AthenaChatWidget_C
class UAthenaChatWidget_C : public UAthenaActivatableChatWidget
{
public:
	struct FDataTableRowHandle                   CloseUserListAction;                               // 0x2F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   OpenUserListAction;                                // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CurrentUserListAction;                             // 0x310(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         bEnteringChat;                                     // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6268[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UMulticastInlineDelegateProperty_            OnEnteredChat;                                     // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaChatWidget_C");
		return Clss;
	}

	void OnEnteredChat__DelegateSignature(bool EnteredChat);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
