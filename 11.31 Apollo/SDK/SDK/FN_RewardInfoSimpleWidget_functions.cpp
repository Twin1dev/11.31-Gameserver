#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RewardInfoSimpleWidget.RewardInfoSimpleWidget_C
// (None)

class UClass* URewardInfoSimpleWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RewardInfoSimpleWidget_C");

	return Clss;
}


// RewardInfoSimpleWidget_C RewardInfoSimpleWidget.Default__RewardInfoSimpleWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URewardInfoSimpleWidget_C* URewardInfoSimpleWidget_C::GetDefaultObj()
{
	static class URewardInfoSimpleWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URewardInfoSimpleWidget_C*>(URewardInfoSimpleWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.GetDisplayName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DisplayName                                                      (Parm, OutParm)
// class FText                        OutName                                                          (Edit, BlueprintVisible)
// enum class EFortItemType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// class FText                        Temp_text_Variable_12                                            (None)
// class FText                        Temp_text_Variable_13                                            (None)
// class FText                        Temp_text_Variable_14                                            (None)
// class FText                        Temp_text_Variable_15                                            (None)
// class FText                        Temp_text_Variable_16                                            (None)
// class FText                        Temp_text_Variable_17                                            (None)
// class FText                        Temp_text_Variable_18                                            (None)
// class FText                        Temp_text_Variable_19                                            (None)
// class FText                        Temp_text_Variable_20                                            (None)
// class FText                        Temp_text_Variable_21                                            (None)
// class FText                        Temp_text_Variable_22                                            (None)
// class FText                        Temp_text_Variable_23                                            (None)
// class FText                        Temp_text_Variable_24                                            (None)
// class FText                        Temp_text_Variable_25                                            (None)
// class FText                        Temp_text_Variable_26                                            (None)
// class FText                        Temp_text_Variable_27                                            (None)
// class FText                        Temp_text_Variable_28                                            (None)
// class FText                        Temp_text_Variable_29                                            (None)
// class FText                        Temp_text_Variable_30                                            (None)
// class FText                        Temp_text_Variable_31                                            (None)
// class FText                        Temp_text_Variable_32                                            (None)
// class FText                        Temp_text_Variable_33                                            (None)
// class FText                        Temp_text_Variable_34                                            (None)
// class FText                        Temp_text_Variable_35                                            (None)
// class FText                        Temp_text_Variable_36                                            (None)
// class FText                        Temp_text_Variable_37                                            (None)
// class FText                        Temp_text_Variable_38                                            (None)
// class FText                        Temp_text_Variable_39                                            (None)
// class FText                        Temp_text_Variable_40                                            (None)
// class FText                        Temp_text_Variable_41                                            (None)
// class FText                        Temp_text_Variable_42                                            (None)
// class FText                        Temp_text_Variable_43                                            (None)
// class FText                        Temp_text_Variable_44                                            (None)
// class FText                        Temp_text_Variable_45                                            (None)
// class FText                        Temp_text_Variable_46                                            (None)
// class FText                        Temp_text_Variable_47                                            (None)
// class FText                        Temp_text_Variable_48                                            (None)
// class FText                        Temp_text_Variable_49                                            (None)
// class FText                        Temp_text_Variable_50                                            (None)
// class FText                        Temp_text_Variable_51                                            (None)
// class FText                        Temp_text_Variable_52                                            (None)
// class FText                        Temp_text_Variable_53                                            (None)
// class FText                        Temp_text_Variable_54                                            (None)
// class FText                        Temp_text_Variable_55                                            (None)
// class FText                        Temp_text_Variable_56                                            (None)
// class FText                        Temp_text_Variable_57                                            (None)
// class FText                        Temp_text_Variable_58                                            (None)
// class FText                        Temp_text_Variable_59                                            (None)
// class FText                        Temp_text_Variable_60                                            (None)
// class FText                        Temp_text_Variable_61                                            (None)
// class FText                        Temp_text_Variable_62                                            (None)
// class FText                        Temp_text_Variable_63                                            (None)
// class FText                        Temp_text_Variable_64                                            (None)
// class FText                        Temp_text_Variable_65                                            (None)
// class FText                        Temp_text_Variable_66                                            (None)
// class FText                        Temp_text_Variable_67                                            (None)
// class FText                        Temp_text_Variable_68                                            (None)
// class FText                        Temp_text_Variable_69                                            (None)
// class FText                        Temp_text_Variable_70                                            (None)
// class FText                        Temp_text_Variable_71                                            (None)
// class FText                        Temp_text_Variable_72                                            (None)
// class FText                        Temp_text_Variable_73                                            (None)
// class FText                        Temp_text_Variable_74                                            (None)
// class FText                        Temp_text_Variable_75                                            (None)
// class FText                        Temp_text_Variable_76                                            (None)
// class FText                        Temp_text_Variable_77                                            (None)
// class FText                        Temp_text_Variable_78                                            (None)
// class FText                        Temp_text_Variable_79                                            (None)
// class FText                        Temp_text_Variable_80                                            (None)
// class FText                        Temp_text_Variable_81                                            (None)
// class FText                        Temp_text_Variable_82                                            (None)
// class FText                        Temp_text_Variable_83                                            (None)
// class FText                        Temp_text_Variable_84                                            (None)
// class FText                        Temp_text_Variable_85                                            (None)
// class FText                        Temp_text_Variable_86                                            (None)
// class FText                        Temp_text_Variable_87                                            (None)
// class FText                        Temp_text_Variable_88                                            (None)
// class FText                        Temp_text_Variable_89                                            (None)
// class FText                        Temp_text_Variable_90                                            (None)
// class FText                        Temp_text_Variable_91                                            (None)
// class FText                        Temp_text_Variable_92                                            (None)
// class FText                        Temp_text_Variable_93                                            (None)
// class FText                        Temp_text_Variable_94                                            (None)
// class FText                        Temp_text_Variable_95                                            (None)
// class FText                        Temp_text_Variable_96                                            (None)
// class FText                        Temp_text_Variable_97                                            (None)
// class FText                        Temp_text_Variable_98                                            (None)
// class FText                        Temp_text_Variable_99                                            (None)
// class FText                        Temp_text_Variable_100                                           (None)
// class FText                        Temp_text_Variable_101                                           (None)
// class FText                        Temp_text_Variable_102                                           (None)
// class FText                        Temp_text_Variable_103                                           (None)
// class FText                        Temp_text_Variable_104                                           (None)
// class FText                        Temp_text_Variable_105                                           (None)
// class FText                        Temp_text_Variable_106                                           (None)
// class FText                        Temp_text_Variable_107                                           (None)
// class FText                        Temp_text_Variable_108                                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             (None)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue_2                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWorker*                 K2Node_DynamicCast_AsFort_Worker                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortInventoryFilter    CallFunc_GetFilterCategory_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTertiaryCategory_ItemCategoryText                    (None)
// struct FSlateBrush                 CallFunc_GetTertiaryCategory_ItemCategoryBrush                   (None)
// bool                               CallFunc_GetTertiaryCategory_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// enum class EFortItemType           CallFunc_GetType_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetType_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)

void URewardInfoSimpleWidget_C::GetDisplayName(class FText* DisplayName, class FText OutName, enum class EFortItemType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, class FText Temp_text_Variable_26, class FText Temp_text_Variable_27, class FText Temp_text_Variable_28, class FText Temp_text_Variable_29, class FText Temp_text_Variable_30, class FText Temp_text_Variable_31, class FText Temp_text_Variable_32, class FText Temp_text_Variable_33, class FText Temp_text_Variable_34, class FText Temp_text_Variable_35, class FText Temp_text_Variable_36, class FText Temp_text_Variable_37, class FText Temp_text_Variable_38, class FText Temp_text_Variable_39, class FText Temp_text_Variable_40, class FText Temp_text_Variable_41, class FText Temp_text_Variable_42, class FText Temp_text_Variable_43, class FText Temp_text_Variable_44, class FText Temp_text_Variable_45, class FText Temp_text_Variable_46, class FText Temp_text_Variable_47, class FText Temp_text_Variable_48, class FText Temp_text_Variable_49, class FText Temp_text_Variable_50, class FText Temp_text_Variable_51, class FText Temp_text_Variable_52, class FText Temp_text_Variable_53, class FText Temp_text_Variable_54, class FText Temp_text_Variable_55, class FText Temp_text_Variable_56, class FText Temp_text_Variable_57, class FText Temp_text_Variable_58, class FText Temp_text_Variable_59, class FText Temp_text_Variable_60, class FText Temp_text_Variable_61, class FText Temp_text_Variable_62, class FText Temp_text_Variable_63, class FText Temp_text_Variable_64, class FText Temp_text_Variable_65, class FText Temp_text_Variable_66, class FText Temp_text_Variable_67, class FText Temp_text_Variable_68, class FText Temp_text_Variable_69, class FText Temp_text_Variable_70, class FText Temp_text_Variable_71, class FText Temp_text_Variable_72, class FText Temp_text_Variable_73, class FText Temp_text_Variable_74, class FText Temp_text_Variable_75, class FText Temp_text_Variable_76, class FText Temp_text_Variable_77, class FText Temp_text_Variable_78, class FText Temp_text_Variable_79, class FText Temp_text_Variable_80, class FText Temp_text_Variable_81, class FText Temp_text_Variable_82, class FText Temp_text_Variable_83, class FText Temp_text_Variable_84, class FText Temp_text_Variable_85, class FText Temp_text_Variable_86, class FText Temp_text_Variable_87, class FText Temp_text_Variable_88, class FText Temp_text_Variable_89, class FText Temp_text_Variable_90, class FText Temp_text_Variable_91, class FText Temp_text_Variable_92, class FText Temp_text_Variable_93, class FText Temp_text_Variable_94, class FText Temp_text_Variable_95, class FText Temp_text_Variable_96, class FText Temp_text_Variable_97, class FText Temp_text_Variable_98, class FText Temp_text_Variable_99, class FText Temp_text_Variable_100, class FText Temp_text_Variable_101, class FText Temp_text_Variable_102, class FText Temp_text_Variable_103, class FText Temp_text_Variable_104, class FText Temp_text_Variable_105, class FText Temp_text_Variable_106, class FText Temp_text_Variable_107, class FText Temp_text_Variable_108, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UFortItem* CallFunc_GetItemInstance_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class UFortItem* CallFunc_GetItemInstance_ReturnValue_1, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess, enum class EFortInventoryFilter CallFunc_GetFilterCategory_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class UFortItem* CallFunc_GetItemInstance_ReturnValue_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, enum class EFortItemType CallFunc_GetType_ReturnValue, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UFortItem* CallFunc_GetItemInstance_ReturnValue_4, enum class EFortItemType CallFunc_GetType_ReturnValue_1, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardInfoSimpleWidget_C", "GetDisplayName");

	Params::URewardInfoSimpleWidget_C_GetDisplayName_Params Parms{};

	Parms.OutName = OutName;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.Temp_text_Variable_20 = Temp_text_Variable_20;
	Parms.Temp_text_Variable_21 = Temp_text_Variable_21;
	Parms.Temp_text_Variable_22 = Temp_text_Variable_22;
	Parms.Temp_text_Variable_23 = Temp_text_Variable_23;
	Parms.Temp_text_Variable_24 = Temp_text_Variable_24;
	Parms.Temp_text_Variable_25 = Temp_text_Variable_25;
	Parms.Temp_text_Variable_26 = Temp_text_Variable_26;
	Parms.Temp_text_Variable_27 = Temp_text_Variable_27;
	Parms.Temp_text_Variable_28 = Temp_text_Variable_28;
	Parms.Temp_text_Variable_29 = Temp_text_Variable_29;
	Parms.Temp_text_Variable_30 = Temp_text_Variable_30;
	Parms.Temp_text_Variable_31 = Temp_text_Variable_31;
	Parms.Temp_text_Variable_32 = Temp_text_Variable_32;
	Parms.Temp_text_Variable_33 = Temp_text_Variable_33;
	Parms.Temp_text_Variable_34 = Temp_text_Variable_34;
	Parms.Temp_text_Variable_35 = Temp_text_Variable_35;
	Parms.Temp_text_Variable_36 = Temp_text_Variable_36;
	Parms.Temp_text_Variable_37 = Temp_text_Variable_37;
	Parms.Temp_text_Variable_38 = Temp_text_Variable_38;
	Parms.Temp_text_Variable_39 = Temp_text_Variable_39;
	Parms.Temp_text_Variable_40 = Temp_text_Variable_40;
	Parms.Temp_text_Variable_41 = Temp_text_Variable_41;
	Parms.Temp_text_Variable_42 = Temp_text_Variable_42;
	Parms.Temp_text_Variable_43 = Temp_text_Variable_43;
	Parms.Temp_text_Variable_44 = Temp_text_Variable_44;
	Parms.Temp_text_Variable_45 = Temp_text_Variable_45;
	Parms.Temp_text_Variable_46 = Temp_text_Variable_46;
	Parms.Temp_text_Variable_47 = Temp_text_Variable_47;
	Parms.Temp_text_Variable_48 = Temp_text_Variable_48;
	Parms.Temp_text_Variable_49 = Temp_text_Variable_49;
	Parms.Temp_text_Variable_50 = Temp_text_Variable_50;
	Parms.Temp_text_Variable_51 = Temp_text_Variable_51;
	Parms.Temp_text_Variable_52 = Temp_text_Variable_52;
	Parms.Temp_text_Variable_53 = Temp_text_Variable_53;
	Parms.Temp_text_Variable_54 = Temp_text_Variable_54;
	Parms.Temp_text_Variable_55 = Temp_text_Variable_55;
	Parms.Temp_text_Variable_56 = Temp_text_Variable_56;
	Parms.Temp_text_Variable_57 = Temp_text_Variable_57;
	Parms.Temp_text_Variable_58 = Temp_text_Variable_58;
	Parms.Temp_text_Variable_59 = Temp_text_Variable_59;
	Parms.Temp_text_Variable_60 = Temp_text_Variable_60;
	Parms.Temp_text_Variable_61 = Temp_text_Variable_61;
	Parms.Temp_text_Variable_62 = Temp_text_Variable_62;
	Parms.Temp_text_Variable_63 = Temp_text_Variable_63;
	Parms.Temp_text_Variable_64 = Temp_text_Variable_64;
	Parms.Temp_text_Variable_65 = Temp_text_Variable_65;
	Parms.Temp_text_Variable_66 = Temp_text_Variable_66;
	Parms.Temp_text_Variable_67 = Temp_text_Variable_67;
	Parms.Temp_text_Variable_68 = Temp_text_Variable_68;
	Parms.Temp_text_Variable_69 = Temp_text_Variable_69;
	Parms.Temp_text_Variable_70 = Temp_text_Variable_70;
	Parms.Temp_text_Variable_71 = Temp_text_Variable_71;
	Parms.Temp_text_Variable_72 = Temp_text_Variable_72;
	Parms.Temp_text_Variable_73 = Temp_text_Variable_73;
	Parms.Temp_text_Variable_74 = Temp_text_Variable_74;
	Parms.Temp_text_Variable_75 = Temp_text_Variable_75;
	Parms.Temp_text_Variable_76 = Temp_text_Variable_76;
	Parms.Temp_text_Variable_77 = Temp_text_Variable_77;
	Parms.Temp_text_Variable_78 = Temp_text_Variable_78;
	Parms.Temp_text_Variable_79 = Temp_text_Variable_79;
	Parms.Temp_text_Variable_80 = Temp_text_Variable_80;
	Parms.Temp_text_Variable_81 = Temp_text_Variable_81;
	Parms.Temp_text_Variable_82 = Temp_text_Variable_82;
	Parms.Temp_text_Variable_83 = Temp_text_Variable_83;
	Parms.Temp_text_Variable_84 = Temp_text_Variable_84;
	Parms.Temp_text_Variable_85 = Temp_text_Variable_85;
	Parms.Temp_text_Variable_86 = Temp_text_Variable_86;
	Parms.Temp_text_Variable_87 = Temp_text_Variable_87;
	Parms.Temp_text_Variable_88 = Temp_text_Variable_88;
	Parms.Temp_text_Variable_89 = Temp_text_Variable_89;
	Parms.Temp_text_Variable_90 = Temp_text_Variable_90;
	Parms.Temp_text_Variable_91 = Temp_text_Variable_91;
	Parms.Temp_text_Variable_92 = Temp_text_Variable_92;
	Parms.Temp_text_Variable_93 = Temp_text_Variable_93;
	Parms.Temp_text_Variable_94 = Temp_text_Variable_94;
	Parms.Temp_text_Variable_95 = Temp_text_Variable_95;
	Parms.Temp_text_Variable_96 = Temp_text_Variable_96;
	Parms.Temp_text_Variable_97 = Temp_text_Variable_97;
	Parms.Temp_text_Variable_98 = Temp_text_Variable_98;
	Parms.Temp_text_Variable_99 = Temp_text_Variable_99;
	Parms.Temp_text_Variable_100 = Temp_text_Variable_100;
	Parms.Temp_text_Variable_101 = Temp_text_Variable_101;
	Parms.Temp_text_Variable_102 = Temp_text_Variable_102;
	Parms.Temp_text_Variable_103 = Temp_text_Variable_103;
	Parms.Temp_text_Variable_104 = Temp_text_Variable_104;
	Parms.Temp_text_Variable_105 = Temp_text_Variable_105;
	Parms.Temp_text_Variable_106 = Temp_text_Variable_106;
	Parms.Temp_text_Variable_107 = Temp_text_Variable_107;
	Parms.Temp_text_Variable_108 = Temp_text_Variable_108;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetItemInstance_ReturnValue = CallFunc_GetItemInstance_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue_1 = CallFunc_BPGetRarityData_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_BPGetRarityData_ReturnValue_2 = CallFunc_BPGetRarityData_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_GetItemInstance_ReturnValue_1 = CallFunc_GetItemInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Worker = K2Node_DynamicCast_AsFort_Worker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFilterCategory_ReturnValue = CallFunc_GetFilterCategory_ReturnValue;
	Parms.CallFunc_GetItemInstance_ReturnValue_2 = CallFunc_GetItemInstance_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryText = CallFunc_GetTertiaryCategory_ItemCategoryText;
	Parms.CallFunc_GetTertiaryCategory_ItemCategoryBrush = CallFunc_GetTertiaryCategory_ItemCategoryBrush;
	Parms.CallFunc_GetTertiaryCategory_ReturnValue = CallFunc_GetTertiaryCategory_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_GetItemInstance_ReturnValue_3 = CallFunc_GetItemInstance_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetType_ReturnValue = CallFunc_GetType_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetItemInstance_ReturnValue_4 = CallFunc_GetItemInstance_ReturnValue_4;
	Parms.CallFunc_GetType_ReturnValue_1 = CallFunc_GetType_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = Parms.DisplayName;

}


// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void URewardInfoSimpleWidget_C::HandleDifferentItemOrQuantitySetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardInfoSimpleWidget_C", "HandleDifferentItemOrQuantitySetBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RewardInfoSimpleWidget.RewardInfoSimpleWidget_C.ExecuteUbergraph_RewardInfoSimpleWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuantity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_GetItemInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSmallPreviewImage_ReturnValue                        (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void URewardInfoSimpleWidget_C::ExecuteUbergraph_RewardInfoSimpleWidget(int32 EntryPoint, int32 CallFunc_GetQuantity_ReturnValue, class UFortItem* CallFunc_GetItemInstance_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RewardInfoSimpleWidget_C", "ExecuteUbergraph_RewardInfoSimpleWidget");

	Params::URewardInfoSimpleWidget_C_ExecuteUbergraph_RewardInfoSimpleWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetQuantity_ReturnValue = CallFunc_GetQuantity_ReturnValue;
	Parms.CallFunc_GetItemInstance_ReturnValue = CallFunc_GetItemInstance_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_GetSmallPreviewImage_ReturnValue = CallFunc_GetSmallPreviewImage_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


