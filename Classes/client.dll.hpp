namespace CScriptComponent
{
	constexpr uint32_t m_scriptClassName = 0x30;
}

namespace C_BaseEntity
{
	constexpr uint32_t m_CBodyComponent = 0x38;
	constexpr uint32_t m_NetworkTransmitComponent = 0x40;
	constexpr uint32_t m_nLastThinkTick = 0x300;
	constexpr uint32_t m_pGameSceneNode = 0x308;
	constexpr uint32_t m_pRenderComponent = 0x310;
	constexpr uint32_t m_pCollision = 0x318;
	constexpr uint32_t m_iMaxHealth = 0x320;
	constexpr uint32_t m_iHealth = 0x324;
	constexpr uint32_t m_lifeState = 0x328;
	constexpr uint32_t m_bTakesDamage = 0x329;
	constexpr uint32_t m_nTakeDamageFlags = 0x330;
	constexpr uint32_t m_bIsPlatform = 0x338;
	constexpr uint32_t m_ubInterpolationFrame = 0x339;
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
	constexpr uint32_t m_bDisabledContextThinks = 0x388;
	constexpr uint32_t m_flAnimTime = 0x38C;
	constexpr uint32_t m_flSimulationTime = 0x390;
	constexpr uint32_t m_nSceneObjectOverrideFlags = 0x394;
	constexpr uint32_t m_bHasSuccessfullyInterpolated = 0x395;
	constexpr uint32_t m_bHasAddedVarsToInterpolation = 0x396;
	constexpr uint32_t m_bRenderEvenWhenNotSuccessfullyInterpolated = 0x397;
	constexpr uint32_t m_nInterpolationLatchDirtyFlags = 0x398;
	constexpr uint32_t m_ListEntry = 0x3A0;
	constexpr uint32_t m_flCreateTime = 0x3B8;
	constexpr uint32_t m_flSpeed = 0x3BC;
	constexpr uint32_t m_EntClientFlags = 0x3C0;
	constexpr uint32_t m_bClientSideRagdoll = 0x3C2;
	constexpr uint32_t m_iTeamNum = 0x3C3;
	constexpr uint32_t m_spawnflags = 0x3C4;
	constexpr uint32_t m_nNextThinkTick = 0x3C8;
	constexpr uint32_t m_fFlags = 0x3CC;
	constexpr uint32_t m_vecAbsVelocity = 0x3D0;
	constexpr uint32_t m_vecVelocity = 0x3E0;
	constexpr uint32_t m_vecBaseVelocity = 0x410;
	constexpr uint32_t m_hEffectEntity = 0x41C;
	constexpr uint32_t m_hOwnerEntity = 0x420;
	constexpr uint32_t m_MoveCollide = 0x424;
	constexpr uint32_t m_MoveType = 0x425;
	constexpr uint32_t m_nActualMoveType = 0x426;
	constexpr uint32_t m_flWaterLevel = 0x428;
	constexpr uint32_t m_fEffects = 0x42C;
	constexpr uint32_t m_hGroundEntity = 0x430;
	constexpr uint32_t m_nGroundBodyIndex = 0x434;
	constexpr uint32_t m_flFriction = 0x438;
	constexpr uint32_t m_flElasticity = 0x43C;
	constexpr uint32_t m_flGravityScale = 0x440;
	constexpr uint32_t m_flTimeScale = 0x444;
	constexpr uint32_t m_bAnimatedEveryTick = 0x448;
	constexpr uint32_t m_flNavIgnoreUntilTime = 0x44C;
	constexpr uint32_t m_hThink = 0x450;
	constexpr uint32_t m_fBBoxVisFlags = 0x460;
	constexpr uint32_t m_bPredictable = 0x461;
	constexpr uint32_t m_bRenderWithViewModels = 0x462;
	constexpr uint32_t m_nSplitUserPlayerPredictionSlot = 0x464;
	constexpr uint32_t m_nFirstPredictableCommand = 0x468;
	constexpr uint32_t m_nLastPredictableCommand = 0x46C;
	constexpr uint32_t m_hOldMoveParent = 0x470;
	constexpr uint32_t m_Particles = 0x478;
	constexpr uint32_t m_vecPredictedScriptFloats = 0x4A0;
	constexpr uint32_t m_vecPredictedScriptFloatIDs = 0x4B8;
	constexpr uint32_t m_nNextScriptVarRecordID = 0x4E8;
	constexpr uint32_t m_vecAngVelocity = 0x4F8;
	constexpr uint32_t m_DataChangeEventRef = 0x504;
	constexpr uint32_t m_dependencies = 0x508;
	constexpr uint32_t m_nCreationTick = 0x520;
	constexpr uint32_t m_bAnimTimeChanged = 0x52D;
	constexpr uint32_t m_bSimulationTimeChanged = 0x52E;
	constexpr uint32_t m_sUniqueHammerID = 0x538;
	constexpr uint32_t m_nBloodType = 0x540;
}

namespace CountdownTimer
{
	constexpr uint32_t m_duration = 0x8;
	constexpr uint32_t m_timestamp = 0xC;
	constexpr uint32_t m_timescale = 0x10;
	constexpr uint32_t m_nWorldGroupId = 0x14;
}

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
	constexpr uint32_t m_bVisibleinPVS = 0x30;
}

namespace CGameSceneNode
{
	constexpr uint32_t m_nodeToWorld = 0x10;
	constexpr uint32_t m_pOwner = 0x30;
	constexpr uint32_t m_pParent = 0x38;
	constexpr uint32_t m_pChild = 0x40;
	constexpr uint32_t m_pNextSibling = 0x48;
	constexpr uint32_t m_hParent = 0x78;
	constexpr uint32_t m_vecOrigin = 0x88;
	constexpr uint32_t m_angRotation = 0xC0;
	constexpr uint32_t m_flScale = 0xCC;
	constexpr uint32_t m_vecAbsOrigin = 0xD0;
	constexpr uint32_t m_angAbsRotation = 0xDC;
	constexpr uint32_t m_flAbsScale = 0xE8;
	constexpr uint32_t m_nParentAttachmentOrBone = 0xEC;
	constexpr uint32_t m_bDebugAbsOriginChanges = 0xEE;
	constexpr uint32_t m_bDormant = 0xEF;
	constexpr uint32_t m_bForceParentToBeNetworked = 0xF0;
	constexpr uint32_t m_bDirtyHierarchy = 0x0;
	constexpr uint32_t m_bDirtyBoneMergeInfo = 0x0;
	constexpr uint32_t m_bNetworkedPositionChanged = 0x0;
	constexpr uint32_t m_bNetworkedAnglesChanged = 0x0;
	constexpr uint32_t m_bNetworkedScaleChanged = 0x0;
	constexpr uint32_t m_bWillBeCallingPostDataUpdate = 0x0;
	constexpr uint32_t m_bBoneMergeFlex = 0x0;
	constexpr uint32_t m_nLatchAbsOrigin = 0x0;
	constexpr uint32_t m_bDirtyBoneMergeBoneToRoot = 0x0;
	constexpr uint32_t m_nHierarchicalDepth = 0xF3;
	constexpr uint32_t m_nHierarchyType = 0xF4;
	constexpr uint32_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount = 0xF5;
	constexpr uint32_t m_name = 0xF8;
	constexpr uint32_t m_hierarchyAttachName = 0x138;
	constexpr uint32_t m_flZOffset = 0x13C;
	constexpr uint32_t m_flClientLocalScale = 0x140;
	constexpr uint32_t m_vRenderOrigin = 0x144;
}

namespace CBodyComponent
{
	constexpr uint32_t m_pSceneNode = 0x8;
	constexpr uint32_t __m_pChainEntity = 0x20;
}

namespace CBodyComponentPoint
{
	constexpr uint32_t m_sceneNode = 0x50;
}

namespace CSkeletonInstance
{
	constexpr uint32_t m_modelState = 0x170;
	constexpr uint32_t m_bIsAnimationEnabled = 0x3A0;
	constexpr uint32_t m_bUseParentRenderBounds = 0x3A1;
	constexpr uint32_t m_bDisableSolidCollisionsForHierarchy = 0x3A2;
	constexpr uint32_t m_bDirtyMotionType = 0x0;
	constexpr uint32_t m_bIsGeneratingLatchedParentSpaceState = 0x0;
	constexpr uint32_t m_materialGroup = 0x3A4;
	constexpr uint32_t m_nHitboxSet = 0x3A8;
}

namespace CBodyComponentSkeletonInstance
{
	constexpr uint32_t m_skeletonInstance = 0x50;
}

namespace CHitboxComponent
{
	constexpr uint32_t m_bvDisabledHitGroups = 0x24;
}

namespace CLightComponent
{
	constexpr uint32_t __m_pChainEntity = 0x38;
	constexpr uint32_t m_Color = 0x75;
	constexpr uint32_t m_SecondaryColor = 0x79;
	constexpr uint32_t m_flBrightness = 0x80;
	constexpr uint32_t m_flBrightnessScale = 0x84;
	constexpr uint32_t m_flBrightnessMult = 0x88;
	constexpr uint32_t m_flRange = 0x8C;
	constexpr uint32_t m_flFalloff = 0x90;
	constexpr uint32_t m_flAttenuation0 = 0x94;
	constexpr uint32_t m_flAttenuation1 = 0x98;
	constexpr uint32_t m_flAttenuation2 = 0x9C;
	constexpr uint32_t m_flTheta = 0xA0;
	constexpr uint32_t m_flPhi = 0xA4;
	constexpr uint32_t m_hLightCookie = 0xA8;
	constexpr uint32_t m_nCascades = 0xB0;
	constexpr uint32_t m_nCastShadows = 0xB4;
	constexpr uint32_t m_nShadowWidth = 0xB8;
	constexpr uint32_t m_nShadowHeight = 0xBC;
	constexpr uint32_t m_bRenderDiffuse = 0xC0;
	constexpr uint32_t m_nRenderSpecular = 0xC4;
	constexpr uint32_t m_bRenderTransmissive = 0xC8;
	constexpr uint32_t m_flOrthoLightWidth = 0xCC;
	constexpr uint32_t m_flOrthoLightHeight = 0xD0;
	constexpr uint32_t m_nStyle = 0xD4;
	constexpr uint32_t m_Pattern = 0xD8;
	constexpr uint32_t m_nCascadeRenderStaticObjects = 0xE0;
	constexpr uint32_t m_flShadowCascadeCrossFade = 0xE4;
	constexpr uint32_t m_flShadowCascadeDistanceFade = 0xE8;
	constexpr uint32_t m_flShadowCascadeDistance0 = 0xEC;
	constexpr uint32_t m_flShadowCascadeDistance1 = 0xF0;
	constexpr uint32_t m_flShadowCascadeDistance2 = 0xF4;
	constexpr uint32_t m_flShadowCascadeDistance3 = 0xF8;
	constexpr uint32_t m_nShadowCascadeResolution0 = 0xFC;
	constexpr uint32_t m_nShadowCascadeResolution1 = 0x100;
	constexpr uint32_t m_nShadowCascadeResolution2 = 0x104;
	constexpr uint32_t m_nShadowCascadeResolution3 = 0x108;
	constexpr uint32_t m_bUsesBakedShadowing = 0x10C;
	constexpr uint32_t m_nShadowPriority = 0x110;
	constexpr uint32_t m_nBakedShadowIndex = 0x114;
	constexpr uint32_t m_bRenderToCubemaps = 0x118;
	constexpr uint32_t m_nDirectLight = 0x11C;
	constexpr uint32_t m_nIndirectLight = 0x120;
	constexpr uint32_t m_flFadeMinDist = 0x124;
	constexpr uint32_t m_flFadeMaxDist = 0x128;
	constexpr uint32_t m_flShadowFadeMinDist = 0x12C;
	constexpr uint32_t m_flShadowFadeMaxDist = 0x130;
	constexpr uint32_t m_bEnabled = 0x134;
	constexpr uint32_t m_bFlicker = 0x135;
	constexpr uint32_t m_bPrecomputedFieldsValid = 0x136;
	constexpr uint32_t m_vPrecomputedBoundsMins = 0x138;
	constexpr uint32_t m_vPrecomputedBoundsMaxs = 0x144;
	constexpr uint32_t m_vPrecomputedOBBOrigin = 0x150;
	constexpr uint32_t m_vPrecomputedOBBAngles = 0x15C;
	constexpr uint32_t m_vPrecomputedOBBExtent = 0x168;
	constexpr uint32_t m_flPrecomputedMaxRange = 0x174;
	constexpr uint32_t m_nFogLightingMode = 0x178;
	constexpr uint32_t m_flFogContributionStength = 0x17C;
	constexpr uint32_t m_flNearClipPlane = 0x180;
	constexpr uint32_t m_SkyColor = 0x184;
	constexpr uint32_t m_flSkyIntensity = 0x188;
	constexpr uint32_t m_SkyAmbientBounce = 0x18C;
	constexpr uint32_t m_bUseSecondaryColor = 0x190;
	constexpr uint32_t m_bMixedShadows = 0x191;
	constexpr uint32_t m_flLightStyleStartTime = 0x194;
	constexpr uint32_t m_flCapsuleLength = 0x198;
	constexpr uint32_t m_flMinRoughness = 0x19C;
}

namespace CRenderComponent
{
	constexpr uint32_t __m_pChainEntity = 0x10;
	constexpr uint32_t m_bIsRenderingWithViewModels = 0x50;
	constexpr uint32_t m_nSplitscreenFlags = 0x54;
	constexpr uint32_t m_bEnableRendering = 0x60;
	constexpr uint32_t m_bInterpolationReadyToDraw = 0xB0;
}

namespace C_PointCamera
{
	constexpr uint32_t m_FOV = 0x548;
	constexpr uint32_t m_Resolution = 0x54C;
	constexpr uint32_t m_bFogEnable = 0x550;
	constexpr uint32_t m_FogColor = 0x551;
	constexpr uint32_t m_flFogStart = 0x558;
	constexpr uint32_t m_flFogEnd = 0x55C;
	constexpr uint32_t m_flFogMaxDensity = 0x560;
	constexpr uint32_t m_bActive = 0x564;
	constexpr uint32_t m_bUseScreenAspectRatio = 0x565;
	constexpr uint32_t m_flAspectRatio = 0x568;
	constexpr uint32_t m_bNoSky = 0x56C;
	constexpr uint32_t m_fBrightness = 0x570;
	constexpr uint32_t m_flZFar = 0x574;
	constexpr uint32_t m_flZNear = 0x578;
	constexpr uint32_t m_bCanHLTVUse = 0x57C;
	constexpr uint32_t m_bDofEnabled = 0x57D;
	constexpr uint32_t m_flDofNearBlurry = 0x580;
	constexpr uint32_t m_flDofNearCrisp = 0x584;
	constexpr uint32_t m_flDofFarCrisp = 0x588;
	constexpr uint32_t m_flDofFarBlurry = 0x58C;
	constexpr uint32_t m_flDofTiltToGround = 0x590;
	constexpr uint32_t m_TargetFOV = 0x594;
	constexpr uint32_t m_DegreesPerSecond = 0x598;
	constexpr uint32_t m_bIsOn = 0x59C;
	constexpr uint32_t m_pNext = 0x5A0;
}

namespace CPointTemplateAPI
{
}

namespace CPropDataComponent
{
	constexpr uint32_t m_flDmgModBullet = 0x10;
	constexpr uint32_t m_flDmgModClub = 0x14;
	constexpr uint32_t m_flDmgModExplosive = 0x18;
	constexpr uint32_t m_flDmgModFire = 0x1C;
	constexpr uint32_t m_iszPhysicsDamageTableName = 0x20;
	constexpr uint32_t m_iszBasePropData = 0x28;
	constexpr uint32_t m_nInteractions = 0x30;
	constexpr uint32_t m_bSpawnMotionDisabled = 0x34;
	constexpr uint32_t m_nDisableTakePhysicsDamageSpawnFlag = 0x38;
	constexpr uint32_t m_nMotionDisabledSpawnFlag = 0x3C;
}

namespace CBuoyancyHelper
{
	constexpr uint32_t m_flFluidDensity = 0x18;
}

namespace CBaseAnimGraph
{
	constexpr uint32_t m_bInitiallyPopulateInterpHistory = 0xD40;
	constexpr uint32_t m_bSuppressAnimEventSounds = 0xD42;
	constexpr uint32_t m_bAnimGraphUpdateEnabled = 0xD50;
	constexpr uint32_t m_flMaxSlopeDistance = 0xD54;
	constexpr uint32_t m_vLastSlopeCheckPos = 0xD58;
	constexpr uint32_t m_bAnimationUpdateScheduled = 0xD64;
	constexpr uint32_t m_vecForce = 0xD68;
	constexpr uint32_t m_nForceBone = 0xD74;
	constexpr uint32_t m_pClientsideRagdoll = 0xD78;
	constexpr uint32_t m_bBuiltRagdoll = 0xD80;
	constexpr uint32_t m_pRagdollPose = 0xD98;
	constexpr uint32_t m_bRagdollClientSide = 0xDA0;
	constexpr uint32_t m_bHasAnimatedMaterialAttributes = 0xDB0;
}

namespace CSharedGapTypeQueryRegistration
{
}

namespace CBasePlayerControllerAPI
{
}

