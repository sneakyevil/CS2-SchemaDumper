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
	constexpr uint32_t __m_pChainEntity = 0x440;
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
	constexpr uint32_t m_LightGroups = 0x130;
	constexpr uint32_t m_nDirectLight = 0x138;
	constexpr uint32_t m_nIndirectLight = 0x13C;
	constexpr uint32_t m_flFadeMinDist = 0x140;
	constexpr uint32_t m_flFadeMaxDist = 0x144;
	constexpr uint32_t m_flShadowFadeMinDist = 0x148;
	constexpr uint32_t m_flShadowFadeMaxDist = 0x14C;
	constexpr uint32_t m_bEnabled = 0x150;
	constexpr uint32_t m_bFlicker = 0x151;
	constexpr uint32_t m_bPrecomputedFieldsValid = 0x152;
	constexpr uint32_t m_vPrecomputedBoundsMins = 0x154;
	constexpr uint32_t m_vPrecomputedBoundsMaxs = 0x160;
	constexpr uint32_t m_vPrecomputedOBBOrigin = 0x16C;
	constexpr uint32_t m_vPrecomputedOBBAngles = 0x178;
	constexpr uint32_t m_vPrecomputedOBBExtent = 0x184;
	constexpr uint32_t m_flPrecomputedMaxRange = 0x190;
	constexpr uint32_t m_nFogLightingMode = 0x194;
	constexpr uint32_t m_flFogContributionStength = 0x198;
	constexpr uint32_t m_flNearClipPlane = 0x19C;
	constexpr uint32_t m_SkyColor = 0x1A0;
	constexpr uint32_t m_flSkyIntensity = 0x1A4;
	constexpr uint32_t m_SkyAmbientBounce = 0x1A8;
	constexpr uint32_t m_bUseSecondaryColor = 0x1AC;
	constexpr uint32_t m_bMixedShadows = 0x1AD;
	constexpr uint32_t m_flLightStyleStartTime = 0x1B0;
	constexpr uint32_t m_flCapsuleLength = 0x1B4;
	constexpr uint32_t m_flMinRoughness = 0x1B8;
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
	constexpr uint32_t command_number = 0x78;
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
	constexpr uint32_t m_iFOV = 0x40;
	constexpr uint32_t m_iFOVStart = 0x44;
	constexpr uint32_t m_flFOVTime = 0x48;
	constexpr uint32_t m_flFOVRate = 0x4C;
	constexpr uint32_t m_vecPunchAngle = 0x50;
	constexpr uint32_t m_vecPunchAngleVel = 0x68;
	constexpr uint32_t m_nPunchAngleJoltTickClientSide = 0x80;
	constexpr uint32_t m_nPunchAngleJoltTick = 0x84;
	constexpr uint32_t m_hZoomOwner = 0x88;
	constexpr uint32_t m_PlayerFog = 0x90;
	constexpr uint32_t m_hColorCorrectionCtrl = 0xD0;
	constexpr uint32_t m_hViewEntity = 0xD4;
	constexpr uint32_t m_hTonemapController = 0xD8;
	constexpr uint32_t m_audio = 0xE0;
	constexpr uint32_t m_PostProcessingVolumes = 0x158;
	constexpr uint32_t m_flOldPlayerZ = 0x170;
	constexpr uint32_t m_flOldPlayerViewOffsetZ = 0x174;
	constexpr uint32_t m_CurrentFog = 0x178;
	constexpr uint32_t m_hOldFogController = 0x1E0;
	constexpr uint32_t m_bOverrideFogColor = 0x1E4;
	constexpr uint32_t m_OverrideFogColor = 0x1E9;
	constexpr uint32_t m_bOverrideFogStartEnd = 0x1FD;
	constexpr uint32_t m_fOverrideFogStart = 0x204;
	constexpr uint32_t m_fOverrideFogEnd = 0x218;
	constexpr uint32_t m_hActivePostProcessingVolume = 0x22C;
	constexpr uint32_t m_angDemoViewAngles = 0x230;
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
	constexpr uint32_t m_flForceSubtickMoveWhen = 0x194;
	constexpr uint32_t m_flForwardMove = 0x198;
	constexpr uint32_t m_flLeftMove = 0x19C;
	constexpr uint32_t m_flUpMove = 0x1A0;
	constexpr uint32_t m_vecOldViewAngles = 0x1A4;
}

namespace CPlayer_MovementServices_Humanoid
{
	constexpr uint32_t m_flStepSoundTime = 0x1B8;
	constexpr uint32_t m_flFallVelocity = 0x1BC;
	constexpr uint32_t m_bInCrouch = 0x1C0;
	constexpr uint32_t m_nCrouchState = 0x1C4;
	constexpr uint32_t m_flCrouchTransitionStartTime = 0x1C8;
	constexpr uint32_t m_bDucked = 0x1CC;
	constexpr uint32_t m_bDucking = 0x1CD;
	constexpr uint32_t m_bInDuckJump = 0x1CE;
	constexpr uint32_t m_groundNormal = 0x1D0;
	constexpr uint32_t m_flSurfaceFriction = 0x1DC;
	constexpr uint32_t m_surfaceProps = 0x1E0;
	constexpr uint32_t m_nStepside = 0x1F0;
}

namespace CPlayer_ObserverServices
{
	constexpr uint32_t m_iObserverMode = 0x40;
	constexpr uint32_t m_hObserverTarget = 0x44;
	constexpr uint32_t m_iObserverLastMode = 0x48;
	constexpr uint32_t m_bForcedObserverMode = 0x4C;
	constexpr uint32_t m_flObserverChaseDistance = 0x50;
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
	constexpr uint32_t m_animationController = 0x470;
	constexpr uint32_t __m_pChainEntity = 0x1708;
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
	constexpr uint32_t __m_pChainEntity = 0x470;
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
	constexpr uint32_t m_PredNetFloatVariables = 0x80;
	constexpr uint32_t m_PredNetVectorVariables = 0x98;
	constexpr uint32_t m_PredNetQuaternionVariables = 0xB0;
	constexpr uint32_t m_OwnerOnlyPredNetBoolVariables = 0xC8;
	constexpr uint32_t m_OwnerOnlyPredNetByteVariables = 0xE0;
	constexpr uint32_t m_OwnerOnlyPredNetUInt16Variables = 0xF8;
	constexpr uint32_t m_OwnerOnlyPredNetIntVariables = 0x110;
	constexpr uint32_t m_OwnerOnlyPredNetUInt32Variables = 0x128;
	constexpr uint32_t m_OwnerOnlyPredNetFloatVariables = 0x140;
	constexpr uint32_t m_OwnerOnlyPredNetVectorVariables = 0x158;
	constexpr uint32_t m_OwnerOnlyPredNetQuaternionVariables = 0x170;
	constexpr uint32_t m_nBoolVariablesCount = 0x188;
	constexpr uint32_t m_nOwnerOnlyBoolVariablesCount = 0x18C;
	constexpr uint32_t m_nRandomSeedOffset = 0x190;
	constexpr uint32_t m_flLastTeleportTime = 0x1120;
}

namespace C_BaseEntity
{
	constexpr uint32_t m_CBodyComponent = 0x30;
	constexpr uint32_t m_NetworkTransmitComponent = 0x38;
	constexpr uint32_t m_nLastThinkTick = 0x2F8;
	constexpr uint32_t m_pGameSceneNode = 0x300;
	constexpr uint32_t m_pRenderComponent = 0x308;
	constexpr uint32_t m_pCollision = 0x310;
	constexpr uint32_t m_iMaxHealth = 0x318;
	constexpr uint32_t m_iHealth = 0x31C;
	constexpr uint32_t m_lifeState = 0x320;
	constexpr uint32_t m_bTakesDamage = 0x321;
	constexpr uint32_t m_nTakeDamageFlags = 0x324;
	constexpr uint32_t m_ubInterpolationFrame = 0x328;
	constexpr uint32_t m_hSceneObjectController = 0x32C;
	constexpr uint32_t m_nNoInterpolationTick = 0x330;
	constexpr uint32_t m_nVisibilityNoInterpolationTick = 0x334;
	constexpr uint32_t m_flProxyRandomValue = 0x338;
	constexpr uint32_t m_iEFlags = 0x33C;
	constexpr uint32_t m_nWaterType = 0x340;
	constexpr uint32_t m_bInterpolateEvenWithNoModel = 0x341;
	constexpr uint32_t m_bPredictionEligible = 0x342;
	constexpr uint32_t m_bApplyLayerMatchIDToModel = 0x343;
	constexpr uint32_t m_tokLayerMatchID = 0x344;
	constexpr uint32_t m_nSubclassID = 0x348;
	constexpr uint32_t m_nSimulationTick = 0x358;
	constexpr uint32_t m_iCurrentThinkContext = 0x35C;
	constexpr uint32_t m_aThinkFunctions = 0x360;
	constexpr uint32_t m_flAnimTime = 0x378;
	constexpr uint32_t m_flSimulationTime = 0x37C;
	constexpr uint32_t m_nSceneObjectOverrideFlags = 0x380;
	constexpr uint32_t m_bHasSuccessfullyInterpolated = 0x381;
	constexpr uint32_t m_bHasAddedVarsToInterpolation = 0x382;
	constexpr uint32_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x383;
	constexpr uint32_t m_nInterpolationLatchDirtyFlags = 0x384;
	constexpr uint32_t m_ListEntry = 0x38C;
	constexpr uint32_t m_flCreateTime = 0x3A4;
	constexpr uint32_t m_flSpeed = 0x3A8;
	constexpr uint32_t m_EntClientFlags = 0x3AC;
	constexpr uint32_t m_bClientSideRagdoll = 0x3AE;
	constexpr uint32_t m_iTeamNum = 0x3AF;
	constexpr uint32_t m_spawnflags = 0x3B0;
	constexpr uint32_t m_nNextThinkTick = 0x3B4;
	constexpr uint32_t m_fFlags = 0x3B8;
	constexpr uint32_t m_vecAbsVelocity = 0x3BC;
	constexpr uint32_t m_vecVelocity = 0x3C8;
	constexpr uint32_t m_vecBaseVelocity = 0x3F8;
	constexpr uint32_t m_hEffectEntity = 0x404;
	constexpr uint32_t m_hOwnerEntity = 0x408;
	constexpr uint32_t m_MoveCollide = 0x40C;
	constexpr uint32_t m_MoveType = 0x40D;
	constexpr uint32_t m_flWaterLevel = 0x410;
	constexpr uint32_t m_fEffects = 0x414;
	constexpr uint32_t m_hGroundEntity = 0x418;
	constexpr uint32_t m_flFriction = 0x41C;
	constexpr uint32_t m_flElasticity = 0x420;
	constexpr uint32_t m_flGravityScale = 0x424;
	constexpr uint32_t m_flTimeScale = 0x428;
	constexpr uint32_t m_bSimulatedEveryTick = 0x42C;
	constexpr uint32_t m_bAnimatedEveryTick = 0x42D;
	constexpr uint32_t m_nMinCPULevel = 0x42E;
	constexpr uint32_t m_nMaxCPULevel = 0x42F;
	constexpr uint32_t m_nMinGPULevel = 0x430;
	constexpr uint32_t m_nMaxGPULevel = 0x431;
	constexpr uint32_t m_flNavIgnoreUntilTime = 0x434;
	constexpr uint32_t m_hThink = 0x438;
	constexpr uint32_t m_fBBoxVisFlags = 0x448;
	constexpr uint32_t m_bPredictable = 0x449;
	constexpr uint32_t m_bRenderWithViewModels = 0x44A;
	constexpr uint32_t m_nSplitUserPlayerPredictionSlot = 0x44C;
	constexpr uint32_t m_nFirstPredictableCommand = 0x450;
	constexpr uint32_t m_nLastPredictableCommand = 0x454;
	constexpr uint32_t m_hOldMoveParent = 0x458;
	constexpr uint32_t m_Particles = 0x460;
	constexpr uint32_t m_vecPredictedScriptFloats = 0x488;
	constexpr uint32_t m_vecPredictedScriptFloatIDs = 0x4A0;
	constexpr uint32_t m_nNextScriptVarRecordID = 0x4D0;
	constexpr uint32_t m_vecAngVelocity = 0x4E0;
	constexpr uint32_t m_DataChangeEventRef = 0x4EC;
	constexpr uint32_t m_dependencies = 0x4F0;
	constexpr uint32_t m_nCreationTick = 0x508;
	constexpr uint32_t m_bAnimTimeChanged = 0x521;
	constexpr uint32_t m_bSimulationTimeChanged = 0x522;
	constexpr uint32_t m_sUniqueHammerID = 0x530;
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
	constexpr uint32_t m_vecOrigin = 0x538;
	constexpr uint32_t m_MinFalloff = 0x544;
	constexpr uint32_t m_MaxFalloff = 0x548;
	constexpr uint32_t m_flFadeInDuration = 0x54C;
	constexpr uint32_t m_flFadeOutDuration = 0x550;
	constexpr uint32_t m_flMaxWeight = 0x554;
	constexpr uint32_t m_flCurWeight = 0x558;
	constexpr uint32_t m_netlookupFilename = 0x55C;
	constexpr uint32_t m_bEnabled = 0x75C;
	constexpr uint32_t m_bMaster = 0x75D;
	constexpr uint32_t m_bClientSide = 0x75E;
	constexpr uint32_t m_bExclusive = 0x75F;
	constexpr uint32_t m_bEnabledOnClient = 0x760;
	constexpr uint32_t m_flCurWeightOnClient = 0x764;
	constexpr uint32_t m_bFadingIn = 0x768;
	constexpr uint32_t m_flFadeStartWeight = 0x76C;
	constexpr uint32_t m_flFadeStartTime = 0x770;
	constexpr uint32_t m_flFadeDuration = 0x774;
}

