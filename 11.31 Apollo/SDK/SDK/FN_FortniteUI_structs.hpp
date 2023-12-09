#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPostGameHUDState : uint8
{
	None                           = 0,
	AllHidden                      = 1,
	Spectating                     = 2,
	AllHiddenExceptXP              = 3,
	EPostGameHUDState_MAX          = 4,
};

enum class EFortHitPointModificationReason : uint8
{
	Invalid                        = 0,
	InitalSet                      = 1,
	AutoRegen                      = 2,
	ItemRegen                      = 3,
	DamageOverTime                 = 4,
	DamageReceived                 = 5,
	EFortHitPointModificationReason_MAX = 6,
};

enum class EFortBuildingInteraction : uint8
{
	None                           = 0,
	Build                          = 1,
	Repair                         = 2,
	Upgrade                        = 3,
	Edit                           = 4,
	BeingModified                  = 5,
	ConfirmEdit                    = 6,
	Creative                       = 7,
	EFortBuildingInteraction_MAX   = 8,
};

enum class EFortBuildingHealthDisplayRule : uint8
{
	Never                          = 0,
	Allowed                        = 1,
	Always                         = 2,
	EFortBuildingHealthDisplayRule_MAX = 3,
};

enum class EFortUIState : uint8
{
	Invalid                        = 0,
	Login                          = 1,
	JoinServer                     = 2,
	SubgameSelect                  = 3,
	FrontEnd                       = 4,
	InGame_Custom                  = 5,
	UNUSED                         = 6,
	InGame_STW                     = 7,
	Cinematic                      = 8,
	InGame_BR                      = 9,
	AthenaSpectator                = 10,
	Replay                         = 11,
	InGame_STW_Custom              = 12,
	MAX                            = 13,
};

enum class EFortItemCardSize : uint8
{
	XXS                            = 0,
	XS                             = 1,
	Wide_S                         = 2,
	S                              = 3,
	M                              = 4,
	L                              = 5,
	XL                             = 6,
	XXL                            = 7,
	EFortItemCardSize_MAX          = 8,
};

enum class EFortUIFeatureStateReason : uint8
{
	Default                        = 0,
	Tutorial                       = 1,
	ContentInstall                 = 2,
	AccountRestrictions            = 3,
	Platform                       = 4,
	SeasonOrEventNotActive         = 5,
	NoPlayerController             = 6,
	UnexpectedFeature              = 7,
	Invalid                        = 8,
	EFortUIFeatureStateReason_MAX  = 9,
};

enum class EFortUIFeatureState : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	Invalid                        = 3,
	EFortUIFeatureState_MAX        = 4,
};

enum class EFortUIFeature : uint8
{
	ShowHome                       = 0,
	ShowPlay                       = 1,
	ShowCommand                    = 2,
	ShowHeros                      = 3,
	ShowSquads                     = 4,
	ShowArmory                     = 5,
	ShowLocker                     = 6,
	ShowSkillTree                  = 7,
	ShowStore                      = 8,
	ShowQuests                     = 9,
	ShowMainStore                  = 10,
	ShowContextHelpMenu            = 11,
	ShowCampaign                   = 12,
	ShowActiveBoost                = 13,
	ShowJournal                    = 14,
	ShowPartyBar                   = 15,
	ShowChatWindow                 = 16,
	ShowFriendsMenu                = 17,
	ShowObjectives                 = 18,
	ShowRatingIconsInTopbar        = 19,
	ShowAntiAddictionMessage       = 20,
	ShowMinorShutdownMessage       = 21,
	ShowHealthWarningScreen        = 22,
	ShowSimplifiedHUD              = 23,
	LargeHeaderFooterButtons       = 24,
	ShowAthenaFavoriting           = 25,
	ShowAthenaItemRandomization    = 26,
	ShowAthenaChallenges           = 27,
	ShowBattlePass                 = 28,
	ShowNewBattlePass              = 29,
	ShowBattlePassFAQ              = 30,
	ShowReplays                    = 31,
	ShowProfileStatsUI             = 32,
	ShowAthenaItemShop             = 33,
	ShowNewAthenaItemShop          = 34,
	ShowShowdown                   = 35,
	ShowSpecialEvent               = 36,
	ShowAccountBoosts              = 37,
	ShowCustomerSupport            = 38,
	ShowGlobalChat                 = 39,
	ShowEULA                       = 40,
	ShowEndOfZoneCinematic         = 41,
	ShowOnboardingCinematics       = 42,
	ShowFounderBannerIcons         = 43,
	ShowCurrentRegionInLobby       = 44,
	ShowPrerollLlamas              = 45,
	EnableFoundersDailyRewards     = 46,
	EnableTwitchIntegration        = 47,
	EnableMatchmakingRegionSetting = 48,
	EnableLanguageSetting          = 49,
	EnableFriendCodeSetting        = 50,
	EnableEarlyAccessLoadingScreenBanner = 51,
	EnableAlterationModifications  = 52,
	EnableSchematicRarityUpgrade   = 53,
	EnableMissionActivationVote    = 54,
	EnableLtmRetrieveTheData       = 55,
	EnableUpgradesVideos           = 56,
	ShowPreviewTestTab             = 57,
	Max_None                       = 58,
	EFortUIFeature_MAX             = 59,
};

enum class EFlagStatus : uint8
{
	FlagPresent                    = 0,
	FlagNotPresent                 = 1,
	EFlagStatus_MAX                = 2,
};

enum class EInputPriority : uint8
{
	Normal                         = 0,
	Menu                           = 1,
	Chat                           = 2,
	Modal                          = 3,
	Confirmation                   = 4,
	Error                          = 5,
	HUD                            = 6,
	EInputPriority_MAX             = 7,
};

enum class EFortInputMode : uint8
{
	Frontend                       = 0,
	InGame                         = 1,
	InGameCursor                   = 2,
	EFortInputMode_MAX             = 3,
};

enum class EFortUrlType : uint8
{
	NormalWebLink                  = 0,
	AccountCreationLink            = 1,
	HelpLink                       = 2,
	EULALink                       = 3,
	EFortUrlType_MAX               = 4,
};

enum class EFortStoreState : uint8
{
	Error                          = 0,
	Closed                         = 1,
	CardPackStore                  = 2,
	CurrencyStore                  = 3,
	WebPayment                     = 4,
	PurchaseOpen                   = 5,
	PackOpen                       = 6,
	CardEnter                      = 7,
	CardBackReveal                 = 8,
	CardFlip                       = 9,
	CardFrontReveal                = 10,
	CardExit                       = 11,
	SummaryAdd                     = 12,
	PackDestroy                    = 13,
	Summary                        = 14,
	PresentChoice                  = 15,
	ChoiceMade                     = 16,
	SummaryAddTransition           = 17,
	MAX_None                       = 18,
	EFortStoreState_MAX            = 19,
};

enum class EFortItemCooldownType : uint8
{
	None                           = 0,
	AmmoRegeneration               = 1,
	ItemActivation                 = 2,
	WeaponReloading                = 3,
	Death                          = 4,
	AthenaWeaponFireCooldown       = 5,
	EFortItemCooldownType_MAX      = 6,
};

enum class EFortFrontEndFeatureStateReason : uint8
{
	Default                        = 0,
	NoHeroes                       = 1,
	Tutorial                       = 2,
	BROnly                         = 3,
	NoPlayerController             = 4,
	UnexpectedFeature              = 5,
	Invalid                        = 6,
	EFortFrontEndFeatureStateReason_MAX = 7,
};

enum class EFortFrontEndFeatureState : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	Hidden                         = 2,
	Invalid                        = 3,
	EFortFrontEndFeatureState_MAX  = 4,
};

enum class EFortFrontEndFeature : uint8
{
	ShowHomeBase                   = 0,
	ShowHeroList                   = 1,
	ShowVault                      = 2,
	ShowStore                      = 3,
	PlayZone                       = 4,
	ShowDailyRewards               = 5,
	ShowHeroSelect                 = 6,
	RecruitHero                    = 7,
	ShowHomeBaseOverview           = 8,
	STWArmory_Transform            = 9,
	STWArmory_CollectionBook       = 10,
	MAX_None                       = 11,
	EFortFrontEndFeature_MAX       = 12,
};

enum class EItemDisassembleRestrictionReason : uint8
{
	InnatelyCannotDisassemble      = 0,
	ItemWasGifted                  = 1,
	EItemDisassembleRestrictionReason_MAX = 2,
};

enum class EItemRecyclingRestrictionReason : uint8
{
	InnatelyUnrecyclable           = 0,
	IsSlottedGroundOperative       = 1,
	MissingCatalyst                = 2,
	ItemOutOnExpedition            = 3,
	InUseByCrafting                = 4,
	MulchingNotAllowed             = 5,
	EItemRecyclingRestrictionReason_MAX = 6,
};

enum class EItemRecyclingWarning : uint8
{
	HighLevel                      = 0,
	HighRarity                     = 1,
	HighTier                       = 2,
	CanSlotInCollectionBook        = 3,
	EItemRecyclingWarning_MAX      = 4,
};

enum class EConversionControlKeyRequest : uint8
{
	AllKeys                        = 0,
	NonConsumableKeys              = 1,
	ConsumableKeys                 = 2,
	EConversionControlKeyRequest_MAX = 3,
};

enum class EVaultItemLimitStatus : uint8
{
	WellBelowCapacity              = 0,
	NearCapacity                   = 1,
	AtCapacity                     = 2,
	OverCapacity                   = 3,
	EVaultItemLimitStatus_MAX      = 4,
};

enum class EFortTutorialGlowType : uint8
{
	None                           = 0,
	Look                           = 1,
	Click                          = 2,
	EFortTutorialGlowType_MAX      = 3,
};

enum class EFortBangSize : uint8
{
	XXS                            = 0,
	XS                             = 1,
	S                              = 2,
	M                              = 3,
	L                              = 4,
	XL                             = 5,
	EFortBangSize_MAX              = 6,
};

enum class EActivatePanelOption : uint8
{
	Show                           = 0,
	Hide                           = 1,
	PlatformDefault                = 2,
	EActivatePanelOption_MAX       = 3,
};

enum class EGridSortKind : uint8
{
	None                           = 0,
	ByNumber                       = 1,
	ByString                       = 2,
	ByNumberThenString             = 3,
	ByStringThenNumber             = 4,
	EGridSortKind_MAX              = 5,
};

enum class EFortItemInspectionMode : uint8
{
	Overview                       = 0,
	Details                        = 1,
	View                           = 2,
	Evolution                      = 3,
	Upgrade                        = 4,
	UpgradeRarity                  = 5,
	EFortItemInspectionMode_MAX    = 6,
};

enum class EFortCollectionBookPopupButtonType : uint8
{
	Invalid                        = 0,
	SelectItem                     = 1,
	Preview                        = 2,
	Purchase                       = 3,
	Unslot                         = 4,
	Back                           = 5,
	EFortCollectionBookPopupButtonType_MAX = 6,
};

enum class ECollectionBookSectionNavTarget : uint8
{
	SlotSelect                     = 0,
	SlotPicker                     = 1,
	ECollectionBookSectionNavTarget_MAX = 2,
};

enum class EViewerNavigationDirection : uint8
{
	Previous                       = 0,
	Next                           = 1,
	EViewerNavigationDirection_MAX = 2,
};

enum class EHeroLoadoutSlotType : uint8
{
	CommanderSlot                  = 0,
	TeamPerkSlot                   = 1,
	CrewSlot                       = 2,
	GadgetSlot                     = 3,
	EHeroLoadoutSlotType_MAX       = 4,
};

enum class ESquadSlotSortType : uint8
{
	ByRating                       = 0,
	ByLevel                        = 1,
	ByRarity                       = 2,
	ByBonus                        = 3,
	ByMatch                        = 4,
	ESquadSlotSortType_MAX         = 5,
};

enum class EBattleMapTimelineWidgetState : uint8
{
	None                           = 0,
	HasNext                        = 1,
	HasPrevious                    = 2,
	IsInReplay                     = 4,
	CanBeScrubbed                  = 8,
	IsStreaming                    = 16,
	Invalid                        = 32,
	EBattleMapTimelineWidgetState_MAX = 33,
};

enum class ECountdownDisplay : uint8
{
	EventEndTime                   = 0,
	ChallengeUnlockTime            = 1,
	UnlockAlreadySet               = 2,
	MAX                            = 3,
};

enum class EChallengeInfoPage : uint8
{
	PartyAssist                    = 0,
	Daily                          = 1,
	Suggested                      = 2,
	EChallengeInfoPage_MAX         = 3,
};

enum class EChallengeListSection : uint8
{
	SpecialOffers                  = 0,
	CompletionRewards              = 1,
	AllChallenges                  = 2,
	FreeChallenges                 = 3,
	PaidChallenges                 = 4,
	Objectives                     = 5,
	EChallengeListSection_MAX      = 6,
};

enum class EEquippedWeaponDisplay : uint8
{
	None                           = 0,
	Resource                       = 1,
	Magazine                       = 2,
	Utility                        = 3,
	Chargeable                     = 4,
	EEquippedWeaponDisplay_MAX     = 5,
};

enum class EAthenaEventMatchInfoSortMethod : uint8
{
	Eliminations                   = 0,
	Place                          = 1,
	Count                          = 2,
	EAthenaEventMatchInfoSortMethod_MAX = 3,
};

enum class EAthenaGameFeatureStatus : uint8
{
	InProgress                     = 0,
	ProgressPaused                 = 1,
	ErrorOccured                   = 2,
	EAthenaGameFeatureStatus_MAX   = 3,
};

enum class EAthenaPlayerActionAlert : uint8
{
	PlayerDown                     = 0,
	PlayerKill                     = 1,
	EnteredStorm                   = 2,
	NewZebulonDrone                = 3,
	NewZebulonDroneYou             = 4,
	EAthenaPlayerActionAlert_MAX   = 5,
};

enum class EAthenaInventoryDoubleClickAction : uint8
{
	Nothing                        = 0,
	Equip                          = 1,
	DropStack                      = 2,
	EAthenaInventoryDoubleClickAction_MAX = 3,
};

enum class EFortAthenaPlaylist : uint8
{
	AthenaSolo                     = 0,
	AthenaDuo                      = 1,
	AthenaSquad                    = 2,
	EFortAthenaPlaylist_MAX        = 3,
};

enum class EFortMarkerActions : uint8
{
	None                           = 0,
	Cancel                         = 1,
	Confirm                        = 2,
	EFortMarkerActions_MAX         = 3,
};

enum class EHealthBarType : uint8
{
	Health                         = 0,
	Shield                         = 1,
	Stamina                        = 2,
	VehicleHealth                  = 3,
	SignalInStorm                  = 4,
	EHealthBarType_MAX             = 5,
};

enum class ECinematicBarState : uint8
{
	None                           = 0,
	BarsVisible                    = 1,
	ECinematicBarState_MAX         = 2,
};

enum class EPostGameClickCatcherState : uint8
{
	Catch_None                     = 0,
	Catch_MobileOnly               = 1,
	Catch_MouseOnly                = 2,
	Catch_All                      = 3,
	Catch_MAX                      = 4,
};

enum class EPostGameScreenType : uint8
{
	None                           = 0,
	Victory                        = 1,
	MatchXP                        = 2,
	IGMM                           = 3,
	Other                          = 4,
	Killer                         = 5,
	EPostGameScreenType_MAX        = 6,
};

enum class EPostGamePlacementWidgetState : uint8
{
	Normal                         = 0,
	Small                          = 1,
	Hidden                         = 2,
	EPostGamePlacementWidgetState_MAX = 3,
};

enum class EPunchType : uint8
{
	Horizontal                     = 0,
	Vertical                       = 1,
	EPunchType_MAX                 = 2,
};

enum class EPunchCardLocation : uint8
{
	NONE                           = 0,
	HUD                            = 1,
	Map                            = 2,
	EndGame                        = 3,
	Lobby                          = 4,
	EPunchCardLocation_MAX         = 5,
};

enum class EAthenaSquadListUpdateType : uint8
{
	None                           = 0,
	CanResurrect                   = 1,
	FindResurrectChip              = 2,
	EAthenaSquadListUpdateType_MAX = 3,
};

enum class ERespawnUIState : uint8
{
	Hidden                         = 0,
	ShowRespawnEnabled             = 1,
	ShowRespawnDisabled            = 2,
	ERespawnUIState_MAX            = 3,
};

enum class ESpectatorBuildCountType : uint8
{
	BuildCount                     = 0,
	Wood                           = 1,
	Stone                          = 2,
	Metal                          = 3,
	ESpectatorBuildCountType_MAX   = 4,
};

enum class ESpectatorMapPlayerListState : uint8
{
	Default                        = 0,
	Irrelevant                     = 1,
	Eliminated                     = 2,
	ESpectatorMapPlayerListState_MAX = 3,
};

enum class EAthenaSpectatorNameplateDetailState : uint8
{
	High                           = 0,
	Low                            = 1,
	Arrow                          = 2,
	Off                            = 3,
	EAthenaSpectatorNameplateDetailState_MAX = 4,
};

