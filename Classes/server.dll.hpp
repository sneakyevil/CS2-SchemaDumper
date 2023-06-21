namespace CRangeFloat
{
	constexpr uint32_t m_pValue = 0x0;
}

namespace CRangeInt
{
	constexpr uint32_t m_pValue = 0x0;
}

namespace Extent
{
	constexpr uint32_t lo = 0x0;
	constexpr uint32_t hi = 0xC;
}

namespace CNavVolume
{
}

namespace CNavVolumeVector
{
	constexpr uint32_t m_bHasBeenPreFiltered = 0x78;
}

namespace CNavVolumeAll
{
}

namespace CNavVolumeSphere
{
	constexpr uint32_t m_vCenter = 0x70;
	constexpr uint32_t m_flRadius = 0x7C;
}

namespace CNavVolumeSphericalShell
{
	constexpr uint32_t m_flRadiusInner = 0x80;
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
	constexpr uint32_t m_bPvsModifyEntity = 0x1C8;
}

namespace CNetworkTransmitComponent
{
	constexpr uint32_t m_nTransmitStateOwnedCounter = 0x16C;
}

namespace CRenderComponent
{
	constexpr uint32_t __m_pChainEntity = 0x10;
	constexpr uint32_t m_bIsRenderingWithViewModels = 0x50;
	constexpr uint32_t m_nSplitscreenFlags = 0x54;
	constexpr uint32_t m_bEnableRendering = 0x60;
	constexpr uint32_t m_bInterpolationReadyToDraw = 0xB0;
}

namespace AnimationUpdateListHandle_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace CBuoyancyHelper
{
	constexpr uint32_t m_flFluidDensity = 0x18;
}

namespace CSkillFloat
{
	constexpr uint32_t m_pValue = 0x0;
}

namespace CSkillInt
{
	constexpr uint32_t m_pValue = 0x0;
}

namespace CSkillDamage
{
	constexpr uint32_t m_flDamage = 0x0;
	constexpr uint32_t m_flPhysicsForceDamage = 0x10;
}

namespace CRemapFloat
{
	constexpr uint32_t m_pValue = 0x0;
}

namespace CScriptUniformRandomStream
{
	constexpr uint32_t m_hScriptScope = 0x8;
	constexpr uint32_t m_nInitialSeed = 0x9C;
}

namespace CommandToolCommand_t
{
	constexpr uint32_t m_bEnabled = 0x0;
	constexpr uint32_t m_bOpened = 0x1;
	constexpr uint32_t m_InternalId = 0x4;
	constexpr uint32_t m_ShortName = 0x8;
	constexpr uint32_t m_ExecMode = 0x10;
	constexpr uint32_t m_SpawnGroup = 0x18;
	constexpr uint32_t m_PeriodicExecDelay = 0x20;
	constexpr uint32_t m_SpecType = 0x24;
	constexpr uint32_t m_EntitySpec = 0x28;
	constexpr uint32_t m_Commands = 0x30;
	constexpr uint32_t m_SetDebugBits = 0x38;
	constexpr uint32_t m_ClearDebugBits = 0x40;
}

namespace CPlayerPawnComponent
{
	constexpr uint32_t __m_pChainEntity = 0x8;
}

namespace CPlayerControllerComponent
{
	constexpr uint32_t __m_pChainEntity = 0x8;
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
	constexpr uint32_t m_vecPunchAngleVel = 0x5C;
	constexpr uint32_t m_nPunchAngleJoltTick = 0x68;
	constexpr uint32_t m_hZoomOwner = 0x6C;
	constexpr uint32_t m_PlayerFog = 0x70;
	constexpr uint32_t m_hColorCorrectionCtrl = 0xB0;
	constexpr uint32_t m_hViewEntity = 0xB4;
	constexpr uint32_t m_hTonemapController = 0xB8;
	constexpr uint32_t m_audio = 0xC0;
	constexpr uint32_t m_PostProcessingVolumes = 0x138;
	constexpr uint32_t m_flOldPlayerZ = 0x150;
	constexpr uint32_t m_flOldPlayerViewOffsetZ = 0x154;
	constexpr uint32_t m_hTriggerSoundscapeList = 0x170;
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
	constexpr uint32_t m_iTargetVolume = 0x1F4;
	constexpr uint32_t m_vecSmoothedVelocity = 0x1F8;
}

namespace CPlayer_ObserverServices
{
	constexpr uint32_t m_iObserverMode = 0x40;
	constexpr uint32_t m_hObserverTarget = 0x44;
	constexpr uint32_t m_iObserverLastMode = 0x48;
	constexpr uint32_t m_bForcedObserverMode = 0x4C;
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
	constexpr uint32_t m_bPreventWeaponPickup = 0xA8;
}

namespace AmmoTypeInfo_t
{
	constexpr uint32_t m_nMaxCarry = 0x10;
	constexpr uint32_t m_nSplashSize = 0x1C;
	constexpr uint32_t m_nFlags = 0x24;
	constexpr uint32_t m_flMass = 0x28;
	constexpr uint32_t m_flSpeed = 0x2C;
}

namespace CBodyComponentBaseAnimGraph
{
	constexpr uint32_t m_animationController = 0x470;
	constexpr uint32_t __m_pChainEntity = 0x720;
}

namespace EntityRenderAttribute_t
{
	constexpr uint32_t m_ID = 0x30;
	constexpr uint32_t m_Values = 0x34;
}

