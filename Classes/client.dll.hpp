namespace CEntityComponent
{
}

namespace CEntityIdentity
{
	constexpr uint32_t m_nameStringableIndex = 0x14;
	constexpr uint32_t m_name = 0x18;
	constexpr uint32_t m_designerName = 0x20;
	constexpr uint32_t m_flags = 0x30;
	constexpr uint32_t m_worldGroupId = 0x38;
	constexpr uint32_t m_fDataObjectTypes = 0x3C;
	constexpr uint32_t m_PathIndex = 0x40;
	constexpr uint32_t m_pPrev = 0x58;
	constexpr uint32_t m_pNext = 0x60;
	constexpr uint32_t m_pPrevByClass = 0x68;
	constexpr uint32_t m_pNextByClass = 0x70;
}

namespace CEntityInstance
{
	constexpr uint32_t m_iszPrivateVScripts = 0x8;
	constexpr uint32_t m_pEntity = 0x10;
	constexpr uint32_t m_CScriptComponent = 0x28;
}

namespace CScriptComponent
{
	constexpr uint32_t m_scriptClassName = 0x30;
}

namespace CBodyComponent
{
	constexpr uint32_t m_pSceneNode = 0x8;
	constexpr uint32_t __m_pChainEntity = 0x20;
}

namespace CBodyComponentPoint
{
	constexpr uint32_t m_sceneNode = 0x50;
	constexpr uint32_t __m_pChainEntity = 0x1A0;
}

namespace CBodyComponentSkeletonInstance
{
	constexpr uint32_t m_skeletonInstance = 0x50;
	constexpr uint32_t __m_pChainEntity = 0x450;
}

namespace CHitboxComponent
{
	constexpr uint32_t m_bvDisabledHitGroups = 0x24;
}

namespace CLightComponent
{
	constexpr uint32_t __m_pChainEntity = 0x48;
	constexpr uint32_t m_Color = 0x85;
	constexpr uint32_t m_SecondaryColor = 0x89;
	constexpr uint32_t m_flBrightness = 0x90;
	constexpr uint32_t m_flBrightnessScale = 0x94;
	constexpr uint32_t m_flBrightnessMult = 0x98;
	constexpr uint32_t m_flRange = 0x9C;
	constexpr uint32_t m_flFalloff = 0xA0;
	constexpr uint32_t m_flAttenuation0 = 0xA4;
	constexpr uint32_t m_flAttenuation1 = 0xA8;
	constexpr uint32_t m_flAttenuation2 = 0xAC;
	constexpr uint32_t m_flTheta = 0xB0;
	constexpr uint32_t m_flPhi = 0xB4;
	constexpr uint32_t m_hLightCookie = 0xB8;
	constexpr uint32_t m_nCascades = 0xC0;
	constexpr uint32_t m_nCastShadows = 0xC4;
	constexpr uint32_t m_nShadowWidth = 0xC8;
	constexpr uint32_t m_nShadowHeight = 0xCC;
	constexpr uint32_t m_bRenderDiffuse = 0xD0;
	constexpr uint32_t m_nRenderSpecular = 0xD4;
	constexpr uint32_t m_bRenderTransmissive = 0xD8;
	constexpr uint32_t m_flOrthoLightWidth = 0xDC;
	constexpr uint32_t m_flOrthoLightHeight = 0xE0;
	constexpr uint32_t m_nStyle = 0xE4;
	constexpr uint32_t m_Pattern = 0xE8;
	constexpr uint32_t m_nCascadeRenderStaticObjects = 0xF0;
	constexpr uint32_t m_flShadowCascadeCrossFade = 0xF4;
	constexpr uint32_t m_flShadowCascadeDistanceFade = 0xF8;
	constexpr uint32_t m_flShadowCascadeDistance0 = 0xFC;
	constexpr uint32_t m_flShadowCascadeDistance1 = 0x100;
	constexpr uint32_t m_flShadowCascadeDistance2 = 0x104;
	constexpr uint32_t m_flShadowCascadeDistance3 = 0x108;
	constexpr uint32_t m_nShadowCascadeResolution0 = 0x10C;
	constexpr uint32_t m_nShadowCascadeResolution1 = 0x110;
	constexpr uint32_t m_nShadowCascadeResolution2 = 0x114;
	constexpr uint32_t m_nShadowCascadeResolution3 = 0x118;
	constexpr uint32_t m_bUsesBakedShadowing = 0x11C;
	constexpr uint32_t m_nShadowPriority = 0x120;
	constexpr uint32_t m_nBakedShadowIndex = 0x124;
	constexpr uint32_t m_bRenderToCubemaps = 0x128;
	constexpr uint32_t m_nDirectLight = 0x12C;
	constexpr uint32_t m_nIndirectLight = 0x130;
	constexpr uint32_t m_flFadeMinDist = 0x134;
	constexpr uint32_t m_flFadeMaxDist = 0x138;
	constexpr uint32_t m_flShadowFadeMinDist = 0x13C;
	constexpr uint32_t m_flShadowFadeMaxDist = 0x140;
	constexpr uint32_t m_bEnabled = 0x144;
	constexpr uint32_t m_bFlicker = 0x145;
	constexpr uint32_t m_bPrecomputedFieldsValid = 0x146;
	constexpr uint32_t m_vPrecomputedBoundsMins = 0x148;
	constexpr uint32_t m_vPrecomputedBoundsMaxs = 0x154;
	constexpr uint32_t m_vPrecomputedOBBOrigin = 0x160;
	constexpr uint32_t m_vPrecomputedOBBAngles = 0x16C;
	constexpr uint32_t m_vPrecomputedOBBExtent = 0x178;
	constexpr uint32_t m_flPrecomputedMaxRange = 0x184;
	constexpr uint32_t m_nFogLightingMode = 0x188;
	constexpr uint32_t m_flFogContributionStength = 0x18C;
	constexpr uint32_t m_flNearClipPlane = 0x190;
	constexpr uint32_t m_SkyColor = 0x194;
	constexpr uint32_t m_flSkyIntensity = 0x198;
	constexpr uint32_t m_SkyAmbientBounce = 0x19C;
	constexpr uint32_t m_bUseSecondaryColor = 0x1A0;
	constexpr uint32_t m_bMixedShadows = 0x1A1;
	constexpr uint32_t m_flLightStyleStartTime = 0x1A4;
	constexpr uint32_t m_flCapsuleLength = 0x1A8;
	constexpr uint32_t m_flMinRoughness = 0x1AC;
}

namespace CRenderComponent
{
	constexpr uint32_t __m_pChainEntity = 0x10;
	constexpr uint32_t m_bIsRenderingWithViewModels = 0x50;
	constexpr uint32_t m_nSplitscreenFlags = 0x54;
	constexpr uint32_t m_bEnableRendering = 0x60;
	constexpr uint32_t m_bInterpolationReadyToDraw = 0xB0;
}

namespace CBuoyancyHelper
{
	constexpr uint32_t m_flFluidDensity = 0x18;
}

namespace C_CommandContext
{
	constexpr uint32_t needsprocessing = 0x0;
	constexpr uint32_t command_number = 0xA8;
}

namespace ViewAngleServerChange_t
{
	constexpr uint32_t nType = 0x30;
	constexpr uint32_t qAngle = 0x34;
	constexpr uint32_t nIndex = 0x40;
}

namespace CPlayer_AutoaimServices
{
}

namespace audioparams_t
{
	constexpr uint32_t localSound = 0x8;
	constexpr uint32_t soundscapeIndex = 0x68;
	constexpr uint32_t localBits = 0x6C;
	constexpr uint32_t soundscapeEntityListIndex = 0x70;
	constexpr uint32_t soundEventHash = 0x74;
}

namespace CPlayer_CameraServices
{
	constexpr uint32_t m_vecCsViewPunchAngle = 0x40;
	constexpr uint32_t m_nCsViewPunchAngleTick = 0x4C;
	constexpr uint32_t m_flCsViewPunchAngleTickRatio = 0x50;
	constexpr uint32_t m_PlayerFog = 0x58;
	constexpr uint32_t m_hColorCorrectionCtrl = 0x98;
	constexpr uint32_t m_hViewEntity = 0x9C;
	constexpr uint32_t m_hTonemapController = 0xA0;
	constexpr uint32_t m_audio = 0xA8;
	constexpr uint32_t m_PostProcessingVolumes = 0x120;
	constexpr uint32_t m_flOldPlayerZ = 0x138;
	constexpr uint32_t m_flOldPlayerViewOffsetZ = 0x13C;
	constexpr uint32_t m_CurrentFog = 0x140;
	constexpr uint32_t m_hOldFogController = 0x1A8;
	constexpr uint32_t m_bOverrideFogColor = 0x1AC;
	constexpr uint32_t m_OverrideFogColor = 0x1B1;
	constexpr uint32_t m_bOverrideFogStartEnd = 0x1C5;
	constexpr uint32_t m_fOverrideFogStart = 0x1CC;
	constexpr uint32_t m_fOverrideFogEnd = 0x1E0;
	constexpr uint32_t m_hActivePostProcessingVolume = 0x1F4;
	constexpr uint32_t m_angDemoViewAngles = 0x1F8;
}

namespace CPlayer_FlashlightServices
{
}

namespace CPlayer_ItemServices
{
}

namespace CPlayer_MovementServices
{
	constexpr uint32_t m_nImpulse = 0x40;
	constexpr uint32_t m_nButtons = 0x48;
	constexpr uint32_t m_nQueuedButtonDownMask = 0x68;
	constexpr uint32_t m_nQueuedButtonChangeMask = 0x70;
	constexpr uint32_t m_nButtonDoublePressed = 0x78;
	constexpr uint32_t m_pButtonPressedCmdNumber = 0x80;
	constexpr uint32_t m_nLastCommandNumberProcessed = 0x180;
	constexpr uint32_t m_nToggleButtonDownMask = 0x188;
	constexpr uint32_t m_flMaxspeed = 0x190;
	constexpr uint32_t m_arrForceSubtickMoveWhen = 0x194;
	constexpr uint32_t m_flForwardMove = 0x1A4;
	constexpr uint32_t m_flLeftMove = 0x1A8;
	constexpr uint32_t m_flUpMove = 0x1AC;
	constexpr uint32_t m_vecLastMovementImpulses = 0x1B0;
	constexpr uint32_t m_vecOldViewAngles = 0x1BC;
}

namespace CPlayer_MovementServices_Humanoid
{
	constexpr uint32_t m_flStepSoundTime = 0x1D0;
	constexpr uint32_t m_flFallVelocity = 0x1D4;
	constexpr uint32_t m_bInCrouch = 0x1D8;
	constexpr uint32_t m_nCrouchState = 0x1DC;
	constexpr uint32_t m_flCrouchTransitionStartTime = 0x1E0;
	constexpr uint32_t m_bDucked = 0x1E4;
	constexpr uint32_t m_bDucking = 0x1E5;
	constexpr uint32_t m_bInDuckJump = 0x1E6;
	constexpr uint32_t m_groundNormal = 0x1E8;
	constexpr uint32_t m_flSurfaceFriction = 0x1F4;
	constexpr uint32_t m_surfaceProps = 0x1F8;
	constexpr uint32_t m_nStepside = 0x208;
}

namespace CPlayer_ObserverServices
{
	constexpr uint32_t m_iObserverMode = 0x40;
	constexpr uint32_t m_hObserverTarget = 0x44;
	constexpr uint32_t m_iObserverLastMode = 0x48;
	constexpr uint32_t m_bForcedObserverMode = 0x4C;
	constexpr uint32_t m_flObserverChaseDistance = 0x50;
	constexpr uint32_t m_flObserverChaseDistanceCalcTime = 0x54;
}

namespace CPlayer_UseServices
{
}

namespace CPlayer_WaterServices
{
}

namespace CPlayer_WeaponServices
{
	constexpr uint32_t m_bAllowSwitchToNoWeapon = 0x40;
	constexpr uint32_t m_hMyWeapons = 0x48;
	constexpr uint32_t m_hActiveWeapon = 0x60;
	constexpr uint32_t m_hLastWeapon = 0x64;
	constexpr uint32_t m_iAmmo = 0x68;
}

namespace CBodyComponentBaseAnimGraph
{
	constexpr uint32_t m_animationController = 0x480;
	constexpr uint32_t __m_pChainEntity = 0x18C0;
}

namespace EntityRenderAttribute_t
{
	constexpr uint32_t m_ID = 0x30;
	constexpr uint32_t m_Values = 0x34;
}

namespace ActiveModelConfig_t
{
	constexpr uint32_t m_Handle = 0x28;
	constexpr uint32_t m_Name = 0x30;
	constexpr uint32_t m_AssociatedEntities = 0x38;
	constexpr uint32_t m_AssociatedEntityNames = 0x50;
}

namespace CBodyComponentBaseModelEntity
{
	constexpr uint32_t __m_pChainEntity = 0x480;
}

namespace CGameSceneNodeHandle
{
	constexpr uint32_t m_hOwner = 0x8;
	constexpr uint32_t m_name = 0xC;
}

namespace CGameSceneNode
{
	constexpr uint32_t m_nodeToWorld = 0x10;
	constexpr uint32_t m_pOwner = 0x30;
	constexpr uint32_t m_pParent = 0x38;
	constexpr uint32_t m_pChild = 0x40;
	constexpr uint32_t m_pNextSibling = 0x48;
	constexpr uint32_t m_hParent = 0x70;
	constexpr uint32_t m_vecOrigin = 0x80;
	constexpr uint32_t m_angRotation = 0xB8;
	constexpr uint32_t m_flScale = 0xC4;
	constexpr uint32_t m_vecAbsOrigin = 0xC8;
	constexpr uint32_t m_angAbsRotation = 0xD4;
	constexpr uint32_t m_flAbsScale = 0xE0;
	constexpr uint32_t m_nParentAttachmentOrBone = 0xE4;
	constexpr uint32_t m_bDebugAbsOriginChanges = 0xE6;
	constexpr uint32_t m_bDormant = 0xE7;
	constexpr uint32_t m_bForceParentToBeNetworked = 0xE8;
	constexpr uint32_t m_bDirtyHierarchy = 0x0;
	constexpr uint32_t m_bDirtyBoneMergeInfo = 0x0;
	constexpr uint32_t m_bNetworkedPositionChanged = 0x0;
	constexpr uint32_t m_bNetworkedAnglesChanged = 0x0;
	constexpr uint32_t m_bNetworkedScaleChanged = 0x0;
	constexpr uint32_t m_bWillBeCallingPostDataUpdate = 0x0;
	constexpr uint32_t m_bNotifyBoneTransformsChanged = 0x0;
	constexpr uint32_t m_bBoneMergeFlex = 0x0;
	constexpr uint32_t m_nLatchAbsOrigin = 0x0;
	constexpr uint32_t m_bDirtyBoneMergeBoneToRoot = 0x0;
	constexpr uint32_t m_nHierarchicalDepth = 0xEB;
	constexpr uint32_t m_nHierarchyType = 0xEC;
	constexpr uint32_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xED;
	constexpr uint32_t m_name = 0xF0;
	constexpr uint32_t m_hierarchyAttachName = 0x130;
	constexpr uint32_t m_flZOffset = 0x134;
	constexpr uint32_t m_vRenderOrigin = 0x138;
}

namespace CNetworkedSequenceOperation
{
	constexpr uint32_t m_hSequence = 0x8;
	constexpr uint32_t m_flPrevCycle = 0xC;
	constexpr uint32_t m_flCycle = 0x10;
	constexpr uint32_t m_flWeight = 0x14;
	constexpr uint32_t m_bSequenceChangeNetworked = 0x1C;
	constexpr uint32_t m_bDiscontinuity = 0x1D;
	constexpr uint32_t m_flPrevCycleFromDiscontinuity = 0x20;
	constexpr uint32_t m_flPrevCycleForAnimEventDetection = 0x24;
}

namespace CModelState
{
	constexpr uint32_t m_hModel = 0xA0;
	constexpr uint32_t m_ModelName = 0xA8;
	constexpr uint32_t m_bClientClothCreationSuppressed = 0xE8;
	constexpr uint32_t m_MeshGroupMask = 0x180;
	constexpr uint32_t m_nIdealMotionType = 0x222;
	constexpr uint32_t m_nForceLOD = 0x223;
	constexpr uint32_t m_nClothUpdateFlags = 0x224;
}

namespace CSkeletonInstance
{
	constexpr uint32_t m_modelState = 0x160;
	constexpr uint32_t m_bIsAnimationEnabled = 0x390;
	constexpr uint32_t m_bUseParentRenderBounds = 0x391;
	constexpr uint32_t m_bDisableSolidCollisionsForHierarchy = 0x392;
	constexpr uint32_t m_bDirtyMotionType = 0x0;
	constexpr uint32_t m_bIsGeneratingLatchedParentSpaceState = 0x0;
	constexpr uint32_t m_materialGroup = 0x394;
	constexpr uint32_t m_nHitboxSet = 0x398;
}

namespace IntervalTimer
{
	constexpr uint32_t m_timestamp = 0x8;
	constexpr uint32_t m_nWorldGroupId = 0xC;
}

namespace CountdownTimer
{
	constexpr uint32_t m_duration = 0x8;
	constexpr uint32_t m_timestamp = 0xC;
	constexpr uint32_t m_timescale = 0x10;
	constexpr uint32_t m_nWorldGroupId = 0x14;
}

