#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2A8 - 0x258)
// WidgetBlueprintGeneratedClass XpMatchProgression.XpMatchProgression_C
class UXpMatchProgression_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USmallLevelUpReward_C*                 LevelUpReward;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayerLevel_C*                  PlayerLevelBar;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TotalScore;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TotalXp;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpReasonFeed_C*                       XpReasonFeed;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FAthenaMatchXpReward>          XpRewards;                                         // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                        XpRewardIndex;                                     // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayingLeveling;                                   // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_72B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaPlayerMatchReport*              Report;                                            // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UXpMatchProgression_C* GetDefaultObj();

	void UpdateRewardForLevel(int32 SeasonLevel, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, const struct FFortItemInstanceQuantityPair& CallFunc_GetSeasonLevelUpReward_Reward, int32 CallFunc_GetSeasonLevelUpReward_RewardLevel, bool CallFunc_GetSeasonLevelUpReward_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool IsReadyForNextXpEvent(bool CallFunc_IsReadyForNextXpReward_Ready, bool CallFunc_IsReadyForNextXpReward_Ready_1, bool CallFunc_BooleanAND_ReturnValue);
	void TickRewardAnimation(bool CallFunc_IsReadyForNextXpEvent_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetPlayerState(class AFortPlayerControllerAthena* PlayerController, const struct FAthenaLevelInfo& AthenaLevelInfo);
	void Play_Xp_Rewards(class UAthenaPlayerMatchReport* Report);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Finished_Playing_Animation();
	void Destruct();
	void BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature(int32 Level);
	void ExecuteUbergraph_XpMatchProgression(int32 EntryPoint, class UAthenaPlayerMatchReport* K2Node_CustomEvent_Report, TArray<struct FAthenaMatchXpReward>& CallFunc_GetXpRewards_XpRewards, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_ComponentBoundEvent_Level, int32 CallFunc_GetTotalScoreEarned_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetTotalSeasonalXpEarned_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
};

}


