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
// BlueprintGeneratedClass BPI_HuskDance.BPI_HuskDance_C
class IBPI_HuskDance_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BPI_HuskDance_C");
		return Clss;
	}

	void OnEndDance();
	void OnBeginDance();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