namespace EngineCountdownTimer
{
	constexpr uint32_t m_duration = 0x8;
	constexpr uint32_t m_timestamp = 0xC;
	constexpr uint32_t m_timescale = 0x10;
}

namespace CTimeline
{
	constexpr uint32_t m_flValues = 0x10;
	constexpr uint32_t m_nValueCounts = 0x110;
	constexpr uint32_t m_nBucketCount = 0x210;
	constexpr uint32_t m_flInterval = 0x214;
	constexpr uint32_t m_flFinalValue = 0x218;
	constexpr uint32_t m_nCompressionType = 0x21C;
	constexpr uint32_t m_bStopped = 0x220;
}

namespace CAnimGraphNetworkedVariables
{
	constexpr uint32_t m_PredNetBoolVariables = 0x8;
	constexpr uint32_t m_PredNetByteVariables = 0x20;
	constexpr uint32_t m_PredNetUInt16Variables = 0x38;
	constexpr uint32_t m_PredNetIntVariables = 0x50;
	constexpr uint32_t m_PredNetUInt32Variables = 0x68;
	constexpr uint32_t m_PredNetUInt64Variables = 0x80;
	constexpr uint32_t m_PredNetFloatVariables = 0x98;
	constexpr uint32_t m_PredNetVectorVariables = 0xB0;
	constexpr uint32_t m_PredNetQuaternionVariables = 0xC8;
	constexpr uint32_t m_OwnerOnlyPredNetBoolVariables = 0xE0;
	constexpr uint32_t m_OwnerOnlyPredNetByteVariables = 0xF8;
	constexpr uint32_t m_OwnerOnlyPredNetUInt16Variables = 0x110;
	constexpr uint32_t m_OwnerOnlyPredNetIntVariables = 0x128;
	constexpr uint32_t m_OwnerOnlyPredNetUInt32Variables = 0x140;
	constexpr uint32_t m_OwnerOnlyPredNetUInt64Variables = 0x158;
	constexpr uint32_t m_OwnerOnlyPredNetFloatVariables = 0x170;
	constexpr uint32_t m_OwnerOnlyPredNetVectorVariables = 0x188;
	constexpr uint32_t m_OwnerOnlyPredNetQuaternionVariables = 0x1A0;
	constexpr uint32_t m_nBoolVariablesCount = 0x1B8;
	constexpr uint32_t m_nOwnerOnlyBoolVariablesCount = 0x1BC;
	constexpr uint32_t m_nRandomSeedOffset = 0x1C0;
	constexpr uint32_t m_flLastTeleportTime = 0x1C4;
}

namespace C_BaseEntity
{
	constexpr uint32_t m_CBodyComponent = 0x30;
	constexpr uint32_t m_NetworkTransmitComponent = 0x38;
	constexpr uint32_t m_nLastThinkTick = 0x308;
	constexpr uint32_t m_pGameSceneNode = 0x310;
	constexpr uint32_t m_pRenderComponent = 0x318;
	constexpr uint32_t m_pCollision = 0x320;
	constexpr uint32_t m_iMaxHealth = 0x328;
	constexpr uint32_t m_iHealth = 0x32C;
	constexpr uint32_t m_lifeState = 0x330;
	constexpr uint32_t m_bTakesDamage = 0x331;
	constexpr uint32_t m_nTakeDamageFlags = 0x334;
	constexpr uint32_t m_ubInterpolationFrame = 0x338;
	constexpr uint32_t m_hSceneObjectController = 0x33C;
	constexpr uint32_t m_nNoInterpolationTick = 0x340;
	constexpr uint32_t m_nVisibilityNoInterpolationTick = 0x344;
	constexpr uint32_t m_flProxyRandomValue = 0x348;
	constexpr uint32_t m_iEFlags = 0x34C;
	constexpr uint32_t m_nWaterType = 0x350;
	constexpr uint32_t m_bInterpolateEvenWithNoModel = 0x351;
	constexpr uint32_t m_bPredictionEligible = 0x352;
	constexpr uint32_t m_bApplyLayerMatchIDToModel = 0x353;
	constexpr uint32_t m_tokLayerMatchID = 0x354;
	constexpr uint32_t m_nSubclassID = 0x358;
	constexpr uint32_t m_nSimulationTick = 0x368;
	constexpr uint32_t m_iCurrentThinkContext = 0x36C;
	constexpr uint32_t m_aThinkFunctions = 0x370;
	constexpr uint32_t m_flAnimTime = 0x388;
	constexpr uint32_t m_flSimulationTime = 0x38C;
	constexpr uint32_t m_nSceneObjectOverrideFlags = 0x390;
	constexpr uint32_t m_bHasSuccessfullyInterpolated = 0x391;
	constexpr uint32_t m_bHasAddedVarsToInterpolation = 0x392;
	constexpr uint32_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x393;
	constexpr uint32_t m_nInterpolationLatchDirtyFlags = 0x394;
	constexpr uint32_t m_ListEntry = 0x39C;
	constexpr uint32_t m_flCreateTime = 0x3B4;
	constexpr uint32_t m_flSpeed = 0x3B8;
	constexpr uint32_t m_EntClientFlags = 0x3BC;
	constexpr uint32_t m_bClientSideRagdoll = 0x3BE;
	constexpr uint32_t m_iTeamNum = 0x3BF;
	constexpr uint32_t m_spawnflags = 0x3C0;
	constexpr uint32_t m_nNextThinkTick = 0x3C4;
	constexpr uint32_t m_fFlags = 0x3C8;
	constexpr uint32_t m_vecAbsVelocity = 0x3CC;
	constexpr uint32_t m_vecVelocity = 0x3D8;
	constexpr uint32_t m_vecBaseVelocity = 0x408;
	constexpr uint32_t m_hEffectEntity = 0x414;
	constexpr uint32_t m_hOwnerEntity = 0x418;
	constexpr uint32_t m_MoveCollide = 0x41C;
	constexpr uint32_t m_MoveType = 0x41D;
	constexpr uint32_t m_flWaterLevel = 0x420;
	constexpr uint32_t m_fEffects = 0x424;
	constexpr uint32_t m_hGroundEntity = 0x428;
	constexpr uint32_t m_flFriction = 0x42C;
	constexpr uint32_t m_flElasticity = 0x430;
	constexpr uint32_t m_flGravityScale = 0x434;
	constexpr uint32_t m_flTimeScale = 0x438;
	constexpr uint32_t m_bSimulatedEveryTick = 0x43C;
	constexpr uint32_t m_bAnimatedEveryTick = 0x43D;
	constexpr uint32_t m_flNavIgnoreUntilTime = 0x440;
	constexpr uint32_t m_hThink = 0x444;
	constexpr uint32_t m_fBBoxVisFlags = 0x450;
	constexpr uint32_t m_bPredictable = 0x451;
	constexpr uint32_t m_bRenderWithViewModels = 0x452;
	constexpr uint32_t m_nSplitUserPlayerPredictionSlot = 0x454;
	constexpr uint32_t m_nFirstPredictableCommand = 0x458;
	constexpr uint32_t m_nLastPredictableCommand = 0x45C;
	constexpr uint32_t m_hOldMoveParent = 0x460;
	constexpr uint32_t m_Particles = 0x468;
	constexpr uint32_t m_vecPredictedScriptFloats = 0x490;
	constexpr uint32_t m_vecPredictedScriptFloatIDs = 0x4A8;
	constexpr uint32_t m_nNextScriptVarRecordID = 0x4D8;
	constexpr uint32_t m_vecAngVelocity = 0x4E8;
	constexpr uint32_t m_DataChangeEventRef = 0x4F4;
	constexpr uint32_t m_dependencies = 0x4F8;
	constexpr uint32_t m_nCreationTick = 0x510;
	constexpr uint32_t m_bAnimTimeChanged = 0x529;
	constexpr uint32_t m_bSimulationTimeChanged = 0x52A;
	constexpr uint32_t m_sUniqueHammerID = 0x538;
}

namespace CLogicalEntity
{
}

namespace C_BaseFlex::Emphasized_Phoneme
{
	constexpr uint32_t m_sClassName = 0x0;
	constexpr uint32_t m_flAmount = 0x18;
	constexpr uint32_t m_bRequired = 0x1C;
	constexpr uint32_t m_bBasechecked = 0x1D;
	constexpr uint32_t m_bValid = 0x1E;
}

namespace C_ColorCorrection
{
	constexpr uint32_t m_vecOrigin = 0x540;
	constexpr uint32_t m_MinFalloff = 0x54C;
	constexpr uint32_t m_MaxFalloff = 0x550;
	constexpr uint32_t m_flFadeInDuration = 0x554;
	constexpr uint32_t m_flFadeOutDuration = 0x558;
	constexpr uint32_t m_flMaxWeight = 0x55C;
	constexpr uint32_t m_flCurWeight = 0x560;
	constexpr uint32_t m_netlookupFilename = 0x564;
	constexpr uint32_t m_bEnabled = 0x764;
	constexpr uint32_t m_bMaster = 0x765;
	constexpr uint32_t m_bClientSide = 0x766;
	constexpr uint32_t m_bExclusive = 0x767;
	constexpr uint32_t m_bEnabledOnClient = 0x768;
	constexpr uint32_t m_flCurWeightOnClient = 0x76C;
	constexpr uint32_t m_bFadingIn = 0x770;
	constexpr uint32_t m_flFadeStartWeight = 0x774;
	constexpr uint32_t m_flFadeStartTime = 0x778;
	constexpr uint32_t m_flFadeDuration = 0x77C;
}

namespace C_EnvWindClientside
{
	constexpr uint32_t m_EnvWindShared = 0x540;
}

namespace C_EntityFlame
{
	constexpr uint32_t m_hEntAttached = 0x540;
	constexpr uint32_t m_hOldAttached = 0x568;
	constexpr uint32_t m_bCheapEffect = 0x56C;
}

namespace CProjectedTextureBase
{
	constexpr uint32_t m_hTargetEntity = 0xC;
	constexpr uint32_t m_bState = 0x10;
	constexpr uint32_t m_bAlwaysUpdate = 0x11;
	constexpr uint32_t m_flLightFOV = 0x14;
	constexpr uint32_t m_bEnableShadows = 0x18;
	constexpr uint32_t m_bSimpleProjection = 0x19;
	constexpr uint32_t m_bLightOnlyTarget = 0x1A;
	constexpr uint32_t m_bLightWorld = 0x1B;
	constexpr uint32_t m_bCameraSpace = 0x1C;
	constexpr uint32_t m_flBrightnessScale = 0x20;
	constexpr uint32_t m_LightColor = 0x24;
	constexpr uint32_t m_flIntensity = 0x28;
	constexpr uint32_t m_flLinearAttenuation = 0x2C;
	constexpr uint32_t m_flQuadraticAttenuation = 0x30;
	constexpr uint32_t m_bVolumetric = 0x34;
	constexpr uint32_t m_flVolumetricIntensity = 0x38;
	constexpr uint32_t m_flNoiseStrength = 0x3C;
	constexpr uint32_t m_flFlashlightTime = 0x40;
	constexpr uint32_t m_nNumPlanes = 0x44;
	constexpr uint32_t m_flPlaneOffset = 0x48;
	constexpr uint32_t m_flColorTransitionTime = 0x4C;
	constexpr uint32_t m_flAmbient = 0x50;
	constexpr uint32_t m_SpotlightTextureName = 0x54;
	constexpr uint32_t m_nSpotlightTextureFrame = 0x254;
	constexpr uint32_t m_nShadowQuality = 0x258;
	constexpr uint32_t m_flNearZ = 0x25C;
	constexpr uint32_t m_flFarZ = 0x260;
	constexpr uint32_t m_flProjectionSize = 0x264;
	constexpr uint32_t m_flRotation = 0x268;
	constexpr uint32_t m_bFlipHorizontal = 0x26C;
}

namespace C_BaseFire
{
	constexpr uint32_t m_flScale = 0x540;
	constexpr uint32_t m_flStartScale = 0x544;
	constexpr uint32_t m_flScaleTime = 0x548;
	constexpr uint32_t m_nFlags = 0x54C;
}

namespace C_FireSmoke
{
	constexpr uint32_t m_nFlameModelIndex = 0x550;
	constexpr uint32_t m_nFlameFromAboveModelIndex = 0x554;
	constexpr uint32_t m_flScaleRegister = 0x558;
	constexpr uint32_t m_flScaleStart = 0x55C;
	constexpr uint32_t m_flScaleEnd = 0x560;
	constexpr uint32_t m_flScaleTimeStart = 0x564;
	constexpr uint32_t m_flScaleTimeEnd = 0x568;
	constexpr uint32_t m_flChildFlameSpread = 0x56C;
	constexpr uint32_t m_flClipPerc = 0x580;
	constexpr uint32_t m_bClipTested = 0x584;
	constexpr uint32_t m_bFadingOut = 0x585;
	constexpr uint32_t m_tParticleSpawn = 0x588;
	constexpr uint32_t m_pFireOverlay = 0x590;
}

namespace C_RopeKeyframe::CPhysicsDelegate
{
	constexpr uint32_t m_pKeyframe = 0x8;
}

namespace C_SceneEntity::QueuedEvents_t
{
	constexpr uint32_t starttime = 0x0;
}

namespace C_TintController
{
}

namespace CFlashlightEffect
{
	constexpr uint32_t m_bIsOn = 0x10;
	constexpr uint32_t m_bMuzzleFlashEnabled = 0x20;
	constexpr uint32_t m_flMuzzleFlashBrightness = 0x24;
	constexpr uint32_t m_quatMuzzleFlashOrientation = 0x30;
	constexpr uint32_t m_vecMuzzleFlashOrigin = 0x40;
	constexpr uint32_t m_flFov = 0x4C;
	constexpr uint32_t m_flFarZ = 0x50;
	constexpr uint32_t m_flLinearAtten = 0x54;
	constexpr uint32_t m_bCastsShadows = 0x58;
	constexpr uint32_t m_flCurrentPullBackDist = 0x5C;
	constexpr uint32_t m_FlashlightTexture = 0x60;
	constexpr uint32_t m_MuzzleFlashTexture = 0x68;
	constexpr uint32_t m_textureName = 0x70;
}

namespace CInterpolatedValue
{
	constexpr uint32_t m_flStartTime = 0x0;
	constexpr uint32_t m_flEndTime = 0x4;
	constexpr uint32_t m_flStartValue = 0x8;
	constexpr uint32_t m_flEndValue = 0xC;
	constexpr uint32_t m_nInterpType = 0x10;
}

namespace CGlowSprite
{
	constexpr uint32_t m_vColor = 0x0;
	constexpr uint32_t m_flHorzSize = 0xC;
	constexpr uint32_t m_flVertSize = 0x10;
	constexpr uint32_t m_hMaterial = 0x18;
}

namespace CGlowOverlay
{
	constexpr uint32_t m_vPos = 0x8;
	constexpr uint32_t m_bDirectional = 0x14;
	constexpr uint32_t m_vDirection = 0x18;
	constexpr uint32_t m_bInSky = 0x24;
	constexpr uint32_t m_skyObstructionScale = 0x28;
	constexpr uint32_t m_Sprites = 0x30;
	constexpr uint32_t m_nSprites = 0xB0;
	constexpr uint32_t m_flProxyRadius = 0xB4;
	constexpr uint32_t m_flHDRColorScale = 0xB8;
	constexpr uint32_t m_flGlowObstructionScale = 0xBC;
	constexpr uint32_t m_bCacheGlowObstruction = 0xC0;
	constexpr uint32_t m_bCacheSkyObstruction = 0xC1;
	constexpr uint32_t m_bActivated = 0xC2;
	constexpr uint32_t m_ListIndex = 0xC4;
	constexpr uint32_t m_queryHandle = 0xC8;
}

namespace IClientAlphaProperty
{
}

namespace CSkyboxReference
{
	constexpr uint32_t m_worldGroupId = 0x540;
	constexpr uint32_t m_hSkyCamera = 0x544;
}

namespace C_SkyCamera
{
	constexpr uint32_t m_skyboxData = 0x540;
	constexpr uint32_t m_skyboxSlotToken = 0x5D0;
	constexpr uint32_t m_bUseAngles = 0x5D4;
	constexpr uint32_t m_pNext = 0x5D8;
}

namespace TimedEvent
{
	constexpr uint32_t m_TimeBetweenEvents = 0x0;
	constexpr uint32_t m_fNextEvent = 0x4;
}

namespace VPhysicsCollisionAttribute_t
{
	constexpr uint32_t m_nInteractsAs = 0x8;
	constexpr uint32_t m_nInteractsWith = 0x10;
	constexpr uint32_t m_nInteractsExclude = 0x18;
	constexpr uint32_t m_nEntityId = 0x20;
	constexpr uint32_t m_nOwnerId = 0x24;
	constexpr uint32_t m_nHierarchyId = 0x28;
	constexpr uint32_t m_nCollisionGroup = 0x2A;
	constexpr uint32_t m_nCollisionFunctionMask = 0x2B;
}