namespace ModelConfigHandle_t
{
	constexpr uint32_t m_Value = 0x0;
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

namespace CNetworkOriginCellCoordQuantizedVector
{
	constexpr uint32_t m_cellX = 0x10;
	constexpr uint32_t m_cellY = 0x12;
	constexpr uint32_t m_cellZ = 0x14;
	constexpr uint32_t m_nOutsideWorld = 0x16;
	constexpr uint32_t m_vecX = 0x18;
	constexpr uint32_t m_vecY = 0x20;
	constexpr uint32_t m_vecZ = 0x28;
}

namespace CNetworkOriginQuantizedVector
{
	constexpr uint32_t m_vecX = 0x10;
	constexpr uint32_t m_vecY = 0x18;
	constexpr uint32_t m_vecZ = 0x20;
}

namespace CNetworkVelocityVector
{
	constexpr uint32_t m_vecX = 0x10;
	constexpr uint32_t m_vecY = 0x18;
	constexpr uint32_t m_vecZ = 0x20;
}

namespace CNetworkViewOffsetVector
{
	constexpr uint32_t m_vecX = 0x10;
	constexpr uint32_t m_vecY = 0x18;
	constexpr uint32_t m_vecZ = 0x20;
}

namespace GameTime_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace GameTick_t
{
	constexpr uint32_t m_Value = 0x0;
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

namespace IChoreoServices
{
}

namespace CInButtonState
{
	constexpr uint32_t m_pButtonStates = 0x8;
}

namespace CSkeletonAnimationController
{
	constexpr uint32_t m_pSkeletonInstance = 0x8;
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
	constexpr uint32_t m_flLastTeleportTime = 0x194;
}

namespace CFootstepTableHandle
{
}

namespace ResponseFollowup
{
	constexpr uint32_t followup_concept = 0x0;
	constexpr uint32_t followup_contexts = 0x8;
	constexpr uint32_t followup_delay = 0x10;
	constexpr uint32_t followup_target = 0x14;
	constexpr uint32_t followup_entityiotarget = 0x1C;
	constexpr uint32_t followup_entityioinput = 0x24;
	constexpr uint32_t followup_entityiodelay = 0x2C;
	constexpr uint32_t bFired = 0x30;
}

namespace ResponseParams
{
	constexpr uint32_t odds = 0x10;
	constexpr uint32_t flags = 0x12;
	constexpr uint32_t m_pFollowup = 0x18;
}

namespace CResponseCriteriaSet
{
	constexpr uint32_t m_nNumPrefixedContexts = 0x28;
	constexpr uint32_t m_bOverrideOnAppend = 0x2C;
}

namespace CRR_Response
{
	constexpr uint32_t m_Type = 0x0;
	constexpr uint32_t m_szResponseName = 0x1;
	constexpr uint32_t m_szMatchingRule = 0xC1;
	constexpr uint32_t m_Params = 0x148;
	constexpr uint32_t m_fMatchScore = 0x168;
	constexpr uint32_t m_szSpeakerContext = 0x170;
	constexpr uint32_t m_szWorldContext = 0x178;
	constexpr uint32_t m_Followup = 0x180;
	constexpr uint32_t m_pchCriteriaNames = 0x1B8;
	constexpr uint32_t m_pchCriteriaValues = 0x1D0;
}

namespace ConceptHistory_t
{
	constexpr uint32_t timeSpoken = 0x0;
	constexpr uint32_t m_response = 0x8;
}

namespace CAI_Expresser
{
	constexpr uint32_t m_flStopTalkTime = 0x38;
	constexpr uint32_t m_flStopTalkTimeWithoutDelay = 0x3C;
	constexpr uint32_t m_flBlockedTalkTime = 0x40;
	constexpr uint32_t m_voicePitch = 0x44;
	constexpr uint32_t m_flLastTimeAcceptedSpeak = 0x48;
	constexpr uint32_t m_bAllowSpeakingInterrupts = 0x4C;
	constexpr uint32_t m_bConsiderSceneInvolvementAsSpeech = 0x4D;
	constexpr uint32_t m_nLastSpokenPriority = 0x50;
	constexpr uint32_t m_pOuter = 0x58;
}

namespace CResponseQueue
{
	constexpr uint32_t m_ExpresserTargets = 0x50;
}

namespace CResponseQueue::CDeferredResponse
{
	constexpr uint32_t m_contexts = 0x10;
	constexpr uint32_t m_fDispatchTime = 0x40;
	constexpr uint32_t m_hIssuer = 0x44;
	constexpr uint32_t m_response = 0x50;
	constexpr uint32_t m_bResponseValid = 0x238;
}

namespace CAI_ExpresserWithFollowup
{
	constexpr uint32_t m_pPostponedFollowup = 0x60;
}

namespace CMultiplayer_Expresser
{
	constexpr uint32_t m_bAllowMultipleScenes = 0x70;
}

namespace CCommentarySystem
{
	constexpr uint32_t m_bCommentaryConvarsChanging = 0x11;
	constexpr uint32_t m_bCommentaryEnabledMidGame = 0x12;
	constexpr uint32_t m_flNextTeleportTime = 0x14;
	constexpr uint32_t m_iTeleportStage = 0x18;
	constexpr uint32_t m_bCheatState = 0x1C;
	constexpr uint32_t m_bIsFirstSpawnGroupToLoad = 0x1D;
	constexpr uint32_t m_hCurrentNode = 0x38;
	constexpr uint32_t m_hActiveCommentaryNode = 0x3C;
	constexpr uint32_t m_hLastCommentaryNode = 0x40;
	constexpr uint32_t m_vecNodes = 0x48;
}

namespace CPhysicsShake
{
	constexpr uint32_t m_force = 0x8;
}

namespace CGameScriptedMoveData
{
	constexpr uint32_t m_vDest = 0x0;
	constexpr uint32_t m_vSrc = 0xC;
	constexpr uint32_t m_angSrc = 0x18;
	constexpr uint32_t m_angDst = 0x24;
	constexpr uint32_t m_angCurrent = 0x30;
	constexpr uint32_t m_flAngRate = 0x3C;
	constexpr uint32_t m_flDuration = 0x40;
	constexpr uint32_t m_flStartTime = 0x44;
	constexpr uint32_t m_nPrevMoveType = 0x48;
	constexpr uint32_t m_bActive = 0x49;
	constexpr uint32_t m_bTeleportOnEnd = 0x4A;
	constexpr uint32_t m_bIgnoreRotation = 0x4B;
	constexpr uint32_t m_nType = 0x4C;
	constexpr uint32_t m_bSuccess = 0x50;
	constexpr uint32_t m_nForcedCrouchState = 0x54;
	constexpr uint32_t m_bIgnoreCollisions = 0x58;
}

namespace CGameChoreoServices
{
	constexpr uint32_t m_hOwner = 0x8;
	constexpr uint32_t m_hScriptedSequence = 0xC;
	constexpr uint32_t m_scriptState = 0x10;
	constexpr uint32_t m_choreoState = 0x14;
	constexpr uint32_t m_flTimeStartedState = 0x18;
}

namespace HullFlags_t
{
	constexpr uint32_t m_bHull_Human = 0x0;
	constexpr uint32_t m_bHull_SmallCentered = 0x1;
	constexpr uint32_t m_bHull_WideHuman = 0x2;
	constexpr uint32_t m_bHull_Tiny = 0x3;
	constexpr uint32_t m_bHull_Medium = 0x4;
	constexpr uint32_t m_bHull_TinyCentered = 0x5;
	constexpr uint32_t m_bHull_Large = 0x6;
	constexpr uint32_t m_bHull_LargeCentered = 0x7;
	constexpr uint32_t m_bHull_MediumTall = 0x8;
}

namespace CConstantForceController
{
	constexpr uint32_t m_linear = 0xC;
	constexpr uint32_t m_angular = 0x18;
	constexpr uint32_t m_linearSave = 0x24;
	constexpr uint32_t m_angularSave = 0x30;
}

namespace CMotorController
{
	constexpr uint32_t m_speed = 0x8;
	constexpr uint32_t m_maxTorque = 0xC;
	constexpr uint32_t m_axis = 0x10;
	constexpr uint32_t m_inertiaFactor = 0x1C;
}

namespace CSoundEnvelope
{
	constexpr uint32_t m_current = 0x0;
	constexpr uint32_t m_target = 0x4;
	constexpr uint32_t m_rate = 0x8;
	constexpr uint32_t m_forceupdate = 0xC;
}

namespace CCopyRecipientFilter
{
	constexpr uint32_t m_Flags = 0x8;
	constexpr uint32_t m_Recipients = 0x10;
}

namespace CSoundPatch
{
	constexpr uint32_t m_pitch = 0x8;
	constexpr uint32_t m_volume = 0x18;
	constexpr uint32_t m_shutdownTime = 0x30;
	constexpr uint32_t m_flLastTime = 0x34;
	constexpr uint32_t m_iszSoundScriptName = 0x38;
	constexpr uint32_t m_hEnt = 0x40;
	constexpr uint32_t m_soundEntityIndex = 0x44;
	constexpr uint32_t m_soundOrigin = 0x48;
	constexpr uint32_t m_isPlaying = 0x54;
	constexpr uint32_t m_Filter = 0x58;
	constexpr uint32_t m_flCloseCaptionDuration = 0x80;
	constexpr uint32_t m_bUpdatedSoundOrigin = 0x84;
	constexpr uint32_t m_iszClassName = 0x88;
}

namespace CTouchExpansionComponent
{
}

namespace dynpitchvol_base_t
{
	constexpr uint32_t preset = 0x0;
	constexpr uint32_t pitchrun = 0x4;
	constexpr uint32_t pitchstart = 0x8;
	constexpr uint32_t spinup = 0xC;
	constexpr uint32_t spindown = 0x10;
	constexpr uint32_t volrun = 0x14;
	constexpr uint32_t volstart = 0x18;
	constexpr uint32_t fadein = 0x1C;
	constexpr uint32_t fadeout = 0x20;
	constexpr uint32_t lfotype = 0x24;
	constexpr uint32_t lforate = 0x28;
	constexpr uint32_t lfomodpitch = 0x2C;
	constexpr uint32_t lfomodvol = 0x30;
	constexpr uint32_t cspinup = 0x34;
	constexpr uint32_t cspincount = 0x38;
	constexpr uint32_t pitch = 0x3C;
	constexpr uint32_t spinupsav = 0x40;
	constexpr uint32_t spindownsav = 0x44;
	constexpr uint32_t pitchfrac = 0x48;
	constexpr uint32_t vol = 0x4C;
	constexpr uint32_t fadeinsav = 0x50;
	constexpr uint32_t fadeoutsav = 0x54;
	constexpr uint32_t volfrac = 0x58;
	constexpr uint32_t lfofrac = 0x5C;
	constexpr uint32_t lfomult = 0x60;
}

namespace dynpitchvol_t
{
}

namespace ResponseContext_t
{
	constexpr uint32_t m_iszName = 0x0;
	constexpr uint32_t m_iszValue = 0x8;
	constexpr uint32_t m_fExpirationTime = 0x10;
}

namespace Relationship_t
{
	constexpr uint32_t disposition = 0x0;
	constexpr uint32_t priority = 0x4;
}

namespace CBaseEntity
{
	constexpr uint32_t m_CBodyComponent = 0x30;
	constexpr uint32_t m_NetworkTransmitComponent = 0x38;
	constexpr uint32_t m_aThinkFunctions = 0x218;
	constexpr uint32_t m_iCurrentThinkContext = 0x230;
	constexpr uint32_t m_nLastThinkTick = 0x234;
	constexpr uint32_t m_isSteadyState = 0x240;
	constexpr uint32_t m_lastNetworkChange = 0x248;
	constexpr uint32_t m_ResponseContexts = 0x258;
	constexpr uint32_t m_iszResponseContext = 0x270;
	constexpr uint32_t m_iHealth = 0x298;
	constexpr uint32_t m_iMaxHealth = 0x29C;
	constexpr uint32_t m_lifeState = 0x2A0;
	constexpr uint32_t m_flDamageAccumulator = 0x2A4;
	constexpr uint32_t m_bTakesDamage = 0x2A8;
	constexpr uint32_t m_nTakeDamageFlags = 0x2AC;
	constexpr uint32_t m_MoveCollide = 0x2B1;
	constexpr uint32_t m_MoveType = 0x2B2;
	constexpr uint32_t m_nWaterTouch = 0x2B3;
	constexpr uint32_t m_nSlimeTouch = 0x2B4;
	constexpr uint32_t m_bRestoreInHierarchy = 0x2B5;
	constexpr uint32_t m_target = 0x2B8;
	constexpr uint32_t m_flMoveDoneTime = 0x2C0;
	constexpr uint32_t m_hDamageFilter = 0x2C4;
	constexpr uint32_t m_iszDamageFilterName = 0x2C8;
	constexpr uint32_t m_nSubclassID = 0x2D0;
	constexpr uint32_t m_flAnimTime = 0x2E0;
	constexpr uint32_t m_flSimulationTime = 0x2E4;
	constexpr uint32_t m_flCreateTime = 0x2E8;
	constexpr uint32_t m_bClientSideRagdoll = 0x2EC;
	constexpr uint32_t m_ubInterpolationFrame = 0x2ED;
	constexpr uint32_t m_vPrevVPhysicsUpdatePos = 0x2F0;
	constexpr uint32_t m_iTeamNum = 0x2FC;
	constexpr uint32_t m_iGlobalname = 0x300;
	constexpr uint32_t m_iSentToClients = 0x308;
	constexpr uint32_t m_flSpeed = 0x30C;
	constexpr uint32_t m_sUniqueHammerID = 0x310;
	constexpr uint32_t m_spawnflags = 0x318;
	constexpr uint32_t m_nNextThinkTick = 0x31C;
	constexpr uint32_t m_nSimulationTick = 0x320;
	constexpr uint32_t m_OnKilled = 0x328;
	constexpr uint32_t m_fFlags = 0x350;
	constexpr uint32_t m_vecAbsVelocity = 0x354;
	constexpr uint32_t m_vecVelocity = 0x360;
	constexpr uint32_t m_vecBaseVelocity = 0x390;
	constexpr uint32_t m_nPushEnumCount = 0x39C;
	constexpr uint32_t m_pCollision = 0x3A0;
	constexpr uint32_t m_hEffectEntity = 0x3A8;
	constexpr uint32_t m_hOwnerEntity = 0x3AC;
	constexpr uint32_t m_fEffects = 0x3B0;
	constexpr uint32_t m_hGroundEntity = 0x3B4;
	constexpr uint32_t m_flFriction = 0x3B8;
	constexpr uint32_t m_flElasticity = 0x3BC;
	constexpr uint32_t m_flGravityScale = 0x3C0;
	constexpr uint32_t m_flTimeScale = 0x3C4;
	constexpr uint32_t m_flWaterLevel = 0x3C8;
	constexpr uint32_t m_bSimulatedEveryTick = 0x3CC;
	constexpr uint32_t m_bAnimatedEveryTick = 0x3CD;
	constexpr uint32_t m_nMinCPULevel = 0x3CE;
	constexpr uint32_t m_nMaxCPULevel = 0x3CF;
	constexpr uint32_t m_nMinGPULevel = 0x3D0;
	constexpr uint32_t m_nMaxGPULevel = 0x3D1;
	constexpr uint32_t m_bDisableLowViolence = 0x3D2;
	constexpr uint32_t m_nWaterType = 0x3D3;
	constexpr uint32_t m_iEFlags = 0x3D4;
	constexpr uint32_t m_OnUser1 = 0x3D8;
	constexpr uint32_t m_OnUser2 = 0x400;
	constexpr uint32_t m_OnUser3 = 0x428;
	constexpr uint32_t m_OnUser4 = 0x450;
	constexpr uint32_t m_iInitialTeamNum = 0x478;
	constexpr uint32_t m_flNavIgnoreUntilTime = 0x47C;
	constexpr uint32_t m_vecAngVelocity = 0x480;
	constexpr uint32_t m_bNetworkQuantizeOriginAndAngles = 0x48C;
	constexpr uint32_t m_bLagCompensate = 0x48D;
	constexpr uint32_t m_flOverriddenFriction = 0x490;
	constexpr uint32_t m_pBlocker = 0x494;
	constexpr uint32_t m_flLocalTime = 0x498;
	constexpr uint32_t m_flVPhysicsUpdateLocalTime = 0x49C;
}

namespace CServerOnlyEntity
{
}

namespace CServerOnlyPointEntity
{
}

namespace CLogicalEntity
{
}

namespace CColorCorrection
{
	constexpr uint32_t m_flFadeInDuration = 0x4A0;
	constexpr uint32_t m_flFadeOutDuration = 0x4A4;
	constexpr uint32_t m_flStartFadeInWeight = 0x4A8;
	constexpr uint32_t m_flStartFadeOutWeight = 0x4AC;
	constexpr uint32_t m_flTimeStartFadeIn = 0x4B0;
	constexpr uint32_t m_flTimeStartFadeOut = 0x4B4;
	constexpr uint32_t m_flMaxWeight = 0x4B8;
	constexpr uint32_t m_bStartDisabled = 0x4BC;
	constexpr uint32_t m_bEnabled = 0x4BD;
	constexpr uint32_t m_bMaster = 0x4BE;
	constexpr uint32_t m_bClientSide = 0x4BF;
	constexpr uint32_t m_bExclusive = 0x4C0;
	constexpr uint32_t m_MinFalloff = 0x4C4;
	constexpr uint32_t m_MaxFalloff = 0x4C8;
	constexpr uint32_t m_flCurWeight = 0x4CC;
	constexpr uint32_t m_netlookupFilename = 0x4D0;
	constexpr uint32_t m_lookupFilename = 0x6D0;
}

namespace CEntityFlame
{
	constexpr uint32_t m_hEntAttached = 0x4A0;
	constexpr uint32_t m_bCheapEffect = 0x4A4;
	constexpr uint32_t m_flSize = 0x4A8;
	constexpr uint32_t m_bUseHitboxes = 0x4AC;
	constexpr uint32_t m_iNumHitboxFires = 0x4B0;
	constexpr uint32_t m_flHitboxFireScale = 0x4B4;
	constexpr uint32_t m_flLifetime = 0x4B8;
	constexpr uint32_t m_hAttacker = 0x4BC;
	constexpr uint32_t m_iDangerSound = 0x4C0;
	constexpr uint32_t m_flDirectDamagePerSecond = 0x4C4;
	constexpr uint32_t m_iCustomDamageType = 0x4C8;
}

namespace CBaseFilter
{
	constexpr uint32_t m_bNegated = 0x4A0;
	constexpr uint32_t m_OnPass = 0x4A8;
	constexpr uint32_t m_OnFail = 0x4D0;
}

namespace CFilterMultiple
{
	constexpr uint32_t m_nFilterType = 0x4F8;
	constexpr uint32_t m_iFilterName = 0x500;
	constexpr uint32_t m_hFilter = 0x550;
	constexpr uint32_t m_nFilterCount = 0x578;
}

namespace CFilterProximity
{
	constexpr uint32_t m_flRadius = 0x4F8;
}

namespace CFilterLOS
{
}

namespace CFilterClass
{
	constexpr uint32_t m_iFilterClass = 0x4F8;
}

namespace CBaseFire
{
	constexpr uint32_t m_flScale = 0x4A0;
	constexpr uint32_t m_flStartScale = 0x4A4;
	constexpr uint32_t m_flScaleTime = 0x4A8;
	constexpr uint32_t m_nFlags = 0x4AC;
}

namespace CFireSmoke
{
	constexpr uint32_t m_nFlameModelIndex = 0x4B0;
	constexpr uint32_t m_nFlameFromAboveModelIndex = 0x4B4;
}

namespace CFishPool
{
	constexpr uint32_t m_fishCount = 0x4B0;
	constexpr uint32_t m_maxRange = 0x4B4;
	constexpr uint32_t m_swimDepth = 0x4B8;
	constexpr uint32_t m_waterLevel = 0x4BC;
	constexpr uint32_t m_isDormant = 0x4C0;
	constexpr uint32_t m_fishes = 0x4C8;
	constexpr uint32_t m_visTimer = 0x4E0;
}

namespace CInfoData
{
}

namespace locksound_t
{
	constexpr uint32_t sLockedSound = 0x8;
	constexpr uint32_t sUnlockedSound = 0x10;
	constexpr uint32_t flwaitSound = 0x18;
}

namespace CLogicBranch
{
	constexpr uint32_t m_bInValue = 0x4A0;
	constexpr uint32_t m_Listeners = 0x4A8;
	constexpr uint32_t m_OnTrue = 0x4C0;
	constexpr uint32_t m_OnFalse = 0x4E8;
}

namespace CLogicDistanceCheck
{
	constexpr uint32_t m_iszEntityA = 0x4A0;
	constexpr uint32_t m_iszEntityB = 0x4A8;
	constexpr uint32_t m_flZone1Distance = 0x4B0;
	constexpr uint32_t m_flZone2Distance = 0x4B4;
	constexpr uint32_t m_InZone1 = 0x4B8;
	constexpr uint32_t m_InZone2 = 0x4E0;
	constexpr uint32_t m_InZone3 = 0x508;
}

namespace VelocitySampler
{
	constexpr uint32_t m_prevSample = 0x0;
	constexpr uint32_t m_fPrevSampleTime = 0xC;
	constexpr uint32_t m_fIdealSampleRate = 0x10;
}

namespace SimpleConstraintSoundProfile
{
	constexpr uint32_t eKeypoints = 0x8;
	constexpr uint32_t m_keyPoints = 0xC;
	constexpr uint32_t m_reversalSoundThresholds = 0x14;
}

namespace ConstraintSoundInfo
{
	constexpr uint32_t m_vSampler = 0x8;
	constexpr uint32_t m_soundProfile = 0x20;
	constexpr uint32_t m_forwardAxis = 0x40;
	constexpr uint32_t m_iszTravelSoundFwd = 0x50;
	constexpr uint32_t m_iszTravelSoundBack = 0x58;
	constexpr uint32_t m_iszReversalSounds = 0x68;
	constexpr uint32_t m_bPlayTravelSound = 0x80;
	constexpr uint32_t m_bPlayReversalSound = 0x81;
}

namespace CSmoothFunc
{
	constexpr uint32_t m_flSmoothAmplitude = 0x8;
	constexpr uint32_t m_flSmoothBias = 0xC;
	constexpr uint32_t m_flSmoothDuration = 0x10;
	constexpr uint32_t m_flSmoothRemainingTime = 0x14;
	constexpr uint32_t m_nSmoothDir = 0x18;
}

namespace magnetted_objects_t
{
	constexpr uint32_t hEntity = 0x8;
}

namespace CPointPrefab
{
	constexpr uint32_t m_targetMapName = 0x4A0;
	constexpr uint32_t m_forceWorldGroupID = 0x4A8;
	constexpr uint32_t m_fixupNames = 0x4B0;
}

namespace CSkyboxReference
{
	constexpr uint32_t m_worldGroupId = 0x4A0;
	constexpr uint32_t m_hSkyCamera = 0x4A4;
}

namespace CSkyCamera
{
	constexpr uint32_t m_skyboxData = 0x4A0;
	constexpr uint32_t m_skyboxSlotToken = 0x530;
	constexpr uint32_t m_bUseAngles = 0x534;
	constexpr uint32_t m_pNext = 0x538;
}

namespace CSound
{
	constexpr uint32_t m_hOwner = 0x0;
	constexpr uint32_t m_hTarget = 0x4;
	constexpr uint32_t m_iVolume = 0x8;
	constexpr uint32_t m_flOcclusionScale = 0xC;
	constexpr uint32_t m_iType = 0x10;
	constexpr uint32_t m_iNextAudible = 0x14;
	constexpr uint32_t m_flExpireTime = 0x18;
	constexpr uint32_t m_iNext = 0x1C;
	constexpr uint32_t m_bNoExpirationTime = 0x1E;
	constexpr uint32_t m_ownerChannelIndex = 0x20;
	constexpr uint32_t m_vecOrigin = 0x24;
	constexpr uint32_t m_bHasOwner = 0x30;
}

namespace CEnvSoundscape
{
	constexpr uint32_t m_OnPlay = 0x4A0;
	constexpr uint32_t m_flRadius = 0x4C8;
	constexpr uint32_t m_soundscapeName = 0x4D0;
	constexpr uint32_t m_soundEventName = 0x4D8;
	constexpr uint32_t m_bOverrideWithEvent = 0x4E0;
	constexpr uint32_t m_soundscapeIndex = 0x4E4;
	constexpr uint32_t m_soundscapeEntityListId = 0x4E8;
	constexpr uint32_t m_soundEventHash = 0x4EC;
	constexpr uint32_t m_positionNames = 0x4F0;
	constexpr uint32_t m_hProxySoundscape = 0x530;
	constexpr uint32_t m_bDisabled = 0x534;
}

namespace CEnvSoundscapeProxy
{
	constexpr uint32_t m_MainSoundscapeName = 0x538;
}

namespace CEnvSoundscapeTriggerable
{
}

namespace CTriggerCamera
{
	constexpr uint32_t m_hPlayer = 0x4A0;
	constexpr uint32_t m_hTarget = 0x4A4;
	constexpr uint32_t m_pPath = 0x4A8;
	constexpr uint32_t m_sPath = 0x4B0;
	constexpr uint32_t m_flWait = 0x4B8;
	constexpr uint32_t m_flReturnTime = 0x4BC;
	constexpr uint32_t m_flStopTime = 0x4C0;
	constexpr uint32_t m_moveDistance = 0x4C4;
	constexpr uint32_t m_targetSpeed = 0x4C8;
	constexpr uint32_t m_initialSpeed = 0x4CC;
	constexpr uint32_t m_acceleration = 0x4D0;
	constexpr uint32_t m_deceleration = 0x4D4;
	constexpr uint32_t m_state = 0x4D8;
	constexpr uint32_t m_vecMoveDir = 0x4DC;
	constexpr uint32_t m_fov = 0x4E8;
	constexpr uint32_t m_fovSpeed = 0x4EC;
	constexpr uint32_t m_iszTargetAttachment = 0x4F0;
	constexpr uint32_t m_iAttachmentIndex = 0x4F8;
	constexpr uint32_t m_bSnapToGoal = 0x4F9;
	constexpr uint32_t m_bInterpolatePosition = 0x4FA;
	constexpr uint32_t m_vStartPos = 0x4FC;
	constexpr uint32_t m_vEndPos = 0x508;
	constexpr uint32_t m_flInterpStartTime = 0x514;
	constexpr uint32_t m_nPlayerButtons = 0x518;
	constexpr uint32_t m_bOldTakesDamage = 0x520;
	constexpr uint32_t m_nOldTakeDamageFlags = 0x524;
	constexpr uint32_t m_OnEndFollow = 0x528;
}

namespace lerpdata_t
{
	constexpr uint32_t m_hEnt = 0x0;
	constexpr uint32_t m_MoveType = 0x4;
	constexpr uint32_t m_flStartTime = 0x8;
	constexpr uint32_t m_vecStartOrigin = 0xC;
	constexpr uint32_t m_qStartRot = 0x20;
	constexpr uint32_t m_nFXIndex = 0x30;
}

namespace CNavLinkAnimgraphVar
{
	constexpr uint32_t m_strAnimgraphVar = 0x0;
	constexpr uint32_t m_unAlignmentDegrees = 0x8;
}

namespace CNavLinkMovementVData
{
	constexpr uint32_t m_bIsInterpolated = 0x0;
	constexpr uint32_t m_unRecommendedDistance = 0x4;
	constexpr uint32_t m_vecAnimgraphVars = 0x8;
}

namespace CNavVolumeMarkupVolume
{
}

namespace CNavVolumeCalculatedVector
{
}

namespace CNavVolumeBreadthFirstSearch
{
	constexpr uint32_t m_vStartPos = 0xA0;
	constexpr uint32_t m_flSearchDist = 0xAC;
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

namespace CEnvDetailController
{
	constexpr uint32_t m_flFadeStartDist = 0x4A0;
	constexpr uint32_t m_flFadeEndDist = 0x4A4;
}

namespace CEnvWindShared
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
	constexpr uint32_t m_OnGustStart = 0x70;
	constexpr uint32_t m_OnGustEnd = 0x98;
	constexpr uint32_t m_flVariationTime = 0xC0;
	constexpr uint32_t m_flSwayTime = 0xC4;
	constexpr uint32_t m_flSimTime = 0xC8;
	constexpr uint32_t m_flSwitchTime = 0xCC;
	constexpr uint32_t m_flAveWindSpeed = 0xD0;
	constexpr uint32_t m_bGusting = 0xD4;
	constexpr uint32_t m_flWindAngleVariation = 0xD8;
	constexpr uint32_t m_flWindSpeedVariation = 0xDC;
	constexpr uint32_t m_iEntIndex = 0xE0;
}

namespace CEnvWindShared::WindAveEvent_t
{
	constexpr uint32_t m_flStartWindSpeed = 0x0;
	constexpr uint32_t m_flAveWindSpeed = 0x4;
}

namespace CEnvWindShared::WindVariationEvent_t
{
	constexpr uint32_t m_flWindAngleVariation = 0x0;
	constexpr uint32_t m_flWindSpeedVariation = 0x4;
}

namespace CInfoLadderDismount
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

namespace CShatterGlassShard
{
	constexpr uint32_t m_hShardHandle = 0x8;
	constexpr uint32_t m_vecPanelVertices = 0x10;
	constexpr uint32_t m_vLocalPanelSpaceOrigin = 0x28;
	constexpr uint32_t m_hModel = 0x30;
	constexpr uint32_t m_hPhysicsEntity = 0x38;
	constexpr uint32_t m_hParentPanel = 0x3C;
	constexpr uint32_t m_hParentShard = 0x40;
	constexpr uint32_t m_ShatterStressType = 0x44;
	constexpr uint32_t m_vecStressVelocity = 0x48;
	constexpr uint32_t m_bCreatedModel = 0x54;
	constexpr uint32_t m_flLongestEdge = 0x58;
	constexpr uint32_t m_flShortestEdge = 0x5C;
	constexpr uint32_t m_flLongestAcross = 0x60;
	constexpr uint32_t m_flShortestAcross = 0x64;
	constexpr uint32_t m_flSumOfAllEdges = 0x68;
	constexpr uint32_t m_flArea = 0x6C;
	constexpr uint32_t m_nOnFrameEdge = 0x70;
	constexpr uint32_t m_nParentPanelsNthShard = 0x74;
	constexpr uint32_t m_nSubShardGeneration = 0x78;
	constexpr uint32_t m_vecAverageVertPosition = 0x7C;
	constexpr uint32_t m_bAverageVertPositionIsValid = 0x84;
	constexpr uint32_t m_vecPanelSpaceStressPositionA = 0x88;
	constexpr uint32_t m_vecPanelSpaceStressPositionB = 0x90;
	constexpr uint32_t m_bStressPositionAIsValid = 0x98;
	constexpr uint32_t m_bStressPositionBIsValid = 0x99;
	constexpr uint32_t m_bFlaggedForRemoval = 0x9A;
	constexpr uint32_t m_flPhysicsEntitySpawnedAtTime = 0x9C;
	constexpr uint32_t m_bShatterRateLimited = 0xA0;
	constexpr uint32_t m_hEntityHittingMe = 0xA4;
	constexpr uint32_t m_vecNeighbors = 0xA8;
}

namespace CGameRulesProxy
{
}

namespace CGameRules
{
	constexpr uint32_t m_szQuestName = 0x8;
	constexpr uint32_t m_nQuestPhase = 0x88;
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

namespace IVehicle
{
}

namespace CMultiplayRules
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

namespace fogplayerparams_t
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

namespace IRagdoll
{
}

namespace ragdollelement_t
{
	constexpr uint32_t originParentSpace = 0x0;
	constexpr uint32_t parentIndex = 0x20;
	constexpr uint32_t m_flRadius = 0x24;
}

namespace ragdoll_t
{
	constexpr uint32_t list = 0x0;
	constexpr uint32_t boneIndex = 0x18;
	constexpr uint32_t allowStretch = 0x30;
	constexpr uint32_t unused = 0x31;
}

namespace PhysicsRagdollPose_t
{
	constexpr uint32_t __m_pChainEntity = 0x8;
	constexpr uint32_t m_Transforms = 0x30;
}

namespace CSceneEventInfo
{
	constexpr uint32_t m_iLayer = 0x0;
	constexpr uint32_t m_iPriority = 0x4;
	constexpr uint32_t m_hSequence = 0x8;
	constexpr uint32_t m_flWeight = 0xC;
	constexpr uint32_t m_bIsMoving = 0x10;
	constexpr uint32_t m_bHasArrived = 0x11;
	constexpr uint32_t m_flInitialYaw = 0x14;
	constexpr uint32_t m_flTargetYaw = 0x18;
	constexpr uint32_t m_flFacingYaw = 0x1C;
	constexpr uint32_t m_nType = 0x20;
	constexpr uint32_t m_flNext = 0x24;
	constexpr uint32_t m_bIsGesture = 0x28;
	constexpr uint32_t m_bShouldRemove = 0x29;
	constexpr uint32_t m_hTarget = 0x54;
	constexpr uint32_t m_nSceneEventId = 0x58;
	constexpr uint32_t m_bClientSide = 0x5C;
	constexpr uint32_t m_bStarted = 0x5D;
}

namespace ParticleIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace AmmoIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace CEntitySubclassVDataBase
{
}

namespace thinkfunc_t
{
	constexpr uint32_t m_hFn = 0x8;
	constexpr uint32_t m_nContext = 0x10;
	constexpr uint32_t m_nNextThinkTick = 0x14;
	constexpr uint32_t m_nLastThinkTick = 0x18;
}

namespace RagdollCreationParams_t
{
	constexpr uint32_t m_vForce = 0x0;
	constexpr uint32_t m_nForceBone = 0xC;
}

namespace hudtextparms_t
{
	constexpr uint32_t color1 = 0x0;
	constexpr uint32_t color2 = 0x4;
	constexpr uint32_t effect = 0x8;
	constexpr uint32_t channel = 0x9;
	constexpr uint32_t x = 0xC;
	constexpr uint32_t y = 0x10;
}

namespace CSimpleSimTimer
{
	constexpr uint32_t m_next = 0x0;
	constexpr uint32_t m_nWorldGroupId = 0x4;
}

namespace CSimTimer
{
	constexpr uint32_t m_interval = 0x8;
}

namespace CRandSimTimer
{
	constexpr uint32_t m_minInterval = 0x8;
	constexpr uint32_t m_maxInterval = 0xC;
}

namespace CStopwatchBase
{
	constexpr uint32_t m_fIsRunning = 0x8;
}

namespace CSimpleStopwatch
{
}

namespace CStopwatch
{
	constexpr uint32_t m_interval = 0xC;
}

namespace CRandStopwatch
{
	constexpr uint32_t m_minInterval = 0xC;
	constexpr uint32_t m_maxInterval = 0x10;
}

namespace CSingleplayRules
{
	constexpr uint32_t m_bSinglePlayerGameEnding = 0x90;
}

namespace CSoundOpvarSetPointBase
{
	constexpr uint32_t m_bDisabled = 0x4A0;
	constexpr uint32_t m_hSource = 0x4A4;
	constexpr uint32_t m_iszSourceEntityName = 0x4B0;
	constexpr uint32_t m_vLastPosition = 0x508;
	constexpr uint32_t m_iszStackName = 0x518;
	constexpr uint32_t m_iszOperatorName = 0x520;
	constexpr uint32_t m_iszOpvarName = 0x528;
	constexpr uint32_t m_iOpvarIndex = 0x530;
	constexpr uint32_t m_bUseAutoCompare = 0x534;
}

namespace CSoundOpvarSetPointEntity
{
	constexpr uint32_t m_OnEnter = 0x538;
	constexpr uint32_t m_OnExit = 0x560;
	constexpr uint32_t m_bAutoDisable = 0x588;
	constexpr uint32_t m_flDistanceMin = 0x5CC;
	constexpr uint32_t m_flDistanceMax = 0x5D0;
	constexpr uint32_t m_flDistanceMapMin = 0x5D4;
	constexpr uint32_t m_flDistanceMapMax = 0x5D8;
	constexpr uint32_t m_flOcclusionRadius = 0x5DC;
	constexpr uint32_t m_flOcclusionMin = 0x5E0;
	constexpr uint32_t m_flOcclusionMax = 0x5E4;
	constexpr uint32_t m_flValSetOnDisable = 0x5E8;
	constexpr uint32_t m_bSetValueOnDisable = 0x5EC;
	constexpr uint32_t m_nSimulationMode = 0x5F0;
	constexpr uint32_t m_nVisibilitySamples = 0x5F4;
	constexpr uint32_t m_vDynamicProxyPoint = 0x5F8;
	constexpr uint32_t m_flDynamicMaximumOcclusion = 0x604;
	constexpr uint32_t m_hDynamicEntity = 0x608;
	constexpr uint32_t m_iszDynamicEntityName = 0x610;
	constexpr uint32_t m_flPathingDistanceNormFactor = 0x618;
	constexpr uint32_t m_vPathingSourcePos = 0x61C;
	constexpr uint32_t m_vPathingListenerPos = 0x628;
}

namespace CSoundOpvarSetAABBEntity
{
	constexpr uint32_t m_vDistanceInnerMins = 0x638;
	constexpr uint32_t m_vDistanceInnerMaxs = 0x644;
	constexpr uint32_t m_vDistanceOuterMins = 0x650;
	constexpr uint32_t m_vDistanceOuterMaxs = 0x65C;
	constexpr uint32_t m_nAABBDirection = 0x668;
	constexpr uint32_t m_vInnerMins = 0x66C;
	constexpr uint32_t m_vInnerMaxs = 0x678;
	constexpr uint32_t m_vOuterMins = 0x684;
	constexpr uint32_t m_vOuterMaxs = 0x690;
}

namespace CSoundOpvarSetOBBEntity
{
}

namespace CSoundOpvarSetPathCornerEntity
{
	constexpr uint32_t m_flDistMinSqr = 0x650;
	constexpr uint32_t m_flDistMaxSqr = 0x654;
	constexpr uint32_t m_iszPathCornerEntityName = 0x658;
}

namespace CSoundOpvarSetOBBWindEntity
{
	constexpr uint32_t m_vMins = 0x538;
	constexpr uint32_t m_vMaxs = 0x544;
	constexpr uint32_t m_vDistanceMins = 0x550;
	constexpr uint32_t m_vDistanceMaxs = 0x55C;
	constexpr uint32_t m_flWindMin = 0x568;
	constexpr uint32_t m_flWindMax = 0x56C;
	constexpr uint32_t m_flWindMapMin = 0x570;
	constexpr uint32_t m_flWindMapMax = 0x574;
}

namespace CTakeDamageInfo
{
	constexpr uint32_t m_vecDamageForce = 0x8;
	constexpr uint32_t m_vecDamagePosition = 0x14;
	constexpr uint32_t m_vecReportedPosition = 0x20;
	constexpr uint32_t m_vecDamageDirection = 0x2C;
	constexpr uint32_t m_hInflictor = 0x38;
	constexpr uint32_t m_hAttacker = 0x3C;
	constexpr uint32_t m_hAbility = 0x40;
	constexpr uint32_t m_flDamage = 0x44;
	constexpr uint32_t m_bitsDamageType = 0x48;
	constexpr uint32_t m_iDamageCustom = 0x4C;
	constexpr uint32_t m_iAmmoType = 0x50;
	constexpr uint32_t m_flOriginalDamage = 0x60;
	constexpr uint32_t m_nDamageFlags = 0x70;
	constexpr uint32_t m_nNumObjectsPenetrated = 0x74;
	constexpr uint32_t m_hScriptInstance = 0x78;
	constexpr uint32_t m_bInTakeDamageFlow = 0x98;
}

namespace CTakeDamageResult
{
	constexpr uint32_t m_nHealthLost = 0x0;
	constexpr uint32_t m_nDamageTaken = 0x4;
}

namespace SummaryTakeDamageInfo_t
{
	constexpr uint32_t nSummarisedCount = 0x0;
	constexpr uint32_t info = 0x8;
	constexpr uint32_t result = 0xA8;
	constexpr uint32_t hTarget = 0xB0;
}

namespace CTakeDamageSummaryScopeGuard
{
	constexpr uint32_t m_vecSummaries = 0x8;
}

namespace CTeamplayRules
{
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

namespace IEconItemInterface
{
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

namespace CAttributeContainer
{
	constexpr uint32_t m_Item = 0x50;
}

namespace IHasAttributes
{
}

namespace GameAmmoTypeInfo_t
{
	constexpr uint32_t m_nBuySize = 0x38;
	constexpr uint32_t m_nCost = 0x3C;
}

namespace EntitySpottedState_t
{
	constexpr uint32_t m_bSpotted = 0x8;
	constexpr uint32_t m_bSpottedByMask = 0xC;
}

namespace SpawnPoint
{
	constexpr uint32_t m_iPriority = 0x4A0;
	constexpr uint32_t m_bEnabled = 0x4A4;
	constexpr uint32_t m_nType = 0x4A8;
}

namespace SpawnPointCoopEnemy
{
	constexpr uint32_t m_szWeaponsToGive = 0x4B0;
	constexpr uint32_t m_szPlayerModelToUse = 0x4B8;
	constexpr uint32_t m_nArmorToSpawnWith = 0x4C0;
	constexpr uint32_t m_nDefaultBehavior = 0x4C4;
	constexpr uint32_t m_nBotDifficulty = 0x4C8;
	constexpr uint32_t m_bIsAgressive = 0x4CC;
	constexpr uint32_t m_bStartAsleep = 0x4CD;
	constexpr uint32_t m_flHideRadius = 0x4D0;
	constexpr uint32_t m_szBehaviorTreeFile = 0x4E0;
}

namespace CCSGameRulesProxy
{
	constexpr uint32_t m_pGameRules = 0x4A0;
}

namespace CCSGameRules
{
	constexpr uint32_t __m_pChainEntity = 0x98;
	constexpr uint32_t m_coopMissionManager = 0xC0;
	constexpr uint32_t m_bFreezePeriod = 0xC4;
	constexpr uint32_t m_bWarmupPeriod = 0xC5;
	constexpr uint32_t m_fWarmupPeriodEnd = 0xC8;
	constexpr uint32_t m_fWarmupPeriodStart = 0xCC;
	constexpr uint32_t m_bTerroristTimeOutActive = 0xD0;
	constexpr uint32_t m_bCTTimeOutActive = 0xD1;
	constexpr uint32_t m_flTerroristTimeOutRemaining = 0xD4;
	constexpr uint32_t m_flCTTimeOutRemaining = 0xD8;
	constexpr uint32_t m_nTerroristTimeOuts = 0xDC;
	constexpr uint32_t m_nCTTimeOuts = 0xE0;
	constexpr uint32_t m_bTechnicalTimeOut = 0xE4;
	constexpr uint32_t m_bMatchWaitingForResume = 0xE5;
	constexpr uint32_t m_iRoundTime = 0xE8;
	constexpr uint32_t m_fMatchStartTime = 0xEC;
	constexpr uint32_t m_fRoundStartTime = 0xF0;
	constexpr uint32_t m_flRestartRoundTime = 0xF4;
	constexpr uint32_t m_bGameRestart = 0xF8;
	constexpr uint32_t m_flGameStartTime = 0xFC;
	constexpr uint32_t m_timeUntilNextPhaseStarts = 0x100;
	constexpr uint32_t m_gamePhase = 0x104;
	constexpr uint32_t m_totalRoundsPlayed = 0x108;
	constexpr uint32_t m_nRoundsPlayedThisPhase = 0x10C;
	constexpr uint32_t m_nOvertimePlaying = 0x110;
	constexpr uint32_t m_iHostagesRemaining = 0x114;
	constexpr uint32_t m_bAnyHostageReached = 0x118;
	constexpr uint32_t m_bMapHasBombTarget = 0x119;
	constexpr uint32_t m_bMapHasRescueZone = 0x11A;
	constexpr uint32_t m_bMapHasBuyZone = 0x11B;
	constexpr uint32_t m_bIsQueuedMatchmaking = 0x11C;
	constexpr uint32_t m_nQueuedMatchmakingMode = 0x120;
	constexpr uint32_t m_bIsValveDS = 0x124;
	constexpr uint32_t m_bLogoMap = 0x125;
	constexpr uint32_t m_bPlayAllStepSoundsOnServer = 0x126;
	constexpr uint32_t m_iNumGunGameProgressiveWeaponsCT = 0x128;
	constexpr uint32_t m_iNumGunGameProgressiveWeaponsT = 0x12C;
	constexpr uint32_t m_iSpectatorSlotCount = 0x130;
	constexpr uint32_t m_GGProgressiveWeaponOrderCT = 0x134;
	constexpr uint32_t m_GGProgressiveWeaponOrderT = 0x224;
	constexpr uint32_t m_GGProgressiveWeaponKillUpgradeOrderCT = 0x314;
	constexpr uint32_t m_GGProgressiveWeaponKillUpgradeOrderT = 0x404;
	constexpr uint32_t m_MatchDevice = 0x4F4;
	constexpr uint32_t m_bHasMatchStarted = 0x4F8;
	constexpr uint32_t m_flDMBonusStartTime = 0x4FC;
	constexpr uint32_t m_flDMBonusTimeLength = 0x500;
	constexpr uint32_t m_unDMBonusWeaponLoadoutSlot = 0x504;
	constexpr uint32_t m_bDMBonusActive = 0x506;
	constexpr uint32_t m_nNextMapInMapgroup = 0x508;
	constexpr uint32_t m_szTournamentEventName = 0x50C;
	constexpr uint32_t m_szTournamentEventStage = 0x70C;
	constexpr uint32_t m_szMatchStatTxt = 0x90C;
	constexpr uint32_t m_szTournamentPredictionsTxt = 0xB0C;
	constexpr uint32_t m_nTournamentPredictionsPct = 0xD0C;
	constexpr uint32_t m_flCMMItemDropRevealStartTime = 0xD10;
	constexpr uint32_t m_flCMMItemDropRevealEndTime = 0xD14;
	constexpr uint32_t m_bIsDroppingItems = 0xD18;
	constexpr uint32_t m_bIsQuestEligible = 0xD19;
	constexpr uint32_t m_nGuardianModeWaveNumber = 0xD1C;
	constexpr uint32_t m_nGuardianModeSpecialKillsRemaining = 0xD20;
	constexpr uint32_t m_nGuardianModeSpecialWeaponNeeded = 0xD24;
	constexpr uint32_t m_nGuardianGrenadesToGiveBots = 0xD28;
	constexpr uint32_t m_nNumHeaviesToSpawn = 0xD2C;
	constexpr uint32_t m_numGlobalGiftsGiven = 0xD30;
	constexpr uint32_t m_numGlobalGifters = 0xD34;
	constexpr uint32_t m_numGlobalGiftsPeriodSeconds = 0xD38;
	constexpr uint32_t m_arrFeaturedGiftersAccounts = 0xD3C;
	constexpr uint32_t m_arrFeaturedGiftersGifts = 0xD4C;
	constexpr uint32_t m_arrProhibitedItemIndices = 0xD5C;
	constexpr uint32_t m_arrTournamentActiveCasterAccounts = 0xE24;
	constexpr uint32_t m_numBestOfMaps = 0xE34;
	constexpr uint32_t m_nHalloweenMaskListSeed = 0xE38;
	constexpr uint32_t m_bBombDropped = 0xE3C;
	constexpr uint32_t m_bBombPlanted = 0xE3D;
	constexpr uint32_t m_iRoundWinStatus = 0xE40;
	constexpr uint32_t m_eRoundWinReason = 0xE44;
	constexpr uint32_t m_bTCantBuy = 0xE48;
	constexpr uint32_t m_bCTCantBuy = 0xE49;
	constexpr uint32_t m_flGuardianBuyUntilTime = 0xE4C;
	constexpr uint32_t m_iMatchStats_RoundResults = 0xE50;
	constexpr uint32_t m_iMatchStats_PlayersAlive_CT = 0xEC8;
	constexpr uint32_t m_iMatchStats_PlayersAlive_T = 0xF40;
	constexpr uint32_t m_TeamRespawnWaveTimes = 0xFB8;
	constexpr uint32_t m_flNextRespawnWave = 0x1038;
	constexpr uint32_t m_nServerQuestID = 0x10B8;
	constexpr uint32_t m_bDontIncrementCoopWave = 0x10BC;
	constexpr uint32_t m_bSpawnedTerrorHuntHeavy = 0x10BD;
	constexpr uint32_t m_nEndMatchMapGroupVoteTypes = 0x10C0;
	constexpr uint32_t m_nEndMatchMapGroupVoteOptions = 0x10E8;
	constexpr uint32_t m_nEndMatchMapVoteWinner = 0x1110;
	constexpr uint32_t m_iNumConsecutiveCTLoses = 0x1114;
	constexpr uint32_t m_iNumConsecutiveTerroristLoses = 0x1118;
	constexpr uint32_t m_bHasHostageBeenTouched = 0x1138;
	constexpr uint32_t m_flIntermissionStartTime = 0x113C;
	constexpr uint32_t m_flIntermissionEndTime = 0x1140;
	constexpr uint32_t m_bLevelInitialized = 0x1144;
	constexpr uint32_t m_iTotalRoundsPlayed = 0x1148;
	constexpr uint32_t m_iUnBalancedRounds = 0x114C;
	constexpr uint32_t m_endMatchOnRoundReset = 0x1150;
	constexpr uint32_t m_endMatchOnThink = 0x1151;
	constexpr uint32_t m_iFreezeTime = 0x1154;
	constexpr uint32_t m_iNumTerrorist = 0x1158;
	constexpr uint32_t m_iNumCT = 0x115C;
	constexpr uint32_t m_iNumSpawnableTerrorist = 0x1160;
	constexpr uint32_t m_iNumSpawnableCT = 0x1164;
	constexpr uint32_t m_arrSelectedHostageSpawnIndices = 0x1168;
	constexpr uint32_t m_bFirstConnected = 0x1180;
	constexpr uint32_t m_bCompleteReset = 0x1181;
	constexpr uint32_t m_bPickNewTeamsOnReset = 0x1182;
	constexpr uint32_t m_bScrambleTeamsOnRestart = 0x1183;
	constexpr uint32_t m_bSwapTeamsOnRestart = 0x1184;
	constexpr uint32_t m_nEndMatchTiedVotes = 0x1190;
	constexpr uint32_t m_bNeedToAskPlayersForContinueVote = 0x11AC;
	constexpr uint32_t m_numQueuedMatchmakingAccounts = 0x11B0;
	constexpr uint32_t m_pQueuedMatchmakingReservationString = 0x11B8;
	constexpr uint32_t m_numTotalTournamentDrops = 0x11C0;
	constexpr uint32_t m_numSpectatorsCountMax = 0x11C4;
	constexpr uint32_t m_numSpectatorsCountMaxTV = 0x11C8;
	constexpr uint32_t m_numSpectatorsCountMaxLnk = 0x11CC;
	constexpr uint32_t m_bForceTeamChangeSilent = 0x11D8;
	constexpr uint32_t m_bLoadingRoundBackupData = 0x11D9;
	constexpr uint32_t m_nMatchInfoShowType = 0x1210;
	constexpr uint32_t m_flMatchInfoDecidedTime = 0x1214;
	constexpr uint32_t m_flCoopRespawnAndHealTime = 0x1230;
	constexpr uint32_t m_coopBonusCoinsFound = 0x1234;
	constexpr uint32_t m_coopBonusPistolsOnly = 0x1238;
	constexpr uint32_t m_coopPlayersInDeploymentZone = 0x1239;
	constexpr uint32_t m_coopMissionDeadPlayerRespawnEnabled = 0x123A;
	constexpr uint32_t mTeamDMLastWinningTeamNumber = 0x123C;
	constexpr uint32_t mTeamDMLastThinkTime = 0x1240;
	constexpr uint32_t m_flTeamDMLastAnnouncementTime = 0x1244;
	constexpr uint32_t m_iAccountTerrorist = 0x1248;
	constexpr uint32_t m_iAccountCT = 0x124C;
	constexpr uint32_t m_iSpawnPointCount_Terrorist = 0x1250;
	constexpr uint32_t m_iSpawnPointCount_CT = 0x1254;
	constexpr uint32_t m_iMaxNumTerrorists = 0x1258;
	constexpr uint32_t m_iMaxNumCTs = 0x125C;
	constexpr uint32_t m_iLoserBonus = 0x1260;
	constexpr uint32_t m_iLoserBonusMostRecentTeam = 0x1264;
	constexpr uint32_t m_tmNextPeriodicThink = 0x1268;
	constexpr uint32_t m_bVoiceWonMatchBragFired = 0x126C;
	constexpr uint32_t m_fWarmupNextChatNoticeTime = 0x1270;
	constexpr uint32_t m_iHostagesRescued = 0x1278;
	constexpr uint32_t m_iHostagesTouched = 0x127C;
	constexpr uint32_t m_flNextHostageAnnouncement = 0x1280;
	constexpr uint32_t m_bNoTerroristsKilled = 0x1284;
	constexpr uint32_t m_bNoCTsKilled = 0x1285;
	constexpr uint32_t m_bNoEnemiesKilled = 0x1286;
	constexpr uint32_t m_bCanDonateWeapons = 0x1287;
	constexpr uint32_t m_firstKillTime = 0x128C;
	constexpr uint32_t m_firstBloodTime = 0x1294;
	constexpr uint32_t m_hostageWasInjured = 0x12B0;
	constexpr uint32_t m_hostageWasKilled = 0x12B1;
	constexpr uint32_t m_bVoteCalled = 0x12C0;
	constexpr uint32_t m_bServerVoteOnReset = 0x12C1;
	constexpr uint32_t m_flVoteCheckThrottle = 0x12C4;
	constexpr uint32_t m_bBuyTimeEnded = 0x12C8;
	constexpr uint32_t m_nLastFreezeEndBeep = 0x12CC;
	constexpr uint32_t m_iHaveEscaped = 0x12D0;
	constexpr uint32_t m_bMapHasEscapeZone = 0x12D4;
	constexpr uint32_t m_iNumEscapers = 0x12D8;
	constexpr uint32_t m_iNumEscapeRounds = 0x12DC;
	constexpr uint32_t m_bTargetBombed = 0x12E0;
	constexpr uint32_t m_bBombDefused = 0x12E1;
	constexpr uint32_t m_bMapHasBombZone = 0x12E2;
	constexpr uint32_t m_bGunGameRespawnWithBomb = 0x12E3;
	constexpr uint32_t m_fGunGameBombRespawnTimer = 0x12E4;
	constexpr uint32_t m_vecMainCTSpawnPos = 0x1304;
	constexpr uint32_t m_CTSpawnPointsMasterList = 0x1310;
	constexpr uint32_t m_TerroristSpawnPointsMasterList = 0x1328;
	constexpr uint32_t m_iNextCTSpawnPoint = 0x1340;
	constexpr uint32_t m_iNextTerroristSpawnPoint = 0x1344;
	constexpr uint32_t m_CTSpawnPoints = 0x1348;
	constexpr uint32_t m_TerroristSpawnPoints = 0x1360;
	constexpr uint32_t m_bIsUnreservedGameServer = 0x1378;
	constexpr uint32_t m_fAutobalanceDisplayTime = 0x137C;
	constexpr uint32_t m_bAllowWeaponSwitch = 0x15E8;
	constexpr uint32_t m_bRoundTimeWarningTriggered = 0x15E9;
	constexpr uint32_t m_phaseChangeAnnouncementTime = 0x15EC;
	constexpr uint32_t m_fNextUpdateTeamClanNamesTime = 0x15F0;
	constexpr uint32_t m_flLastThinkTime = 0x15F4;
	constexpr uint32_t m_fAccumulatedRoundOffDamage = 0x15F8;
	constexpr uint32_t m_nShorthandedBonusLastEvalRound = 0x15FC;
	constexpr uint32_t m_bHasTriggeredRoundStartMusic = 0x1860;
	constexpr uint32_t m_bHasTriggeredCoopSpawnReset = 0x1861;
	constexpr uint32_t m_bSwitchingTeamsAtRoundReset = 0x1862;
	constexpr uint32_t m_iMaxGunGameProgressiveWeaponIndex = 0x1864;
	constexpr uint32_t m_SurvivalRules = 0x1880;
	constexpr uint32_t m_BtGlobalBlackboard = 0x3518;
	constexpr uint32_t m_hPlayerResource = 0x3580;
	constexpr uint32_t m_RetakeRules = 0x3588;
	constexpr uint32_t m_GuardianBotSkillLevelMax = 0x376C;
	constexpr uint32_t m_GuardianBotSkillLevelMin = 0x3770;
	constexpr uint32_t m_arrTeamUniqueKillWeaponsMatch = 0x3778;
	constexpr uint32_t m_bTeamLastKillUsedUniqueWeaponMatch = 0x37D8;
	constexpr uint32_t m_nMatchEndCount = 0x3800;
	constexpr uint32_t m_bTeamIntroPeriod = 0x3801;
	constexpr uint32_t m_fTeamIntroPeriodEnd = 0x3804;
}

namespace CRetakeGameRules
{
	constexpr uint32_t m_nMatchSeed = 0xF8;
	constexpr uint32_t m_bBlockersPresent = 0xFC;
	constexpr uint32_t m_bRoundInProgress = 0xFD;
	constexpr uint32_t m_iFirstSecondHalfRound = 0x100;
	constexpr uint32_t m_iBombSite = 0x104;
}

namespace QuestProgress
{
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
	constexpr uint32_t m_iEnemy2Ks = 0x74;
	constexpr uint32_t m_iUtility_Count = 0x78;
	constexpr uint32_t m_iUtility_Successes = 0x7C;
	constexpr uint32_t m_iUtility_Enemies = 0x80;
	constexpr uint32_t m_iFlash_Count = 0x84;
	constexpr uint32_t m_iFlash_Successes = 0x88;
	constexpr uint32_t m_nHealthPointsRemovedTotal = 0x8C;
	constexpr uint32_t m_nHealthPointsDealtTotal = 0x90;
	constexpr uint32_t m_nShotsFiredTotal = 0x94;
	constexpr uint32_t m_nShotsOnTargetTotal = 0x98;
	constexpr uint32_t m_i1v1Count = 0x9C;
	constexpr uint32_t m_i1v1Wins = 0xA0;
	constexpr uint32_t m_i1v2Count = 0xA4;
	constexpr uint32_t m_i1v2Wins = 0xA8;
	constexpr uint32_t m_iEntryCount = 0xAC;
	constexpr uint32_t m_iEntryWins = 0xB0;
}

namespace CCSGO_TeamPreviewCharacterPosition
{
	constexpr uint32_t m_nOrdinal = 0x4A0;
	constexpr uint32_t m_sWeaponName = 0x4A8;
	constexpr uint32_t m_xuid = 0x4B0;
	constexpr uint32_t m_weaponItem = 0x4B8;
}

namespace CCSGO_TeamSelectCharacterPosition
{
}

namespace CCSGO_TeamSelectTerroristPosition
{
}

namespace CCSGO_TeamSelectCounterTerroristPosition
{
}

namespace CCSGO_TeamIntroCharacterPosition
{
}

namespace CCSGO_TeamIntroTerroristPosition
{
}

namespace CCSGO_TeamIntroCounterTerroristPosition
{
}

namespace CCSGOPlayerAnimGraphState
{
}

namespace CCSPlayer_ActionTrackingServices
{
	constexpr uint32_t m_lastWeaponBeforeC4AutoSwitch = 0x230;
	constexpr uint32_t m_bIsRescuing = 0x268;
	constexpr uint32_t m_iWeaponPurchasesThisMatch = 0x26C;
	constexpr uint32_t m_iWeaponPurchasesThisRound = 0x66C;
}

namespace CPlayerPing
{
	constexpr uint32_t m_hPlayer = 0x4A8;
	constexpr uint32_t m_hPingedEntity = 0x4AC;
	constexpr uint32_t m_iType = 0x4B0;
	constexpr uint32_t m_bUrgent = 0x4B4;
	constexpr uint32_t m_szPlaceName = 0x4B5;
}

namespace CCSPlayer_PingServices
{
	constexpr uint32_t m_flPlayerPingTokens = 0x40;
	constexpr uint32_t m_hPlayerPing = 0x54;
}

namespace CCSPlayerResource
{
	constexpr uint32_t m_bHostageAlive = 0x4A0;
	constexpr uint32_t m_isHostageFollowingSomeone = 0x4AC;
	constexpr uint32_t m_iHostageEntityIDs = 0x4B8;
	constexpr uint32_t m_bombsiteCenterA = 0x4E8;
	constexpr uint32_t m_bombsiteCenterB = 0x4F4;
	constexpr uint32_t m_hostageRescueX = 0x500;
	constexpr uint32_t m_hostageRescueY = 0x510;
	constexpr uint32_t m_hostageRescueZ = 0x520;
	constexpr uint32_t m_bEndMatchNextMapAllVoted = 0x530;
	constexpr uint32_t m_foundGoalPositions = 0x531;
}

namespace CCSPlayer_BulletServices
{
	constexpr uint32_t m_totalHitsOnServer = 0x40;
}

namespace CCSPlayer_CameraServices
{
	constexpr uint32_t m_hTriggerFogList = 0x188;
	constexpr uint32_t m_hLastFogTrigger = 0x1A0;
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
	constexpr uint32_t m_flMaxFallVelocity = 0x208;
	constexpr uint32_t m_vecLadderNormal = 0x20C;
	constexpr uint32_t m_nLadderSurfacePropIndex = 0x218;
	constexpr uint32_t m_bAllowAutoMovement = 0x21C;
	constexpr uint32_t m_flDuckAmount = 0x220;
	constexpr uint32_t m_flDuckSpeed = 0x224;
	constexpr uint32_t m_bDuckOverride = 0x228;
	constexpr uint32_t m_flDuckOffset = 0x22C;
	constexpr uint32_t m_nDuckTimeMsecs = 0x230;
	constexpr uint32_t m_nDuckJumpTimeMsecs = 0x234;
	constexpr uint32_t m_nJumpTimeMsecs = 0x238;
	constexpr uint32_t m_flLastDuckTime = 0x23C;
	constexpr uint32_t m_vecLastPositionAtFullCrouchSpeed = 0x248;
	constexpr uint32_t m_duckUntilOnGround = 0x250;
	constexpr uint32_t m_bHasWalkMovedSinceLastJump = 0x251;
	constexpr uint32_t m_bInStuckTest = 0x252;
	constexpr uint32_t m_CachedGetPointContents = 0x258;
	constexpr uint32_t m_CachedGetPointContentsPoint = 0x858;
	constexpr uint32_t m_flStuckCheckTime = 0x1160;
	constexpr uint32_t m_nTraceCount = 0x1360;
	constexpr uint32_t m_StuckLast = 0x1364;
	constexpr uint32_t m_bSpeedCropped = 0x1368;
	constexpr uint32_t m_nOldWaterLevel = 0x136C;
	constexpr uint32_t m_flWaterEntryTime = 0x1370;
	constexpr uint32_t m_vecForward = 0x1374;
	constexpr uint32_t m_vecLeft = 0x1380;
	constexpr uint32_t m_vecUp = 0x138C;
	constexpr uint32_t m_vecPreviouslyPredictedOrigin = 0x1398;
	constexpr uint32_t m_bMadeFootstepNoise = 0x13A4;
	constexpr uint32_t m_iFootsteps = 0x13A8;
	constexpr uint32_t m_nRoundFootstepsMade = 0x13AC;
	constexpr uint32_t m_bOldJumpPressed = 0x13B0;
	constexpr uint32_t m_flJumpUntil = 0x13B4;
	constexpr uint32_t m_flJumpVel = 0x13B8;
	constexpr uint32_t m_fStashGrenadeParameterWhen = 0x13BC;
}

namespace CCSPlayer_ObserverServices
{
}

namespace CCSPlayer_UseServices
{
	constexpr uint32_t m_hLastKnownUseEntity = 0x40;
	constexpr uint32_t m_flLastUseTimeStamp = 0x44;
	constexpr uint32_t m_flTimeStartedHoldingUse = 0x48;
	constexpr uint32_t m_flTimeLastUsedWindow = 0x4C;
}

namespace CCSPlayer_ViewModelServices
{
	constexpr uint32_t m_hViewModel = 0x40;
}

namespace CCSPlayer_WaterServices
{
	constexpr uint32_t m_NextDrownDamageTime = 0x40;
	constexpr uint32_t m_nDrownDmgRate = 0x44;
	constexpr uint32_t m_AirFinishedTime = 0x48;
	constexpr uint32_t m_flWaterJumpTime = 0x4C;
	constexpr uint32_t m_vecWaterJumpVel = 0x50;
	constexpr uint32_t m_flSwimSoundTime = 0x5C;
}

namespace CCSPlayer_WeaponServices
{
	constexpr uint32_t m_flNextAttack = 0xB0;
	constexpr uint32_t m_bIsLookingAtWeapon = 0xB4;
	constexpr uint32_t m_bIsHoldingLookAtWeapon = 0xB5;
	constexpr uint32_t m_hSavedWeapon = 0xB8;
	constexpr uint32_t m_nTimeToMelee = 0xBC;
	constexpr uint32_t m_nTimeToSecondary = 0xC0;
	constexpr uint32_t m_nTimeToPrimary = 0xC4;
	constexpr uint32_t m_nTimeToSniperRifle = 0xC8;
	constexpr uint32_t m_bIsBeingGivenItem = 0xCC;
	constexpr uint32_t m_bPickedUpWeapon = 0xCD;
}

namespace CSAdditionalPerRoundStats_t
{
	constexpr uint32_t m_numChickensKilled = 0x0;
	constexpr uint32_t m_killsWhileBlind = 0x4;
	constexpr uint32_t m_bombCarrierkills = 0x8;
	constexpr uint32_t m_iBurnDamageInflicted = 0xC;
	constexpr uint32_t m_iDinks = 0x10;
}

namespace CSAdditionalMatchStats_t
{
	constexpr uint32_t m_numRoundsSurvived = 0x14;
	constexpr uint32_t m_maxNumRoundsSurvived = 0x18;
	constexpr uint32_t m_numRoundsSurvivedTotal = 0x1C;
	constexpr uint32_t m_iRoundsWonWithoutPurchase = 0x20;
	constexpr uint32_t m_iRoundsWonWithoutPurchaseTotal = 0x24;
	constexpr uint32_t m_numFirstKills = 0x28;
	constexpr uint32_t m_numClutchKills = 0x2C;
	constexpr uint32_t m_numPistolKills = 0x30;
	constexpr uint32_t m_numSniperKills = 0x34;
}

namespace CCSPlayerController_ActionTrackingServices
{
	constexpr uint32_t m_perRoundStats = 0x40;
	constexpr uint32_t m_matchStats = 0x90;
	constexpr uint32_t m_iNumRoundKills = 0x148;
	constexpr uint32_t m_iNumRoundKillsHeadshots = 0x14C;
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
	constexpr uint32_t m_bReceivesMoneyNextRound = 0x40;
	constexpr uint32_t m_iAccountMoneyEarnedForNextRound = 0x44;
	constexpr uint32_t m_iAccount = 0x48;
	constexpr uint32_t m_iStartAccount = 0x4C;
	constexpr uint32_t m_iTotalCashSpent = 0x50;
	constexpr uint32_t m_iCashSpentThisRound = 0x54;
}

namespace CCSPlayerController_InventoryServices
{
	constexpr uint32_t m_unMusicID = 0x40;
	constexpr uint32_t m_rank = 0x44;
	constexpr uint32_t m_nPersonaDataPublicLevel = 0x5C;
	constexpr uint32_t m_nPersonaDataPublicCommendsLeader = 0x60;
	constexpr uint32_t m_nPersonaDataPublicCommendsTeacher = 0x64;
	constexpr uint32_t m_nPersonaDataPublicCommendsFriendly = 0x68;
	constexpr uint32_t m_unEquippedPlayerSprayIDs = 0x868;
	constexpr uint32_t m_vecTerroristLoadoutCache = 0x870;
	constexpr uint32_t m_vecCounterTerroristLoadoutCache = 0x8C0;
}

namespace CSurvivalGameRules
{
	constexpr uint32_t m_bBoundsInitialized = 0x8;
	constexpr uint32_t m_vecPlayAreaMins = 0xC;
	constexpr uint32_t m_vecPlayAreaMaxs = 0x18;
	constexpr uint32_t m_iPlayerSpawnHexIndices = 0x24;
	constexpr uint32_t m_SpawnTileState = 0x124;
	constexpr uint32_t m_flSpawnSelectionTimeStartCurrentStage = 0x204;
	constexpr uint32_t m_flSpawnSelectionTimeEndCurrentStage = 0x208;
	constexpr uint32_t m_flSpawnSelectionTimeEndLastStage = 0x20C;
	constexpr uint32_t m_spawnStage = 0x210;
	constexpr uint32_t m_flTabletHexOriginX = 0x214;
	constexpr uint32_t m_flTabletHexOriginY = 0x218;
	constexpr uint32_t m_flTabletHexSize = 0x21C;
	constexpr uint32_t m_roundData_playerXuids = 0x220;
	constexpr uint32_t m_roundData_playerPositions = 0x420;
	constexpr uint32_t m_roundData_playerTeams = 0x520;
	constexpr uint32_t m_SurvivalGameRuleDecisionTypes = 0x620;
	constexpr uint32_t m_SurvivalGameRuleDecisionValues = 0x660;
	constexpr uint32_t m_flSurvivalStartTime = 0x6A0;
	constexpr uint32_t m_flLastThinkTime = 0x6A4;
	constexpr uint32_t m_nBlockedTileIndices = 0x6A8;
	constexpr uint32_t m_vecPlayerSpawnLocations = 0x790;
	constexpr uint32_t m_bWaitingForMoreThanOnePlayer = 0x7A8;
	constexpr uint32_t m_bSurvivalEventFired_FadeEveryoneOutFromMapSelection = 0x7A9;
	constexpr uint32_t m_bSurvivalEventFired_TimeForSmokeBeacons = 0x7AA;
	constexpr uint32_t m_bSurvivalEventFired_FirstParadropIncoming = 0x7AB;
	constexpr uint32_t m_bSurvivalEventFired_WarnedEveryoneAboutRespawnEnding = 0x7AC;
	constexpr uint32_t m_flLastWinConditionDetectedTime = 0x7B0;
	constexpr uint32_t m_nWinConditionStageProgress = 0x7B4;
	constexpr uint32_t m_nEntIndexOfRunnerUpPlayer = 0x7B8;
	constexpr uint32_t m_nEntIndexOfKilledPlayerCheckingWinConditions = 0x7BC;
	constexpr uint32_t m_flTimeOfLastParadrop = 0x7C0;
	constexpr uint32_t m_bSurvivalEventFired_PlayedWinnerSurrenderAnim = 0x7F8;
	constexpr uint32_t m_hWinnerPlayer = 0x7FC;
	constexpr uint32_t m_vecLoadedOutPlayers = 0x800;
	constexpr uint32_t m_vecRespawnedPlayers = 0x818;
	constexpr uint32_t m_vecMetalCrates = 0x830;
	constexpr uint32_t m_flLastDroneSpawnTime = 0x848;
	constexpr uint32_t m_hSpawnChopper = 0x868;
}

namespace CDangerZoneController
{
	constexpr uint32_t m_bDangerZoneControllerEnabled = 0x4A0;
	constexpr uint32_t m_bMissionControlledExplosions = 0x4A1;
	constexpr uint32_t m_vecEndGameCircleStart = 0x4A4;
	constexpr uint32_t m_vecEndGameCircleEnd = 0x4B0;
	constexpr uint32_t m_flStartTime = 0x4BC;
	constexpr uint32_t m_flFinalExpansionTime = 0x4C0;
	constexpr uint32_t m_DangerZones = 0x4C4;
	constexpr uint32_t m_flWaveEndTimes = 0x56C;
	constexpr uint32_t m_hTheFinalZone = 0x580;
	constexpr uint32_t m_flLastDangerZoneStatusLogged = 0x584;
	constexpr uint32_t m_flLastDangerZoneDamageTime = 0x588;
	constexpr uint32_t m_bFirstBombWarning = 0x58C;
	constexpr uint32_t m_numWaveRewardsGranted = 0x590;
	constexpr uint32_t m_pGasCanLaunchers = 0x598;
}

namespace CFiringModeFloat
{
	constexpr uint32_t m_flValues = 0x0;
}

namespace CFiringModeInt
{
	constexpr uint32_t m_nValues = 0x0;
}

namespace CIronSightController
{
	constexpr uint32_t m_bIronSightAvailable = 0x8;
	constexpr uint32_t m_flIronSightAmount = 0xC;
	constexpr uint32_t m_flIronSightAmountGained = 0x10;
	constexpr uint32_t m_flIronSightAmountBiased = 0x14;
}

namespace CPointDZParadropDenialRegion
{
	constexpr uint32_t m_flRadius = 0x4A8;
}

namespace CHintMessage
{
	constexpr uint32_t m_hintString = 0x8;
	constexpr uint32_t m_args = 0x10;
	constexpr uint32_t m_duration = 0x28;
}

namespace CHintMessageQueue
{
	constexpr uint32_t m_tmMessageEnd = 0x8;
	constexpr uint32_t m_messages = 0x10;
	constexpr uint32_t m_pPlayerController = 0x28;
}

namespace CCSPlayer_BuyServices
{
	constexpr uint32_t m_flNextAutoBuyAmmoTime = 0x40;
}

namespace CCSPlayer_DamageReactServices
{
}

namespace CCSPlayer_ParachuteServices
{
}

namespace CCSPlayer_RadioServices
{
	constexpr uint32_t m_flGotHostageTalkTimer = 0x40;
	constexpr uint32_t m_flDefusingTalkTimer = 0x44;
	constexpr uint32_t m_flC4PlantTalkTimer = 0x48;
	constexpr uint32_t m_flRadioTokenSlots = 0x4C;
	constexpr uint32_t m_bIgnoreRadio = 0x58;
}

namespace CBaseIssue
{
	constexpr uint32_t m_szTypeString = 0x20;
	constexpr uint32_t m_szDetailsString = 0x60;
	constexpr uint32_t m_iNumYesVotes = 0x164;
	constexpr uint32_t m_iNumNoVotes = 0x168;
	constexpr uint32_t m_iNumPotentialVotes = 0x16C;
	constexpr uint32_t m_pVoteController = 0x170;
}

namespace CVoteController
{
	constexpr uint32_t m_iActiveIssueIndex = 0x4A0;
	constexpr uint32_t m_iOnlyTeamToVote = 0x4A4;
	constexpr uint32_t m_nVoteOptionCount = 0x4A8;
	constexpr uint32_t m_nPotentialVotes = 0x4BC;
	constexpr uint32_t m_bIsYesNoVote = 0x4C0;
	constexpr uint32_t m_acceptingVotesTimer = 0x4C8;
	constexpr uint32_t m_executeCommandTimer = 0x4E0;
	constexpr uint32_t m_resetVoteTimer = 0x4F8;
	constexpr uint32_t m_arrVotedUsers = 0x510;
	constexpr uint32_t m_nVotesCast = 0x528;
	constexpr uint32_t m_playerHoldingVote = 0x628;
	constexpr uint32_t m_nHighestCountIndex = 0x62C;
	constexpr uint32_t m_potentialIssues = 0x630;
	constexpr uint32_t m_VoteOptions = 0x648;
}

namespace CMapVetoPickController
{
	constexpr uint32_t m_bPlayedIntroVcd = 0x4A0;
	constexpr uint32_t m_bNeedToPlayFiveSecondsRemaining = 0x4A1;
	constexpr uint32_t m_nDraftType = 0x4C0;
	constexpr uint32_t m_nTeamWinningCoinToss = 0x4C4;
	constexpr uint32_t m_nTeamWithFirstChoice = 0x4C8;
	constexpr uint32_t m_nVoteMapIdsList = 0x5C8;
	constexpr uint32_t m_nAccountIDs = 0x5E4;
	constexpr uint32_t m_nMapId0 = 0x6E4;
	constexpr uint32_t m_nMapId1 = 0x7E4;
	constexpr uint32_t m_nMapId2 = 0x8E4;
	constexpr uint32_t m_nMapId3 = 0x9E4;
	constexpr uint32_t m_nMapId4 = 0xAE4;
	constexpr uint32_t m_nMapId5 = 0xBE4;
	constexpr uint32_t m_nStartingSide0 = 0xCE4;
	constexpr uint32_t m_nCurrentPhase = 0xDE4;
	constexpr uint32_t m_nPhaseStartTick = 0xDE8;
	constexpr uint32_t m_nPhaseDurationTicks = 0xDEC;
	constexpr uint32_t m_OnMapVetoed = 0xDF0;
	constexpr uint32_t m_OnMapPicked = 0xE18;
	constexpr uint32_t m_OnSidesPicked = 0xE40;
	constexpr uint32_t m_OnNewPhaseStarted = 0xE68;
	constexpr uint32_t m_OnLevelTransition = 0xE90;
}

namespace CPointDZItemSpawn
{
}

namespace CPointDZWeaponSpawn
{
	constexpr uint32_t m_nGroupID = 0x4B0;
	constexpr uint32_t m_flDefaultWeight = 0x4B4;
	constexpr uint32_t m_flCurrentWeight = 0x4B8;
	constexpr uint32_t m_hItem = 0x4BC;
	constexpr uint32_t m_iszDoorName = 0x4C0;
	constexpr uint32_t m_hDoor = 0x4C8;
	constexpr uint32_t m_nPrice = 0x4CC;
}

namespace CPointDZItemSpawnGroup
{
	constexpr uint32_t m_flRadius = 0x4A0;
}

namespace CPointDZWeaponSpawnGroup
{
}

namespace CPointDZDroneGunSpawn
{
	constexpr uint32_t m_bSpawnAutomatically = 0x4A8;
}

namespace CPointDZParachuteSpawn
{
}

namespace CLogicEventListener
{
	constexpr uint32_t m_iszEventName = 0x4B0;
	constexpr uint32_t m_bIsEnabled = 0x4B8;
	constexpr uint32_t m_nTeam = 0x4BC;
	constexpr uint32_t m_bFetchEventData = 0x4C0;
	constexpr uint32_t m_OnEventFired = 0x4C8;
}

namespace CBot
{
	constexpr uint32_t m_pPlayer = 0x10;
	constexpr uint32_t m_bHasSpawned = 0x18;
	constexpr uint32_t m_id = 0x1C;
	constexpr uint32_t m_isRunning = 0x90;
	constexpr uint32_t m_isCrouching = 0x91;
	constexpr uint32_t m_forwardSpeed = 0x94;
	constexpr uint32_t m_leftSpeed = 0x98;
	constexpr uint32_t m_verticalSpeed = 0x9C;
	constexpr uint32_t m_buttonFlags = 0xA0;
	constexpr uint32_t m_jumpTimestamp = 0xA8;
	constexpr uint32_t m_viewForward = 0xAC;
	constexpr uint32_t m_postureStackIndex = 0xC8;
}

namespace CBtNode
{
}

namespace CBtNodeDecorator
{
}

namespace CBtNodeComposite
{
}

namespace CBtActionAim
{
	constexpr uint32_t m_szSensorInputKey = 0x68;
	constexpr uint32_t m_szAimReadyKey = 0x80;
	constexpr uint32_t m_flZoomCooldownTimestamp = 0x88;
	constexpr uint32_t m_bDoneAiming = 0x8C;
	constexpr uint32_t m_flLerpStartTime = 0x90;
	constexpr uint32_t m_flNextLookTargetLerpTime = 0x94;
	constexpr uint32_t m_flPenaltyReductionRatio = 0x98;
	constexpr uint32_t m_NextLookTarget = 0x9C;
	constexpr uint32_t m_AimTimer = 0xA8;
	constexpr uint32_t m_SniperHoldTimer = 0xC0;
	constexpr uint32_t m_FocusIntervalTimer = 0xD8;
	constexpr uint32_t m_bAcquired = 0xF0;
}

namespace CBtActionCombatPositioning
{
	constexpr uint32_t m_szSensorInputKey = 0x68;
	constexpr uint32_t m_szIsAttackingKey = 0x80;
	constexpr uint32_t m_ActionTimer = 0x88;
	constexpr uint32_t m_bCrouching = 0xA0;
}

namespace CBtActionMoveTo
{
	constexpr uint32_t m_szDestinationInputKey = 0x60;
	constexpr uint32_t m_szHidingSpotInputKey = 0x68;
	constexpr uint32_t m_szThreatInputKey = 0x70;
	constexpr uint32_t m_vecDestination = 0x78;
	constexpr uint32_t m_bAutoLookAdjust = 0x84;
	constexpr uint32_t m_bComputePath = 0x85;
	constexpr uint32_t m_flDamagingAreasPenaltyCost = 0x88;
	constexpr uint32_t m_CheckApproximateCornersTimer = 0x90;
	constexpr uint32_t m_CheckHighPriorityItem = 0xA8;
	constexpr uint32_t m_RepathTimer = 0xC0;
	constexpr uint32_t m_flArrivalEpsilon = 0xD8;
	constexpr uint32_t m_flAdditionalArrivalEpsilon2D = 0xDC;
	constexpr uint32_t m_flHidingSpotCheckDistanceThreshold = 0xE0;
	constexpr uint32_t m_flNearestAreaDistanceThreshold = 0xE4;
}

namespace CBtActionParachutePositioning
{
	constexpr uint32_t m_ActionTimer = 0x58;
}

namespace CBtNodeCondition
{
	constexpr uint32_t m_bNegated = 0x58;
}

namespace CBtNodeConditionInactive
{
	constexpr uint32_t m_flRoundStartThresholdSeconds = 0x78;
	constexpr uint32_t m_flSensorInactivityThresholdSeconds = 0x7C;
	constexpr uint32_t m_SensorInactivityTimer = 0x80;
}

namespace CPointEntity
{
}

namespace CEnvCombinedLightProbeVolume
{
	constexpr uint32_t m_Color = 0x1570;
	constexpr uint32_t m_flBrightness = 0x1574;
	constexpr uint32_t m_hCubemapTexture = 0x1578;
	constexpr uint32_t m_bCustomCubemapTexture = 0x1580;
	constexpr uint32_t m_hLightProbeTexture = 0x1588;
	constexpr uint32_t m_hLightProbeDirectLightIndicesTexture = 0x1590;
	constexpr uint32_t m_hLightProbeDirectLightScalarsTexture = 0x1598;
	constexpr uint32_t m_hLightProbeDirectLightShadowsTexture = 0x15A0;
	constexpr uint32_t m_vBoxMins = 0x15A8;
	constexpr uint32_t m_vBoxMaxs = 0x15B4;
	constexpr uint32_t m_LightGroups = 0x15C0;
	constexpr uint32_t m_bMoveable = 0x15C8;
	constexpr uint32_t m_nHandshake = 0x15CC;
	constexpr uint32_t m_nEnvCubeMapArrayIndex = 0x15D0;
	constexpr uint32_t m_nPriority = 0x15D4;
	constexpr uint32_t m_bStartDisabled = 0x15D8;
	constexpr uint32_t m_flEdgeFadeDist = 0x15DC;
	constexpr uint32_t m_vEdgeFadeDists = 0x15E0;
	constexpr uint32_t m_nLightProbeSizeX = 0x15EC;
	constexpr uint32_t m_nLightProbeSizeY = 0x15F0;
	constexpr uint32_t m_nLightProbeSizeZ = 0x15F4;
	constexpr uint32_t m_nLightProbeAtlasX = 0x15F8;
	constexpr uint32_t m_nLightProbeAtlasY = 0x15FC;
	constexpr uint32_t m_nLightProbeAtlasZ = 0x1600;
	constexpr uint32_t m_bEnabled = 0x1619;
}

namespace CEnvCubemap
{
	constexpr uint32_t m_hCubemapTexture = 0x590;
	constexpr uint32_t m_bCustomCubemapTexture = 0x598;
	constexpr uint32_t m_flInfluenceRadius = 0x59C;
	constexpr uint32_t m_vBoxProjectMins = 0x5A0;
	constexpr uint32_t m_vBoxProjectMaxs = 0x5AC;
	constexpr uint32_t m_LightGroups = 0x5B8;
	constexpr uint32_t m_bMoveable = 0x5C0;
	constexpr uint32_t m_nHandshake = 0x5C4;
	constexpr uint32_t m_nEnvCubeMapArrayIndex = 0x5C8;
	constexpr uint32_t m_nPriority = 0x5CC;
	constexpr uint32_t m_flEdgeFadeDist = 0x5D0;
	constexpr uint32_t m_vEdgeFadeDists = 0x5D4;
	constexpr uint32_t m_flDiffuseScale = 0x5E0;
	constexpr uint32_t m_bStartDisabled = 0x5E4;
	constexpr uint32_t m_bDefaultEnvMap = 0x5E5;
	constexpr uint32_t m_bDefaultSpecEnvMap = 0x5E6;
	constexpr uint32_t m_bIndoorCubeMap = 0x5E7;
	constexpr uint32_t m_bCopyDiffuseFromDefaultCubemap = 0x5E8;
	constexpr uint32_t m_bEnabled = 0x5F8;
}