enum class EAthenaSpectatorNameplateDistanceState : uint8
{
	Near                           = 0,
	MidDistance                    = 1,
	FurtherThanMaxDistance         = 2,
	EAthenaSpectatorNameplateDistanceState_MAX = 3,
};

enum class ESpectatorPlayerListSortMethod : uint8
{
	SquadId                        = 0,
	PlayerName                     = 1,
	Eliminations                   = 2,
	EventScore                     = 3,
	State                          = 4,
	Count                          = 5,
	ESpectatorPlayerListSortMethod_MAX = 6,
};

enum class EStormSurgeThresholdType : uint8
{
	None                           = 0,
	Above                          = 1,
	Below                          = 2,
	Equal                          = 3,
	EStormSurgeThresholdType_MAX   = 4,
};

enum class EFrontendVisibilityMode : uint8
{
	Normal                         = 0,
	OnlyBottom                     = 1,
	Empty                          = 2,
	EFrontendVisibilityMode_MAX    = 3,
};

enum class EComboSlotType : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Combo                          = 2,
	Creative                       = 3,
	COUNT                          = 4,
	EComboSlotType_MAX             = 5,
};

enum class EBacchusSignalQuality : uint8
{
	None                           = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EBacchusSignalQuality_MAX      = 4,
};

enum class EBattleLabAlertType : uint8
{
	QuestComplete                  = 0,
	QuestGranted                   = 1,
	Reward                         = 2,
	EBattleLabAlertType_MAX        = 3,
};

enum class EBattlePassView : uint8
{
	None                           = 0,
	Preview                        = 1,
	Track                          = 2,
	ItemDetails                    = 3,
	EBattlePassView_MAX            = 4,
};

enum class EBattlePassPurchaseButtonLayout : uint8
{
	Normal                         = 0,
	Bundle                         = 1,
	Normal_PaysForSelf             = 2,
	EBattlePassPurchaseButtonLayout_MAX = 3,
};

enum class EAthenaNewsStyle : uint8
{
	None                           = 0,
	SpecialEvent                   = 1,
	SpecialEvent2                  = 2,
	EAthenaNewsStyle_MAX           = 3,
};

enum class EAthenaNewsEntryType : uint8
{
	Text                           = 0,
	Item                           = 1,
	RMTItem                        = 2,
	Website                        = 3,
	NavigateToTab                  = 4,
	SmallNews                      = 5,
	STWUpsell                      = 6,
	EAthenaNewsEntryType_MAX       = 7,
};

enum class ESubGameFilter : int32
{
	All                            = 0,
	SaveTheWorld                   = 1,
	BattleRoyale                   = 2,
	ESubGameFilter_MAX             = 3,
};

enum class ESurvivalObjectiveIconState : uint8
{
	None                           = 0,
	Spawned                        = 1,
	Destroyed                      = 2,
	ESurvivalObjectiveIconState_MAX = 3,
};

enum class EDiscoCaptureUIState : uint8
{
	None                           = 0,
	Hidden                         = 1,
	Dance                          = 2,
	Capturing                      = 3,
	Contested                      = 4,
	EDiscoCaptureUIState_MAX       = 5,
};

enum class EDiscoScoreProgressTypes : uint8
{
	None                           = 0,
	ProgressSoundMild              = 1,
	ProgressSoundMedium            = 2,
	ProgressSoundStrong            = 3,
	CountdownSoundNormal           = 4,
	CountdownSoundStrong           = 5,
	EDiscoScoreProgressTypes_MAX   = 6,
};

enum class EDiscoCaptureProgressState : uint8
{
	None                           = 0,
	AllyProgress                   = 1,
	EnemyProgress                  = 2,
	EDiscoCaptureProgressState_MAX = 3,
};

enum class EDiscoCaptureIconState : uint8
{
	None                           = 0,
	Hidden                         = 1,
	Neutral                        = 2,
	AllyCaptured                   = 3,
	EnemyCaptured                  = 4,
	EDiscoCaptureIconState_MAX     = 5,
};

enum class EPlayerReportingStep : uint8
{
	ReportingReason                = 0,
	ReportingPlayer                = 1,
	Confirmation                   = 2,
	AdditionalInfo                 = 3,
	EPlayerReportingStep_MAX       = 4,
};

enum class EFortAlterationOptionType : uint8
{
	Upgrade                        = 0,
	Replacement                    = 1,
	Max_NONE                       = 2,
	EFortAlterationOptionType_MAX  = 3,
};

enum class EFortAlterationWidgetState : uint8
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortAlterationWidgetState_MAX = 3,
};

enum class EFillDisableReason : uint8
{
	Enabled                        = 0,
	FillDisabledOnPlaylist         = 1,
	NotPartyLeader                 = 2,
	AlreadyMatchmaking             = 3,
	PartyTooSmall                  = 4,
	PartyTooBig                    = 5,
	InactiveTournament             = 6,
	NoSplitscreen                  = 7,
	EFillDisableReason_MAX         = 8,
};

enum class EServerAccessSetting : uint8
{
	Invalid                        = 0,
	FriendsOfCurrentPlayers        = 1,
	LeaderInviteOnly               = 2,
	EServerAccessSetting_MAX       = 3,
};

enum class ESpectatorQueueType : uint8
{
	Invalid                        = 0,
	Player                         = 1,
	BroadcastSpectator             = 2,
	ESpectatorQueueType_MAX        = 3,
};

enum class ESquadFillSetting : uint8
{
	Invalid                        = 0,
	Fill                           = 1,
	NoFill                         = 2,
	ESquadFillSetting_MAX          = 3,
};

enum class EPlayButtonJoinInProgressState : uint8
{
	None                           = 0,
	JoinAsPlayer                   = 1,
	SpectateAPartyMember           = 2,
	EPlayButtonJoinInProgressState_MAX = 3,
};

enum class EFortMemberConnectionState : uint8
{
	Open                           = 0,
	Connecting                     = 1,
	Connected                      = 2,
	Invalid                        = 3,
	EFortMemberConnectionState_MAX = 4,
};

enum class ECollectionBookRewardStatus : uint8
{
	Unknown                        = 0,
	Available                      = 1,
	Claimed                        = 2,
	ECollectionBookRewardStatus_MAX = 3,
};

enum class ECollectionBookPrimaryNavTarget : uint8
{
	Overview                       = 0,
	SectionTileView                = 1,
	ECollectionBookPrimaryNavTarget_MAX = 2,
};

enum class EFortContentControlsSettingType : uint8
{
	AutoDeclineFriendRequests      = 0,
	FilterMatureLanguage           = 1,
	VoiceChat                      = 2,
	HideYourName                   = 3,
	HideOtherNames                 = 4,
	PlaytimeReporting              = 5,
	PurchaseReporting              = 6,
	TextChat                       = 7,
	InvalidOrMax                   = 8,
	EFortContentControlsSettingType_MAX = 9,
};

enum class EFortCreativeIslandLinkCategory : uint8
{
	Default                        = 0,
	Favorite                       = 1,
	Published                      = 2,
	Recent                         = 3,
	EFortCreativeIslandLinkCategory_MAX = 4,
};

enum class EFortCreativeIslandLinkValidationResult : uint8
{
	Unknown                        = 0,
	Success                        = 1,
	IslandNotFound                 = 2,
	InvalidKeyTooShort             = 3,
	InvalidKeyTooLong              = 4,
	InvalidKeyCharacters           = 5,
	EFortCreativeIslandLinkValidationResult_MAX = 6,
};

enum class EFortCreativeItemType : uint8
{
	Chest                          = 0,
	Item                           = 1,
	Collection                     = 2,
	SubItems                       = 3,
	EFortCreativeItemType_MAX      = 4,
};

enum class EFortCreativeServerPrivacySetting : uint8
{
	Unknown                        = 0,
	Private                        = 1,
	Public                         = 2,
	EFortCreativeServerPrivacySetting_MAX = 3,
};

enum class EFortDefenderSlotType : uint8
{
	Invalid                        = 0,
	Defender                       = 1,
	Weapon                         = 2,
	EFortDefenderSlotType_MAX      = 3,
};

enum class EDynamicEntryPatternDirection : uint8
{
	FirstToLast                    = 0,
	LastToFirst                    = 1,
	EDynamicEntryPatternDirection_MAX = 2,
};

enum class EDateFormat : uint8
{
	CountdownTextual               = 0,
	CountdownNumeric               = 1,
	CountdownNumUnder12Hours       = 2,
	Date                           = 3,
	DateFormat_MAX                 = 4,
};

enum class EFortExpeditionListSort : uint8
{
	ByRating                       = 0,
	ByDuration                     = 1,
	ByName                         = 2,
	EFortExpeditionListSort_MAX    = 3,
};

enum class EShareButtonType : uint8
{
	IOS                            = 0,
	Android                        = 1,
	Generic                        = 2,
	EShareButtonType_MAX           = 3,
};

enum class EFrontEndRewardType : uint8
{
	Mission                        = 0,
	Quest                          = 1,
	EpicNewQuest                   = 2,
	Expedition                     = 3,
	CollectionBook                 = 4,
	MissionAlert                   = 5,
	DifficultyIncrease             = 6,
	GiftBox                        = 7,
	ItemCache                      = 8,
	EFrontEndRewardType_MAX        = 9,
};

enum class EFortUIGameFeedbackType : uint8
{
	Bug                            = 0,
	Comment                        = 1,
	Content                        = 2,
	EpicQABug                      = 3,
	EFortUIGameFeedbackType_MAX    = 4,
};

enum class ESelectionState : uint8
{
	Unselected                     = 0,
	Selected                       = 1,
	CannotGift                     = 2,
	ESelectionState_MAX            = 3,
};

enum class EFortHeroPerkDisplayType : uint8
{
	CommanderPerk                  = 0,
	TeamPerk                       = 1,
	ClassPerk                      = 2,
	StandardPerk                   = 3,
	Max_None                       = 4,
	EFortHeroPerkDisplayType_MAX   = 5,
};

enum class EFortSupportPerkWidgetState : uint8
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortSupportPerkWidgetState_MAX = 3,
};

enum class ECenterPopupMessageStateEnum : uint8
{
	NotVisible                     = 0,
	WaitingForOutpostOwner         = 1,
	ECenterPopupMessageStateEnum_MAX = 2,
};

enum class EBuildingFocusType : uint8
{
	Contextual                     = 0,
	Interactable                   = 1,
	Normal                         = 2,
	Count                          = 3,
	EBuildingFocusType_MAX         = 4,
};

enum class EContextPositionPlatform : uint8
{
	NonMobile                      = 0,
	Mobile                         = 1,
	EContextPositionPlatform_MAX   = 2,
};

enum class EFortItemCountStyle : uint8
{
	StackCount                     = 0,
	OverrideCount                  = 1,
	StackCountOverOverride         = 2,
	EFortItemCountStyle_MAX        = 3,
};

enum class EFortItemManagementMode : uint8
{
	Details                        = 0,
	Comparison                     = 1,
	Mulch                          = 2,
	EFortItemManagementMode_MAX    = 3,
};

enum class EVaultTransitionType : uint8
{
	NoTransition                   = 0,
	Clockwise                      = 1,
	CounterClockwise               = 2,
	EVaultTransitionType_MAX       = 3,
};

enum class EFortKeybindForcedHoldStatus : uint8
{
	NoForcedHold                   = 0,
	ForcedHold                     = 1,
	NeverShowHold                  = 2,
	EFortKeybindForcedHoldStatus_MAX = 3,
};

enum class EFortLegacySlateWidget : uint8
{
	None                           = 0,
	Minimap                        = 1,
	MAX                            = 2,
};

enum class ELocalUserOnlineStatus : uint8
{
	Online                         = 0,
	Offline                        = 1,
	Away                           = 2,
	ExtendedAway                   = 3,
	DoNotDisturb                   = 4,
	Chat                           = 5,
	ELocalUserOnlineStatus_MAX     = 6,
};

enum class EFortLoginInteraction : uint8
{
	Begin                          = 0,
	PlayedBefore                   = 1,
	CredentialSelect               = 2,
	NamePassword                   = 3,
	RedirectEpicAccount            = 4,
	AccountNotFound                = 5,
	CreateDisplayName              = 6,
	MultiFactorAuth                = 7,
	EULA                           = 8,
	AccountLink                    = 9,
	AccountPinLink                 = 10,
	WebLogin                       = 11,
	WebAccountCreation             = 12,
	AgeGate                        = 13,
	EFortLoginInteraction_MAX      = 14,
};

enum class EFortModifiedStatus : uint8
{
	IsDefault                      = 0,
	IsModified                     = 1,
	Unsupported                    = 2,
	EFortModifiedStatus_MAX        = 3,
};

enum class EFortMaterialProgressBarSectionOverflowBehavior : uint8
{
	PreserveValues                 = 0,
	ReverseCollapse                = 1,
	EFortMaterialProgressBarSectionOverflowBehavior_MAX = 2,
};

enum class EFortMaterialProgressBarSectionColorNumber : uint8
{
	Color1                         = 0,
	Color2                         = 1,
	EFortMaterialProgressBarSectionColorNumber_MAX = 2,
};

enum class EFortMaterialProgressBarSection : uint8
{
	Primary                        = 0,
	Secondary                      = 1,
	Tertiary                       = 2,
	Negative                       = 3,
	MAX_PROGRESS_BAR_SECTIONS      = 4,
	EFortMaterialProgressBarSection_MAX = 5,
};

enum class EFortMissionActivationWidgetState : uint8
{
	Default                        = 0,
	StartObjective                 = 1,
	IncreaseDifficulty             = 2,
	Invalid                        = 3,
	EFortMissionActivationWidgetState_MAX = 4,
};

enum class EFortFortMobileShareButtonOS : uint8
{
	Android                        = 0,
	IOS                            = 1,
	EFortFortMobileShareButtonOS_MAX = 2,
};

enum class EModalContainerSlot : uint8
{
	Top                            = 0,
	Middle                         = 1,
	Bottom                         = 2,
	Background                     = 3,
	Max                            = 4,
};

enum class EFortMtxOfferDisplaySize : uint8
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	EFortMtxOfferDisplaySize_MAX   = 3,
};

enum class EFortMtxStoreOfferType : uint8
{
	FoundersPack                   = 0,
	CurrencyPack                   = 1,
	Unknown                        = 2,
	Max_None                       = 3,
	EFortMtxStoreOfferType_MAX     = 4,
};

enum class ESettingTab : uint8
{
	None                           = 0,
	Video                          = 1,
	Game                           = 2,
	GameUI                         = 3,
	Brightness                     = 4,
	Audio                          = 5,
	Accessibility                  = 6,
	Input                          = 7,
	MouseAndKeyboard               = 8,
	Controller                     = 9,
	ControllerSensitivity          = 10,
	TouchAndMotion                 = 11,
	Account                        = 12,
	CreativeWorld                  = 13,
	CreativePlayer                 = 14,
	ESettingTab_MAX                = 15,
};

enum class ESettingValueType : uint8
{
	None                           = 0,
	Rotator                        = 1,
	Slider                         = 2,
	ESettingValueType_MAX          = 3,
};