namespace CCollisionProperty
{
	constexpr uint32_t m_collisionAttribute = 0x10;
	constexpr uint32_t m_vecMins = 0x40;
	constexpr uint32_t m_vecMaxs = 0x4C;
	constexpr uint32_t m_usSolidFlags = 0x5A;
	constexpr uint32_t m_nSolidType = 0x5B;
	constexpr uint32_t m_triggerBloat = 0x5C;
	constexpr uint32_t m_nSurroundType = 0x5D;
	constexpr uint32_t m_CollisionGroup = 0x5E;
	constexpr uint32_t m_nEnablePhysics = 0x5F;
	constexpr uint32_t m_flBoundingRadius = 0x60;
	constexpr uint32_t m_vecSpecifiedSurroundingMins = 0x64;
	constexpr uint32_t m_vecSpecifiedSurroundingMaxs = 0x70;
	constexpr uint32_t m_vecSurroundingMaxs = 0x7C;
	constexpr uint32_t m_vecSurroundingMins = 0x88;
	constexpr uint32_t m_vCapsuleCenter1 = 0x94;
	constexpr uint32_t m_vCapsuleCenter2 = 0xA0;
	constexpr uint32_t m_flCapsuleRadius = 0xAC;
}

namespace CDecalInfo
{
	constexpr uint32_t m_flAnimationScale = 0x0;
	constexpr uint32_t m_flAnimationLifeSpan = 0x4;
	constexpr uint32_t m_flPlaceTime = 0x8;
	constexpr uint32_t m_flFadeStartTime = 0xC;
	constexpr uint32_t m_flFadeDuration = 0x10;
	constexpr uint32_t m_nVBSlot = 0x14;
	constexpr uint32_t m_nBoneIndex = 0x18;
	constexpr uint32_t m_vPosition = 0x28;
	constexpr uint32_t m_flBoundingRadiusSqr = 0x34;
	constexpr uint32_t m_pNext = 0x40;
	constexpr uint32_t m_pPrev = 0x48;
	constexpr uint32_t m_nDecalMaterialIndex = 0xA8;
}

namespace CEffectData
{
	constexpr uint32_t m_vOrigin = 0x8;
	constexpr uint32_t m_vStart = 0x14;
	constexpr uint32_t m_vNormal = 0x20;
	constexpr uint32_t m_vAngles = 0x2C;
	constexpr uint32_t m_hEntity = 0x38;
	constexpr uint32_t m_hOtherEntity = 0x3C;
	constexpr uint32_t m_flScale = 0x40;
	constexpr uint32_t m_flMagnitude = 0x44;
	constexpr uint32_t m_flRadius = 0x48;
	constexpr uint32_t m_nSurfaceProp = 0x4C;
	constexpr uint32_t m_nEffectIndex = 0x50;
	constexpr uint32_t m_nDamageType = 0x58;
	constexpr uint32_t m_nPenetrate = 0x5C;
	constexpr uint32_t m_nMaterial = 0x5E;
	constexpr uint32_t m_nHitBox = 0x60;
	constexpr uint32_t m_nColor = 0x62;
	constexpr uint32_t m_fFlags = 0x63;
	constexpr uint32_t m_nAttachmentIndex = 0x64;
	constexpr uint32_t m_nAttachmentName = 0x68;
	constexpr uint32_t m_iEffectName = 0x6C;
	constexpr uint32_t m_nExplosionType = 0x6E;
}

namespace C_EnvDetailController
{
	constexpr uint32_t m_flFadeStartDist = 0x540;
	constexpr uint32_t m_flFadeEndDist = 0x544;
}

namespace C_EnvWindShared
{
	constexpr uint32_t m_flStartTime = 0x8;
	constexpr uint32_t m_iWindSeed = 0xC;
	constexpr uint32_t m_iMinWind = 0x10;
	constexpr uint32_t m_iMaxWind = 0x12;
	constexpr uint32_t m_windRadius = 0x14;
	constexpr uint32_t m_iMinGust = 0x18;
	constexpr uint32_t m_iMaxGust = 0x1A;
	constexpr uint32_t m_flMinGustDelay = 0x1C;
	constexpr uint32_t m_flMaxGustDelay = 0x20;
	constexpr uint32_t m_flGustDuration = 0x24;
	constexpr uint32_t m_iGustDirChange = 0x28;
	constexpr uint32_t m_location = 0x2C;
	constexpr uint32_t m_iszGustSound = 0x38;
	constexpr uint32_t m_iWindDir = 0x3C;
	constexpr uint32_t m_flWindSpeed = 0x40;
	constexpr uint32_t m_currentWindVector = 0x44;
	constexpr uint32_t m_CurrentSwayVector = 0x50;
	constexpr uint32_t m_PrevSwayVector = 0x5C;
	constexpr uint32_t m_iInitialWindDir = 0x68;
	constexpr uint32_t m_flInitialWindSpeed = 0x6C;
	constexpr uint32_t m_flVariationTime = 0x70;
	constexpr uint32_t m_flSwayTime = 0x74;
	constexpr uint32_t m_flSimTime = 0x78;
	constexpr uint32_t m_flSwitchTime = 0x7C;
	constexpr uint32_t m_flAveWindSpeed = 0x80;
	constexpr uint32_t m_bGusting = 0x84;
	constexpr uint32_t m_flWindAngleVariation = 0x88;
	constexpr uint32_t m_flWindSpeedVariation = 0x8C;
	constexpr uint32_t m_iEntIndex = 0x90;
}

namespace C_EnvWindShared::WindAveEvent_t
{
	constexpr uint32_t m_flStartWindSpeed = 0x0;
	constexpr uint32_t m_flAveWindSpeed = 0x4;
}

namespace C_EnvWindShared::WindVariationEvent_t
{
	constexpr uint32_t m_flWindAngleVariation = 0x0;
	constexpr uint32_t m_flWindSpeedVariation = 0x4;
}

namespace C_InfoLadderDismount
{
}

namespace shard_model_desc_t
{
	constexpr uint32_t m_nModelID = 0x8;
	constexpr uint32_t m_hMaterial = 0x10;
	constexpr uint32_t m_solid = 0x18;
	constexpr uint32_t m_ShatterPanelMode = 0x19;
	constexpr uint32_t m_vecPanelSize = 0x1C;
	constexpr uint32_t m_vecStressPositionA = 0x24;
	constexpr uint32_t m_vecStressPositionB = 0x2C;
	constexpr uint32_t m_vecPanelVertices = 0x38;
	constexpr uint32_t m_flGlassHalfThickness = 0x50;
	constexpr uint32_t m_bHasParent = 0x54;
	constexpr uint32_t m_bParentFrozen = 0x55;
	constexpr uint32_t m_SurfacePropStringToken = 0x58;
}

namespace C_GameRulesProxy
{
}

namespace C_GameRules
{
}

namespace CGlowProperty
{
	constexpr uint32_t m_fGlowColor = 0x8;
	constexpr uint32_t m_iGlowType = 0x30;
	constexpr uint32_t m_iGlowTeam = 0x34;
	constexpr uint32_t m_nGlowRange = 0x38;
	constexpr uint32_t m_nGlowRangeMin = 0x3C;
	constexpr uint32_t m_glowColorOverride = 0x40;
	constexpr uint32_t m_bFlashing = 0x44;
	constexpr uint32_t m_flGlowTime = 0x48;
	constexpr uint32_t m_flGlowStartTime = 0x4C;
	constexpr uint32_t m_bEligibleForScreenHighlight = 0x50;
	constexpr uint32_t m_bGlowing = 0x51;
}

namespace C_MultiplayRules
{
}

namespace fogparams_t
{
	constexpr uint32_t dirPrimary = 0x8;
	constexpr uint32_t colorPrimary = 0x14;
	constexpr uint32_t colorSecondary = 0x18;
	constexpr uint32_t colorPrimaryLerpTo = 0x1C;
	constexpr uint32_t colorSecondaryLerpTo = 0x20;
	constexpr uint32_t start = 0x24;
	constexpr uint32_t end = 0x28;
	constexpr uint32_t farz = 0x2C;
	constexpr uint32_t maxdensity = 0x30;
	constexpr uint32_t exponent = 0x34;
	constexpr uint32_t HDRColorScale = 0x38;
	constexpr uint32_t skyboxFogFactor = 0x3C;
	constexpr uint32_t skyboxFogFactorLerpTo = 0x40;
	constexpr uint32_t startLerpTo = 0x44;
	constexpr uint32_t endLerpTo = 0x48;
	constexpr uint32_t maxdensityLerpTo = 0x4C;
	constexpr uint32_t lerptime = 0x50;
	constexpr uint32_t duration = 0x54;
	constexpr uint32_t blendtobackground = 0x58;
	constexpr uint32_t scattering = 0x5C;
	constexpr uint32_t locallightscale = 0x60;
	constexpr uint32_t enable = 0x64;
	constexpr uint32_t blend = 0x65;
	constexpr uint32_t m_bNoReflectionFog = 0x66;
	constexpr uint32_t m_bPadding = 0x67;
}

namespace C_fogplayerparams_t
{
	constexpr uint32_t m_hCtrl = 0x8;
	constexpr uint32_t m_flTransitionTime = 0xC;
	constexpr uint32_t m_OldColor = 0x10;
	constexpr uint32_t m_flOldStart = 0x14;
	constexpr uint32_t m_flOldEnd = 0x18;
	constexpr uint32_t m_flOldMaxDensity = 0x1C;
	constexpr uint32_t m_flOldHDRColorScale = 0x20;
	constexpr uint32_t m_flOldFarZ = 0x24;
	constexpr uint32_t m_NewColor = 0x28;
	constexpr uint32_t m_flNewStart = 0x2C;
	constexpr uint32_t m_flNewEnd = 0x30;
	constexpr uint32_t m_flNewMaxDensity = 0x34;
	constexpr uint32_t m_flNewHDRColorScale = 0x38;
	constexpr uint32_t m_flNewFarZ = 0x3C;
}

namespace sky3dparams_t
{
	constexpr uint32_t scale = 0x8;
	constexpr uint32_t origin = 0xC;
	constexpr uint32_t bClip3DSkyBoxNearToWorldFar = 0x18;
	constexpr uint32_t flClip3DSkyBoxNearToWorldFarOffset = 0x1C;
	constexpr uint32_t fog = 0x20;
	constexpr uint32_t m_nWorldGroupID = 0x88;
}

namespace PhysicsRagdollPose_t
{
	constexpr uint32_t __m_pChainEntity = 0x8;
	constexpr uint32_t m_Transforms = 0x30;
	constexpr uint32_t m_hOwner = 0x48;
	constexpr uint32_t m_bDirty = 0x68;
}

namespace C_SingleplayRules
{
}

namespace C_SoundOpvarSetPointBase
{
	constexpr uint32_t m_iszStackName = 0x540;
	constexpr uint32_t m_iszOperatorName = 0x548;
	constexpr uint32_t m_iszOpvarName = 0x550;
	constexpr uint32_t m_iOpvarIndex = 0x558;
	constexpr uint32_t m_bUseAutoCompare = 0x55C;
}

namespace C_SoundOpvarSetPointEntity
{
}

namespace C_SoundOpvarSetAABBEntity
{
}

namespace C_SoundOpvarSetOBBEntity
{
}

namespace C_SoundOpvarSetPathCornerEntity
{
}

namespace C_SoundOpvarSetOBBWindEntity
{
}

namespace C_TeamplayRules
{
}

namespace C_TeamRoundTimer
{
	constexpr uint32_t m_bTimerPaused = 0x540;
	constexpr uint32_t m_flTimeRemaining = 0x544;
	constexpr uint32_t m_flTimerEndTime = 0x548;
	constexpr uint32_t m_bIsDisabled = 0x54C;
	constexpr uint32_t m_bShowInHUD = 0x54D;
	constexpr uint32_t m_nTimerLength = 0x550;
	constexpr uint32_t m_nTimerInitialLength = 0x554;
	constexpr uint32_t m_nTimerMaxLength = 0x558;
	constexpr uint32_t m_bAutoCountdown = 0x55C;
	constexpr uint32_t m_nSetupTimeLength = 0x560;
	constexpr uint32_t m_nState = 0x564;
	constexpr uint32_t m_bStartPaused = 0x568;
	constexpr uint32_t m_bInCaptureWatchState = 0x569;
	constexpr uint32_t m_flTotalTime = 0x56C;
	constexpr uint32_t m_bStopWatchTimer = 0x570;
	constexpr uint32_t m_bFireFinished = 0x571;
	constexpr uint32_t m_bFire5MinRemain = 0x572;
	constexpr uint32_t m_bFire4MinRemain = 0x573;
	constexpr uint32_t m_bFire3MinRemain = 0x574;
	constexpr uint32_t m_bFire2MinRemain = 0x575;
	constexpr uint32_t m_bFire1MinRemain = 0x576;
	constexpr uint32_t m_bFire30SecRemain = 0x577;
	constexpr uint32_t m_bFire10SecRemain = 0x578;
	constexpr uint32_t m_bFire5SecRemain = 0x579;
	constexpr uint32_t m_bFire4SecRemain = 0x57A;
	constexpr uint32_t m_bFire3SecRemain = 0x57B;
	constexpr uint32_t m_bFire2SecRemain = 0x57C;
	constexpr uint32_t m_bFire1SecRemain = 0x57D;
	constexpr uint32_t m_nOldTimerLength = 0x580;
	constexpr uint32_t m_nOldTimerState = 0x584;
}

namespace CComicBook
{
	constexpr uint32_t m_CoverImage = 0x8;
	constexpr uint32_t m_XmlFile = 0x18;
}

namespace CAttributeList
{
	constexpr uint32_t m_Attributes = 0x8;
	constexpr uint32_t m_pManager = 0x58;
}

namespace CEconItemAttribute
{
	constexpr uint32_t m_iAttributeDefinitionIndex = 0x30;
	constexpr uint32_t m_flValue = 0x34;
	constexpr uint32_t m_flInitialValue = 0x38;
	constexpr uint32_t m_nRefundableCurrency = 0x3C;
	constexpr uint32_t m_bSetBonus = 0x40;
}

namespace CAttributeManager
{
	constexpr uint32_t m_Providers = 0x8;
	constexpr uint32_t m_iReapplyProvisionParity = 0x20;
	constexpr uint32_t m_hOuter = 0x24;
	constexpr uint32_t m_bPreventLoopback = 0x28;
	constexpr uint32_t m_ProviderType = 0x2C;
	constexpr uint32_t m_CachedResults = 0x30;
}

namespace CAttributeManager::cached_attribute_float_t
{
	constexpr uint32_t flIn = 0x0;
	constexpr uint32_t iAttribHook = 0x8;
	constexpr uint32_t flOut = 0x10;
}

namespace C_AttributeContainer
{
	constexpr uint32_t m_Item = 0x50;
	constexpr uint32_t m_iExternalItemProviderRegisteredToken = 0x498;
	constexpr uint32_t m_ullRegisteredAsItemID = 0x4A0;
}

namespace C_EconEntity::AttachedModelData_t
{
	constexpr uint32_t m_iModelDisplayFlags = 0x0;
}

namespace EntitySpottedState_t
{
	constexpr uint32_t m_bSpotted = 0x8;
	constexpr uint32_t m_bSpottedByMask = 0xC;
}

namespace C_CSGameRulesProxy
{
	constexpr uint32_t m_pGameRules = 0x540;
}