namespace C_CommandContext
{
	constexpr uint32_t needsprocessing = 0x0;
	constexpr uint32_t command_number = 0x90;
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

namespace C_ColorCorrection
{
	constexpr uint32_t m_vecOrigin = 0x548;
	constexpr uint32_t m_MinFalloff = 0x554;
	constexpr uint32_t m_MaxFalloff = 0x558;
	constexpr uint32_t m_flFadeInDuration = 0x55C;
	constexpr uint32_t m_flFadeOutDuration = 0x560;
	constexpr uint32_t m_flMaxWeight = 0x564;
	constexpr uint32_t m_flCurWeight = 0x568;
	constexpr uint32_t m_netlookupFilename = 0x56C;
	constexpr uint32_t m_bEnabled = 0x76C;
	constexpr uint32_t m_bMaster = 0x76D;
	constexpr uint32_t m_bClientSide = 0x76E;
	constexpr uint32_t m_bExclusive = 0x76F;
	constexpr uint32_t m_bEnabledOnClient = 0x770;
	constexpr uint32_t m_flCurWeightOnClient = 0x774;
	constexpr uint32_t m_bFadingIn = 0x778;
	constexpr uint32_t m_flFadeStartWeight = 0x77C;
	constexpr uint32_t m_flFadeStartTime = 0x780;
	constexpr uint32_t m_flFadeDuration = 0x784;
}

namespace C_TonemapController2
{
	constexpr uint32_t m_flAutoExposureMin = 0x548;
	constexpr uint32_t m_flAutoExposureMax = 0x54C;
	constexpr uint32_t m_flTonemapPercentTarget = 0x550;
	constexpr uint32_t m_flTonemapPercentBrightPixels = 0x554;
	constexpr uint32_t m_flTonemapMinAvgLum = 0x558;
	constexpr uint32_t m_flExposureAdaptationSpeedUp = 0x55C;
	constexpr uint32_t m_flExposureAdaptationSpeedDown = 0x560;
	constexpr uint32_t m_flTonemapEVSmoothingRange = 0x564;
}

namespace C_PostProcessingVolume
{
	constexpr uint32_t m_hPostSettings = 0xCE0;
	constexpr uint32_t m_flFadeDuration = 0xCE8;
	constexpr uint32_t m_flMinLogExposure = 0xCEC;
	constexpr uint32_t m_flMaxLogExposure = 0xCF0;
	constexpr uint32_t m_flMinExposure = 0xCF4;
	constexpr uint32_t m_flMaxExposure = 0xCF8;
	constexpr uint32_t m_flExposureCompensation = 0xCFC;
	constexpr uint32_t m_flExposureFadeSpeedUp = 0xD00;
	constexpr uint32_t m_flExposureFadeSpeedDown = 0xD04;
	constexpr uint32_t m_flTonemapEVSmoothingRange = 0xD08;
	constexpr uint32_t m_bMaster = 0xD0C;
	constexpr uint32_t m_bExposureControl = 0xD0D;
	constexpr uint32_t m_flRate = 0xD10;
	constexpr uint32_t m_flTonemapPercentTarget = 0xD14;
	constexpr uint32_t m_flTonemapPercentBrightPixels = 0xD18;
	constexpr uint32_t m_flTonemapMinAvgLum = 0xD1C;
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

namespace C_FogController
{
	constexpr uint32_t m_fog = 0x548;
	constexpr uint32_t m_bUseAngles = 0x5B0;
	constexpr uint32_t m_iChangedVariables = 0x5B4;
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
	constexpr uint32_t m_flMaxspeed = 0x198;
	constexpr uint32_t m_arrForceSubtickMoveWhen = 0x19C;
	constexpr uint32_t m_flForwardMove = 0x1AC;
	constexpr uint32_t m_flLeftMove = 0x1B0;
	constexpr uint32_t m_flUpMove = 0x1B4;
	constexpr uint32_t m_vecLastMovementImpulses = 0x1B8;
	constexpr uint32_t m_vecOldViewAngles = 0x1C4;
}

namespace CPlayer_MovementServices_Humanoid
{
	constexpr uint32_t m_flStepSoundTime = 0x1D8;
	constexpr uint32_t m_flFallVelocity = 0x1DC;
	constexpr uint32_t m_bInCrouch = 0x1E0;
	constexpr uint32_t m_nCrouchState = 0x1E4;
	constexpr uint32_t m_flCrouchTransitionStartTime = 0x1E8;
	constexpr uint32_t m_bDucked = 0x1EC;
	constexpr uint32_t m_bDucking = 0x1ED;
	constexpr uint32_t m_bInDuckJump = 0x1EE;
	constexpr uint32_t m_groundNormal = 0x1F0;
	constexpr uint32_t m_flSurfaceFriction = 0x1FC;
	constexpr uint32_t m_surfaceProps = 0x200;
	constexpr uint32_t m_nStepside = 0x210;
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

namespace C_BasePlayerWeapon
{
	constexpr uint32_t m_nNextPrimaryAttackTick = 0x15B0;
	constexpr uint32_t m_flNextPrimaryAttackTickRatio = 0x15B4;
	constexpr uint32_t m_nNextSecondaryAttackTick = 0x15B8;
	constexpr uint32_t m_flNextSecondaryAttackTickRatio = 0x15BC;
	constexpr uint32_t m_iClip1 = 0x15C0;
	constexpr uint32_t m_iClip2 = 0x15C4;
	constexpr uint32_t m_pReserveAmmo = 0x15C8;
}

namespace CPlayer_WeaponServices
{
	constexpr uint32_t m_hMyWeapons = 0x40;
	constexpr uint32_t m_hActiveWeapon = 0x58;
	constexpr uint32_t m_hLastWeapon = 0x5C;
	constexpr uint32_t m_iAmmo = 0x60;
}

namespace CBaseAnimGraphController
{
	constexpr uint32_t m_animGraphNetworkedVars = 0x18;
	constexpr uint32_t m_bSequenceFinished = 0x14A8;
	constexpr uint32_t m_flSoundSyncTime = 0x14AC;
	constexpr uint32_t m_nActiveIKChainMask = 0x14B0;
	constexpr uint32_t m_hSequence = 0x14B4;
	constexpr uint32_t m_flSeqStartTime = 0x14B8;
	constexpr uint32_t m_flSeqFixedCycle = 0x14BC;
	constexpr uint32_t m_nAnimLoopMode = 0x14C0;
	constexpr uint32_t m_flPlaybackRate = 0x14C4;
	constexpr uint32_t m_nNotifyState = 0x14D0;
	constexpr uint32_t m_bNetworkedAnimationInputsChanged = 0x14D2;
	constexpr uint32_t m_bNetworkedSequenceChanged = 0x14D3;
	constexpr uint32_t m_bLastUpdateSkipped = 0x14D4;
	constexpr uint32_t m_flPrevAnimUpdateTime = 0x14D8;
}

namespace CBodyComponentBaseAnimGraph
{
	constexpr uint32_t m_animationController = 0x460;
}

namespace EntityRenderAttribute_t
{
	constexpr uint32_t m_ID = 0x30;
	constexpr uint32_t m_Values = 0x34;
}

namespace C_BaseModelEntity
{
	constexpr uint32_t m_CRenderComponent = 0xA18;
	constexpr uint32_t m_CHitboxComponent = 0xA20;
	constexpr uint32_t m_bInitModelEffects = 0xA68;
	constexpr uint32_t m_bIsStaticProp = 0xA69;
	constexpr uint32_t m_nLastAddDecal = 0xA6C;
	constexpr uint32_t m_nDecalsAdded = 0xA70;
	constexpr uint32_t m_iOldHealth = 0xA74;
	constexpr uint32_t m_nRenderMode = 0xA78;
	constexpr uint32_t m_nRenderFX = 0xA79;
	constexpr uint32_t m_bAllowFadeInView = 0xA7A;
	constexpr uint32_t m_clrRender = 0xA7B;
	constexpr uint32_t m_vecRenderAttributes = 0xA80;
	constexpr uint32_t m_bRenderToCubemaps = 0xAE8;
	constexpr uint32_t m_Collision = 0xAF0;
	constexpr uint32_t m_Glow = 0xBA0;
	constexpr uint32_t m_flGlowBackfaceMult = 0xBF8;
	constexpr uint32_t m_fadeMinDist = 0xBFC;
	constexpr uint32_t m_fadeMaxDist = 0xC00;
	constexpr uint32_t m_flFadeScale = 0xC04;
	constexpr uint32_t m_flShadowStrength = 0xC08;
	constexpr uint32_t m_nObjectCulling = 0xC0C;
	constexpr uint32_t m_nAddDecal = 0xC10;
	constexpr uint32_t m_vDecalPosition = 0xC14;
	constexpr uint32_t m_vDecalForwardAxis = 0xC20;
	constexpr uint32_t m_flDecalHealBloodRate = 0xC2C;
	constexpr uint32_t m_flDecalHealHeightRate = 0xC30;
	constexpr uint32_t m_ConfigEntitiesToPropagateMaterialDecalsTo = 0xC38;
	constexpr uint32_t m_vecViewOffset = 0xC50;
	constexpr uint32_t m_pClientAlphaProperty = 0xC80;
	constexpr uint32_t m_ClientOverrideTint = 0xC88;
	constexpr uint32_t m_bUseClientOverrideTint = 0xC8C;
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
}

namespace CGameSceneNodeHandle
{
	constexpr uint32_t m_hOwner = 0x8;
	constexpr uint32_t m_name = 0xC;
}

namespace SequenceHistory_t
{
	constexpr uint32_t m_hSequence = 0x0;
	constexpr uint32_t m_flSeqStartTime = 0x4;
	constexpr uint32_t m_flSeqFixedCycle = 0x8;
	constexpr uint32_t m_nSeqLoopMode = 0xC;
	constexpr uint32_t m_flPlaybackRate = 0x10;
	constexpr uint32_t m_flCyclesPerSecond = 0x14;
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
	constexpr uint32_t m_MeshGroupMask = 0x198;
	constexpr uint32_t m_nIdealMotionType = 0x21A;
	constexpr uint32_t m_nForceLOD = 0x21B;
	constexpr uint32_t m_nClothUpdateFlags = 0x21C;
}

namespace IntervalTimer
{
	constexpr uint32_t m_timestamp = 0x8;
	constexpr uint32_t m_nWorldGroupId = 0xC;
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
	constexpr uint32_t m_PredNetGlobalSymbolVariables = 0xE0;
	constexpr uint32_t m_OwnerOnlyPredNetBoolVariables = 0xF8;
	constexpr uint32_t m_OwnerOnlyPredNetByteVariables = 0x110;
	constexpr uint32_t m_OwnerOnlyPredNetUInt16Variables = 0x128;
	constexpr uint32_t m_OwnerOnlyPredNetIntVariables = 0x140;
	constexpr uint32_t m_OwnerOnlyPredNetUInt32Variables = 0x158;
	constexpr uint32_t m_OwnerOnlyPredNetUInt64Variables = 0x170;
	constexpr uint32_t m_OwnerOnlyPredNetFloatVariables = 0x188;
	constexpr uint32_t m_OwnerOnlyPredNetVectorVariables = 0x1A0;
	constexpr uint32_t m_OwnerOnlyPredNetQuaternionVariables = 0x1B8;
	constexpr uint32_t m_OwnerOnlyPredNetGlobalSymbolVariables = 0x1D0;
	constexpr uint32_t m_nBoolVariablesCount = 0x1E8;
	constexpr uint32_t m_nOwnerOnlyBoolVariablesCount = 0x1EC;
	constexpr uint32_t m_nRandomSeedOffset = 0x1F0;
	constexpr uint32_t m_flLastTeleportTime = 0x1F4;
}

namespace C_BaseEntityAPI
{
}

namespace CTakeDamageInfoAPI
{
}

namespace CClientGapTypeQueryRegistration
{
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

namespace CBasePlayerController
{
	constexpr uint32_t m_nFinalPredictedTick = 0x550;
	constexpr uint32_t m_CommandContext = 0x558;
	constexpr uint32_t m_nInButtonsWhichAreToggles = 0x5F0;
	constexpr uint32_t m_nTickBase = 0x5F8;
	constexpr uint32_t m_hPawn = 0x5FC;
	constexpr uint32_t m_bKnownTeamMismatch = 0x600;
	constexpr uint32_t m_hPredictedPawn = 0x604;
	constexpr uint32_t m_nSplitScreenSlot = 0x608;
	constexpr uint32_t m_hSplitOwner = 0x60C;
	constexpr uint32_t m_hSplitScreenPlayers = 0x610;
	constexpr uint32_t m_bIsHLTV = 0x628;
	constexpr uint32_t m_iConnected = 0x62C;
	constexpr uint32_t m_iszPlayerName = 0x630;
	constexpr uint32_t m_steamID = 0x6B8;
	constexpr uint32_t m_bIsLocalPlayerController = 0x6C0;
	constexpr uint32_t m_iDesiredFOV = 0x6C4;
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

namespace C_EnvWindClientside
{
	constexpr uint32_t m_EnvWindShared = 0x548;
}

namespace C_EntityFlame
{
	constexpr uint32_t m_hEntAttached = 0x548;
	constexpr uint32_t m_hOldAttached = 0x570;
	constexpr uint32_t m_bCheapEffect = 0x574;
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
	constexpr uint32_t m_flScale = 0x548;
	constexpr uint32_t m_flStartScale = 0x54C;
	constexpr uint32_t m_flScaleTime = 0x550;
	constexpr uint32_t m_nFlags = 0x554;
}

namespace TimedEvent
{
	constexpr uint32_t m_TimeBetweenEvents = 0x0;
	constexpr uint32_t m_fNextEvent = 0x4;
}

namespace CFireOverlay
{
	constexpr uint32_t m_pOwner = 0xD0;
	constexpr uint32_t m_vBaseColors = 0xD8;
	constexpr uint32_t m_flScale = 0x108;
	constexpr uint32_t m_nGUID = 0x10C;
}

namespace C_FireSmoke
{
	constexpr uint32_t m_nFlameModelIndex = 0x558;
	constexpr uint32_t m_nFlameFromAboveModelIndex = 0x55C;
	constexpr uint32_t m_flScaleRegister = 0x560;
	constexpr uint32_t m_flScaleStart = 0x564;
	constexpr uint32_t m_flScaleEnd = 0x568;
	constexpr uint32_t m_flScaleTimeStart = 0x56C;
	constexpr uint32_t m_flScaleTimeEnd = 0x570;
	constexpr uint32_t m_flChildFlameSpread = 0x574;
	constexpr uint32_t m_flClipPerc = 0x588;
	constexpr uint32_t m_bClipTested = 0x58C;
	constexpr uint32_t m_bFadingOut = 0x58D;
	constexpr uint32_t m_tParticleSpawn = 0x590;
	constexpr uint32_t m_pFireOverlay = 0x598;
}

namespace C_RopeKeyframe
{
	constexpr uint32_t m_LinksTouchingSomething = 0xCD0;
	constexpr uint32_t m_nLinksTouchingSomething = 0xCD4;
	constexpr uint32_t m_bApplyWind = 0xCD8;
	constexpr uint32_t m_fPrevLockedPoints = 0xCDC;
	constexpr uint32_t m_iForcePointMoveCounter = 0xCE0;
	constexpr uint32_t m_bPrevEndPointPos = 0xCE4;
	constexpr uint32_t m_vPrevEndPointPos = 0xCE8;
	constexpr uint32_t m_flCurScroll = 0xD00;
	constexpr uint32_t m_flScrollSpeed = 0xD04;
	constexpr uint32_t m_RopeFlags = 0xD08;
	constexpr uint32_t m_iRopeMaterialModelIndex = 0xD10;
	constexpr uint32_t m_LightValues = 0xF88;
	constexpr uint32_t m_nSegments = 0x1000;
	constexpr uint32_t m_hStartPoint = 0x1004;
	constexpr uint32_t m_hEndPoint = 0x1008;
	constexpr uint32_t m_iStartAttachment = 0x100C;
	constexpr uint32_t m_iEndAttachment = 0x100D;
	constexpr uint32_t m_Subdiv = 0x100E;
	constexpr uint32_t m_RopeLength = 0x1010;
	constexpr uint32_t m_Slack = 0x1012;
	constexpr uint32_t m_TextureScale = 0x1014;
	constexpr uint32_t m_fLockedPoints = 0x1018;
	constexpr uint32_t m_nChangeCount = 0x1019;
	constexpr uint32_t m_Width = 0x101C;
	constexpr uint32_t m_PhysicsDelegate = 0x1020;
	constexpr uint32_t m_hMaterial = 0x1030;
	constexpr uint32_t m_TextureHeight = 0x1038;
	constexpr uint32_t m_vecImpulse = 0x103C;
	constexpr uint32_t m_vecPreviousImpulse = 0x1048;
	constexpr uint32_t m_flCurrentGustTimer = 0x1054;
	constexpr uint32_t m_flCurrentGustLifetime = 0x1058;
	constexpr uint32_t m_flTimeToNextGust = 0x105C;
	constexpr uint32_t m_vWindDir = 0x1060;
	constexpr uint32_t m_vColorMod = 0x106C;
	constexpr uint32_t m_vCachedEndPointAttachmentPos = 0x1078;
	constexpr uint32_t m_vCachedEndPointAttachmentAngle = 0x1090;
	constexpr uint32_t m_bConstrainBetweenEndpoints = 0x10A8;
	constexpr uint32_t m_bEndPointAttachmentPositionsDirty = 0x0;
	constexpr uint32_t m_bEndPointAttachmentAnglesDirty = 0x0;
	constexpr uint32_t m_bNewDataThisFrame = 0x0;
	constexpr uint32_t m_bPhysicsInitted = 0x0;
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

namespace C_SkyCamera
{
	constexpr uint32_t m_skyboxData = 0x548;
	constexpr uint32_t m_skyboxSlotToken = 0x5D8;
	constexpr uint32_t m_bUseAngles = 0x5DC;
	constexpr uint32_t m_pNext = 0x5E0;
}

namespace CSkyboxReference
{
	constexpr uint32_t m_worldGroupId = 0x548;
	constexpr uint32_t m_hSkyCamera = 0x54C;
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
	constexpr uint32_t m_flFadeStartDist = 0x548;
	constexpr uint32_t m_flFadeEndDist = 0x54C;
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
	constexpr uint32_t __m_pChainEntity = 0x8;
	constexpr uint32_t m_nTotalPausedTicks = 0x30;
	constexpr uint32_t m_nPauseStartTick = 0x34;
	constexpr uint32_t m_bGamePaused = 0x38;
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
	constexpr uint32_t m_iszStackName = 0x548;
	constexpr uint32_t m_iszOperatorName = 0x550;
	constexpr uint32_t m_iszOpvarName = 0x558;
	constexpr uint32_t m_iOpvarIndex = 0x560;
	constexpr uint32_t m_bUseAutoCompare = 0x564;
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

namespace C_SoundOpvarSetAutoRoomEntity
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
	constexpr uint32_t m_bTimerPaused = 0x548;
	constexpr uint32_t m_flTimeRemaining = 0x54C;
	constexpr uint32_t m_flTimerEndTime = 0x550;
	constexpr uint32_t m_bIsDisabled = 0x554;
	constexpr uint32_t m_bShowInHUD = 0x555;
	constexpr uint32_t m_nTimerLength = 0x558;
	constexpr uint32_t m_nTimerInitialLength = 0x55C;
	constexpr uint32_t m_nTimerMaxLength = 0x560;
	constexpr uint32_t m_bAutoCountdown = 0x564;
	constexpr uint32_t m_nSetupTimeLength = 0x568;
	constexpr uint32_t m_nState = 0x56C;
	constexpr uint32_t m_bStartPaused = 0x570;
	constexpr uint32_t m_bInCaptureWatchState = 0x571;
	constexpr uint32_t m_flTotalTime = 0x574;
	constexpr uint32_t m_bStopWatchTimer = 0x578;
	constexpr uint32_t m_bFireFinished = 0x579;
	constexpr uint32_t m_bFire5MinRemain = 0x57A;
	constexpr uint32_t m_bFire4MinRemain = 0x57B;
	constexpr uint32_t m_bFire3MinRemain = 0x57C;
	constexpr uint32_t m_bFire2MinRemain = 0x57D;
	constexpr uint32_t m_bFire1MinRemain = 0x57E;
	constexpr uint32_t m_bFire30SecRemain = 0x57F;
	constexpr uint32_t m_bFire10SecRemain = 0x580;
	constexpr uint32_t m_bFire5SecRemain = 0x581;
	constexpr uint32_t m_bFire4SecRemain = 0x582;
	constexpr uint32_t m_bFire3SecRemain = 0x583;
	constexpr uint32_t m_bFire2SecRemain = 0x584;
	constexpr uint32_t m_bFire1SecRemain = 0x585;
	constexpr uint32_t m_nOldTimerLength = 0x588;
	constexpr uint32_t m_nOldTimerState = 0x58C;
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

namespace CAttributeList
{
	constexpr uint32_t m_Attributes = 0x8;
	constexpr uint32_t m_pManager = 0x58;
}

namespace CAttributeManager::cached_attribute_float_t
{
	constexpr uint32_t flIn = 0x0;
	constexpr uint32_t iAttribHook = 0x8;
	constexpr uint32_t flOut = 0x10;
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
	constexpr uint32_t m_bDisallowSOC = 0x1E9;
	constexpr uint32_t m_bIsStoreItem = 0x1EA;
	constexpr uint32_t m_bIsTradeItem = 0x1EB;
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

namespace C_CSGameRules
{
	constexpr uint32_t m_bFreezePeriod = 0x40;
	constexpr uint32_t m_bWarmupPeriod = 0x41;
	constexpr uint32_t m_fWarmupPeriodEnd = 0x44;
	constexpr uint32_t m_fWarmupPeriodStart = 0x48;
	constexpr uint32_t m_bServerPaused = 0x4C;
	constexpr uint32_t m_bTerroristTimeOutActive = 0x4D;
	constexpr uint32_t m_bCTTimeOutActive = 0x4E;
	constexpr uint32_t m_flTerroristTimeOutRemaining = 0x50;
	constexpr uint32_t m_flCTTimeOutRemaining = 0x54;
	constexpr uint32_t m_nTerroristTimeOuts = 0x58;
	constexpr uint32_t m_nCTTimeOuts = 0x5C;
	constexpr uint32_t m_bTechnicalTimeOut = 0x60;
	constexpr uint32_t m_bMatchWaitingForResume = 0x61;
	constexpr uint32_t m_iRoundTime = 0x64;
	constexpr uint32_t m_fMatchStartTime = 0x68;
	constexpr uint32_t m_fRoundStartTime = 0x6C;
	constexpr uint32_t m_flRestartRoundTime = 0x70;
	constexpr uint32_t m_bGameRestart = 0x74;
	constexpr uint32_t m_flGameStartTime = 0x78;
	constexpr uint32_t m_timeUntilNextPhaseStarts = 0x7C;
	constexpr uint32_t m_gamePhase = 0x80;
	constexpr uint32_t m_totalRoundsPlayed = 0x84;
	constexpr uint32_t m_nRoundsPlayedThisPhase = 0x88;
	constexpr uint32_t m_nOvertimePlaying = 0x8C;
	constexpr uint32_t m_iHostagesRemaining = 0x90;
	constexpr uint32_t m_bAnyHostageReached = 0x94;
	constexpr uint32_t m_bMapHasBombTarget = 0x95;
	constexpr uint32_t m_bMapHasRescueZone = 0x96;
	constexpr uint32_t m_bMapHasBuyZone = 0x97;
	constexpr uint32_t m_bIsQueuedMatchmaking = 0x98;
	constexpr uint32_t m_nQueuedMatchmakingMode = 0x9C;
	constexpr uint32_t m_bIsValveDS = 0xA0;
	constexpr uint32_t m_bLogoMap = 0xA1;
	constexpr uint32_t m_bPlayAllStepSoundsOnServer = 0xA2;
	constexpr uint32_t m_iSpectatorSlotCount = 0xA4;
	constexpr uint32_t m_MatchDevice = 0xA8;
	constexpr uint32_t m_bHasMatchStarted = 0xAC;
	constexpr uint32_t m_nNextMapInMapgroup = 0xB0;
	constexpr uint32_t m_szTournamentEventName = 0xB4;
	constexpr uint32_t m_szTournamentEventStage = 0x2B4;
	constexpr uint32_t m_szMatchStatTxt = 0x4B4;
	constexpr uint32_t m_szTournamentPredictionsTxt = 0x6B4;
	constexpr uint32_t m_nTournamentPredictionsPct = 0x8B4;
	constexpr uint32_t m_flCMMItemDropRevealStartTime = 0x8B8;
	constexpr uint32_t m_flCMMItemDropRevealEndTime = 0x8BC;
	constexpr uint32_t m_bIsDroppingItems = 0x8C0;
	constexpr uint32_t m_bIsQuestEligible = 0x8C1;
	constexpr uint32_t m_bIsHltvActive = 0x8C2;
	constexpr uint32_t m_arrProhibitedItemIndices = 0x8C4;
	constexpr uint32_t m_arrTournamentActiveCasterAccounts = 0x98C;
	constexpr uint32_t m_numBestOfMaps = 0x99C;
	constexpr uint32_t m_nHalloweenMaskListSeed = 0x9A0;
	constexpr uint32_t m_bBombDropped = 0x9A4;
	constexpr uint32_t m_bBombPlanted = 0x9A5;
	constexpr uint32_t m_iRoundWinStatus = 0x9A8;
	constexpr uint32_t m_eRoundWinReason = 0x9AC;
	constexpr uint32_t m_bTCantBuy = 0x9B0;
	constexpr uint32_t m_bCTCantBuy = 0x9B1;
	constexpr uint32_t m_iMatchStats_RoundResults = 0x9B4;
	constexpr uint32_t m_iMatchStats_PlayersAlive_CT = 0xA2C;
	constexpr uint32_t m_iMatchStats_PlayersAlive_T = 0xAA4;
	constexpr uint32_t m_TeamRespawnWaveTimes = 0xB1C;
	constexpr uint32_t m_flNextRespawnWave = 0xB9C;
	constexpr uint32_t m_nServerQuestID = 0xC1C;
	constexpr uint32_t m_vMinimapMins = 0xC20;
	constexpr uint32_t m_vMinimapMaxs = 0xC2C;
	constexpr uint32_t m_MinimapVerticalSectionHeights = 0xC38;
	constexpr uint32_t m_bSpawnedTerrorHuntHeavy = 0xC58;
	constexpr uint32_t m_nEndMatchMapGroupVoteTypes = 0xC5C;
	constexpr uint32_t m_nEndMatchMapGroupVoteOptions = 0xC84;
	constexpr uint32_t m_nEndMatchMapVoteWinner = 0xCAC;
	constexpr uint32_t m_iNumConsecutiveCTLoses = 0xCB0;
	constexpr uint32_t m_iNumConsecutiveTerroristLoses = 0xCB4;
	constexpr uint32_t m_bMarkClientStopRecordAtRoundEnd = 0xCD0;
	constexpr uint32_t m_nMatchAbortedEarlyReason = 0xD28;
	constexpr uint32_t m_bHasTriggeredRoundStartMusic = 0xD2C;
	constexpr uint32_t m_bSwitchingTeamsAtRoundReset = 0xD2D;
	constexpr uint32_t m_pGameModeRules = 0xD48;
	constexpr uint32_t m_RetakeRules = 0xD50;
	constexpr uint32_t m_nMatchEndCount = 0xE68;
	constexpr uint32_t m_nTTeamIntroVariant = 0xE6C;
	constexpr uint32_t m_nCTTeamIntroVariant = 0xE70;
	constexpr uint32_t m_bTeamIntroPeriod = 0xE74;
	constexpr uint32_t m_iRoundEndWinnerTeam = 0xE78;
	constexpr uint32_t m_eRoundEndReason = 0xE7C;
	constexpr uint32_t m_bRoundEndShowTimerDefend = 0xE80;
	constexpr uint32_t m_iRoundEndTimerTime = 0xE84;
	constexpr uint32_t m_sRoundEndFunFactToken = 0xE88;
	constexpr uint32_t m_iRoundEndFunFactPlayerSlot = 0xE90;
	constexpr uint32_t m_iRoundEndFunFactData1 = 0xE94;
	constexpr uint32_t m_iRoundEndFunFactData2 = 0xE98;
	constexpr uint32_t m_iRoundEndFunFactData3 = 0xE9C;
	constexpr uint32_t m_sRoundEndMessage = 0xEA0;
	constexpr uint32_t m_iRoundEndPlayerCount = 0xEA8;
	constexpr uint32_t m_bRoundEndNoMusic = 0xEAC;
	constexpr uint32_t m_iRoundEndLegacy = 0xEB0;
	constexpr uint32_t m_nRoundEndCount = 0xEB4;
	constexpr uint32_t m_iRoundStartRoundNumber = 0xEB8;
	constexpr uint32_t m_nRoundStartCount = 0xEBC;
	constexpr uint32_t m_flLastPerfSampleTime = 0x4EC8;
}

namespace C_CSGameRulesProxy
{
	constexpr uint32_t m_pGameRules = 0x548;
}

namespace CCSGameModeRules
{
	constexpr uint32_t __m_pChainEntity = 0x8;
}

namespace C_RetakeGameRules
{
	constexpr uint32_t m_nMatchSeed = 0xF8;
	constexpr uint32_t m_bBlockersPresent = 0xFC;
	constexpr uint32_t m_bRoundInProgress = 0xFD;
	constexpr uint32_t m_iFirstSecondHalfRound = 0x100;
	constexpr uint32_t m_iBombSite = 0x104;
}

namespace CCSTakeDamageInfoAPI
{
}

namespace CCSGameModeRules_Noop
{
}

namespace CCSGameModeScript
{
}

namespace CCSGameModeRules_ArmsRace
{
	constexpr uint32_t m_WeaponSequence = 0x38;
}

namespace CCSArmsRaceScript
{
	constexpr uint32_t m_pOuter = 0xF8;
}

namespace CCSGameModeRules_Deathmatch
{
	constexpr uint32_t m_flDMBonusStartTime = 0x38;
	constexpr uint32_t m_flDMBonusTimeLength = 0x3C;
	constexpr uint32_t m_sDMBonusWeapon = 0x40;
}

namespace CCSDeathmatchScript
{
	constexpr uint32_t m_pOuter = 0xF8;
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
	constexpr uint32_t m_iEnemyKnifeKills = 0x74;
	constexpr uint32_t m_iEnemyTaserKills = 0x78;
}

namespace C_CSGO_TeamPreviewCharacterPosition
{
	constexpr uint32_t m_nVariant = 0x548;
	constexpr uint32_t m_nRandom = 0x54C;
	constexpr uint32_t m_nOrdinal = 0x550;
	constexpr uint32_t m_sWeaponName = 0x558;
	constexpr uint32_t m_xuid = 0x560;
	constexpr uint32_t m_agentItem = 0x568;
	constexpr uint32_t m_glovesItem = 0x9B0;
	constexpr uint32_t m_weaponItem = 0xDF8;
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

namespace CCSPointScriptEntity
{
}

namespace CCSClientPointScriptEntity
{
}

namespace CCSPointScript
{
	constexpr uint32_t m_pParent = 0xF8;
}

namespace CCSPointScriptExtensions_entity
{
}

namespace CCSPointScriptExtensions_player
{
}

namespace CCSPointScriptExtensions_observer
{
}

namespace CCSPointScriptExtensions_player_controller
{
}

namespace CCSPointScriptExtensions_weapon_cs_base
{
}

namespace CCSPointScriptExtensions_CCSWeaponBaseVData
{
}

namespace C_CSPlayerPawn
{
	constexpr uint32_t m_pBulletServices = 0x1468;
	constexpr uint32_t m_pHostageServices = 0x1470;
	constexpr uint32_t m_pBuyServices = 0x1478;
	constexpr uint32_t m_pGlowServices = 0x1480;
	constexpr uint32_t m_pActionTrackingServices = 0x1488;
	constexpr uint32_t m_flHealthShotBoostExpirationTime = 0x1490;
	constexpr uint32_t m_flLastFiredWeaponTime = 0x1494;
	constexpr uint32_t m_bHasFemaleVoice = 0x1498;
	constexpr uint32_t m_flLandingTimeSeconds = 0x149C;
	constexpr uint32_t m_flOldFallVelocity = 0x14A0;
	constexpr uint32_t m_szLastPlaceName = 0x14A4;
	constexpr uint32_t m_bPrevDefuser = 0x14B6;
	constexpr uint32_t m_bPrevHelmet = 0x14B7;
	constexpr uint32_t m_nPrevArmorVal = 0x14B8;
	constexpr uint32_t m_nPrevGrenadeAmmoCount = 0x14BC;
	constexpr uint32_t m_unPreviousWeaponHash = 0x14C0;
	constexpr uint32_t m_unWeaponHash = 0x14C4;
	constexpr uint32_t m_bInBuyZone = 0x14C8;
	constexpr uint32_t m_bPreviouslyInBuyZone = 0x14C9;
	constexpr uint32_t m_aimPunchAngle = 0x14CC;
	constexpr uint32_t m_aimPunchAngleVel = 0x14D8;
	constexpr uint32_t m_aimPunchTickBase = 0x14E4;
	constexpr uint32_t m_aimPunchTickFraction = 0x14E8;
	constexpr uint32_t m_aimPunchCache = 0x14F0;
	constexpr uint32_t m_bInLanding = 0x1510;
	constexpr uint32_t m_flLandingStartTime = 0x1514;
	constexpr uint32_t m_bInHostageRescueZone = 0x1518;
	constexpr uint32_t m_bInBombZone = 0x1519;
	constexpr uint32_t m_bIsBuyMenuOpen = 0x151A;
	constexpr uint32_t m_flTimeOfLastInjury = 0x151C;
	constexpr uint32_t m_flNextSprayDecalTime = 0x1520;
	constexpr uint32_t m_iRetakesOffering = 0x1640;
	constexpr uint32_t m_iRetakesOfferingCard = 0x1644;
	constexpr uint32_t m_bRetakesHasDefuseKit = 0x1648;
	constexpr uint32_t m_bRetakesMVPLastRound = 0x1649;
	constexpr uint32_t m_iRetakesMVPBoostItem = 0x164C;
	constexpr uint32_t m_RetakesMVPBoostExtraUtility = 0x1650;
	constexpr uint32_t m_bNeedToReApplyGloves = 0x1670;
	constexpr uint32_t m_EconGloves = 0x1678;
	constexpr uint32_t m_nEconGlovesChanged = 0x1AC0;
	constexpr uint32_t m_bMustSyncRagdollState = 0x1AC1;
	constexpr uint32_t m_nRagdollDamageBone = 0x1AC4;
	constexpr uint32_t m_vRagdollDamageForce = 0x1AC8;
	constexpr uint32_t m_vRagdollDamagePosition = 0x1AD4;
	constexpr uint32_t m_szRagdollDamageWeaponName = 0x1AE0;
	constexpr uint32_t m_bRagdollDamageHeadshot = 0x1B20;
	constexpr uint32_t m_vRagdollServerOrigin = 0x1B24;
	constexpr uint32_t m_bLastHeadBoneTransformIsValid = 0x2138;
	constexpr uint32_t m_lastLandTime = 0x213C;
	constexpr uint32_t m_bOnGroundLastTick = 0x2140;
	constexpr uint32_t m_qDeathEyeAngles = 0x215C;
	constexpr uint32_t m_bSkipOneHeadConstraintUpdate = 0x2168;
	constexpr uint32_t m_bLeftHanded = 0x2169;
	constexpr uint32_t m_fSwitchedHandednessTime = 0x216C;
	constexpr uint32_t m_flViewmodelOffsetX = 0x2170;
	constexpr uint32_t m_flViewmodelOffsetY = 0x2174;
	constexpr uint32_t m_flViewmodelOffsetZ = 0x2178;
	constexpr uint32_t m_flViewmodelFOV = 0x217C;
	constexpr uint32_t m_vecPlayerPatchEconIndices = 0x2180;
	constexpr uint32_t m_GunGameImmunityColor = 0x21B8;
	constexpr uint32_t m_vecBulletHitModels = 0x2208;
	constexpr uint32_t m_bIsWalking = 0x2220;
	constexpr uint32_t m_thirdPersonHeading = 0x2228;
	constexpr uint32_t m_flSlopeDropOffset = 0x2240;
	constexpr uint32_t m_flSlopeDropHeight = 0x2250;
	constexpr uint32_t m_vHeadConstraintOffset = 0x2260;
	constexpr uint32_t m_entitySpottedState = 0x2278;
	constexpr uint32_t m_bIsScoped = 0x2290;
	constexpr uint32_t m_bResumeZoom = 0x2291;
	constexpr uint32_t m_bIsDefusing = 0x2292;
	constexpr uint32_t m_bIsGrabbingHostage = 0x2293;
	constexpr uint32_t m_iBlockingUseActionInProgress = 0x2294;
	constexpr uint32_t m_flEmitSoundTime = 0x2298;
	constexpr uint32_t m_bInNoDefuseArea = 0x229C;
	constexpr uint32_t m_nWhichBombZone = 0x22A0;
	constexpr uint32_t m_iShotsFired = 0x22A4;
	constexpr uint32_t m_flVelocityModifier = 0x22A8;
	constexpr uint32_t m_flHitHeading = 0x22AC;
	constexpr uint32_t m_nHitBodyPart = 0x22B0;
	constexpr uint32_t m_bWaitForNoAttack = 0x22B4;
	constexpr uint32_t m_ignoreLadderJumpTime = 0x22B8;
	constexpr uint32_t m_bKilledByHeadshot = 0x22BD;
	constexpr uint32_t m_ArmorValue = 0x22C0;
	constexpr uint32_t m_unCurrentEquipmentValue = 0x22C4;
	constexpr uint32_t m_unRoundStartEquipmentValue = 0x22C6;
	constexpr uint32_t m_unFreezetimeEndEquipmentValue = 0x22C8;
	constexpr uint32_t m_nLastKillerIndex = 0x22CC;
	constexpr uint32_t m_bOldIsScoped = 0x22D0;
	constexpr uint32_t m_bHasDeathInfo = 0x22D1;
	constexpr uint32_t m_flDeathInfoTime = 0x22D4;
	constexpr uint32_t m_vecDeathInfoOrigin = 0x22D8;
	constexpr uint32_t m_grenadeParameterStashTime = 0x22E4;
	constexpr uint32_t m_bGrenadeParametersStashed = 0x22E8;
	constexpr uint32_t m_angStashedShootAngles = 0x22EC;
	constexpr uint32_t m_vecStashedGrenadeThrowPosition = 0x22F8;
	constexpr uint32_t m_vecStashedVelocity = 0x2304;
	constexpr uint32_t m_angShootAngleHistory = 0x2310;
	constexpr uint32_t m_vecThrowPositionHistory = 0x2328;
	constexpr uint32_t m_vecVelocityHistory = 0x2340;
}

namespace C_PlayerPing
{
	constexpr uint32_t m_hPlayer = 0x578;
	constexpr uint32_t m_hPingedEntity = 0x57C;
	constexpr uint32_t m_iType = 0x580;
	constexpr uint32_t m_bUrgent = 0x584;
	constexpr uint32_t m_szPlaceName = 0x585;
}

namespace CCSPlayer_PingServices
{
	constexpr uint32_t m_hPlayerPing = 0x40;
}

namespace C_CSPlayerResource
{
	constexpr uint32_t m_bHostageAlive = 0x548;
	constexpr uint32_t m_isHostageFollowingSomeone = 0x554;
	constexpr uint32_t m_iHostageEntityIDs = 0x560;
	constexpr uint32_t m_bombsiteCenterA = 0x590;
	constexpr uint32_t m_bombsiteCenterB = 0x59C;
	constexpr uint32_t m_hostageRescueX = 0x5A8;
	constexpr uint32_t m_hostageRescueY = 0x5B8;
	constexpr uint32_t m_hostageRescueZ = 0x5C8;
	constexpr uint32_t m_bEndMatchNextMapAllVoted = 0x5D8;
	constexpr uint32_t m_foundGoalPositions = 0x5D9;
}

namespace CCSPlayerControllerAPI
{
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
	constexpr uint32_t m_flMaxFallVelocity = 0x218;
	constexpr uint32_t m_vecLadderNormal = 0x21C;
	constexpr uint32_t m_nLadderSurfacePropIndex = 0x228;
	constexpr uint32_t m_flDuckAmount = 0x22C;
	constexpr uint32_t m_flDuckSpeed = 0x230;
	constexpr uint32_t m_bDuckOverride = 0x234;
	constexpr uint32_t m_bDesiresDuck = 0x235;
	constexpr uint32_t m_flDuckOffset = 0x238;
	constexpr uint32_t m_nDuckTimeMsecs = 0x23C;
	constexpr uint32_t m_nDuckJumpTimeMsecs = 0x240;
	constexpr uint32_t m_nJumpTimeMsecs = 0x244;
	constexpr uint32_t m_flLastDuckTime = 0x248;
	constexpr uint32_t m_vecLastPositionAtFullCrouchSpeed = 0x258;
	constexpr uint32_t m_duckUntilOnGround = 0x260;
	constexpr uint32_t m_bHasWalkMovedSinceLastJump = 0x261;
	constexpr uint32_t m_bInStuckTest = 0x262;
	constexpr uint32_t m_flStuckCheckTime = 0x270;
	constexpr uint32_t m_nTraceCount = 0x470;
	constexpr uint32_t m_StuckLast = 0x474;
	constexpr uint32_t m_bSpeedCropped = 0x478;
	constexpr uint32_t m_nOldWaterLevel = 0x47C;
	constexpr uint32_t m_flWaterEntryTime = 0x480;
	constexpr uint32_t m_vecForward = 0x484;
	constexpr uint32_t m_vecLeft = 0x490;
	constexpr uint32_t m_vecUp = 0x49C;
	constexpr uint32_t m_nGameCodeHasMovedPlayerAfterCommand = 0x4A8;
	constexpr uint32_t m_bOldJumpPressed = 0x4AC;
	constexpr uint32_t m_flJumpPressedTime = 0x4B0;
	constexpr uint32_t m_flJumpUntil = 0x4B4;
	constexpr uint32_t m_flJumpVel = 0x4B8;
	constexpr uint32_t m_fStashGrenadeParameterWhen = 0x4BC;
	constexpr uint32_t m_nButtonDownMaskPrev = 0x4C0;
	constexpr uint32_t m_flOffsetTickCompleteTime = 0x4C8;
	constexpr uint32_t m_flOffsetTickStashedSpeed = 0x4CC;
	constexpr uint32_t m_flStamina = 0x4D0;
	constexpr uint32_t m_flHeightAtJumpStart = 0x4D4;
	constexpr uint32_t m_flMaxJumpHeightThisJump = 0x4D8;
}

namespace CCSPlayer_UseServices
{
}

namespace C_BaseViewModel
{
	constexpr uint32_t m_vecLastFacing = 0xED8;
	constexpr uint32_t m_nViewModelIndex = 0xEE4;
	constexpr uint32_t m_nAnimationParity = 0xEE8;
	constexpr uint32_t m_flAnimationStartTime = 0xEEC;
	constexpr uint32_t m_hWeapon = 0xEF0;
	constexpr uint32_t m_sVMName = 0xEF8;
	constexpr uint32_t m_sAnimationPrefix = 0xF00;
	constexpr uint32_t m_hWeaponModel = 0xF08;
	constexpr uint32_t m_iCameraAttachment = 0xF0C;
	constexpr uint32_t m_vecLastCameraAngles = 0xF10;
	constexpr uint32_t m_previousElapsedDuration = 0xF1C;
	constexpr uint32_t m_previousCycle = 0xF20;
	constexpr uint32_t m_nOldAnimationParity = 0xF24;
	constexpr uint32_t m_hOldLayerSequence = 0xF28;
	constexpr uint32_t m_oldLayer = 0xF2C;
	constexpr uint32_t m_oldLayerStartTime = 0xF30;
	constexpr uint32_t m_hControlPanel = 0xF34;
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
	constexpr uint32_t m_flNextAttack = 0xB8;
	constexpr uint32_t m_bIsLookingAtWeapon = 0xBC;
	constexpr uint32_t m_bIsHoldingLookAtWeapon = 0xBD;
	constexpr uint32_t m_nOldShootPositionHistoryCount = 0xC0;
	constexpr uint32_t m_nOldInputHistoryCount = 0x458;
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
	constexpr uint32_t m_iNumRoundKills = 0x110;
	constexpr uint32_t m_iNumRoundKillsHeadshots = 0x114;
	constexpr uint32_t m_unTotalRoundDamageDealt = 0x118;
}

namespace CCSPlayerController
{
	constexpr uint32_t m_pInGameMoneyServices = 0x6F0;
	constexpr uint32_t m_pInventoryServices = 0x6F8;
	constexpr uint32_t m_pActionTrackingServices = 0x700;
	constexpr uint32_t m_pDamageServices = 0x708;
	constexpr uint32_t m_iPing = 0x710;
	constexpr uint32_t m_bHasCommunicationAbuseMute = 0x714;
	constexpr uint32_t m_szCrosshairCodes = 0x718;
	constexpr uint32_t m_iPendingTeamNum = 0x720;
	constexpr uint32_t m_flForceTeamTime = 0x724;
	constexpr uint32_t m_iCompTeammateColor = 0x728;
	constexpr uint32_t m_bEverPlayedOnTeam = 0x72C;
	constexpr uint32_t m_flPreviousForceJoinTeamTime = 0x730;
	constexpr uint32_t m_szClan = 0x738;
	constexpr uint32_t m_sSanitizedPlayerName = 0x740;
	constexpr uint32_t m_iCoachingTeam = 0x748;
	constexpr uint32_t m_nPlayerDominated = 0x750;
	constexpr uint32_t m_nPlayerDominatingMe = 0x758;
	constexpr uint32_t m_iCompetitiveRanking = 0x760;
	constexpr uint32_t m_iCompetitiveWins = 0x764;
	constexpr uint32_t m_iCompetitiveRankType = 0x768;
	constexpr uint32_t m_iCompetitiveRankingPredicted_Win = 0x76C;
	constexpr uint32_t m_iCompetitiveRankingPredicted_Loss = 0x770;
	constexpr uint32_t m_iCompetitiveRankingPredicted_Tie = 0x774;
	constexpr uint32_t m_nEndMatchNextMapVote = 0x778;
	constexpr uint32_t m_unActiveQuestId = 0x77C;
	constexpr uint32_t m_nQuestProgressReason = 0x780;
	constexpr uint32_t m_unPlayerTvControlFlags = 0x784;
	constexpr uint32_t m_iDraftIndex = 0x7B0;
	constexpr uint32_t m_msQueuedModeDisconnectionTimestamp = 0x7B4;
	constexpr uint32_t m_uiAbandonRecordedReason = 0x7B8;
	constexpr uint32_t m_bCannotBeKicked = 0x7BC;
	constexpr uint32_t m_bEverFullyConnected = 0x7BD;
	constexpr uint32_t m_bAbandonAllowsSurrender = 0x7BE;
	constexpr uint32_t m_bAbandonOffersInstantSurrender = 0x7BF;
	constexpr uint32_t m_bDisconnection1MinWarningPrinted = 0x7C0;
	constexpr uint32_t m_bScoreReported = 0x7C1;
	constexpr uint32_t m_nDisconnectionTick = 0x7C4;
	constexpr uint32_t m_bControllingBot = 0x7D0;
	constexpr uint32_t m_bHasControlledBotThisRound = 0x7D1;
	constexpr uint32_t m_bHasBeenControlledByPlayerThisRound = 0x7D2;
	constexpr uint32_t m_nBotsControlledThisRound = 0x7D4;
	constexpr uint32_t m_bCanControlObservedBot = 0x7D8;
	constexpr uint32_t m_hPlayerPawn = 0x7DC;
	constexpr uint32_t m_hObserverPawn = 0x7E0;
	constexpr uint32_t m_bPawnIsAlive = 0x7E4;
	constexpr uint32_t m_iPawnHealth = 0x7E8;
	constexpr uint32_t m_iPawnArmor = 0x7EC;
	constexpr uint32_t m_bPawnHasDefuser = 0x7F0;
	constexpr uint32_t m_bPawnHasHelmet = 0x7F1;
	constexpr uint32_t m_nPawnCharacterDefIndex = 0x7F2;
	constexpr uint32_t m_iPawnLifetimeStart = 0x7F4;
	constexpr uint32_t m_iPawnLifetimeEnd = 0x7F8;
	constexpr uint32_t m_iPawnBotDifficulty = 0x7FC;
	constexpr uint32_t m_hOriginalControllerOfCurrentPawn = 0x800;
	constexpr uint32_t m_iScore = 0x804;
	constexpr uint32_t m_vecKills = 0x808;
	constexpr uint32_t m_bMvpNoMusic = 0x820;
	constexpr uint32_t m_eMvpReason = 0x824;
	constexpr uint32_t m_iMusicKitID = 0x828;
	constexpr uint32_t m_iMusicKitMVPs = 0x82C;
	constexpr uint32_t m_iMVPs = 0x830;
	constexpr uint32_t m_bIsPlayerNameDirty = 0x834;
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
	constexpr uint32_t m_nPersonaDataXpTrailLevel = 0x6C;
	constexpr uint32_t m_vecServerAuthoritativeWeaponSlots = 0x70;
}

namespace CCSWeaponBaseVDataAPI
{
}

namespace CCSWeaponBaseAPI
{
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
	constexpr uint32_t m_strPanoramaPanelPath = 0x270;
	constexpr uint32_t m_nPanoramaRenderRes = 0x278;
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
	constexpr uint32_t m_strGenerateTexture_TargetParam = 0x2E8;
	constexpr uint32_t m_strGenerateTexture_InitialContainer = 0x2F0;
	constexpr uint32_t m_nResolution = 0x2F8;
	constexpr uint32_t m_bIsScratchTarget = 0x2FC;
	constexpr uint32_t m_bSplatDebugInfo = 0x2FD;
	constexpr uint32_t m_bCaptureInRenderDoc = 0x2FE;
	constexpr uint32_t m_vecTexGenInstructions = 0x300;
	constexpr uint32_t m_vecConditionalMutators = 0x318;
	constexpr uint32_t m_strPopInputQueue_Container = 0x330;
	constexpr uint32_t m_strDrawText_InputContainerSrc = 0x338;
	constexpr uint32_t m_strDrawText_InputContainerProperty = 0x340;
	constexpr uint32_t m_vecDrawText_Position = 0x348;
	constexpr uint32_t m_colDrawText_Color = 0x350;
	constexpr uint32_t m_strDrawText_Font = 0x358;
	constexpr uint32_t m_vecConditions = 0x360;
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
	constexpr uint32_t m_FinalKVs = 0x58;
	constexpr uint32_t m_vecGeneratedTextures = 0x70;
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
	constexpr uint32_t m_WindClothForceHandle = 0xA10;
}

namespace C_CSGO_PreviewModel_GraphController
{
	constexpr uint32_t m_pszCharacterMode = 0x18;
	constexpr uint32_t m_pszWeaponState = 0x38;
	constexpr uint32_t m_pszWeaponType = 0x58;
	constexpr uint32_t m_pszEndOfMatchCelebration = 0x78;
}

namespace C_CSGO_PreviewPlayer_GraphController
{
	constexpr uint32_t m_pszCharacterMode = 0x18;
	constexpr uint32_t m_pszTeamPreviewVariant = 0x38;
	constexpr uint32_t m_pszTeamPreviewPosition = 0x58;
	constexpr uint32_t m_pszEndOfMatchCelebration = 0x78;
	constexpr uint32_t m_nTeamPreviewRandom = 0x98;
	constexpr uint32_t m_pszWeaponState = 0xB0;
	constexpr uint32_t m_pszWeaponType = 0xD0;
	constexpr uint32_t m_bCT = 0xF0;
}

namespace C_CSGO_MapPreviewCameraPathNode
{
	constexpr uint32_t m_szParentPathUniqueID = 0x548;
	constexpr uint32_t m_nPathIndex = 0x550;
	constexpr uint32_t m_vInTangentLocal = 0x554;
	constexpr uint32_t m_vOutTangentLocal = 0x560;
	constexpr uint32_t m_flFOV = 0x56C;
	constexpr uint32_t m_flCameraSpeed = 0x570;
	constexpr uint32_t m_flEaseIn = 0x574;
	constexpr uint32_t m_flEaseOut = 0x578;
	constexpr uint32_t m_vInTangentWorld = 0x57C;
	constexpr uint32_t m_vOutTangentWorld = 0x588;
}

namespace C_CSGO_MapPreviewCameraPath
{
	constexpr uint32_t m_flZFar = 0x548;
	constexpr uint32_t m_flZNear = 0x54C;
	constexpr uint32_t m_bLoop = 0x550;
	constexpr uint32_t m_bVerticalFOV = 0x551;
	constexpr uint32_t m_bConstantSpeed = 0x552;
	constexpr uint32_t m_flDuration = 0x554;
	constexpr uint32_t m_flPathLength = 0x598;
	constexpr uint32_t m_flPathDuration = 0x59C;
}

namespace CCSPlayer_GlowServices
{
}

namespace C_CSObserverPawnAPI
{
}

namespace C_CSPlayerPawnAPI
{
}

namespace C_VoteController
{
	constexpr uint32_t m_iActiveIssueIndex = 0x558;
	constexpr uint32_t m_iOnlyTeamToVote = 0x55C;
	constexpr uint32_t m_nVoteOptionCount = 0x560;
	constexpr uint32_t m_nPotentialVotes = 0x574;
	constexpr uint32_t m_bVotesDirty = 0x578;
	constexpr uint32_t m_bTypeDirty = 0x579;
	constexpr uint32_t m_bIsYesNoVote = 0x57A;
}

namespace C_MapVetoPickController
{
	constexpr uint32_t m_nDraftType = 0x558;
	constexpr uint32_t m_nTeamWinningCoinToss = 0x55C;
	constexpr uint32_t m_nTeamWithFirstChoice = 0x560;
	constexpr uint32_t m_nVoteMapIdsList = 0x660;
	constexpr uint32_t m_nAccountIDs = 0x67C;
	constexpr uint32_t m_nMapId0 = 0x77C;
	constexpr uint32_t m_nMapId1 = 0x87C;
	constexpr uint32_t m_nMapId2 = 0x97C;
	constexpr uint32_t m_nMapId3 = 0xA7C;
	constexpr uint32_t m_nMapId4 = 0xB7C;
	constexpr uint32_t m_nMapId5 = 0xC7C;
	constexpr uint32_t m_nStartingSide0 = 0xD7C;
	constexpr uint32_t m_nCurrentPhase = 0xE7C;
	constexpr uint32_t m_nPhaseStartTick = 0xE80;
	constexpr uint32_t m_nPhaseDurationTicks = 0xE84;
	constexpr uint32_t m_nPostDataUpdateTick = 0xE88;
	constexpr uint32_t m_bDisabledHud = 0xE8C;
}

namespace CPlayerSprayDecalRenderHelper
{
}

namespace C_CSGO_TeamPreviewCamera
{
	constexpr uint32_t m_nVariant = 0x5B0;
	constexpr uint32_t m_bDofEnabled = 0x5B4;
	constexpr uint32_t m_flDofNearBlurry = 0x5B8;
	constexpr uint32_t m_flDofNearCrisp = 0x5BC;
	constexpr uint32_t m_flDofFarCrisp = 0x5C0;
	constexpr uint32_t m_flDofFarBlurry = 0x5C4;
	constexpr uint32_t m_flDofTiltToGround = 0x5C8;
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
	constexpr uint32_t m_cameraName = 0x548;
	constexpr uint32_t m_flCsmFovOverrideValue = 0x550;
}

namespace C_Chicken_GraphController
{
	constexpr uint32_t m_paramActivity = 0x18;
	constexpr uint32_t m_paramEndActivityImmediately = 0x38;
	constexpr uint32_t m_paramSnapToSquatting = 0x50;
	constexpr uint32_t m_flSquatProbability = 0x68;
}

namespace C_PointEntity
{
}

namespace C_EnvCombinedLightProbeVolume
{
	constexpr uint32_t m_Entity_Color = 0x15A8;
	constexpr uint32_t m_Entity_flBrightness = 0x15AC;
	constexpr uint32_t m_Entity_hCubemapTexture = 0x15B0;
	constexpr uint32_t m_Entity_bCustomCubemapTexture = 0x15B8;
	constexpr uint32_t m_Entity_hLightProbeTexture = 0x15C0;
	constexpr uint32_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x15C8;
	constexpr uint32_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x15D0;
	constexpr uint32_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x15D8;
	constexpr uint32_t m_Entity_vBoxMins = 0x15E0;
	constexpr uint32_t m_Entity_vBoxMaxs = 0x15EC;
	constexpr uint32_t m_Entity_bMoveable = 0x15F8;
	constexpr uint32_t m_Entity_nHandshake = 0x15FC;
	constexpr uint32_t m_Entity_nEnvCubeMapArrayIndex = 0x1600;
	constexpr uint32_t m_Entity_nPriority = 0x1604;
	constexpr uint32_t m_Entity_bStartDisabled = 0x1608;
	constexpr uint32_t m_Entity_flEdgeFadeDist = 0x160C;
	constexpr uint32_t m_Entity_vEdgeFadeDists = 0x1610;
	constexpr uint32_t m_Entity_nLightProbeSizeX = 0x161C;
	constexpr uint32_t m_Entity_nLightProbeSizeY = 0x1620;
	constexpr uint32_t m_Entity_nLightProbeSizeZ = 0x1624;
	constexpr uint32_t m_Entity_nLightProbeAtlasX = 0x1628;
	constexpr uint32_t m_Entity_nLightProbeAtlasY = 0x162C;
	constexpr uint32_t m_Entity_nLightProbeAtlasZ = 0x1630;
	constexpr uint32_t m_Entity_bEnabled = 0x1649;
}

namespace C_EnvCubemap
{
	constexpr uint32_t m_Entity_hCubemapTexture = 0x5C8;
	constexpr uint32_t m_Entity_bCustomCubemapTexture = 0x5D0;
	constexpr uint32_t m_Entity_flInfluenceRadius = 0x5D4;
	constexpr uint32_t m_Entity_vBoxProjectMins = 0x5D8;
	constexpr uint32_t m_Entity_vBoxProjectMaxs = 0x5E4;
	constexpr uint32_t m_Entity_bMoveable = 0x5F0;
	constexpr uint32_t m_Entity_nHandshake = 0x5F4;
	constexpr uint32_t m_Entity_nEnvCubeMapArrayIndex = 0x5F8;
	constexpr uint32_t m_Entity_nPriority = 0x5FC;
	constexpr uint32_t m_Entity_flEdgeFadeDist = 0x600;
	constexpr uint32_t m_Entity_vEdgeFadeDists = 0x604;
	constexpr uint32_t m_Entity_flDiffuseScale = 0x610;
	constexpr uint32_t m_Entity_bStartDisabled = 0x614;
	constexpr uint32_t m_Entity_bDefaultEnvMap = 0x615;
	constexpr uint32_t m_Entity_bDefaultSpecEnvMap = 0x616;
	constexpr uint32_t m_Entity_bIndoorCubeMap = 0x617;
	constexpr uint32_t m_Entity_bCopyDiffuseFromDefaultCubemap = 0x618;
	constexpr uint32_t m_Entity_bEnabled = 0x628;
}

namespace C_EnvCubemapBox
{
}

namespace C_EnvCubemapFog
{
	constexpr uint32_t m_flEndDistance = 0x548;
	constexpr uint32_t m_flStartDistance = 0x54C;
	constexpr uint32_t m_flFogFalloffExponent = 0x550;
	constexpr uint32_t m_bHeightFogEnabled = 0x554;
	constexpr uint32_t m_flFogHeightWidth = 0x558;
	constexpr uint32_t m_flFogHeightEnd = 0x55C;
	constexpr uint32_t m_flFogHeightStart = 0x560;
	constexpr uint32_t m_flFogHeightExponent = 0x564;
	constexpr uint32_t m_flLODBias = 0x568;
	constexpr uint32_t m_bActive = 0x56C;
	constexpr uint32_t m_bStartDisabled = 0x56D;
	constexpr uint32_t m_flFogMaxOpacity = 0x570;
	constexpr uint32_t m_nCubemapSourceType = 0x574;
	constexpr uint32_t m_hSkyMaterial = 0x578;
	constexpr uint32_t m_iszSkyEntity = 0x580;
	constexpr uint32_t m_hFogCubemapTexture = 0x588;
	constexpr uint32_t m_bHasHeightFogEnd = 0x590;
	constexpr uint32_t m_bFirstTime = 0x591;
}

namespace C_GradientFog
{
	constexpr uint32_t m_hGradientFogTexture = 0x548;
	constexpr uint32_t m_flFogStartDistance = 0x550;
	constexpr uint32_t m_flFogEndDistance = 0x554;
	constexpr uint32_t m_bHeightFogEnabled = 0x558;
	constexpr uint32_t m_flFogStartHeight = 0x55C;
	constexpr uint32_t m_flFogEndHeight = 0x560;
	constexpr uint32_t m_flFarZ = 0x564;
	constexpr uint32_t m_flFogMaxOpacity = 0x568;
	constexpr uint32_t m_flFogFalloffExponent = 0x56C;
	constexpr uint32_t m_flFogVerticalExponent = 0x570;
	constexpr uint32_t m_fogColor = 0x574;
	constexpr uint32_t m_flFogStrength = 0x578;
	constexpr uint32_t m_flFadeTime = 0x57C;
	constexpr uint32_t m_bStartDisabled = 0x580;
	constexpr uint32_t m_bIsEnabled = 0x581;
	constexpr uint32_t m_bGradientFogNeedsTextures = 0x582;
}

namespace C_EnvLightProbeVolume
{
	constexpr uint32_t m_Entity_hLightProbeTexture = 0x1528;
	constexpr uint32_t m_Entity_hLightProbeDirectLightIndicesTexture = 0x1530;
	constexpr uint32_t m_Entity_hLightProbeDirectLightScalarsTexture = 0x1538;
	constexpr uint32_t m_Entity_hLightProbeDirectLightShadowsTexture = 0x1540;
	constexpr uint32_t m_Entity_vBoxMins = 0x1548;
	constexpr uint32_t m_Entity_vBoxMaxs = 0x1554;
	constexpr uint32_t m_Entity_bMoveable = 0x1560;
	constexpr uint32_t m_Entity_nHandshake = 0x1564;
	constexpr uint32_t m_Entity_nPriority = 0x1568;
	constexpr uint32_t m_Entity_bStartDisabled = 0x156C;
	constexpr uint32_t m_Entity_nLightProbeSizeX = 0x1570;
	constexpr uint32_t m_Entity_nLightProbeSizeY = 0x1574;
	constexpr uint32_t m_Entity_nLightProbeSizeZ = 0x1578;
	constexpr uint32_t m_Entity_nLightProbeAtlasX = 0x157C;
	constexpr uint32_t m_Entity_nLightProbeAtlasY = 0x1580;
	constexpr uint32_t m_Entity_nLightProbeAtlasZ = 0x1584;
	constexpr uint32_t m_Entity_bEnabled = 0x1591;
}

namespace C_PlayerVisibility
{
	constexpr uint32_t m_flVisibilityStrength = 0x548;
	constexpr uint32_t m_flFogDistanceMultiplier = 0x54C;
	constexpr uint32_t m_flFogMaxDensityMultiplier = 0x550;
	constexpr uint32_t m_flFadeTime = 0x554;
	constexpr uint32_t m_bStartDisabled = 0x558;
	constexpr uint32_t m_bIsEnabled = 0x559;
}

namespace C_EnvVolumetricFogController
{
	constexpr uint32_t m_flScattering = 0x548;
	constexpr uint32_t m_flAnisotropy = 0x54C;
	constexpr uint32_t m_flFadeSpeed = 0x550;
	constexpr uint32_t m_flDrawDistance = 0x554;
	constexpr uint32_t m_flFadeInStart = 0x558;
	constexpr uint32_t m_flFadeInEnd = 0x55C;
	constexpr uint32_t m_flIndirectStrength = 0x560;
	constexpr uint32_t m_nIndirectTextureDimX = 0x564;
	constexpr uint32_t m_nIndirectTextureDimY = 0x568;
	constexpr uint32_t m_nIndirectTextureDimZ = 0x56C;
	constexpr uint32_t m_vBoxMins = 0x570;
	constexpr uint32_t m_vBoxMaxs = 0x57C;
	constexpr uint32_t m_bActive = 0x588;
	constexpr uint32_t m_flStartAnisoTime = 0x58C;
	constexpr uint32_t m_flStartScatterTime = 0x590;
	constexpr uint32_t m_flStartDrawDistanceTime = 0x594;
	constexpr uint32_t m_flStartAnisotropy = 0x598;
	constexpr uint32_t m_flStartScattering = 0x59C;
	constexpr uint32_t m_flStartDrawDistance = 0x5A0;
	constexpr uint32_t m_flDefaultAnisotropy = 0x5A4;
	constexpr uint32_t m_flDefaultScattering = 0x5A8;
	constexpr uint32_t m_flDefaultDrawDistance = 0x5AC;
	constexpr uint32_t m_bStartDisabled = 0x5B0;
	constexpr uint32_t m_bEnableIndirect = 0x5B1;
	constexpr uint32_t m_bIndirectUseLPVs = 0x5B2;
	constexpr uint32_t m_bIsMaster = 0x5B3;
	constexpr uint32_t m_hFogIndirectTexture = 0x5B8;
	constexpr uint32_t m_nForceRefreshCount = 0x5C0;
	constexpr uint32_t m_fNoiseSpeed = 0x5C4;
	constexpr uint32_t m_fNoiseStrength = 0x5C8;
	constexpr uint32_t m_vNoiseScale = 0x5CC;
	constexpr uint32_t m_bFirstTime = 0x5D8;
}

namespace C_EnvVolumetricFogVolume
{
	constexpr uint32_t m_bActive = 0x548;
	constexpr uint32_t m_vBoxMins = 0x54C;
	constexpr uint32_t m_vBoxMaxs = 0x558;
	constexpr uint32_t m_bStartDisabled = 0x564;
	constexpr uint32_t m_flStrength = 0x568;
	constexpr uint32_t m_nFalloffShape = 0x56C;
	constexpr uint32_t m_flFalloffExponent = 0x570;
	constexpr uint32_t m_flHeightFogDepth = 0x574;
	constexpr uint32_t m_fHeightFogEdgeWidth = 0x578;
	constexpr uint32_t m_fIndirectLightStrength = 0x57C;
	constexpr uint32_t m_fSunLightStrength = 0x580;
	constexpr uint32_t m_fNoiseStrength = 0x584;
	constexpr uint32_t m_bOverrideIndirectLightStrength = 0x588;
	constexpr uint32_t m_bOverrideSunLightStrength = 0x589;
	constexpr uint32_t m_bOverrideNoiseStrength = 0x58A;
}

namespace CInfoTarget
{
}

namespace CInfoParticleTarget
{
}

namespace C_InfoVisibilityBox
{
	constexpr uint32_t m_nMode = 0x54C;
	constexpr uint32_t m_vBoxSize = 0x550;
	constexpr uint32_t m_bEnabled = 0x55C;
}

namespace CInfoWorldLayer
{
	constexpr uint32_t m_pOutputOnEntitiesSpawned = 0x548;
	constexpr uint32_t m_worldName = 0x570;
	constexpr uint32_t m_layerName = 0x578;
	constexpr uint32_t m_bWorldLayerVisible = 0x580;
	constexpr uint32_t m_bEntitiesSpawned = 0x581;
	constexpr uint32_t m_bCreateAsChildSpawnGroup = 0x582;
	constexpr uint32_t m_hLayerSpawnGroup = 0x584;
	constexpr uint32_t m_bWorldLayerActuallyVisible = 0x588;
}

namespace C_PointCameraVFOV
{
	constexpr uint32_t m_flVerticalFOV = 0x5A8;
}

namespace CPointTemplate
{
	constexpr uint32_t m_iszWorldName = 0x548;
	constexpr uint32_t m_iszSource2EntityLumpName = 0x550;
	constexpr uint32_t m_iszEntityFilterName = 0x558;
	constexpr uint32_t m_flTimeoutInterval = 0x560;
	constexpr uint32_t m_bAsynchronouslySpawnEntities = 0x564;
	constexpr uint32_t m_pOutputOnSpawned = 0x568;
	constexpr uint32_t m_clientOnlyEntityBehavior = 0x590;
	constexpr uint32_t m_ownerSpawnGroupType = 0x594;
	constexpr uint32_t m_createdSpawnGroupHandles = 0x598;
	constexpr uint32_t m_SpawnedEntityHandles = 0x5B0;
	constexpr uint32_t m_ScriptSpawnCallback = 0x5C8;
	constexpr uint32_t m_ScriptCallbackScope = 0x5D0;
}

namespace C_SoundAreaEntityBase
{
	constexpr uint32_t m_bDisabled = 0x548;
	constexpr uint32_t m_bWasEnabled = 0x550;
	constexpr uint32_t m_iszSoundAreaType = 0x558;
	constexpr uint32_t m_vPos = 0x560;
}

namespace C_SoundAreaEntitySphere
{
	constexpr uint32_t m_flRadius = 0x570;
}

namespace C_SoundAreaEntityOrientedBox
{
	constexpr uint32_t m_vMin = 0x570;
	constexpr uint32_t m_vMax = 0x57C;
}

namespace C_SoundEventEntity
{
}

namespace C_SoundEventEntityAlias_snd_event_point
{
}

namespace C_SoundEventAABBEntity
{
	constexpr uint32_t m_vMins = 0x548;
	constexpr uint32_t m_vMaxs = 0x554;
}

namespace C_SoundEventOBBEntity
{
	constexpr uint32_t m_vMins = 0x548;
	constexpr uint32_t m_vMaxs = 0x554;
}

namespace C_SoundEventSphereEntity
{
	constexpr uint32_t m_flRadius = 0x548;
}

namespace C_SoundEventPathCornerEntity
{
	constexpr uint32_t m_vecCornerPairsNetworked = 0x548;
}

namespace C_BasePlayerPawn
{
	constexpr uint32_t m_pWeaponServices = 0x10F8;
	constexpr uint32_t m_pItemServices = 0x1100;
	constexpr uint32_t m_pAutoaimServices = 0x1108;
	constexpr uint32_t m_pObserverServices = 0x1110;
	constexpr uint32_t m_pWaterServices = 0x1118;
	constexpr uint32_t m_pUseServices = 0x1120;
	constexpr uint32_t m_pFlashlightServices = 0x1128;
	constexpr uint32_t m_pCameraServices = 0x1130;
	constexpr uint32_t m_pMovementServices = 0x1138;
	constexpr uint32_t m_ServerViewAngleChanges = 0x1148;
	constexpr uint32_t m_nHighestConsumedServerViewAngleChangeIndex = 0x1198;
	constexpr uint32_t v_angle = 0x119C;
	constexpr uint32_t v_anglePrevious = 0x11A8;
	constexpr uint32_t m_iHideHUD = 0x11B4;
	constexpr uint32_t m_skybox3d = 0x11B8;
	constexpr uint32_t m_flDeathTime = 0x1248;
	constexpr uint32_t m_vecPredictionError = 0x124C;
	constexpr uint32_t m_flPredictionErrorTime = 0x1258;
	constexpr uint32_t m_vecLastCameraSetupLocalOrigin = 0x125C;
	constexpr uint32_t m_flLastCameraSetupTime = 0x1268;
	constexpr uint32_t m_flFOVSensitivityAdjust = 0x126C;
	constexpr uint32_t m_flMouseSensitivity = 0x1270;
	constexpr uint32_t m_vOldOrigin = 0x1274;
	constexpr uint32_t m_flOldSimulationTime = 0x1280;
	constexpr uint32_t m_nLastExecutedCommandNumber = 0x1284;
	constexpr uint32_t m_nLastExecutedCommandTick = 0x1288;
	constexpr uint32_t m_hController = 0x128C;
	constexpr uint32_t m_bIsSwappingToPredictableController = 0x1290;
}

namespace C_Team
{
	constexpr uint32_t m_aPlayerControllers = 0x548;
	constexpr uint32_t m_aPlayers = 0x560;
	constexpr uint32_t m_iScore = 0x578;
	constexpr uint32_t m_szTeamname = 0x57C;
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
	constexpr uint32_t m_bLinkedCooldowns = 0x218;
	constexpr uint32_t m_aShootSounds = 0x220;
	constexpr uint32_t m_iSlot = 0x248;
	constexpr uint32_t m_iPosition = 0x24C;
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

namespace CServerOnlyModelEntity
{
}

namespace C_ModelPointEntity
{
}

namespace CLogicRelay
{
	constexpr uint32_t m_OnTrigger = 0x548;
	constexpr uint32_t m_OnSpawn = 0x570;
	constexpr uint32_t m_bDisabled = 0x598;
	constexpr uint32_t m_bWaitForRefire = 0x599;
	constexpr uint32_t m_bTriggerOnce = 0x59A;
	constexpr uint32_t m_bFastRetrigger = 0x59B;
	constexpr uint32_t m_bPassthoughCaller = 0x59C;
}

namespace C_ParticleSystem
{
	constexpr uint32_t m_szSnapshotFileName = 0xCC8;
	constexpr uint32_t m_bActive = 0xEC8;
	constexpr uint32_t m_bFrozen = 0xEC9;
	constexpr uint32_t m_flFreezeTransitionDuration = 0xECC;
	constexpr uint32_t m_nStopType = 0xED0;
	constexpr uint32_t m_bAnimateDuringGameplayPause = 0xED4;
	constexpr uint32_t m_iEffectIndex = 0xED8;
	constexpr uint32_t m_flStartTime = 0xEE0;
	constexpr uint32_t m_flPreSimTime = 0xEE4;
	constexpr uint32_t m_vServerControlPoints = 0xEE8;
	constexpr uint32_t m_iServerControlPointAssignments = 0xF18;
	constexpr uint32_t m_hControlPointEnts = 0xF1C;
	constexpr uint32_t m_bNoSave = 0x101C;
	constexpr uint32_t m_bNoFreeze = 0x101D;
	constexpr uint32_t m_bNoRamp = 0x101E;
	constexpr uint32_t m_bStartActive = 0x101F;
	constexpr uint32_t m_iszEffectName = 0x1020;
	constexpr uint32_t m_iszControlPointNames = 0x1028;
	constexpr uint32_t m_nDataCP = 0x1228;
	constexpr uint32_t m_vecDataCPValue = 0x122C;
	constexpr uint32_t m_nTintCP = 0x1238;
	constexpr uint32_t m_clrTint = 0x123C;
	constexpr uint32_t m_bOldActive = 0x1260;
	constexpr uint32_t m_bOldFrozen = 0x1261;
}

namespace C_PathParticleRope
{
	constexpr uint32_t m_bStartActive = 0x548;
	constexpr uint32_t m_flMaxSimulationTime = 0x54C;
	constexpr uint32_t m_iszEffectName = 0x550;
	constexpr uint32_t m_PathNodes_Name = 0x558;
	constexpr uint32_t m_flParticleSpacing = 0x570;
	constexpr uint32_t m_flSlack = 0x574;
	constexpr uint32_t m_flRadius = 0x578;
	constexpr uint32_t m_ColorTint = 0x57C;
	constexpr uint32_t m_nEffectState = 0x580;
	constexpr uint32_t m_iEffectIndex = 0x588;
	constexpr uint32_t m_PathNodes_Position = 0x590;
	constexpr uint32_t m_PathNodes_TangentIn = 0x5A8;
	constexpr uint32_t m_PathNodes_TangentOut = 0x5C0;
	constexpr uint32_t m_PathNodes_Color = 0x5D8;
	constexpr uint32_t m_PathNodes_PinEnabled = 0x5F0;
	constexpr uint32_t m_PathNodes_RadiusScale = 0x608;
}

namespace C_PathParticleRopeAlias_path_particle_rope_clientside
{
}

namespace CPathSimple
{
	constexpr uint32_t m_pathString = 0x598;
}

namespace C_DynamicLight
{
	constexpr uint32_t m_Flags = 0xCC8;
	constexpr uint32_t m_LightStyle = 0xCC9;
	constexpr uint32_t m_Radius = 0xCCC;
	constexpr uint32_t m_Exponent = 0xCD0;
	constexpr uint32_t m_InnerAngle = 0xCD4;
	constexpr uint32_t m_OuterAngle = 0xCD8;
	constexpr uint32_t m_SpotRadius = 0xCDC;
}

namespace C_EnvScreenOverlay
{
	constexpr uint32_t m_iszOverlayNames = 0x548;
	constexpr uint32_t m_flOverlayTimes = 0x598;
	constexpr uint32_t m_flStartTime = 0x5C0;
	constexpr uint32_t m_iDesiredOverlay = 0x5C4;
	constexpr uint32_t m_bIsActive = 0x5C8;
	constexpr uint32_t m_bWasActive = 0x5C9;
	constexpr uint32_t m_iCachedDesiredOverlay = 0x5CC;
	constexpr uint32_t m_iCurrentOverlay = 0x5D0;
	constexpr uint32_t m_flCurrentOverlayTime = 0x5D4;
}

namespace C_FuncTrackTrain
{
	constexpr uint32_t m_nLongAxis = 0xCC8;
	constexpr uint32_t m_flRadius = 0xCCC;
	constexpr uint32_t m_flLineLength = 0xCD0;
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
	constexpr uint32_t m_nHorizontalSize = 0xCC8;
	constexpr uint32_t m_nVerticalSize = 0xCCC;
	constexpr uint32_t m_nMinDist = 0xCD0;
	constexpr uint32_t m_nMaxDist = 0xCD4;
	constexpr uint32_t m_nOuterMaxDist = 0xCD8;
	constexpr uint32_t m_flGlowProxySize = 0xCDC;
	constexpr uint32_t m_flHDRColorScale = 0xCE0;
	constexpr uint32_t m_GlowOverlay = 0xCE8;
}

namespace C_RagdollManager
{
	constexpr uint32_t m_iCurrentMaxRagdollCount = 0x548;
}

namespace C_SpotlightEnd
{
	constexpr uint32_t m_flLightScale = 0xCC8;
	constexpr uint32_t m_Radius = 0xCCC;
}

namespace C_PointValueRemapper
{
	constexpr uint32_t m_bDisabled = 0x548;
	constexpr uint32_t m_bDisabledOld = 0x549;
	constexpr uint32_t m_bUpdateOnClient = 0x54A;
	constexpr uint32_t m_nInputType = 0x54C;
	constexpr uint32_t m_hRemapLineStart = 0x550;
	constexpr uint32_t m_hRemapLineEnd = 0x554;
	constexpr uint32_t m_flMaximumChangePerSecond = 0x558;
	constexpr uint32_t m_flDisengageDistance = 0x55C;
	constexpr uint32_t m_flEngageDistance = 0x560;
	constexpr uint32_t m_bRequiresUseKey = 0x564;
	constexpr uint32_t m_nOutputType = 0x568;
	constexpr uint32_t m_hOutputEntities = 0x570;
	constexpr uint32_t m_nHapticsType = 0x588;
	constexpr uint32_t m_nMomentumType = 0x58C;
	constexpr uint32_t m_flMomentumModifier = 0x590;
	constexpr uint32_t m_flSnapValue = 0x594;
	constexpr uint32_t m_flCurrentMomentum = 0x598;
	constexpr uint32_t m_nRatchetType = 0x59C;
	constexpr uint32_t m_flRatchetOffset = 0x5A0;
	constexpr uint32_t m_flInputOffset = 0x5A4;
	constexpr uint32_t m_bEngaged = 0x5A8;
	constexpr uint32_t m_bFirstUpdate = 0x5A9;
	constexpr uint32_t m_flPreviousValue = 0x5AC;
	constexpr uint32_t m_flPreviousUpdateTickTime = 0x5B0;
	constexpr uint32_t m_vecPreviousTestPoint = 0x5B4;
}

namespace C_PointWorldText
{
	constexpr uint32_t m_bForceRecreateNextUpdate = 0xCD0;
	constexpr uint32_t m_messageText = 0xCE0;
	constexpr uint32_t m_FontName = 0xEE0;
	constexpr uint32_t m_bEnabled = 0xF20;
	constexpr uint32_t m_bFullbright = 0xF21;
	constexpr uint32_t m_flWorldUnitsPerPx = 0xF24;
	constexpr uint32_t m_flFontSize = 0xF28;
	constexpr uint32_t m_flDepthOffset = 0xF2C;
	constexpr uint32_t m_Color = 0xF30;
	constexpr uint32_t m_nJustifyHorizontal = 0xF34;
	constexpr uint32_t m_nJustifyVertical = 0xF38;
	constexpr uint32_t m_nReorientMode = 0xF3C;
}

namespace CCitadelSoundOpvarSetOBB
{
	constexpr uint32_t m_iszStackName = 0x560;
	constexpr uint32_t m_iszOperatorName = 0x568;
	constexpr uint32_t m_iszOpvarName = 0x570;
	constexpr uint32_t m_vDistanceInnerMins = 0x578;
	constexpr uint32_t m_vDistanceInnerMaxs = 0x584;
	constexpr uint32_t m_vDistanceOuterMins = 0x590;
	constexpr uint32_t m_vDistanceOuterMaxs = 0x59C;
	constexpr uint32_t m_nAABBDirection = 0x5A8;
}

namespace C_HandleTest
{
	constexpr uint32_t m_Handle = 0x548;
	constexpr uint32_t m_bSendHandle = 0x54C;
}

namespace C_EnvWind
{
	constexpr uint32_t m_EnvWindShared = 0x548;
}

namespace C_BaseToggle
{
}

namespace C_BaseButton
{
	constexpr uint32_t m_glowEntity = 0xCC8;
	constexpr uint32_t m_usable = 0xCCC;
	constexpr uint32_t m_szDisplayText = 0xCD0;
}

namespace C_PrecipitationBlocker
{
}

namespace C_EntityDissolve
{
	constexpr uint32_t m_flStartTime = 0xCD0;
	constexpr uint32_t m_flFadeInStart = 0xCD4;
	constexpr uint32_t m_flFadeInLength = 0xCD8;
	constexpr uint32_t m_flFadeOutModelStart = 0xCDC;
	constexpr uint32_t m_flFadeOutModelLength = 0xCE0;
	constexpr uint32_t m_flFadeOutStart = 0xCE4;
	constexpr uint32_t m_flFadeOutLength = 0xCE8;
	constexpr uint32_t m_flNextSparkTime = 0xCEC;
	constexpr uint32_t m_nDissolveType = 0xCF0;
	constexpr uint32_t m_vDissolverOrigin = 0xCF4;
	constexpr uint32_t m_nMagnitude = 0xD00;
	constexpr uint32_t m_bCoreExplode = 0xD04;
	constexpr uint32_t m_bLinkedToServerEnt = 0xD05;
}

namespace C_EnvProjectedTexture
{
}

namespace C_EnvDecal
{
	constexpr uint32_t m_hDecalMaterial = 0xCC8;
	constexpr uint32_t m_flWidth = 0xCD0;
	constexpr uint32_t m_flHeight = 0xCD4;
	constexpr uint32_t m_flDepth = 0xCD8;
	constexpr uint32_t m_nRenderOrder = 0xCDC;
	constexpr uint32_t m_bProjectOnWorld = 0xCE0;
	constexpr uint32_t m_bProjectOnCharacters = 0xCE1;
	constexpr uint32_t m_bProjectOnWater = 0xCE2;
	constexpr uint32_t m_flDepthSortBias = 0xCE4;
}

namespace C_FuncBrush
{
}

namespace C_FuncElectrifiedVolume
{
	constexpr uint32_t m_nAmbientEffect = 0xCC8;
	constexpr uint32_t m_EffectName = 0xCD0;
	constexpr uint32_t m_bState = 0xCD8;
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

namespace C_BaseFlex
{
	constexpr uint32_t m_flexWeight = 0xEE0;
	constexpr uint32_t m_vLookTargetPosition = 0xEF8;
	constexpr uint32_t m_blinktoggle = 0xF10;
	constexpr uint32_t m_nLastFlexUpdateFrameCount = 0xF70;
	constexpr uint32_t m_CachedViewTarget = 0xF74;
	constexpr uint32_t m_nNextSceneEventId = 0xF80;
	constexpr uint32_t m_iBlink = 0xF84;
	constexpr uint32_t m_blinktime = 0xF88;
	constexpr uint32_t m_prevblinktoggle = 0xF8C;
	constexpr uint32_t m_iJawOpen = 0xF90;
	constexpr uint32_t m_flJawOpenAmount = 0xF94;
	constexpr uint32_t m_flBlinkAmount = 0xF98;
	constexpr uint32_t m_iMouthAttachment = 0xF9C;
	constexpr uint32_t m_iEyeAttachment = 0xF9D;
	constexpr uint32_t m_bResetFlexWeightsOnModelChange = 0xF9E;
	constexpr uint32_t m_nEyeOcclusionRendererBone = 0xFB8;
	constexpr uint32_t m_mEyeOcclusionRendererCameraToBoneTransform = 0xFBC;
	constexpr uint32_t m_vEyeOcclusionRendererHalfExtent = 0xFEC;
	constexpr uint32_t m_PhonemeClasses = 0x1008;
}

namespace C_SceneEntity
{
	constexpr uint32_t m_bIsPlayingBack = 0x550;
	constexpr uint32_t m_bPaused = 0x551;
	constexpr uint32_t m_bMultiplayer = 0x552;
	constexpr uint32_t m_bAutogenerated = 0x553;
	constexpr uint32_t m_flForceClientTime = 0x554;
	constexpr uint32_t m_nSceneStringIndex = 0x558;
	constexpr uint32_t m_bClientOnly = 0x55A;
	constexpr uint32_t m_hOwner = 0x55C;
	constexpr uint32_t m_hActorList = 0x560;
	constexpr uint32_t m_bWasPlaying = 0x578;
	constexpr uint32_t m_QueuedEvents = 0x588;
	constexpr uint32_t m_flCurrentTime = 0x5A0;
}

namespace C_SunGlowOverlay
{
	constexpr uint32_t m_bModulateByDot = 0xD0;
}

namespace C_Sun
{
	constexpr uint32_t m_fxSSSunFlareEffectIndex = 0xCC8;
	constexpr uint32_t m_fxSunFlareEffectIndex = 0xCCC;
	constexpr uint32_t m_fdistNormalize = 0xCD0;
	constexpr uint32_t m_vSunPos = 0xCD4;
	constexpr uint32_t m_vDirection = 0xCE0;
	constexpr uint32_t m_iszEffectName = 0xCF0;
	constexpr uint32_t m_iszSSEffectName = 0xCF8;
	constexpr uint32_t m_clrOverlay = 0xD00;
	constexpr uint32_t m_bOn = 0xD04;
	constexpr uint32_t m_bmaxColor = 0xD05;
	constexpr uint32_t m_flSize = 0xD08;
	constexpr uint32_t m_flHazeScale = 0xD0C;
	constexpr uint32_t m_flRotation = 0xD10;
	constexpr uint32_t m_flHDRColorScale = 0xD14;
	constexpr uint32_t m_flAlphaHaze = 0xD18;
	constexpr uint32_t m_flAlphaScale = 0xD1C;
	constexpr uint32_t m_flAlphaHdr = 0xD20;
	constexpr uint32_t m_flFarZScale = 0xD24;
}

namespace C_BaseTrigger
{
	constexpr uint32_t m_bDisabled = 0xCC8;
	constexpr uint32_t m_bClientSidePredicted = 0xCC9;
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

namespace C_TriggerPhysics
{
	constexpr uint32_t m_gravityScale = 0xCD0;
	constexpr uint32_t m_linearLimit = 0xCD4;
	constexpr uint32_t m_linearDamping = 0xCD8;
	constexpr uint32_t m_angularLimit = 0xCDC;
	constexpr uint32_t m_angularDamping = 0xCE0;
	constexpr uint32_t m_linearForce = 0xCE4;
	constexpr uint32_t m_flFrequency = 0xCE8;
	constexpr uint32_t m_flDampingRatio = 0xCEC;
	constexpr uint32_t m_vecLinearForcePointAt = 0xCF0;
	constexpr uint32_t m_bCollapseToForcePoint = 0xCFC;
	constexpr uint32_t m_vecLinearForcePointAtWorld = 0xD00;
	constexpr uint32_t m_vecLinearForceDirection = 0xD0C;
	constexpr uint32_t m_bConvertToDebrisWhenPossible = 0xD18;
}

namespace C_Beam
{
	constexpr uint32_t m_flFrameRate = 0xCC8;
	constexpr uint32_t m_flHDRColorScale = 0xCCC;
	constexpr uint32_t m_flFireTime = 0xCD0;
	constexpr uint32_t m_flDamage = 0xCD4;
	constexpr uint32_t m_nNumBeamEnts = 0xCD8;
	constexpr uint32_t m_queryHandleHalo = 0xCDC;
	constexpr uint32_t m_hBaseMaterial = 0xD00;
	constexpr uint32_t m_nHaloIndex = 0xD08;
	constexpr uint32_t m_nBeamType = 0xD10;
	constexpr uint32_t m_nBeamFlags = 0xD14;
	constexpr uint32_t m_hAttachEntity = 0xD18;
	constexpr uint32_t m_nAttachIndex = 0xD40;
	constexpr uint32_t m_fWidth = 0xD4C;
	constexpr uint32_t m_fEndWidth = 0xD50;
	constexpr uint32_t m_fFadeLength = 0xD54;
	constexpr uint32_t m_fHaloScale = 0xD58;
	constexpr uint32_t m_fAmplitude = 0xD5C;
	constexpr uint32_t m_fStartFrame = 0xD60;
	constexpr uint32_t m_fSpeed = 0xD64;
	constexpr uint32_t m_flFrame = 0xD68;
	constexpr uint32_t m_nClipStyle = 0xD6C;
	constexpr uint32_t m_bTurnedOff = 0xD70;
	constexpr uint32_t m_vecEndPos = 0xD74;
	constexpr uint32_t m_hEndEntity = 0xD80;
}

namespace C_FuncLadder
{
	constexpr uint32_t m_vecLadderDir = 0xCC8;
	constexpr uint32_t m_Dismounts = 0xCD8;
	constexpr uint32_t m_vecLocalTop = 0xCF0;
	constexpr uint32_t m_vecPlayerMountPositionTop = 0xCFC;
	constexpr uint32_t m_vecPlayerMountPositionBottom = 0xD08;
	constexpr uint32_t m_flAutoRideSpeed = 0xD14;
	constexpr uint32_t m_bDisabled = 0xD18;
	constexpr uint32_t m_bFakeLadder = 0xD19;
	constexpr uint32_t m_bHasSlack = 0xD1A;
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
	constexpr uint32_t m_hSpriteMaterial = 0xCC8;
	constexpr uint32_t m_hAttachedToEntity = 0xCD0;
	constexpr uint32_t m_nAttachment = 0xCD4;
	constexpr uint32_t m_flSpriteFramerate = 0xCD8;
	constexpr uint32_t m_flFrame = 0xCDC;
	constexpr uint32_t m_flDieTime = 0xCE0;
	constexpr uint32_t m_nBrightness = 0xCF0;
	constexpr uint32_t m_flBrightnessDuration = 0xCF4;
	constexpr uint32_t m_flSpriteScale = 0xCF8;
	constexpr uint32_t m_flScaleDuration = 0xCFC;
	constexpr uint32_t m_bWorldSpaceScale = 0xD00;
	constexpr uint32_t m_flGlowProxySize = 0xD04;
	constexpr uint32_t m_flHDRColorScale = 0xD08;
	constexpr uint32_t m_flLastTime = 0xD0C;
	constexpr uint32_t m_flMaxFrame = 0xD10;
	constexpr uint32_t m_flStartScale = 0xD14;
	constexpr uint32_t m_flDestScale = 0xD18;
	constexpr uint32_t m_flScaleTimeStart = 0xD1C;
	constexpr uint32_t m_nStartBrightness = 0xD20;
	constexpr uint32_t m_nDestBrightness = 0xD24;
	constexpr uint32_t m_flBrightnessTimeStart = 0xD28;
	constexpr uint32_t m_hOldSpriteMaterial = 0xD30;
	constexpr uint32_t m_nSpriteWidth = 0xDD0;
	constexpr uint32_t m_nSpriteHeight = 0xDD4;
}

namespace CSpriteOriented
{
}

namespace C_BaseClientUIEntity
{
	constexpr uint32_t m_bEnabled = 0xCD0;
	constexpr uint32_t m_DialogXMLName = 0xCD8;
	constexpr uint32_t m_PanelClassName = 0xCE0;
	constexpr uint32_t m_PanelID = 0xCE8;
}

namespace C_PointClientUIDialog
{
	constexpr uint32_t m_hActivator = 0xCF8;
	constexpr uint32_t m_bStartEnabled = 0xCFC;
}

namespace C_PointClientUIHUD
{
	constexpr uint32_t m_bCheckCSSClasses = 0xD00;
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

namespace CPointOffScreenIndicatorUi
{
	constexpr uint32_t m_bBeenEnabled = 0xF30;
	constexpr uint32_t m_bHide = 0xF31;
	constexpr uint32_t m_flSeenTargetTime = 0xF34;
	constexpr uint32_t m_pTargetPanel = 0xF38;
}

namespace C_PointClientUIWorldPanel
{
	constexpr uint32_t m_bForceRecreateNextUpdate = 0xD00;
	constexpr uint32_t m_bMoveViewToPlayerNextThink = 0xD01;
	constexpr uint32_t m_bCheckCSSClasses = 0xD02;
	constexpr uint32_t m_anchorDeltaTransform = 0xD10;
	constexpr uint32_t m_pOffScreenIndicator = 0xEA8;
	constexpr uint32_t m_bIgnoreInput = 0xED0;
	constexpr uint32_t m_bLit = 0xED1;
	constexpr uint32_t m_bFollowPlayerAcrossTeleport = 0xED2;
	constexpr uint32_t m_flWidth = 0xED4;
	constexpr uint32_t m_flHeight = 0xED8;
	constexpr uint32_t m_flDPI = 0xEDC;
	constexpr uint32_t m_flInteractDistance = 0xEE0;
	constexpr uint32_t m_flDepthOffset = 0xEE4;
	constexpr uint32_t m_unOwnerContext = 0xEE8;
	constexpr uint32_t m_unHorizontalAlign = 0xEEC;
	constexpr uint32_t m_unVerticalAlign = 0xEF0;
	constexpr uint32_t m_unOrientation = 0xEF4;
	constexpr uint32_t m_bAllowInteractionFromAllSceneWorlds = 0xEF8;
	constexpr uint32_t m_vecCSSClasses = 0xF00;
	constexpr uint32_t m_bOpaque = 0xF18;
	constexpr uint32_t m_bNoDepth = 0xF19;
	constexpr uint32_t m_bRenderBackface = 0xF1A;
	constexpr uint32_t m_bUseOffScreenIndicator = 0xF1B;
	constexpr uint32_t m_bExcludeFromSaveGames = 0xF1C;
	constexpr uint32_t m_bGrabbable = 0xF1D;
	constexpr uint32_t m_bOnlyRenderToTexture = 0xF1E;
	constexpr uint32_t m_bDisableMipGen = 0xF1F;
	constexpr uint32_t m_nExplicitImageLayout = 0xF20;
}

namespace C_PointClientUIWorldTextPanel
{
	constexpr uint32_t m_messageText = 0xF30;
}

namespace CInfoOffscreenPanoramaTexture
{
	constexpr uint32_t m_bDisabled = 0x548;
	constexpr uint32_t m_nResolutionX = 0x54C;
	constexpr uint32_t m_nResolutionY = 0x550;
	constexpr uint32_t m_szLayoutFileName = 0x558;
	constexpr uint32_t m_RenderAttrName = 0x560;
	constexpr uint32_t m_TargetEntities = 0x568;
	constexpr uint32_t m_nTargetChangeCount = 0x580;
	constexpr uint32_t m_vecCSSClasses = 0x588;
	constexpr uint32_t m_bCheckCSSClasses = 0x700;
}

namespace CBombTarget
{
	constexpr uint32_t m_bBombPlantedHere = 0xCD0;
}

namespace CHostageRescueZoneShim
{
}

namespace CHostageRescueZone
{
}

namespace C_TriggerBuoyancy
{
	constexpr uint32_t m_BuoyancyHelper = 0xCD0;
	constexpr uint32_t m_flFluidDensity = 0xCF0;
}

namespace CFuncWater
{
	constexpr uint32_t m_BuoyancyHelper = 0xCC8;
}

namespace CWaterSplasher
{
}

namespace C_InfoInstructorHintHostageRescueZone
{
}

namespace C_CSObserverPawn
{
	constexpr uint32_t m_hDetectParentChange = 0x1460;
}

namespace C_FootstepControl
{
	constexpr uint32_t m_source = 0xCD0;
	constexpr uint32_t m_destination = 0xCD8;
}

namespace CCSWeaponBaseVData
{
	constexpr uint32_t m_WeaponType = 0x250;
	constexpr uint32_t m_WeaponCategory = 0x254;
	constexpr uint32_t m_szViewModel = 0x258;
	constexpr uint32_t m_szPlayerModel = 0x338;
	constexpr uint32_t m_szWorldDroppedModel = 0x418;
	constexpr uint32_t m_szAimsightLensMaskModel = 0x4F8;
	constexpr uint32_t m_szMagazineModel = 0x5D8;
	constexpr uint32_t m_szHeatEffect = 0x6B8;
	constexpr uint32_t m_szEjectBrassEffect = 0x798;
	constexpr uint32_t m_szMuzzleFlashParticleAlt = 0x878;
	constexpr uint32_t m_szMuzzleFlashThirdPersonParticle = 0x958;
	constexpr uint32_t m_szMuzzleFlashThirdPersonParticleAlt = 0xA38;
	constexpr uint32_t m_szTracerParticle = 0xB18;
	constexpr uint32_t m_GearSlot = 0xBF8;
	constexpr uint32_t m_GearSlotPosition = 0xBFC;
	constexpr uint32_t m_DefaultLoadoutSlot = 0xC00;
	constexpr uint32_t m_sWrongTeamMsg = 0xC08;
	constexpr uint32_t m_nPrice = 0xC10;
	constexpr uint32_t m_nKillAward = 0xC14;
	constexpr uint32_t m_nPrimaryReserveAmmoMax = 0xC18;
	constexpr uint32_t m_nSecondaryReserveAmmoMax = 0xC1C;
	constexpr uint32_t m_bMeleeWeapon = 0xC20;
	constexpr uint32_t m_bHasBurstMode = 0xC21;
	constexpr uint32_t m_bIsRevolver = 0xC22;
	constexpr uint32_t m_bCannotShootUnderwater = 0xC23;
	constexpr uint32_t m_szName = 0xC28;
	constexpr uint32_t m_szAnimExtension = 0xC30;
	constexpr uint32_t m_eSilencerType = 0xC38;
	constexpr uint32_t m_nCrosshairMinDistance = 0xC3C;
	constexpr uint32_t m_nCrosshairDeltaDistance = 0xC40;
	constexpr uint32_t m_bIsFullAuto = 0xC44;
	constexpr uint32_t m_nNumBullets = 0xC48;
	constexpr uint32_t m_flCycleTime = 0xC4C;
	constexpr uint32_t m_flMaxSpeed = 0xC54;
	constexpr uint32_t m_flSpread = 0xC5C;
	constexpr uint32_t m_flInaccuracyCrouch = 0xC64;
	constexpr uint32_t m_flInaccuracyStand = 0xC6C;
	constexpr uint32_t m_flInaccuracyJump = 0xC74;
	constexpr uint32_t m_flInaccuracyLand = 0xC7C;
	constexpr uint32_t m_flInaccuracyLadder = 0xC84;
	constexpr uint32_t m_flInaccuracyFire = 0xC8C;
	constexpr uint32_t m_flInaccuracyMove = 0xC94;
	constexpr uint32_t m_flRecoilAngle = 0xC9C;
	constexpr uint32_t m_flRecoilAngleVariance = 0xCA4;
	constexpr uint32_t m_flRecoilMagnitude = 0xCAC;
	constexpr uint32_t m_flRecoilMagnitudeVariance = 0xCB4;
	constexpr uint32_t m_nTracerFrequency = 0xCBC;
	constexpr uint32_t m_flInaccuracyJumpInitial = 0xCC4;
	constexpr uint32_t m_flInaccuracyJumpApex = 0xCC8;
	constexpr uint32_t m_flInaccuracyReload = 0xCCC;
	constexpr uint32_t m_nRecoilSeed = 0xCD0;
	constexpr uint32_t m_nSpreadSeed = 0xCD4;
	constexpr uint32_t m_flTimeToIdleAfterFire = 0xCD8;
	constexpr uint32_t m_flIdleInterval = 0xCDC;
	constexpr uint32_t m_flAttackMovespeedFactor = 0xCE0;
	constexpr uint32_t m_flHeatPerShot = 0xCE4;
	constexpr uint32_t m_flInaccuracyPitchShift = 0xCE8;
	constexpr uint32_t m_flInaccuracyAltSoundThreshold = 0xCEC;
	constexpr uint32_t m_flBotAudibleRange = 0xCF0;
	constexpr uint32_t m_szUseRadioSubtitle = 0xCF8;
	constexpr uint32_t m_bUnzoomsAfterShot = 0xD00;
	constexpr uint32_t m_bHideViewModelWhenZoomed = 0xD01;
	constexpr uint32_t m_nZoomLevels = 0xD04;
	constexpr uint32_t m_nZoomFOV1 = 0xD08;
	constexpr uint32_t m_nZoomFOV2 = 0xD0C;
	constexpr uint32_t m_flZoomTime0 = 0xD10;
	constexpr uint32_t m_flZoomTime1 = 0xD14;
	constexpr uint32_t m_flZoomTime2 = 0xD18;
	constexpr uint32_t m_flIronSightPullUpSpeed = 0xD1C;
	constexpr uint32_t m_flIronSightPutDownSpeed = 0xD20;
	constexpr uint32_t m_flIronSightFOV = 0xD24;
	constexpr uint32_t m_flIronSightPivotForward = 0xD28;
	constexpr uint32_t m_flIronSightLooseness = 0xD2C;
	constexpr uint32_t m_angPivotAngle = 0xD30;
	constexpr uint32_t m_vecIronSightEyePos = 0xD3C;
	constexpr uint32_t m_nDamage = 0xD48;
	constexpr uint32_t m_flHeadshotMultiplier = 0xD4C;
	constexpr uint32_t m_flArmorRatio = 0xD50;
	constexpr uint32_t m_flPenetration = 0xD54;
	constexpr uint32_t m_flRange = 0xD58;
	constexpr uint32_t m_flRangeModifier = 0xD5C;
	constexpr uint32_t m_flFlinchVelocityModifierLarge = 0xD60;
	constexpr uint32_t m_flFlinchVelocityModifierSmall = 0xD64;
	constexpr uint32_t m_flRecoveryTimeCrouch = 0xD68;
	constexpr uint32_t m_flRecoveryTimeStand = 0xD6C;
	constexpr uint32_t m_flRecoveryTimeCrouchFinal = 0xD70;
	constexpr uint32_t m_flRecoveryTimeStandFinal = 0xD74;
	constexpr uint32_t m_nRecoveryTransitionStartBullet = 0xD78;
	constexpr uint32_t m_nRecoveryTransitionEndBullet = 0xD7C;
	constexpr uint32_t m_flThrowVelocity = 0xD80;
	constexpr uint32_t m_vSmokeColor = 0xD84;
	constexpr uint32_t m_szAnimClass = 0xD90;
}

namespace C_PlayerSprayDecal
{
	constexpr uint32_t m_nUniqueID = 0xCC8;
	constexpr uint32_t m_unAccountID = 0xCCC;
	constexpr uint32_t m_unTraceID = 0xCD0;
	constexpr uint32_t m_rtGcTime = 0xCD4;
	constexpr uint32_t m_vecEndPos = 0xCD8;
	constexpr uint32_t m_vecStart = 0xCE4;
	constexpr uint32_t m_vecLeft = 0xCF0;
	constexpr uint32_t m_vecNormal = 0xCFC;
	constexpr uint32_t m_nPlayer = 0xD08;
	constexpr uint32_t m_nEntity = 0xD0C;
	constexpr uint32_t m_nHitbox = 0xD10;
	constexpr uint32_t m_flCreationTime = 0xD14;
	constexpr uint32_t m_nTintID = 0xD18;
	constexpr uint32_t m_nVersion = 0xD1C;
	constexpr uint32_t m_ubSignature = 0xD1D;
	constexpr uint32_t m_SprayRenderHelper = 0xDA8;
}

namespace C_FuncConveyor
{
	constexpr uint32_t m_vecMoveDirEntitySpace = 0xCD0;
	constexpr uint32_t m_flTargetSpeed = 0xCDC;
	constexpr uint32_t m_nTransitionStartTick = 0xCE0;
	constexpr uint32_t m_nTransitionDurationTicks = 0xCE4;
	constexpr uint32_t m_flTransitionStartSpeed = 0xCE8;
	constexpr uint32_t m_hConveyorModels = 0xCF0;
	constexpr uint32_t m_flCurrentConveyorOffset = 0xD08;
	constexpr uint32_t m_flCurrentConveyorSpeed = 0xD0C;
}

namespace CGrenadeTracer
{
	constexpr uint32_t m_flTracerDuration = 0xCE8;
	constexpr uint32_t m_nType = 0xCEC;
}

namespace C_Inferno
{
	constexpr uint32_t m_nfxFireDamageEffect = 0xD08;
	constexpr uint32_t m_hInfernoPointsSnapshot = 0xD10;
	constexpr uint32_t m_hInfernoFillerPointsSnapshot = 0xD18;
	constexpr uint32_t m_hInfernoOutlinePointsSnapshot = 0xD20;
	constexpr uint32_t m_hInfernoClimbingOutlinePointsSnapshot = 0xD28;
	constexpr uint32_t m_hInfernoDecalsSnapshot = 0xD30;
	constexpr uint32_t m_firePositions = 0xD38;
	constexpr uint32_t m_fireParentPositions = 0x1038;
	constexpr uint32_t m_bFireIsBurning = 0x1338;
	constexpr uint32_t m_BurnNormal = 0x1378;
	constexpr uint32_t m_fireCount = 0x1678;
	constexpr uint32_t m_nInfernoType = 0x167C;
	constexpr uint32_t m_nFireLifetime = 0x1680;
	constexpr uint32_t m_bInPostEffectTime = 0x1684;
	constexpr uint32_t m_lastFireCount = 0x1688;
	constexpr uint32_t m_nFireEffectTickBegin = 0x168C;
	constexpr uint32_t m_drawableCount = 0x8290;
	constexpr uint32_t m_blosCheck = 0x8294;
	constexpr uint32_t m_nlosperiod = 0x8298;
	constexpr uint32_t m_maxFireHalfWidth = 0x829C;
	constexpr uint32_t m_maxFireHeight = 0x82A0;
	constexpr uint32_t m_minBounds = 0x82A4;
	constexpr uint32_t m_maxBounds = 0x82B0;
	constexpr uint32_t m_flLastGrassBurnThink = 0x82BC;
}

namespace C_FireCrackerBlast
{
}

namespace C_BarnLight
{
	constexpr uint32_t m_bEnabled = 0xCC8;
	constexpr uint32_t m_nColorMode = 0xCCC;
	constexpr uint32_t m_Color = 0xCD0;
	constexpr uint32_t m_flColorTemperature = 0xCD4;
	constexpr uint32_t m_flBrightness = 0xCD8;
	constexpr uint32_t m_flBrightnessScale = 0xCDC;
	constexpr uint32_t m_nDirectLight = 0xCE0;
	constexpr uint32_t m_nBakedShadowIndex = 0xCE4;
	constexpr uint32_t m_nLuminaireShape = 0xCE8;
	constexpr uint32_t m_flLuminaireSize = 0xCEC;
	constexpr uint32_t m_flLuminaireAnisotropy = 0xCF0;
	constexpr uint32_t m_LightStyleString = 0xCF8;
	constexpr uint32_t m_flLightStyleStartTime = 0xD00;
	constexpr uint32_t m_QueuedLightStyleStrings = 0xD08;
	constexpr uint32_t m_LightStyleEvents = 0xD20;
	constexpr uint32_t m_LightStyleTargets = 0xD38;
	constexpr uint32_t m_StyleEvent = 0xD50;
	constexpr uint32_t m_hLightCookie = 0xDF0;
	constexpr uint32_t m_flShape = 0xDF8;
	constexpr uint32_t m_flSoftX = 0xDFC;
	constexpr uint32_t m_flSoftY = 0xE00;
	constexpr uint32_t m_flSkirt = 0xE04;
	constexpr uint32_t m_flSkirtNear = 0xE08;
	constexpr uint32_t m_vSizeParams = 0xE0C;
	constexpr uint32_t m_flRange = 0xE18;
	constexpr uint32_t m_vShear = 0xE1C;
	constexpr uint32_t m_nBakeSpecularToCubemaps = 0xE28;
	constexpr uint32_t m_vBakeSpecularToCubemapsSize = 0xE2C;
	constexpr uint32_t m_nCastShadows = 0xE38;
	constexpr uint32_t m_nShadowMapSize = 0xE3C;
	constexpr uint32_t m_nShadowPriority = 0xE40;
	constexpr uint32_t m_bContactShadow = 0xE44;
	constexpr uint32_t m_nBounceLight = 0xE48;
	constexpr uint32_t m_flBounceScale = 0xE4C;
	constexpr uint32_t m_flMinRoughness = 0xE50;
	constexpr uint32_t m_vAlternateColor = 0xE54;
	constexpr uint32_t m_fAlternateColorBrightness = 0xE60;
	constexpr uint32_t m_nFog = 0xE64;
	constexpr uint32_t m_flFogStrength = 0xE68;
	constexpr uint32_t m_nFogShadows = 0xE6C;
	constexpr uint32_t m_flFogScale = 0xE70;
	constexpr uint32_t m_flFadeSizeStart = 0xE74;
	constexpr uint32_t m_flFadeSizeEnd = 0xE78;
	constexpr uint32_t m_flShadowFadeSizeStart = 0xE7C;
	constexpr uint32_t m_flShadowFadeSizeEnd = 0xE80;
	constexpr uint32_t m_bPrecomputedFieldsValid = 0xE84;
	constexpr uint32_t m_vPrecomputedBoundsMins = 0xE88;
	constexpr uint32_t m_vPrecomputedBoundsMaxs = 0xE94;
	constexpr uint32_t m_vPrecomputedOBBOrigin = 0xEA0;
	constexpr uint32_t m_vPrecomputedOBBAngles = 0xEAC;
	constexpr uint32_t m_vPrecomputedOBBExtent = 0xEB8;
}

namespace C_RectLight
{
	constexpr uint32_t m_bShowLight = 0xF10;
}

namespace C_OmniLight
{
	constexpr uint32_t m_flInnerAngle = 0xF10;
	constexpr uint32_t m_flOuterAngle = 0xF14;
	constexpr uint32_t m_bShowLight = 0xF18;
}

namespace C_CSTeam
{
	constexpr uint32_t m_szTeamMatchStat = 0x600;
	constexpr uint32_t m_numMapVictories = 0x800;
	constexpr uint32_t m_bSurrendered = 0x804;
	constexpr uint32_t m_scoreFirstHalf = 0x808;
	constexpr uint32_t m_scoreSecondHalf = 0x80C;
	constexpr uint32_t m_scoreOvertime = 0x810;
	constexpr uint32_t m_szClanTeamname = 0x814;
	constexpr uint32_t m_iClanID = 0x898;
	constexpr uint32_t m_szTeamFlagImage = 0x89C;
	constexpr uint32_t m_szTeamLogoImage = 0x8A4;
}

namespace C_MapPreviewParticleSystem
{
}

namespace CInfoDynamicShadowHint
{
	constexpr uint32_t m_bDisabled = 0x548;
	constexpr uint32_t m_flRange = 0x54C;
	constexpr uint32_t m_nImportance = 0x550;
	constexpr uint32_t m_nLightChoice = 0x554;
	constexpr uint32_t m_hLight = 0x558;
}

namespace CInfoDynamicShadowHintBox
{
	constexpr uint32_t m_vBoxMins = 0x560;
	constexpr uint32_t m_vBoxMaxs = 0x56C;
}

namespace C_EnvSky
{
	constexpr uint32_t m_hSkyMaterial = 0xCC8;
	constexpr uint32_t m_hSkyMaterialLightingOnly = 0xCD0;
	constexpr uint32_t m_bStartDisabled = 0xCD8;
	constexpr uint32_t m_vTintColor = 0xCD9;
	constexpr uint32_t m_vTintColorLightingOnly = 0xCDD;
	constexpr uint32_t m_flBrightnessScale = 0xCE4;
	constexpr uint32_t m_nFogType = 0xCE8;
	constexpr uint32_t m_flFogMinStart = 0xCEC;
	constexpr uint32_t m_flFogMinEnd = 0xCF0;
	constexpr uint32_t m_flFogMaxStart = 0xCF4;
	constexpr uint32_t m_flFogMaxEnd = 0xCF8;
	constexpr uint32_t m_bEnabled = 0xCFC;
}

namespace C_TonemapController2Alias_env_tonemap_controller2
{
}

namespace C_LightEntity
{
	constexpr uint32_t m_CLightComponent = 0xCC8;
}

namespace C_LightSpotEntity
{
}

namespace C_LightOrthoEntity
{
}

namespace C_LightDirectionalEntity
{
}

namespace C_LightEnvironmentEntity
{
}

namespace C_EnvParticleGlow
{
	constexpr uint32_t m_flAlphaScale = 0x1278;
	constexpr uint32_t m_flRadiusScale = 0x127C;
	constexpr uint32_t m_flSelfIllumScale = 0x1280;
	constexpr uint32_t m_ColorTint = 0x1284;
	constexpr uint32_t m_hTextureOverride = 0x1288;
}

namespace C_TextureBasedAnimatable
{
	constexpr uint32_t m_bLoop = 0xCC8;
	constexpr uint32_t m_flFPS = 0xCCC;
	constexpr uint32_t m_hPositionKeys = 0xCD0;
	constexpr uint32_t m_hRotationKeys = 0xCD8;
	constexpr uint32_t m_vAnimationBoundsMin = 0xCE0;
	constexpr uint32_t m_vAnimationBoundsMax = 0xCEC;
	constexpr uint32_t m_flStartTime = 0xCF8;
	constexpr uint32_t m_flStartFrame = 0xCFC;
}

namespace C_World
{
}

namespace CBaseProp
{
	constexpr uint32_t m_bModelOverrodeBlockLOS = 0xED0;
	constexpr uint32_t m_iShapeType = 0xED4;
	constexpr uint32_t m_bConformToCollisionBounds = 0xED8;
	constexpr uint32_t m_mPreferredCatchTransform = 0xEDC;
}

namespace C_BreakableProp
{
	constexpr uint32_t m_CPropDataComponent = 0xF10;
	constexpr uint32_t m_OnBreak = 0xF50;
	constexpr uint32_t m_OnHealthChanged = 0xF78;
	constexpr uint32_t m_OnTakeDamage = 0xFA0;
	constexpr uint32_t m_impactEnergyScale = 0xFC8;
	constexpr uint32_t m_iMinHealthDmg = 0xFCC;
	constexpr uint32_t m_flPressureDelay = 0xFD0;
	constexpr uint32_t m_flDefBurstScale = 0xFD4;
	constexpr uint32_t m_vDefBurstOffset = 0xFD8;
	constexpr uint32_t m_hBreaker = 0xFE4;
	constexpr uint32_t m_PerformanceMode = 0xFE8;
	constexpr uint32_t m_flPreventDamageBeforeTime = 0xFEC;
	constexpr uint32_t m_bHasBreakPiecesOrCommands = 0xFF0;
	constexpr uint32_t m_explodeDamage = 0xFF4;
	constexpr uint32_t m_explodeRadius = 0xFF8;
	constexpr uint32_t m_explosionDelay = 0x1000;
	constexpr uint32_t m_explosionBuildupSound = 0x1008;
	constexpr uint32_t m_explosionCustomEffect = 0x1010;
	constexpr uint32_t m_explosionCustomSound = 0x1018;
	constexpr uint32_t m_explosionModifier = 0x1020;
	constexpr uint32_t m_hPhysicsAttacker = 0x1028;
	constexpr uint32_t m_flLastPhysicsInfluenceTime = 0x102C;
	constexpr uint32_t m_flDefaultFadeScale = 0x1030;
	constexpr uint32_t m_hLastAttacker = 0x1034;
	constexpr uint32_t m_hFlareEnt = 0x1038;
	constexpr uint32_t m_noGhostCollision = 0x103C;
}

namespace C_DynamicProp
{
	constexpr uint32_t m_bUseHitboxesForRenderBox = 0x1040;
	constexpr uint32_t m_bUseAnimGraph = 0x1041;
	constexpr uint32_t m_pOutputAnimBegun = 0x1048;
	constexpr uint32_t m_pOutputAnimOver = 0x1070;
	constexpr uint32_t m_pOutputAnimLoopCycleOver = 0x1098;
	constexpr uint32_t m_OnAnimReachedStart = 0x10C0;
	constexpr uint32_t m_OnAnimReachedEnd = 0x10E8;
	constexpr uint32_t m_iszIdleAnim = 0x1110;
	constexpr uint32_t m_nIdleAnimLoopMode = 0x1118;
	constexpr uint32_t m_bRandomizeCycle = 0x111C;
	constexpr uint32_t m_bStartDisabled = 0x111D;
	constexpr uint32_t m_bFiredStartEndOutput = 0x111E;
	constexpr uint32_t m_bForceNpcExclude = 0x111F;
	constexpr uint32_t m_bCreateNonSolid = 0x1120;
	constexpr uint32_t m_bIsOverrideProp = 0x1121;
	constexpr uint32_t m_iInitialGlowState = 0x1124;
	constexpr uint32_t m_nGlowRange = 0x1128;
	constexpr uint32_t m_nGlowRangeMin = 0x112C;
	constexpr uint32_t m_glowColor = 0x1130;
	constexpr uint32_t m_nGlowTeam = 0x1134;
	constexpr uint32_t m_iCachedFrameCount = 0x1138;
	constexpr uint32_t m_vecCachedRenderMins = 0x113C;
	constexpr uint32_t m_vecCachedRenderMaxs = 0x1148;
}

namespace C_DynamicPropAlias_dynamic_prop
{
}

namespace C_DynamicPropAlias_prop_dynamic_override
{
}

namespace C_DynamicPropAlias_cable_dynamic
{
}

namespace C_ColorCorrectionVolume
{
	constexpr uint32_t m_LastEnterWeight = 0xCD0;
	constexpr uint32_t m_LastEnterTime = 0xCD4;
	constexpr uint32_t m_LastExitWeight = 0xCD8;
	constexpr uint32_t m_LastExitTime = 0xCDC;
	constexpr uint32_t m_bEnabled = 0xCE0;
	constexpr uint32_t m_MaxWeight = 0xCE4;
	constexpr uint32_t m_FadeDuration = 0xCE8;
	constexpr uint32_t m_Weight = 0xCEC;
	constexpr uint32_t m_lookupFilename = 0xCF0;
}

namespace C_FuncMonitor
{
	constexpr uint32_t m_targetCamera = 0xCC8;
	constexpr uint32_t m_nResolutionEnum = 0xCD0;
	constexpr uint32_t m_bRenderShadows = 0xCD4;
	constexpr uint32_t m_bUseUniqueColorTarget = 0xCD5;
	constexpr uint32_t m_brushModelName = 0xCD8;
	constexpr uint32_t m_hTargetCamera = 0xCE0;
	constexpr uint32_t m_bEnabled = 0xCE4;
	constexpr uint32_t m_bDraw3DSkybox = 0xCE5;
}

namespace C_FuncMoveLinear
{
}

namespace C_FuncMover
{
}

namespace C_PhysMagnet
{
	constexpr uint32_t m_aAttachedObjectsFromServer = 0xED0;
	constexpr uint32_t m_aAttachedObjects = 0xEE8;
}

namespace C_PointCommentaryNode
{
	constexpr uint32_t m_bActive = 0xED8;
	constexpr uint32_t m_bWasActive = 0xED9;
	constexpr uint32_t m_flEndTime = 0xEDC;
	constexpr uint32_t m_flStartTime = 0xEE0;
	constexpr uint32_t m_flStartTimeInCommentary = 0xEE4;
	constexpr uint32_t m_iszCommentaryFile = 0xEE8;
	constexpr uint32_t m_iszTitle = 0xEF0;
	constexpr uint32_t m_iszSpeakers = 0xEF8;
	constexpr uint32_t m_iNodeNumber = 0xF00;
	constexpr uint32_t m_iNodeNumberMax = 0xF04;
	constexpr uint32_t m_bListenedTo = 0xF08;
	constexpr uint32_t m_hViewPosition = 0xF18;
	constexpr uint32_t m_bRestartAfterRestore = 0xF1C;
}

namespace C_WaterBullet
{
}

namespace C_BaseDoor
{
	constexpr uint32_t m_bIsUsable = 0xCC8;
}

namespace C_ClientRagdoll
{
	constexpr uint32_t m_bFadeOut = 0xED0;
	constexpr uint32_t m_bImportant = 0xED1;
	constexpr uint32_t m_flEffectTime = 0xED4;
	constexpr uint32_t m_gibDespawnTime = 0xED8;
	constexpr uint32_t m_iCurrentFriction = 0xEDC;
	constexpr uint32_t m_iMinFriction = 0xEE0;
	constexpr uint32_t m_iMaxFriction = 0xEE4;
	constexpr uint32_t m_iFrictionAnimState = 0xEE8;
	constexpr uint32_t m_bReleaseRagdoll = 0xEEC;
	constexpr uint32_t m_iEyeAttachment = 0xEED;
	constexpr uint32_t m_bFadingOut = 0xEEE;
	constexpr uint32_t m_flScaleEnd = 0xEF0;
	constexpr uint32_t m_flScaleTimeStart = 0xF18;
	constexpr uint32_t m_flScaleTimeEnd = 0xF40;
}

namespace C_Precipitation
{
	constexpr uint32_t m_flDensity = 0xCD0;
	constexpr uint32_t m_flParticleInnerDist = 0xCE0;
	constexpr uint32_t m_pParticleDef = 0xCE8;
	constexpr uint32_t m_tParticlePrecipTraceTimer = 0xD10;
	constexpr uint32_t m_bActiveParticlePrecipEmitter = 0xD18;
	constexpr uint32_t m_bParticlePrecipInitialized = 0xD19;
	constexpr uint32_t m_bHasSimulatedSinceLastSceneObjectUpdate = 0xD1A;
	constexpr uint32_t m_nAvailableSheetSequencesMaxIndex = 0xD1C;
}

namespace C_FireSprite
{
	constexpr uint32_t m_vecMoveDir = 0xDD8;
	constexpr uint32_t m_bFadeFromAbove = 0xDE4;
}

namespace C_FireFromAboveSprite
{
}

namespace C_Fish
{
	constexpr uint32_t m_pos = 0xED0;
	constexpr uint32_t m_vel = 0xEDC;
	constexpr uint32_t m_angles = 0xEE8;
	constexpr uint32_t m_localLifeState = 0xEF4;
	constexpr uint32_t m_deathDepth = 0xEF8;
	constexpr uint32_t m_deathAngle = 0xEFC;
	constexpr uint32_t m_buoyancy = 0xF00;
	constexpr uint32_t m_wiggleTimer = 0xF08;
	constexpr uint32_t m_wigglePhase = 0xF20;
	constexpr uint32_t m_wiggleRate = 0xF24;
	constexpr uint32_t m_actualPos = 0xF28;
	constexpr uint32_t m_actualAngles = 0xF34;
	constexpr uint32_t m_poolOrigin = 0xF40;
	constexpr uint32_t m_waterLevel = 0xF4C;
	constexpr uint32_t m_gotUpdate = 0xF50;
	constexpr uint32_t m_x = 0xF54;
	constexpr uint32_t m_y = 0xF58;
	constexpr uint32_t m_z = 0xF5C;
	constexpr uint32_t m_angle = 0xF60;
	constexpr uint32_t m_errorHistory = 0xF64;
	constexpr uint32_t m_errorHistoryIndex = 0xFB4;
	constexpr uint32_t m_errorHistoryCount = 0xFB8;
	constexpr uint32_t m_averageError = 0xFBC;
}

namespace C_PhysicsProp
{
	constexpr uint32_t m_bAwake = 0x1040;
}

namespace C_BasePropDoor
{
	constexpr uint32_t m_eDoorState = 0x1168;
	constexpr uint32_t m_modelChanged = 0x116C;
	constexpr uint32_t m_bLocked = 0x116D;
	constexpr uint32_t m_closedPosition = 0x1170;
	constexpr uint32_t m_closedAngles = 0x117C;
	constexpr uint32_t m_hMaster = 0x1188;
	constexpr uint32_t m_vWhereToSetLightingOrigin = 0x118C;
}

namespace C_PropDoorRotating
{
}

namespace C_PhysPropClientside
{
	constexpr uint32_t m_flTouchDelta = 0x1040;
	constexpr uint32_t m_fDeathTime = 0x1044;
	constexpr uint32_t m_inertiaScale = 0x1048;
	constexpr uint32_t m_vecDamagePosition = 0x104C;
	constexpr uint32_t m_vecDamageDirection = 0x1058;
	constexpr uint32_t m_nDamageType = 0x1064;
}

namespace C_RagdollProp
{
	constexpr uint32_t m_ragPos = 0xED8;
	constexpr uint32_t m_ragAngles = 0xEF0;
	constexpr uint32_t m_flBlendWeight = 0xF08;
	constexpr uint32_t m_hRagdollSource = 0xF0C;
	constexpr uint32_t m_iEyeAttachment = 0xF10;
	constexpr uint32_t m_flBlendWeightCurrent = 0xF14;
	constexpr uint32_t m_parentPhysicsBoneIndices = 0xF18;
	constexpr uint32_t m_worldSpaceBoneComputationOrder = 0xF30;
}

namespace C_LocalTempEntity
{
	constexpr uint32_t flags = 0xED0;
	constexpr uint32_t die = 0xED4;
	constexpr uint32_t m_flFrameMax = 0xED8;
	constexpr uint32_t x = 0xEDC;
	constexpr uint32_t y = 0xEE0;
	constexpr uint32_t fadeSpeed = 0xEE4;
	constexpr uint32_t bounceFactor = 0xEE8;
	constexpr uint32_t hitSound = 0xEEC;
	constexpr uint32_t priority = 0xEF0;
	constexpr uint32_t tentOffset = 0xEF4;
	constexpr uint32_t m_vecTempEntAngVelocity = 0xF00;
	constexpr uint32_t tempent_renderamt = 0xF0C;
	constexpr uint32_t m_vecNormal = 0xF10;
	constexpr uint32_t m_flSpriteScale = 0xF1C;
	constexpr uint32_t m_nFlickerFrame = 0xF20;
	constexpr uint32_t m_flFrameRate = 0xF24;
	constexpr uint32_t m_flFrame = 0xF28;
	constexpr uint32_t m_pszImpactEffect = 0xF30;
	constexpr uint32_t m_pszParticleEffect = 0xF38;
	constexpr uint32_t m_bParticleCollision = 0xF40;
	constexpr uint32_t m_iLastCollisionFrame = 0xF44;
	constexpr uint32_t m_vLastCollisionOrigin = 0xF48;
	constexpr uint32_t m_vecTempEntVelocity = 0xF54;
	constexpr uint32_t m_vecPrevAbsOrigin = 0xF60;
	constexpr uint32_t m_vecTempEntAcceleration = 0xF6C;
}

namespace C_ShatterGlassShardPhysics
{
	constexpr uint32_t m_ShardDesc = 0x1050;
}

namespace C_EconEntity
{
	constexpr uint32_t m_flFlexDelayTime = 0x1078;
	constexpr uint32_t m_flFlexDelayedWeight = 0x1080;
	constexpr uint32_t m_bAttributesInitialized = 0x1088;
	constexpr uint32_t m_AttributeManager = 0x1090;
	constexpr uint32_t m_OriginalOwnerXuidLow = 0x1538;
	constexpr uint32_t m_OriginalOwnerXuidHigh = 0x153C;
	constexpr uint32_t m_nFallbackPaintKit = 0x1540;
	constexpr uint32_t m_nFallbackSeed = 0x1544;
	constexpr uint32_t m_flFallbackWear = 0x1548;
	constexpr uint32_t m_nFallbackStatTrak = 0x154C;
	constexpr uint32_t m_bClientside = 0x1550;
	constexpr uint32_t m_bParticleSystemsCreated = 0x1551;
	constexpr uint32_t m_vecAttachedParticles = 0x1558;
	constexpr uint32_t m_hViewmodelAttachment = 0x1570;
	constexpr uint32_t m_iOldTeam = 0x1574;
	constexpr uint32_t m_bAttachmentDirty = 0x1578;
	constexpr uint32_t m_nUnloadedModelIndex = 0x157C;
	constexpr uint32_t m_iNumOwnerValidationRetries = 0x1580;
	constexpr uint32_t m_hOldProvidee = 0x1590;
	constexpr uint32_t m_vecAttachedModels = 0x1598;
}

namespace C_EconWearable
{
	constexpr uint32_t m_nForceSkin = 0x15B0;
	constexpr uint32_t m_bAlwaysAllow = 0x15B4;
}

namespace C_BaseGrenade
{
	constexpr uint32_t m_bHasWarnedAI = 0x1068;
	constexpr uint32_t m_bIsSmokeGrenade = 0x1069;
	constexpr uint32_t m_bIsLive = 0x106A;
	constexpr uint32_t m_DmgRadius = 0x106C;
	constexpr uint32_t m_flDetonateTime = 0x1070;
	constexpr uint32_t m_flWarnAITime = 0x1074;
	constexpr uint32_t m_flDamage = 0x1078;
	constexpr uint32_t m_iszBounceSound = 0x1080;
	constexpr uint32_t m_ExplosionSound = 0x1088;
	constexpr uint32_t m_hThrower = 0x1094;
	constexpr uint32_t m_flNextAttack = 0x10AC;
	constexpr uint32_t m_hOriginalThrower = 0x10B0;
}

namespace C_PhysicsPropMultiplayer
{
}

namespace C_ViewmodelWeapon
{
	constexpr uint32_t m_worldModel = 0xED0;
}

namespace C_ViewmodelAttachmentModel
{
	constexpr uint32_t m_bShouldFrontFaceCullLeftHanded = 0xED0;
}

namespace C_PredictedViewModel
{
	constexpr uint32_t m_vPredictedLagOffset = 0xF38;
	constexpr uint32_t m_targetSpeed = 0xF44;
	constexpr uint32_t m_currentSpeed = 0xF50;
}

namespace C_WorldModelStattrak
{
}

namespace C_WorldModelNametag
{
}

namespace C_BaseCSGrenadeProjectile
{
	constexpr uint32_t m_vInitialPosition = 0x10B8;
	constexpr uint32_t m_vInitialVelocity = 0x10C4;
	constexpr uint32_t m_nBounces = 0x10D0;
	constexpr uint32_t m_nExplodeEffectIndex = 0x10D8;
	constexpr uint32_t m_nExplodeEffectTickBegin = 0x10E0;
	constexpr uint32_t m_vecExplodeEffectOrigin = 0x10E4;
	constexpr uint32_t m_flSpawnTime = 0x10F0;
	constexpr uint32_t vecLastTrailLinePos = 0x10F4;
	constexpr uint32_t flNextTrailLineTime = 0x1100;
	constexpr uint32_t m_bExplodeEffectBegan = 0x1104;
	constexpr uint32_t m_bCanCreateGrenadeTrail = 0x1105;
	constexpr uint32_t m_nSnapshotTrajectoryEffectIndex = 0x1108;
	constexpr uint32_t m_hSnapshotTrajectoryParticleSnapshot = 0x1110;
	constexpr uint32_t m_arrTrajectoryTrailPoints = 0x1118;
	constexpr uint32_t m_arrTrajectoryTrailPointCreationTimes = 0x1130;
	constexpr uint32_t m_flTrajectoryTrailEffectCreationTime = 0x1148;
}

namespace C_SensorGrenadeProjectile
{
}

namespace CBreachChargeProjectile
{
}

namespace CBumpMineProjectile
{
}

namespace CTripWireFireProjectile
{
}

namespace C_CSGO_PreviewModel
{
	constexpr uint32_t m_animgraph = 0x1068;
	constexpr uint32_t m_animgraphCharacterModeString = 0x1070;
	constexpr uint32_t m_defaultAnim = 0x1078;
	constexpr uint32_t m_nDefaultAnimLoopMode = 0x1080;
	constexpr uint32_t m_flInitialModelScale = 0x1084;
	constexpr uint32_t m_sInitialWeaponState = 0x1088;
}

namespace C_CSGO_PreviewModelAlias_csgo_item_previewmodel
{
}

namespace C_WorldModelGloves
{
}

namespace C_BulletHitModel
{
	constexpr uint32_t m_matLocal = 0xED0;
	constexpr uint32_t m_iBoneIndex = 0xF00;
	constexpr uint32_t m_hPlayerParent = 0xF04;
	constexpr uint32_t m_bIsHit = 0xF08;
	constexpr uint32_t m_flTimeCreated = 0xF0C;
	constexpr uint32_t m_vecStartPos = 0xF10;
}

namespace C_HostageCarriableProp
{
}

namespace C_PlantedC4
{
	constexpr uint32_t m_bBombTicking = 0xED0;
	constexpr uint32_t m_nBombSite = 0xED4;
	constexpr uint32_t m_nSourceSoundscapeHash = 0xED8;
	constexpr uint32_t m_entitySpottedState = 0xEE0;
	constexpr uint32_t m_flNextGlow = 0xEF8;
	constexpr uint32_t m_flNextBeep = 0xEFC;
	constexpr uint32_t m_flC4Blow = 0xF00;
	constexpr uint32_t m_bCannotBeDefused = 0xF04;
	constexpr uint32_t m_bHasExploded = 0xF05;
	constexpr uint32_t m_flTimerLength = 0xF08;
	constexpr uint32_t m_bBeingDefused = 0xF0C;
	constexpr uint32_t m_bTriggerWarning = 0xF10;
	constexpr uint32_t m_bExplodeWarning = 0xF14;
	constexpr uint32_t m_bC4Activated = 0xF18;
	constexpr uint32_t m_bTenSecWarning = 0xF19;
	constexpr uint32_t m_flDefuseLength = 0xF1C;
	constexpr uint32_t m_flDefuseCountDown = 0xF20;
	constexpr uint32_t m_bBombDefused = 0xF24;
	constexpr uint32_t m_hBombDefuser = 0xF28;
	constexpr uint32_t m_hControlPanel = 0xF2C;
	constexpr uint32_t m_hDefuserMultimeter = 0xF30;
	constexpr uint32_t m_flNextRadarFlashTime = 0xF34;
	constexpr uint32_t m_bRadarFlash = 0xF38;
	constexpr uint32_t m_pBombDefuser = 0xF3C;
	constexpr uint32_t m_fLastDefuseTime = 0xF40;
	constexpr uint32_t m_pPredictionOwner = 0xF48;
	constexpr uint32_t m_vecC4ExplodeSpectatePos = 0xF50;
	constexpr uint32_t m_vecC4ExplodeSpectateAng = 0xF5C;
	constexpr uint32_t m_flC4ExplodeSpectateDuration = 0xF68;
}

namespace C_Multimeter
{
	constexpr uint32_t m_hTargetC4 = 0xED8;
}

namespace C_Item
{
	constexpr uint32_t m_bShouldGlow = 0x15B0;
	constexpr uint32_t m_pReticleHintTextName = 0x15B1;
}

namespace C_HEGrenadeProjectile
{
}

namespace C_FlashbangProjectile
{
}

namespace C_Chicken
{
	constexpr uint32_t m_hHolidayHatAddon = 0x1160;
	constexpr uint32_t m_jumpedThisFrame = 0x1164;
	constexpr uint32_t m_leader = 0x1168;
	constexpr uint32_t m_AttributeManager = 0x1170;
	constexpr uint32_t m_bAttributesInitialized = 0x1618;
	constexpr uint32_t m_hWaterWakeParticles = 0x161C;
	constexpr uint32_t m_bIsPreviewModel = 0x1620;
}

namespace C_RagdollPropAttached
{
	constexpr uint32_t m_boneIndexAttached = 0xF48;
	constexpr uint32_t m_ragdollAttachedObjectIndex = 0xF4C;
	constexpr uint32_t m_attachmentPointBoneSpace = 0xF50;
	constexpr uint32_t m_attachmentPointRagdollSpace = 0xF5C;
	constexpr uint32_t m_vecOffset = 0xF68;
	constexpr uint32_t m_parentTime = 0xF74;
	constexpr uint32_t m_bHasParent = 0xF78;
}

namespace C_BaseCombatCharacter
{
	constexpr uint32_t m_hMyWearables = 0x1068;
	constexpr uint32_t m_leftFootAttachment = 0x1080;
	constexpr uint32_t m_rightFootAttachment = 0x1081;
	constexpr uint32_t m_nWaterWakeMode = 0x1084;
	constexpr uint32_t m_flWaterWorldZ = 0x1088;
	constexpr uint32_t m_flWaterNextTraceTime = 0x108C;
	constexpr uint32_t m_flFieldOfView = 0x1090;
}

namespace C_CSGOViewModel
{
	constexpr uint32_t m_bShouldIgnoreOffsetAndAccuracy = 0xF68;
	constexpr uint32_t m_nWeaponParity = 0xF6C;
	constexpr uint32_t m_nOldWeaponParity = 0xF70;
	constexpr uint32_t m_nLastKnownAssociatedWeaponEntIndex = 0xF74;
	constexpr uint32_t m_bNeedToQueueHighResComposite = 0xF78;
	constexpr uint32_t m_vLoweredWeaponOffset = 0xFC8;
}

namespace C_CSWeaponBase
{
	constexpr uint32_t m_flFireSequenceStartTime = 0x1624;
	constexpr uint32_t m_nFireSequenceStartTimeChange = 0x1628;
	constexpr uint32_t m_nFireSequenceStartTimeAck = 0x162C;
	constexpr uint32_t m_ePlayerFireEvent = 0x1630;
	constexpr uint32_t m_ePlayerFireEventAttackType = 0x1634;
	constexpr uint32_t m_seqIdle = 0x1638;
	constexpr uint32_t m_seqFirePrimary = 0x163C;
	constexpr uint32_t m_seqFireSecondary = 0x1640;
	constexpr uint32_t m_thirdPersonFireSequences = 0x1648;
	constexpr uint32_t m_hCurrentThirdPersonSequence = 0x1660;
	constexpr uint32_t m_nSilencerBoneIndex = 0x1664;
	constexpr uint32_t m_thirdPersonSequences = 0x1668;
	constexpr uint32_t m_ClientPreviousWeaponState = 0x16A0;
	constexpr uint32_t m_iState = 0x16A4;
	constexpr uint32_t m_flCrosshairDistance = 0x16A8;
	constexpr uint32_t m_iAmmoLastCheck = 0x16AC;
	constexpr uint32_t m_iAlpha = 0x16B0;
	constexpr uint32_t m_iScopeTextureID = 0x16B4;
	constexpr uint32_t m_iCrosshairTextureID = 0x16B8;
	constexpr uint32_t m_flGunAccuracyPositionDeprecated = 0x16BC;
	constexpr uint32_t m_nLastEmptySoundCmdNum = 0x16C0;
	constexpr uint32_t m_nViewModelIndex = 0x16C4;
	constexpr uint32_t m_bReloadsWithClips = 0x16C8;
	constexpr uint32_t m_flTimeWeaponIdle = 0x16CC;
	constexpr uint32_t m_bFireOnEmpty = 0x16D0;
	constexpr uint32_t m_OnPlayerPickup = 0x16D8;
	constexpr uint32_t m_weaponMode = 0x1700;
	constexpr uint32_t m_flTurningInaccuracyDelta = 0x1704;
	constexpr uint32_t m_vecTurningInaccuracyEyeDirLast = 0x1708;
	constexpr uint32_t m_flTurningInaccuracy = 0x1714;
	constexpr uint32_t m_fAccuracyPenalty = 0x1718;
	constexpr uint32_t m_flLastAccuracyUpdateTime = 0x171C;
	constexpr uint32_t m_fAccuracySmoothedForZoom = 0x1720;
	constexpr uint32_t m_fScopeZoomEndTime = 0x1724;
	constexpr uint32_t m_iRecoilIndex = 0x1728;
	constexpr uint32_t m_flRecoilIndex = 0x172C;
	constexpr uint32_t m_bBurstMode = 0x1730;
	constexpr uint32_t m_flLastBurstModeChangeTime = 0x1734;
	constexpr uint32_t m_nPostponeFireReadyTicks = 0x1738;
	constexpr uint32_t m_flPostponeFireReadyFrac = 0x173C;
	constexpr uint32_t m_bInReload = 0x1740;
	constexpr uint32_t m_bReloadVisuallyComplete = 0x1741;
	constexpr uint32_t m_flDroppedAtTime = 0x1744;
	constexpr uint32_t m_bIsHauledBack = 0x1748;
	constexpr uint32_t m_bSilencerOn = 0x1749;
	constexpr uint32_t m_flTimeSilencerSwitchComplete = 0x174C;
	constexpr uint32_t m_iOriginalTeamNumber = 0x1750;
	constexpr uint32_t m_iMostRecentTeamNumber = 0x1754;
	constexpr uint32_t m_bDroppedNearBuyZone = 0x1758;
	constexpr uint32_t m_flNextAttackRenderTimeOffset = 0x175C;
	constexpr uint32_t m_bClearWeaponIdentifyingUGC = 0x17E8;
	constexpr uint32_t m_bVisualsDataSet = 0x17E9;
	constexpr uint32_t m_bOldFirstPersonSpectatedState = 0x17EA;
	constexpr uint32_t m_hOurPing = 0x17EC;
	constexpr uint32_t m_nOurPingIndex = 0x17F0;
	constexpr uint32_t m_vecOurPingPos = 0x17F4;
	constexpr uint32_t m_bGlowForPing = 0x1800;
	constexpr uint32_t m_bUIWeapon = 0x1801;
	constexpr uint32_t m_nCustomEconReloadEventId = 0x1804;
	constexpr uint32_t m_hPrevOwner = 0x1810;
	constexpr uint32_t m_nDropTick = 0x1814;
	constexpr uint32_t m_donated = 0x1834;
	constexpr uint32_t m_fLastShotTime = 0x1838;
	constexpr uint32_t m_bWasOwnedByCT = 0x183C;
	constexpr uint32_t m_bWasOwnedByTerrorist = 0x183D;
	constexpr uint32_t m_gunHeat = 0x1840;
	constexpr uint32_t m_smokeAttachments = 0x1844;
	constexpr uint32_t m_lastSmokeTime = 0x1848;
	constexpr uint32_t m_flNextClientFireBulletTime = 0x184C;
	constexpr uint32_t m_flNextClientFireBulletTime_Repredict = 0x1850;
	constexpr uint32_t m_IronSightController = 0x1930;
	constexpr uint32_t m_iIronSightMode = 0x19E0;
	constexpr uint32_t m_flLastLOSTraceFailureTime = 0x19F0;
	constexpr uint32_t m_iNumEmptyAttacks = 0x19F4;
	constexpr uint32_t m_flLastMagDropRequestTime = 0x1A70;
	constexpr uint32_t m_flWatTickOffset = 0x1A74;
}

namespace C_CSWeaponBaseGun
{
	constexpr uint32_t m_zoomLevel = 0x1A80;
	constexpr uint32_t m_iBurstShotsRemaining = 0x1A84;
	constexpr uint32_t m_iSilencerBodygroup = 0x1A88;
	constexpr uint32_t m_silencedModelIndex = 0x1A98;
	constexpr uint32_t m_inPrecache = 0x1A9C;
	constexpr uint32_t m_bNeedsBoltAction = 0x1A9D;
}

namespace C_C4
{
	constexpr uint32_t m_szScreenText = 0x1A80;
	constexpr uint32_t m_activeLightParticleIndex = 0x1AA0;
	constexpr uint32_t m_eActiveLightEffect = 0x1AA4;
	constexpr uint32_t m_bStartedArming = 0x1AA8;
	constexpr uint32_t m_fArmedTime = 0x1AAC;
	constexpr uint32_t m_bBombPlacedAnimation = 0x1AB0;
	constexpr uint32_t m_bIsPlantingViaUse = 0x1AB1;
	constexpr uint32_t m_entitySpottedState = 0x1AB8;
	constexpr uint32_t m_nSpotRules = 0x1AD0;
	constexpr uint32_t m_bPlayedArmingBeeps = 0x1AD4;
	constexpr uint32_t m_bBombPlanted = 0x1ADB;
}

namespace C_DEagle
{
}

namespace C_WeaponElite
{
}

namespace C_WeaponNOVA
{
}

namespace C_WeaponSawedoff
{
}

namespace C_WeaponTaser
{
	constexpr uint32_t m_fFireTime = 0x1AA0;
	constexpr uint32_t m_nLastAttackTick = 0x1AA4;
}

namespace C_WeaponXM1014
{
}

namespace C_Knife
{
}

namespace C_Melee
{
}

namespace C_WeaponShield
{
	constexpr uint32_t m_flDisplayHealth = 0x1AA0;
}

namespace C_MolotovProjectile
{
	constexpr uint32_t m_bIsIncGrenade = 0x1150;
}

namespace C_DecoyProjectile
{
	constexpr uint32_t m_nDecoyShotTick = 0x1150;
	constexpr uint32_t m_nClientLastKnownDecoyShotTick = 0x1154;
	constexpr uint32_t m_flTimeParticleEffectSpawn = 0x1178;
}

namespace C_SmokeGrenadeProjectile
{
	constexpr uint32_t m_nSmokeEffectTickBegin = 0x1158;
	constexpr uint32_t m_bDidSmokeEffect = 0x115C;
	constexpr uint32_t m_nRandomSeed = 0x1160;
	constexpr uint32_t m_vSmokeColor = 0x1164;
	constexpr uint32_t m_vSmokeDetonationPos = 0x1170;
	constexpr uint32_t m_VoxelFrameData = 0x1180;
	constexpr uint32_t m_bSmokeVolumeDataReceived = 0x1198;
	constexpr uint32_t m_bSmokeEffectSpawned = 0x1199;
}

namespace C_BaseCSGrenade
{
	constexpr uint32_t m_bClientPredictDelete = 0x1A80;
	constexpr uint32_t m_bRedraw = 0x1A81;
	constexpr uint32_t m_bIsHeldByPlayer = 0x1A82;
	constexpr uint32_t m_bPinPulled = 0x1A83;
	constexpr uint32_t m_bJumpThrow = 0x1A84;
	constexpr uint32_t m_bThrowAnimating = 0x1A85;
	constexpr uint32_t m_fThrowTime = 0x1A88;
	constexpr uint32_t m_flThrowStrength = 0x1A8C;
	constexpr uint32_t m_flThrowStrengthApproach = 0x1A90;
	constexpr uint32_t m_fDropTime = 0x1A94;
	constexpr uint32_t m_fPinPullTime = 0x1A98;
	constexpr uint32_t m_bJustPulledPin = 0x1A9C;
	constexpr uint32_t m_nNextHoldTick = 0x1AA0;
	constexpr uint32_t m_flNextHoldFrac = 0x1AA4;
	constexpr uint32_t m_hSwitchToWeaponAfterThrow = 0x1AA8;
}

namespace C_WeaponBaseItem
{
	constexpr uint32_t m_SequenceCompleteTimer = 0x1A80;
	constexpr uint32_t m_bRedraw = 0x1A98;
}

namespace C_ItemDogtags
{
	constexpr uint32_t m_OwningPlayer = 0x16B8;
	constexpr uint32_t m_KillingPlayer = 0x16BC;
}

namespace C_Item_Healthshot
{
}

namespace C_Fists
{
	constexpr uint32_t m_bPlayingUninterruptableAct = 0x1A80;
	constexpr uint32_t m_nUninterruptableActivity = 0x1A84;
}

namespace C_SensorGrenade
{
}

namespace CBreachCharge
{
}

namespace CBumpMine
{
}

namespace CTablet
{
}

namespace CTripWireFire
{
}

namespace CWeaponZoneRepulsor
{
}

namespace C_CSPlayerPawnBase
{
	constexpr uint32_t m_pPingServices = 0x12B0;
	constexpr uint32_t m_pViewModelServices = 0x12B8;
	constexpr uint32_t m_fRenderingClipPlane = 0x12C0;
	constexpr uint32_t m_nLastClipPlaneSetupFrame = 0x12D0;
	constexpr uint32_t m_vecLastClipCameraPos = 0x12D4;
	constexpr uint32_t m_vecLastClipCameraForward = 0x12E0;
	constexpr uint32_t m_bClipHitStaticWorld = 0x12EC;
	constexpr uint32_t m_bCachedPlaneIsValid = 0x12ED;
	constexpr uint32_t m_pClippingWeapon = 0x12F0;
	constexpr uint32_t m_previousPlayerState = 0x12F8;
	constexpr uint32_t m_iPlayerState = 0x12FC;
	constexpr uint32_t m_bIsRescuing = 0x1300;
	constexpr uint32_t m_fImmuneToGunGameDamageTime = 0x1304;
	constexpr uint32_t m_fImmuneToGunGameDamageTimeLast = 0x1308;
	constexpr uint32_t m_bGunGameImmunity = 0x130C;
	constexpr uint32_t m_bHasMovedSinceSpawn = 0x130D;
	constexpr uint32_t m_fMolotovUseTime = 0x1310;
	constexpr uint32_t m_fMolotovDamageTime = 0x1314;
	constexpr uint32_t m_iThrowGrenadeCounter = 0x1318;
	constexpr uint32_t m_flLastSpawnTimeIndex = 0x131C;
	constexpr uint32_t m_iProgressBarDuration = 0x1320;
	constexpr uint32_t m_flProgressBarStartTime = 0x1324;
	constexpr uint32_t m_vecIntroStartEyePosition = 0x1328;
	constexpr uint32_t m_vecIntroStartPlayerForward = 0x1334;
	constexpr uint32_t m_flClientDeathTime = 0x1340;
	constexpr uint32_t m_bScreenTearFrameCaptured = 0x1344;
	constexpr uint32_t m_flFlashBangTime = 0x1348;
	constexpr uint32_t m_flFlashScreenshotAlpha = 0x134C;
	constexpr uint32_t m_flFlashOverlayAlpha = 0x1350;
	constexpr uint32_t m_bFlashBuildUp = 0x1354;
	constexpr uint32_t m_bFlashDspHasBeenCleared = 0x1355;
	constexpr uint32_t m_bFlashScreenshotHasBeenGrabbed = 0x1356;
	constexpr uint32_t m_flFlashMaxAlpha = 0x1358;
	constexpr uint32_t m_flFlashDuration = 0x135C;
	constexpr uint32_t m_iHealthBarRenderMaskIndex = 0x1360;
	constexpr uint32_t m_flHealthFadeValue = 0x1364;
	constexpr uint32_t m_flHealthFadeAlpha = 0x1368;
	constexpr uint32_t m_flDeathCCWeight = 0x1378;
	constexpr uint32_t m_flPrevRoundEndTime = 0x137C;
	constexpr uint32_t m_flPrevMatchEndTime = 0x1380;
	constexpr uint32_t m_angEyeAngles = 0x1388;
	constexpr uint32_t m_fNextThinkPushAway = 0x13A0;
	constexpr uint32_t m_bShouldAutobuyDMWeapons = 0x13A4;
	constexpr uint32_t m_bShouldAutobuyNow = 0x13A5;
	constexpr uint32_t m_iIDEntIndex = 0x13A8;
	constexpr uint32_t m_delayTargetIDTimer = 0x13B0;
	constexpr uint32_t m_iTargetItemEntIdx = 0x13C8;
	constexpr uint32_t m_iOldIDEntIndex = 0x13CC;
	constexpr uint32_t m_holdTargetIDTimer = 0x13D0;
	constexpr uint32_t m_flCurrentMusicStartTime = 0x13EC;
	constexpr uint32_t m_flMusicRoundStartTime = 0x13F0;
	constexpr uint32_t m_bDeferStartMusicOnWarmup = 0x13F4;
	constexpr uint32_t m_cycleLatch = 0x13F8;
	constexpr uint32_t m_serverIntendedCycle = 0x13FC;
	constexpr uint32_t m_flLastSmokeOverlayAlpha = 0x1400;
	constexpr uint32_t m_flLastSmokeAge = 0x1404;
	constexpr uint32_t m_vLastSmokeOverlayColor = 0x1408;
	constexpr uint32_t m_nPlayerSmokedFx = 0x1414;
	constexpr uint32_t m_nPlayerInfernoBodyFx = 0x1418;
	constexpr uint32_t m_nPlayerInfernoFootFx = 0x141C;
	constexpr uint32_t m_flNextMagDropTime = 0x1420;
	constexpr uint32_t m_nLastMagDropAttachmentIndex = 0x1424;
	constexpr uint32_t m_vecLastAliveLocalVelocity = 0x1428;
	constexpr uint32_t m_bGuardianShouldSprayCustomXMark = 0x1450;
	constexpr uint32_t m_hOriginalController = 0x1458;
}

namespace C_Hostage
{
	constexpr uint32_t m_entitySpottedState = 0x10F8;
	constexpr uint32_t m_leader = 0x1110;
	constexpr uint32_t m_reuseTimer = 0x1118;
	constexpr uint32_t m_vel = 0x1130;
	constexpr uint32_t m_isRescued = 0x113C;
	constexpr uint32_t m_jumpedThisFrame = 0x113D;
	constexpr uint32_t m_nHostageState = 0x1140;
	constexpr uint32_t m_bHandsHaveBeenCut = 0x1144;
	constexpr uint32_t m_hHostageGrabber = 0x1148;
	constexpr uint32_t m_fLastGrabTime = 0x114C;
	constexpr uint32_t m_vecGrabbedPos = 0x1150;
	constexpr uint32_t m_flRescueStartTime = 0x115C;
	constexpr uint32_t m_flGrabSuccessTime = 0x1160;
	constexpr uint32_t m_flDropStartTime = 0x1164;
	constexpr uint32_t m_flDeadOrRescuedTime = 0x1168;
	constexpr uint32_t m_blinkTimer = 0x1170;
	constexpr uint32_t m_lookAt = 0x1188;
	constexpr uint32_t m_lookAroundTimer = 0x1198;
	constexpr uint32_t m_isInit = 0x11B0;
	constexpr uint32_t m_eyeAttachment = 0x11B1;
	constexpr uint32_t m_chestAttachment = 0x11B2;
	constexpr uint32_t m_pPredictionOwner = 0x11B8;
	constexpr uint32_t m_fNewestAlphaThinkTime = 0x11C0;
}

namespace C_NetTestBaseCombatCharacter
{
}

namespace C_AK47
{
}

namespace C_WeaponAug
{
}

namespace C_WeaponAWP
{
}

namespace C_WeaponBizon
{
}

namespace C_WeaponFamas
{
}

namespace C_WeaponFiveSeven
{
}

namespace C_WeaponG3SG1
{
}

namespace C_WeaponGalilAR
{
}

namespace C_WeaponGlock
{
}

namespace C_WeaponHKP2000
{
}

namespace C_WeaponUSPSilencer
{
}

namespace C_WeaponM4A1
{
}

namespace C_WeaponM4A1Silencer
{
}

namespace C_WeaponMAC10
{
}

namespace C_WeaponMag7
{
}

namespace C_WeaponMP5SD
{
}

namespace C_WeaponMP7
{
}

namespace C_WeaponMP9
{
}

namespace C_WeaponNegev
{
}

namespace C_WeaponP250
{
}

namespace C_WeaponCZ75a
{
}

namespace C_WeaponP90
{
}

namespace C_WeaponSCAR20
{
}

namespace C_WeaponSG556
{
}

namespace C_WeaponSSG08
{
}

namespace C_WeaponTec9
{
}

namespace C_WeaponUMP45
{
}

namespace C_WeaponM249
{
}

namespace C_WeaponRevolver
{
}

namespace C_MolotovGrenade
{
}

namespace C_IncendiaryGrenade
{
}

namespace C_DecoyGrenade
{
}

namespace C_Flashbang
{
}

namespace C_HEGrenade
{
}

namespace C_SmokeGrenade
{
}

namespace C_CSGO_PreviewPlayer
{
	constexpr uint32_t m_animgraph = 0x2358;
	constexpr uint32_t m_animgraphCharacterModeString = 0x2360;
	constexpr uint32_t m_flInitialModelScale = 0x2368;
}

namespace C_CSGO_PreviewPlayerAlias_csgo_player_previewmodel
{
}

namespace C_CSGO_TeamPreviewModel
{
}

