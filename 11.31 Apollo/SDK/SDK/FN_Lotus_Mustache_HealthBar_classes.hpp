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

// 0x18 (0x248 - 0x230)
// WidgetBlueprintGeneratedClass Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C
class ULotus_Mustache_HealthBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                          ProgressBar_35;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                Target;                                            // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Lotus_Mustache_HealthBar_C");
		return Clss;
	}

	void Construct();
	void Destruct();
	void SetHealth(float HealthPercent);
	void ExecuteUbergraph_Lotus_Mustache_HealthBar(int32 EntryPoint, float K2Node_CustomEvent_HealthPercent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
