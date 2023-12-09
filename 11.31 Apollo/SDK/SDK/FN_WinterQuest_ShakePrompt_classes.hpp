#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0xBEC - 0xBC0)
// WidgetBlueprintGeneratedClass WinterQuest_ShakePrompt.WinterQuest_ShakePrompt_C
class UWinterQuest_ShakePrompt_C : public UFortWinterQuestButton
{
public:
	class UWidgetAnimation*                      UsingResource_Example;                             // 0xBC0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      UsingResource;                                     // 0xBC8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      IntroAnim;                                         // 0xBD0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                PointerArrow_Left;                                 // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RadialHoldButtonBacking_Left;                      // 0xBE0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        HoldProgressOffset;                                // 0xBE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWinterQuest_ShakePrompt_C* GetDefaultObj();

	void UpdateShakePercentage(float InPercentage, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void PlayShakeAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ShakeButtonIntro(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