namespace C_EnvWindClientside
{
	constexpr uint32_t m_EnvWindShared = 0x538;
}

namespace C_EntityFlame
{
	constexpr uint32_t m_hEntAttached = 0x538;
	constexpr uint32_t m_hOldAttached = 0x560;
	constexpr uint32_t m_bCheapEffect = 0x564;
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
	constexpr uint32_t m_flScale = 0x538;
	constexpr uint32_t m_flStartScale = 0x53C;
	constexpr uint32_t m_flScaleTime = 0x540;
	constexpr uint32_t m_nFlags = 0x544;
}

namespace C_FireSmoke
{
	constexpr uint32_t m_nFlameModelIndex = 0x548;
	constexpr uint32_t m_nFlameFromAboveModelIndex = 0x54C;
	constexpr uint32_t m_flScaleRegister = 0x550;
	constexpr uint32_t m_flScaleStart = 0x554;
	constexpr uint32_t m_flScaleEnd = 0x558;
	constexpr uint32_t m_flScaleTimeStart = 0x55C;
	constexpr uint32_t m_flScaleTimeEnd = 0x560;
	constexpr uint32_t m_flChildFlameSpread = 0x564;
	constexpr uint32_t m_flClipPerc = 0x578;
	constexpr uint32_t m_bClipTested = 0x57C;
	constexpr uint32_t m_bFadingOut = 0x57D;
	constexpr uint32_t m_tParticleSpawn = 0x580;
	constexpr uint32_t m_pFireOverlay = 0x588;
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

namespace C_TriggerCamera
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
	constexpr uint32_t m_worldGroupId = 0x538;
	constexpr uint32_t m_hSkyCamera = 0x53C;
}

namespace C_SkyCamera
{
	constexpr uint32_t m_skyboxData = 0x538;
	constexpr uint32_t m_skyboxSlotToken = 0x5C8;
	constexpr uint32_t m_bUseAngles = 0x5CC;
	constexpr uint32_t m_pNext = 0x5D0;
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
	constexpr uint32_t m_pNext = 0x28;
	constexpr uint32_t m_pPrev = 0x30;
	constexpr uint32_t m_nDecalMaterialIndex = 0x90;
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
	constexpr uint32_t m_flFadeStartDist = 0x538;
	constexpr uint32_t m_flFadeEndDist = 0x53C;
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
	constexpr uint32_t m_LightGroup = 0x5C;
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
	constexpr uint32_t m_bDirty = 0x48;
}

namespace C_SingleplayRules
{
}

namespace C_SoundOpvarSetPointBase
{
	constexpr uint32_t m_iszStackName = 0x538;
	constexpr uint32_t m_iszOperatorName = 0x540;
	constexpr uint32_t m_iszOpvarName = 0x548;
	constexpr uint32_t m_iOpvarIndex = 0x550;
	constexpr uint32_t m_bUseAutoCompare = 0x554;
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
	constexpr uint32_t m_bTimerPaused = 0x538;
	constexpr uint32_t m_flTimeRemaining = 0x53C;
	constexpr uint32_t m_flTimerEndTime = 0x540;
	constexpr uint32_t m_bIsDisabled = 0x544;
	constexpr uint32_t m_bShowInHUD = 0x545;
	constexpr uint32_t m_nTimerLength = 0x548;
	constexpr uint32_t m_nTimerInitialLength = 0x54C;
	constexpr uint32_t m_nTimerMaxLength = 0x550;
	constexpr uint32_t m_bAutoCountdown = 0x554;
	constexpr uint32_t m_nSetupTimeLength = 0x558;
	constexpr uint32_t m_nState = 0x55C;
	constexpr uint32_t m_bStartPaused = 0x560;
	constexpr uint32_t m_bInCaptureWatchState = 0x561;
	constexpr uint32_t m_flTotalTime = 0x564;
	constexpr uint32_t m_bStopWatchTimer = 0x568;
	constexpr uint32_t m_bFireFinished = 0x569;
	constexpr uint32_t m_bFire5MinRemain = 0x56A;
	constexpr uint32_t m_bFire4MinRemain = 0x56B;
	constexpr uint32_t m_bFire3MinRemain = 0x56C;
	constexpr uint32_t m_bFire2MinRemain = 0x56D;
	constexpr uint32_t m_bFire1MinRemain = 0x56E;
	constexpr uint32_t m_bFire30SecRemain = 0x56F;
	constexpr uint32_t m_bFire10SecRemain = 0x570;
	constexpr uint32_t m_bFire5SecRemain = 0x571;
	constexpr uint32_t m_bFire4SecRemain = 0x572;
	constexpr uint32_t m_bFire3SecRemain = 0x573;
	constexpr uint32_t m_bFire2SecRemain = 0x574;
	constexpr uint32_t m_bFire1SecRemain = 0x575;
	constexpr uint32_t m_nOldTimerLength = 0x578;
	constexpr uint32_t m_nOldTimerState = 0x57C;
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
	constexpr uint32_t m_pGameRules = 0x538;
}

