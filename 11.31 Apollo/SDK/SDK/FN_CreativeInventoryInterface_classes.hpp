#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass CreativeInventoryInterface.CreativeInventoryInterface_C
class ICreativeInventoryInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICreativeInventoryInterface_C* GetDefaultObj();

	void TabbedOff();
	void InventoryClosed();
	void Major_Tab_Changed(bool bToHere);
	void Setup_Nav();
};

}


