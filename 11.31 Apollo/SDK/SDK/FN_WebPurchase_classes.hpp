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

// 0x20 (0x440 - 0x420)
// WidgetBlueprintGeneratedClass WebPurchase.WebPurchase_C
class UWebPurchase_C : public UFortWebPurchaseScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                     Throbber;                                          // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackAction;                                        // 0x430(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WebPurchase_C");
		return Clss;
	}

	void HandleBack(bool* bPassThrough, class UFortMcpContext* CallFunc_GetContext_ReturnValue);
	void BindDelegates();
	void BP_OnActivated();
	void ExecuteUbergraph_WebPurchase(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasInputActionHandler_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