namespace C_CSGameRules
{
	constexpr uint32_t __m_pChainEntity = 0x8;
	constexpr uint32_t m_bFreezePeriod = 0x30;
	constexpr uint32_t m_bWarmupPeriod = 0x31;
	constexpr uint32_t m_fWarmupPeriodEnd = 0x34;
	constexpr uint32_t m_fWarmupPeriodStart = 0x38;
	constexpr uint32_t m_nTotalPausedTicks = 0x3C;
	constexpr uint32_t m_nPauseStartTick = 0x40;
	constexpr uint32_t m_bServerPaused = 0x44;
	constexpr uint32_t m_bGamePaused = 0x45;
	constexpr uint32_t m_bTerroristTimeOutActive = 0x46;
	constexpr uint32_t m_bCTTimeOutActive = 0x47;
	constexpr uint32_t m_flTerroristTimeOutRemaining = 0x48;
	constexpr uint32_t m_flCTTimeOutRemaining = 0x4C;
	constexpr uint32_t m_nTerroristTimeOuts = 0x50;
	constexpr uint32_t m_nCTTimeOuts = 0x54;
	constexpr uint32_t m_bTechnicalTimeOut = 0x58;
	constexpr uint32_t m_bMatchWaitingForResume = 0x59;
	constexpr uint32_t m_iRoundTime = 0x5C;
	constexpr uint32_t m_fMatchStartTime = 0x60;
	constexpr uint32_t m_fRoundStartTime = 0x64;
	constexpr uint32_t m_flRestartRoundTime = 0x68;
	constexpr uint32_t m_bGameRestart = 0x6C;
	constexpr uint32_t m_flGameStartTime = 0x70;
	constexpr uint32_t m_timeUntilNextPhaseStarts = 0x74;
	constexpr uint32_t m_gamePhase = 0x78;
	constexpr uint32_t m_totalRoundsPlayed = 0x7C;
	constexpr uint32_t m_nRoundsPlayedThisPhase = 0x80;
	constexpr uint32_t m_nOvertimePlaying = 0x84;
	constexpr uint32_t m_iHostagesRemaining = 0x88;
	constexpr uint32_t m_bAnyHostageReached = 0x8C;
	constexpr uint32_t m_bMapHasBombTarget = 0x8D;
	constexpr uint32_t m_bMapHasRescueZone = 0x8E;
	constexpr uint32_t m_bMapHasBuyZone = 0x8F;
	constexpr uint32_t m_bIsQueuedMatchmaking = 0x90;
	constexpr uint32_t m_nQueuedMatchmakingMode = 0x94;
	constexpr uint32_t m_bIsValveDS = 0x98;
	constexpr uint32_t m_bLogoMap = 0x99;
	constexpr uint32_t m_bPlayAllStepSoundsOnServer = 0x9A;
	constexpr uint32_t m_iSpectatorSlotCount = 0x9C;
	constexpr uint32_t m_MatchDevice = 0xA0;
	constexpr uint32_t m_bHasMatchStarted = 0xA4;
	constexpr uint32_t m_nNextMapInMapgroup = 0xA8;
	constexpr uint32_t m_szTournamentEventName = 0xAC;
	constexpr uint32_t m_szTournamentEventStage = 0x2AC;
	constexpr uint32_t m_szMatchStatTxt = 0x4AC;
	constexpr uint32_t m_szTournamentPredictionsTxt = 0x6AC;
	constexpr uint32_t m_nTournamentPredictionsPct = 0x8AC;
	constexpr uint32_t m_flCMMItemDropRevealStartTime = 0x8B0;
	constexpr uint32_t m_flCMMItemDropRevealEndTime = 0x8B4;
	constexpr uint32_t m_bIsDroppingItems = 0x8B8;
	constexpr uint32_t m_bIsQuestEligible = 0x8B9;
	constexpr uint32_t m_bIsHltvActive = 0x8BA;
	constexpr uint32_t m_nGuardianModeWaveNumber = 0x8BC;
	constexpr uint32_t m_nGuardianModeSpecialKillsRemaining = 0x8C0;
	constexpr uint32_t m_nGuardianModeSpecialWeaponNeeded = 0x8C4;
	constexpr uint32_t m_nGuardianGrenadesToGiveBots = 0x8C8;
	constexpr uint32_t m_nNumHeaviesToSpawn = 0x8CC;
	constexpr uint32_t m_numGlobalGiftsGiven = 0x8D0;
	constexpr uint32_t m_numGlobalGifters = 0x8D4;
	constexpr uint32_t m_numGlobalGiftsPeriodSeconds = 0x8D8;
	constexpr uint32_t m_arrFeaturedGiftersAccounts = 0x8DC;
	constexpr uint32_t m_arrFeaturedGiftersGifts = 0x8EC;
	constexpr uint32_t m_arrProhibitedItemIndices = 0x8FC;
	constexpr uint32_t m_arrTournamentActiveCasterAccounts = 0x9C4;
	constexpr uint32_t m_numBestOfMaps = 0x9D4;
	constexpr uint32_t m_nHalloweenMaskListSeed = 0x9D8;
	constexpr uint32_t m_bBombDropped = 0x9DC;
	constexpr uint32_t m_bBombPlanted = 0x9DD;
	constexpr uint32_t m_iRoundWinStatus = 0x9E0;
	constexpr uint32_t m_eRoundWinReason = 0x9E4;
	constexpr uint32_t m_bTCantBuy = 0x9E8;
	constexpr uint32_t m_bCTCantBuy = 0x9E9;
	constexpr uint32_t m_flGuardianBuyUntilTime = 0x9EC;
	constexpr uint32_t m_iMatchStats_RoundResults = 0x9F0;
	constexpr uint32_t m_iMatchStats_PlayersAlive_CT = 0xA68;
	constexpr uint32_t m_iMatchStats_PlayersAlive_T = 0xAE0;
	constexpr uint32_t m_TeamRespawnWaveTimes = 0xB58;
	constexpr uint32_t m_flNextRespawnWave = 0xBD8;
	constexpr uint32_t m_nServerQuestID = 0xC58;
	constexpr uint32_t m_vMinimapMins = 0xC5C;
	constexpr uint32_t m_vMinimapMaxs = 0xC68;
	constexpr uint32_t m_MinimapVerticalSectionHeights = 0xC74;
	constexpr uint32_t m_bDontIncrementCoopWave = 0xC94;
	constexpr uint32_t m_bSpawnedTerrorHuntHeavy = 0xC95;
	constexpr uint32_t m_nEndMatchMapGroupVoteTypes = 0xC98;
	constexpr uint32_t m_nEndMatchMapGroupVoteOptions = 0xCC0;
	constexpr uint32_t m_nEndMatchMapVoteWinner = 0xCE8;
	constexpr uint32_t m_iNumConsecutiveCTLoses = 0xCEC;
	constexpr uint32_t m_iNumConsecutiveTerroristLoses = 0xCF0;
	constexpr uint32_t m_bMarkClientStopRecordAtRoundEnd = 0xD10;
	constexpr uint32_t m_nMatchAbortedEarlyReason = 0xD68;
	constexpr uint32_t m_bHasTriggeredRoundStartMusic = 0xD6C;
	constexpr uint32_t m_bHasTriggeredCoopSpawnReset = 0xD6D;
	constexpr uint32_t m_bSwitchingTeamsAtRoundReset = 0xD6E;
	constexpr uint32_t m_pGameModeRules = 0xD88;
	constexpr uint32_t m_RetakeRules = 0xD90;
	constexpr uint32_t m_nMatchEndCount = 0xEA8;
	constexpr uint32_t m_nTTeamIntroVariant = 0xEAC;
	constexpr uint32_t m_nCTTeamIntroVariant = 0xEB0;
	constexpr uint32_t m_bTeamIntroPeriod = 0xEB4;
	constexpr uint32_t m_flLastPerfSampleTime = 0x4EC0;
}

namespace CCSGameModeRules
{
	constexpr uint32_t __m_pChainEntity = 0x8;
}

namespace CCSGameModeRules_Noop
{
}

namespace CCSGameModeScript
{
}

namespace CCSGameModeRules_Scripted
{
}

namespace CCSGameModeRules_Deathmatch
{
	constexpr uint32_t m_bFirstThink = 0x30;
	constexpr uint32_t m_bFirstThinkAfterConnected = 0x31;
	constexpr uint32_t m_flDMBonusStartTime = 0x34;
	constexpr uint32_t m_flDMBonusTimeLength = 0x38;
	constexpr uint32_t m_nDMBonusWeaponLoadoutSlot = 0x3C;
}

namespace C_RetakeGameRules
{
	constexpr uint32_t m_nMatchSeed = 0xF8;
	constexpr uint32_t m_bBlockersPresent = 0xFC;
	constexpr uint32_t m_bRoundInProgress = 0xFD;
	constexpr uint32_t m_iFirstSecondHalfRound = 0x100;
	constexpr uint32_t m_iBombSite = 0x104;
}

namespace CSPerRoundStats_t
{
	constexpr uint32_t m_iKills = 0x30;
	constexpr uint32_t m_iDeaths = 0x34;
	constexpr uint32_t m_iAssists = 0x38;
	constexpr uint32_t m_iDamage = 0x3C;
	constexpr uint32_t m_iEquipmentValue = 0x40;
	constexpr uint32_t m_iMoneySaved = 0x44;
	constexpr uint32_t m_iKillReward = 0x48;
	constexpr uint32_t m_iLiveTime = 0x4C;
	constexpr uint32_t m_iHeadShotKills = 0x50;
	constexpr uint32_t m_iObjective = 0x54;
	constexpr uint32_t m_iCashEarned = 0x58;
	constexpr uint32_t m_iUtilityDamage = 0x5C;
	constexpr uint32_t m_iEnemiesFlashed = 0x60;
}

namespace CSMatchStats_t
{
	constexpr uint32_t m_iEnemy5Ks = 0x68;
	constexpr uint32_t m_iEnemy4Ks = 0x6C;
	constexpr uint32_t m_iEnemy3Ks = 0x70;
}

namespace C_CSGO_TeamPreviewCharacterPosition
{
	constexpr uint32_t m_nVariant = 0x540;
	constexpr uint32_t m_nRandom = 0x544;
	constexpr uint32_t m_nOrdinal = 0x548;
	constexpr uint32_t m_sWeaponName = 0x550;
	constexpr uint32_t m_xuid = 0x558;
	constexpr uint32_t m_agentItem = 0x560;
	constexpr uint32_t m_glovesItem = 0x9A8;
	constexpr uint32_t m_weaponItem = 0xDF0;
}

namespace C_CSGO_TeamSelectCharacterPosition
{
}

namespace C_CSGO_TeamSelectTerroristPosition
{
}

namespace C_CSGO_TeamSelectCounterTerroristPosition
{
}

namespace C_CSGO_TeamIntroCharacterPosition
{
}

namespace C_CSGO_TeamIntroTerroristPosition
{
}

namespace C_CSGO_TeamIntroCounterTerroristPosition
{
}

namespace CCSGO_WingmanIntroCharacterPosition
{
}

namespace CCSGO_WingmanIntroTerroristPosition
{
}

namespace CCSGO_WingmanIntroCounterTerroristPosition
{
}

namespace C_CSMinimapBoundary
{
}

namespace C_PlayerPing
{
	constexpr uint32_t m_hPlayer = 0x570;
	constexpr uint32_t m_hPingedEntity = 0x574;
	constexpr uint32_t m_iType = 0x578;
	constexpr uint32_t m_bUrgent = 0x57C;
	constexpr uint32_t m_szPlaceName = 0x57D;
}

namespace CCSPlayer_PingServices
{
	constexpr uint32_t m_hPlayerPing = 0x40;
}

namespace C_CSPlayerResource
{
	constexpr uint32_t m_bHostageAlive = 0x540;
	constexpr uint32_t m_isHostageFollowingSomeone = 0x54C;
	constexpr uint32_t m_iHostageEntityIDs = 0x558;
	constexpr uint32_t m_bombsiteCenterA = 0x588;
	constexpr uint32_t m_bombsiteCenterB = 0x594;
	constexpr uint32_t m_hostageRescueX = 0x5A0;
	constexpr uint32_t m_hostageRescueY = 0x5B0;
	constexpr uint32_t m_hostageRescueZ = 0x5C0;
	constexpr uint32_t m_bEndMatchNextMapAllVoted = 0x5D0;
	constexpr uint32_t m_foundGoalPositions = 0x5D1;
}

namespace CPlayer_ViewModelServices
{
}

namespace CCSPlayerBase_CameraServices
{
	constexpr uint32_t m_iFOV = 0x210;
	constexpr uint32_t m_iFOVStart = 0x214;
	constexpr uint32_t m_flFOVTime = 0x218;
	constexpr uint32_t m_flFOVRate = 0x21C;
	constexpr uint32_t m_hZoomOwner = 0x220;
	constexpr uint32_t m_flLastShotFOV = 0x224;
}

namespace WeaponPurchaseCount_t
{
	constexpr uint32_t m_nItemDefIndex = 0x30;
	constexpr uint32_t m_nCount = 0x32;
}

namespace WeaponPurchaseTracker_t
{
	constexpr uint32_t m_weaponPurchases = 0x8;
}

namespace CCSPlayer_ActionTrackingServices
{
	constexpr uint32_t m_hLastWeaponBeforeC4AutoSwitch = 0x40;
	constexpr uint32_t m_bIsRescuing = 0x44;
	constexpr uint32_t m_weaponPurchasesThisMatch = 0x48;
	constexpr uint32_t m_weaponPurchasesThisRound = 0xA0;
}

namespace CCSPlayer_BulletServices
{
	constexpr uint32_t m_totalHitsOnServer = 0x40;
}

namespace SellbackPurchaseEntry_t
{
	constexpr uint32_t m_unDefIdx = 0x30;
	constexpr uint32_t m_nCost = 0x34;
	constexpr uint32_t m_nPrevArmor = 0x38;
	constexpr uint32_t m_bPrevHelmet = 0x3C;
	constexpr uint32_t m_hItem = 0x40;
}

namespace CCSPlayer_BuyServices
{
	constexpr uint32_t m_vecSellbackPurchaseEntries = 0x40;
}

namespace CCSPlayer_CameraServices
{
	constexpr uint32_t m_flDeathCamTilt = 0x228;
}

namespace CCSPlayer_HostageServices
{
	constexpr uint32_t m_hCarriedHostage = 0x40;
	constexpr uint32_t m_hCarriedHostageProp = 0x44;
}

namespace CCSPlayer_ItemServices
{
	constexpr uint32_t m_bHasDefuser = 0x40;
	constexpr uint32_t m_bHasHelmet = 0x41;
	constexpr uint32_t m_bHasHeavyArmor = 0x42;
}

namespace CCSPlayer_MovementServices
{
	constexpr uint32_t m_flMaxFallVelocity = 0x210;
	constexpr uint32_t m_vecLadderNormal = 0x214;
	constexpr uint32_t m_nLadderSurfacePropIndex = 0x220;
	constexpr uint32_t m_flDuckAmount = 0x224;
	constexpr uint32_t m_flDuckSpeed = 0x228;
	constexpr uint32_t m_bDuckOverride = 0x22C;
	constexpr uint32_t m_bDesiresDuck = 0x22D;
	constexpr uint32_t m_flDuckOffset = 0x230;
	constexpr uint32_t m_nDuckTimeMsecs = 0x234;
	constexpr uint32_t m_nDuckJumpTimeMsecs = 0x238;
	constexpr uint32_t m_nJumpTimeMsecs = 0x23C;
	constexpr uint32_t m_flLastDuckTime = 0x240;
	constexpr uint32_t m_vecLastPositionAtFullCrouchSpeed = 0x250;
	constexpr uint32_t m_duckUntilOnGround = 0x258;
	constexpr uint32_t m_bHasWalkMovedSinceLastJump = 0x259;
	constexpr uint32_t m_bInStuckTest = 0x25A;
	constexpr uint32_t m_flStuckCheckTime = 0x268;
	constexpr uint32_t m_nTraceCount = 0x468;
	constexpr uint32_t m_StuckLast = 0x46C;
	constexpr uint32_t m_bSpeedCropped = 0x470;
	constexpr uint32_t m_nOldWaterLevel = 0x474;
	constexpr uint32_t m_flWaterEntryTime = 0x478;
	constexpr uint32_t m_vecForward = 0x47C;
	constexpr uint32_t m_vecLeft = 0x488;
	constexpr uint32_t m_vecUp = 0x494;
	constexpr uint32_t m_vecPreviouslyPredictedOrigin = 0x4A0;
	constexpr uint32_t m_bOldJumpPressed = 0x4AC;
	constexpr uint32_t m_flJumpPressedTime = 0x4B0;
	constexpr uint32_t m_flJumpUntil = 0x4B4;
	constexpr uint32_t m_flJumpVel = 0x4B8;
	constexpr uint32_t m_fStashGrenadeParameterWhen = 0x4BC;
	constexpr uint32_t m_nButtonDownMaskPrev = 0x4C0;
	constexpr uint32_t m_flOffsetTickCompleteTime = 0x4C8;
	constexpr uint32_t m_flOffsetTickStashedSpeed = 0x4CC;
	constexpr uint32_t m_flStamina = 0x4D0;
	constexpr uint32_t m_bUpdatePredictedOriginAfterDataUpdate = 0x4D4;
	constexpr uint32_t m_flHeightAtJumpStart = 0x4D8;
	constexpr uint32_t m_flMaxJumpHeightThisJump = 0x4DC;
}

namespace CCSPlayer_UseServices
{
}

namespace CCSPlayer_ViewModelServices
{
	constexpr uint32_t m_hViewModel = 0x40;
}

namespace CCSPlayer_WaterServices
{
	constexpr uint32_t m_flWaterJumpTime = 0x40;
	constexpr uint32_t m_vecWaterJumpVel = 0x44;
	constexpr uint32_t m_flSwimSoundTime = 0x50;
}

namespace CCSPlayer_WeaponServices
{
	constexpr uint32_t m_flNextAttack = 0xC0;
	constexpr uint32_t m_bIsLookingAtWeapon = 0xC4;
	constexpr uint32_t m_bIsHoldingLookAtWeapon = 0xC5;
}

namespace CCSObserver_ObserverServices
{
	constexpr uint32_t m_hLastObserverTarget = 0x58;
	constexpr uint32_t m_vecObserverInterpolateOffset = 0x5C;
	constexpr uint32_t m_vecObserverInterpStartPos = 0x68;
	constexpr uint32_t m_flObsInterp_PathLength = 0x74;
	constexpr uint32_t m_qObsInterp_OrientationStart = 0x80;
	constexpr uint32_t m_qObsInterp_OrientationTravelDir = 0x90;
	constexpr uint32_t m_obsInterpState = 0xA0;
	constexpr uint32_t m_bObserverInterpolationNeedsDeferredSetup = 0xA4;
}

namespace CCSObserver_CameraServices
{
}

namespace CCSObserver_MovementServices
{
}

namespace CCSObserver_UseServices
{
}

namespace CCSObserver_ViewModelServices
{
}

namespace CCSPlayerController_ActionTrackingServices
{
	constexpr uint32_t m_perRoundStats = 0x40;
	constexpr uint32_t m_matchStats = 0x90;
	constexpr uint32_t m_iNumRoundKills = 0x108;
	constexpr uint32_t m_iNumRoundKillsHeadshots = 0x10C;
	constexpr uint32_t m_unTotalRoundDamageDealt = 0x110;
}