enum class ESettingType : uint8
{
	None                           = 0,
	Header                         = 1,
	WindowMode                     = 2,
	DisplayResolution              = 3,
	FrameRateLimit                 = 4,
	VideoQuality                   = 5,
	ThreeDResolution               = 6,
	ViewDistance                   = 7,
	Shadows                        = 8,
	AntiAliasing                   = 9,
	Textures                       = 10,
	Effects                        = 11,
	PostProcessing                 = 12,
	VSync                          = 13,
	MotionBlur                     = 14,
	ShowGrass                      = 15,
	MobileFPSType                  = 16,
	ShowFPS                        = 17,
	AllowLowPower                  = 18,
	AllowVideoPlayback             = 19,
	AllowDynamicResolution         = 20,
	AllowMultithreadedRendering    = 21,
	RenderingAPI                   = 22,
	RegionHeader                   = 23,
	Language                       = 24,
	Region                         = 25,
	MouseSensitivityYaw            = 26,
	MouseSensitivityPitch          = 27,
	MouseSensitivityMultiplierForAircraft = 28,
	TouchDragSensitivity           = 29,
	ControllerLookSensitivityYaw   = 30,
	ControllerLookSensitivityPitch = 31,
	MouseTargetingMultiplier       = 32,
	MouseScopedMultiplier          = 33,
	GamepadTargetingMultiplier     = 34,
	GamepadScopedMultiplier        = 35,
	GamepadBuildingMultiplier      = 36,
	GamepadEditModeMultiplier      = 37,
	TouchLookAccelerationMultiplier = 38,
	TouchDragTargetingSensitivity  = 39,
	TouchDragScopedSensitivity     = 40,
	TouchBuildingMultiplier        = 41,
	TouchEditModeMultiplier        = 42,
	TouchVerticalSensitivity       = 43,
	InvertPitch                    = 44,
	InvertYaw                      = 45,
	InvertPitchForMotion           = 46,
	InvertPitchForAircraftPrimary  = 47,
	InvertPitchForAircraftSecondary = 48,
	InvertYawForMotion             = 49,
	GyroEnabled                    = 50,
	GyroYawAxis                    = 51,
	GyroSensitivity                = 52,
	GyroTargetingSensitivity       = 53,
	GyroScopedSensitivity          = 54,
	GyroHarvestingToolSensitivity  = 55,
	SafeZone                       = 56,
	AnonymousMode                  = 57,
	AnonymousCharacterMode         = 58,
	HideOtherPlayerNames           = 59,
	HiddenMatchmakingDelay         = 60,
	AutoJoinGameVoiceChannel       = 61,
	ShowVoiceIndicators            = 62,
	HUDScale                       = 63,
	ShowViewerCount                = 64,
	FirstPersonCamera              = 65,
	PeripheralLighting             = 66,
	PingPlaceDangerMarkerWhenTargeting = 67,
	ShowGlobalChat                 = 68,
	ConsoleUnlockedFPS             = 69,
	ToggleSprint                   = 70,
	SprintByDefault                = 71,
	SprintCancelsReload            = 72,
	TapInteract                    = 73,
	InWorldInteract                = 74,
	ToggleTargeting                = 75,
	HoldToSwapPickup               = 76,
	AutoEquipBetterItems           = 77,
	EquipFirstBuildingPieceWhenSwappingQuickbars = 78,
	EquipFirstBuildingPieceWhenSwappingQuickbarsAthena = 79,
	AimAssist                      = 80,
	EditModeAimAssist              = 81,
	TouchEdit                      = 82,
	EditConfirmOnRelease           = 83,
	QuickEdit                      = 84,
	TurboBuild                     = 85,
	CreativeTurboDelete            = 86,
	AutoChangeMaterial             = 87,
	GamepadAutoRun                 = 88,
	CrossplayPreference            = 89,
	AutoOpenDoors                  = 90,
	AutoPickupWeapons              = 91,
	AutoPickupWeaponsConsolePC     = 92,
	AutoSortConsumablesToRight     = 93,
	EnableTryBuildOnFocus          = 94,
	EditButtonHoldTime             = 95,
	AccessoriesHeader              = 96,
	ShowHeadAccessories            = 97,
	ShowBackpack                   = 98,
	ForceFeedback                  = 99,
	ContextTutorial                = 100,
	ReplayRecording                = 101,
	ReplayRecordingLargeTeams      = 102,
	ReplayRecordingCreativeMode    = 103,
	UsePowerSavingMode             = 104,
	ShadowPlayHighlights           = 105,
	ShowTemperature                = 106,
	GammaValue                     = 107,
	MusicVolume                    = 108,
	SoundFXVolume                  = 109,
	DialogVolume                   = 110,
	VoiceChatVolume                = 111,
	CinematicsVolume               = 112,
	Subtitles                      = 113,
	Quality                        = 114,
	VoiceChat                      = 115,
	PushToTalk                     = 116,
	ProximityVoiceChat             = 117,
	VoiceChatInputDevice           = 118,
	VoiceChatOutputDevice          = 119,
	AllowBackgroundAudio           = 120,
	ColorBlindMode                 = 121,
	ColorBlindStrength             = 122,
	IgnoreGamepadInput             = 123,
	LockPrimaryInputMethodToMouse  = 124,
	EnableRudderControl            = 125,
	RudderDeadZone                 = 126,
	RudderMaxThrottle              = 127,
	VisualizeSoundEffects          = 128,
	VisualizeSoundEffectsHeader    = 129,
	MoveStickDeadZone              = 130,
	LookStickDeadZone              = 131,
	LookSensitivityPreset          = 132,
	LookSensitivityPresetAds       = 133,
	LookBuildModeMultiplier        = 134,
	LookEditModeMultiplier         = 135,
	UseAdvancedOptions             = 136,
	LookHorizontalSpeed            = 137,
	LookVerticalSpeed              = 138,
	LookHorizontalSpeedAds         = 139,
	LookVerticalSpeedAds           = 140,
	LookHorizontalBoostSpeed       = 141,
	LookVerticalBoostSpeed         = 142,
	LookBoostAccelerationTime      = 143,
	LookHorizontalBoostSpeedAds    = 144,
	LookVerticalBoostSpeedAds      = 145,
	LookBoostAccelerationTimeAds   = 146,
	InstantBoostWhenBuilding       = 147,
	LookEaseTime                   = 148,
	LookInputCurve                 = 149,
	AimAssistStrength              = 150,
	UseLegacyControls              = 151,
	PlayerSurveysAllowed           = 152,
	NotifyWhenPlaying              = 153,
	LocalNotifications             = 154,
	FireMode                       = 155,
	COUNT                          = 156,
	ESettingType_MAX               = 157,
};

enum class EFortPerksWidgetState : uint8
{
	Normal                         = 0,
	Upgrade                        = 1,
	Evolution                      = 2,
	EFortPerksWidgetState_MAX      = 3,
};

enum class ESaveProfileForBanners : int32
{
	SaveTheWorld                   = 0,
	BattleRoyale                   = 1,
	ESaveProfileForBanners_MAX     = 2,
};

enum class EFortPlayerSurveyAggregateOp : uint8
{
	Sum                            = 0,
	Max                            = 1,
};

enum class EFortPlayerSurveyAthenaSeasonStat : uint8
{
	XP                             = 0,
	Level                          = 1,
	BookXP                         = 2,
	BookLevel                      = 3,
	EFortPlayerSurveyAthenaSeasonStat_MAX = 4,
};

enum class EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType : uint8
{
	Unknown                        = 0,
	ChoiceButton                   = 1,
	EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType_MAX = 2,
};

enum class EFortPlayerSurveyCMSDataAggregateOp : uint8
{
	S                              = 0,
	Mx                             = 1,
	EFortPlayerSurveyCMSDataAggregateOp_MAX = 2,
};

enum class EFortPlayerSurveyCMSDataAthenaSeasonStat : uint8
{
	Sx                             = 0,
	Sl                             = 1,
	bx                             = 2,
	bl                             = 3,
	EFortPlayerSurveyCMSDataAthenaSeasonStat_MAX = 4,
};

enum class EFortPlayerSurveyCMSDataBinaryComparisonOp : uint8
{
	E                              = 0,
	N                              = 1,
	L                              = 2,
	G                              = 3,
	Le                             = 4,
	Ge                             = 5,
	EFortPlayerSurveyCMSDataBinaryComparisonOp_MAX = 6,
};

enum class EFortPlayerSurveyCMSDataGameMode : uint8
{
	C                              = 0,
	A                              = 1,
	Pc                             = 2,
	EFortPlayerSurveyCMSDataGameMode_MAX = 3,
};

enum class EFortPlayerSurveyCMSDataGameplayTagQueryExprType : uint8
{
	N                              = 3,
	S                              = 1,
	A                              = 2,
	EFortPlayerSurveyCMSDataGameplayTagQueryExprType_MAX = 4,
};

enum class EFortPlayerSurveyCMSDataPlaylistCategory : uint8
{
	A                              = 0,
	S                              = 1,
	D                              = 2,
	Q                              = 3,
	Lt                             = 4,
	C                              = 5,
	Pl                             = 6,
	EFortPlayerSurveyCMSDataPlaylistCategory_MAX = 7,
};

enum class EFortPlayerSurveyCMSDataPresentationStyle : uint8
{
	Standard                       = 1,
	Rating                         = 2,
	EFortPlayerSurveyCMSDataPresentationStyle_MAX = 3,
};

enum class EFortPlayerSurveyCMSDataQuestState : uint8
{
	I                              = 0,
	A                              = 1,
	Co                             = 2,
	Cl                             = 3,
	EFortPlayerSurveyCMSDataQuestState_MAX = 4,
};

enum class EFortPlayerSurveyCMSDataRelativeSurveyKeyType : uint8
{
	S                              = 0,
	A                              = 1,
	O                              = 2,
	EFortPlayerSurveyCMSDataRelativeSurveyKeyType_MAX = 3,
};

enum class EFortPlayerSurveyCMSDataTrigger : uint8
{
	Rm                             = 2,
	EFortPlayerSurveyCMSDataTrigger_MAX = 3,
};

enum class EFortPlayerSurveyPlaylistCategory : uint8
{
	All                            = 0,
	Solo                           = 1,
	Duo                            = 2,
	Squad                          = 3,
	LTM                            = 4,
	Creative                       = 5,
	Playground                     = 6,
	EFortPlayerSurveyPlaylistCategory_MAX = 7,
};

enum class EFortPlayerSurveyTrigger : uint8
{
	Invalid                        = 0,
	Any                            = 1,
	ReturnToMainMenu               = 2,
	EFortPlayerSurveyTrigger_MAX   = 3,
};

enum class EPurchaseReturnStep : uint8
{
	ItemSelection                  = 0,
	ReasonSelection                = 1,
	FinalSubmission                = 2,
	EPurchaseReturnStep_MAX        = 3,
};

enum class ECalloutNavigationDirection : uint8
{
	Previous                       = 0,
	Next                           = 1,
	ECalloutNavigationDirection_MAX = 2,
};

enum class ERedeemCodeFailureReason : uint8
{
	InvalidCode                    = 0,
	CodeAlreadyUsed                = 1,
	AlreadyHasAccess               = 2,
	FailedToGetItem                = 3,
	Unknown                        = 4,
	ERedeemCodeFailureReason_MAX   = 5,
};

enum class EFortRewardItemType : uint8
{
	RewardedBadges                 = 0,
	MissedBadges                   = 1,
	RewardedItems                  = 2,
	RewardedAccountItems           = 3,
	EFortRewardItemType_MAX        = 4,
};

enum class EFortServerBrowserAction : uint8
{
	BattleLabServerCreate          = 0,
	PlaygroundServerCreate         = 1,
	CreativeServerCreate           = 2,
	Play                           = 3,
	EFortServerBrowserAction_MAX   = 4,
};

enum class EFortServerItemIneligibleReason : uint8
{
	None                           = 0,
	PartyTooBig                    = 1,
	PartyTooSmall                  = 2,
	NotPartyLeader                 = 3,
	MatchmakingAlready             = 4,
	NotSupportedByLeto             = 5,
	InvalidData                    = 6,
	EFortServerItemIneligibleReason_MAX = 7,
};

enum class EFortSettingGameVisibility : uint8
{
	None                           = 0,
	Campaign                       = 1,
	Athena                         = 2,
	EFortSettingGameVisibility_MAX = 3,
};

enum class EFortSettingPlatformVisibility : uint8
{
	None                           = 0,
	PC                             = 1,
	PS4                            = 2,
	XBoxOne                        = 4,
	Switch                         = 8,
	Mobile                         = 16,
	EFortSettingPlatformVisibility_MAX = 17,
};

enum class EFortShowdownPinState : uint8
{
	None                           = 0,
	Locked                         = 1,
	Unlocked                       = 2,
	EFortShowdownPinState_MAX      = 3,
};

enum class EFortEventWindowEligibility : uint8
{
	Unknown                        = 0,
	Public                         = 1,
	Private                        = 2,
	Locked                         = 3,
	EFortEventWindowEligibility_MAX = 4,
};

enum class EFortShowdownEventState : uint8
{
	Unknown                        = 0,
	FutureTBD                      = 1,
	FutureScheduled                = 2,
	FutureNext                     = 3,
	Live                           = 4,
	LiveParticipating              = 5,
	LiveNotParticipating           = 6,
	Completed                      = 7,
	CompletedParticipated          = 8,
	CompletedNotPartipated         = 9,
	Cancelled                      = 10,
	EFortShowdownEventState_MAX    = 11,
};

enum class EFortShowdownMatchType : uint8
{
	Unknown                        = 0,
	Solo                           = 1,
	Duos                           = 2,
	Squads                         = 3,
	EFortShowdownMatchType_MAX     = 4,
};

enum class EFortDateTimeStyle : uint8
{
	Default                        = 0,
	Short                          = 1,
	Medium                         = 2,
	Long                           = 3,
	Full                           = 4,
	EFortDateTimeStyle_MAX         = 5,
};

enum class ESocialImportPanelType : uint8
{
	Athena                         = 0,
	SaveTheWorld                   = 1,
	ESocialImportPanelType_MAX     = 2,
};

enum class EFriendLinkShareButtonType : uint8
{
	IOS                            = 0,
	Android                        = 1,
	Generic                        = 2,
	EFriendLinkShareButtonType_MAX = 3,
};

enum class EListHeaderType : uint8
{
	TeamMember                     = 0,
	PartyMember                    = 1,
	JoinableParty                  = 2,
	PlatformOnlineFriend           = 3,
	McpOnlineFriend                = 4,
	OfflineFriend                  = 5,
	Blocked                        = 6,
	VoiceChatMember                = 7,
	FriendInvite                   = 8,
	SuggestedFriend                = 9,
	RecentPlayer                   = 10,
	Invalid                        = 11,
	EListHeaderType_MAX            = 12,
};

enum class EFortSquadSlottingRestrictionReason : uint8
{
	ItemIsInInventoryOverflow      = 0,
	MandatorySlotWouldBeEmptied    = 1,
	ItemIsOnActiveExpedition       = 2,
	HeroRequiresMissingGameplayTag = 3,
	HeroAlreadyEquippedInLoadout   = 4,
	EFortSquadSlottingRestrictionReason_MAX = 5,
};

enum class EPauseType : uint8
{
	NoPause                        = 0,
	Rare                           = 1,
	New                            = 2,
	NewAndRare                     = 3,
	EPauseType_MAX                 = 4,
};

enum class ECardPackPurchaseError : uint8
{
	PendingServerConfirmation      = 0,
	CannotAffordItem               = 1,
	NoneLeft                       = 2,
	PurchaseAlreadyPending         = 3,
	NoConnection                   = 4,
	ECardPackPurchaseError_MAX     = 5,
};

enum class EFortStoreTransition : uint8
{
	X                              = 0,
	EFortStoreTransition_MAX       = 1,
};

enum class EFortSubgameSelectOption : uint8
{
	Campaign                       = 0,
	Athena                         = 1,
	Creative                       = 2,
	Invalid                        = 3,
	Count                          = 3,
	EFortSubgameSelectOption_MAX   = 4,
};

enum class ESubgameTileType : uint8
{
	Campaign                       = 0,
	Athena                         = 1,
	Creative                       = 2,
	ESubgameTileType_MAX           = 3,
};

enum class ESubgameLoadFromCMS : uint8
{
	DoNotLoadFromCMS               = 0,
	LoadImageFromCMS               = 1,
	ESubgameLoadFromCMS_MAX        = 2,
};

enum class EFortUISurvivorSquadMatchType : uint8
{
	Multi                          = 0,
	Single                         = 1,
	Summary                        = 2,
	Max_None                       = 3,
	EFortUISurvivorSquadMatchType_MAX = 4,
};

enum class ETouchState : uint8
{
	None                           = 0,
	WaitingForStart                = 1,
	Started                        = 2,
	Active                         = 3,
	COUNT                          = 4,
	ETouchState_MAX                = 5,
};

enum class EFortControlType : uint8
{
	None                           = 0,
	CameraAndMovement              = 1,
	Picking                        = 2,
	COUNT                          = 3,
	EFortControlType_MAX           = 4,
};

enum class EFortTouchControlRegion : uint8
{
	MovePlayer                     = 0,
	RotateCamera                   = 1,
	NoRegion                       = 2,
	COUNT                          = 3,
	EFortTouchControlRegion_MAX    = 4,
};

enum class EEventTimeState : uint8
{
	Unknown                        = 0,
	Completed                      = 1,
	Live                           = 2,
	Future                         = 3,
	EEventTimeState_MAX            = 4,
};

enum class EFortNamedBundle : uint8
{
	Menu                           = 0,
	MenuCampaign                   = 1,
	MenuAthena                     = 2,
	Zone                           = 3,
	ZoneCampaign                   = 4,
	ZoneAthena                     = 5,
	Client                         = 6,
	ClientCampaign                 = 7,
	ClientAthena                   = 8,
	EFortNamedBundle_MAX           = 9,
};

enum class EFortReturnToFrontendBehavior : uint8
{
	NotSpecified                   = 0,
	HomeScreen                     = 1,
	MapScreen                      = 2,
	MapScreenWithAutoLaunch        = 3,
	MapScreenWithMinimalAutoLaunch = 4,
	EFortReturnToFrontendBehavior_MAX = 5,
};

enum class ELetoDisplayMode : uint8
{
	PrimaryOnly                    = 0,
	SingleToggle                   = 1,
	Simultaneous                   = 2,
	ELetoDisplayMode_MAX           = 3,
};

enum class EFortUINavigationOp : uint8
{
	PopContentStack                = 0,
	FeatureSwitch                  = 1,
	NavigateToSkillTree            = 2,
	NavigateToSquadSlot            = 3,
	NavigateToQuest                = 4,
	NavigateToItemManagement       = 5,
	NavigateToExpeditions          = 6,
	NavigateToCollectionBook       = 7,
	None                           = 8,
	EFortUINavigationOp_MAX        = 9,
};