namespace C_CSGameRules
{
	constexpr uint32_t __m_pChainEntity = 0x8;
	constexpr uint32_t m_bFreezePeriod = 0x30;
	constexpr uint32_t m_bWarmupPeriod = 0x31;
	constexpr uint32_t m_fWarmupPeriodEnd = 0x34;
	constexpr uint32_t m_fWarmupPeriodStart = 0x38;
	constexpr uint32_t m_bTerroristTimeOutActive = 0x3C;
	constexpr uint32_t m_bCTTimeOutActive = 0x3D;
	constexpr uint32_t m_flTerroristTimeOutRemaining = 0x40;
	constexpr uint32_t m_flCTTimeOutRemaining = 0x44;
	constexpr uint32_t m_nTerroristTimeOuts = 0x48;
	constexpr uint32_t m_nCTTimeOuts = 0x4C;
	constexpr uint32_t m_bTechnicalTimeOut = 0x50;
	constexpr uint32_t m_bMatchWaitingForResume = 0x51;
	constexpr uint32_t m_iRoundTime = 0x54;
	constexpr uint32_t m_fMatchStartTime = 0x58;
	constexpr uint32_t m_fRoundStartTime = 0x5C;
	constexpr uint32_t m_flRestartRoundTime = 0x60;
	constexpr uint32_t m_bGameRestart = 0x64;
	constexpr uint32_t m_flGameStartTime = 0x68;
	constexpr uint32_t m_timeUntilNextPhaseStarts = 0x6C;
	constexpr uint32_t m_gamePhase = 0x70;
	constexpr uint32_t m_totalRoundsPlayed = 0x74;
	constexpr uint32_t m_nRoundsPlayedThisPhase = 0x78;
	constexpr uint32_t m_nOvertimePlaying = 0x7C;
	constexpr uint32_t m_iHostagesRemaining = 0x80;
	constexpr uint32_t m_bAnyHostageReached = 0x84;
	constexpr uint32_t m_bMapHasBombTarget = 0x85;
	constexpr uint32_t m_bMapHasRescueZone = 0x86;
	constexpr uint32_t m_bMapHasBuyZone = 0x87;
	constexpr uint32_t m_bIsQueuedMatchmaking = 0x88;
	constexpr uint32_t m_nQueuedMatchmakingMode = 0x8C;
	constexpr uint32_t m_bIsValveDS = 0x90;
	constexpr uint32_t m_bLogoMap = 0x91;
	constexpr uint32_t m_bPlayAllStepSoundsOnServer = 0x92;
	constexpr uint32_t m_iNumGunGameProgressiveWeaponsCT = 0x94;
	constexpr uint32_t m_iNumGunGameProgressiveWeaponsT = 0x98;
	constexpr uint32_t m_iSpectatorSlotCount = 0x9C;
	constexpr uint32_t m_GGProgressiveWeaponOrderCT = 0xA0;
	constexpr uint32_t m_GGProgressiveWeaponOrderT = 0x190;
	constexpr uint32_t m_GGProgressiveWeaponKillUpgradeOrderCT = 0x280;
	constexpr uint32_t m_GGProgressiveWeaponKillUpgradeOrderT = 0x370;
	constexpr uint32_t m_MatchDevice = 0x460;
	constexpr uint32_t m_bHasMatchStarted = 0x464;
	constexpr uint32_t m_flDMBonusStartTime = 0x468;
	constexpr uint32_t m_flDMBonusTimeLength = 0x46C;
	constexpr uint32_t m_unDMBonusWeaponLoadoutSlot = 0x470;
	constexpr uint32_t m_bDMBonusActive = 0x472;
	constexpr uint32_t m_nNextMapInMapgroup = 0x474;
	constexpr uint32_t m_szTournamentEventName = 0x478;
	constexpr uint32_t m_szTournamentEventStage = 0x678;
	constexpr uint32_t m_szMatchStatTxt = 0x878;
	constexpr uint32_t m_szTournamentPredictionsTxt = 0xA78;
	constexpr uint32_t m_nTournamentPredictionsPct = 0xC78;
	constexpr uint32_t m_flCMMItemDropRevealStartTime = 0xC7C;
	constexpr uint32_t m_flCMMItemDropRevealEndTime = 0xC80;
	constexpr uint32_t m_bIsDroppingItems = 0xC84;
	constexpr uint32_t m_bIsQuestEligible = 0xC85;
	constexpr uint32_t m_nGuardianModeWaveNumber = 0xC88;
	constexpr uint32_t m_nGuardianModeSpecialKillsRemaining = 0xC8C;
	constexpr uint32_t m_nGuardianModeSpecialWeaponNeeded = 0xC90;
	constexpr uint32_t m_nGuardianGrenadesToGiveBots = 0xC94;
	constexpr uint32_t m_nNumHeaviesToSpawn = 0xC98;
	constexpr uint32_t m_numGlobalGiftsGiven = 0xC9C;
	constexpr uint32_t m_numGlobalGifters = 0xCA0;
	constexpr uint32_t m_numGlobalGiftsPeriodSeconds = 0xCA4;
	constexpr uint32_t m_arrFeaturedGiftersAccounts = 0xCA8;
	constexpr uint32_t m_arrFeaturedGiftersGifts = 0xCB8;
	constexpr uint32_t m_arrProhibitedItemIndices = 0xCC8;
	constexpr uint32_t m_arrTournamentActiveCasterAccounts = 0xD90;
	constexpr uint32_t m_numBestOfMaps = 0xDA0;
	constexpr uint32_t m_nHalloweenMaskListSeed = 0xDA4;
	constexpr uint32_t m_bBombDropped = 0xDA8;
	constexpr uint32_t m_bBombPlanted = 0xDA9;
	constexpr uint32_t m_iRoundWinStatus = 0xDAC;
	constexpr uint32_t m_eRoundWinReason = 0xDB0;
	constexpr uint32_t m_bTCantBuy = 0xDB4;
	constexpr uint32_t m_bCTCantBuy = 0xDB5;
	constexpr uint32_t m_flGuardianBuyUntilTime = 0xDB8;
	constexpr uint32_t m_iMatchStats_RoundResults = 0xDBC;
	constexpr uint32_t m_iMatchStats_PlayersAlive_CT = 0xE34;
	constexpr uint32_t m_iMatchStats_PlayersAlive_T = 0xEAC;
	constexpr uint32_t m_TeamRespawnWaveTimes = 0xF24;
	constexpr uint32_t m_flNextRespawnWave = 0xFA4;
	constexpr uint32_t m_nServerQuestID = 0x1024;
	constexpr uint32_t m_bDontIncrementCoopWave = 0x1028;
	constexpr uint32_t m_bSpawnedTerrorHuntHeavy = 0x1029;
	constexpr uint32_t m_nEndMatchMapGroupVoteTypes = 0x102C;
	constexpr uint32_t m_nEndMatchMapGroupVoteOptions = 0x1054;
	constexpr uint32_t m_nEndMatchMapVoteWinner = 0x107C;
	constexpr uint32_t m_iNumConsecutiveCTLoses = 0x1080;
	constexpr uint32_t m_iNumConsecutiveTerroristLoses = 0x1084;
	constexpr uint32_t m_bMarkClientStopRecordAtRoundEnd = 0x10A0;
	constexpr uint32_t m_bHasTriggeredRoundStartMusic = 0x10F8;
	constexpr uint32_t m_bHasTriggeredCoopSpawnReset = 0x10F9;
	constexpr uint32_t m_bSwitchingTeamsAtRoundReset = 0x10FA;
	constexpr uint32_t m_iMaxGunGameProgressiveWeaponIndex = 0x10FC;
	constexpr uint32_t m_SurvivalRules = 0x1118;
	constexpr uint32_t m_RetakeRules = 0x17D8;
	constexpr uint32_t m_nMatchEndCount = 0x18F0;
	constexpr uint32_t m_bTeamIntroPeriod = 0x18F1;
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
	constexpr uint32_t m_nOrdinal = 0x538;
	constexpr uint32_t m_sWeaponName = 0x540;
	constexpr uint32_t m_xuid = 0x548;
	constexpr uint32_t m_weaponItem = 0x550;
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

namespace CCSPlayer_ActionTrackingServices
{
	constexpr uint32_t m_bIsRescuing = 0x40;
	constexpr uint32_t m_iWeaponPurchasesThisMatch = 0x44;
	constexpr uint32_t m_iWeaponPurchasesThisRound = 0x444;
}

namespace C_PlayerPing
{
	constexpr uint32_t m_hPlayer = 0x568;
	constexpr uint32_t m_hPingedEntity = 0x56C;
	constexpr uint32_t m_iType = 0x570;
	constexpr uint32_t m_bUrgent = 0x574;
	constexpr uint32_t m_szPlaceName = 0x575;
}

namespace CCSPlayer_PingServices
{
	constexpr uint32_t m_hPlayerPing = 0x40;
}

namespace C_CSPlayerResource
{
	constexpr uint32_t m_bHostageAlive = 0x538;
	constexpr uint32_t m_isHostageFollowingSomeone = 0x544;
	constexpr uint32_t m_iHostageEntityIDs = 0x550;
	constexpr uint32_t m_bombsiteCenterA = 0x580;
	constexpr uint32_t m_bombsiteCenterB = 0x58C;
	constexpr uint32_t m_hostageRescueX = 0x598;
	constexpr uint32_t m_hostageRescueY = 0x5A8;
	constexpr uint32_t m_hostageRescueZ = 0x5B8;
	constexpr uint32_t m_bEndMatchNextMapAllVoted = 0x5C8;
	constexpr uint32_t m_foundGoalPositions = 0x5C9;
}

namespace CCSPlayer_BulletServices
{
	constexpr uint32_t m_totalHitsOnServer = 0x40;
}

namespace CCSPlayer_CameraServices
{
	constexpr uint32_t m_flLastShotFOV = 0x248;
	constexpr uint32_t m_flDeathCamTilt = 0x24C;
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
	constexpr uint32_t m_flMaxFallVelocity = 0x1F8;
	constexpr uint32_t m_vecLadderNormal = 0x1FC;
	constexpr uint32_t m_nLadderSurfacePropIndex = 0x208;
	constexpr uint32_t m_bAllowAutoMovement = 0x20C;
	constexpr uint32_t m_flDuckAmount = 0x210;
	constexpr uint32_t m_flDuckSpeed = 0x214;
	constexpr uint32_t m_bDuckOverride = 0x218;
	constexpr uint32_t m_flDuckOffset = 0x21C;
	constexpr uint32_t m_nDuckTimeMsecs = 0x220;
	constexpr uint32_t m_nDuckJumpTimeMsecs = 0x224;
	constexpr uint32_t m_nJumpTimeMsecs = 0x228;
	constexpr uint32_t m_flLastDuckTime = 0x22C;
	constexpr uint32_t m_vecLastPositionAtFullCrouchSpeed = 0x238;
	constexpr uint32_t m_duckUntilOnGround = 0x240;
	constexpr uint32_t m_bHasWalkMovedSinceLastJump = 0x241;
	constexpr uint32_t m_bInStuckTest = 0x242;
	constexpr uint32_t m_CachedGetPointContents = 0x248;
	constexpr uint32_t m_CachedGetPointContentsPoint = 0x848;
	constexpr uint32_t m_flStuckCheckTime = 0x1150;
	constexpr uint32_t m_nTraceCount = 0x1350;
	constexpr uint32_t m_StuckLast = 0x1354;
	constexpr uint32_t m_bSpeedCropped = 0x1358;
	constexpr uint32_t m_nOldWaterLevel = 0x135C;
	constexpr uint32_t m_flWaterEntryTime = 0x1360;
	constexpr uint32_t m_vecForward = 0x1364;
	constexpr uint32_t m_vecLeft = 0x1370;
	constexpr uint32_t m_vecUp = 0x137C;
	constexpr uint32_t m_vecPreviouslyPredictedOrigin = 0x1388;
	constexpr uint32_t m_bOldJumpPressed = 0x1394;
	constexpr uint32_t m_flJumpUntil = 0x1398;
	constexpr uint32_t m_flJumpVel = 0x139C;
	constexpr uint32_t m_fStashGrenadeParameterWhen = 0x13A0;
	constexpr uint32_t m_bUpdatePredictedOriginAfterDataUpdate = 0x13A4;
}

namespace CCSPlayer_ObserverServices
{
	constexpr uint32_t m_hLastObserverTarget = 0x58;
	constexpr uint32_t m_vecObserverInterpolateOffset = 0x5C;
	constexpr uint32_t m_vecObserverInterpStartPos = 0x68;
	constexpr uint32_t m_flObsInterp_PathLength = 0x74;
	constexpr uint32_t m_qObsInterp_OrientationStart = 0x80;
	constexpr uint32_t m_qObsInterp_OrientationTravelDir = 0x90;
	constexpr uint32_t m_obsInterpState = 0xA0;
	constexpr uint32_t m_bObserverInterpolationNeedsDeferredSetup = 0xA4;
	constexpr uint32_t m_nLastKillerDamageTaken = 0xA8;
	constexpr uint32_t m_nLastKillerHitsTaken = 0xAC;
	constexpr uint32_t m_nLastKillerDamageGiven = 0xB0;
	constexpr uint32_t m_nLastKillerHitsGiven = 0xB4;
	constexpr uint32_t m_nLastKillerActualDamageGiven = 0xB8;
	constexpr uint32_t m_nLastKillerActualDamageTaken = 0xBC;
	constexpr uint32_t m_bCanShowDeathPanelNow = 0xC0;
	constexpr uint32_t m_bWasShowingDeathPanel = 0xC1;
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
	constexpr uint32_t m_flNextAttack = 0xA8;
	constexpr uint32_t m_bIsLookingAtWeapon = 0xAC;
	constexpr uint32_t m_bIsHoldingLookAtWeapon = 0xAD;
}

namespace CCSPlayerController_ActionTrackingServices
{
	constexpr uint32_t m_perRoundStats = 0x40;
	constexpr uint32_t m_matchStats = 0x90;
	constexpr uint32_t m_iNumRoundKills = 0x108;
	constexpr uint32_t m_iNumRoundKillsHeadshots = 0x10C;
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
	constexpr uint32_t m_nCachedSendUpdate = 0x44;
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

namespace CCSPlayerController_InventoryServices
{
	constexpr uint32_t m_unMusicID = 0x40;
	constexpr uint32_t m_rank = 0x44;
	constexpr uint32_t m_nPersonaDataPublicLevel = 0x5C;
	constexpr uint32_t m_nPersonaDataPublicCommendsLeader = 0x60;
	constexpr uint32_t m_nPersonaDataPublicCommendsTeacher = 0x64;
	constexpr uint32_t m_nPersonaDataPublicCommendsFriendly = 0x68;
	constexpr uint32_t m_vecTerroristLoadoutCache = 0x70;
	constexpr uint32_t m_vecCounterTerroristLoadoutCache = 0xC0;
}

namespace C_SurvivalGameRules
{
	constexpr uint32_t m_vecPlayAreaMins = 0x8;
	constexpr uint32_t m_vecPlayAreaMaxs = 0x14;
	constexpr uint32_t m_iPlayerSpawnHexIndices = 0x20;
	constexpr uint32_t m_SpawnTileState = 0x120;
	constexpr uint32_t m_flSpawnSelectionTimeStartCurrentStage = 0x200;
	constexpr uint32_t m_flSpawnSelectionTimeEndCurrentStage = 0x204;
	constexpr uint32_t m_flSpawnSelectionTimeEndLastStage = 0x208;
	constexpr uint32_t m_spawnStage = 0x20C;
	constexpr uint32_t m_flTabletHexOriginX = 0x210;
	constexpr uint32_t m_flTabletHexOriginY = 0x214;
	constexpr uint32_t m_flTabletHexSize = 0x218;
	constexpr uint32_t m_roundData_playerXuids = 0x220;
	constexpr uint32_t m_roundData_playerPositions = 0x420;
	constexpr uint32_t m_roundData_playerTeams = 0x520;
	constexpr uint32_t m_SurvivalGameRuleDecisionTypes = 0x620;
	constexpr uint32_t m_SurvivalGameRuleDecisionValues = 0x660;
	constexpr uint32_t m_flSurvivalStartTime = 0x6A0;
	constexpr uint32_t m_flLastThinkTime = 0x6A4;
}

namespace C_DangerZone
{
	constexpr uint32_t m_vecDangerZoneOriginStartedAt = 0x538;
	constexpr uint32_t m_flBombLaunchTime = 0x544;
	constexpr uint32_t m_flExtraRadius = 0x548;
	constexpr uint32_t m_flExtraRadiusStartTime = 0x54C;
	constexpr uint32_t m_flExtraRadiusTotalLerpTime = 0x550;
	constexpr uint32_t m_nDropOrder = 0x554;
	constexpr uint32_t m_iWave = 0x558;
}

namespace C_DangerZoneController
{
	constexpr uint32_t m_bDangerZoneControllerEnabled = 0x538;
	constexpr uint32_t m_bMissionControlledExplosions = 0x539;
	constexpr uint32_t m_vecEndGameCircleStart = 0x53C;
	constexpr uint32_t m_vecEndGameCircleEnd = 0x548;
	constexpr uint32_t m_flStartTime = 0x554;
	constexpr uint32_t m_flFinalExpansionTime = 0x558;
	constexpr uint32_t m_DangerZones = 0x55C;
	constexpr uint32_t m_flWaveEndTimes = 0x604;
	constexpr uint32_t m_hTheFinalZone = 0x618;
}

namespace C_GrassBurn
{
	constexpr uint32_t m_flGrassBurnClearTime = 0x538;
	constexpr uint32_t m_bClientPendingClear = 0x53C;
	constexpr uint32_t m_flGrassBurnClearTimeLocal = 0x540;
	constexpr uint32_t m_vecGrassBurnPositions = 0x548;
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
	constexpr uint32_t m_nVariableType = 0x20;
	constexpr uint32_t m_bValueBoolean = 0x24;
	constexpr uint32_t m_nValueIntX = 0x28;
	constexpr uint32_t m_nValueIntY = 0x2C;
	constexpr uint32_t m_nValueIntZ = 0x30;
	constexpr uint32_t m_nValueIntW = 0x34;
	constexpr uint32_t m_bHasFloatBounds = 0x38;
	constexpr uint32_t m_flValueFloatX = 0x3C;
	constexpr uint32_t m_flValueFloatX_Min = 0x40;
	constexpr uint32_t m_flValueFloatX_Max = 0x44;
	constexpr uint32_t m_flValueFloatY = 0x48;
	constexpr uint32_t m_flValueFloatY_Min = 0x4C;
	constexpr uint32_t m_flValueFloatY_Max = 0x50;
	constexpr uint32_t m_flValueFloatZ = 0x54;
	constexpr uint32_t m_flValueFloatZ_Min = 0x58;
	constexpr uint32_t m_flValueFloatZ_Max = 0x5C;
	constexpr uint32_t m_flValueFloatW = 0x60;
	constexpr uint32_t m_flValueFloatW_Min = 0x64;
	constexpr uint32_t m_flValueFloatW_Max = 0x68;
	constexpr uint32_t m_cValueColor4 = 0x6C;
	constexpr uint32_t m_nValueSystemVar = 0x70;
	constexpr uint32_t m_strResourceMaterial = 0x78;
	constexpr uint32_t m_strTextureContentAssetPath = 0x158;
	constexpr uint32_t m_strTextureRuntimeResourcePath = 0x160;
	constexpr uint32_t m_strTextureCompilationVtexTemplate = 0x240;
	constexpr uint32_t m_nTextureType = 0x248;
	constexpr uint32_t m_strString = 0x250;
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
	constexpr uint32_t m_strGenerateTexture_TargetParam = 0x2C0;
	constexpr uint32_t m_strGenerateTexture_InitialContainer = 0x2C8;
	constexpr uint32_t m_nResolution = 0x2D0;
	constexpr uint32_t m_bSplatDebugInfo = 0x2D4;
	constexpr uint32_t m_bCaptureInRenderDoc = 0x2D5;
	constexpr uint32_t m_vecTexGenInstructions = 0x2D8;
	constexpr uint32_t m_vecConditionalMutators = 0x2F0;
	constexpr uint32_t m_strPopInputQueue_Container = 0x308;
	constexpr uint32_t m_strDrawText_InputContainerSrc = 0x310;
	constexpr uint32_t m_strDrawText_InputContainerProperty = 0x318;
	constexpr uint32_t m_vecDrawText_Position = 0x320;
	constexpr uint32_t m_vecConditions = 0x328;
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
	constexpr uint32_t m_strBitmapName = 0x8;
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
	constexpr uint32_t m_flAmbientScale1 = 0xA4;
	constexpr uint32_t m_flAmbientScale2 = 0xA8;
	constexpr uint32_t m_flGroundScale = 0xAC;
	constexpr uint32_t m_flLightScale = 0xB0;
	constexpr uint32_t m_flFoWDarkness = 0xB4;
	constexpr uint32_t m_bEnableSeparateSkyboxFog = 0xB8;
	constexpr uint32_t m_vFowColor = 0xBC;
	constexpr uint32_t m_ViewOrigin = 0xC8;
	constexpr uint32_t m_ViewAngles = 0xD4;
	constexpr uint32_t m_flViewFoV = 0xE0;
	constexpr uint32_t m_WorldPoints = 0xE4;
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
	constexpr uint32_t m_szParentPathUniqueID = 0x538;
	constexpr uint32_t m_nPathIndex = 0x540;
	constexpr uint32_t m_vInTangentLocal = 0x544;
	constexpr uint32_t m_vOutTangentLocal = 0x550;
	constexpr uint32_t m_flFOV = 0x55C;
	constexpr uint32_t m_flSpeed = 0x560;
	constexpr uint32_t m_flEaseIn = 0x564;
	constexpr uint32_t m_flEaseOut = 0x568;
	constexpr uint32_t m_vInTangentWorld = 0x56C;
	constexpr uint32_t m_vOutTangentWorld = 0x578;
}

namespace C_CSGO_MapPreviewCameraPath
{
	constexpr uint32_t m_flZFar = 0x538;
	constexpr uint32_t m_flZNear = 0x53C;
	constexpr uint32_t m_bLoop = 0x540;
	constexpr uint32_t m_bVerticalFOV = 0x541;
	constexpr uint32_t m_bConstantSpeed = 0x542;
	constexpr uint32_t m_flDuration = 0x544;
	constexpr uint32_t m_flPathLength = 0x588;
	constexpr uint32_t m_flPathDuration = 0x58C;
}

namespace CCSPlayer_GlowServices
{
}

namespace C_VoteController
{
	constexpr uint32_t m_iActiveIssueIndex = 0x548;
	constexpr uint32_t m_iOnlyTeamToVote = 0x54C;
	constexpr uint32_t m_nVoteOptionCount = 0x550;
	constexpr uint32_t m_nPotentialVotes = 0x564;
	constexpr uint32_t m_bVotesDirty = 0x568;
	constexpr uint32_t m_bTypeDirty = 0x569;
	constexpr uint32_t m_bIsYesNoVote = 0x56A;
}

namespace C_MapVetoPickController
{
	constexpr uint32_t m_nDraftType = 0x548;
	constexpr uint32_t m_nTeamWinningCoinToss = 0x54C;
	constexpr uint32_t m_nTeamWithFirstChoice = 0x550;
	constexpr uint32_t m_nVoteMapIdsList = 0x650;
	constexpr uint32_t m_nAccountIDs = 0x66C;
	constexpr uint32_t m_nMapId0 = 0x76C;
	constexpr uint32_t m_nMapId1 = 0x86C;
	constexpr uint32_t m_nMapId2 = 0x96C;
	constexpr uint32_t m_nMapId3 = 0xA6C;
	constexpr uint32_t m_nMapId4 = 0xB6C;
	constexpr uint32_t m_nMapId5 = 0xC6C;
	constexpr uint32_t m_nStartingSide0 = 0xD6C;
	constexpr uint32_t m_nCurrentPhase = 0xE6C;
	constexpr uint32_t m_nPhaseStartTick = 0xE70;
	constexpr uint32_t m_nPhaseDurationTicks = 0xE74;
	constexpr uint32_t m_nPostDataUpdateTick = 0xE78;
	constexpr uint32_t m_bDisabledHud = 0xE7C;
}

namespace CPlayerSprayDecalRenderHelper
{
}

namespace C_CSGO_TeamPreviewCamera
{
	constexpr uint32_t m_bDofEnabled = 0x598;
	constexpr uint32_t m_flDofNearBlurry = 0x59C;
	constexpr uint32_t m_flDofNearCrisp = 0x5A0;
	constexpr uint32_t m_flDofFarCrisp = 0x5A4;
	constexpr uint32_t m_flDofFarBlurry = 0x5A8;
	constexpr uint32_t m_flDofTiltToGround = 0x5AC;
}

namespace C_CSGO_TeamSelectCamera
{
}

namespace C_CSGO_TerroristTeamIntroCamera
{
}

namespace C_CSGO_CounterTerroristTeamIntroCamera
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

namespace C_InfoMapRegion
{
	constexpr uint32_t m_flRadius = 0x538;
	constexpr uint32_t m_szLocToken = 0x53C;
	constexpr uint32_t m_pNext = 0x5C0;
}

namespace C_PointEntity
{
}

namespace C_EnvCombinedLightProbeVolume
{
	constexpr uint32_t m_Color = 0x1608;
	constexpr uint32_t m_flBrightness = 0x160C;
	constexpr uint32_t m_hCubemapTexture = 0x1610;
	constexpr uint32_t m_bCustomCubemapTexture = 0x1618;
	constexpr uint32_t m_hLightProbeTexture = 0x1620;
	constexpr uint32_t m_hLightProbeDirectLightIndicesTexture = 0x1628;
	constexpr uint32_t m_hLightProbeDirectLightScalarsTexture = 0x1630;
	constexpr uint32_t m_hLightProbeDirectLightShadowsTexture = 0x1638;
	constexpr uint32_t m_vBoxMins = 0x1640;
	constexpr uint32_t m_vBoxMaxs = 0x164C;
	constexpr uint32_t m_LightGroups = 0x1658;
	constexpr uint32_t m_bMoveable = 0x1660;
	constexpr uint32_t m_nHandshake = 0x1664;
	constexpr uint32_t m_nEnvCubeMapArrayIndex = 0x1668;
	constexpr uint32_t m_nPriority = 0x166C;
	constexpr uint32_t m_bStartDisabled = 0x1670;
	constexpr uint32_t m_flEdgeFadeDist = 0x1674;
	constexpr uint32_t m_vEdgeFadeDists = 0x1678;
	constexpr uint32_t m_nLightProbeSizeX = 0x1684;
	constexpr uint32_t m_nLightProbeSizeY = 0x1688;
	constexpr uint32_t m_nLightProbeSizeZ = 0x168C;
	constexpr uint32_t m_nLightProbeAtlasX = 0x1690;
	constexpr uint32_t m_nLightProbeAtlasY = 0x1694;
	constexpr uint32_t m_nLightProbeAtlasZ = 0x1698;
	constexpr uint32_t m_bEnabled = 0x16B1;
}

namespace C_EnvCubemap
{
	constexpr uint32_t m_hCubemapTexture = 0x628;
	constexpr uint32_t m_bCustomCubemapTexture = 0x630;
	constexpr uint32_t m_flInfluenceRadius = 0x634;
	constexpr uint32_t m_vBoxProjectMins = 0x638;
	constexpr uint32_t m_vBoxProjectMaxs = 0x644;
	constexpr uint32_t m_LightGroups = 0x650;
	constexpr uint32_t m_bMoveable = 0x658;
	constexpr uint32_t m_nHandshake = 0x65C;
	constexpr uint32_t m_nEnvCubeMapArrayIndex = 0x660;
	constexpr uint32_t m_nPriority = 0x664;
	constexpr uint32_t m_flEdgeFadeDist = 0x668;
	constexpr uint32_t m_vEdgeFadeDists = 0x66C;
	constexpr uint32_t m_flDiffuseScale = 0x678;
	constexpr uint32_t m_bStartDisabled = 0x67C;
	constexpr uint32_t m_bDefaultEnvMap = 0x67D;
	constexpr uint32_t m_bDefaultSpecEnvMap = 0x67E;
	constexpr uint32_t m_bIndoorCubeMap = 0x67F;
	constexpr uint32_t m_bCopyDiffuseFromDefaultCubemap = 0x680;
	constexpr uint32_t m_bEnabled = 0x690;
}

namespace C_EnvCubemapBox
{
}

namespace C_EnvCubemapFog
{
	constexpr uint32_t m_flEndDistance = 0x538;
	constexpr uint32_t m_flStartDistance = 0x53C;
	constexpr uint32_t m_flFogFalloffExponent = 0x540;
	constexpr uint32_t m_bHeightFogEnabled = 0x544;
	constexpr uint32_t m_flFogHeightWidth = 0x548;
	constexpr uint32_t m_flFogHeightEnd = 0x54C;
	constexpr uint32_t m_flFogHeightStart = 0x550;
	constexpr uint32_t m_flFogHeightExponent = 0x554;
	constexpr uint32_t m_flLODBias = 0x558;
	constexpr uint32_t m_bActive = 0x55C;
	constexpr uint32_t m_bStartDisabled = 0x55D;
	constexpr uint32_t m_flFogMaxOpacity = 0x560;
	constexpr uint32_t m_nCubemapSourceType = 0x564;
	constexpr uint32_t m_hSkyMaterial = 0x568;
	constexpr uint32_t m_iszSkyEntity = 0x570;
	constexpr uint32_t m_hFogCubemapTexture = 0x578;
	constexpr uint32_t m_bHasHeightFogEnd = 0x580;
	constexpr uint32_t m_bFirstTime = 0x581;
}

namespace C_GradientFog
{
	constexpr uint32_t m_hGradientFogTexture = 0x538;
	constexpr uint32_t m_flFogStartDistance = 0x540;
	constexpr uint32_t m_flFogEndDistance = 0x544;
	constexpr uint32_t m_bHeightFogEnabled = 0x548;
	constexpr uint32_t m_flFogStartHeight = 0x54C;
	constexpr uint32_t m_flFogEndHeight = 0x550;
	constexpr uint32_t m_flFarZ = 0x554;
	constexpr uint32_t m_flFogMaxOpacity = 0x558;
	constexpr uint32_t m_flFogFalloffExponent = 0x55C;
	constexpr uint32_t m_flFogVerticalExponent = 0x560;
	constexpr uint32_t m_fogColor = 0x564;
	constexpr uint32_t m_flFogStrength = 0x568;
	constexpr uint32_t m_flFadeTime = 0x56C;
	constexpr uint32_t m_bStartDisabled = 0x570;
	constexpr uint32_t m_bIsEnabled = 0x571;
	constexpr uint32_t m_bGradientFogNeedsTextures = 0x572;
}

namespace C_EnvLightProbeVolume
{
	constexpr uint32_t m_hLightProbeTexture = 0x1518;
	constexpr uint32_t m_hLightProbeDirectLightIndicesTexture = 0x1520;
	constexpr uint32_t m_hLightProbeDirectLightScalarsTexture = 0x1528;
	constexpr uint32_t m_hLightProbeDirectLightShadowsTexture = 0x1530;
	constexpr uint32_t m_vBoxMins = 0x1538;
	constexpr uint32_t m_vBoxMaxs = 0x1544;
	constexpr uint32_t m_LightGroups = 0x1550;
	constexpr uint32_t m_bMoveable = 0x1558;
	constexpr uint32_t m_nHandshake = 0x155C;
	constexpr uint32_t m_nPriority = 0x1560;
	constexpr uint32_t m_bStartDisabled = 0x1564;
	constexpr uint32_t m_nLightProbeSizeX = 0x1568;
	constexpr uint32_t m_nLightProbeSizeY = 0x156C;
	constexpr uint32_t m_nLightProbeSizeZ = 0x1570;
	constexpr uint32_t m_nLightProbeAtlasX = 0x1574;
	constexpr uint32_t m_nLightProbeAtlasY = 0x1578;
	constexpr uint32_t m_nLightProbeAtlasZ = 0x157C;
	constexpr uint32_t m_bEnabled = 0x1589;
}

namespace C_TonemapController2
{
	constexpr uint32_t m_flAutoExposureMin = 0x538;
	constexpr uint32_t m_flAutoExposureMax = 0x53C;
	constexpr uint32_t m_flTonemapPercentTarget = 0x540;
	constexpr uint32_t m_flTonemapPercentBrightPixels = 0x544;
	constexpr uint32_t m_flTonemapMinAvgLum = 0x548;
	constexpr uint32_t m_flExposureAdaptationSpeedUp = 0x54C;
	constexpr uint32_t m_flExposureAdaptationSpeedDown = 0x550;
	constexpr uint32_t m_flTonemapEVSmoothingRange = 0x554;
}

namespace C_EnvVolumetricFogController
{
	constexpr uint32_t m_flScattering = 0x538;
	constexpr uint32_t m_flAnisotropy = 0x53C;
	constexpr uint32_t m_flFadeSpeed = 0x540;
	constexpr uint32_t m_flDrawDistance = 0x544;
	constexpr uint32_t m_flFadeInStart = 0x548;
	constexpr uint32_t m_flFadeInEnd = 0x54C;
	constexpr uint32_t m_flIndirectStrength = 0x550;
	constexpr uint32_t m_nIndirectTextureDimX = 0x554;
	constexpr uint32_t m_nIndirectTextureDimY = 0x558;
	constexpr uint32_t m_nIndirectTextureDimZ = 0x55C;
	constexpr uint32_t m_vBoxMins = 0x560;
	constexpr uint32_t m_vBoxMaxs = 0x56C;
	constexpr uint32_t m_bActive = 0x578;
	constexpr uint32_t m_flStartAnisoTime = 0x57C;
	constexpr uint32_t m_flStartScatterTime = 0x580;
	constexpr uint32_t m_flStartDrawDistanceTime = 0x584;
	constexpr uint32_t m_flStartAnisotropy = 0x588;
	constexpr uint32_t m_flStartScattering = 0x58C;
	constexpr uint32_t m_flStartDrawDistance = 0x590;
	constexpr uint32_t m_flDefaultAnisotropy = 0x594;
	constexpr uint32_t m_flDefaultScattering = 0x598;
	constexpr uint32_t m_flDefaultDrawDistance = 0x59C;
	constexpr uint32_t m_bStartDisabled = 0x5A0;
	constexpr uint32_t m_bEnableIndirect = 0x5A1;
	constexpr uint32_t m_bIsMaster = 0x5A2;
	constexpr uint32_t m_hFogIndirectTexture = 0x5A8;
	constexpr uint32_t m_nForceRefreshCount = 0x5B0;
	constexpr uint32_t m_bFirstTime = 0x5B4;
}

namespace C_EnvVolumetricFogVolume
{
	constexpr uint32_t m_bActive = 0x538;
	constexpr uint32_t m_vBoxMins = 0x53C;
	constexpr uint32_t m_vBoxMaxs = 0x548;
	constexpr uint32_t m_bStartDisabled = 0x554;
	constexpr uint32_t m_flStrength = 0x558;
	constexpr uint32_t m_nFalloffShape = 0x55C;
	constexpr uint32_t m_flFalloffExponent = 0x560;
}

namespace C_FogController
{
	constexpr uint32_t m_fog = 0x538;
	constexpr uint32_t m_bUseAngles = 0x5A0;
	constexpr uint32_t m_iChangedVariables = 0x5A4;
}

namespace CInfoTarget
{
}

namespace CInfoParticleTarget
{
}

namespace C_InfoVisibilityBox
{
	constexpr uint32_t m_nMode = 0x53C;
	constexpr uint32_t m_vBoxSize = 0x540;
	constexpr uint32_t m_bEnabled = 0x54C;
}

namespace CInfoWorldLayer
{
	constexpr uint32_t m_pOutputOnEntitiesSpawned = 0x538;
	constexpr uint32_t m_worldName = 0x560;
	constexpr uint32_t m_layerName = 0x568;
	constexpr uint32_t m_bWorldLayerVisible = 0x570;
	constexpr uint32_t m_bEntitiesSpawned = 0x571;
	constexpr uint32_t m_bCreateAsChildSpawnGroup = 0x572;
	constexpr uint32_t m_hLayerSpawnGroup = 0x574;
	constexpr uint32_t m_bWorldLayerActuallyVisible = 0x578;
}

namespace C_PointCamera
{
	constexpr uint32_t m_FOV = 0x538;
	constexpr uint32_t m_Resolution = 0x53C;
	constexpr uint32_t m_bFogEnable = 0x540;
	constexpr uint32_t m_FogColor = 0x541;
	constexpr uint32_t m_flFogStart = 0x548;
	constexpr uint32_t m_flFogEnd = 0x54C;
	constexpr uint32_t m_flFogMaxDensity = 0x550;
	constexpr uint32_t m_bActive = 0x554;
	constexpr uint32_t m_bUseScreenAspectRatio = 0x555;
	constexpr uint32_t m_flAspectRatio = 0x558;
	constexpr uint32_t m_bNoSky = 0x55C;
	constexpr uint32_t m_fBrightness = 0x560;
	constexpr uint32_t m_flZFar = 0x564;
	constexpr uint32_t m_flZNear = 0x568;
	constexpr uint32_t m_bDofEnabled = 0x56C;
	constexpr uint32_t m_flDofNearBlurry = 0x570;
	constexpr uint32_t m_flDofNearCrisp = 0x574;
	constexpr uint32_t m_flDofFarCrisp = 0x578;
	constexpr uint32_t m_flDofFarBlurry = 0x57C;
	constexpr uint32_t m_flDofTiltToGround = 0x580;
	constexpr uint32_t m_TargetFOV = 0x584;
	constexpr uint32_t m_DegreesPerSecond = 0x588;
	constexpr uint32_t m_bIsOn = 0x58C;
	constexpr uint32_t m_pNext = 0x590;
}

namespace C_PointCameraVFOV
{
	constexpr uint32_t m_flVerticalFOV = 0x598;
}

namespace CPointTemplate
{
	constexpr uint32_t m_iszWorldName = 0x538;
	constexpr uint32_t m_iszSource2EntityLumpName = 0x540;
	constexpr uint32_t m_iszEntityFilterName = 0x548;
	constexpr uint32_t m_flTimeoutInterval = 0x550;
	constexpr uint32_t m_bAsynchronouslySpawnEntities = 0x554;
	constexpr uint32_t m_pOutputOnSpawned = 0x558;
	constexpr uint32_t m_clientOnlyEntityBehavior = 0x580;
	constexpr uint32_t m_ownerSpawnGroupType = 0x584;
	constexpr uint32_t m_createdSpawnGroupHandles = 0x588;
	constexpr uint32_t m_SpawnedEntityHandles = 0x5A0;
	constexpr uint32_t m_ScriptSpawnCallback = 0x5B8;
	constexpr uint32_t m_ScriptCallbackScope = 0x5C0;
}

namespace C_SoundAreaEntityBase
{
	constexpr uint32_t m_bDisabled = 0x538;
	constexpr uint32_t m_bWasEnabled = 0x540;
	constexpr uint32_t m_iszSoundAreaType = 0x548;
	constexpr uint32_t m_vPos = 0x550;
}

namespace C_SoundAreaEntitySphere
{
	constexpr uint32_t m_flRadius = 0x560;
}

namespace C_SoundAreaEntityOrientedBox
{
	constexpr uint32_t m_vMin = 0x560;
	constexpr uint32_t m_vMax = 0x56C;
}

namespace C_Team
{
	constexpr uint32_t m_aPlayerControllers = 0x538;
	constexpr uint32_t m_aPlayers = 0x550;
	constexpr uint32_t m_iScore = 0x568;
	constexpr uint32_t m_szTeamname = 0x56C;
}

namespace CBasePlayerController
{
	constexpr uint32_t m_nFinalPredictedTick = 0x540;
	constexpr uint32_t m_CommandContext = 0x548;
	constexpr uint32_t m_nInButtonsWhichAreToggles = 0x5C8;
	constexpr uint32_t m_nTickBase = 0x5D0;
	constexpr uint32_t m_hPawn = 0x5D4;
	constexpr uint32_t m_hPredictedPawn = 0x5D8;
	constexpr uint32_t m_nSplitScreenSlot = 0x5DC;
	constexpr uint32_t m_hSplitOwner = 0x5E0;
	constexpr uint32_t m_hSplitScreenPlayers = 0x5E8;
	constexpr uint32_t m_bIsHLTV = 0x600;
	constexpr uint32_t m_iConnected = 0x604;
	constexpr uint32_t m_iszPlayerName = 0x608;
	constexpr uint32_t m_steamID = 0x690;
	constexpr uint32_t m_bIsLocalPlayerController = 0x698;
	constexpr uint32_t m_iDesiredFOV = 0x69C;
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
	constexpr uint32_t m_szTracerParticle = 0x1F8;
	constexpr uint32_t m_iFlags = 0x2D8;
	constexpr uint32_t m_nPrimaryAmmoType = 0x2D9;
	constexpr uint32_t m_nSecondaryAmmoType = 0x2DA;
	constexpr uint32_t m_iMaxClip1 = 0x2DC;
	constexpr uint32_t m_iMaxClip2 = 0x2E0;
	constexpr uint32_t m_iDefaultClip1 = 0x2E4;
	constexpr uint32_t m_iDefaultClip2 = 0x2E8;
	constexpr uint32_t m_iWeight = 0x2EC;
	constexpr uint32_t m_bAutoSwitchTo = 0x2F0;
	constexpr uint32_t m_bAutoSwitchFrom = 0x2F1;
	constexpr uint32_t m_iRumbleEffect = 0x2F4;
	constexpr uint32_t m_aShootSounds = 0x2F8;
	constexpr uint32_t m_iSlot = 0x318;
	constexpr uint32_t m_iPosition = 0x31C;
}

namespace CBaseAnimGraphController
{
	constexpr uint32_t m_baseLayer = 0x18;
	constexpr uint32_t m_animGraphNetworkedVars = 0x40;
	constexpr uint32_t m_bSequenceFinished = 0x1180;
	constexpr uint32_t m_flLastEventCycle = 0x1184;
	constexpr uint32_t m_flLastEventAnimTime = 0x1188;
	constexpr uint32_t m_flPlaybackRate = 0x118C;
	constexpr uint32_t m_flPrevAnimTime = 0x1194;
	constexpr uint32_t m_bClientSideAnimation = 0x1198;
	constexpr uint32_t m_bNetworkedAnimationInputsChanged = 0x1199;
	constexpr uint32_t m_nPrevNewSequenceParity = 0x119A;
	constexpr uint32_t m_nPrevResetEventsParity = 0x119B;
	constexpr uint32_t m_nNewSequenceParity = 0x119C;
	constexpr uint32_t m_nResetEventsParity = 0x11A0;
	constexpr uint32_t m_nAnimLoopMode = 0x11A4;
	constexpr uint32_t m_hAnimationUpdate = 0x123C;
	constexpr uint32_t m_hLastAnimEventSequence = 0x1240;
}

namespace C_BaseModelEntity
{
	constexpr uint32_t m_CRenderComponent = 0x588;
	constexpr uint32_t m_CHitboxComponent = 0x590;
	constexpr uint32_t m_bInitModelEffects = 0x5D8;
	constexpr uint32_t m_bIsStaticProp = 0x5D9;
	constexpr uint32_t m_nLastAddDecal = 0x5DC;
	constexpr uint32_t m_nDecalsAdded = 0x5E0;
	constexpr uint32_t m_iOldHealth = 0x5E4;
	constexpr uint32_t m_nRenderMode = 0x5E8;
	constexpr uint32_t m_nRenderFX = 0x5E9;
	constexpr uint32_t m_bAllowFadeInView = 0x5EA;
	constexpr uint32_t m_clrRender = 0x5EB;
	constexpr uint32_t m_vecRenderAttributes = 0x5F0;
	constexpr uint32_t m_LightGroup = 0x658;
	constexpr uint32_t m_bRenderToCubemaps = 0x65C;
	constexpr uint32_t m_Collision = 0x660;
	constexpr uint32_t m_Glow = 0x710;
	constexpr uint32_t m_flGlowBackfaceMult = 0x768;
	constexpr uint32_t m_fadeMinDist = 0x76C;
	constexpr uint32_t m_fadeMaxDist = 0x770;
	constexpr uint32_t m_flFadeScale = 0x774;
	constexpr uint32_t m_flShadowStrength = 0x778;
	constexpr uint32_t m_nObjectCulling = 0x77C;
	constexpr uint32_t m_nAddDecal = 0x780;
	constexpr uint32_t m_vDecalPosition = 0x784;
	constexpr uint32_t m_vDecalForwardAxis = 0x790;
	constexpr uint32_t m_flDecalHealBloodRate = 0x79C;
	constexpr uint32_t m_flDecalHealHeightRate = 0x7A0;
	constexpr uint32_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0x7A8;
	constexpr uint32_t m_vecViewOffset = 0x7C0;
	constexpr uint32_t m_pClientAlphaProperty = 0x7F0;
	constexpr uint32_t m_ClientOverrideTint = 0x7F8;
	constexpr uint32_t m_bUseClientOverrideTint = 0x7FC;
}

namespace CServerOnlyModelEntity
{
}

namespace C_ModelPointEntity
{
}

namespace CLogicRelay
{
	constexpr uint32_t m_OnTrigger = 0x538;
	constexpr uint32_t m_OnSpawn = 0x560;
	constexpr uint32_t m_bDisabled = 0x588;
	constexpr uint32_t m_bWaitForRefire = 0x589;
	constexpr uint32_t m_bTriggerOnce = 0x58A;
	constexpr uint32_t m_bFastRetrigger = 0x58B;
	constexpr uint32_t m_bPassthoughCaller = 0x58C;
}

namespace C_ParticleSystem
{
	constexpr uint32_t m_szSnapshotFileName = 0x838;
	constexpr uint32_t m_bActive = 0xA38;
	constexpr uint32_t m_bFrozen = 0xA39;
	constexpr uint32_t m_flFreezeTransitionDuration = 0xA3C;
	constexpr uint32_t m_nStopType = 0xA40;
	constexpr uint32_t m_bAnimateDuringGameplayPause = 0xA44;
	constexpr uint32_t m_iEffectIndex = 0xA48;
	constexpr uint32_t m_flStartTime = 0xA50;
	constexpr uint32_t m_flPreSimTime = 0xA54;
	constexpr uint32_t m_vServerControlPoints = 0xA58;
	constexpr uint32_t m_iServerControlPointAssignments = 0xA88;
	constexpr uint32_t m_hControlPointEnts = 0xA8C;
	constexpr uint32_t m_bNoSave = 0xB8C;
	constexpr uint32_t m_bNoFreeze = 0xB8D;
	constexpr uint32_t m_bStartActive = 0xB8E;
	constexpr uint32_t m_iszEffectName = 0xB90;
	constexpr uint32_t m_iszControlPointNames = 0xB98;
	constexpr uint32_t m_nDataCP = 0xD98;
	constexpr uint32_t m_vecDataCPValue = 0xD9C;
	constexpr uint32_t m_nTintCP = 0xDA8;
	constexpr uint32_t m_clrTint = 0xDAC;
	constexpr uint32_t m_bOldActive = 0xDD0;
	constexpr uint32_t m_bOldFrozen = 0xDD1;
}

namespace C_PathParticleRope
{
	constexpr uint32_t m_bStartActive = 0x538;
	constexpr uint32_t m_flMaxSimulationTime = 0x53C;
	constexpr uint32_t m_iszEffectName = 0x540;
	constexpr uint32_t m_PathNodes_Name = 0x548;
	constexpr uint32_t m_flParticleSpacing = 0x560;
	constexpr uint32_t m_flSlack = 0x564;
	constexpr uint32_t m_flRadius = 0x568;
	constexpr uint32_t m_ColorTint = 0x56C;
	constexpr uint32_t m_nEffectState = 0x570;
	constexpr uint32_t m_iEffectIndex = 0x578;
	constexpr uint32_t m_PathNodes_Position = 0x580;
	constexpr uint32_t m_PathNodes_TangentIn = 0x598;
	constexpr uint32_t m_PathNodes_TangentOut = 0x5B0;
	constexpr uint32_t m_PathNodes_Color = 0x5C8;
	constexpr uint32_t m_PathNodes_PinEnabled = 0x5E0;
	constexpr uint32_t m_PathNodes_RadiusScale = 0x5F8;
}

namespace C_PathParticleRopeAlias_path_particle_rope_clientside
{
}

namespace C_DynamicLight
{
	constexpr uint32_t m_Flags = 0x838;
	constexpr uint32_t m_LightStyle = 0x839;
	constexpr uint32_t m_Radius = 0x83C;
	constexpr uint32_t m_Exponent = 0x840;
	constexpr uint32_t m_InnerAngle = 0x844;
	constexpr uint32_t m_OuterAngle = 0x848;
	constexpr uint32_t m_SpotRadius = 0x84C;
}

namespace C_EnvScreenOverlay
{
	constexpr uint32_t m_iszOverlayNames = 0x538;
	constexpr uint32_t m_flOverlayTimes = 0x588;
	constexpr uint32_t m_flStartTime = 0x5B0;
	constexpr uint32_t m_iDesiredOverlay = 0x5B4;
	constexpr uint32_t m_bIsActive = 0x5B8;
	constexpr uint32_t m_bWasActive = 0x5B9;
	constexpr uint32_t m_iCachedDesiredOverlay = 0x5BC;
	constexpr uint32_t m_iCurrentOverlay = 0x5C0;
	constexpr uint32_t m_flCurrentOverlayTime = 0x5C4;
}

namespace C_FuncTrackTrain
{
	constexpr uint32_t m_nLongAxis = 0x838;
	constexpr uint32_t m_flRadius = 0x83C;
	constexpr uint32_t m_flLineLength = 0x840;
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
	constexpr uint32_t m_nHorizontalSize = 0x838;
	constexpr uint32_t m_nVerticalSize = 0x83C;
	constexpr uint32_t m_nMinDist = 0x840;
	constexpr uint32_t m_nMaxDist = 0x844;
	constexpr uint32_t m_nOuterMaxDist = 0x848;
	constexpr uint32_t m_flGlowProxySize = 0x84C;
	constexpr uint32_t m_flHDRColorScale = 0x850;
	constexpr uint32_t m_Glow = 0x858;
}

namespace C_RagdollManager
{
	constexpr uint32_t m_iCurrentMaxRagdollCount = 0x538;
}

namespace C_SpotlightEnd
{
	constexpr uint32_t m_flLightScale = 0x838;
	constexpr uint32_t m_Radius = 0x83C;
}

namespace C_PointHMDAnchor
{
	constexpr uint32_t m_bDisabled = 0x538;
	constexpr uint32_t m_flEnableTime = 0x53C;
	constexpr uint32_t m_nPlayerIndex = 0x540;
	constexpr uint32_t m_nLastSimulateFrame = 0x544;
}

namespace C_PointHMDAnchorOverride
{
}

namespace C_PointValueRemapper
{
	constexpr uint32_t m_bDisabled = 0x538;
	constexpr uint32_t m_bDisabledOld = 0x539;
	constexpr uint32_t m_bUpdateOnClient = 0x53A;
	constexpr uint32_t m_nInputType = 0x53C;
	constexpr uint32_t m_hRemapLineStart = 0x540;
	constexpr uint32_t m_hRemapLineEnd = 0x544;
	constexpr uint32_t m_flMaximumChangePerSecond = 0x548;
	constexpr uint32_t m_flDisengageDistance = 0x54C;
	constexpr uint32_t m_flEngageDistance = 0x550;
	constexpr uint32_t m_bRequiresUseKey = 0x554;
	constexpr uint32_t m_nOutputType = 0x558;
	constexpr uint32_t m_hOutputEntities = 0x560;
	constexpr uint32_t m_nHapticsType = 0x578;
	constexpr uint32_t m_nMomentumType = 0x57C;
	constexpr uint32_t m_flMomentumModifier = 0x580;
	constexpr uint32_t m_flSnapValue = 0x584;
	constexpr uint32_t m_flCurrentMomentum = 0x588;
	constexpr uint32_t m_nRatchetType = 0x58C;
	constexpr uint32_t m_flRatchetOffset = 0x590;
	constexpr uint32_t m_flInputOffset = 0x594;
	constexpr uint32_t m_bEngaged = 0x598;
	constexpr uint32_t m_bFirstUpdate = 0x599;
	constexpr uint32_t m_flPreviousValue = 0x59C;
	constexpr uint32_t m_flPreviousUpdateTickTime = 0x5A0;
	constexpr uint32_t m_vecPreviousTestPoint = 0x5A4;
}

namespace C_PointWorldText
{
	constexpr uint32_t m_bForceRecreateNextUpdate = 0x840;
	constexpr uint32_t m_messageText = 0x850;
	constexpr uint32_t m_FontName = 0xA50;
	constexpr uint32_t m_bEnabled = 0xA90;
	constexpr uint32_t m_bFullbright = 0xA91;
	constexpr uint32_t m_flWorldUnitsPerPx = 0xA94;
	constexpr uint32_t m_flFontSize = 0xA98;
	constexpr uint32_t m_flDepthOffset = 0xA9C;
	constexpr uint32_t m_Color = 0xAA0;
	constexpr uint32_t m_nJustifyHorizontal = 0xAA4;
	constexpr uint32_t m_nJustifyVertical = 0xAA8;
	constexpr uint32_t m_nReorientMode = 0xAAC;
}

namespace C_HandleTest
{
	constexpr uint32_t m_Handle = 0x538;
	constexpr uint32_t m_bSendHandle = 0x53C;
}

namespace C_EnvWind
{
	constexpr uint32_t m_EnvWindShared = 0x538;
}

namespace C_BaseToggle
{
}

namespace C_BaseButton
{
	constexpr uint32_t m_glowEntity = 0x838;
	constexpr uint32_t m_usable = 0x83C;
	constexpr uint32_t m_szDisplayText = 0x840;
}

namespace C_PrecipitationBlocker
{
}

namespace C_EntityDissolve
{
	constexpr uint32_t m_flStartTime = 0x840;
	constexpr uint32_t m_flFadeInStart = 0x844;
	constexpr uint32_t m_flFadeInLength = 0x848;
	constexpr uint32_t m_flFadeOutModelStart = 0x84C;
	constexpr uint32_t m_flFadeOutModelLength = 0x850;
	constexpr uint32_t m_flFadeOutStart = 0x854;
	constexpr uint32_t m_flFadeOutLength = 0x858;
	constexpr uint32_t m_flNextSparkTime = 0x85C;
	constexpr uint32_t m_nDissolveType = 0x860;
	constexpr uint32_t m_vDissolverOrigin = 0x864;
	constexpr uint32_t m_nMagnitude = 0x870;
	constexpr uint32_t m_bCoreExplode = 0x874;
	constexpr uint32_t m_bLinkedToServerEnt = 0x875;
}

namespace C_EnvProjectedTexture
{
}

namespace C_EnvDecal
{
	constexpr uint32_t m_hDecalMaterial = 0x838;
	constexpr uint32_t m_flWidth = 0x840;
	constexpr uint32_t m_flHeight = 0x844;
	constexpr uint32_t m_flDepth = 0x848;
	constexpr uint32_t m_nRenderOrder = 0x84C;
	constexpr uint32_t m_bProjectOnWorld = 0x850;
	constexpr uint32_t m_bProjectOnCharacters = 0x851;
	constexpr uint32_t m_bProjectOnWater = 0x852;
	constexpr uint32_t m_flDepthSortBias = 0x854;
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
	constexpr uint32_t m_nAmbientEffect = 0x838;
	constexpr uint32_t m_EffectName = 0x840;
	constexpr uint32_t m_bState = 0x848;
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
	constexpr uint32_t m_LinksTouchingSomething = 0x840;
	constexpr uint32_t m_nLinksTouchingSomething = 0x844;
	constexpr uint32_t m_bApplyWind = 0x848;
	constexpr uint32_t m_fPrevLockedPoints = 0x84C;
	constexpr uint32_t m_iForcePointMoveCounter = 0x850;
	constexpr uint32_t m_bPrevEndPointPos = 0x854;
	constexpr uint32_t m_vPrevEndPointPos = 0x858;
	constexpr uint32_t m_flCurScroll = 0x870;
	constexpr uint32_t m_flScrollSpeed = 0x874;
	constexpr uint32_t m_RopeFlags = 0x878;
	constexpr uint32_t m_iRopeMaterialModelIndex = 0x880;
	constexpr uint32_t m_LightValues = 0xAF8;
	constexpr uint32_t m_nSegments = 0xB70;
	constexpr uint32_t m_hStartPoint = 0xB74;
	constexpr uint32_t m_hEndPoint = 0xB78;
	constexpr uint32_t m_iStartAttachment = 0xB7C;
	constexpr uint32_t m_iEndAttachment = 0xB7D;
	constexpr uint32_t m_Subdiv = 0xB7E;
	constexpr uint32_t m_RopeLength = 0xB80;
	constexpr uint32_t m_Slack = 0xB82;
	constexpr uint32_t m_TextureScale = 0xB84;
	constexpr uint32_t m_fLockedPoints = 0xB88;
	constexpr uint32_t m_nChangeCount = 0xB89;
	constexpr uint32_t m_Width = 0xB8C;
	constexpr uint32_t m_PhysicsDelegate = 0xB90;
	constexpr uint32_t m_hMaterial = 0xBA0;
	constexpr uint32_t m_TextureHeight = 0xBA8;
	constexpr uint32_t m_vecImpulse = 0xBAC;
	constexpr uint32_t m_vecPreviousImpulse = 0xBB8;
	constexpr uint32_t m_flCurrentGustTimer = 0xBC4;
	constexpr uint32_t m_flCurrentGustLifetime = 0xBC8;
	constexpr uint32_t m_flTimeToNextGust = 0xBCC;
	constexpr uint32_t m_vWindDir = 0xBD0;
	constexpr uint32_t m_vColorMod = 0xBDC;
	constexpr uint32_t m_vCachedEndPointAttachmentPos = 0xBE8;
	constexpr uint32_t m_vCachedEndPointAttachmentAngle = 0xC00;
	constexpr uint32_t m_bConstrainBetweenEndpoints = 0xC18;
	constexpr uint32_t m_bEndPointAttachmentPositionsDirty = 0x0;
	constexpr uint32_t m_bEndPointAttachmentAnglesDirty = 0x0;
	constexpr uint32_t m_bNewDataThisFrame = 0x0;
	constexpr uint32_t m_bPhysicsInitted = 0x0;
}

namespace C_SceneEntity
{
	constexpr uint32_t m_bIsPlayingBack = 0x540;
	constexpr uint32_t m_bPaused = 0x541;
	constexpr uint32_t m_bMultiplayer = 0x542;
	constexpr uint32_t m_bAutogenerated = 0x543;
	constexpr uint32_t m_flForceClientTime = 0x544;
	constexpr uint32_t m_nSceneStringIndex = 0x548;
	constexpr uint32_t m_bClientOnly = 0x54A;
	constexpr uint32_t m_hOwner = 0x54C;
	constexpr uint32_t m_hActorList = 0x550;
	constexpr uint32_t m_bWasPlaying = 0x568;
	constexpr uint32_t m_QueuedEvents = 0x578;
	constexpr uint32_t m_flCurrentTime = 0x590;
}

namespace C_SunGlowOverlay
{
	constexpr uint32_t m_bModulateByDot = 0xD0;
}

namespace C_Sun
{
	constexpr uint32_t m_fxSSSunFlareEffectIndex = 0x838;
	constexpr uint32_t m_fxSunFlareEffectIndex = 0x83C;
	constexpr uint32_t m_fdistNormalize = 0x840;
	constexpr uint32_t m_vSunPos = 0x844;
	constexpr uint32_t m_vDirection = 0x850;
	constexpr uint32_t m_iszEffectName = 0x860;
	constexpr uint32_t m_iszSSEffectName = 0x868;
	constexpr uint32_t m_clrOverlay = 0x870;
	constexpr uint32_t m_bOn = 0x874;
	constexpr uint32_t m_bmaxColor = 0x875;
	constexpr uint32_t m_flSize = 0x878;
	constexpr uint32_t m_flHazeScale = 0x87C;
	constexpr uint32_t m_flRotation = 0x880;
	constexpr uint32_t m_flHDRColorScale = 0x884;
	constexpr uint32_t m_flAlphaHaze = 0x888;
	constexpr uint32_t m_flAlphaScale = 0x88C;
	constexpr uint32_t m_flAlphaHdr = 0x890;
	constexpr uint32_t m_flFarZScale = 0x894;
}

namespace C_BaseTrigger
{
	constexpr uint32_t m_bDisabled = 0x838;
	constexpr uint32_t m_bClientSidePredicted = 0x839;
}

namespace C_TriggerVolume
{
}

namespace C_TriggerLerpObject
{
}

namespace C_TriggerBuoyancy
{
	constexpr uint32_t m_BuoyancyHelper = 0x840;
	constexpr uint32_t m_flFluidDensity = 0x860;
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
	constexpr uint32_t m_flFrameRate = 0x838;
	constexpr uint32_t m_flHDRColorScale = 0x83C;
	constexpr uint32_t m_flFireTime = 0x840;
	constexpr uint32_t m_flDamage = 0x844;
	constexpr uint32_t m_nNumBeamEnts = 0x848;
	constexpr uint32_t m_queryHandleHalo = 0x84C;
	constexpr uint32_t m_hBaseMaterial = 0x870;
	constexpr uint32_t m_nHaloIndex = 0x878;
	constexpr uint32_t m_nBeamType = 0x880;
	constexpr uint32_t m_nBeamFlags = 0x884;
	constexpr uint32_t m_hAttachEntity = 0x888;
	constexpr uint32_t m_nAttachIndex = 0x8B0;
	constexpr uint32_t m_fWidth = 0x8BC;
	constexpr uint32_t m_fEndWidth = 0x8C0;
	constexpr uint32_t m_fFadeLength = 0x8C4;
	constexpr uint32_t m_fHaloScale = 0x8C8;
	constexpr uint32_t m_fAmplitude = 0x8CC;
	constexpr uint32_t m_fStartFrame = 0x8D0;
	constexpr uint32_t m_fSpeed = 0x8D4;
	constexpr uint32_t m_flFrame = 0x8D8;
	constexpr uint32_t m_nClipStyle = 0x8DC;
	constexpr uint32_t m_bTurnedOff = 0x8E0;
	constexpr uint32_t m_vecEndPos = 0x8E4;
	constexpr uint32_t m_hEndEntity = 0x8F0;
}

namespace C_FuncLadder
{
	constexpr uint32_t m_vecLadderDir = 0x838;
	constexpr uint32_t m_Dismounts = 0x848;
	constexpr uint32_t m_vecLocalTop = 0x860;
	constexpr uint32_t m_vecPlayerMountPositionTop = 0x86C;
	constexpr uint32_t m_vecPlayerMountPositionBottom = 0x878;
	constexpr uint32_t m_flAutoRideSpeed = 0x884;
	constexpr uint32_t m_bDisabled = 0x888;
	constexpr uint32_t m_bFakeLadder = 0x889;
	constexpr uint32_t m_bHasSlack = 0x88A;
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
	constexpr uint32_t m_hSpriteMaterial = 0x850;
	constexpr uint32_t m_hAttachedToEntity = 0x858;
	constexpr uint32_t m_nAttachment = 0x85C;
	constexpr uint32_t m_flSpriteFramerate = 0x860;
	constexpr uint32_t m_flFrame = 0x864;
	constexpr uint32_t m_flDieTime = 0x868;
	constexpr uint32_t m_nBrightness = 0x878;
	constexpr uint32_t m_flBrightnessDuration = 0x87C;
	constexpr uint32_t m_flSpriteScale = 0x880;
	constexpr uint32_t m_flScaleDuration = 0x884;
	constexpr uint32_t m_bWorldSpaceScale = 0x888;
	constexpr uint32_t m_flGlowProxySize = 0x88C;
	constexpr uint32_t m_flHDRColorScale = 0x890;
	constexpr uint32_t m_flLastTime = 0x894;
	constexpr uint32_t m_flMaxFrame = 0x898;
	constexpr uint32_t m_flStartScale = 0x89C;
	constexpr uint32_t m_flDestScale = 0x8A0;
	constexpr uint32_t m_flScaleTimeStart = 0x8A4;
	constexpr uint32_t m_nStartBrightness = 0x8A8;
	constexpr uint32_t m_nDestBrightness = 0x8AC;
	constexpr uint32_t m_flBrightnessTimeStart = 0x8B0;
	constexpr uint32_t m_hOldSpriteMaterial = 0x8B8;
	constexpr uint32_t m_nSpriteWidth = 0x960;
	constexpr uint32_t m_nSpriteHeight = 0x964;
}

namespace C_SpriteOriented
{
}

namespace C_BaseClientUIEntity
{
	constexpr uint32_t m_bEnabled = 0x840;
	constexpr uint32_t m_DialogXMLName = 0x848;
	constexpr uint32_t m_PanelClassName = 0x850;
	constexpr uint32_t m_PanelID = 0x858;
}

namespace C_PointClientUIDialog
{
	constexpr uint32_t m_hActivator = 0x868;
	constexpr uint32_t m_bStartEnabled = 0x86C;
}

namespace C_PointClientUIHUD
{
	constexpr uint32_t m_bCheckCSSClasses = 0x870;
	constexpr uint32_t m_bIgnoreInput = 0x9F8;
	constexpr uint32_t m_flWidth = 0x9FC;
	constexpr uint32_t m_flHeight = 0xA00;
	constexpr uint32_t m_flDPI = 0xA04;
	constexpr uint32_t m_flInteractDistance = 0xA08;
	constexpr uint32_t m_flDepthOffset = 0xA0C;
	constexpr uint32_t m_unOwnerContext = 0xA10;
	constexpr uint32_t m_unHorizontalAlign = 0xA14;
	constexpr uint32_t m_unVerticalAlign = 0xA18;
	constexpr uint32_t m_unOrientation = 0xA1C;
	constexpr uint32_t m_bAllowInteractionFromAllSceneWorlds = 0xA20;
	constexpr uint32_t m_vecCSSClasses = 0xA28;
}

namespace C_PointClientUIWorldPanel
{
	constexpr uint32_t m_bForceRecreateNextUpdate = 0x870;
	constexpr uint32_t m_bMoveViewToPlayerNextThink = 0x871;
	constexpr uint32_t m_bCheckCSSClasses = 0x872;
	constexpr uint32_t m_anchorDeltaTransform = 0x880;
	constexpr uint32_t m_pOffScreenIndicator = 0xA20;
	constexpr uint32_t m_bIgnoreInput = 0xA48;
	constexpr uint32_t m_bLit = 0xA49;
	constexpr uint32_t m_bFollowPlayerAcrossTeleport = 0xA4A;
	constexpr uint32_t m_flWidth = 0xA4C;
	constexpr uint32_t m_flHeight = 0xA50;
	constexpr uint32_t m_flDPI = 0xA54;
	constexpr uint32_t m_flInteractDistance = 0xA58;
	constexpr uint32_t m_flDepthOffset = 0xA5C;
	constexpr uint32_t m_unOwnerContext = 0xA60;
	constexpr uint32_t m_unHorizontalAlign = 0xA64;
	constexpr uint32_t m_unVerticalAlign = 0xA68;
	constexpr uint32_t m_unOrientation = 0xA6C;
	constexpr uint32_t m_bAllowInteractionFromAllSceneWorlds = 0xA70;
	constexpr uint32_t m_vecCSSClasses = 0xA78;
	constexpr uint32_t m_bOpaque = 0xA90;
	constexpr uint32_t m_bNoDepth = 0xA91;
	constexpr uint32_t m_bRenderBackface = 0xA92;
	constexpr uint32_t m_bUseOffScreenIndicator = 0xA93;
	constexpr uint32_t m_bExcludeFromSaveGames = 0xA94;
	constexpr uint32_t m_bGrabbable = 0xA95;
	constexpr uint32_t m_bOnlyRenderToTexture = 0xA96;
	constexpr uint32_t m_bDisableMipGen = 0xA97;
	constexpr uint32_t m_nExplicitImageLayout = 0xA98;
}

namespace CPointOffScreenIndicatorUi
{
	constexpr uint32_t m_bBeenEnabled = 0xAA0;
	constexpr uint32_t m_bHide = 0xAA1;
	constexpr uint32_t m_flSeenTargetTime = 0xAA4;
	constexpr uint32_t m_pTargetPanel = 0xAA8;
}

namespace C_PointClientUIWorldTextPanel
{
	constexpr uint32_t m_messageText = 0xAA0;
}

namespace C_PointHintUi
{
	constexpr uint32_t m_pszLessonName = 0xAD0;
	constexpr uint32_t m_pszCaption = 0xAD8;
	constexpr uint32_t m_vOffset = 0xAE0;
	constexpr uint32_t m_attachType = 0xAEC;
	constexpr uint32_t m_hIconTarget = 0xAF0;
	constexpr uint32_t m_szTargetAttachmentName = 0xAF8;
	constexpr uint32_t m_pszCustomLayoutFile = 0xB00;
	constexpr uint32_t m_nTrackedDeviceIndex = 0xB08;
	constexpr uint32_t m_hHighlightHand = 0xB0C;
	constexpr uint32_t m_pszHighlightControllerComponent = 0xB10;
	constexpr uint32_t m_pszHighlightControllerAction = 0xB18;
	constexpr uint32_t m_vecLocalHighlightPoint = 0xB20;
	constexpr uint32_t m_pszHighlightOtherEntityName = 0xB30;
	constexpr uint32_t m_bUseOffScreenIndicator = 0xB38;
}

namespace CInfoOffscreenPanoramaTexture
{
	constexpr uint32_t m_bDisabled = 0x538;
	constexpr uint32_t m_nResolutionX = 0x53C;
	constexpr uint32_t m_nResolutionY = 0x540;
	constexpr uint32_t m_szLayoutFileName = 0x548;
	constexpr uint32_t m_RenderAttrName = 0x550;
	constexpr uint32_t m_TargetEntities = 0x558;
	constexpr uint32_t m_nTargetChangeCount = 0x570;
	constexpr uint32_t m_vecCSSClasses = 0x578;
	constexpr uint32_t m_bCheckCSSClasses = 0x6F0;
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

namespace CCSPlayerController
{
	constexpr uint32_t m_pInGameMoneyServices = 0x6B0;
	constexpr uint32_t m_pInventoryServices = 0x6B8;
	constexpr uint32_t m_pActionTrackingServices = 0x6C0;
	constexpr uint32_t m_pDamageServices = 0x6C8;
	constexpr uint32_t m_iPing = 0x6D0;
	constexpr uint32_t m_bHasCommunicationAbuseMute = 0x6D4;
	constexpr uint32_t m_szCrosshairCodes = 0x6D8;
	constexpr uint32_t m_iPendingTeamNum = 0x6E0;
	constexpr uint32_t m_flForceTeamTime = 0x6E4;
	constexpr uint32_t m_iCompTeammateColor = 0x6E8;
	constexpr uint32_t m_bEverPlayedOnTeam = 0x6EC;
	constexpr uint32_t m_flPreviousForceJoinTeamTime = 0x6F0;
	constexpr uint32_t m_szClan = 0x6F8;
	constexpr uint32_t m_sSanitizedPlayerName = 0x700;
	constexpr uint32_t m_iCoachingTeam = 0x708;
	constexpr uint32_t m_nPlayerDominated = 0x710;
	constexpr uint32_t m_nPlayerDominatingMe = 0x718;
	constexpr uint32_t m_iCompetitiveRanking = 0x720;
	constexpr uint32_t m_iCompetitiveWins = 0x724;
	constexpr uint32_t m_iCompetitiveRankType = 0x728;
	constexpr uint32_t m_nEndMatchNextMapVote = 0x72C;
	constexpr uint32_t m_unActiveQuestId = 0x730;
	constexpr uint32_t m_nQuestProgressReason = 0x734;
	constexpr uint32_t m_unPlayerTvControlFlags = 0x738;
	constexpr uint32_t m_iDraftIndex = 0x7A8;
	constexpr uint32_t m_msQueuedModeDisconnectionTimestamp = 0x7AC;
	constexpr uint32_t m_uiAbandonRecordedReason = 0x7B0;
	constexpr uint32_t m_bEverFullyConnected = 0x7B4;
	constexpr uint32_t m_bAbandonAllowsSurrender = 0x7B5;
	constexpr uint32_t m_bDisconnection1MinWarningPrinted = 0x7B6;
	constexpr uint32_t m_bScoreReported = 0x7B7;
	constexpr uint32_t m_nDisconnectionTick = 0x7B8;
	constexpr uint32_t m_bControllingBot = 0x7C8;
	constexpr uint32_t m_bHasControlledBotThisRound = 0x7C9;
	constexpr uint32_t m_bHasBeenControlledByPlayerThisRound = 0x7CA;
	constexpr uint32_t m_nBotsControlledThisRound = 0x7CC;
	constexpr uint32_t m_bCanControlObservedBot = 0x7D0;
	constexpr uint32_t m_hPlayerPawn = 0x7D4;
	constexpr uint32_t m_hObserverPawn = 0x7D8;
	constexpr uint32_t m_bPawnIsAlive = 0x7DC;
	constexpr uint32_t m_iPawnHealth = 0x7E0;
	constexpr uint32_t m_iPawnArmor = 0x7E4;
	constexpr uint32_t m_bPawnHasDefuser = 0x7E8;
	constexpr uint32_t m_bPawnHasHelmet = 0x7E9;
	constexpr uint32_t m_nPawnCharacterDefIndex = 0x7EA;
	constexpr uint32_t m_iPawnLifetimeStart = 0x7EC;
	constexpr uint32_t m_iPawnLifetimeEnd = 0x7F0;
	constexpr uint32_t m_iPawnGunGameLevel = 0x7F4;
	constexpr uint32_t m_iPawnBotDifficulty = 0x7F8;
	constexpr uint32_t m_hOriginalControllerOfCurrentPawn = 0x7FC;
	constexpr uint32_t m_iScore = 0x800;
	constexpr uint32_t m_vecKills = 0x808;
	constexpr uint32_t m_iMVPs = 0x820;
	constexpr uint32_t m_bIsPlayerNameDirty = 0x824;
}

namespace C_FootstepControl
{
	constexpr uint32_t m_source = 0x840;
	constexpr uint32_t m_destination = 0x848;
}

namespace CWeaponCSBaseVData
{
	constexpr uint32_t m_WeaponType = 0x320;
	constexpr uint32_t m_WeaponCategory = 0x324;
	constexpr uint32_t m_szViewModel = 0x328;
	constexpr uint32_t m_szPlayerModel = 0x408;
	constexpr uint32_t m_szWorldDroppedModel = 0x4E8;
	constexpr uint32_t m_szAimsightLensMaskModel = 0x5C8;
	constexpr uint32_t m_szMagazineModel = 0x6A8;
	constexpr uint32_t m_szHeatEffect = 0x788;
	constexpr uint32_t m_szEjectBrassEffect = 0x868;
	constexpr uint32_t m_szMuzzleFlashParticleAlt = 0x948;
	constexpr uint32_t m_szMuzzleFlashThirdPersonParticle = 0xA28;
	constexpr uint32_t m_szMuzzleFlashThirdPersonParticleAlt = 0xB08;
	constexpr uint32_t m_GearSlot = 0xBE8;
	constexpr uint32_t m_GearSlotPosition = 0xBEC;
	constexpr uint32_t m_DefaultLoadoutPosition = 0xBF0;
	constexpr uint32_t m_sWrongTeamMsg = 0xBF8;
	constexpr uint32_t m_nPrice = 0xC00;
	constexpr uint32_t m_nKillAward = 0xC04;
	constexpr uint32_t m_nPrimaryReserveAmmoMax = 0xC08;
	constexpr uint32_t m_nSecondaryReserveAmmoMax = 0xC0C;
	constexpr uint32_t m_bMeleeWeapon = 0xC10;
	constexpr uint32_t m_bHasBurstMode = 0xC11;
	constexpr uint32_t m_bIsRevolver = 0xC12;
	constexpr uint32_t m_bCannotShootUnderwater = 0xC13;
	constexpr uint32_t m_szName = 0xC18;
	constexpr uint32_t m_szAnimExtension = 0xC20;
	constexpr uint32_t m_eSilencerType = 0xC28;
	constexpr uint32_t m_nCrosshairMinDistance = 0xC2C;
	constexpr uint32_t m_nCrosshairDeltaDistance = 0xC30;
	constexpr uint32_t m_flCycleTime = 0xC34;
	constexpr uint32_t m_flMaxSpeed = 0xC3C;
	constexpr uint32_t m_flSpread = 0xC44;
	constexpr uint32_t m_flInaccuracyCrouch = 0xC4C;
	constexpr uint32_t m_flInaccuracyStand = 0xC54;
	constexpr uint32_t m_flInaccuracyJump = 0xC5C;
	constexpr uint32_t m_flInaccuracyLand = 0xC64;
	constexpr uint32_t m_flInaccuracyLadder = 0xC6C;
	constexpr uint32_t m_flInaccuracyFire = 0xC74;
	constexpr uint32_t m_flInaccuracyMove = 0xC7C;
	constexpr uint32_t m_flRecoilAngle = 0xC84;
	constexpr uint32_t m_flRecoilAngleVariance = 0xC8C;
	constexpr uint32_t m_flRecoilMagnitude = 0xC94;
	constexpr uint32_t m_flRecoilMagnitudeVariance = 0xC9C;
	constexpr uint32_t m_nTracerFrequency = 0xCA4;
	constexpr uint32_t m_flInaccuracyJumpInitial = 0xCAC;
	constexpr uint32_t m_flInaccuracyJumpApex = 0xCB0;
	constexpr uint32_t m_flInaccuracyReload = 0xCB4;
	constexpr uint32_t m_nRecoilSeed = 0xCB8;
	constexpr uint32_t m_nSpreadSeed = 0xCBC;
	constexpr uint32_t m_flTimeToIdleAfterFire = 0xCC0;
	constexpr uint32_t m_flIdleInterval = 0xCC4;
	constexpr uint32_t m_flAttackMovespeedFactor = 0xCC8;
	constexpr uint32_t m_flHeatPerShot = 0xCCC;
	constexpr uint32_t m_flInaccuracyPitchShift = 0xCD0;
	constexpr uint32_t m_flInaccuracyAltSoundThreshold = 0xCD4;
	constexpr uint32_t m_flBotAudibleRange = 0xCD8;
	constexpr uint32_t m_szUseRadioSubtitle = 0xCE0;
	constexpr uint32_t m_bUnzoomsAfterShot = 0xCE8;
	constexpr uint32_t m_bHideViewModelWhenZoomed = 0xCE9;
	constexpr uint32_t m_nZoomLevels = 0xCEC;
	constexpr uint32_t m_nZoomFOV1 = 0xCF0;
	constexpr uint32_t m_nZoomFOV2 = 0xCF4;
	constexpr uint32_t m_flZoomTime0 = 0xCF8;
	constexpr uint32_t m_flZoomTime1 = 0xCFC;
	constexpr uint32_t m_flZoomTime2 = 0xD00;
	constexpr uint32_t m_flIronSightPullUpSpeed = 0xD04;
	constexpr uint32_t m_flIronSightPutDownSpeed = 0xD08;
	constexpr uint32_t m_flIronSightFOV = 0xD0C;
	constexpr uint32_t m_flIronSightPivotForward = 0xD10;
	constexpr uint32_t m_flIronSightLooseness = 0xD14;
	constexpr uint32_t m_angPivotAngle = 0xD18;
	constexpr uint32_t m_vecIronSightEyePos = 0xD24;
	constexpr uint32_t m_nDamage = 0xD30;
	constexpr uint32_t m_flHeadshotMultiplier = 0xD34;
	constexpr uint32_t m_flArmorRatio = 0xD38;
	constexpr uint32_t m_flPenetration = 0xD3C;
	constexpr uint32_t m_flRange = 0xD40;
	constexpr uint32_t m_flRangeModifier = 0xD44;
	constexpr uint32_t m_flFlinchVelocityModifierLarge = 0xD48;
	constexpr uint32_t m_flFlinchVelocityModifierSmall = 0xD4C;
	constexpr uint32_t m_flRecoveryTimeCrouch = 0xD50;
	constexpr uint32_t m_flRecoveryTimeStand = 0xD54;
	constexpr uint32_t m_flRecoveryTimeCrouchFinal = 0xD58;
	constexpr uint32_t m_flRecoveryTimeStandFinal = 0xD5C;
	constexpr uint32_t m_nRecoveryTransitionStartBullet = 0xD60;
	constexpr uint32_t m_nRecoveryTransitionEndBullet = 0xD64;
	constexpr uint32_t m_flThrowVelocity = 0xD68;
	constexpr uint32_t m_vSmokeColor = 0xD6C;
	constexpr uint32_t m_szAnimClass = 0xD78;
}

namespace C_InfoInstructorHintHostageRescueZone
{
}

namespace C_PlayerSprayDecal
{
	constexpr uint32_t m_nUniqueID = 0x838;
	constexpr uint32_t m_unAccountID = 0x83C;
	constexpr uint32_t m_unTraceID = 0x840;
	constexpr uint32_t m_rtGcTime = 0x844;
	constexpr uint32_t m_vecEndPos = 0x848;
	constexpr uint32_t m_vecStart = 0x854;
	constexpr uint32_t m_vecLeft = 0x860;
	constexpr uint32_t m_vecNormal = 0x86C;
	constexpr uint32_t m_nPlayer = 0x878;
	constexpr uint32_t m_nEntity = 0x87C;
	constexpr uint32_t m_nHitbox = 0x880;
	constexpr uint32_t m_flCreationTime = 0x884;
	constexpr uint32_t m_nTintID = 0x888;
	constexpr uint32_t m_nVersion = 0x88C;
	constexpr uint32_t m_ubSignature = 0x88D;
	constexpr uint32_t m_SprayRenderHelper = 0x918;
}

namespace C_FuncConveyor
{
	constexpr uint32_t m_vecMoveDirEntitySpace = 0x840;
	constexpr uint32_t m_flTargetSpeed = 0x84C;
	constexpr uint32_t m_nTransitionStartTick = 0x850;
	constexpr uint32_t m_nTransitionDurationTicks = 0x854;
	constexpr uint32_t m_flTransitionStartSpeed = 0x858;
	constexpr uint32_t m_hConveyorModels = 0x860;
	constexpr uint32_t m_flCurrentConveyorOffset = 0x878;
	constexpr uint32_t m_flCurrentConveyorSpeed = 0x87C;
}

namespace CGrenadeTracer
{
	constexpr uint32_t m_flTracerDuration = 0x858;
	constexpr uint32_t m_nType = 0x85C;
}

namespace C_Inferno
{
	constexpr uint32_t m_nfxFireDamageEffect = 0x878;
	constexpr uint32_t m_fireXDelta = 0x87C;
	constexpr uint32_t m_fireYDelta = 0x97C;
	constexpr uint32_t m_fireZDelta = 0xA7C;
	constexpr uint32_t m_fireParentXDelta = 0xB7C;
	constexpr uint32_t m_fireParentYDelta = 0xC7C;
	constexpr uint32_t m_fireParentZDelta = 0xD7C;
	constexpr uint32_t m_bFireIsBurning = 0xE7C;
	constexpr uint32_t m_BurnNormal = 0xEBC;
	constexpr uint32_t m_fireCount = 0x11BC;
	constexpr uint32_t m_nInfernoType = 0x11C0;
	constexpr uint32_t m_nFireLifetime = 0x11C4;
	constexpr uint32_t m_bInPostEffectTime = 0x11C8;
	constexpr uint32_t m_lastFireCount = 0x11CC;
	constexpr uint32_t m_nFireEffectTickBegin = 0x11D0;
	constexpr uint32_t m_drawableCount = 0x7DE0;
	constexpr uint32_t m_blosCheck = 0x7DE4;
	constexpr uint32_t m_nlosperiod = 0x7DE8;
	constexpr uint32_t m_maxFireHalfWidth = 0x7DEC;
	constexpr uint32_t m_maxFireHeight = 0x7DF0;
	constexpr uint32_t m_minBounds = 0x7DF4;
	constexpr uint32_t m_maxBounds = 0x7E00;
	constexpr uint32_t m_flLastGrassBurnThink = 0x7E0C;
}

namespace C_FireCrackerBlast
{
}

namespace C_BarnLight
{
	constexpr uint32_t m_bEnabled = 0x838;
	constexpr uint32_t m_nColorMode = 0x83C;
	constexpr uint32_t m_Color = 0x840;
	constexpr uint32_t m_flColorTemperature = 0x844;
	constexpr uint32_t m_flBrightness = 0x848;
	constexpr uint32_t m_flBrightnessScale = 0x84C;
	constexpr uint32_t m_nDirectLight = 0x850;
	constexpr uint32_t m_nBakedShadowIndex = 0x854;
	constexpr uint32_t m_nLuminaireShape = 0x858;
	constexpr uint32_t m_flLuminaireSize = 0x85C;
	constexpr uint32_t m_flLuminaireAnisotropy = 0x860;
	constexpr uint32_t m_LightStyleString = 0x868;
	constexpr uint32_t m_flLightStyleStartTime = 0x870;
	constexpr uint32_t m_QueuedLightStyleStrings = 0x878;
	constexpr uint32_t m_LightStyleEvents = 0x890;
	constexpr uint32_t m_LightStyleTargets = 0x8A8;
	constexpr uint32_t m_StyleEvent = 0x8C0;
	constexpr uint32_t m_hLightCookie = 0x960;
	constexpr uint32_t m_flShape = 0x968;
	constexpr uint32_t m_flSoftX = 0x96C;
	constexpr uint32_t m_flSoftY = 0x970;
	constexpr uint32_t m_flSkirt = 0x974;
	constexpr uint32_t m_flSkirtNear = 0x978;
	constexpr uint32_t m_vSizeParams = 0x97C;
	constexpr uint32_t m_flRange = 0x988;
	constexpr uint32_t m_vShear = 0x98C;
	constexpr uint32_t m_nBakeSpecularToCubemaps = 0x998;
	constexpr uint32_t m_vBakeSpecularToCubemapsSize = 0x99C;
	constexpr uint32_t m_nCastShadows = 0x9A8;
	constexpr uint32_t m_nShadowMapSize = 0x9AC;
	constexpr uint32_t m_nShadowPriority = 0x9B0;
	constexpr uint32_t m_bContactShadow = 0x9B4;
	constexpr uint32_t m_nBounceLight = 0x9B8;
	constexpr uint32_t m_flBounceScale = 0x9BC;
	constexpr uint32_t m_flMinRoughness = 0x9C0;
	constexpr uint32_t m_nFog = 0x9C4;
	constexpr uint32_t m_flFogStrength = 0x9C8;
	constexpr uint32_t m_nFogShadows = 0x9CC;
	constexpr uint32_t m_flFogScale = 0x9D0;
	constexpr uint32_t m_flFadeSizeStart = 0x9D4;
	constexpr uint32_t m_flFadeSizeEnd = 0x9D8;
	constexpr uint32_t m_flShadowFadeSizeStart = 0x9DC;
	constexpr uint32_t m_flShadowFadeSizeEnd = 0x9E0;
	constexpr uint32_t m_bPrecomputedFieldsValid = 0x9E4;
	constexpr uint32_t m_vPrecomputedBoundsMins = 0x9E8;
	constexpr uint32_t m_vPrecomputedBoundsMaxs = 0x9F4;
	constexpr uint32_t m_vPrecomputedOBBOrigin = 0xA00;
	constexpr uint32_t m_vPrecomputedOBBAngles = 0xA0C;
	constexpr uint32_t m_vPrecomputedOBBExtent = 0xA18;
}

namespace C_RectLight
{
	constexpr uint32_t m_bShowLight = 0xA70;
}

namespace C_OmniLight
{
	constexpr uint32_t m_flInnerAngle = 0xA70;
	constexpr uint32_t m_flOuterAngle = 0xA74;
	constexpr uint32_t m_bShowLight = 0xA78;
}

namespace C_CSTeam
{
	constexpr uint32_t m_szTeamMatchStat = 0x5F0;
	constexpr uint32_t m_numMapVictories = 0x7F0;
	constexpr uint32_t m_bSurrendered = 0x7F4;
	constexpr uint32_t m_scoreFirstHalf = 0x7F8;
	constexpr uint32_t m_scoreSecondHalf = 0x7FC;
	constexpr uint32_t m_scoreOvertime = 0x800;
	constexpr uint32_t m_szClanTeamname = 0x804;
	constexpr uint32_t m_iClanID = 0x888;
	constexpr uint32_t m_nGGLeaderSlot_CT = 0x88C;
	constexpr uint32_t m_nGGLeaderSlot_T = 0x890;
	constexpr uint32_t m_szTeamFlagImage = 0x894;
	constexpr uint32_t m_szTeamLogoImage = 0x89C;
}

namespace C_MapPreviewParticleSystem
{
}

namespace CInfoDynamicShadowHint
{
	constexpr uint32_t m_bDisabled = 0x538;
	constexpr uint32_t m_flRange = 0x53C;
	constexpr uint32_t m_nImportance = 0x540;
	constexpr uint32_t m_nLightChoice = 0x544;
	constexpr uint32_t m_hLight = 0x548;
}

namespace CInfoDynamicShadowHintBox
{
	constexpr uint32_t m_vBoxMins = 0x550;
	constexpr uint32_t m_vBoxMaxs = 0x55C;
}

namespace C_EnvSky
{
	constexpr uint32_t m_hSkyMaterial = 0x838;
	constexpr uint32_t m_bStartDisabled = 0x840;
	constexpr uint32_t m_vTintColor = 0x841;
	constexpr uint32_t m_flBrightnessScale = 0x848;
	constexpr uint32_t m_nFogType = 0x84C;
	constexpr uint32_t m_flFogMinStart = 0x850;
	constexpr uint32_t m_flFogMinEnd = 0x854;
	constexpr uint32_t m_flFogMaxStart = 0x858;
	constexpr uint32_t m_flFogMaxEnd = 0x85C;
	constexpr uint32_t m_bEnabled = 0x860;
}

namespace C_TonemapController2Alias_env_tonemap_controller2
{
}

namespace C_LightEntity
{
	constexpr uint32_t m_CLightComponent = 0x838;
}

namespace C_LightSpotEntity
{
}