namespace CDamageRecord
{
	constexpr uint32_t m_PlayerDamager = 0x28;
	constexpr uint32_t m_PlayerRecipient = 0x2C;
	constexpr uint32_t m_hPlayerControllerDamager = 0x30;
	constexpr uint32_t m_hPlayerControllerRecipient = 0x34;
	constexpr uint32_t m_szPlayerDamagerName = 0x38;
	constexpr uint32_t m_szPlayerRecipientName = 0x40;
	constexpr uint32_t m_DamagerXuid = 0x48;
	constexpr uint32_t m_RecipientXuid = 0x50;
	constexpr uint32_t m_iDamage = 0x58;
	constexpr uint32_t m_iActualHealthRemoved = 0x5C;
	constexpr uint32_t m_iNumHits = 0x60;
	constexpr uint32_t m_iLastBulletUpdate = 0x64;
	constexpr uint32_t m_bIsOtherEnemy = 0x68;
	constexpr uint32_t m_killType = 0x69;
}

namespace CCSPlayerController_DamageServices
{
	constexpr uint32_t m_nSendUpdate = 0x40;
	constexpr uint32_t m_DamageList = 0x48;
}

namespace CCSPlayerController_InGameMoneyServices
{
	constexpr uint32_t m_iAccount = 0x40;
	constexpr uint32_t m_iStartAccount = 0x44;
	constexpr uint32_t m_iTotalCashSpent = 0x48;
	constexpr uint32_t m_iCashSpentThisRound = 0x4C;
	constexpr uint32_t m_nPreviousAccount = 0x50;
}

namespace ServerAuthoritativeWeaponSlot_t
{
	constexpr uint32_t unClass = 0x28;
	constexpr uint32_t unSlot = 0x2A;
	constexpr uint32_t unItemDefIdx = 0x2C;
}

namespace CCSPlayerController_InventoryServices
{
	constexpr uint32_t m_unMusicID = 0x40;
	constexpr uint32_t m_rank = 0x44;
	constexpr uint32_t m_nPersonaDataPublicLevel = 0x5C;
	constexpr uint32_t m_nPersonaDataPublicCommendsLeader = 0x60;
	constexpr uint32_t m_nPersonaDataPublicCommendsTeacher = 0x64;
	constexpr uint32_t m_nPersonaDataPublicCommendsFriendly = 0x68;
	constexpr uint32_t m_vecServerAuthoritativeWeaponSlots = 0x70;
}

namespace C_IronSightController
{
	constexpr uint32_t m_bIronSightAvailable = 0x10;
	constexpr uint32_t m_flIronSightAmount = 0x14;
	constexpr uint32_t m_flIronSightAmountGained = 0x18;
	constexpr uint32_t m_flIronSightAmountBiased = 0x1C;
	constexpr uint32_t m_flIronSightAmount_Interpolated = 0x20;
	constexpr uint32_t m_flIronSightAmountGained_Interpolated = 0x24;
	constexpr uint32_t m_flIronSightAmountBiased_Interpolated = 0x28;
	constexpr uint32_t m_flInterpolationLastUpdated = 0x2C;
	constexpr uint32_t m_angDeltaAverage = 0x30;
	constexpr uint32_t m_angViewLast = 0x90;
	constexpr uint32_t m_vecDotCoords = 0x9C;
	constexpr uint32_t m_flDotBlur = 0xA4;
	constexpr uint32_t m_flSpeedRatio = 0xA8;
}

namespace CompositeMaterialMatchFilter_t
{
	constexpr uint32_t m_nCompositeMaterialMatchFilterType = 0x0;
	constexpr uint32_t m_strMatchFilter = 0x8;
	constexpr uint32_t m_strMatchValue = 0x10;
	constexpr uint32_t m_bPassWhenTrue = 0x18;
}

namespace CompositeMaterialInputLooseVariable_t
{
	constexpr uint32_t m_strName = 0x0;
	constexpr uint32_t m_bExposeExternally = 0x8;
	constexpr uint32_t m_strExposedFriendlyName = 0x10;
	constexpr uint32_t m_strExposedFriendlyGroupName = 0x18;
	constexpr uint32_t m_bExposedVariableIsFixedRange = 0x20;
	constexpr uint32_t m_strExposedVisibleWhenTrue = 0x28;
	constexpr uint32_t m_strExposedHiddenWhenTrue = 0x30;
	constexpr uint32_t m_nVariableType = 0x38;
	constexpr uint32_t m_bValueBoolean = 0x3C;
	constexpr uint32_t m_nValueIntX = 0x40;
	constexpr uint32_t m_nValueIntY = 0x44;
	constexpr uint32_t m_nValueIntZ = 0x48;
	constexpr uint32_t m_nValueIntW = 0x4C;
	constexpr uint32_t m_bHasFloatBounds = 0x50;
	constexpr uint32_t m_flValueFloatX = 0x54;
	constexpr uint32_t m_flValueFloatX_Min = 0x58;
	constexpr uint32_t m_flValueFloatX_Max = 0x5C;
	constexpr uint32_t m_flValueFloatY = 0x60;
	constexpr uint32_t m_flValueFloatY_Min = 0x64;
	constexpr uint32_t m_flValueFloatY_Max = 0x68;
	constexpr uint32_t m_flValueFloatZ = 0x6C;
	constexpr uint32_t m_flValueFloatZ_Min = 0x70;
	constexpr uint32_t m_flValueFloatZ_Max = 0x74;
	constexpr uint32_t m_flValueFloatW = 0x78;
	constexpr uint32_t m_flValueFloatW_Min = 0x7C;
	constexpr uint32_t m_flValueFloatW_Max = 0x80;
	constexpr uint32_t m_cValueColor4 = 0x84;
	constexpr uint32_t m_nValueSystemVar = 0x88;
	constexpr uint32_t m_strResourceMaterial = 0x90;
	constexpr uint32_t m_strTextureContentAssetPath = 0x170;
	constexpr uint32_t m_strTextureRuntimeResourcePath = 0x178;
	constexpr uint32_t m_strTextureCompilationVtexTemplate = 0x258;
	constexpr uint32_t m_nTextureType = 0x260;
	constexpr uint32_t m_strString = 0x268;
}

namespace CompMatMutatorCondition_t
{
	constexpr uint32_t m_nMutatorCondition = 0x0;
	constexpr uint32_t m_strMutatorConditionContainerName = 0x8;
	constexpr uint32_t m_strMutatorConditionContainerVarName = 0x10;
	constexpr uint32_t m_strMutatorConditionContainerVarValue = 0x18;
	constexpr uint32_t m_bPassWhenTrue = 0x20;
}

namespace CompMatPropertyMutator_t
{
	constexpr uint32_t m_bEnabled = 0x0;
	constexpr uint32_t m_nMutatorCommandType = 0x4;
	constexpr uint32_t m_strInitWith_Container = 0x8;
	constexpr uint32_t m_strCopyProperty_InputContainerSrc = 0x10;
	constexpr uint32_t m_strCopyProperty_InputContainerProperty = 0x18;
	constexpr uint32_t m_strCopyProperty_TargetProperty = 0x20;
	constexpr uint32_t m_strRandomRollInputVars_SeedInputVar = 0x28;
	constexpr uint32_t m_vecRandomRollInputVars_InputVarsToRoll = 0x30;
	constexpr uint32_t m_strCopyMatchingKeys_InputContainerSrc = 0x48;
	constexpr uint32_t m_strCopyKeysWithSuffix_InputContainerSrc = 0x50;
	constexpr uint32_t m_strCopyKeysWithSuffix_FindSuffix = 0x58;
	constexpr uint32_t m_strCopyKeysWithSuffix_ReplaceSuffix = 0x60;
	constexpr uint32_t m_nSetValue_Value = 0x68;
	constexpr uint32_t m_strGenerateTexture_TargetParam = 0x2D8;
	constexpr uint32_t m_strGenerateTexture_InitialContainer = 0x2E0;
	constexpr uint32_t m_nResolution = 0x2E8;
	constexpr uint32_t m_bIsScratchTarget = 0x2EC;
	constexpr uint32_t m_bSplatDebugInfo = 0x2ED;
	constexpr uint32_t m_bCaptureInRenderDoc = 0x2EE;
	constexpr uint32_t m_vecTexGenInstructions = 0x2F0;
	constexpr uint32_t m_vecConditionalMutators = 0x308;
	constexpr uint32_t m_strPopInputQueue_Container = 0x320;
	constexpr uint32_t m_strDrawText_InputContainerSrc = 0x328;
	constexpr uint32_t m_strDrawText_InputContainerProperty = 0x330;
	constexpr uint32_t m_vecDrawText_Position = 0x338;
	constexpr uint32_t m_colDrawText_Color = 0x340;
	constexpr uint32_t m_strDrawText_Font = 0x348;
	constexpr uint32_t m_vecConditions = 0x350;
}

namespace CompositeMaterialInputContainer_t
{
	constexpr uint32_t m_bEnabled = 0x0;
	constexpr uint32_t m_nCompositeMaterialInputContainerSourceType = 0x4;
	constexpr uint32_t m_strSpecificContainerMaterial = 0x8;
	constexpr uint32_t m_strAttrName = 0xE8;
	constexpr uint32_t m_strAlias = 0xF0;
	constexpr uint32_t m_vecLooseVariables = 0xF8;
	constexpr uint32_t m_strAttrNameForVar = 0x110;
	constexpr uint32_t m_bExposeExternally = 0x118;
}

namespace CompositeMaterialAssemblyProcedure_t
{
	constexpr uint32_t m_vecCompMatIncludes = 0x0;
	constexpr uint32_t m_vecMatchFilters = 0x18;
	constexpr uint32_t m_vecCompositeInputContainers = 0x30;
	constexpr uint32_t m_vecPropertyMutators = 0x48;
}

namespace GeneratedTextureHandle_t
{
	constexpr uint32_t m_strBitmapName = 0x0;
}

namespace CompositeMaterial_t
{
	constexpr uint32_t m_TargetKVs = 0x8;
	constexpr uint32_t m_PreGenerationKVs = 0x18;
	constexpr uint32_t m_FinalKVs = 0x28;
	constexpr uint32_t m_vecGeneratedTextures = 0x40;
}

namespace CompositeMaterialEditorPoint_t
{
	constexpr uint32_t m_ModelName = 0x0;
	constexpr uint32_t m_nSequenceIndex = 0xE0;
	constexpr uint32_t m_flCycle = 0xE4;
	constexpr uint32_t m_KVModelStateChoices = 0xE8;
	constexpr uint32_t m_bEnableChildModel = 0xF8;
	constexpr uint32_t m_ChildModelName = 0x100;
	constexpr uint32_t m_vecCompositeMaterialAssemblyProcedures = 0x1E0;
	constexpr uint32_t m_vecCompositeMaterials = 0x1F8;
}

namespace CCompositeMaterialEditorDoc
{
	constexpr uint32_t m_nVersion = 0x8;
	constexpr uint32_t m_Points = 0x10;
	constexpr uint32_t m_KVthumbnail = 0x28;
}

namespace CGlobalLightBase
{
	constexpr uint32_t m_bSpotLight = 0x10;
	constexpr uint32_t m_SpotLightOrigin = 0x14;
	constexpr uint32_t m_SpotLightAngles = 0x20;
	constexpr uint32_t m_ShadowDirection = 0x2C;
	constexpr uint32_t m_AmbientDirection = 0x38;
	constexpr uint32_t m_SpecularDirection = 0x44;
	constexpr uint32_t m_InspectorSpecularDirection = 0x50;
	constexpr uint32_t m_flSpecularPower = 0x5C;
	constexpr uint32_t m_flSpecularIndependence = 0x60;
	constexpr uint32_t m_SpecularColor = 0x64;
	constexpr uint32_t m_bStartDisabled = 0x68;
	constexpr uint32_t m_bEnabled = 0x69;
	constexpr uint32_t m_LightColor = 0x6A;
	constexpr uint32_t m_AmbientColor1 = 0x6E;
	constexpr uint32_t m_AmbientColor2 = 0x72;
	constexpr uint32_t m_AmbientColor3 = 0x76;
	constexpr uint32_t m_flSunDistance = 0x7C;
	constexpr uint32_t m_flFOV = 0x80;
	constexpr uint32_t m_flNearZ = 0x84;
	constexpr uint32_t m_flFarZ = 0x88;
	constexpr uint32_t m_bEnableShadows = 0x8C;
	constexpr uint32_t m_bOldEnableShadows = 0x8D;
	constexpr uint32_t m_bBackgroundClearNotRequired = 0x8E;
	constexpr uint32_t m_flCloudScale = 0x90;
	constexpr uint32_t m_flCloud1Speed = 0x94;
	constexpr uint32_t m_flCloud1Direction = 0x98;
	constexpr uint32_t m_flCloud2Speed = 0x9C;
	constexpr uint32_t m_flCloud2Direction = 0xA0;
	constexpr uint32_t m_flAmbientScale1 = 0xB0;
	constexpr uint32_t m_flAmbientScale2 = 0xB4;
	constexpr uint32_t m_flGroundScale = 0xB8;
	constexpr uint32_t m_flLightScale = 0xBC;
	constexpr uint32_t m_flFoWDarkness = 0xC0;
	constexpr uint32_t m_bEnableSeparateSkyboxFog = 0xC4;
	constexpr uint32_t m_vFowColor = 0xC8;
	constexpr uint32_t m_ViewOrigin = 0xD4;
	constexpr uint32_t m_ViewAngles = 0xE0;
	constexpr uint32_t m_flViewFoV = 0xEC;
	constexpr uint32_t m_WorldPoints = 0xF0;
	constexpr uint32_t m_vFogOffsetLayer0 = 0x4A8;
	constexpr uint32_t m_vFogOffsetLayer1 = 0x4B0;
	constexpr uint32_t m_hEnvWind = 0x4B8;
	constexpr uint32_t m_hEnvSky = 0x4BC;
}

namespace C_GlobalLight
{
	constexpr uint32_t m_WindClothForceHandle = 0xA00;
}

namespace C_CSGO_MapPreviewCameraPathNode
{
	constexpr uint32_t m_szParentPathUniqueID = 0x540;
	constexpr uint32_t m_nPathIndex = 0x548;
	constexpr uint32_t m_vInTangentLocal = 0x54C;
	constexpr uint32_t m_vOutTangentLocal = 0x558;
	constexpr uint32_t m_flFOV = 0x564;
	constexpr uint32_t m_flSpeed = 0x568;
	constexpr uint32_t m_flEaseIn = 0x56C;
	constexpr uint32_t m_flEaseOut = 0x570;
	constexpr uint32_t m_vInTangentWorld = 0x574;
	constexpr uint32_t m_vOutTangentWorld = 0x580;
}

namespace C_CSGO_MapPreviewCameraPath
{
	constexpr uint32_t m_flZFar = 0x540;
	constexpr uint32_t m_flZNear = 0x544;
	constexpr uint32_t m_bLoop = 0x548;
	constexpr uint32_t m_bVerticalFOV = 0x549;
	constexpr uint32_t m_bConstantSpeed = 0x54A;
	constexpr uint32_t m_flDuration = 0x54C;
	constexpr uint32_t m_flPathLength = 0x590;
	constexpr uint32_t m_flPathDuration = 0x594;
}

namespace CCSPlayer_GlowServices
{
}

namespace C_VoteController
{
	constexpr uint32_t m_iActiveIssueIndex = 0x550;
	constexpr uint32_t m_iOnlyTeamToVote = 0x554;
	constexpr uint32_t m_nVoteOptionCount = 0x558;
	constexpr uint32_t m_nPotentialVotes = 0x56C;
	constexpr uint32_t m_bVotesDirty = 0x570;
	constexpr uint32_t m_bTypeDirty = 0x571;
	constexpr uint32_t m_bIsYesNoVote = 0x572;
}

namespace C_MapVetoPickController
{
	constexpr uint32_t m_nDraftType = 0x550;
	constexpr uint32_t m_nTeamWinningCoinToss = 0x554;
	constexpr uint32_t m_nTeamWithFirstChoice = 0x558;
	constexpr uint32_t m_nVoteMapIdsList = 0x658;
	constexpr uint32_t m_nAccountIDs = 0x674;
	constexpr uint32_t m_nMapId0 = 0x774;
	constexpr uint32_t m_nMapId1 = 0x874;
	constexpr uint32_t m_nMapId2 = 0x974;
	constexpr uint32_t m_nMapId3 = 0xA74;
	constexpr uint32_t m_nMapId4 = 0xB74;
	constexpr uint32_t m_nMapId5 = 0xC74;
	constexpr uint32_t m_nStartingSide0 = 0xD74;
	constexpr uint32_t m_nCurrentPhase = 0xE74;
	constexpr uint32_t m_nPhaseStartTick = 0xE78;
	constexpr uint32_t m_nPhaseDurationTicks = 0xE7C;
	constexpr uint32_t m_nPostDataUpdateTick = 0xE80;
	constexpr uint32_t m_bDisabledHud = 0xE84;
}

namespace CPlayerSprayDecalRenderHelper
{
}

namespace C_CSGO_TeamPreviewCamera
{
	constexpr uint32_t m_nVariant = 0x5A0;
	constexpr uint32_t m_bDofEnabled = 0x5A4;
	constexpr uint32_t m_flDofNearBlurry = 0x5A8;
	constexpr uint32_t m_flDofNearCrisp = 0x5AC;
	constexpr uint32_t m_flDofFarCrisp = 0x5B0;
	constexpr uint32_t m_flDofFarBlurry = 0x5B4;
	constexpr uint32_t m_flDofTiltToGround = 0x5B8;
}