enum class EFortLoginStage : uint8
{
	Begin                          = 0,
	SplashScreen                   = 1,
	UpdateCheck                    = 2,
	SignIn                         = 3,
	PostSignin                     = 4,
	SafeZoneEditor                 = 5,
	Benchmark                      = 6,
	RejoinCheck                    = 7,
	LoadingAthenaProfile           = 8,
	WaitingForCMS                  = 9,
	Complete                       = 10,
	EFortLoginStage_MAX            = 11,
};

enum class EFortLoginDisplay : uint8
{
	LoginStatus                    = 0,
	SplashScreen                   = 1,
	SignIn                         = 2,
	SafeZoneEditor                 = 3,
	EFortLoginDisplay_MAX          = 4,
};

enum class EFortLoginAccountType : uint8
{
	None                           = 0,
	EpicAccount                    = 1,
	Facebook                       = 2,
	Google                         = 3,
	PSN                            = 4,
	XBLive                         = 5,
	Erebus                         = 6,
	EFortLoginAccountType_MAX      = 7,
};

enum class EPlayerReportReasons : uint8
{
	None                           = 0,
	Communication                  = 1,
	Offensive                      = 2,
	AFK                            = 3,
	IgnoringObjective              = 4,
	Harassment                     = 5,
	Exploiting                     = 6,
	TradeScam                      = 7,
	CommunicationsAbuse            = 8,
	OffensiveName                  = 9,
	TeamingUpWithEnemies           = 10,
	InappropriateContent           = 11,
	ExploitingOrHacking            = 12,
	Harassment_Threatening         = 13,
	Harassment_Annoying            = 14,
	Harassment_Selling             = 15,
	Harassment_Verbal              = 16,
	Harassment_GameBehavior        = 17,
	EPlayerReportReasons_MAX       = 18,
};

enum class EFortComparisonType : uint8
{
	None                           = 0,
	HigherValue                    = 1,
	LowerValue                     = 2,
	Upgrade                        = 3,
	EFortComparisonType_MAX        = 4,
};

enum class EFortClampState : uint8
{
	NoClamp                        = 0,
	MinClamp                       = 1,
	MaxClamp                       = 2,
	EFortClampState_MAX            = 3,
};

enum class EFortBuffState : uint8
{
	NoChange                       = 0,
	Better                         = 1,
	Worse                          = 2,
	EFortBuffState_MAX             = 3,
};

enum class EFortStatValueDisplayType : uint8
{
	BasicPaired                    = 0,
	BasicSingle                    = 1,
	Unique                         = 2,
	ElementalFire                  = 3,
	ElementalIce                   = 4,
	ElementalElectric              = 5,
	EFortStatValueDisplayType_MAX  = 6,
};

enum class EFortAnimSpeed : uint8
{
	Instant                        = 0,
	Fast                           = 1,
	Normal                         = 2,
	EFortAnimSpeed_MAX             = 3,
};

enum class EFortSocialPanelTab : uint8
{
	PartyInvitations               = 0,
	Friends                        = 1,
	RecentPlayers                  = 2,
	Max                            = 3,
};

enum class EFortSocialPanelType : uint8
{
	Join                           = 0,
	Invite                         = 1,
	Max                            = 2,
};

enum class EModalContainerSize : uint8
{
	ExtraSmall                     = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	Max                            = 4,
};

enum class ENotificationType : uint8
{
	Basic                          = 0,
	Friends                        = 1,
	ENotificationType_MAX          = 2,
};

enum class ENotificationResult : uint8
{
	Confirmed                      = 0,
	Declined                       = 1,
	Unknown                        = 2,
	ENotificationResult_MAX        = 3,
};

enum class EFortInventoryContext : uint8
{
	Game                           = 0,
	Lobby                          = 1,
	FrontEnd                       = 2,
	Pickup                         = 3,
	EFortInventoryContext_MAX      = 4,
};

enum class EFortToastType : uint8
{
	Default                        = 0,
	Subdued                        = 1,
	Impactful                      = 2,
	EFortToastType_MAX             = 3,
};

enum class EUpgradeInfoImageSize : uint8
{
	Small                          = 0,
	Large                          = 1,
	EUpgradeInfoImageSize_MAX      = 2,
};

enum class EChannelSpeakerStyle : uint8
{
	InGame                         = 0,
	InLobby                        = 1,
	OutOfClient                    = 2,
	Max                            = 3,
};

enum class EWinterQuestViewState : uint8
{
	Intro                          = 0,
	Lobby                          = 1,
	Preview                        = 2,
	PurchaseConfirmation           = 3,
	Scenic                         = 4,
	Fireplace                      = 5,
	Stocking                       = 6,
	Tree                           = 7,
	PresentBundle                  = 8,
	IndividualPresent              = 9,
	Transitioning                  = 10,
	Invalid                        = 11,
	EWinterQuestViewState_MAX      = 12,
};

enum class ERadarIconState : uint8
{
	Closed                         = 0,
	Open                           = 1,
	ERadarIconState_MAX            = 2,
};

enum class EHeistExitCraftIconState : uint8
{
	None                           = 0,
	Incoming                       = 1,
	Spawned                        = 2,
	Exited                         = 3,
	EHeistExitCraftIconState_MAX   = 4,
};

enum class EHeistBlingIconState : uint8
{
	None                           = 0,
	SupplyDrop                     = 1,
	PickupItem                     = 2,
	CarriedEnemy                   = 3,
	CarriedAlly                    = 4,
	EHeistBlingIconState_MAX       = 5,
};

enum class EHeistExitCraftUIState : uint8
{
	None                           = 0,
	OnTheWay                       = 1,
	Incoming                       = 2,
	Arrived                        = 3,
	EHeistExitCraftUIState_MAX     = 4,
};

enum class ELiveStreamStandaloneBlocked : uint8
{
	StreamInWorldActive            = 0,
	ELiveStreamStandaloneBlocked_MAX = 1,
};

enum class EMatchmakingInputSource : uint8
{
	Local                          = 0,
	Remote                         = 1,
	Pool                           = 2,
	EMatchmakingInputSource_MAX    = 3,
};

enum class ESpectatorLeaderboardEntryType : uint8
{
	ScoreWithEndScore              = 0,
	NoEndScore                     = 1,
	Time                           = 2,
	Invalid                        = 3,
	ESpectatorLeaderboardEntryType_MAX = 4,
};

enum class EMinigameCaptureObjectiveIconState : uint8
{
	NotCaptured                    = 0,
	Captured                       = 1,
	EMinigameCaptureObjectiveIconState_MAX = 2,
};

enum class EFortPrioritizedWidgetInterruptedBehavior : uint8
{
	RemainInQueue                  = 0,
	Drop                           = 1,
	EFortPrioritizedWidgetInterruptedBehavior_MAX = 2,
};

enum class EFortPrioritizedWidgetContestedBehavior : uint8
{
	QueueBehind                    = 0,
	StompOther                     = 1,
	EFortPrioritizedWidgetContestedBehavior_MAX = 2,
};

enum class EFortPrioritizedWidgetPriority : uint8
{
	Priority_0                     = 0,
	Priority_1                     = 1,
	Priority_2                     = 2,
	Priority_3                     = 3,
	Priority_4                     = 4,
	Priority_5                     = 5,
	NumberOfPrios                  = 6,
};

enum class ECooldownTrackingType : uint8
{
	Cue                            = 0,
	AbilityCooldownTags            = 1,
	COUNT                          = 2,
	ECooldownTrackingType_MAX      = 3,
};

