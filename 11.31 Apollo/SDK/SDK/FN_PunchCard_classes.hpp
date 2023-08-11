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

// 0xC5 (0x43D - 0x378)
// WidgetBlueprintGeneratedClass PunchCard.PunchCard_C
class UPunchCard_C : public UAthenaPunchCard
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x378(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Outro;                                             // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x388(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_Complete;                     // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             GridScale;                                         // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Header;                              // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_FlatBG;                                      // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_NoBG;                                        // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SuperBorder;                                 // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageBackground;                                   // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPunchCardEntry_C*                     PunchCardEntry_0;                                  // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPunchCardEntry_C*                     PunchCardEntry_1;                                  // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPunchCardEntry_C*                     PunchCardEntry_2;                                  // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPunchCardEntry_C*                     PunchCardEntry_3;                                  // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPunchCardEntry_C*                     PunchCardEntry_4;                                  // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPunchCardEntry_C*                     PunchCardEntry_5;                                  // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPunchCardEntry_C*                     PunchCardEntry_6;                                  // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPunchCardEntry_C*                     PunchCardEntry_7;                                  // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPunchCardEntry_C*                     PunchCardEntry_8;                                  // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPunchCardEntry_C*                     PunchCardEntry_9;                                  // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_ChallengeName;                                // 0x420(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_BackgroundType;                     // 0x428(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 WidgetSwitcher_Header;                             // 0x430(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        LocationType;                                      // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSuper;                                           // 0x43C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PunchCard_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void RunIntroAnim();
	void MedalFInishedPlacing();
	void ShowWidget();
	void On_Intro_Done();
	void FinishedPlacingMedals(bool bPlayOutro);
	void On_Outro_Finished();
	void UpdateCardCompleted(bool bCompleted);
	void SetSuperStyle(bool IsSuper);
	void ExecuteUbergraph_PunchCard(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, int32 Temp_int_Variable_5, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, int32 Temp_int_Variable_6, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_6, float Temp_float_Variable_7, bool K2Node_Event_IsDesignTime, int32 K2Node_Select_Default, float K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, float K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bPlayOutro, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_bCompleted, bool K2Node_CustomEvent_isSuper, class UClass* K2Node_Select_Default_5, float K2Node_Select_Default_6, int32 Temp_int_Variable_8, enum class ESlateVisibility K2Node_Select_Default_7);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