namespace C_CSGO_TeamSelectCamera
{
}

namespace C_CSGO_TerroristTeamIntroCamera
{
}

namespace C_CSGO_TerroristWingmanIntroCamera
{
}

namespace C_CSGO_CounterTerroristTeamIntroCamera
{
}

namespace C_CSGO_CounterTerroristWingmanIntroCamera
{
}

namespace C_CSGO_EndOfMatchCamera
{
}

namespace C_CSGO_EndOfMatchCharacterPosition
{
}

namespace C_CSGO_EndOfMatchLineupEndpoint
{
}

namespace C_CSGO_EndOfMatchLineupStart
{
}

namespace C_CSGO_EndOfMatchLineupEnd
{
}

namespace C_CsmFovOverride
{
	constexpr uint32_t m_cameraName = 0x540;
	constexpr uint32_t m_flCsmFovOverrideValue = 0x548;
}

namespace C_PointEntity
{
}

namespace C_EnvCombinedLightProbeVolume
{
	constexpr uint32_t m_Color = 0x1598;
	constexpr uint32_t m_flBrightness = 0x159C;
	constexpr uint32_t m_hCubemapTexture = 0x15A0;
	constexpr uint32_t m_bCustomCubemapTexture = 0x15A8;
	constexpr uint32_t m_hLightProbeTexture = 0x15B0;
	constexpr uint32_t m_hLightProbeDirectLightIndicesTexture = 0x15B8;
	constexpr uint32_t m_hLightProbeDirectLightScalarsTexture = 0x15C0;
	constexpr uint32_t m_hLightProbeDirectLightShadowsTexture = 0x15C8;
	constexpr uint32_t m_vBoxMins = 0x15D0;
	constexpr uint32_t m_vBoxMaxs = 0x15DC;
	constexpr uint32_t m_bMoveable = 0x15E8;
	constexpr uint32_t m_nHandshake = 0x15EC;
	constexpr uint32_t m_nEnvCubeMapArrayIndex = 0x15F0;
	constexpr uint32_t m_nPriority = 0x15F4;
	constexpr uint32_t m_bStartDisabled = 0x15F8;
	constexpr uint32_t m_flEdgeFadeDist = 0x15FC;
	constexpr uint32_t m_vEdgeFadeDists = 0x1600;
	constexpr uint32_t m_nLightProbeSizeX = 0x160C;
	constexpr uint32_t m_nLightProbeSizeY = 0x1610;
	constexpr uint32_t m_nLightProbeSizeZ = 0x1614;
	constexpr uint32_t m_nLightProbeAtlasX = 0x1618;
	constexpr uint32_t m_nLightProbeAtlasY = 0x161C;
	constexpr uint32_t m_nLightProbeAtlasZ = 0x1620;
	constexpr uint32_t m_bEnabled = 0x1639;
}

namespace C_EnvCubemap
{
	constexpr uint32_t m_hCubemapTexture = 0x5C0;
	constexpr uint32_t m_bCustomCubemapTexture = 0x5C8;
	constexpr uint32_t m_flInfluenceRadius = 0x5CC;
	constexpr uint32_t m_vBoxProjectMins = 0x5D0;
	constexpr uint32_t m_vBoxProjectMaxs = 0x5DC;
	constexpr uint32_t m_bMoveable = 0x5E8;
	constexpr uint32_t m_nHandshake = 0x5EC;
	constexpr uint32_t m_nEnvCubeMapArrayIndex = 0x5F0;
	constexpr uint32_t m_nPriority = 0x5F4;
	constexpr uint32_t m_flEdgeFadeDist = 0x5F8;
	constexpr uint32_t m_vEdgeFadeDists = 0x5FC;
	constexpr uint32_t m_flDiffuseScale = 0x608;
	constexpr uint32_t m_bStartDisabled = 0x60C;
	constexpr uint32_t m_bDefaultEnvMap = 0x60D;
	constexpr uint32_t m_bDefaultSpecEnvMap = 0x60E;
	constexpr uint32_t m_bIndoorCubeMap = 0x60F;
	constexpr uint32_t m_bCopyDiffuseFromDefaultCubemap = 0x610;
	constexpr uint32_t m_bEnabled = 0x620;
}

namespace C_EnvCubemapBox
{
}

namespace C_EnvCubemapFog
{
	constexpr uint32_t m_flEndDistance = 0x540;
	constexpr uint32_t m_flStartDistance = 0x544;
	constexpr uint32_t m_flFogFalloffExponent = 0x548;
	constexpr uint32_t m_bHeightFogEnabled = 0x54C;
	constexpr uint32_t m_flFogHeightWidth = 0x550;
	constexpr uint32_t m_flFogHeightEnd = 0x554;
	constexpr uint32_t m_flFogHeightStart = 0x558;
	constexpr uint32_t m_flFogHeightExponent = 0x55C;
	constexpr uint32_t m_flLODBias = 0x560;
	constexpr uint32_t m_bActive = 0x564;
	constexpr uint32_t m_bStartDisabled = 0x565;
	constexpr uint32_t m_flFogMaxOpacity = 0x568;
	constexpr uint32_t m_nCubemapSourceType = 0x56C;
	constexpr uint32_t m_hSkyMaterial = 0x570;
	constexpr uint32_t m_iszSkyEntity = 0x578;
	constexpr uint32_t m_hFogCubemapTexture = 0x580;
	constexpr uint32_t m_bHasHeightFogEnd = 0x588;
	constexpr uint32_t m_bFirstTime = 0x589;
}

namespace C_GradientFog
{
	constexpr uint32_t m_hGradientFogTexture = 0x540;
	constexpr uint32_t m_flFogStartDistance = 0x548;
	constexpr uint32_t m_flFogEndDistance = 0x54C;
	constexpr uint32_t m_bHeightFogEnabled = 0x550;
	constexpr uint32_t m_flFogStartHeight = 0x554;
	constexpr uint32_t m_flFogEndHeight = 0x558;
	constexpr uint32_t m_flFarZ = 0x55C;
	constexpr uint32_t m_flFogMaxOpacity = 0x560;
	constexpr uint32_t m_flFogFalloffExponent = 0x564;
	constexpr uint32_t m_flFogVerticalExponent = 0x568;
	constexpr uint32_t m_fogColor = 0x56C;
	constexpr uint32_t m_flFogStrength = 0x570;
	constexpr uint32_t m_flFadeTime = 0x574;
	constexpr uint32_t m_bStartDisabled = 0x578;
	constexpr uint32_t m_bIsEnabled = 0x579;
	constexpr uint32_t m_bGradientFogNeedsTextures = 0x57A;
}

namespace C_EnvLightProbeVolume
{
	constexpr uint32_t m_hLightProbeTexture = 0x1518;
	constexpr uint32_t m_hLightProbeDirectLightIndicesTexture = 0x1520;
	constexpr uint32_t m_hLightProbeDirectLightScalarsTexture = 0x1528;
	constexpr uint32_t m_hLightProbeDirectLightShadowsTexture = 0x1530;
	constexpr uint32_t m_vBoxMins = 0x1538;
	constexpr uint32_t m_vBoxMaxs = 0x1544;
	constexpr uint32_t m_bMoveable = 0x1550;
	constexpr uint32_t m_nHandshake = 0x1554;
	constexpr uint32_t m_nPriority = 0x1558;
	constexpr uint32_t m_bStartDisabled = 0x155C;
	constexpr uint32_t m_nLightProbeSizeX = 0x1560;
	constexpr uint32_t m_nLightProbeSizeY = 0x1564;
	constexpr uint32_t m_nLightProbeSizeZ = 0x1568;
	constexpr uint32_t m_nLightProbeAtlasX = 0x156C;
	constexpr uint32_t m_nLightProbeAtlasY = 0x1570;
	constexpr uint32_t m_nLightProbeAtlasZ = 0x1574;
	constexpr uint32_t m_bEnabled = 0x1581;
}

namespace C_PlayerVisibility
{
	constexpr uint32_t m_flVisibilityStrength = 0x540;
	constexpr uint32_t m_flFogDistanceMultiplier = 0x544;
	constexpr uint32_t m_flFogMaxDensityMultiplier = 0x548;
	constexpr uint32_t m_flFadeTime = 0x54C;
	constexpr uint32_t m_bStartDisabled = 0x550;
	constexpr uint32_t m_bIsEnabled = 0x551;
}

namespace C_TonemapController2
{
	constexpr uint32_t m_flAutoExposureMin = 0x540;
	constexpr uint32_t m_flAutoExposureMax = 0x544;
	constexpr uint32_t m_flTonemapPercentTarget = 0x548;
	constexpr uint32_t m_flTonemapPercentBrightPixels = 0x54C;
	constexpr uint32_t m_flTonemapMinAvgLum = 0x550;
	constexpr uint32_t m_flExposureAdaptationSpeedUp = 0x554;
	constexpr uint32_t m_flExposureAdaptationSpeedDown = 0x558;
	constexpr uint32_t m_flTonemapEVSmoothingRange = 0x55C;
}

namespace C_EnvVolumetricFogController
{
	constexpr uint32_t m_flScattering = 0x540;
	constexpr uint32_t m_flAnisotropy = 0x544;
	constexpr uint32_t m_flFadeSpeed = 0x548;
	constexpr uint32_t m_flDrawDistance = 0x54C;
	constexpr uint32_t m_flFadeInStart = 0x550;
	constexpr uint32_t m_flFadeInEnd = 0x554;
	constexpr uint32_t m_flIndirectStrength = 0x558;
	constexpr uint32_t m_nIndirectTextureDimX = 0x55C;
	constexpr uint32_t m_nIndirectTextureDimY = 0x560;
	constexpr uint32_t m_nIndirectTextureDimZ = 0x564;
	constexpr uint32_t m_vBoxMins = 0x568;
	constexpr uint32_t m_vBoxMaxs = 0x574;
	constexpr uint32_t m_bActive = 0x580;
	constexpr uint32_t m_flStartAnisoTime = 0x584;
	constexpr uint32_t m_flStartScatterTime = 0x588;
	constexpr uint32_t m_flStartDrawDistanceTime = 0x58C;
	constexpr uint32_t m_flStartAnisotropy = 0x590;
	constexpr uint32_t m_flStartScattering = 0x594;
	constexpr uint32_t m_flStartDrawDistance = 0x598;
	constexpr uint32_t m_flDefaultAnisotropy = 0x59C;
	constexpr uint32_t m_flDefaultScattering = 0x5A0;
	constexpr uint32_t m_flDefaultDrawDistance = 0x5A4;
	constexpr uint32_t m_bStartDisabled = 0x5A8;
	constexpr uint32_t m_bEnableIndirect = 0x5A9;
	constexpr uint32_t m_bIsMaster = 0x5AA;
	constexpr uint32_t m_hFogIndirectTexture = 0x5B0;
	constexpr uint32_t m_nForceRefreshCount = 0x5B8;
	constexpr uint32_t m_bFirstTime = 0x5BC;
}

namespace C_EnvVolumetricFogVolume
{
	constexpr uint32_t m_bActive = 0x540;
	constexpr uint32_t m_vBoxMins = 0x544;
	constexpr uint32_t m_vBoxMaxs = 0x550;
	constexpr uint32_t m_bStartDisabled = 0x55C;
	constexpr uint32_t m_flStrength = 0x560;
	constexpr uint32_t m_nFalloffShape = 0x564;
	constexpr uint32_t m_flFalloffExponent = 0x568;
}

namespace C_FogController
{
	constexpr uint32_t m_fog = 0x540;
	constexpr uint32_t m_bUseAngles = 0x5A8;
	constexpr uint32_t m_iChangedVariables = 0x5AC;
}

namespace CInfoTarget
{
}

namespace CInfoParticleTarget
{
}

namespace C_InfoVisibilityBox
{
	constexpr uint32_t m_nMode = 0x544;
	constexpr uint32_t m_vBoxSize = 0x548;
	constexpr uint32_t m_bEnabled = 0x554;
}

namespace CInfoWorldLayer
{
	constexpr uint32_t m_pOutputOnEntitiesSpawned = 0x540;
	constexpr uint32_t m_worldName = 0x568;
	constexpr uint32_t m_layerName = 0x570;
	constexpr uint32_t m_bWorldLayerVisible = 0x578;
	constexpr uint32_t m_bEntitiesSpawned = 0x579;
	constexpr uint32_t m_bCreateAsChildSpawnGroup = 0x57A;
	constexpr uint32_t m_hLayerSpawnGroup = 0x57C;
	constexpr uint32_t m_bWorldLayerActuallyVisible = 0x580;
}

namespace C_PointCamera
{
	constexpr uint32_t m_FOV = 0x540;
	constexpr uint32_t m_Resolution = 0x544;
	constexpr uint32_t m_bFogEnable = 0x548;
	constexpr uint32_t m_FogColor = 0x549;
	constexpr uint32_t m_flFogStart = 0x550;
	constexpr uint32_t m_flFogEnd = 0x554;
	constexpr uint32_t m_flFogMaxDensity = 0x558;
	constexpr uint32_t m_bActive = 0x55C;
	constexpr uint32_t m_bUseScreenAspectRatio = 0x55D;
	constexpr uint32_t m_flAspectRatio = 0x560;
	constexpr uint32_t m_bNoSky = 0x564;
	constexpr uint32_t m_fBrightness = 0x568;
	constexpr uint32_t m_flZFar = 0x56C;
	constexpr uint32_t m_flZNear = 0x570;
	constexpr uint32_t m_bCanHLTVUse = 0x574;
	constexpr uint32_t m_bDofEnabled = 0x575;
	constexpr uint32_t m_flDofNearBlurry = 0x578;
	constexpr uint32_t m_flDofNearCrisp = 0x57C;
	constexpr uint32_t m_flDofFarCrisp = 0x580;
	constexpr uint32_t m_flDofFarBlurry = 0x584;
	constexpr uint32_t m_flDofTiltToGround = 0x588;
	constexpr uint32_t m_TargetFOV = 0x58C;
	constexpr uint32_t m_DegreesPerSecond = 0x590;
	constexpr uint32_t m_bIsOn = 0x594;
	constexpr uint32_t m_pNext = 0x598;
}

namespace C_PointCameraVFOV
{
	constexpr uint32_t m_flVerticalFOV = 0x5A0;
}

namespace CPointTemplate
{
	constexpr uint32_t m_iszWorldName = 0x540;
	constexpr uint32_t m_iszSource2EntityLumpName = 0x548;
	constexpr uint32_t m_iszEntityFilterName = 0x550;
	constexpr uint32_t m_flTimeoutInterval = 0x558;
	constexpr uint32_t m_bAsynchronouslySpawnEntities = 0x55C;
	constexpr uint32_t m_pOutputOnSpawned = 0x560;
	constexpr uint32_t m_clientOnlyEntityBehavior = 0x588;
	constexpr uint32_t m_ownerSpawnGroupType = 0x58C;
	constexpr uint32_t m_createdSpawnGroupHandles = 0x590;
	constexpr uint32_t m_SpawnedEntityHandles = 0x5A8;
	constexpr uint32_t m_ScriptSpawnCallback = 0x5C0;
	constexpr uint32_t m_ScriptCallbackScope = 0x5C8;
}

namespace C_SoundAreaEntityBase
{
	constexpr uint32_t m_bDisabled = 0x540;
	constexpr uint32_t m_bWasEnabled = 0x548;
	constexpr uint32_t m_iszSoundAreaType = 0x550;
	constexpr uint32_t m_vPos = 0x558;
}

namespace C_SoundAreaEntitySphere
{
	constexpr uint32_t m_flRadius = 0x568;
}

namespace C_SoundAreaEntityOrientedBox
{
	constexpr uint32_t m_vMin = 0x568;
	constexpr uint32_t m_vMax = 0x574;
}

namespace C_Team
{
	constexpr uint32_t m_aPlayerControllers = 0x540;
	constexpr uint32_t m_aPlayers = 0x558;
	constexpr uint32_t m_iScore = 0x570;
	constexpr uint32_t m_szTeamname = 0x574;
}

namespace CBasePlayerController
{
	constexpr uint32_t m_nFinalPredictedTick = 0x548;
	constexpr uint32_t m_CommandContext = 0x550;
	constexpr uint32_t m_nInButtonsWhichAreToggles = 0x600;
	constexpr uint32_t m_nTickBase = 0x608;
	constexpr uint32_t m_hPawn = 0x60C;
	constexpr uint32_t m_hPredictedPawn = 0x610;
	constexpr uint32_t m_nSplitScreenSlot = 0x614;
	constexpr uint32_t m_hSplitOwner = 0x618;
	constexpr uint32_t m_hSplitScreenPlayers = 0x620;
	constexpr uint32_t m_bIsHLTV = 0x638;
	constexpr uint32_t m_iConnected = 0x63C;
	constexpr uint32_t m_iszPlayerName = 0x640;
	constexpr uint32_t m_steamID = 0x6C8;
	constexpr uint32_t m_bIsLocalPlayerController = 0x6D0;
	constexpr uint32_t m_iDesiredFOV = 0x6D4;
}