enum class ETDMScoreProgressTypes : uint8
{
	None                           = 0,
	ProgressSoundMild              = 1,
	ProgressSoundMedium            = 2,
	ProgressSoundStrong            = 3,
	CountdownSoundNormal           = 4,
	CountdownSoundStrong           = 5,
	ETDMScoreProgressTypes_MAX     = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct FortniteUI.FortSimpleWidgetAnimationBase
struct FFortSimpleWidgetAnimationBase
{
public:
	uint8                                        Pad_2AC9[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x34 (0x34 - 0x0)
// ScriptStruct FortniteUI.FortFocusedBuildingInfo
struct FFortFocusedBuildingInfo
{
public:
	bool                                         bIsInteractable;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBePlayerEdited;                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ACA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               IndicatorRelativeLocation;                         // 0x4(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuildingHealthDisplayRule    HealthDisplayRule;                                 // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ACB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxHealth;                                         // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAnyTrapAttached;                                // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTrapAttachedFacingPlayer;                       // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPreviewTrapAttached;                            // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ACC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttachedTrapMaxDurability;                         // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuildingInteraction          InteractionType;                                   // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ACD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InteractionCost;                                   // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortResourceType                 BuildingMaterial;                                  // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ACF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  QuickEditClass;                                    // 0x2C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x17 (0x17 - 0x0)
// ScriptStruct FortniteUI.FortHUDState
struct FFortHUDState
{
public:
	bool                                         bInBuildMode;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInCombatMode;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInEditMode;                                       // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInCreativeMode;                                   // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInBattleLabMode;                                  // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsParachuteOpen;                                  // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFreeFalling;                                    // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLockedBus;                                      // 0x7(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInUnlockedBus;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnTargeting;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnUsingScopeTargeting;                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnCanTarget;                                      // 0xB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnCanUseScopeTargeting;                           // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnCanUseSecondaryAbility;                         // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanOpenChute;                                     // 0xE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCrouching;                                        // 0xF(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDBNO;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsControllingRCPawn;                              // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInVehicle;                                      // 0x12(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDrivingVehicle;                                 // 0x13(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanSwapSeats;                                     // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCarryingDBNO;                                   // 0x15(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsZiplining;                                      // 0x16(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct FortniteUI.FortAttributeModifierDisplayData
struct FFortAttributeModifierDisplayData
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierType;                                      // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagRequirements              SourceTags;                                        // 0x28(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTags;                                        // 0x68(0x40)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteUI.FortTabButtonLabelInfo
struct FFortTabButtonLabelInfo
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           IconBrush;                                         // 0x18(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct FortniteUI.FortTabListRegistrationInfo
struct FFortTabListRegistrationInfo
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowedInZone;                                    // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x10(0xA0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonButton>             TabButtonType;                                     // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonUserWidget>         TabContentType;                                    // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               CreatedTabContentWidget;                           // 0xC0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct FortniteUI.FortUIStatStyle
struct FFortUIStatStyle
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  HighestText;                                       // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Icon;                                              // 0x30(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ECommonNumericType                NumericType;                                       // 0xB8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimalNotableValue;                               // 0xBC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyConditionsContext
struct FFortPlayerSurveyConditionsContext
{
public:
	uint8                                        Pad_2AD7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayer*                               Player;                                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD8[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPlayerSurveyContext*              Context;                                           // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0xC8 - 0xA0)
// ScriptStruct FortniteUI.FortAthenaItemManagementInventoryFilterTabLabelInfo
struct FFortAthenaItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
public:
	class FName                                  FilterTabNameId;                                   // 0xA0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowEmptySlotItem;                               // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ADA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  EmptyFilterDisplay;                                // 0xB0(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortLastMissionInfo
struct FFortLastMissionInfo
{
public:
	class FText                                  TheaterName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  MissionName;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Difficulty;                                        // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.FortBackendVersion
struct FFortBackendVersion
{
public:
	bool                                         bIsValid;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ADF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                App;                                               // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModuleName;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Branch;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildDate;                                         // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerDate;                                        // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Build;                                             // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Changelist;                                        // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OverridePropertiesVersion;                         // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Version;                                           // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortUIFeatureStruct
struct FFortUIFeatureStruct
{
public:
	enum class EFortUIFeatureState               CurrentState;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureState               ForcedState;                                       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeatureStateReason         ForcedStateReason;                                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            ChangeDelegate;                                    // 0x8(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct FortniteUI.FortReceivedItemLootInfo
struct FFortReceivedItemLootInfo
{
public:
	struct FFortItemHeaderInformation            HeaderInformation;                                 // 0x0(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortItem*                             GeneratedItemInstance;                             // 0x98(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   ItemDef;                                           // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TemplateId;                                        // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0xB8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE5[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.AthenaWinnerInfo
struct FAthenaWinnerInfo
{
public:
	class FString                                BigNameWinnerName;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        WinnerNames;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortItemListFilter
struct FFortItemListFilter
{
public:
	class FString                                SearchText;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortInventoryFilter              FilterType;                                        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInStorageVault;                                   // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeVaultOverflow;                             // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE8[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.FortUIPerk
struct FFortUIPerk
{
public:
	struct FFortSpecializationSlot               SpecializationSlot;                                // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortHero*                             Hero;                                              // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemTier                     Tier;                                              // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortSupportBonusType             SupportBonusType;                                  // 0x91(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTierPerk;                                       // 0x92(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUpgrade;                                        // 0x93(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEvolution;                                      // 0x94(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEvolutionBranch;                                // 0x95(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AEC[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x350 (0x350 - 0x0)
// ScriptStruct FortniteUI.FortStateStyle
struct FFortStateStyle
{
public:
	struct FFortMultiSizeBrush                   Brush;                                             // 0x0(0x330)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          PrimaryColor;                                      // 0x330(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SecondaryColor;                                    // 0x340(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteUI.CardPackOffer
struct FCardPackOffer
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        MtxPrice;                                          // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECatalogSaleType                  SaleType;                                          // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SaleText;                                          // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RegularPrice;                                      // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAccountItemDefinition*            CurrencyType;                                      // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuantityRemaining;                                 // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTimedOffer;                                       // 0x64(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AEE[0x13];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.UINavigationData
struct FUINavigationData
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UObject*                               ObjectData;                                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IdData;                                            // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntData;                                           // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AEF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.GridSortKey
struct FGridSortKey
{
public:
	float                                        Number;                                            // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                String;                                            // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyAnswerWidgetDataTableEntry
struct FFortPlayerSurveyAnswerWidgetDataTableEntry
{
public:
	TMap<enum class EFortPlayerSurveyQuestionPresentationStyle, TSubclassOf<class UFortPlayerSurveyAnswerWidgetBase>> WidgetClassMap;                                    // 0x0(0x50)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSubclassOf<class UFortPlayerSurveyAnswerWidgetBase> FallbackWidgetClass;                               // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3C0 (0x3C0 - 0x0)
// ScriptStruct FortniteUI.FortSettingsFilterState
struct FFortSettingsFilterState
{
public:
	bool                                         bIncludeDisabled;                                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeHidden;                                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeResetable;                                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeNestedPages;                               // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AF4[0x39C];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortSetting*>                  SettingRootList;                                   // 0x3A0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UFortSetting*>                  SettingWhiteList;                                  // 0x3B0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.SquadSlotSortTypes
struct FSquadSlotSortTypes
{
public:
	TArray<enum class ESquadSlotSortType>        SortTypes;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.AthenaRewardTracker
struct FAthenaRewardTracker
{
public:
	uint8                                        Pad_2B23[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.TimerDisplayData
struct FTimerDisplayData
{
public:
	struct FLinearColor                          BrushColor;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TimeRemainingDisplayText;                          // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextColor;                                         // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.GlyphAllUpdateTransitions
struct FGlyphAllUpdateTransitions
{
public:
	uint8                                        Pad_2B24[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteUI.GlyphUpdateTransition
struct FGlyphUpdateTransition
{
public:
	int32                                        Count;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinTimeOffset;                                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeOffset;                                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.DetailClassEntry
struct FDetailClassEntry
{
public:
	struct FGameplayTag                          IdentifierTag;                                     // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAthenaChallengeSetBaseDetails> DetailsWidgetClass;                                // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteUI.AthenaChallengeListVisualOptions
struct FAthenaChallengeListVisualOptions
{
public:
	bool                                         bHideHeaders;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideCompletionRewards;                            // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideQuestRewards;                                 // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCompactActionInfo;                             // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideLockedQuests;                                 // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideCompletedQuests;                              // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowOnlyCurentBundleLevelChallenges;              // 0x6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSortCompletedToEnd;                               // 0x7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreviewBundleLevel;                                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.MutatorAddedWidgets
struct FMutatorAddedWidgets
{
public:
	uint8                                        Pad_2B26[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.AthenaCustomizationParams
struct FAthenaCustomizationParams
{
public:
	enum class EAthenaCustomizationCategory      Category;                                          // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B27[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CategorySubslotIndex;                              // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  CategoryDisplayName;                               // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ItemDisplayTypeName;                               // 0x20(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bAllowUnownedItems;                                // 0x38(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOneItemPerSlot;                                   // 0x39(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B29[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     OverrideSlotImage;                                 // 0x40(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.AthenaItemShopSectionDisplayData
struct FAthenaItemShopSectionDisplayData
{
public:
	TSubclassOf<class UAthenaItemShopSection>    SectionWidgetClass;                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          StorefrontNames;                                   // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  SectionDisplayName;                                // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bShowIneligibleOffers;                             // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTimerIcon;                                    // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B2A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          SectionTag;                                        // 0x34(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B2B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.ItemShopCurrencyDislayData
struct FItemShopCurrencyDislayData
{
public:
	enum class EStoreCurrencyType                CurrencyType;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B2D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortStoreFrontOfferWidgetBase> OfferTileClass;                                    // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.PlaylistFilter
struct FPlaylistFilter
{
public:
	class UDataTable*                            PlaylistsData;                                     // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B2E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x20 - 0x18)
// ScriptStruct FortniteUI.LeaderboardFilter
struct FLeaderboardFilter : public FPlaylistFilter
{
public:
	uint8                                        Pad_2B2F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteUI.AthenaPlaylistLeaderboardData
struct FAthenaPlaylistLeaderboardData
{
public:
	class FName                                  StatId;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  StatDisplayName;                                   // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  TabDisplayName;                                    // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  RowDisplayName;                                    // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                BaseGameplayTag;                                   // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGlobal;                                         // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B30[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct FortniteUI.AthenaLeaderboardData
struct FAthenaLeaderboardData : public FTableRowBase
{
public:
	enum class EFortAthenaPlaylist               Playlist;                                          // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PlaylistName;                                      // 0xC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonInputType                  InputType;                                         // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAthenaPlaylistLeaderboardData> Stats;                                             // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bExcludePlaylistNames;                             // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B33[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        PlaylistNames;                                     // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct FortniteUI.FortResurrectionUIData
struct FFortResurrectionUIData
{
public:
	bool                                         bResurrectionChipAvailable;                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResurrectionChipPickedUp;                         // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResurrectionChipRebooting;                        // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.AthenaPostGameScreenArrayData
struct FAthenaPostGameScreenArrayData
{
public:
	TSubclassOf<class UAthenaPostGameScreenWidget> WidgetClass;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteUI.StatGroupData
struct FStatGroupData
{
public:
	class FText                                  GroupName;                                         // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Group;                                             // 0x18(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChartValue;                                        // 0xA4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChartOrigionalValue;                               // 0xA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B37[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.AthenaReplayBrowserRowData
struct FAthenaReplayBrowserRowData
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Date;                                              // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Rank;                                              // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumPlayers;                                        // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Eliminations;                                      // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B39[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct FortniteUI.AthenaTeamDisplayInfo
struct FAthenaTeamDisplayInfo
{
public:
	TSoftObjectPtr<class UObject>                Icon;                                              // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                Ribbon;                                            // 0x28(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextColor;                                         // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PedestalColor;                                     // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.MarkerLargeIndicatorType
struct FMarkerLargeIndicatorType
{
public:
	class UMaterialInterface*                    MarkerMaterial;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ImageSize;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.AthenaTeamCountSlotData
struct FAthenaTeamCountSlotData
{
public:
	class FText                                  TeamNameText;                                      // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  TeamCountText;                                     // 0x18(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsMyTeam;                                         // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B3A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteUI.FortTopBarTabButtonInfo
struct FFortTopBarTabButtonInfo
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           IconBrush;                                         // 0x20(0x88)(Edit, NativeAccessSpecifierPublic)
	enum class EFortUIFeature                    LinkedUIFeature;                                   // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBangType                     BangType;                                          // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceImage;                                       // 0xAA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPrimaryPlayerOnly;                                // 0xAB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAlternateTab;                                  // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B3B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.HUDMessageOverlaySlotPlacementData
struct FHUDMessageOverlaySlotPlacementData
{
public:
	struct FMargin                               Padding;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B3C[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.HUDMessageCanvasSlotPlacementData
struct FHUDMessageCanvasSlotPlacementData
{
public:
	struct FAnchors                              Anchors;                                           // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             Position;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Alignment;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.BackgroundColors
struct FBackgroundColors
{
public:
	struct FLinearColor                          Color_0;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color_1;                                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GridColor;                                         // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.BarrierObjectState
struct FBarrierObjectState
{
public:
	class AAthenaBarrierObjective*               ObjectiveActor;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        TeamNum;                                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBarrierFoodTeam                  FoodTeam;                                          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBarrierObjectiveDamageState      DamageState;                                       // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B3D[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteUI.BattleLabDisplayData
struct FBattleLabDisplayData
{
public:
	class FText                                  TitleText;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DescriptionText;                                   // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EBattleLabAlertType               AlertType;                                         // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B3E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RewardCount;                                       // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RewardCountTotal;                                  // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B3F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             MainIconTexture;                                   // 0x40(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.BattlePassCharacterPreviewDisplayData
struct FBattlePassCharacterPreviewDisplayData
{
public:
	class UAthenaCharacterItemDefinition*        CharacterItemDef;                                  // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                     PreviewMaterial;                                   // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct FortniteUI.PreviewRewardData
struct FPreviewRewardData
{
public:
	uint8                                        Pad_2B40[0x88];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.PreviewUnlockRewardData
struct FPreviewUnlockRewardData
{
public:
	int32                                        Currency;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAdditionalRewards;                              // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalRewards;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCharacters;                                     // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPreviewRewardData>            Characters;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPreviewRewardData>            AdditionalRewards;                                 // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteUI.PreviewUnlockData
struct FPreviewUnlockData
{
public:
	struct FPreviewUnlockRewardData              InstantRewards;                                    // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FPreviewUnlockRewardData              EarnedRewards;                                     // 0x30(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ChapterNumberText;                                 // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  SeasonNumberText;                                  // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  SummaryText;                                       // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bPaysForSelf;                                      // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B41[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.AthenaBossHealthData
struct FAthenaBossHealthData
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowShields;                                      // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B42[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Health;                                            // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HealthMax;                                         // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Shields;                                           // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShieldsMax;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.AthenaNews
struct FAthenaNews
{
public:
	uint8                                        Pad_2B44[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x180 (0x180 - 0x0)
// ScriptStruct FortniteUI.AthenaNewsEntry
struct FAthenaNewsEntry
{
public:
	enum class EAthenaNewsEntryType              EntryType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B46[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ID;                                                // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Body;                                              // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Image;                                             // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TileImage;                                         // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AdSpace;                                           // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SpotLight;                                         // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x69(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B48[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESubGameFilter                    SubGameFilter;                                     // 0x6C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlaylistId;                                        // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasCustomColor;                                   // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B4A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                CustomDarkColor;                                   // 0x84(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                CustomLightColor;                                  // 0x88(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        SortingPriority;                                   // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OfferId;                                           // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OfferButtonText;                                   // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WebsiteURL;                                        // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WebsiteButtonText;                                 // 0xC8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeature                    NavigateToTabValue;                                // 0xD8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B4D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NavigateToTabButtonText;                           // 0xE0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                STWUpsellButtonText;                               // 0xF0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VideoButtonText;                                   // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VideoVideoString;                                  // 0x110(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VideoStreamingVideoID;                             // 0x120(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VideoFallbackVideoID;                              // 0x130(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VideoProdLinkID;                                   // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                VideoGamedevLinkID;                                // 0x150(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VideoAutoplay;                                     // 0x160(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VideoForceAutoplay;                                // 0x161(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VideoLoop;                                         // 0x162(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VideoMute;                                         // 0x163(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VideoFullscreen;                                   // 0x164(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VideoStreamingEnabled;                             // 0x165(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B52[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VideoUID;                                          // 0x168(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B53[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct FortniteUI.AthenaPlaylistEntry
struct FAthenaPlaylistEntry
{
public:
	class FString                                PlaylistName;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplaySubName;                                    // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Violator;                                          // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Image;                                             // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ExtraImages;                                       // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        CropOffset;                                        // 0x70(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMatchmakingTileStyle         SpecialBorderId;                                   // 0x74(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRevealAnimation;                              // 0x75(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B55[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x188 (0x188 - 0x0)
// ScriptStruct FortniteUI.ShowdownTournamentEntry
struct FShowdownTournamentEntry
{
public:
	class FString                                TournamentDisplayId;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TitleLine1;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TitleLine2;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ScheduleInfo;                                      // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PosterFrontImage;                                  // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PosterBackImage;                                   // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FlavorDescription;                                 // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DetailsDescription;                                // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShortFormatTitle;                                  // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LongFormatTitle;                                   // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PinScoreRequirement;                               // 0xA0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B5E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PinEarnedText;                                     // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BaseColor;                                         // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrimaryColor;                                      // 0xC8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SecondaryColor;                                    // 0xD8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HighlightColor;                                    // 0xE8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TitleColor;                                        // 0xF8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShadowColor;                                       // 0x108(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BackgroundLeftColor;                               // 0x118(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BackgroundRightColor;                              // 0x128(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BackgroundTextColor;                               // 0x138(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PosterFadeColor;                                   // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlaylistTileImage;                                 // 0x158(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LoadingScreenImage;                                // 0x168(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StyleInfoId;                                       // 0x178(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteUI.ShowdownLatestTournamentData
struct FShowdownLatestTournamentData
{
public:
	class FString                                LastModified;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FShowdownTournamentEntry> Entries;                                           // 0x10(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteUI.AthenaNewsData
struct FAthenaNewsData
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                Image;                                             // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                _type;                                             // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  AdSpace;                                           // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         SpotLight;                                         // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Hidden;                                            // 0x69(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B5F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESubGameFilter                    SubGameFilter;                                     // 0x6C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteUI.AthenaNewsPlatformData
struct FAthenaNewsPlatformData
{
public:
	class FString                                Platform;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaNewsData                       Message;                                           // 0x10(0x70)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                _type;                                             // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.AthenaNewsMessages
struct FAthenaNewsMessages
{
public:
	TArray<struct FAthenaNewsData>               Messages;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAthenaNewsPlatformData>       Platform_messages;                                 // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                _type;                                             // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.AthenaNewsSource
struct FAthenaNewsSource
{
public:
	class FString                                Header;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaNewsMessages                   News;                                              // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                _locale;                                           // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C8 (0x1C8 - 0x0)
// ScriptStruct FortniteUI.ShowdownTournamentData
struct FShowdownTournamentData
{
public:
	class FString                                Tournament_Display_Id;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title_Line_1;                                      // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Title_Line_2;                                      // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Schedule_Info;                                     // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                Poster_Front_Image;                                // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Poster_Back_Image;                                 // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Flavor_Description;                                // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Details_Description;                               // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Short_Format_Title;                                // 0xA8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Long_Format_Title;                                 // 0xC0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Pin_Score_Requirement;                             // 0xD8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Pin_Earned_Text;                                   // 0xE0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          Base_Color;                                        // 0xF8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Primary_Color;                                     // 0x108(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Secondary_Color;                                   // 0x118(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Highlight_Color;                                   // 0x128(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Title_Color;                                       // 0x138(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Shadow_Color;                                      // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Background_Left_Color;                             // 0x158(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Background_Right_Color;                            // 0x168(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Background_Text_Color;                             // 0x178(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Poster_Fade_Color;                                 // 0x188(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Playlist_Tile_Image;                               // 0x198(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Loading_Screen_Image;                              // 0x1A8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Style_Info_Id;                                     // 0x1B8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.ShowdownTournamentJsonObject
struct FShowdownTournamentJsonObject
{
public:
	TArray<struct FShowdownTournamentData>       Tournaments;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.ShowdownTournamentSource
struct FShowdownTournamentSource
{
public:
	struct FShowdownTournamentJsonObject         Tournament_Info;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                _title;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                _locale;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.KoreanCafeData
struct FKoreanCafeData
{
public:
	struct FGameplayTag                          Korean_Cafe;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Korean_Cafe_Header;                                // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Korean_Cafe_Description;                           // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.KoreanCafeJsonObject
struct FKoreanCafeJsonObject
{
public:
	TArray<struct FKoreanCafeData>               Cafes;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.KoreanCafeSource
struct FKoreanCafeSource
{
public:
	class FString                                _title;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                __locale;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKoreanCafeJsonObject                 Cafe_Info;                                         // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.SubgameDisplayData
struct FSubgameDisplayData
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  SpecialMessage;                                    // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  StandardMessageLine1;                              // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  StandardMessageLine2;                              // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                Image;                                             // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E8 (0x1E8 - 0x0)
// ScriptStruct FortniteUI.SubgameScreenSource
struct FSubgameScreenSource
{
public:
	class FString                                _title;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                __locale;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubgameDisplayData                   Creative;                                          // 0x20(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSubgameDisplayData                   SaveTheWorld;                                      // 0xB8(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSubgameDisplayData                   BattleRoyale;                                      // 0x150(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteUI.CreativeAdData
struct FCreativeAdData
{
public:
	class FString                                Header;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Sub_Header;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Creator_Name;                                      // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Island_Code;                                       // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCreativeAdType               Ad_Type;                                           // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortCreativeAdColorPreset        Ad_Color_Preset;                                   // 0x51(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B67[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Image;                                             // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.CreativeAdJsonObject
struct FCreativeAdJsonObject
{
public:
	TArray<struct FCreativeAdData>               Ads;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.CreativeAdSource
struct FCreativeAdSource
{
public:
	class FString                                _title;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                __locale;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCreativeAdJsonObject                 Ad_Info;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x2E8 (0x2E8 - 0x0)
// ScriptStruct FortniteUI.CmsJsonMessages
struct FCmsJsonMessages
{
public:
	class FString                                _title;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                _locale;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAthenaNewsSource                     BattleRoyaleNews;                                  // 0x20(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FShowdownTournamentSource             TournamentInformation;                             // 0x70(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FKoreanCafeSource                     KoreanCafe;                                        // 0xA0(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSubgameScreenSource                  SubGameInfo;                                       // 0xD0(0x1E8)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FCreativeAdSource                     CreativeAds;                                       // 0x2B8(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.DynamicBackground
struct FDynamicBackground
{
public:
	class FString                                _title;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                __locale;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicBackgroudKey              Key;                                               // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B6D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BackgroundImage;                                   // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Stage;                                             // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.DynamicBackgrounds
struct FDynamicBackgrounds
{
public:
	TArray<struct FDynamicBackground>            Backgrounds;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.DynamicBackgroundsSource
struct FDynamicBackgroundsSource
{
public:
	class FString                                _title;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                __locale;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastModified;                                      // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicBackgrounds                   Backgrounds;                                       // 0x30(0x10)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.SurvivalObjectiveText
struct FSurvivalObjectiveText
{
public:
	TArray<class FString>                        SafezoneStateText;                                 // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.SurvivalObjectiveIconData
struct FSurvivalObjectiveIconData
{
public:
	int32                                        IconIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESurvivalObjectiveIconState       IconState;                                         // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESurvivalObjectiveIconState       PrevIconState;                                     // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B6F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SpecialActorID;                                    // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.DiscoCaptureUIData
struct FDiscoCaptureUIData
{
public:
	enum class EDiscoCaptureUIState              CurrDisplayState;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAthenaCapturePoint*                   CapturePoint;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerPawnAthena*                 CurrPawn;                                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              CurrMID;                                           // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FillAmount;                                        // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B71[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayText;                                       // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.DiscoTeamScoreData
struct FDiscoTeamScoreData
{
public:
	class FText                                  CurrScoreText;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        CurrScorePercent;                                  // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrScore;                                         // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.DiscoCaptureIconData
struct FDiscoCaptureIconData
{
public:
	enum class EDiscoCaptureIconState            CurrIconState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDiscoCaptureProgressState        CurrProgressState;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B72[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrCapturePercent;                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAthenaCapturePoint*                   CapturePoint;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.QuestRecapData
struct FQuestRecapData
{
public:
	TWeakObjectPtr<class UFortQuestItem>         QuestItem;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastKnownMcpValue;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AchivedCount;                                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredCount;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.CharacterRanges
struct FCharacterRanges
{
public:
	TArray<int32>                                Ranges;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                SinglePoints;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ExcludedPoints;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortBattlePassVideoAnnotation
struct FFortBattlePassVideoAnnotation
{
public:
	float                                        StartTime;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndTime;                                           // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ScreenPosition;                                    // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EntryAngle;                                        // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EntryMagnitude;                                    // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   RewardItemDefinition;                              // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.VaultVariantOverrideOption
struct FVaultVariantOverrideOption
{
public:
	struct FGameplayTag                          VariantChannelOverride;                            // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VariantTagOverride;                                // 0x8(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.VaultItemViewSettings
struct FVaultItemViewSettings
{
public:
	class UFortAccountItemDefinition*            ItemToView;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubslotIndex;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BannerRowName;                                     // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemVariantPreviewIndex;                           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVaultVariantOverrideOption>   VariantOverrides;                                  // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortConfirmationButtonInfo
struct FFortConfirmationButtonInfo
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B75[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.CachedIslandsGroup
struct FCachedIslandsGroup
{
public:
	TArray<class UFortCreativeIslandLink*>       IslandLinks;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B76[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FortniteUI.FortCreativeItemListCategoryData
struct FFortCreativeItemListCategoryData : public FTableRowBase
{
public:
	enum class ECreativeItemCategory             Category;                                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemCardSize                 CardSize;                                          // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCollapseCardBorderPad;                            // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B79[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.ItemListCategoryArray
struct FItemListCategoryArray
{
public:
	TArray<struct FFortItemEntry>                ItemList;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  CategoryTitle;                                     // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortWeightedObject
struct FFortWeightedObject
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B7A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortItemListOptionBucket
struct FFortItemListOptionBucket
{
public:
	uint8                                        Pad_2B7B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ItemIndex;                                         // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B7C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFortItemListOptionProxy*>      ItemOptionData;                                    // 0x10(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.RarityArray
struct FRarityArray
{
public:
	TArray<class UFortItemDefinition*>           Items;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.OptionsReleaseInfo
struct FOptionsReleaseInfo
{
public:
	enum class ESettingType                      SettingType;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B7D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReleaseVersion;                                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteUI.FortCreativeServerDisplayOption
struct FFortCreativeServerDisplayOption : public FTableRowBase
{
public:
	class UTexture*                              Image;                                             // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortDailyRewardsItemData
struct FFortDailyRewardsItemData
{
public:
	class UFortItem*                             RewardItem;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RewardDay;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCurrentReward;                                   // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsClaimed;                                         // 0xD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B7E[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.FortDailyRewardsScheduleData
struct FFortDailyRewardsScheduleData
{
public:
	class FText                                  ScheduleTitle;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ScheduleDescription;                               // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ScheduleItemDescription;                           // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ScheduleEpicItemDescription;                       // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        WeekOffset;                                        // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RewardsGiven;                                      // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RewardsAllowed;                                    // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortDailyRewardsItemData>     CalendarItems;                                     // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortDailyRewardsItemData>     HighValueItems;                                    // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ClaimedToday;                                      // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B80[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortDailyRewardsData
struct FFortDailyRewardsData
{
public:
	int32                                        CurrentLoginDays;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanClaim;                                         // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B81[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortDailyRewardsScheduleData> Schedules;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct FortniteUI.ExpeditionTabInfo
struct FExpeditionTabInfo
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x8(0xA0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.ConsumedCriteriaData
struct FConsumedCriteriaData
{
public:
	float                                        PowerMod;                                          // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CriteriaNames;                                     // 0x8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.ViewVaultItemsParams
struct FViewVaultItemsParams
{
public:
	TArray<class UFortItemDefinition*>           ItemsToView;                                       // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B83[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortFrontEndFeatureStruct
struct FFortFrontEndFeatureStruct
{
public:
	enum class EFortFrontEndFeatureState         CurrentState;                                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontEndFeatureState         ForcedState;                                       // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontEndFeatureStateReason   ForcedStateReason;                                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B84[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            ChangeDelegate;                                    // 0x8(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.UnlockableVariantPreviewInfo
struct FUnlockableVariantPreviewInfo
{
public:
	bool                                         bIsValid;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SetNumber;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SetCount;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UnlockCondition;                                   // 0x10(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteUI.FortMissionRewardInfo
struct FFortMissionRewardInfo
{
public:
	struct FSlateBrush                           Icon;                                              // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UFortItem*                             Item;                                              // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMissionAlertReward;                             // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B88[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x170 (0x170 - 0x0)
// ScriptStruct FortniteUI.FortMissionDetails
struct FFortMissionDetails
{
public:
	enum class EFortTheaterMapTileType           TileType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B89[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TheaterDisplayName;                                // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  MissionName;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  MissionDescription;                                // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsGroupContent;                                   // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMissionGenerator*                 MissionDefinition;                                 // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ZoneName;                                          // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ZoneDescription;                                   // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  RegionThemeName;                                   // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USlateBrushAsset>       RegionThemeIcon;                                   // 0xA8(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DifficultyName;                                    // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FFortMissionRewardInfo>        MissionRewards;                                    // 0xE8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimespan                             AvailableTime;                                     // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERatingsEnforcementType           RatingsEnforcement;                                // 0x100(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B8C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RequiredBaseRating;                                // 0x104(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RecommendedBaseRating;                             // 0x108(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxBaseRating;                                     // 0x10C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ContentDifficultyLevel;                            // 0x110(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOnboarding;                                     // 0x114(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LootLevel;                                         // 0x118(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideConningText;                              // 0x11C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ConningOverrideText;                               // 0x120(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                TheaterUniqueId;                                   // 0x138(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortCloudSaveItemDefinition*          AssociatedCloudSaveItemDefinition;                 // 0x148(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UFortGameplayModifierItemDefinition*> GameplayModifiers;                                 // 0x150(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FText>                          Objectives;                                        // 0x160(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.AttributeRequirement
struct FAttributeRequirement
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequirementsMet;                                  // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B91[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.BuildingRequirements
struct FBuildingRequirements
{
public:
	int32                                        RequiredAccountLevel;                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentAccountLevel;                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAttributeRequirement>         AttributeRequirements;                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        RequiredPower;                                     // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentPower;                                      // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredManufacturing;                             // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentManufacturing;                              // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.GiftingErrorText
struct FGiftingErrorText
{
public:
	enum class EOfferPurchaseError               GiftingError;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B93[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ErrorTitle;                                        // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ErrorDesc;                                         // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteUI.FortItemFilterDefinition
struct FFortItemFilterDefinition
{
public:
	uint8                                        Pad_2B95[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortItemSorterDefinition
struct FFortItemSorterDefinition
{
public:
	uint8                                        Pad_2B96[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteUI.FortHeroLoadoutHeroPickerTabConfiguration
struct FFortHeroLoadoutHeroPickerTabConfiguration
{
public:
	struct FFortItemFilterDefinition             Filter;                                            // 0x0(0x60)(NativeAccessSpecifierPublic)
	struct FFortItemSorterDefinition             Sorter;                                            // 0x60(0x50)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortInGamePerkDisplayData
struct FFortInGamePerkDisplayData
{
public:
	enum class EFortHeroPerkDisplayType          PerkDisplayType;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Row;                                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Column;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct FortniteUI.FortHeroNamesData
struct FFortHeroNamesData : public FTableRowBase
{
public:
	class FString                                FirstName;                                         // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NickName;                                          // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastName;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortItemDelta
struct FFortItemDelta
{
public:
	class UFortItemDefinition*                   ItemDefinition;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseAmount;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeltaAmount;                                       // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x390 (0x390 - 0x0)
// ScriptStruct FortniteUI.FortBasicMissionInfo
struct FFortBasicMissionInfo
{
public:
	class FText                                  MissionName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortMultiSizeBrush                   MissionIcons;                                      // 0x18(0x330)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  TheaterName;                                       // 0x348(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DifficultyName;                                    // 0x360(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UMediaSource*                          EndOfMissionMediaSource;                           // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                          EndOfMissionMediaSourceStreamed;                   // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipEndOfMissionVideo;                            // 0x388(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGroupContent;                                   // 0x389(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B9E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct FortniteUI.FortKillerVisualInfo
struct FFortKillerVisualInfo
{
public:
	struct FSlateBrush                           KillerBrush;                                       // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  KillerName;                                        // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.ContextPosition
struct FContextPosition
{
public:
	enum class EContextPositionPlatform          Platform;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BA1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Position;                                          // 0x4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0xD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BA3[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteUI.FortActionBeingUnbound
struct FFortActionBeingUnbound
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InputIndex;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.ItemDefinitionChangedStruct
struct FItemDefinitionChangedStruct
{
public:
	UMulticastInlineDelegateProperty_            ChangeDelegate;                                    // 0x0(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_StackCountBlock_Configuration
struct FFortItemCard_StackCountBlock_Configuration
{
public:
	bool                                         bShowShorthandStackCount;                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UCommonTextStyle>        TextStyle;                                         // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XXS_ItemInstance_Configuration
struct FFortItemCard_XXS_ItemInstance_Configuration
{
public:
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XS_TransformKey_Configuration
struct FFortItemCard_XS_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_Configuration
struct FFortItemCard_PowerRatingBlock_Configuration
{
public:
	uint8                                        Pad_2BA6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           MoonbeamBorderBrush;                               // 0x8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               MoonbeamBorderExteriorPadding;                     // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               MoonbeamBorderPadding;                             // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               CustomRatingInternalPadding;                       // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             CustomRatingIconSize;                              // 0xC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        CustomRatingTextStyle;                             // 0xC8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ComparisonIndicatorSize;                           // 0xF0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0x1A8 - 0xF8)
// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_ItemInstance_Configuration
struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration : public FFortItemCard_PowerRatingBlock_Configuration
{
public:
	struct FSlateBrush                           PowerRatingIconBrush;                              // 0xF8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        PowerRatingTextStyle;                              // 0x180(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_DurabilityMeter_Configuration
struct FFortItemCard_DurabilityMeter_Configuration
{
public:
	float                                        MeterThickness;                                    // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               MeterPadding;                                      // 0x4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x230 (0x230 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XS_ItemInstance_Configuration
struct FFortItemCard_XS_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x1A8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x1C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x1D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x1E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x1E8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x218(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BA9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_DetailAreaBorder_Configuration
struct FFortItemCard_DetailAreaBorder_Configuration
{
public:
	float                                        MinimumHeight;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XS_PersonnelAndSchematics_Configuration
struct FFortItemCard_XS_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x18(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             AvailableUpgradeIconSize;                          // 0x2C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_S_TransformKey_Configuration
struct FFortItemCard_S_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteUI.FortItemCard_TierMeter_Configuration
struct FFortItemCard_TierMeter_Configuration
{
public:
	struct FVector2D                             PipSize;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterPipPadding;                                   // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x248 (0x248 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_S_ItemInstance_Configuration
struct FFortItemCard_S_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x1A8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x1C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x1D0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x200(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TierMeterPadding;                                  // 0x218(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x228(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x234(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_LevelMeter_Configuration
struct FFortItemCard_LevelMeter_Configuration
{
public:
	float                                        MeterThickness;                                    // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               MeterPadding;                                      // 0x4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x160 (0x258 - 0xF8)
// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration
struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration : public FFortItemCard_PowerRatingBlock_Configuration
{
public:
	struct FSlateBrush                           PersonnelPowerRatingIconBrush;                     // 0xF8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        PersonnelPowerRatingTextStyle;                     // 0x180(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SchematicPowerRatingIconBrush;                     // 0x1A8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        SchematicPowerRatingTextStyle;                     // 0x230(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_NameplateBorder_Configuration
struct FFortItemCard_NameplateBorder_Configuration
{
public:
	struct FMargin                               Padding;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush;                                             // 0x10(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_DefenderWeaponTypeIcon_Configuration
struct FFortItemCard_DefenderWeaponTypeIcon_Configuration
{
public:
	struct FVector2D                             IconConstraints;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x370 (0x370 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_S_PersonnelAndSchematics_Configuration
struct FFortItemCard_S_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                  // 0x10(0x258)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                         // 0x270(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             ClassIconSize;                                     // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeadSurvivorTypeIconSize;                          // 0x310(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstIconSlotSize;                                 // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenIconSlots;                           // 0x320(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondIconSlotSize;                                // 0x324(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                            // 0x32C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x334(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter;                                        // 0x348(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TierMeterLeftPadding;                              // 0x35C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x360(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BB0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_M_TransformKey_Configuration
struct FFortItemCard_M_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x258 (0x258 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_M_ItemInstance_Configuration
struct FFortItemCard_M_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x1A8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x1C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x1D0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x200(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenTraitIcons;                          // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondTraitSize;                                   // 0x21C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TierMeterPadding;                                  // 0x224(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x234(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x240(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BBA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x370 (0x370 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_M_PersonnelAndSchematics_Configuration
struct FFortItemCard_M_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                  // 0x10(0x258)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                         // 0x270(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             ClassIconSize;                                     // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeadSurvivorTypeIconSize;                          // 0x310(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstIconSlotSize;                                 // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenIconSlots;                           // 0x320(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondIconSlotSize;                                // 0x324(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                            // 0x32C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x334(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter;                                        // 0x348(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TierMeterLeftPadding;                              // 0x35C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x360(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BBF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_L_TransformKey_Configuration
struct FFortItemCard_L_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x258 (0x258 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_L_ItemInstance_Configuration
struct FFortItemCard_L_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x1A8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x1C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x1D0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x200(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenTraitIcons;                          // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondTraitSize;                                   // 0x21C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TierMeterPadding;                                  // 0x224(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x234(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x240(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BC1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x370 (0x370 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_L_PersonnelAndSchematics_Configuration
struct FFortItemCard_L_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                  // 0x10(0x258)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                         // 0x270(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             ClassIconSize;                                     // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeadSurvivorTypeIconSize;                          // 0x310(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstIconSlotSize;                                 // 0x318(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenIconSlots;                           // 0x320(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondIconSlotSize;                                // 0x324(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                            // 0x32C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x334(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter;                                        // 0x348(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TierMeterLeftPadding;                              // 0x35C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x360(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BC3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XL_TransformKey_Configuration
struct FFortItemCard_XL_TransformKey_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             TransformKeyIconSize;                              // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x258 (0x258 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XL_ItemInstance_Configuration
struct FFortItemCard_XL_ItemInstance_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               PowerRatingBlockPadding;                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock;                                  // 0x20(0x1A8)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x1C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock;                                   // 0x1D0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               TraitBoxPadding;                                   // 0x200(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstTraitSize;                                    // 0x210(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenTraitIcons;                          // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondTraitSize;                                   // 0x21C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TierMeterPadding;                                  // 0x224(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x234(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter;                                   // 0x240(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BC5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3F8 (0x3F8 - 0x0)
// ScriptStruct FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration
struct FFortItemCard_XL_PersonnelAndSchematics_Configuration
{
public:
	struct FMargin                               BackgroundPadding;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;                                  // 0x10(0x258)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             BookmarkImageSize;                                 // 0x268(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate;                                         // 0x270(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        ItemNameTextStyle;                                 // 0x308(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeadSurvivorTypeIconSize;                          // 0x330(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FirstIconSlotSize;                                 // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenIconSlots;                           // 0x340(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SecondIconSlotSize;                                // 0x344(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;                            // 0x34C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;                                  // 0x354(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RarityNameTextLeftPadding;                         // 0x368(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BC8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class UCommonTextStyle>        RarityNameTextStyle;                               // 0x370(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClassIconImageLeftPadding;                         // 0x398(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ClassIconSize;                                     // 0x39C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PaddingBetweenClassIconAndName;                    // 0x3A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UCommonTextStyle>        ClassNameTextStyle;                                // 0x3A8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TierMeterLeftPadding;                              // 0x3D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortItemCard_TierMeter_Configuration TierMeter;                                         // 0x3D4(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               IconSlotOverNameplatePadding;                      // 0x3E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             IconSlotOverNameplateSize;                         // 0x3F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct FortniteUI.FortRefundDescriptionsData
struct FFortRefundDescriptionsData : public FTableRowBase
{
public:
	class FString                                SearchString;                                      // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetReleaseVersion;                              // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  RefundDescriptionText;                             // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct FortniteUI.FortItemListViewConfig
struct FFortItemListViewConfig
{
public:
	uint8                                        Pad_2BCD[0xC0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xA8 - 0xA0)
// ScriptStruct FortniteUI.FortItemManagementInventoryFilterTabLabelInfo
struct FFortItemManagementInventoryFilterTabLabelInfo : public FFortTabButtonLabelInfo
{
public:
	class FName                                  FilterTabNameId;                                   // 0xA0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.InterpolatedTransitionCamera
struct FInterpolatedTransitionCamera
{
public:
	struct FTransform                            CameraTransform;                                   // 0x0(0x30)(BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FieldOfView;                                       // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BCF[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct FortniteUI.VaultTransitionOptions
struct FVaultTransitionOptions
{
public:
	enum class EVaultTransitionType              TRANSITION;                                        // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.FortItemEntryPreviewData
struct FFortItemEntryPreviewData
{
public:
	int32                                        Quantity;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemInspectionMode           InspectMode;                                       // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BD0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.MeasuredText
struct FMeasuredText
{
public:
	uint8                                        Pad_2BD1[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.OfferGroup
struct FOfferGroup
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumberToShow;                                   // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BD2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3C (0x3C - 0x0)
// ScriptStruct FortniteUI.FortMaterialProgressBarSectionStyle
struct FFortMaterialProgressBarSectionStyle
{
public:
	bool                                         bGradientBar;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BD4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BarParamName;                                      // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BarColorOneParamName;                              // 0xC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BarColorTwoParamName;                              // 0x14(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BarColorOne;                                       // 0x1C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BarColorTwo;                                       // 0x2C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.FortMaterialProgressBarSectionInfo
struct FFortMaterialProgressBarSectionInfo
{
public:
	struct FFortMaterialProgressBarSectionStyle  SectionStyle;                                      // 0x0(0x3C)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Percent;                                           // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortMobileActionButtonLayout
struct FFortMobileActionButtonLayout
{
public:
	struct FAnchorData                           LayoutData;                                        // 0x0(0x28)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        ButtonSize;                                        // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ButtonDisplayScale;                                // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.FortMobileActionButtonSchema
struct FFortMobileActionButtonSchema
{
public:
	TSubclassOf<class UFortMobileActionButtonBehavior> ButtonBehaviorClass;                               // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFortMobileActionButtonLayout         ButtonLayout;                                      // 0x8(0x30)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortMobileActionContextLayout
struct FFortMobileActionContextLayout
{
public:
	TArray<struct FFortMobileActionButtonSchema> ButtonSchemas;                                     // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class UFortMobileHUDContextModel*            HUDContextModel;                                   // 0x10(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.FortMobileActionLayoutProfile
struct FFortMobileActionLayoutProfile
{
public:
	class FText                                  ProfileName;                                       // 0x0(0x18)(Edit, NativeAccessSpecifierPrivate)
	TArray<struct FFortMobileActionContextLayout> ContextLayouts;                                    // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct FortniteUI.FortMobileContextFilter
struct FFortMobileContextFilter
{
public:
	struct FGameplayTagContainer                 ShownInContexts;                                   // 0x0(0x20)(Edit, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 HiddenInContexts;                                  // 0x20(0x20)(Edit, NativeAccessSpecifierPrivate)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct FortniteUI.FortModalContainerSizeEntry
struct FFortModalContainerSizeEntry
{
public:
	float                                        AbsoluteWidth;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TopPercent;                                        // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MiddlePercent;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BottomPercent;                                     // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VerticalPadding;                                   // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HorizontalPadding;                                 // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ContentPadding;                                    // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortMtxGradient
struct FFortMtxGradient
{
public:
	struct FLinearColor                          Start;                                             // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Stop;                                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortMtxDetailsAttribute
struct FFortMtxDetailsAttribute
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.PlatformOverrides
struct FPlatformOverrides
{
public:
	bool                                         DisplayOnPlatform;                                 // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PlatformDisplayText;                               // 0x8(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  PlatformHoverText;                                 // 0x20(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.SliderSettings
struct FSliderSettings
{
public:
	int32                                        MinIntegralDigits;                                 // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIntegralDigits;                                 // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinFractionalDigits;                               // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxFractionalDigits;                               // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSensitivityValue;                               // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxSensitivityValue;                               // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepSize;                                          // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERoundingMode                     RoundingMode;                                      // 0x1C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BDF[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x198 (0x198 - 0x0)
// ScriptStruct FortniteUI.SettingData
struct FSettingData
{
public:
	enum class ESettingType                      SettingType;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFortOptionsMenuSetting>   SettingWidgetType;                                 // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayText;                                       // 0x10(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  HoverText;                                         // 0x28(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPlatformOverrides                    PlatformPCOverrides;                               // 0x40(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPlatformOverrides                    PlatformXboxOverrides;                             // 0x78(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPlatformOverrides                    PlatformPS4Overrides;                              // 0xB0(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPlatformOverrides                    PlatformSwitchOverrides;                           // 0xE8(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FPlatformOverrides                    PlatformMobileOverrides;                           // 0x120(0x38)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<enum class ESubGame>                  HiddenModes;                                       // 0x158(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSliderSettings                       SliderSettings;                                    // 0x168(0x20)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  Curve;                                             // 0x188(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.OptionsTabData
struct FOptionsTabData
{
public:
	TArray<struct FSettingData>                  SettingDatas;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortUIPerkTier
struct FFortUIPerkTier
{
public:
	class UFortHeroSpecialization*               HeroSpecialization;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortItemTier                     Tier;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortHero*                             CurrentHero;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUpgrade;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEvolution;                                      // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE3[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.TrackedTrapTimeAndCount
struct FTrackedTrapTimeAndCount
{
public:
	uint8                                        Pad_2BE5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.FortPickerTemporaryWheelItem
struct FFortPickerTemporaryWheelItem
{
public:
	class FText                                  LabelOverride;                                     // 0x0(0x18)(NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   Item;                                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortPickerTemporaryWheel
struct FFortPickerTemporaryWheel
{
public:
	uint8                                        Pad_2BE6[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortPickerTemporaryWheelItem> Items;                                             // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct FortniteUI.RadialOptionData
struct FRadialOptionData
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush;                                             // 0x18(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SoftIcon;                                          // 0xA0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0xE0 - 0xC8)
// ScriptStruct FortniteUI.SquadQuickChatOptionData
struct FSquadQuickChatOptionData : public FRadialOptionData
{
public:
	struct FAthenaQuickChatActiveEntry           ChatEntry;                                         // 0xC8(0x14)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE7[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct FortniteUI.ItemDefOptionData
struct FItemDefOptionData : public FRadialOptionData
{
public:
	class UObject*                               ItemDef;                                           // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct FortniteUI.EmoteOptionData
struct FEmoteOptionData : public FRadialOptionData
{
public:
	class FName                                  EmoteCommand;                                      // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0xE0 - 0xC8)
// ScriptStruct FortniteUI.MapNoteOptionData
struct FMapNoteOptionData : public FRadialOptionData
{
public:
	class FText                                  MapNoteText;                                       // 0xC8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0xE0 - 0xC8)
// ScriptStruct FortniteUI.SquadChatOptionData
struct FSquadChatOptionData : public FRadialOptionData
{
public:
	class FText                                  ChatText;                                          // 0xC8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0xE0 - 0xC8)
// ScriptStruct FortniteUI.ChatOptionData
struct FChatOptionData : public FRadialOptionData
{
public:
	class FText                                  ChatText;                                          // 0xC8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0xE0 - 0xC8)
// ScriptStruct FortniteUI.ItemCategoryOptionData
struct FItemCategoryOptionData : public FRadialOptionData
{
public:
	class FString                                TemplatePrefix;                                    // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBuildingAttachmentType           BuildingAttachmentType;                            // 0xD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BEE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0xE0 - 0xC8)
// ScriptStruct FortniteUI.BuildingOptionData
struct FBuildingOptionData : public FRadialOptionData
{
public:
	class FString                                ClassSuffix;                                       // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClassMirrored;                                     // 0xD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BEF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct FortniteUI.BuildingCategoryOptionData
struct FBuildingCategoryOptionData : public FRadialOptionData
{
public:
	enum class EFortBuildingType                 BuildingType;                                      // 0xC8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo
struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo
{
public:
	enum class EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType FocusType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData
struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData
{
public:
	class UCommonButton*                         ButtonWidget;                                      // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF3[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataCondition
struct FFortPlayerSurveyCMSDataCondition
{
public:
	uint8                                        Pad_2BF4[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionBase
struct FFortPlayerSurveyCMSDataConditionBase
{
public:
	uint8                                        Pad_2BF5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionGroupBase
struct FFortPlayerSurveyCMSDataConditionGroupBase : public FFortPlayerSurveyCMSDataConditionBase
{
public:
	TArray<struct FJsonObjectWrapper>            C;                                                 // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAnd
struct FFortPlayerSurveyCMSDataConditionAnd : public FFortPlayerSurveyCMSDataConditionGroupBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionSimpleIntComparisonBase
struct FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase : public FFortPlayerSurveyCMSDataConditionBase
{
public:
	enum class EFortPlayerSurveyCMSDataBinaryComparisonOp O;                                                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        T;                                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x98 - 0x10)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaMatchStat
struct FFortPlayerSurveyCMSDataConditionAthenaMatchStat : public FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase
{
public:
	TArray<enum class EFortPlayerSurveyCMSDataPlaylistCategory> Pt;                                                // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<class FName>                            P;                                                 // 0x20(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        I;                                                 // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                S;                                                 // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortPlayerSurveyCMSDataAggregateOp Ag;                                                // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataGameplayTagQuery
struct FFortPlayerSurveyCMSDataGameplayTagQuery
{
public:
	enum class EFortPlayerSurveyCMSDataGameplayTagQueryExprType T;                                                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          N;                                                 // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaPoi
struct FFortPlayerSurveyCMSDataConditionAthenaPoi : public FFortPlayerSurveyCMSDataConditionBase
{
public:
	struct FFortPlayerSurveyCMSDataGameplayTagQuery Q;                                                 // 0x8(0x18)(NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaSeasonBookState
struct FFortPlayerSurveyCMSDataConditionAthenaSeasonBookState : public FFortPlayerSurveyCMSDataConditionBase
{
public:
	bool                                         T;                                                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BFB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x18 - 0x10)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaSeasonStat
struct FFortPlayerSurveyCMSDataConditionAthenaSeasonStat : public FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase
{
public:
	enum class EFortPlayerSurveyCMSDataAthenaSeasonStat S;                                                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BFC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionGroup
struct FFortPlayerSurveyCMSDataConditionGroup
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>            C;                                                 // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionGroupReference
struct FFortPlayerSurveyCMSDataConditionGroupReference : public FFortPlayerSurveyCMSDataConditionBase
{
public:
	class FName                                  ID;                                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataRelativeSurveyKey
struct FFortPlayerSurveyCMSDataRelativeSurveyKey
{
public:
	enum class EFortPlayerSurveyCMSDataRelativeSurveyKeyType T;                                                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ID;                                                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionMostRecentlyCompleted
struct FFortPlayerSurveyCMSDataConditionMostRecentlyCompleted : public FFortPlayerSurveyCMSDataConditionBase
{
public:
	struct FFortPlayerSurveyCMSDataRelativeSurveyKey S;                                                 // 0x8(0x18)(NativeAccessSpecifierPublic)
	enum class EFortPlayerSurveyCMSDataBinaryComparisonOp O;                                                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       T;                                                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionOr
struct FFortPlayerSurveyCMSDataConditionOr : public FFortPlayerSurveyCMSDataConditionGroupBase
{
public:
};

// 0x50 (0x58 - 0x8)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionPlatform
struct FFortPlayerSurveyCMSDataConditionPlatform : public FFortPlayerSurveyCMSDataConditionBase
{
public:
	TSet<class FString>                          P;                                                 // 0x8(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionQuestState
struct FFortPlayerSurveyCMSDataConditionQuestState : public FFortPlayerSurveyCMSDataConditionBase
{
public:
	enum class EFortPlayerSurveyCMSDataGameMode  Sg;                                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Q;                                                 // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EFortPlayerSurveyCMSDataQuestState> St;                                                // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionRandom
struct FFortPlayerSurveyCMSDataConditionRandom : public FFortPlayerSurveyCMSDataConditionBase
{
public:
	float                                        P;                                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C01[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionSeasonNumber
struct FFortPlayerSurveyCMSDataConditionSeasonNumber : public FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionTimesCompleted
struct FFortPlayerSurveyCMSDataConditionTimesCompleted : public FFortPlayerSurveyCMSDataConditionBase
{
public:
	struct FFortPlayerSurveyCMSDataRelativeSurveyKey S;                                                 // 0x8(0x18)(NativeAccessSpecifierPublic)
	enum class EFortPlayerSurveyCMSDataBinaryComparisonOp O;                                                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C02[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        T;                                                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestion
struct FFortPlayerSurveyCMSDataQuestion
{
public:
	uint8                                        Pad_2C04[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionBase
struct FFortPlayerSurveyCMSDataQuestionBase
{
public:
	uint8                                        Pad_2C05[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionStandardBase
struct FFortPlayerSurveyCMSDataQuestionStandardBase : public FFortPlayerSurveyCMSDataQuestionBase
{
public:
	enum class EFortPlayerSurveyCMSDataPresentationStyle S;                                                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  T;                                                 // 0x10(0x18)(NativeAccessSpecifierPublic)
};

// 0x20 (0x48 - 0x28)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionFreeFormText
struct FFortPlayerSurveyCMSDataQuestionFreeFormText : public FFortPlayerSurveyCMSDataQuestionStandardBase
{
public:
	class FText                                  Ht;                                                // 0x28(0x18)(NativeAccessSpecifierPublic)
	bool                                         R;                                                 // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C07[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        L;                                                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionChoice
struct FFortPlayerSurveyCMSDataQuestionChoice
{
public:
	class FText                                  T;                                                 // 0x0(0x18)(NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionMultipleChoice
struct FFortPlayerSurveyCMSDataQuestionMultipleChoice : public FFortPlayerSurveyCMSDataQuestionStandardBase
{
public:
	TArray<struct FFortPlayerSurveyCMSDataQuestionChoice> C;                                                 // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionMultipleSelection
struct FFortPlayerSurveyCMSDataQuestionMultipleSelection : public FFortPlayerSurveyCMSDataQuestionStandardBase
{
public:
	TArray<struct FFortPlayerSurveyCMSDataQuestionChoice> C;                                                 // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Mn;                                                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Mx;                                                // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataSurveyDescriptionMessage
struct FFortPlayerSurveyCMSDataSurveyDescriptionMessage
{
public:
	class FText                                  T;                                                 // 0x0(0x18)(NativeAccessSpecifierPublic)
	class FText                                  M;                                                 // 0x18(0x18)(NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataSurvey
struct FFortPlayerSurveyCMSDataSurvey
{
public:
	class FString                                ID;                                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  T;                                                 // 0x10(0x18)(NativeAccessSpecifierPublic)
	bool                                         Rt;                                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FJsonObjectWrapper>            C;                                                 // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FFortPlayerSurveyCMSDataSurveyDescriptionMessage Cm;                                                // 0x40(0x30)(NativeAccessSpecifierPublic)
	enum class EFortPlayerSurveyCMSDataTrigger   R;                                                 // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C0D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EFortPlayerSurveyCMSDataGameMode> Sg;                                                // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>            Q;                                                 // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataRoot
struct FFortPlayerSurveyCMSDataRoot
{
public:
	bool                                         E;                                                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortPlayerSurveyCMSDataConditionGroup> Cg;                                                // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FFortPlayerSurveyCMSDataSurvey> S;                                                 // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct FortniteUI.FortQuestMapEventQuestSideBarData
struct FFortQuestMapEventQuestSideBarData : public FTableRowBase
{
public:
	class UFortQuestItemDefinition*              QuestItemDefinition;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        EventFlags;                                        // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bShowAlways;                                       // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C13[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CycleTime;                                         // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.PlatformSupportDesc
struct FPlatformSupportDesc
{
public:
	class FText                                  DisableDesc;                                       // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	enum class EFortLoginAccountType             AccountType;                                       // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C14[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x270 (0x278 - 0x8)
// ScriptStruct FortniteUI.FortRichTextStyleData
struct FFortRichTextStyleData : public FTableRowBase
{
public:
	struct FTextBlockStyle                       TextStyle;                                         // 0x8(0x268)(Edit, NativeAccessSpecifierPublic)
	bool                                         bHyperlinkStyle;                                   // 0x270(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C16[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortSettingNameExtensions
struct FFortSettingNameExtensions
{
public:
	bool                                         bIncludeClassDefaultExtensions;                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UFortSettingDetailExtension>> Extensions;                                        // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortSettingClassExtensions
struct FFortSettingClassExtensions
{
public:
	TArray<TSoftClassPtr<class UFortSettingDetailExtension>> Extensions;                                        // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA8 - 0x8)
// ScriptStruct FortniteUI.FortEventStyleInfo
struct FFortEventStyleInfo : public FTableRowBase
{
public:
	struct FLinearColor                          BaseColor;                                         // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PrimaryColor;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SecondaryColor;                                    // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          HighlightColor;                                    // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TitleColor;                                        // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor;                                       // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundLeftColor;                               // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundRightColor;                              // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundTextColor;                               // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PosterFadeColor;                                   // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x168 (0x170 - 0x8)
// ScriptStruct FortniteUI.FortTournamentDisplayInfo
struct FFortTournamentDisplayInfo : public FTableRowBase
{
public:
	class FText                                  TitleLine1;                                        // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  TitleLine2;                                        // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ScheduleInfo;                                      // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  FlavorDescription;                                 // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DetailsDescription;                                // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ShortFormatTitle;                                  // 0x80(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LongFormatTitle;                                   // 0x98(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        PinScoreRequirement;                               // 0xB0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PinEarnedText;                                     // 0xB8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          BaseColor;                                         // 0xD0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PrimaryColor;                                      // 0xE0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SecondaryColor;                                    // 0xF0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          HighlightColor;                                    // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TitleColor;                                        // 0x110(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor;                                       // 0x120(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundLeftColor;                               // 0x130(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundRightColor;                              // 0x140(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundTextColor;                               // 0x150(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PosterFadeColor;                                   // 0x160(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct FortniteUI.FortShowdownScoringRuleDisplayInfo
struct FFortShowdownScoringRuleDisplayInfo : public FTableRowBase
{
public:
	class FText                                  Description;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x20(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortShowdownEventBestResultsSummary
struct FFortShowdownEventBestResultsSummary
{
public:
	int32                                        TotalScore;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MatchesPlayed;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumVictoryRoyales;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlacementPoints;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EliminationPoints;                                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EntryFeePoints;                                    // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct FortniteUI.FortSimpleWidgetAnimationKeyframeBase
struct FFortSimpleWidgetAnimationKeyframeBase
{
public:
	float                                        Duration;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransitionCurve                  CurveType;                                         // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C1D[0x63];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x70 - 0x68)
// ScriptStruct FortniteUI.FortSimpleWidgetAnimationKeyframeVector2D
struct FFortSimpleWidgetAnimationKeyframeVector2D : public FFortSimpleWidgetAnimationKeyframeBase
{
public:
	struct FVector2D                             Value;                                             // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3F (0x40 - 0x1)
// ScriptStruct FortniteUI.FortSimpleWidgetTranslationAnimation
struct FFortSimpleWidgetTranslationAnimation : public FFortSimpleWidgetAnimationBase
{
public:
	uint8                                        Pad_2C1E[0x27];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortSimpleWidgetAnimationKeyframeVector2D> Keyframes;                                         // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C1F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3F (0x40 - 0x1)
// ScriptStruct FortniteUI.FortSimpleWidgetScaleAnimation
struct FFortSimpleWidgetScaleAnimation : public FFortSimpleWidgetAnimationBase
{
public:
	uint8                                        Pad_2C20[0x27];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortSimpleWidgetAnimationKeyframeVector2D> Keyframes;                                         // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C21[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x70 - 0x68)
// ScriptStruct FortniteUI.FortSimpleWidgetAnimationKeyframeFloat
struct FFortSimpleWidgetAnimationKeyframeFloat : public FFortSimpleWidgetAnimationKeyframeBase
{
public:
	float                                        Value;                                             // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C22[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3F (0x40 - 0x1)
// ScriptStruct FortniteUI.FortSimpleWidgetAlphaAnimation
struct FFortSimpleWidgetAlphaAnimation : public FFortSimpleWidgetAnimationBase
{
public:
	uint8                                        Pad_2C23[0x27];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFortSimpleWidgetAnimationKeyframeFloat> Keyframes;                                         // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C24[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x118 - 0x0)
// ScriptStruct FortniteUI.FortSimpleWidgetAnimation
struct FFortSimpleWidgetAnimation
{
public:
	class FName                                  TargetName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAnimateTranslation;                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C25[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortSimpleWidgetTranslationAnimation Translation;                                       // 0x10(0x40)(Edit, NativeAccessSpecifierPublic)
	bool                                         bShouldAnimateScale;                               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortSimpleWidgetScaleAnimation       Scale;                                             // 0x58(0x40)(Edit, NativeAccessSpecifierPublic)
	bool                                         bShouldAnimateAlpha;                               // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C27[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortSimpleWidgetAlphaAnimation       Alpha;                                             // 0xA0(0x40)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C28[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.FortSimpleWidgetAnimations
struct FFortSimpleWidgetAnimations
{
public:
	TArray<struct FFortSimpleWidgetAnimation>    Animations;                                        // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnAnimationFinished;                               // 0x10(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C29[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.PlatformPrefixIcon
struct FPlatformPrefixIcon
{
public:
	class FString                                Platform;                                          // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            PrefixIcon;                                        // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.PlatformPrefixIconList
struct FPlatformPrefixIconList
{
public:
	TArray<struct FPlatformPrefixIcon>           PlatformPrefixIcons;                               // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortUserListHeaderInfo
struct FFortUserListHeaderInfo
{
public:
	uint8                                        Pad_2C2A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.PotentialSpectatorTarget
struct FPotentialSpectatorTarget
{
public:
	int32                                        Rank;                                              // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AFortPlayerStateAthena> PlayerState;                                       // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCurrentViewTarget;                                // 0xC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C2C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortLandingPageDefenderSummaryInfo
struct FFortLandingPageDefenderSummaryInfo
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TheaterDisplayName;                                // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                TheaterUniqueId;                                   // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortAttributeModifierAccumulation
struct FFortAttributeModifierAccumulation
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    Attribute;                                         // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierOp;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Magnitude;                                         // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.OpenedCardPack
struct FOpenedCardPack
{
public:
	class UFortCardPackItemDefinition*           CardPackDefinition;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DisplayLevel;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C2F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.Card
struct FCard
{
public:
	int32                                        QuantityReceived;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortItem*                             Item;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPauseType                        PauseType;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C31[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteUI.FortToastDisplayInfo
struct FFortToastDisplayInfo
{
public:
	class FText                                  Header;                                            // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x30(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortToastType                    Type;                                              // 0x58(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C32[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct FortniteUI.StoreCallout
struct FStoreCallout
{
public:
	struct FFortToastDisplayInfo                 ToastDisplayInfo;                                  // 0x0(0x60)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  ItemName;                                          // 0x60(0x18)(NativeAccessSpecifierPublic)
	class FText                                  ItemSet;                                           // 0x78(0x18)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.BundledItemInfo
struct FBundledItemInfo
{
public:
	class FString                                TemplateId;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOwned;                                            // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C33[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct FortniteUI.FortSurvivorSquadSlottingFeedbackData
struct FFortSurvivorSquadSlottingFeedbackData
{
public:
	bool                                         HadLeaderMatch;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasLeaderMatch;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C34[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGameplayTag, int32>             PreviousSetBonusCounts;                            // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, int32>             CurrentSetBonusCounts;                             // 0x58(0x50)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PreviousPersonalityMatchCount;                     // 0xA8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentPersonalityMatchCount;                      // 0xAC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x340 (0x340 - 0x0)
// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonPersonalityMatches
struct FFortSurvivorSquadSelectorButtonPersonalityMatches
{
public:
	int32                                        NumPersonalityMatches;                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalNonLeaderSquadMembers;                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HavePersonalityIcons;                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C35[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFortMultiSizeBrush                   PersonalityIcons;                                  // 0x10(0x330)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonSummaryStats
struct FFortSurvivorSquadSelectorButtonSummaryStats
{
public:
	class FName                                  SquadId;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    FortAttribute;                                     // 0x8(0x20)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FortAttributeValue;                                // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C36[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAttribute                    FortTeamAttribute;                                 // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TeamFortAttributeValue;                            // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SquadPowerValue;                                   // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  FortAttributeName;                                 // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x370 (0x370 - 0x0)
// ScriptStruct FortniteUI.FortUISurvivorSquadStatMatch
struct FFortUISurvivorSquadStatMatch
{
public:
	struct FFortMultiSizeBrush                   Icons;                                             // 0x0(0x330)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  MagnitudeText;                                     // 0x330(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  AttributeDisplayName;                              // 0x348(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        NumMembersMeetingCriteria;                         // 0x360(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumMembersRequired;                                // 0x364(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUISurvivorSquadMatchType     MatchType;                                         // 0x368(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuffState                    PreviewEffect;                                     // 0x369(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C37[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteUI.FortSwipeDetector
struct FFortSwipeDetector
{
public:
	struct FVector2D                             SwipeThreshold;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C38[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.CachedComponentMaterials
struct FCachedComponentMaterials
{
public:
	uint8                                        Pad_2C39[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            OriginalMaterials;                                 // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct FortniteUI.TouchMove
struct FTouchMove
{
public:
	uint8                                        Pad_2C3A[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct FortniteUI.FortItemTransformFilterTabLabelInfo
struct FFortItemTransformFilterTabLabelInfo
{
public:
	class FName                                  FilterTabNameId;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortTabButtonLabelInfo               TabButtonLabelInfo;                                // 0x8(0xA0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<enum class EFortInventoryFilter>      ItemFilters;                                       // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EFortItemType                     ItemType;                                          // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C3B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.StateWidgetEntry
struct FStateWidgetEntry
{
public:
	TSoftClassPtr<class UFortUIStateWidget_NUI>  Class;                                             // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortNamedBundle                  Bundle;                                            // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C3C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortRootViewportLayoutInfo
struct FFortRootViewportLayoutInfo
{
public:
	class UFortLocalPlayer*                      LocalPlayer;                                       // 0x0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           RootLayout;                                        // 0x8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C3D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct FortniteUI.UIStateTag
struct FUIStateTag : public FUITag
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct FortniteUI.AthenaUIStateTag
struct FAthenaUIStateTag : public FUIStateTag
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct FortniteUI.FortStartupUIStateTag
struct FFortStartupUIStateTag : public FUIStateTag
{
public:
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.FortUINavigationOperation
struct FFortUINavigationOperation
{
public:
	enum class EFortUINavigationOp               Operation;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C40[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SquadId;                                           // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SquadSlotIndex;                                    // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PageId;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NodeId;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             Item;                                              // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortUIFeature                    Feature;                                           // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortFrontendInventoryFilter      ItemManagementFilter;                              // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C41[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.FortUINavigationRequest
struct FFortUINavigationRequest
{
public:
	TArray<struct FFortUINavigationOperation>    Operations;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.UINavigationEntry
struct FUINavigationEntry
{
public:
	struct FUINavigationData                     Data;                                              // 0x0(0x30)(NativeAccessSpecifierPublic)
	UDelegateProperty_                           NavigateToDelegate;                                // 0x30(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           NavigateFromDelegate;                              // 0x40(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct FortniteUI.FortUIPickerTrapSortModifier
struct FFortUIPickerTrapSortModifier : public FTableRowBase
{
public:
	struct FGameplayTagQuery                     ItemTagQuery;                                      // 0x8(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        ScoreBonus;                                        // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C42[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.FortUIPickerTrapSortScores
struct FFortUIPickerTrapSortScores
{
public:
	float                                        UniqueTrapBonus;                                   // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlottedBonus;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FavoriteBonus;                                     // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PinnedBonus;                                       // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTrackedTrapBonusTime;                           // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TrackedTrapBonusMultiplier;                        // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct FortniteUI.FortUIXpInfo
struct FFortUIXpInfo
{
public:
	int32                                        InitialLevel;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialDisplayXp;                                  // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortExperienceDelta                  ChangeInXp;                                        // 0x8(0x24)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct FortniteUI.ContentPushState
struct FContentPushState
{
public:
	bool                                         bHideHeader;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideFooter;                                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideChatWidget;                                   // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x9E0 (0x9E0 - 0x0)
// ScriptStruct FortniteUI.FortUIStyleWindowButtons
struct FFortUIStyleWindowButtons
{
public:
	struct FButtonStyle                          Close;                                             // 0x0(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          Minimize;                                          // 0x278(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          Maximize;                                          // 0x4F0(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          Restore;                                           // 0x768(0x278)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x9E0 (0x9E0 - 0x0)
// ScriptStruct FortniteUI.FortUIStyleDefinition
struct FFortUIStyleDefinition
{
public:
	struct FFortUIStyleWindowButtons             WindowButtons;                                     // 0x0(0x9E0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct FortniteUI.FortUITutorialData
struct FFortUITutorialData : public FTableRowBase
{
public:
	class FName                                  TutorialWidgetName;                                // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                DevComment;                                        // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                          Descriptions;                                      // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UTexture2D>>     PreviewImages;                                     // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct FortniteUI.FortHealthyGamingData
struct FFortHealthyGamingData : public FTableRowBase
{
public:
	float                                        HealthWarningToastInterval;                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C44[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  HealthWarningToastDescriptionFormat;               // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  HealthWarningScreenText;                           // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  GameplayRestrictionText;                           // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        GameplayRestrictionWarningTimeOffset;              // 0x58(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C46[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  AntiAddictionTotalDescriptionFormat;               // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bUsePlayerTimeLimitSystem;                         // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C47[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class UTexture2D>>     RatingIcons;                                       // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x330 (0x338 - 0x8)
// ScriptStruct FortniteUI.FortSquadIconData
struct FFortSquadIconData : public FTableRowBase
{
public:
	struct FFortMultiSizeBrush                   Brush;                                             // 0x8(0x330)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteUI.FortDisplayAttribute
struct FFortDisplayAttribute
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x20)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Label;                                             // 0x20(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x38(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HoverText;                                         // 0x50(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        NumericValue;                                      // 0x68(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortStatValueDisplayType         DisplayType;                                       // 0x6C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuffState                    BuffState;                                         // 0x6D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortClampState                   ClampState;                                        // 0x6E(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortComparisonType               ComparisonType;                                    // 0x6F(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.FortDisplayModifier
struct FFortDisplayModifier
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Value;                                             // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EFortStatValueDisplayType         DisplayType;                                       // 0x30(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortBuffState                    BuffState;                                         // 0x31(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C48[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct FortniteUI.FortErrorInfo
struct FFortErrorInfo
{
public:
	class FText                                  Operation;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ErrorMessage;                                      // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                ErrorCode;                                         // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortErrorSeverity                ErrorSeverity;                                     // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ContinueButtonText;                                // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C4A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct FortniteUI.HomebaseNodeDisplayData
struct FHomebaseNodeDisplayData : public FTableRowBase
{
public:
	class FText                                  Title;                                             // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LargePreviewImage;                                 // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SmallPreviewImage;                                 // 0x60(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                          PreviewVideoMediaSource;                           // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.FortVideoInfo
struct FFortVideoInfo
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            PreviewImage;                                      // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                          VideoSource;                                       // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalizedOverlays*                    SubtitleOverlays;                                  // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  QuestObjectiveName;                                // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPrimaryAssetId                       RequiredActiveQuest;                               // 0x28(0x10)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.FortWeaponBoardDisplaySlot
struct FFortWeaponBoardDisplaySlot
{
public:
	struct FGameplayTag                          RequiredTag;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C4D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            MeshRelativeTransform;                             // 0x10(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LocalOffsetMultiplier;                             // 0x40(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C4E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct FortniteUI.FortWeaponBoardDisplaySlotItem
struct FFortWeaponBoardDisplaySlotItem
{
public:
	struct FFortWeaponBoardDisplaySlot           DisplaySlot;                                       // 0x0(0x50)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C4F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct FortniteUI.CameraToWinterQuestViewState
struct FCameraToWinterQuestViewState
{
public:
	enum class EWinterQuestViewState             UIViewState;                                       // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CameraTagsToSetFrom;                               // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x17 (0x18 - 0x1)
// ScriptStruct FortniteUI.GGCenterDisplayEntry
struct FGGCenterDisplayEntry : public FFortChangeMonitoringStruct
{
public:
	bool                                         bIsEnabled;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFinal;                                          // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C52[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortWeaponItemDefinition*             WeaponAt;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayersAtWeapon;                                   // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C53[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.GoosePickupDisplayData
struct FGoosePickupDisplayData
{
public:
	class FName                                  ChestName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayText;                                       // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct FortniteUI.GooseWeaponDisplayData
struct FGooseWeaponDisplayData
{
public:
	struct FGameplayTag                          WeaponTag;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ChestName;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            IconTexture;                                       // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    IconMaterial;                                      // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayText;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.HeistExitCraftIconData
struct FHeistExitCraftIconData
{
public:
	int32                                        IconIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHeistExitCraftIconState          IconState;                                         // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHeistExitCraftIconState          PrevIconState;                                     // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C55[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SecondsUntilIncoming;                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeamHasBling;                                     // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C56[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct FortniteUI.HeistBlingIconData
struct FHeistBlingIconData
{
public:
	int32                                        IconIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHeistBlingIconState              IconState;                                         // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHeistBlingIconState              PrevIconState;                                     // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C57[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.HUDLayoutToolPresetJson
struct FHUDLayoutToolPresetJson
{
public:
	class FString                                PresetName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                PresetJson;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.PanZoomFingerState
struct FPanZoomFingerState
{
public:
	uint8                                        Pad_2C58[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct FortniteUI.HUDLayoutToolPreset
struct FHUDLayoutToolPreset
{
public:
	class FText                                  PresetName;                                        // 0x0(0x18)(Edit, NativeAccessSpecifierPrivate)
	class FText                                  PresetDescription;                                 // 0x18(0x18)(Edit, NativeAccessSpecifierPrivate)
	class FString                                HUDLayoutSave;                                     // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            PresetPreviewImage;                                // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsRecommended;                                    // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2C59[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct FortniteUI.HudLayoutToolProxyPropertyData
struct FHudLayoutToolProxyPropertyData
{
public:
	float                                        Default;                                           // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELayoutPropertyType               Type;                                              // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C5A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayName;                                       // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct FortniteUI.PickupStreamEntry
struct FPickupStreamEntry
{
public:
	class UUserWidget*                           PickupWidget;                                      // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C5B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct FortniteUI.FortPrioritizedWidgetData
struct FFortPrioritizedWidgetData
{
public:
	enum class EFortPrioritizedWidgetPriority    Priority;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortPrioritizedWidgetContestedBehavior WhenContesting;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct FortniteUI.SoundThreshold
struct FSoundThreshold
{
public:
	class USoundCue*                             SoundCue;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Threshold;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C5C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.TDMTeamScoreData
struct FTDMTeamScoreData
{
public:
	class FText                                  CurrScoreText;                                     // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        CurrScorePercent;                                  // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrScore;                                         // 0x1C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct FortniteUI.WaxPlacementData
struct FWaxPlacementData
{
public:
	int32                                        Placement;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C5D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlayerName;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CoinCount;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlayer;                                         // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C5E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


