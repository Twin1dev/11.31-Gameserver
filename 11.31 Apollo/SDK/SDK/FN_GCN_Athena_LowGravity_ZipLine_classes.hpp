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

// 0xC (0x368 - 0x35C)
// BlueprintGeneratedClass GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C
class AGCN_Athena_LowGravity_ZipLine_C : public AGCN_Athena_LowGravity_C
{
public:
	uint8                                        Pad_5378[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Athena_LowGravity_ZipLine_C");
		return Clss;
	}

	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