namespace CBasePlayerVData
{
	constexpr uint32_t m_sModelName = 0x28;
	constexpr uint32_t m_flHeadDamageMultiplier = 0x108;
	constexpr uint32_t m_flChestDamageMultiplier = 0x118;
	constexpr uint32_t m_flStomachDamageMultiplier = 0x128;
	constexpr uint32_t m_flArmDamageMultiplier = 0x138;
	constexpr uint32_t m_flLegDamageMultiplier = 0x148;
	constexpr uint32_t m_flHoldBreathTime = 0x158;
	constexpr uint32_t m_flDrowningDamageInterval = 0x15C;
	constexpr uint32_t m_nDrowningDamageInitial = 0x160;
	constexpr uint32_t m_nDrowningDamageMax = 0x164;
	constexpr uint32_t m_nWaterSpeed = 0x168;
	constexpr uint32_t m_flUseRange = 0x16C;
	constexpr uint32_t m_flUseAngleTolerance = 0x170;
	constexpr uint32_t m_flCrouchTime = 0x174;
}

namespace CBasePlayerWeaponVData
{
	constexpr uint32_t m_szWorldModel = 0x28;
	constexpr uint32_t m_bBuiltRightHanded = 0x108;
	constexpr uint32_t m_bAllowFlipping = 0x109;
	constexpr uint32_t m_bIsFullAuto = 0x10A;
	constexpr uint32_t m_nNumBullets = 0x10C;
	constexpr uint32_t m_sMuzzleAttachment = 0x110;
	constexpr uint32_t m_szMuzzleFlashParticle = 0x118;
	constexpr uint32_t m_iFlags = 0x1F8;
	constexpr uint32_t m_nPrimaryAmmoType = 0x1F9;
	constexpr uint32_t m_nSecondaryAmmoType = 0x1FA;
	constexpr uint32_t m_iMaxClip1 = 0x1FC;
	constexpr uint32_t m_iMaxClip2 = 0x200;
	constexpr uint32_t m_iDefaultClip1 = 0x204;
	constexpr uint32_t m_iDefaultClip2 = 0x208;
	constexpr uint32_t m_iWeight = 0x20C;
	constexpr uint32_t m_bAutoSwitchTo = 0x210;
	constexpr uint32_t m_bAutoSwitchFrom = 0x211;
	constexpr uint32_t m_iRumbleEffect = 0x214;
	constexpr uint32_t m_aShootSounds = 0x218;
	constexpr uint32_t m_iSlot = 0x238;
	constexpr uint32_t m_iPosition = 0x23C;
}

namespace CBaseAnimGraphController
{
	constexpr uint32_t m_baseLayer = 0x18;
	constexpr uint32_t m_animGraphNetworkedVars = 0x40;
	constexpr uint32_t m_bSequenceFinished = 0x1320;
	constexpr uint32_t m_flLastEventCycle = 0x1324;
	constexpr uint32_t m_flLastEventAnimTime = 0x1328;
	constexpr uint32_t m_flPlaybackRate = 0x132C;
	constexpr uint32_t m_flPrevAnimTime = 0x1334;
	constexpr uint32_t m_bClientSideAnimation = 0x1338;
	constexpr uint32_t m_bNetworkedAnimationInputsChanged = 0x1339;
	constexpr uint32_t m_nPrevNewSequenceParity = 0x133A;
	constexpr uint32_t m_nPrevResetEventsParity = 0x133B;
	constexpr uint32_t m_nNewSequenceParity = 0x133C;
	constexpr uint32_t m_nResetEventsParity = 0x1340;
	constexpr uint32_t m_nAnimLoopMode = 0x1344;
	constexpr uint32_t m_hAnimationUpdate = 0x13E4;
	constexpr uint32_t m_hLastAnimEventSequence = 0x13E8;
}

namespace C_BaseModelEntity
{
	constexpr uint32_t m_CRenderComponent = 0xA10;
	constexpr uint32_t m_CHitboxComponent = 0xA18;
	constexpr uint32_t m_bInitModelEffects = 0xA60;
	constexpr uint32_t m_bIsStaticProp = 0xA61;
	constexpr uint32_t m_nLastAddDecal = 0xA64;
	constexpr uint32_t m_nDecalsAdded = 0xA68;
	constexpr uint32_t m_iOldHealth = 0xA6C;
	constexpr uint32_t m_nRenderMode = 0xA70;
	constexpr uint32_t m_nRenderFX = 0xA71;
	constexpr uint32_t m_bAllowFadeInView = 0xA72;
	constexpr uint32_t m_clrRender = 0xA73;
	constexpr uint32_t m_vecRenderAttributes = 0xA78;
	constexpr uint32_t m_bRenderToCubemaps = 0xAE0;
	constexpr uint32_t m_Collision = 0xAE8;
	constexpr uint32_t m_Glow = 0xB98;
	constexpr uint32_t m_flGlowBackfaceMult = 0xBF0;
	constexpr uint32_t m_fadeMinDist = 0xBF4;
	constexpr uint32_t m_fadeMaxDist = 0xBF8;
	constexpr uint32_t m_flFadeScale = 0xBFC;
	constexpr uint32_t m_flShadowStrength = 0xC00;
	constexpr uint32_t m_nObjectCulling = 0xC04;
	constexpr uint32_t m_nAddDecal = 0xC08;
	constexpr uint32_t m_vDecalPosition = 0xC0C;
	constexpr uint32_t m_vDecalForwardAxis = 0xC18;
	constexpr uint32_t m_flDecalHealBloodRate = 0xC24;
	constexpr uint32_t m_flDecalHealHeightRate = 0xC28;
	constexpr uint32_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC30;
	constexpr uint32_t m_vecViewOffset = 0xC48;
	constexpr uint32_t m_pClientAlphaProperty = 0xC78;
	constexpr uint32_t m_ClientOverrideTint = 0xC80;
	constexpr uint32_t m_bUseClientOverrideTint = 0xC84;
}

namespace CServerOnlyModelEntity
{
}

namespace C_ModelPointEntity
{
}

namespace CLogicRelay
{
	constexpr uint32_t m_OnTrigger = 0x540;
	constexpr uint32_t m_OnSpawn = 0x568;
	constexpr uint32_t m_bDisabled = 0x590;
	constexpr uint32_t m_bWaitForRefire = 0x591;
	constexpr uint32_t m_bTriggerOnce = 0x592;
	constexpr uint32_t m_bFastRetrigger = 0x593;
	constexpr uint32_t m_bPassthoughCaller = 0x594;
}

namespace C_ParticleSystem
{
	constexpr uint32_t m_szSnapshotFileName = 0xCC0;
	constexpr uint32_t m_bActive = 0xEC0;
	constexpr uint32_t m_bFrozen = 0xEC1;
	constexpr uint32_t m_flFreezeTransitionDuration = 0xEC4;
	constexpr uint32_t m_nStopType = 0xEC8;
	constexpr uint32_t m_bAnimateDuringGameplayPause = 0xECC;
	constexpr uint32_t m_iEffectIndex = 0xED0;
	constexpr uint32_t m_flStartTime = 0xED8;
	constexpr uint32_t m_flPreSimTime = 0xEDC;
	constexpr uint32_t m_vServerControlPoints = 0xEE0;
	constexpr uint32_t m_iServerControlPointAssignments = 0xF10;
	constexpr uint32_t m_hControlPointEnts = 0xF14;
	constexpr uint32_t m_bNoSave = 0x1014;
	constexpr uint32_t m_bNoFreeze = 0x1015;
	constexpr uint32_t m_bNoRamp = 0x1016;
	constexpr uint32_t m_bStartActive = 0x1017;
	constexpr uint32_t m_iszEffectName = 0x1018;
	constexpr uint32_t m_iszControlPointNames = 0x1020;
	constexpr uint32_t m_nDataCP = 0x1220;
	constexpr uint32_t m_vecDataCPValue = 0x1224;
	constexpr uint32_t m_nTintCP = 0x1230;
	constexpr uint32_t m_clrTint = 0x1234;
	constexpr uint32_t m_bOldActive = 0x1258;
	constexpr uint32_t m_bOldFrozen = 0x1259;
}

namespace C_PathParticleRope
{
	constexpr uint32_t m_bStartActive = 0x540;
	constexpr uint32_t m_flMaxSimulationTime = 0x544;
	constexpr uint32_t m_iszEffectName = 0x548;
	constexpr uint32_t m_PathNodes_Name = 0x550;
	constexpr uint32_t m_flParticleSpacing = 0x568;
	constexpr uint32_t m_flSlack = 0x56C;
	constexpr uint32_t m_flRadius = 0x570;
	constexpr uint32_t m_ColorTint = 0x574;
	constexpr uint32_t m_nEffectState = 0x578;
	constexpr uint32_t m_iEffectIndex = 0x580;
	constexpr uint32_t m_PathNodes_Position = 0x588;
	constexpr uint32_t m_PathNodes_TangentIn = 0x5A0;
	constexpr uint32_t m_PathNodes_TangentOut = 0x5B8;
	constexpr uint32_t m_PathNodes_Color = 0x5D0;
	constexpr uint32_t m_PathNodes_PinEnabled = 0x5E8;
	constexpr uint32_t m_PathNodes_RadiusScale = 0x600;
}

namespace C_PathParticleRopeAlias_path_particle_rope_clientside
{
}

namespace C_DynamicLight
{
	constexpr uint32_t m_Flags = 0xCC0;
	constexpr uint32_t m_LightStyle = 0xCC1;
	constexpr uint32_t m_Radius = 0xCC4;
	constexpr uint32_t m_Exponent = 0xCC8;
	constexpr uint32_t m_InnerAngle = 0xCCC;
	constexpr uint32_t m_OuterAngle = 0xCD0;
	constexpr uint32_t m_SpotRadius = 0xCD4;
}

namespace C_EnvScreenOverlay
{
	constexpr uint32_t m_iszOverlayNames = 0x540;
	constexpr uint32_t m_flOverlayTimes = 0x590;
	constexpr uint32_t m_flStartTime = 0x5B8;
	constexpr uint32_t m_iDesiredOverlay = 0x5BC;
	constexpr uint32_t m_bIsActive = 0x5C0;
	constexpr uint32_t m_bWasActive = 0x5C1;
	constexpr uint32_t m_iCachedDesiredOverlay = 0x5C4;
	constexpr uint32_t m_iCurrentOverlay = 0x5C8;
	constexpr uint32_t m_flCurrentOverlayTime = 0x5CC;
}

namespace C_FuncTrackTrain
{
	constexpr uint32_t m_nLongAxis = 0xCC0;
	constexpr uint32_t m_flRadius = 0xCC4;
	constexpr uint32_t m_flLineLength = 0xCC8;
}

namespace C_LightGlowOverlay
{
	constexpr uint32_t m_vecOrigin = 0xD0;
	constexpr uint32_t m_vecDirection = 0xDC;
	constexpr uint32_t m_nMinDist = 0xE8;
	constexpr uint32_t m_nMaxDist = 0xEC;
	constexpr uint32_t m_nOuterMaxDist = 0xF0;
	constexpr uint32_t m_bOneSided = 0xF4;
	constexpr uint32_t m_bModulateByDot = 0xF5;
}

namespace C_LightGlow
{
	constexpr uint32_t m_nHorizontalSize = 0xCC0;
	constexpr uint32_t m_nVerticalSize = 0xCC4;
	constexpr uint32_t m_nMinDist = 0xCC8;
	constexpr uint32_t m_nMaxDist = 0xCCC;
	constexpr uint32_t m_nOuterMaxDist = 0xCD0;
	constexpr uint32_t m_flGlowProxySize = 0xCD4;
	constexpr uint32_t m_flHDRColorScale = 0xCD8;
	constexpr uint32_t m_Glow = 0xCE0;
}

namespace C_RagdollManager
{
	constexpr uint32_t m_iCurrentMaxRagdollCount = 0x540;
}

namespace C_SpotlightEnd
{
	constexpr uint32_t m_flLightScale = 0xCC0;
	constexpr uint32_t m_Radius = 0xCC4;
}

namespace C_PointValueRemapper
{
	constexpr uint32_t m_bDisabled = 0x540;
	constexpr uint32_t m_bDisabledOld = 0x541;
	constexpr uint32_t m_bUpdateOnClient = 0x542;
	constexpr uint32_t m_nInputType = 0x544;
	constexpr uint32_t m_hRemapLineStart = 0x548;
	constexpr uint32_t m_hRemapLineEnd = 0x54C;
	constexpr uint32_t m_flMaximumChangePerSecond = 0x550;
	constexpr uint32_t m_flDisengageDistance = 0x554;
	constexpr uint32_t m_flEngageDistance = 0x558;
	constexpr uint32_t m_bRequiresUseKey = 0x55C;
	constexpr uint32_t m_nOutputType = 0x560;
	constexpr uint32_t m_hOutputEntities = 0x568;
	constexpr uint32_t m_nHapticsType = 0x580;
	constexpr uint32_t m_nMomentumType = 0x584;
	constexpr uint32_t m_flMomentumModifier = 0x588;
	constexpr uint32_t m_flSnapValue = 0x58C;
	constexpr uint32_t m_flCurrentMomentum = 0x590;
	constexpr uint32_t m_nRatchetType = 0x594;
	constexpr uint32_t m_flRatchetOffset = 0x598;
	constexpr uint32_t m_flInputOffset = 0x59C;
	constexpr uint32_t m_bEngaged = 0x5A0;
	constexpr uint32_t m_bFirstUpdate = 0x5A1;
	constexpr uint32_t m_flPreviousValue = 0x5A4;
	constexpr uint32_t m_flPreviousUpdateTickTime = 0x5A8;
	constexpr uint32_t m_vecPreviousTestPoint = 0x5AC;
}

namespace C_PointWorldText
{
	constexpr uint32_t m_bForceRecreateNextUpdate = 0xCC8;
	constexpr uint32_t m_messageText = 0xCD8;
	constexpr uint32_t m_FontName = 0xED8;
	constexpr uint32_t m_bEnabled = 0xF18;
	constexpr uint32_t m_bFullbright = 0xF19;
	constexpr uint32_t m_flWorldUnitsPerPx = 0xF1C;
	constexpr uint32_t m_flFontSize = 0xF20;
	constexpr uint32_t m_flDepthOffset = 0xF24;
	constexpr uint32_t m_Color = 0xF28;
	constexpr uint32_t m_nJustifyHorizontal = 0xF2C;
	constexpr uint32_t m_nJustifyVertical = 0xF30;
	constexpr uint32_t m_nReorientMode = 0xF34;
}

namespace C_HandleTest
{
	constexpr uint32_t m_Handle = 0x540;
	constexpr uint32_t m_bSendHandle = 0x544;
}

namespace C_EnvWind
{
	constexpr uint32_t m_EnvWindShared = 0x540;
}

namespace C_BaseToggle
{
}

namespace C_BaseButton
{
	constexpr uint32_t m_glowEntity = 0xCC0;
	constexpr uint32_t m_usable = 0xCC4;
	constexpr uint32_t m_szDisplayText = 0xCC8;
}

namespace C_PrecipitationBlocker
{
}

namespace C_EntityDissolve
{
	constexpr uint32_t m_flStartTime = 0xCC8;
	constexpr uint32_t m_flFadeInStart = 0xCCC;
	constexpr uint32_t m_flFadeInLength = 0xCD0;
	constexpr uint32_t m_flFadeOutModelStart = 0xCD4;
	constexpr uint32_t m_flFadeOutModelLength = 0xCD8;
	constexpr uint32_t m_flFadeOutStart = 0xCDC;
	constexpr uint32_t m_flFadeOutLength = 0xCE0;
	constexpr uint32_t m_flNextSparkTime = 0xCE4;
	constexpr uint32_t m_nDissolveType = 0xCE8;
	constexpr uint32_t m_vDissolverOrigin = 0xCEC;
	constexpr uint32_t m_nMagnitude = 0xCF8;
	constexpr uint32_t m_bCoreExplode = 0xCFC;
	constexpr uint32_t m_bLinkedToServerEnt = 0xCFD;
}

namespace C_EnvProjectedTexture
{
}

namespace C_EnvDecal
{
	constexpr uint32_t m_hDecalMaterial = 0xCC0;
	constexpr uint32_t m_flWidth = 0xCC8;
	constexpr uint32_t m_flHeight = 0xCCC;
	constexpr uint32_t m_flDepth = 0xCD0;
	constexpr uint32_t m_nRenderOrder = 0xCD4;
	constexpr uint32_t m_bProjectOnWorld = 0xCD8;
	constexpr uint32_t m_bProjectOnCharacters = 0xCD9;
	constexpr uint32_t m_bProjectOnWater = 0xCDA;
	constexpr uint32_t m_flDepthSortBias = 0xCDC;
}

namespace CFireOverlay
{
	constexpr uint32_t m_pOwner = 0xD0;
	constexpr uint32_t m_vBaseColors = 0xD8;
	constexpr uint32_t m_flScale = 0x108;
	constexpr uint32_t m_nGUID = 0x10C;
}

namespace C_FuncBrush
{
}

namespace C_FuncElectrifiedVolume
{
	constexpr uint32_t m_nAmbientEffect = 0xCC0;
	constexpr uint32_t m_EffectName = 0xCC8;
	constexpr uint32_t m_bState = 0xCD0;
}

namespace C_FuncRotating
{
}

namespace C_Breakable
{
}

namespace C_PhysBox
{
}

