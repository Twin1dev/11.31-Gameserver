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

// 0x5F (0x28F - 0x230)
// WidgetBlueprintGeneratedClass UIEmitter.UIEmitter_C
class UUIEmitter_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              Overlay_Emitter;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIEmitterElement_C*                   UIEmmitterElement;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UMaterialInstance*>             Materials;                                         // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	int32                                        MaxElements;                                       // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             AngleRange;                                        // 0x25C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             DistanceRange;                                     // 0x264(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ParticleLifeRange;                                 // 0x26C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SpinSpeedRange;                                    // 0x274(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SizeRange;                                         // 0x27C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             EmitterLifeRange;                                  // 0x284(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RunOnce;                                           // 0x28C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         StartAutomatically;                                // 0x28D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         EmitterExpired;                                    // 0x28E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UIEmitter_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void CreateEmitterElement();
	void SetImage(class UUIEmitterElement_C* EmitterElement);
	void StartEmitter();
	void ExecuteUbergraph_UIEmitter(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UUIEmitterElement_C* CallFunc_Create_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, bool K2Node_Event_IsDesignTime, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUIEmitterElement_C* K2Node_CustomEvent_EmitterElement, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UMaterialInstance* CallFunc_Array_Get_Item, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float CallFunc_RandomFloatInRange_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, float CallFunc_RandomFloatInRange_ReturnValue_4, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_5, float CallFunc_BreakVector2D_Y_5, float CallFunc_RandomFloatInRange_ReturnValue_5);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