namespace C_RopeKeyframe
{
	constexpr uint32_t m_LinksTouchingSomething = 0xCC8;
	constexpr uint32_t m_nLinksTouchingSomething = 0xCCC;
	constexpr uint32_t m_bApplyWind = 0xCD0;
	constexpr uint32_t m_fPrevLockedPoints = 0xCD4;
	constexpr uint32_t m_iForcePointMoveCounter = 0xCD8;
	constexpr uint32_t m_bPrevEndPointPos = 0xCDC;
	constexpr uint32_t m_vPrevEndPointPos = 0xCE0;
	constexpr uint32_t m_flCurScroll = 0xCF8;
	constexpr uint32_t m_flScrollSpeed = 0xCFC;
	constexpr uint32_t m_RopeFlags = 0xD00;
	constexpr uint32_t m_iRopeMaterialModelIndex = 0xD08;
	constexpr uint32_t m_LightValues = 0xF80;
	constexpr uint32_t m_nSegments = 0xFF8;
	constexpr uint32_t m_hStartPoint = 0xFFC;
	constexpr uint32_t m_hEndPoint = 0x1000;
	constexpr uint32_t m_iStartAttachment = 0x1004;
	constexpr uint32_t m_iEndAttachment = 0x1005;
	constexpr uint32_t m_Subdiv = 0x1006;
	constexpr uint32_t m_RopeLength = 0x1008;
	constexpr uint32_t m_Slack = 0x100A;
	constexpr uint32_t m_TextureScale = 0x100C;
	constexpr uint32_t m_fLockedPoints = 0x1010;
	constexpr uint32_t m_nChangeCount = 0x1011;
	constexpr uint32_t m_Width = 0x1014;
	constexpr uint32_t m_PhysicsDelegate = 0x1018;
	constexpr uint32_t m_hMaterial = 0x1028;
	constexpr uint32_t m_TextureHeight = 0x1030;
	constexpr uint32_t m_vecImpulse = 0x1034;
	constexpr uint32_t m_vecPreviousImpulse = 0x1040;
	constexpr uint32_t m_flCurrentGustTimer = 0x104C;
	constexpr uint32_t m_flCurrentGustLifetime = 0x1050;
	constexpr uint32_t m_flTimeToNextGust = 0x1054;
	constexpr uint32_t m_vWindDir = 0x1058;
	constexpr uint32_t m_vColorMod = 0x1064;
	constexpr uint32_t m_vCachedEndPointAttachmentPos = 0x1070;
	constexpr uint32_t m_vCachedEndPointAttachmentAngle = 0x1088;
	constexpr uint32_t m_bConstrainBetweenEndpoints = 0x10A0;
	constexpr uint32_t m_bEndPointAttachmentPositionsDirty = 0x0;
	constexpr uint32_t m_bEndPointAttachmentAnglesDirty = 0x0;
	constexpr uint32_t m_bNewDataThisFrame = 0x0;
	constexpr uint32_t m_bPhysicsInitted = 0x0;
}

namespace C_SceneEntity
{
	constexpr uint32_t m_bIsPlayingBack = 0x548;
	constexpr uint32_t m_bPaused = 0x549;
	constexpr uint32_t m_bMultiplayer = 0x54A;
	constexpr uint32_t m_bAutogenerated = 0x54B;
	constexpr uint32_t m_flForceClientTime = 0x54C;
	constexpr uint32_t m_nSceneStringIndex = 0x550;
	constexpr uint32_t m_bClientOnly = 0x552;
	constexpr uint32_t m_hOwner = 0x554;
	constexpr uint32_t m_hActorList = 0x558;
	constexpr uint32_t m_bWasPlaying = 0x570;
	constexpr uint32_t m_QueuedEvents = 0x580;
	constexpr uint32_t m_flCurrentTime = 0x598;
}

namespace C_SunGlowOverlay
{
	constexpr uint32_t m_bModulateByDot = 0xD0;
}

namespace C_Sun
{
	constexpr uint32_t m_fxSSSunFlareEffectIndex = 0xCC0;
	constexpr uint32_t m_fxSunFlareEffectIndex = 0xCC4;
	constexpr uint32_t m_fdistNormalize = 0xCC8;
	constexpr uint32_t m_vSunPos = 0xCCC;
	constexpr uint32_t m_vDirection = 0xCD8;
	constexpr uint32_t m_iszEffectName = 0xCE8;
	constexpr uint32_t m_iszSSEffectName = 0xCF0;
	constexpr uint32_t m_clrOverlay = 0xCF8;
	constexpr uint32_t m_bOn = 0xCFC;
	constexpr uint32_t m_bmaxColor = 0xCFD;
	constexpr uint32_t m_flSize = 0xD00;
	constexpr uint32_t m_flHazeScale = 0xD04;
	constexpr uint32_t m_flRotation = 0xD08;
	constexpr uint32_t m_flHDRColorScale = 0xD0C;
	constexpr uint32_t m_flAlphaHaze = 0xD10;
	constexpr uint32_t m_flAlphaScale = 0xD14;
	constexpr uint32_t m_flAlphaHdr = 0xD18;
	constexpr uint32_t m_flFarZScale = 0xD1C;
}

namespace C_BaseTrigger
{
	constexpr uint32_t m_bDisabled = 0xCC0;
	constexpr uint32_t m_bClientSidePredicted = 0xCC1;
}

namespace C_TriggerVolume
{
}

namespace C_TriggerMultiple
{
}

namespace C_TriggerLerpObject
{
}

namespace CClientAlphaProperty
{
	constexpr uint32_t m_nRenderFX = 0x10;
	constexpr uint32_t m_nRenderMode = 0x11;
	constexpr uint32_t m_bAlphaOverride = 0x0;
	constexpr uint32_t m_bShadowAlphaOverride = 0x0;
	constexpr uint32_t m_nReserved = 0x0;
	constexpr uint32_t m_nAlpha = 0x13;
	constexpr uint32_t m_nDesyncOffset = 0x14;
	constexpr uint32_t m_nReserved2 = 0x16;
	constexpr uint32_t m_nDistFadeStart = 0x18;
	constexpr uint32_t m_nDistFadeEnd = 0x1A;
	constexpr uint32_t m_flFadeScale = 0x1C;
	constexpr uint32_t m_flRenderFxStartTime = 0x20;
	constexpr uint32_t m_flRenderFxDuration = 0x24;
}

namespace C_Beam
{
	constexpr uint32_t m_flFrameRate = 0xCC0;
	constexpr uint32_t m_flHDRColorScale = 0xCC4;
	constexpr uint32_t m_flFireTime = 0xCC8;
	constexpr uint32_t m_flDamage = 0xCCC;
	constexpr uint32_t m_nNumBeamEnts = 0xCD0;
	constexpr uint32_t m_queryHandleHalo = 0xCD4;
	constexpr uint32_t m_hBaseMaterial = 0xCF8;
	constexpr uint32_t m_nHaloIndex = 0xD00;
	constexpr uint32_t m_nBeamType = 0xD08;
	constexpr uint32_t m_nBeamFlags = 0xD0C;
	constexpr uint32_t m_hAttachEntity = 0xD10;
	constexpr uint32_t m_nAttachIndex = 0xD38;
	constexpr uint32_t m_fWidth = 0xD44;
	constexpr uint32_t m_fEndWidth = 0xD48;
	constexpr uint32_t m_fFadeLength = 0xD4C;
	constexpr uint32_t m_fHaloScale = 0xD50;
	constexpr uint32_t m_fAmplitude = 0xD54;
	constexpr uint32_t m_fStartFrame = 0xD58;
	constexpr uint32_t m_fSpeed = 0xD5C;
	constexpr uint32_t m_flFrame = 0xD60;
	constexpr uint32_t m_nClipStyle = 0xD64;
	constexpr uint32_t m_bTurnedOff = 0xD68;
	constexpr uint32_t m_vecEndPos = 0xD6C;
	constexpr uint32_t m_hEndEntity = 0xD78;
}

namespace C_FuncLadder
{
	constexpr uint32_t m_vecLadderDir = 0xCC0;
	constexpr uint32_t m_Dismounts = 0xCD0;
	constexpr uint32_t m_vecLocalTop = 0xCE8;
	constexpr uint32_t m_vecPlayerMountPositionTop = 0xCF4;
	constexpr uint32_t m_vecPlayerMountPositionBottom = 0xD00;
	constexpr uint32_t m_flAutoRideSpeed = 0xD0C;
	constexpr uint32_t m_bDisabled = 0xD10;
	constexpr uint32_t m_bFakeLadder = 0xD11;
	constexpr uint32_t m_bHasSlack = 0xD12;
}

namespace CPrecipitationVData
{
	constexpr uint32_t m_szParticlePrecipitationEffect = 0x28;
	constexpr uint32_t m_flInnerDistance = 0x108;
	constexpr uint32_t m_nAttachType = 0x10C;
	constexpr uint32_t m_bBatchSameVolumeType = 0x110;
	constexpr uint32_t m_nRTEnvCP = 0x114;
	constexpr uint32_t m_nRTEnvCPComponent = 0x118;
	constexpr uint32_t m_szModifier = 0x120;
}

namespace C_Sprite
{
	constexpr uint32_t m_hSpriteMaterial = 0xCD8;
	constexpr uint32_t m_hAttachedToEntity = 0xCE0;
	constexpr uint32_t m_nAttachment = 0xCE4;
	constexpr uint32_t m_flSpriteFramerate = 0xCE8;
	constexpr uint32_t m_flFrame = 0xCEC;
	constexpr uint32_t m_flDieTime = 0xCF0;
	constexpr uint32_t m_nBrightness = 0xD00;
	constexpr uint32_t m_flBrightnessDuration = 0xD04;
	constexpr uint32_t m_flSpriteScale = 0xD08;
	constexpr uint32_t m_flScaleDuration = 0xD0C;
	constexpr uint32_t m_bWorldSpaceScale = 0xD10;
	constexpr uint32_t m_flGlowProxySize = 0xD14;
	constexpr uint32_t m_flHDRColorScale = 0xD18;
	constexpr uint32_t m_flLastTime = 0xD1C;
	constexpr uint32_t m_flMaxFrame = 0xD20;
	constexpr uint32_t m_flStartScale = 0xD24;
	constexpr uint32_t m_flDestScale = 0xD28;
	constexpr uint32_t m_flScaleTimeStart = 0xD2C;
	constexpr uint32_t m_nStartBrightness = 0xD30;
	constexpr uint32_t m_nDestBrightness = 0xD34;
	constexpr uint32_t m_flBrightnessTimeStart = 0xD38;
	constexpr uint32_t m_hOldSpriteMaterial = 0xD40;
	constexpr uint32_t m_nSpriteWidth = 0xDE8;
	constexpr uint32_t m_nSpriteHeight = 0xDEC;
}

namespace C_SpriteOriented
{
}

namespace C_BaseClientUIEntity
{
	constexpr uint32_t m_bEnabled = 0xCC8;
	constexpr uint32_t m_DialogXMLName = 0xCD0;
	constexpr uint32_t m_PanelClassName = 0xCD8;
	constexpr uint32_t m_PanelID = 0xCE0;
}

namespace C_PointClientUIDialog
{
	constexpr uint32_t m_hActivator = 0xCF0;
	constexpr uint32_t m_bStartEnabled = 0xCF4;
}

namespace C_PointClientUIHUD
{
	constexpr uint32_t m_bCheckCSSClasses = 0xCF8;
	constexpr uint32_t m_bIgnoreInput = 0xE80;
	constexpr uint32_t m_flWidth = 0xE84;
	constexpr uint32_t m_flHeight = 0xE88;
	constexpr uint32_t m_flDPI = 0xE8C;
	constexpr uint32_t m_flInteractDistance = 0xE90;
	constexpr uint32_t m_flDepthOffset = 0xE94;
	constexpr uint32_t m_unOwnerContext = 0xE98;
	constexpr uint32_t m_unHorizontalAlign = 0xE9C;
	constexpr uint32_t m_unVerticalAlign = 0xEA0;
	constexpr uint32_t m_unOrientation = 0xEA4;
	constexpr uint32_t m_bAllowInteractionFromAllSceneWorlds = 0xEA8;
	constexpr uint32_t m_vecCSSClasses = 0xEB0;
}

namespace C_PointClientUIWorldPanel
{
	constexpr uint32_t m_bForceRecreateNextUpdate = 0xCF8;
	constexpr uint32_t m_bMoveViewToPlayerNextThink = 0xCF9;
	constexpr uint32_t m_bCheckCSSClasses = 0xCFA;
	constexpr uint32_t m_anchorDeltaTransform = 0xD00;
	constexpr uint32_t m_pOffScreenIndicator = 0xEA0;
	constexpr uint32_t m_bIgnoreInput = 0xEC8;
	constexpr uint32_t m_bLit = 0xEC9;
	constexpr uint32_t m_bFollowPlayerAcrossTeleport = 0xECA;
	constexpr uint32_t m_flWidth = 0xECC;
	constexpr uint32_t m_flHeight = 0xED0;
	constexpr uint32_t m_flDPI = 0xED4;
	constexpr uint32_t m_flInteractDistance = 0xED8;
	constexpr uint32_t m_flDepthOffset = 0xEDC;
	constexpr uint32_t m_unOwnerContext = 0xEE0;
	constexpr uint32_t m_unHorizontalAlign = 0xEE4;
	constexpr uint32_t m_unVerticalAlign = 0xEE8;
	constexpr uint32_t m_unOrientation = 0xEEC;
	constexpr uint32_t m_bAllowInteractionFromAllSceneWorlds = 0xEF0;
	constexpr uint32_t m_vecCSSClasses = 0xEF8;
	constexpr uint32_t m_bOpaque = 0xF10;
	constexpr uint32_t m_bNoDepth = 0xF11;
	constexpr uint32_t m_bRenderBackface = 0xF12;
	constexpr uint32_t m_bUseOffScreenIndicator = 0xF13;
	constexpr uint32_t m_bExcludeFromSaveGames = 0xF14;
	constexpr uint32_t m_bGrabbable = 0xF15;
	constexpr uint32_t m_bOnlyRenderToTexture = 0xF16;
	constexpr uint32_t m_bDisableMipGen = 0xF17;
	constexpr uint32_t m_nExplicitImageLayout = 0xF18;
}

namespace CPointOffScreenIndicatorUi
{
	constexpr uint32_t m_bBeenEnabled = 0xF20;
	constexpr uint32_t m_bHide = 0xF21;
	constexpr uint32_t m_flSeenTargetTime = 0xF24;
	constexpr uint32_t m_pTargetPanel = 0xF28;
}

namespace C_PointClientUIWorldTextPanel
{
	constexpr uint32_t m_messageText = 0xF20;
}

namespace CInfoOffscreenPanoramaTexture
{
	constexpr uint32_t m_bDisabled = 0x540;
	constexpr uint32_t m_nResolutionX = 0x544;
	constexpr uint32_t m_nResolutionY = 0x548;
	constexpr uint32_t m_szLayoutFileName = 0x550;
	constexpr uint32_t m_RenderAttrName = 0x558;
	constexpr uint32_t m_TargetEntities = 0x560;
	constexpr uint32_t m_nTargetChangeCount = 0x578;
	constexpr uint32_t m_vecCSSClasses = 0x580;
	constexpr uint32_t m_bCheckCSSClasses = 0x6F8;
}

namespace C_EconItemView
{
	constexpr uint32_t m_bInventoryImageRgbaRequested = 0x60;
	constexpr uint32_t m_bInventoryImageTriedCache = 0x61;
	constexpr uint32_t m_nInventoryImageRgbaWidth = 0x80;
	constexpr uint32_t m_nInventoryImageRgbaHeight = 0x84;
	constexpr uint32_t m_szCurrentLoadCachedFileName = 0x88;
	constexpr uint32_t m_bRestoreCustomMaterialAfterPrecache = 0x1B8;
	constexpr uint32_t m_iItemDefinitionIndex = 0x1BA;
	constexpr uint32_t m_iEntityQuality = 0x1BC;
	constexpr uint32_t m_iEntityLevel = 0x1C0;
	constexpr uint32_t m_iItemID = 0x1C8;
	constexpr uint32_t m_iItemIDHigh = 0x1D0;
	constexpr uint32_t m_iItemIDLow = 0x1D4;
	constexpr uint32_t m_iAccountID = 0x1D8;
	constexpr uint32_t m_iInventoryPosition = 0x1DC;
	constexpr uint32_t m_bInitialized = 0x1E8;
	constexpr uint32_t m_bIsStoreItem = 0x1E9;
	constexpr uint32_t m_bIsTradeItem = 0x1EA;
	constexpr uint32_t m_iEntityQuantity = 0x1EC;
	constexpr uint32_t m_iRarityOverride = 0x1F0;
	constexpr uint32_t m_iQualityOverride = 0x1F4;
	constexpr uint32_t m_unClientFlags = 0x1F8;
	constexpr uint32_t m_unOverrideStyle = 0x1F9;
	constexpr uint32_t m_AttributeList = 0x210;
	constexpr uint32_t m_NetworkedDynamicAttributes = 0x270;
	constexpr uint32_t m_szCustomName = 0x2D0;
	constexpr uint32_t m_szCustomNameOverride = 0x371;
	constexpr uint32_t m_bInitializedTags = 0x440;
}

namespace CBombTarget
{
	constexpr uint32_t m_bBombPlantedHere = 0xCC8;
}

namespace CHostageRescueZoneShim
{
}

