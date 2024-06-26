namespace ParticleAttributeIndex_t
{
	constexpr uint32_t m_Value = 0x0;
}

namespace CPerParticleFloatInput
{
}

namespace CParticleCollectionFloatInput
{
}

namespace CPerParticleVecInput
{
}

namespace CParticleCollectionVecInput
{
}

namespace CRandomNumberGeneratorParameters
{
	constexpr uint32_t m_bDistributeEvenly = 0x0;
	constexpr uint32_t m_nSeed = 0x4;
}

namespace CParticleMassCalculationParameters
{
	constexpr uint32_t m_nMassMode = 0x0;
	constexpr uint32_t m_flRadius = 0x8;
	constexpr uint32_t m_flNominalRadius = 0x160;
	constexpr uint32_t m_flScale = 0x2B8;
}

namespace MaterialVariable_t
{
	constexpr uint32_t m_strVariable = 0x0;
	constexpr uint32_t m_nVariableField = 0x8;
	constexpr uint32_t m_flScale = 0xC;
}

namespace RenderProjectedMaterial_t
{
	constexpr uint32_t m_hMaterial = 0x0;
}

namespace ParticlePreviewBodyGroup_t
{
	constexpr uint32_t m_bodyGroupName = 0x0;
	constexpr uint32_t m_nValue = 0x8;
}

namespace ParticlePreviewState_t
{
	constexpr uint32_t m_previewModel = 0x0;
	constexpr uint32_t m_nModSpecificData = 0x8;
	constexpr uint32_t m_groundType = 0xC;
	constexpr uint32_t m_sequenceName = 0x10;
	constexpr uint32_t m_nFireParticleOnSequenceFrame = 0x18;
	constexpr uint32_t m_hitboxSetName = 0x20;
	constexpr uint32_t m_materialGroupName = 0x28;
	constexpr uint32_t m_vecBodyGroups = 0x30;
	constexpr uint32_t m_flPlaybackSpeed = 0x48;
	constexpr uint32_t m_flParticleSimulationRate = 0x4C;
	constexpr uint32_t m_bShouldDrawHitboxes = 0x50;
	constexpr uint32_t m_bShouldDrawAttachments = 0x51;
	constexpr uint32_t m_bShouldDrawAttachmentNames = 0x52;
	constexpr uint32_t m_bShouldDrawControlPointAxes = 0x53;
	constexpr uint32_t m_bAnimationNonLooping = 0x54;
	constexpr uint32_t m_vecPreviewGravity = 0x58;
}

namespace ParticleControlPointDriver_t
{
	constexpr uint32_t m_iControlPoint = 0x0;
	constexpr uint32_t m_iAttachType = 0x4;
	constexpr uint32_t m_attachmentName = 0x8;
	constexpr uint32_t m_vecOffset = 0x10;
	constexpr uint32_t m_angOffset = 0x1C;
	constexpr uint32_t m_entityName = 0x28;
}

namespace ParticleControlPointConfiguration_t
{
	constexpr uint32_t m_name = 0x0;
	constexpr uint32_t m_drivers = 0x8;
	constexpr uint32_t m_previewState = 0x20;
}

namespace IParticleCollection
{
}

namespace IParticleSystemDefinition
{
}

namespace CParticleVisibilityInputs
{
	constexpr uint32_t m_flCameraBias = 0x0;
	constexpr uint32_t m_nCPin = 0x4;
	constexpr uint32_t m_flProxyRadius = 0x8;
	constexpr uint32_t m_flInputMin = 0xC;
	constexpr uint32_t m_flInputMax = 0x10;
	constexpr uint32_t m_flInputPixelVisFade = 0x14;
	constexpr uint32_t m_flNoPixelVisibilityFallback = 0x18;
	constexpr uint32_t m_flDistanceInputMin = 0x1C;
	constexpr uint32_t m_flDistanceInputMax = 0x20;
	constexpr uint32_t m_flDotInputMin = 0x24;
	constexpr uint32_t m_flDotInputMax = 0x28;
	constexpr uint32_t m_bDotCPAngles = 0x2C;
	constexpr uint32_t m_bDotCameraAngles = 0x2D;
	constexpr uint32_t m_flAlphaScaleMin = 0x30;
	constexpr uint32_t m_flAlphaScaleMax = 0x34;
	constexpr uint32_t m_flRadiusScaleMin = 0x38;
	constexpr uint32_t m_flRadiusScaleMax = 0x3C;
	constexpr uint32_t m_flRadiusScaleFOVBase = 0x40;
	constexpr uint32_t m_bRightEye = 0x44;
}

namespace CPathParameters
{
	constexpr uint32_t m_nStartControlPointNumber = 0x0;
	constexpr uint32_t m_nEndControlPointNumber = 0x4;
	constexpr uint32_t m_nBulgeControl = 0x8;
	constexpr uint32_t m_flBulge = 0xC;
	constexpr uint32_t m_flMidPoint = 0x10;
	constexpr uint32_t m_vStartPointOffset = 0x14;
	constexpr uint32_t m_vMidPointOffset = 0x20;
	constexpr uint32_t m_vEndOffset = 0x2C;
}

namespace ParticleChildrenInfo_t
{
	constexpr uint32_t m_ChildRef = 0x0;
	constexpr uint32_t m_flDelay = 0x8;
	constexpr uint32_t m_bEndCap = 0xC;
	constexpr uint32_t m_bDisableChild = 0xD;
	constexpr uint32_t m_nDetailLevel = 0x10;
}

namespace ControlPointReference_t
{
	constexpr uint32_t m_controlPointNameString = 0x0;
	constexpr uint32_t m_vOffsetFromControlPoint = 0x4;
	constexpr uint32_t m_bOffsetInLocalSpace = 0x10;
}

namespace ModelReference_t
{
	constexpr uint32_t m_model = 0x0;
	constexpr uint32_t m_flRelativeProbabilityOfSpawn = 0x8;
}

namespace SequenceWeightedList_t
{
	constexpr uint32_t m_nSequence = 0x0;
	constexpr uint32_t m_flRelativeWeight = 0x4;
}

namespace CollisionGroupContext_t
{
	constexpr uint32_t m_nCollisionGroupNumber = 0x0;
}

namespace PointDefinition_t
{
	constexpr uint32_t m_nControlPoint = 0x0;
	constexpr uint32_t m_bLocalCoords = 0x4;
	constexpr uint32_t m_vOffset = 0x8;
}

namespace PointDefinitionWithTimeValues_t
{
	constexpr uint32_t m_flTimeDuration = 0x14;
}

namespace CParticleSystemDefinition
{
	constexpr uint32_t m_nBehaviorVersion = 0x8;
	constexpr uint32_t m_PreEmissionOperators = 0x10;
	constexpr uint32_t m_Emitters = 0x28;
	constexpr uint32_t m_Initializers = 0x40;
	constexpr uint32_t m_Operators = 0x58;
	constexpr uint32_t m_ForceGenerators = 0x70;
	constexpr uint32_t m_Constraints = 0x88;
	constexpr uint32_t m_Renderers = 0xA0;
	constexpr uint32_t m_Children = 0xB8;
	constexpr uint32_t m_nFirstMultipleOverride_BackwardCompat = 0x178;
	constexpr uint32_t m_nInitialParticles = 0x210;
	constexpr uint32_t m_nMaxParticles = 0x214;
	constexpr uint32_t m_nGroupID = 0x218;
	constexpr uint32_t m_BoundingBoxMin = 0x21C;
	constexpr uint32_t m_BoundingBoxMax = 0x228;
	constexpr uint32_t m_flDepthSortBias = 0x234;
	constexpr uint32_t m_nSortOverridePositionCP = 0x238;
	constexpr uint32_t m_bInfiniteBounds = 0x23C;
	constexpr uint32_t m_bEnableNamedValues = 0x23D;
	constexpr uint32_t m_NamedValueDomain = 0x240;
	constexpr uint32_t m_NamedValueLocals = 0x248;
	constexpr uint32_t m_ConstantColor = 0x260;
	constexpr uint32_t m_ConstantNormal = 0x264;
	constexpr uint32_t m_flConstantRadius = 0x270;
	constexpr uint32_t m_flConstantRotation = 0x274;
	constexpr uint32_t m_flConstantRotationSpeed = 0x278;
	constexpr uint32_t m_flConstantLifespan = 0x27C;
	constexpr uint32_t m_nConstantSequenceNumber = 0x280;
	constexpr uint32_t m_nConstantSequenceNumber1 = 0x284;
	constexpr uint32_t m_nSnapshotControlPoint = 0x288;
	constexpr uint32_t m_hSnapshot = 0x290;
	constexpr uint32_t m_pszCullReplacementName = 0x298;
	constexpr uint32_t m_flCullRadius = 0x2A0;
	constexpr uint32_t m_flCullFillCost = 0x2A4;
	constexpr uint32_t m_nCullControlPoint = 0x2A8;
	constexpr uint32_t m_hFallback = 0x2B0;
	constexpr uint32_t m_nFallbackMaxCount = 0x2B8;
	constexpr uint32_t m_hLowViolenceDef = 0x2C0;
	constexpr uint32_t m_hReferenceReplacement = 0x2C8;
	constexpr uint32_t m_flPreSimulationTime = 0x2D0;
	constexpr uint32_t m_flStopSimulationAfterTime = 0x2D4;
	constexpr uint32_t m_flMaximumTimeStep = 0x2D8;
	constexpr uint32_t m_flMaximumSimTime = 0x2DC;
	constexpr uint32_t m_flMinimumSimTime = 0x2E0;
	constexpr uint32_t m_flMinimumTimeStep = 0x2E4;
	constexpr uint32_t m_nMinimumFrames = 0x2E8;
	constexpr uint32_t m_nMinCPULevel = 0x2EC;
	constexpr uint32_t m_nMinGPULevel = 0x2F0;
	constexpr uint32_t m_flNoDrawTimeToGoToSleep = 0x2F4;
	constexpr uint32_t m_flMaxDrawDistance = 0x2F8;
	constexpr uint32_t m_flStartFadeDistance = 0x2FC;
	constexpr uint32_t m_flMaxCreationDistance = 0x300;
	constexpr uint32_t m_nAggregationMinAvailableParticles = 0x304;
	constexpr uint32_t m_flAggregateRadius = 0x308;
	constexpr uint32_t m_bShouldBatch = 0x30C;
	constexpr uint32_t m_bShouldHitboxesFallbackToRenderBounds = 0x30D;
	constexpr uint32_t m_bShouldHitboxesFallbackToSnapshot = 0x30E;
	constexpr uint32_t m_bShouldHitboxesFallbackToCollisionHulls = 0x30F;
	constexpr uint32_t m_nViewModelEffect = 0x310;
	constexpr uint32_t m_bScreenSpaceEffect = 0x314;
	constexpr uint32_t m_pszTargetLayerID = 0x318;
	constexpr uint32_t m_nSkipRenderControlPoint = 0x320;
	constexpr uint32_t m_nAllowRenderControlPoint = 0x324;
	constexpr uint32_t m_bShouldSort = 0x328;
	constexpr uint32_t m_controlPointConfigurations = 0x370;
}

namespace CParticleFunctionPreEmission
{
	constexpr uint32_t m_bRunOnce = 0x1B8;
}

namespace CParticleFunctionEmitter
{
	constexpr uint32_t m_nEmitterIndex = 0x1B8;
}

namespace CParticleFunctionInitializer
{
	constexpr uint32_t m_nAssociatedEmitterIndex = 0x1B8;
}

namespace CParticleFunctionOperator
{
}

namespace CParticleFunctionForce
{
}

namespace CParticleFunctionConstraint
{
}

namespace CParticleFunctionRenderer
{
	constexpr uint32_t VisibilityInputs = 0x1B8;
	constexpr uint32_t m_bCannotBeRefracted = 0x200;
	constexpr uint32_t m_bSkipRenderingOnMobile = 0x201;
}

namespace ParticleNamedValueSource_t
{
	constexpr uint32_t m_Name = 0x0;
	constexpr uint32_t m_IsPublic = 0x8;
	constexpr uint32_t m_ValueType = 0xC;
	constexpr uint32_t m_DefaultConfig = 0x10;
	constexpr uint32_t m_NamedConfigs = 0x48;
}

namespace CParticleFunction
{
	constexpr uint32_t m_flOpStrength = 0x8;
	constexpr uint32_t m_nOpEndCapState = 0x160;
	constexpr uint32_t m_flOpStartFadeInTime = 0x164;
	constexpr uint32_t m_flOpEndFadeInTime = 0x168;
	constexpr uint32_t m_flOpStartFadeOutTime = 0x16C;
	constexpr uint32_t m_flOpEndFadeOutTime = 0x170;
	constexpr uint32_t m_flOpFadeOscillatePeriod = 0x174;
	constexpr uint32_t m_bNormalizeToStopTime = 0x178;
	constexpr uint32_t m_flOpTimeOffsetMin = 0x17C;
	constexpr uint32_t m_flOpTimeOffsetMax = 0x180;
	constexpr uint32_t m_nOpTimeOffsetSeed = 0x184;
	constexpr uint32_t m_nOpTimeScaleSeed = 0x188;
	constexpr uint32_t m_flOpTimeScaleMin = 0x18C;
	constexpr uint32_t m_flOpTimeScaleMax = 0x190;
	constexpr uint32_t m_bDisableOperator = 0x196;
	constexpr uint32_t m_Notes = 0x198;
}

namespace TextureControls_t
{
	constexpr uint32_t m_flFinalTextureScaleU = 0x0;
	constexpr uint32_t m_flFinalTextureScaleV = 0x158;
	constexpr uint32_t m_flFinalTextureOffsetU = 0x2B0;
	constexpr uint32_t m_flFinalTextureOffsetV = 0x408;
	constexpr uint32_t m_flFinalTextureUVRotation = 0x560;
	constexpr uint32_t m_flZoomScale = 0x6B8;
	constexpr uint32_t m_flDistortion = 0x810;
	constexpr uint32_t m_bRandomizeOffsets = 0x968;
	constexpr uint32_t m_bClampUVs = 0x969;
	constexpr uint32_t m_nPerParticleBlend = 0x96C;
	constexpr uint32_t m_nPerParticleScale = 0x970;
	constexpr uint32_t m_nPerParticleOffsetU = 0x974;
	constexpr uint32_t m_nPerParticleOffsetV = 0x978;
	constexpr uint32_t m_nPerParticleRotation = 0x97C;
	constexpr uint32_t m_nPerParticleZoom = 0x980;
	constexpr uint32_t m_nPerParticleDistortion = 0x984;
}

namespace CParticleCollectionRendererFloatInput
{
}

namespace TextureGroup_t
{
	constexpr uint32_t m_bEnabled = 0x0;
	constexpr uint32_t m_bReplaceTextureWithGradient = 0x1;
	constexpr uint32_t m_hTexture = 0x8;
	constexpr uint32_t m_Gradient = 0x10;
	constexpr uint32_t m_nTextureType = 0x28;
	constexpr uint32_t m_nTextureChannels = 0x2C;
	constexpr uint32_t m_nTextureBlendMode = 0x30;
	constexpr uint32_t m_flTextureBlend = 0x38;
	constexpr uint32_t m_TextureControls = 0x190;
}

namespace CBaseRendererSource2
{
	constexpr uint32_t m_flRadiusScale = 0x208;
	constexpr uint32_t m_flAlphaScale = 0x360;
	constexpr uint32_t m_flRollScale = 0x4B8;
	constexpr uint32_t m_nAlpha2Field = 0x610;
	constexpr uint32_t m_vecColorScale = 0x618;
	constexpr uint32_t m_nColorBlendType = 0xC70;
	constexpr uint32_t m_nShaderType = 0xC74;
	constexpr uint32_t m_strShaderOverride = 0xC78;
	constexpr uint32_t m_flCenterXOffset = 0xC80;
	constexpr uint32_t m_flCenterYOffset = 0xDD8;
	constexpr uint32_t m_flBumpStrength = 0xF30;
	constexpr uint32_t m_nCropTextureOverride = 0xF34;
	constexpr uint32_t m_vecTexturesInput = 0xF38;
	constexpr uint32_t m_flAnimationRate = 0xF50;
	constexpr uint32_t m_nAnimationType = 0xF54;
	constexpr uint32_t m_bAnimateInFPS = 0xF58;
	constexpr uint32_t m_flSelfIllumAmount = 0xF60;
	constexpr uint32_t m_flDiffuseAmount = 0x10B8;
	constexpr uint32_t m_flDiffuseClamp = 0x1210;
	constexpr uint32_t m_nLightingControlPoint = 0x1368;
	constexpr uint32_t m_nSelfIllumPerParticle = 0x136C;
	constexpr uint32_t m_nOutputBlendMode = 0x1370;
	constexpr uint32_t m_bGammaCorrectVertexColors = 0x1374;
	constexpr uint32_t m_bSaturateColorPreAlphaBlend = 0x1375;
	constexpr uint32_t m_flAddSelfAmount = 0x1378;
	constexpr uint32_t m_flDesaturation = 0x14D0;
	constexpr uint32_t m_flOverbrightFactor = 0x1628;
	constexpr uint32_t m_nHSVShiftControlPoint = 0x1780;
	constexpr uint32_t m_nFogType = 0x1784;
	constexpr uint32_t m_flFogAmount = 0x1788;
	constexpr uint32_t m_bTintByFOW = 0x18E0;
	constexpr uint32_t m_bTintByGlobalLight = 0x18E1;
	constexpr uint32_t m_nPerParticleAlphaReference = 0x18E4;
	constexpr uint32_t m_nPerParticleAlphaRefWindow = 0x18E8;
	constexpr uint32_t m_nAlphaReferenceType = 0x18EC;
	constexpr uint32_t m_flAlphaReferenceSoftness = 0x18F0;
	constexpr uint32_t m_flSourceAlphaValueToMapToZero = 0x1A48;
	constexpr uint32_t m_flSourceAlphaValueToMapToOne = 0x1BA0;
	constexpr uint32_t m_bRefract = 0x1CF8;
	constexpr uint32_t m_bRefractSolid = 0x1CF9;
	constexpr uint32_t m_flRefractAmount = 0x1D00;
	constexpr uint32_t m_nRefractBlurRadius = 0x1E58;
	constexpr uint32_t m_nRefractBlurType = 0x1E5C;
	constexpr uint32_t m_bOnlyRenderInEffectsBloomPass = 0x1E60;
	constexpr uint32_t m_bOnlyRenderInEffectsWaterPass = 0x1E61;
	constexpr uint32_t m_bUseMixedResolutionRendering = 0x1E62;
	constexpr uint32_t m_bOnlyRenderInEffecsGameOverlay = 0x1E63;
	constexpr uint32_t m_stencilTestID = 0x1E64;
	constexpr uint32_t m_bStencilTestExclude = 0x1EE4;
	constexpr uint32_t m_stencilWriteID = 0x1EE5;
	constexpr uint32_t m_bWriteStencilOnDepthPass = 0x1F65;
	constexpr uint32_t m_bWriteStencilOnDepthFail = 0x1F66;
	constexpr uint32_t m_bReverseZBuffering = 0x1F67;
	constexpr uint32_t m_bDisableZBuffering = 0x1F68;
	constexpr uint32_t m_nFeatheringMode = 0x1F6C;
	constexpr uint32_t m_flFeatheringMinDist = 0x1F70;
	constexpr uint32_t m_flFeatheringMaxDist = 0x20C8;
	constexpr uint32_t m_flFeatheringFilter = 0x2220;
	constexpr uint32_t m_flDepthBias = 0x2378;
	constexpr uint32_t m_nSortMethod = 0x24D0;
	constexpr uint32_t m_bBlendFramesSeq0 = 0x24D4;
	constexpr uint32_t m_bMaxLuminanceBlendingSequence0 = 0x24D5;
}

namespace CParticleCollectionRendererVecInput
{
}

namespace C_OP_RenderSprites
{
	constexpr uint32_t m_nSequenceOverride = 0x2718;
	constexpr uint32_t m_nOrientationType = 0x2870;
	constexpr uint32_t m_nOrientationControlPoint = 0x2874;
	constexpr uint32_t m_bUseYawWithNormalAligned = 0x2878;
	constexpr uint32_t m_flMinSize = 0x2880;
	constexpr uint32_t m_flMaxSize = 0x29D8;
	constexpr uint32_t m_flAlphaAdjustWithSizeAdjust = 0x2B30;
	constexpr uint32_t m_flStartFadeSize = 0x2C88;
	constexpr uint32_t m_flEndFadeSize = 0x2DE0;
	constexpr uint32_t m_flStartFadeDot = 0x2F38;
	constexpr uint32_t m_flEndFadeDot = 0x2F3C;
	constexpr uint32_t m_bDistanceAlpha = 0x2F40;
	constexpr uint32_t m_bSoftEdges = 0x2F41;
	constexpr uint32_t m_flEdgeSoftnessStart = 0x2F44;
	constexpr uint32_t m_flEdgeSoftnessEnd = 0x2F48;
	constexpr uint32_t m_bOutline = 0x2F4C;
	constexpr uint32_t m_OutlineColor = 0x2F4D;
	constexpr uint32_t m_nOutlineAlpha = 0x2F54;
	constexpr uint32_t m_flOutlineStart0 = 0x2F58;
	constexpr uint32_t m_flOutlineStart1 = 0x2F5C;
	constexpr uint32_t m_flOutlineEnd0 = 0x2F60;
	constexpr uint32_t m_flOutlineEnd1 = 0x2F64;
	constexpr uint32_t m_nLightingMode = 0x2F68;
	constexpr uint32_t m_flLightingTessellation = 0x2F70;
	constexpr uint32_t m_flLightingDirectionality = 0x30C8;
	constexpr uint32_t m_bParticleShadows = 0x3220;
	constexpr uint32_t m_flShadowDensity = 0x3224;
	constexpr uint32_t m_replicationParameters = 0x3228;
}

namespace CReplicationParameters
{
	constexpr uint32_t m_nReplicationMode = 0x0;
	constexpr uint32_t m_bScaleChildParticleRadii = 0x4;
	constexpr uint32_t m_flMinRandomRadiusScale = 0x8;
	constexpr uint32_t m_flMaxRandomRadiusScale = 0x160;
	constexpr uint32_t m_vMinRandomDisplacement = 0x2B8;
	constexpr uint32_t m_vMaxRandomDisplacement = 0x910;
	constexpr uint32_t m_flModellingScale = 0xF68;
}

namespace FloatInputMaterialVariable_t
{
	constexpr uint32_t m_strVariable = 0x0;
	constexpr uint32_t m_flInput = 0x8;
}

namespace VecInputMaterialVariable_t
{
	constexpr uint32_t m_strVariable = 0x0;
	constexpr uint32_t m_vecInput = 0x8;
}

namespace C_OP_RenderCables
{
	constexpr uint32_t m_flRadiusScale = 0x208;
	constexpr uint32_t m_flAlphaScale = 0x360;
	constexpr uint32_t m_vecColorScale = 0x4B8;
	constexpr uint32_t m_nColorBlendType = 0xB10;
	constexpr uint32_t m_hMaterial = 0xB18;
	constexpr uint32_t m_nTextureRepetitionMode = 0xB20;
	constexpr uint32_t m_flTextureRepeatsPerSegment = 0xB28;
	constexpr uint32_t m_flTextureRepeatsCircumference = 0xC80;
	constexpr uint32_t m_flColorMapOffsetV = 0xDD8;
	constexpr uint32_t m_flColorMapOffsetU = 0xF30;
	constexpr uint32_t m_flNormalMapOffsetV = 0x1088;
	constexpr uint32_t m_flNormalMapOffsetU = 0x11E0;
	constexpr uint32_t m_bDrawCableCaps = 0x1338;
	constexpr uint32_t m_flCapRoundness = 0x133C;
	constexpr uint32_t m_flCapOffsetAmount = 0x1340;
	constexpr uint32_t m_flTessScale = 0x1344;
	constexpr uint32_t m_nMinTesselation = 0x1348;
	constexpr uint32_t m_nMaxTesselation = 0x134C;
	constexpr uint32_t m_nRoundness = 0x1350;
	constexpr uint32_t m_LightingTransform = 0x1358;
	constexpr uint32_t m_MaterialFloatVars = 0x13C0;
	constexpr uint32_t m_MaterialVecVars = 0x13F0;
}

namespace CParticleTransformInput
{
	constexpr uint32_t m_nType = 0x10;
	constexpr uint32_t m_NamedValue = 0x18;
	constexpr uint32_t m_bFollowNamedValue = 0x58;
	constexpr uint32_t m_bSupportsDisabled = 0x59;
	constexpr uint32_t m_bUseOrientation = 0x5A;
	constexpr uint32_t m_nControlPoint = 0x5C;
	constexpr uint32_t m_nControlPointRangeMax = 0x60;
	constexpr uint32_t m_flEndCPGrowthTime = 0x64;
}

namespace CParticleInput
{
}

namespace CParticleFloatInput
{
	constexpr uint32_t m_nType = 0x10;
	constexpr uint32_t m_nMapType = 0x14;
	constexpr uint32_t m_flLiteralValue = 0x18;
	constexpr uint32_t m_NamedValue = 0x20;
	constexpr uint32_t m_nControlPoint = 0x60;
	constexpr uint32_t m_nScalarAttribute = 0x64;
	constexpr uint32_t m_nVectorAttribute = 0x68;
	constexpr uint32_t m_nVectorComponent = 0x6C;
	constexpr uint32_t m_flRandomMin = 0x70;
	constexpr uint32_t m_flRandomMax = 0x74;
	constexpr uint32_t m_bHasRandomSignFlip = 0x78;
	constexpr uint32_t m_nRandomSeed = 0x7C;
	constexpr uint32_t m_nRandomMode = 0x80;
	constexpr uint32_t m_flLOD0 = 0x88;
	constexpr uint32_t m_flLOD1 = 0x8C;
	constexpr uint32_t m_flLOD2 = 0x90;
	constexpr uint32_t m_flLOD3 = 0x94;
	constexpr uint32_t m_nNoiseInputVectorAttribute = 0x98;
	constexpr uint32_t m_flNoiseOutputMin = 0x9C;
	constexpr uint32_t m_flNoiseOutputMax = 0xA0;
	constexpr uint32_t m_flNoiseScale = 0xA4;
	constexpr uint32_t m_vecNoiseOffsetRate = 0xA8;
	constexpr uint32_t m_flNoiseOffset = 0xB4;
	constexpr uint32_t m_nNoiseOctaves = 0xB8;
	constexpr uint32_t m_nNoiseTurbulence = 0xBC;
	constexpr uint32_t m_nNoiseType = 0xC0;
	constexpr uint32_t m_nNoiseModifier = 0xC4;
	constexpr uint32_t m_flNoiseTurbulenceScale = 0xC8;
	constexpr uint32_t m_flNoiseTurbulenceMix = 0xCC;
	constexpr uint32_t m_flNoiseImgPreviewScale = 0xD0;
	constexpr uint32_t m_bNoiseImgPreviewLive = 0xD4;
	constexpr uint32_t m_flNoCameraFallback = 0xE0;
	constexpr uint32_t m_bUseBoundsCenter = 0xE4;
	constexpr uint32_t m_nInputMode = 0xE8;
	constexpr uint32_t m_flMultFactor = 0xEC;
	constexpr uint32_t m_flInput0 = 0xF0;
	constexpr uint32_t m_flInput1 = 0xF4;
	constexpr uint32_t m_flOutput0 = 0xF8;
	constexpr uint32_t m_flOutput1 = 0xFC;
	constexpr uint32_t m_flNotchedRangeMin = 0x100;
	constexpr uint32_t m_flNotchedRangeMax = 0x104;
	constexpr uint32_t m_flNotchedOutputOutside = 0x108;
	constexpr uint32_t m_flNotchedOutputInside = 0x10C;
	constexpr uint32_t m_nBiasType = 0x110;
	constexpr uint32_t m_flBiasParameter = 0x114;
	constexpr uint32_t m_Curve = 0x118;
}

namespace CParticleRemapFloatInput
{
}

namespace CParticleModelInput
{
	constexpr uint32_t m_nType = 0x10;
	constexpr uint32_t m_NamedValue = 0x18;
	constexpr uint32_t m_nControlPoint = 0x58;
}

namespace CParticleVecInput
{
	constexpr uint32_t m_nType = 0x10;
	constexpr uint32_t m_vLiteralValue = 0x14;
	constexpr uint32_t m_LiteralColor = 0x20;
	constexpr uint32_t m_NamedValue = 0x28;
	constexpr uint32_t m_bFollowNamedValue = 0x68;
	constexpr uint32_t m_nVectorAttribute = 0x6C;
	constexpr uint32_t m_vVectorAttributeScale = 0x70;
	constexpr uint32_t m_nControlPoint = 0x7C;
	constexpr uint32_t m_nDeltaControlPoint = 0x80;
	constexpr uint32_t m_vCPValueScale = 0x84;
	constexpr uint32_t m_vCPRelativePosition = 0x90;
	constexpr uint32_t m_vCPRelativeDir = 0x9C;
	constexpr uint32_t m_FloatComponentX = 0xA8;
	constexpr uint32_t m_FloatComponentY = 0x200;
	constexpr uint32_t m_FloatComponentZ = 0x358;
	constexpr uint32_t m_FloatInterp = 0x4B0;
	constexpr uint32_t m_flInterpInput0 = 0x608;
	constexpr uint32_t m_flInterpInput1 = 0x60C;
	constexpr uint32_t m_vInterpOutput0 = 0x610;
	constexpr uint32_t m_vInterpOutput1 = 0x61C;
	constexpr uint32_t m_Gradient = 0x628;
	constexpr uint32_t m_vRandomMin = 0x640;
	constexpr uint32_t m_vRandomMax = 0x64C;
}

namespace PARTICLE_EHANDLE__
{
	constexpr uint32_t unused = 0x0;
}

namespace PARTICLE_WORLD_HANDLE__
{
	constexpr uint32_t unused = 0x0;
}

namespace IParticleEffect
{
}

namespace CParticleCollectionBindingInstance
{
}

namespace CParticleBindingRealPulse
{
}

namespace ParticleNamedValueConfiguration_t
{
	constexpr uint32_t m_ConfigName = 0x0;
	constexpr uint32_t m_ConfigValue = 0x8;
	constexpr uint32_t m_iAttachType = 0x18;
	constexpr uint32_t m_BoundEntityPath = 0x20;
	constexpr uint32_t m_strEntityScope = 0x28;
	constexpr uint32_t m_strAttachmentName = 0x30;
}

namespace CParticleVariableRef
{
	constexpr uint32_t m_variableName = 0x0;
	constexpr uint32_t m_variableType = 0x38;
}

namespace CParticleProperty
{
}

namespace CNewParticleEffect
{
	constexpr uint32_t m_pNext = 0x10;
	constexpr uint32_t m_pPrev = 0x18;
	constexpr uint32_t m_pParticles = 0x20;
	constexpr uint32_t m_pDebugName = 0x28;
	constexpr uint32_t m_bDontRemove = 0x0;
	constexpr uint32_t m_bRemove = 0x0;
	constexpr uint32_t m_bNeedsBBoxUpdate = 0x0;
	constexpr uint32_t m_bIsFirstFrame = 0x0;
	constexpr uint32_t m_bAutoUpdateBBox = 0x0;
	constexpr uint32_t m_bAllocated = 0x0;
	constexpr uint32_t m_bSimulate = 0x0;
	constexpr uint32_t m_bShouldPerformCullCheck = 0x0;
	constexpr uint32_t m_bForceNoDraw = 0x0;
	constexpr uint32_t m_bShouldSave = 0x0;
	constexpr uint32_t m_bDisableAggregation = 0x0;
	constexpr uint32_t m_bShouldSimulateDuringGamePaused = 0x0;
	constexpr uint32_t m_bShouldCheckFoW = 0x0;
	constexpr uint32_t m_vSortOrigin = 0x40;
	constexpr uint32_t m_flScale = 0x4C;
	constexpr uint32_t m_hOwner = 0x50;
	constexpr uint32_t m_pOwningParticleProperty = 0x58;
	constexpr uint32_t m_flFreezeTransitionStart = 0x70;
	constexpr uint32_t m_flFreezeTransitionDuration = 0x74;
	constexpr uint32_t m_flFreezeTransitionOverride = 0x78;
	constexpr uint32_t m_bFreezeTransitionActive = 0x7C;
	constexpr uint32_t m_bFreezeTargetState = 0x7D;
	constexpr uint32_t m_bCanFreeze = 0x7E;
	constexpr uint32_t m_LastMin = 0x80;
	constexpr uint32_t m_LastMax = 0x8C;
	constexpr uint32_t m_nSplitScreenUser = 0x98;
	constexpr uint32_t m_vecAggregationCenter = 0x9C;
	constexpr uint32_t m_RefCount = 0xC0;
}

namespace C_OP_ConstrainDistance
{
	constexpr uint32_t m_fMinDistance = 0x1B8;
	constexpr uint32_t m_fMaxDistance = 0x310;
	constexpr uint32_t m_nControlPointNumber = 0x468;
	constexpr uint32_t m_CenterOffset = 0x46C;
	constexpr uint32_t m_bGlobalCenter = 0x478;
}

namespace C_OP_CollideWithSelf
{
	constexpr uint32_t m_flRadiusScale = 0x1B8;
	constexpr uint32_t m_flMinimumSpeed = 0x310;
}

namespace C_OP_CollideWithParentParticles
{
	constexpr uint32_t m_flParentRadiusScale = 0x1B8;
	constexpr uint32_t m_flRadiusScale = 0x310;
}

namespace C_OP_ConstrainDistanceToPath
{
	constexpr uint32_t m_fMinDistance = 0x1B8;
	constexpr uint32_t m_flMaxDistance0 = 0x1BC;
	constexpr uint32_t m_flMaxDistanceMid = 0x1C0;
	constexpr uint32_t m_flMaxDistance1 = 0x1C4;
	constexpr uint32_t m_PathParameters = 0x1D0;
	constexpr uint32_t m_flTravelTime = 0x210;
	constexpr uint32_t m_nFieldScale = 0x214;
	constexpr uint32_t m_nManualTField = 0x218;
}

namespace C_OP_ConstrainDistanceToUserSpecifiedPath
{
	constexpr uint32_t m_fMinDistance = 0x1B8;
	constexpr uint32_t m_flMaxDistance = 0x1BC;
	constexpr uint32_t m_flTimeScale = 0x1C0;
	constexpr uint32_t m_bLoopedPath = 0x1C4;
	constexpr uint32_t m_pointList = 0x1C8;
}

namespace C_OP_PlanarConstraint
{
	constexpr uint32_t m_PointOnPlane = 0x1B8;
	constexpr uint32_t m_PlaneNormal = 0x1C4;
	constexpr uint32_t m_nControlPointNumber = 0x1D0;
	constexpr uint32_t m_bGlobalOrigin = 0x1D4;
	constexpr uint32_t m_bGlobalNormal = 0x1D5;
	constexpr uint32_t m_flRadiusScale = 0x1D8;
	constexpr uint32_t m_flMaximumDistanceToCP = 0x330;
	constexpr uint32_t m_bUseOldCode = 0x488;
}

namespace C_OP_WorldCollideConstraint
{
}

namespace C_OP_WorldTraceConstraint
{
	constexpr uint32_t m_nCP = 0x1B8;
	constexpr uint32_t m_vecCpOffset = 0x1BC;
	constexpr uint32_t m_nCollisionMode = 0x1C8;
	constexpr uint32_t m_nCollisionModeMin = 0x1CC;
	constexpr uint32_t m_nTraceSet = 0x1D0;
	constexpr uint32_t m_CollisionGroupName = 0x1D4;
	constexpr uint32_t m_bWorldOnly = 0x254;
	constexpr uint32_t m_bBrushOnly = 0x255;
	constexpr uint32_t m_bIncludeWater = 0x256;
	constexpr uint32_t m_nIgnoreCP = 0x258;
	constexpr uint32_t m_flCpMovementTolerance = 0x25C;
	constexpr uint32_t m_flRetestRate = 0x260;
	constexpr uint32_t m_flTraceTolerance = 0x264;
	constexpr uint32_t m_flCollisionConfirmationSpeed = 0x268;
	constexpr uint32_t m_nMaxTracesPerFrame = 0x26C;
	constexpr uint32_t m_flRadiusScale = 0x270;
	constexpr uint32_t m_flBounceAmount = 0x3C8;
	constexpr uint32_t m_flSlideAmount = 0x520;
	constexpr uint32_t m_flRandomDirScale = 0x678;
	constexpr uint32_t m_bDecayBounce = 0x7D0;
	constexpr uint32_t m_bKillonContact = 0x7D1;
	constexpr uint32_t m_flMinSpeed = 0x7D4;
	constexpr uint32_t m_bSetNormal = 0x7D8;
	constexpr uint32_t m_nStickOnCollisionField = 0x7DC;
	constexpr uint32_t m_flStopSpeed = 0x7E0;
	constexpr uint32_t m_nEntityStickDataField = 0x938;
	constexpr uint32_t m_nEntityStickNormalField = 0x93C;
}

namespace C_OP_BoxConstraint
{
	constexpr uint32_t m_vecMin = 0x1B8;
	constexpr uint32_t m_vecMax = 0x810;
	constexpr uint32_t m_nCP = 0xE68;
	constexpr uint32_t m_bLocalSpace = 0xE6C;
	constexpr uint32_t m_bAccountForRadius = 0xE6D;
}

namespace C_OP_ShapeMatchingConstraint
{
	constexpr uint32_t m_flShapeRestorationTime = 0x1B8;
}

namespace C_OP_RopeSpringConstraint
{
	constexpr uint32_t m_flRestLength = 0x1B8;
	constexpr uint32_t m_flMinDistance = 0x310;
	constexpr uint32_t m_flMaxDistance = 0x468;
	constexpr uint32_t m_flAdjustmentScale = 0x5C0;
	constexpr uint32_t m_flInitialRestingLength = 0x5C8;
}

namespace C_OP_SpringToVectorConstraint
{
	constexpr uint32_t m_flRestLength = 0x1B8;
	constexpr uint32_t m_flMinDistance = 0x310;
	constexpr uint32_t m_flMaxDistance = 0x468;
	constexpr uint32_t m_flRestingLength = 0x5C0;
	constexpr uint32_t m_vecAnchorVector = 0x718;
}

namespace C_OP_ConstrainLineLength
{
	constexpr uint32_t m_flMinDistance = 0x1B8;
	constexpr uint32_t m_flMaxDistance = 0x1BC;
}

namespace C_INIT_RingWave
{
	constexpr uint32_t m_TransformInput = 0x1C0;
	constexpr uint32_t m_flParticlesPerOrbit = 0x228;
	constexpr uint32_t m_flInitialRadius = 0x380;
	constexpr uint32_t m_flThickness = 0x4D8;
	constexpr uint32_t m_flInitialSpeedMin = 0x630;
	constexpr uint32_t m_flInitialSpeedMax = 0x788;
	constexpr uint32_t m_flRoll = 0x8E0;
	constexpr uint32_t m_flPitch = 0xA38;
	constexpr uint32_t m_flYaw = 0xB90;
	constexpr uint32_t m_bEvenDistribution = 0xCE8;
	constexpr uint32_t m_bXYVelocityOnly = 0xCE9;
}

namespace C_INIT_CreateSpiralSphere
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
	constexpr uint32_t m_nOverrideCP = 0x1C4;
	constexpr uint32_t m_nDensity = 0x1C8;
	constexpr uint32_t m_flInitialRadius = 0x1CC;
	constexpr uint32_t m_flInitialSpeedMin = 0x1D0;
	constexpr uint32_t m_flInitialSpeedMax = 0x1D4;
	constexpr uint32_t m_bUseParticleCount = 0x1D8;
}

namespace C_INIT_CreateInEpitrochoid
{
	constexpr uint32_t m_nComponent1 = 0x1C0;
	constexpr uint32_t m_nComponent2 = 0x1C4;
	constexpr uint32_t m_TransformInput = 0x1C8;
	constexpr uint32_t m_flParticleDensity = 0x230;
	constexpr uint32_t m_flOffset = 0x388;
	constexpr uint32_t m_flRadius1 = 0x4E0;
	constexpr uint32_t m_flRadius2 = 0x638;
	constexpr uint32_t m_bUseCount = 0x790;
	constexpr uint32_t m_bUseLocalCoords = 0x791;
	constexpr uint32_t m_bOffsetExistingPos = 0x792;
}

namespace C_INIT_CreatePhyllotaxis
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
	constexpr uint32_t m_nScaleCP = 0x1C4;
	constexpr uint32_t m_nComponent = 0x1C8;
	constexpr uint32_t m_fRadCentCore = 0x1CC;
	constexpr uint32_t m_fRadPerPoint = 0x1D0;
	constexpr uint32_t m_fRadPerPointTo = 0x1D4;
	constexpr uint32_t m_fpointAngle = 0x1D8;
	constexpr uint32_t m_fsizeOverall = 0x1DC;
	constexpr uint32_t m_fRadBias = 0x1E0;
	constexpr uint32_t m_fMinRad = 0x1E4;
	constexpr uint32_t m_fDistBias = 0x1E8;
	constexpr uint32_t m_bUseLocalCoords = 0x1EC;
	constexpr uint32_t m_bUseWithContEmit = 0x1ED;
	constexpr uint32_t m_bUseOrigRadius = 0x1EE;
}

namespace C_INIT_CreateOnModel
{
	constexpr uint32_t m_modelInput = 0x1C0;
	constexpr uint32_t m_transformInput = 0x220;
	constexpr uint32_t m_nForceInModel = 0x288;
	constexpr uint32_t m_bScaleToVolume = 0x28C;
	constexpr uint32_t m_bEvenDistribution = 0x28D;
	constexpr uint32_t m_nDesiredHitbox = 0x290;
	constexpr uint32_t m_nHitboxValueFromControlPointIndex = 0x3E8;
	constexpr uint32_t m_vecHitBoxScale = 0x3F0;
	constexpr uint32_t m_flBoneVelocity = 0xA48;
	constexpr uint32_t m_flMaxBoneVelocity = 0xA4C;
	constexpr uint32_t m_vecDirectionBias = 0xA50;
	constexpr uint32_t m_HitboxSetName = 0x10A8;
	constexpr uint32_t m_bLocalCoords = 0x1128;
	constexpr uint32_t m_bUseBones = 0x1129;
	constexpr uint32_t m_bUseMesh = 0x112A;
	constexpr uint32_t m_flShellSize = 0x1130;
}

namespace C_INIT_CreateOnModelAtHeight
{
	constexpr uint32_t m_bUseBones = 0x1C0;
	constexpr uint32_t m_bForceZ = 0x1C1;
	constexpr uint32_t m_nControlPointNumber = 0x1C4;
	constexpr uint32_t m_nHeightCP = 0x1C8;
	constexpr uint32_t m_bUseWaterHeight = 0x1CC;
	constexpr uint32_t m_flDesiredHeight = 0x1D0;
	constexpr uint32_t m_vecHitBoxScale = 0x328;
	constexpr uint32_t m_vecDirectionBias = 0x980;
	constexpr uint32_t m_nBiasType = 0xFD8;
	constexpr uint32_t m_bLocalCoords = 0xFDC;
	constexpr uint32_t m_bPreferMovingBoxes = 0xFDD;
	constexpr uint32_t m_HitboxSetName = 0xFDE;
	constexpr uint32_t m_flHitboxVelocityScale = 0x1060;
	constexpr uint32_t m_flMaxBoneVelocity = 0x11B8;
}

namespace C_INIT_SetHitboxToClosest
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
	constexpr uint32_t m_nDesiredHitbox = 0x1C4;
	constexpr uint32_t m_vecHitBoxScale = 0x1C8;
	constexpr uint32_t m_HitboxSetName = 0x820;
	constexpr uint32_t m_bUseBones = 0x8A0;
	constexpr uint32_t m_bUseClosestPointOnHitbox = 0x8A1;
	constexpr uint32_t m_nTestType = 0x8A4;
	constexpr uint32_t m_flHybridRatio = 0x8A8;
	constexpr uint32_t m_bUpdatePosition = 0xA00;
}

namespace C_INIT_SetHitboxToModel
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
	constexpr uint32_t m_nForceInModel = 0x1C4;
	constexpr uint32_t m_bEvenDistribution = 0x1C8;
	constexpr uint32_t m_nDesiredHitbox = 0x1CC;
	constexpr uint32_t m_vecHitBoxScale = 0x1D0;
	constexpr uint32_t m_vecDirectionBias = 0x828;
	constexpr uint32_t m_bMaintainHitbox = 0x834;
	constexpr uint32_t m_bUseBones = 0x835;
	constexpr uint32_t m_HitboxSetName = 0x836;
	constexpr uint32_t m_flShellSize = 0x8B8;
}

namespace C_INIT_CreateWithinSphereTransform
{
	constexpr uint32_t m_fRadiusMin = 0x1C0;
	constexpr uint32_t m_fRadiusMax = 0x318;
	constexpr uint32_t m_vecDistanceBias = 0x470;
	constexpr uint32_t m_vecDistanceBiasAbs = 0xAC8;
	constexpr uint32_t m_TransformInput = 0xAD8;
	constexpr uint32_t m_fSpeedMin = 0xB40;
	constexpr uint32_t m_fSpeedMax = 0xC98;
	constexpr uint32_t m_fSpeedRandExp = 0xDF0;
	constexpr uint32_t m_bLocalCoords = 0xDF4;
	constexpr uint32_t m_flEndCPGrowthTime = 0xDF8;
	constexpr uint32_t m_LocalCoordinateSystemSpeedMin = 0xE00;
	constexpr uint32_t m_LocalCoordinateSystemSpeedMax = 0x1458;
	constexpr uint32_t m_nFieldOutput = 0x1AB0;
	constexpr uint32_t m_nFieldVelocity = 0x1AB4;
}

namespace C_INIT_CreateWithinBox
{
	constexpr uint32_t m_vecMin = 0x1C0;
	constexpr uint32_t m_vecMax = 0x818;
	constexpr uint32_t m_nControlPointNumber = 0xE70;
	constexpr uint32_t m_bLocalSpace = 0xE74;
	constexpr uint32_t m_randomnessParameters = 0xE78;
}

namespace C_INIT_CreateOnGrid
{
	constexpr uint32_t m_nXCount = 0x1C0;
	constexpr uint32_t m_nYCount = 0x318;
	constexpr uint32_t m_nZCount = 0x470;
	constexpr uint32_t m_nXSpacing = 0x5C8;
	constexpr uint32_t m_nYSpacing = 0x720;
	constexpr uint32_t m_nZSpacing = 0x878;
	constexpr uint32_t m_nControlPointNumber = 0x9D0;
	constexpr uint32_t m_bLocalSpace = 0x9D4;
	constexpr uint32_t m_bCenter = 0x9D5;
	constexpr uint32_t m_bHollow = 0x9D6;
}

namespace C_INIT_PositionOffset
{
	constexpr uint32_t m_OffsetMin = 0x1C0;
	constexpr uint32_t m_OffsetMax = 0x818;
	constexpr uint32_t m_TransformInput = 0xE70;
	constexpr uint32_t m_bLocalCoords = 0xED8;
	constexpr uint32_t m_bProportional = 0xED9;
	constexpr uint32_t m_randomnessParameters = 0xEDC;
}

namespace C_INIT_PositionOffsetToCP
{
	constexpr uint32_t m_nControlPointNumberStart = 0x1C0;
	constexpr uint32_t m_nControlPointNumberEnd = 0x1C4;
	constexpr uint32_t m_bLocalCoords = 0x1C8;
}

namespace C_INIT_PositionPlaceOnGround
{
	constexpr uint32_t m_flOffset = 0x1C0;
	constexpr uint32_t m_flMaxTraceLength = 0x318;
	constexpr uint32_t m_CollisionGroupName = 0x470;
	constexpr uint32_t m_nTraceSet = 0x4F0;
	constexpr uint32_t m_nTraceMissBehavior = 0x500;
	constexpr uint32_t m_bIncludeWater = 0x504;
	constexpr uint32_t m_bSetNormal = 0x505;
	constexpr uint32_t m_bSetPXYZOnly = 0x506;
	constexpr uint32_t m_bTraceAlongNormal = 0x507;
	constexpr uint32_t m_bOffsetonColOnly = 0x508;
	constexpr uint32_t m_flOffsetByRadiusFactor = 0x50C;
	constexpr uint32_t m_nPreserveOffsetCP = 0x510;
	constexpr uint32_t m_nIgnoreCP = 0x514;
}

namespace C_INIT_VelocityFromNormal
{
	constexpr uint32_t m_fSpeedMin = 0x1C0;
	constexpr uint32_t m_fSpeedMax = 0x1C4;
	constexpr uint32_t m_bIgnoreDt = 0x1C8;
}

namespace C_INIT_VelocityRandom
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
	constexpr uint32_t m_fSpeedMin = 0x1C8;
	constexpr uint32_t m_fSpeedMax = 0x320;
	constexpr uint32_t m_LocalCoordinateSystemSpeedMin = 0x478;
	constexpr uint32_t m_LocalCoordinateSystemSpeedMax = 0xAD0;
	constexpr uint32_t m_bIgnoreDT = 0x1128;
	constexpr uint32_t m_randomnessParameters = 0x112C;
}

namespace C_INIT_InitialVelocityNoise
{
	constexpr uint32_t m_vecAbsVal = 0x1C0;
	constexpr uint32_t m_vecAbsValInv = 0x1CC;
	constexpr uint32_t m_vecOffsetLoc = 0x1D8;
	constexpr uint32_t m_flOffset = 0x830;
	constexpr uint32_t m_vecOutputMin = 0x988;
	constexpr uint32_t m_vecOutputMax = 0xFE0;
	constexpr uint32_t m_flNoiseScale = 0x1638;
	constexpr uint32_t m_flNoiseScaleLoc = 0x1790;
	constexpr uint32_t m_TransformInput = 0x18E8;
	constexpr uint32_t m_bIgnoreDt = 0x1950;
}

namespace C_INIT_InitialVelocityFromHitbox
{
	constexpr uint32_t m_flVelocityMin = 0x1C0;
	constexpr uint32_t m_flVelocityMax = 0x1C4;
	constexpr uint32_t m_nControlPointNumber = 0x1C8;
	constexpr uint32_t m_HitboxSetName = 0x1CC;
	constexpr uint32_t m_bUseBones = 0x24C;
}

namespace C_INIT_VelocityRadialRandom
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
	constexpr uint32_t m_fSpeedMin = 0x1C4;
	constexpr uint32_t m_fSpeedMax = 0x1C8;
	constexpr uint32_t m_vecLocalCoordinateSystemSpeedScale = 0x1CC;
	constexpr uint32_t m_bIgnoreDelta = 0x1D9;
}

namespace C_INIT_RandomLifeTime
{
	constexpr uint32_t m_fLifetimeMin = 0x1C0;
	constexpr uint32_t m_fLifetimeMax = 0x1C4;
	constexpr uint32_t m_fLifetimeRandExponent = 0x1C8;
}

namespace C_INIT_RandomScalar
{
	constexpr uint32_t m_flMin = 0x1C0;
	constexpr uint32_t m_flMax = 0x1C4;
	constexpr uint32_t m_flExponent = 0x1C8;
	constexpr uint32_t m_nFieldOutput = 0x1CC;
}

namespace C_INIT_RandomVector
{
	constexpr uint32_t m_vecMin = 0x1C0;
	constexpr uint32_t m_vecMax = 0x1CC;
	constexpr uint32_t m_nFieldOutput = 0x1D8;
	constexpr uint32_t m_randomnessParameters = 0x1DC;
}

namespace C_INIT_RandomVectorComponent
{
	constexpr uint32_t m_flMin = 0x1C0;
	constexpr uint32_t m_flMax = 0x1C4;
	constexpr uint32_t m_nFieldOutput = 0x1C8;
	constexpr uint32_t m_nComponent = 0x1CC;
}

namespace C_INIT_AddVectorToVector
{
	constexpr uint32_t m_vecScale = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1CC;
	constexpr uint32_t m_nFieldInput = 0x1D0;
	constexpr uint32_t m_vOffsetMin = 0x1D4;
	constexpr uint32_t m_vOffsetMax = 0x1E0;
	constexpr uint32_t m_randomnessParameters = 0x1EC;
}

namespace C_INIT_RandomAlphaWindowThreshold
{
	constexpr uint32_t m_flMin = 0x1C0;
	constexpr uint32_t m_flMax = 0x1C4;
	constexpr uint32_t m_flExponent = 0x1C8;
}

namespace C_INIT_RandomRadius
{
	constexpr uint32_t m_flRadiusMin = 0x1C0;
	constexpr uint32_t m_flRadiusMax = 0x1C4;
	constexpr uint32_t m_flRadiusRandExponent = 0x1C8;
}

namespace C_INIT_RandomAlpha
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_nAlphaMin = 0x1C4;
	constexpr uint32_t m_nAlphaMax = 0x1C8;
	constexpr uint32_t m_flAlphaRandExponent = 0x1D4;
}

namespace CGeneralRandomRotation
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_flDegrees = 0x1C4;
	constexpr uint32_t m_flDegreesMin = 0x1C8;
	constexpr uint32_t m_flDegreesMax = 0x1CC;
	constexpr uint32_t m_flRotationRandExponent = 0x1D0;
	constexpr uint32_t m_bRandomlyFlipDirection = 0x1D4;
}

namespace C_INIT_RandomRotation
{
}

namespace C_INIT_Orient2DRelToCP
{
	constexpr uint32_t m_nCP = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_flRotOffset = 0x1C8;
}

namespace C_INIT_RandomRotationSpeed
{
}

namespace C_INIT_RandomYaw
{
}

namespace C_INIT_RandomColor
{
	constexpr uint32_t m_ColorMin = 0x1DC;
	constexpr uint32_t m_ColorMax = 0x1E0;
	constexpr uint32_t m_TintMin = 0x1E4;
	constexpr uint32_t m_TintMax = 0x1E8;
	constexpr uint32_t m_flTintPerc = 0x1EC;
	constexpr uint32_t m_flUpdateThreshold = 0x1F0;
	constexpr uint32_t m_nTintCP = 0x1F4;
	constexpr uint32_t m_nFieldOutput = 0x1F8;
	constexpr uint32_t m_nTintBlendMode = 0x1FC;
	constexpr uint32_t m_flLightAmplification = 0x200;
}

namespace C_INIT_ColorLitPerParticle
{
	constexpr uint32_t m_ColorMin = 0x1D8;
	constexpr uint32_t m_ColorMax = 0x1DC;
	constexpr uint32_t m_TintMin = 0x1E0;
	constexpr uint32_t m_TintMax = 0x1E4;
	constexpr uint32_t m_flTintPerc = 0x1E8;
	constexpr uint32_t m_nTintBlendMode = 0x1EC;
	constexpr uint32_t m_flLightAmplification = 0x1F0;
}

namespace C_INIT_RandomTrailLength
{
	constexpr uint32_t m_flMinLength = 0x1C0;
	constexpr uint32_t m_flMaxLength = 0x1C4;
	constexpr uint32_t m_flLengthRandExponent = 0x1C8;
}

namespace C_INIT_RandomSequence
{
	constexpr uint32_t m_nSequenceMin = 0x1C0;
	constexpr uint32_t m_nSequenceMax = 0x1C4;
	constexpr uint32_t m_bShuffle = 0x1C8;
	constexpr uint32_t m_bLinear = 0x1C9;
	constexpr uint32_t m_WeightedList = 0x1D0;
}

namespace C_INIT_SequenceFromCP
{
	constexpr uint32_t m_bKillUnused = 0x1C0;
	constexpr uint32_t m_bRadiusScale = 0x1C1;
	constexpr uint32_t m_nCP = 0x1C4;
	constexpr uint32_t m_vecOffset = 0x1C8;
}

namespace C_INIT_RandomModelSequence
{
	constexpr uint32_t m_ActivityName = 0x1C0;
	constexpr uint32_t m_SequenceName = 0x2C0;
	constexpr uint32_t m_hModel = 0x3C0;
}

namespace C_INIT_ScaleVelocity
{
	constexpr uint32_t m_vecScale = 0x1C0;
}

namespace C_INIT_PositionWarp
{
	constexpr uint32_t m_vecWarpMin = 0x1C0;
	constexpr uint32_t m_vecWarpMax = 0x818;
	constexpr uint32_t m_nScaleControlPointNumber = 0xE70;
	constexpr uint32_t m_nControlPointNumber = 0xE74;
	constexpr uint32_t m_nRadiusComponent = 0xE78;
	constexpr uint32_t m_flWarpTime = 0xE7C;
	constexpr uint32_t m_flWarpStartTime = 0xE80;
	constexpr uint32_t m_flPrevPosScale = 0xE84;
	constexpr uint32_t m_bInvertWarp = 0xE88;
	constexpr uint32_t m_bUseCount = 0xE89;
}

namespace C_INIT_PositionWarpScalar
{
	constexpr uint32_t m_vecWarpMin = 0x1C0;
	constexpr uint32_t m_vecWarpMax = 0x1CC;
	constexpr uint32_t m_InputValue = 0x1D8;
	constexpr uint32_t m_flPrevPosScale = 0x330;
	constexpr uint32_t m_nScaleControlPointNumber = 0x334;
	constexpr uint32_t m_nControlPointNumber = 0x338;
}

namespace C_INIT_CreationNoise
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_bAbsVal = 0x1C4;
	constexpr uint32_t m_bAbsValInv = 0x1C5;
	constexpr uint32_t m_flOffset = 0x1C8;
	constexpr uint32_t m_flOutputMin = 0x1CC;
	constexpr uint32_t m_flOutputMax = 0x1D0;
	constexpr uint32_t m_flNoiseScale = 0x1D4;
	constexpr uint32_t m_flNoiseScaleLoc = 0x1D8;
	constexpr uint32_t m_vecOffsetLoc = 0x1DC;
	constexpr uint32_t m_flWorldTimeScale = 0x1E8;
}

namespace C_INIT_CreateAlongPath
{
	constexpr uint32_t m_fMaxDistance = 0x1C0;
	constexpr uint32_t m_PathParams = 0x1D0;
	constexpr uint32_t m_bUseRandomCPs = 0x210;
	constexpr uint32_t m_vEndOffset = 0x214;
	constexpr uint32_t m_bSaveOffset = 0x220;
}

namespace C_INIT_MoveBetweenPoints
{
	constexpr uint32_t m_flSpeedMin = 0x1C0;
	constexpr uint32_t m_flSpeedMax = 0x318;
	constexpr uint32_t m_flEndSpread = 0x470;
	constexpr uint32_t m_flStartOffset = 0x5C8;
	constexpr uint32_t m_flEndOffset = 0x720;
	constexpr uint32_t m_nEndControlPointNumber = 0x878;
	constexpr uint32_t m_bTrailBias = 0x87C;
}

namespace C_INIT_RemapScalar
{
	constexpr uint32_t m_nFieldInput = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_flInputMin = 0x1C8;
	constexpr uint32_t m_flInputMax = 0x1CC;
	constexpr uint32_t m_flOutputMin = 0x1D0;
	constexpr uint32_t m_flOutputMax = 0x1D4;
	constexpr uint32_t m_flStartTime = 0x1D8;
	constexpr uint32_t m_flEndTime = 0x1DC;
	constexpr uint32_t m_nSetMethod = 0x1E0;
	constexpr uint32_t m_bActiveRange = 0x1E4;
	constexpr uint32_t m_flRemapBias = 0x1E8;
}

namespace C_INIT_RemapParticleCountToScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_nInputMin = 0x1C4;
	constexpr uint32_t m_nInputMax = 0x1C8;
	constexpr uint32_t m_nScaleControlPoint = 0x1CC;
	constexpr uint32_t m_nScaleControlPointField = 0x1D0;
	constexpr uint32_t m_flOutputMin = 0x1D4;
	constexpr uint32_t m_flOutputMax = 0x1D8;
	constexpr uint32_t m_nSetMethod = 0x1DC;
	constexpr uint32_t m_bActiveRange = 0x1E0;
	constexpr uint32_t m_bInvert = 0x1E1;
	constexpr uint32_t m_bWrap = 0x1E2;
	constexpr uint32_t m_flRemapBias = 0x1E4;
}

namespace C_INIT_RemapParticleCountToNamedModelElementScalar
{
	constexpr uint32_t m_hModel = 0x1F0;
	constexpr uint32_t m_outputMinName = 0x1F8;
	constexpr uint32_t m_outputMaxName = 0x200;
	constexpr uint32_t m_bModelFromRenderer = 0x208;
}

namespace C_INIT_RemapParticleCountToNamedModelSequenceScalar
{
}

namespace C_INIT_RemapParticleCountToNamedModelBodyPartScalar
{
}

namespace C_INIT_RemapParticleCountToNamedModelMeshGroupScalar
{
}

namespace C_INIT_InheritVelocity
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
	constexpr uint32_t m_flVelocityScale = 0x1C4;
}

namespace C_INIT_VelocityFromCP
{
	constexpr uint32_t m_velocityInput = 0x1C0;
	constexpr uint32_t m_transformInput = 0x818;
	constexpr uint32_t m_flVelocityScale = 0x880;
	constexpr uint32_t m_bDirectionOnly = 0x884;
}

namespace C_INIT_AgeNoise
{
	constexpr uint32_t m_bAbsVal = 0x1C0;
	constexpr uint32_t m_bAbsValInv = 0x1C1;
	constexpr uint32_t m_flOffset = 0x1C4;
	constexpr uint32_t m_flAgeMin = 0x1C8;
	constexpr uint32_t m_flAgeMax = 0x1CC;
	constexpr uint32_t m_flNoiseScale = 0x1D0;
	constexpr uint32_t m_flNoiseScaleLoc = 0x1D4;
	constexpr uint32_t m_vecOffsetLoc = 0x1D8;
}

namespace C_INIT_SequenceLifeTime
{
	constexpr uint32_t m_flFramerate = 0x1C0;
}

namespace C_INIT_RemapScalarToVector
{
	constexpr uint32_t m_nFieldInput = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_flInputMin = 0x1C8;
	constexpr uint32_t m_flInputMax = 0x1CC;
	constexpr uint32_t m_vecOutputMin = 0x1D0;
	constexpr uint32_t m_vecOutputMax = 0x1DC;
	constexpr uint32_t m_flStartTime = 0x1E8;
	constexpr uint32_t m_flEndTime = 0x1EC;
	constexpr uint32_t m_nSetMethod = 0x1F0;
	constexpr uint32_t m_nControlPointNumber = 0x1F4;
	constexpr uint32_t m_bLocalCoords = 0x1F8;
	constexpr uint32_t m_flRemapBias = 0x1FC;
}

namespace C_INIT_OffsetVectorToVector
{
	constexpr uint32_t m_nFieldInput = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_vecOutputMin = 0x1C8;
	constexpr uint32_t m_vecOutputMax = 0x1D4;
	constexpr uint32_t m_randomnessParameters = 0x1E0;
}

namespace C_INIT_CreateSequentialPathV2
{
	constexpr uint32_t m_fMaxDistance = 0x1C0;
	constexpr uint32_t m_flNumToAssign = 0x318;
	constexpr uint32_t m_bLoop = 0x470;
	constexpr uint32_t m_bCPPairs = 0x471;
	constexpr uint32_t m_bSaveOffset = 0x472;
	constexpr uint32_t m_PathParams = 0x480;
}

namespace C_INIT_CreateSequentialPath
{
	constexpr uint32_t m_fMaxDistance = 0x1C0;
	constexpr uint32_t m_flNumToAssign = 0x1C4;
	constexpr uint32_t m_bLoop = 0x1C8;
	constexpr uint32_t m_bCPPairs = 0x1C9;
	constexpr uint32_t m_bSaveOffset = 0x1CA;
	constexpr uint32_t m_PathParams = 0x1D0;
}

namespace C_INIT_InitialRepulsionVelocity
{
	constexpr uint32_t m_CollisionGroupName = 0x1C0;
	constexpr uint32_t m_nTraceSet = 0x240;
	constexpr uint32_t m_vecOutputMin = 0x244;
	constexpr uint32_t m_vecOutputMax = 0x250;
	constexpr uint32_t m_nControlPointNumber = 0x25C;
	constexpr uint32_t m_bPerParticle = 0x260;
	constexpr uint32_t m_bTranslate = 0x261;
	constexpr uint32_t m_bProportional = 0x262;
	constexpr uint32_t m_flTraceLength = 0x264;
	constexpr uint32_t m_bPerParticleTR = 0x268;
	constexpr uint32_t m_bInherit = 0x269;
	constexpr uint32_t m_nChildCP = 0x26C;
	constexpr uint32_t m_nChildGroupID = 0x270;
}

namespace C_INIT_RandomYawFlip
{
	constexpr uint32_t m_flPercent = 0x1C0;
}

namespace C_INIT_RandomSecondSequence
{
	constexpr uint32_t m_nSequenceMin = 0x1C0;
	constexpr uint32_t m_nSequenceMax = 0x1C4;
}

namespace C_INIT_RemapCPtoScalar
{
	constexpr uint32_t m_nCPInput = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_nField = 0x1C8;
	constexpr uint32_t m_flInputMin = 0x1CC;
	constexpr uint32_t m_flInputMax = 0x1D0;
	constexpr uint32_t m_flOutputMin = 0x1D4;
	constexpr uint32_t m_flOutputMax = 0x1D8;
	constexpr uint32_t m_flStartTime = 0x1DC;
	constexpr uint32_t m_flEndTime = 0x1E0;
	constexpr uint32_t m_nSetMethod = 0x1E4;
	constexpr uint32_t m_flRemapBias = 0x1E8;
}

namespace C_INIT_RemapTransformToVector
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_vInputMin = 0x1C4;
	constexpr uint32_t m_vInputMax = 0x1D0;
	constexpr uint32_t m_vOutputMin = 0x1DC;
	constexpr uint32_t m_vOutputMax = 0x1E8;
	constexpr uint32_t m_TransformInput = 0x1F8;
	constexpr uint32_t m_LocalSpaceTransform = 0x260;
	constexpr uint32_t m_flStartTime = 0x2C8;
	constexpr uint32_t m_flEndTime = 0x2CC;
	constexpr uint32_t m_nSetMethod = 0x2D0;
	constexpr uint32_t m_bOffset = 0x2D4;
	constexpr uint32_t m_bAccelerate = 0x2D5;
	constexpr uint32_t m_flRemapBias = 0x2D8;
}

namespace C_INIT_ChaoticAttractor
{
	constexpr uint32_t m_flAParm = 0x1C0;
	constexpr uint32_t m_flBParm = 0x1C4;
	constexpr uint32_t m_flCParm = 0x1C8;
	constexpr uint32_t m_flDParm = 0x1CC;
	constexpr uint32_t m_flScale = 0x1D0;
	constexpr uint32_t m_flSpeedMin = 0x1D4;
	constexpr uint32_t m_flSpeedMax = 0x1D8;
	constexpr uint32_t m_nBaseCP = 0x1DC;
	constexpr uint32_t m_bUniformSpeed = 0x1E0;
}

namespace C_INIT_CreateFromParentParticles
{
	constexpr uint32_t m_flVelocityScale = 0x1C0;
	constexpr uint32_t m_flIncrement = 0x1C4;
	constexpr uint32_t m_bRandomDistribution = 0x1C8;
	constexpr uint32_t m_nRandomSeed = 0x1CC;
	constexpr uint32_t m_bSubFrame = 0x1D0;
}

namespace C_INIT_InheritFromParentParticles
{
	constexpr uint32_t m_flScale = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_nIncrement = 0x1C8;
	constexpr uint32_t m_bRandomDistribution = 0x1CC;
	constexpr uint32_t m_nRandomSeed = 0x1D0;
}

namespace C_INIT_CreateFromCPs
{
	constexpr uint32_t m_nIncrement = 0x1C0;
	constexpr uint32_t m_nMinCP = 0x1C4;
	constexpr uint32_t m_nMaxCP = 0x1C8;
	constexpr uint32_t m_nDynamicCPCount = 0x1D0;
}

namespace C_INIT_DistanceToCPInit
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_flInputMin = 0x1C8;
	constexpr uint32_t m_flInputMax = 0x320;
	constexpr uint32_t m_flOutputMin = 0x478;
	constexpr uint32_t m_flOutputMax = 0x5D0;
	constexpr uint32_t m_nStartCP = 0x728;
	constexpr uint32_t m_bLOS = 0x72C;
	constexpr uint32_t m_CollisionGroupName = 0x72D;
	constexpr uint32_t m_nTraceSet = 0x7B0;
	constexpr uint32_t m_flMaxTraceLength = 0x7B8;
	constexpr uint32_t m_flLOSScale = 0x910;
	constexpr uint32_t m_nSetMethod = 0x914;
	constexpr uint32_t m_bActiveRange = 0x918;
	constexpr uint32_t m_vecDistanceScale = 0x91C;
	constexpr uint32_t m_flRemapBias = 0x928;
}

namespace C_INIT_LifespanFromVelocity
{
	constexpr uint32_t m_vecComponentScale = 0x1C0;
	constexpr uint32_t m_flTraceOffset = 0x1CC;
	constexpr uint32_t m_flMaxTraceLength = 0x1D0;
	constexpr uint32_t m_flTraceTolerance = 0x1D4;
	constexpr uint32_t m_nMaxPlanes = 0x1D8;
	constexpr uint32_t m_CollisionGroupName = 0x1E0;
	constexpr uint32_t m_nTraceSet = 0x260;
	constexpr uint32_t m_bIncludeWater = 0x270;
}

namespace C_INIT_CreateFromPlaneCache
{
	constexpr uint32_t m_vecOffsetMin = 0x1C0;
	constexpr uint32_t m_vecOffsetMax = 0x1CC;
	constexpr uint32_t m_bUseNormal = 0x1D9;
}

namespace C_INIT_ModelCull
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
	constexpr uint32_t m_bBoundBox = 0x1C4;
	constexpr uint32_t m_bCullOutside = 0x1C5;
	constexpr uint32_t m_bUseBones = 0x1C6;
	constexpr uint32_t m_HitboxSetName = 0x1C7;
}

namespace C_INIT_DistanceCull
{
	constexpr uint32_t m_nControlPoint = 0x1C0;
	constexpr uint32_t m_flDistance = 0x1C8;
	constexpr uint32_t m_bCullInside = 0x320;
}

namespace C_INIT_PlaneCull
{
	constexpr uint32_t m_nControlPoint = 0x1C0;
	constexpr uint32_t m_flDistance = 0x1C8;
	constexpr uint32_t m_bCullInside = 0x320;
}

namespace C_INIT_DistanceToNeighborCull
{
	constexpr uint32_t m_flDistance = 0x1C0;
}

namespace C_INIT_RtEnvCull
{
	constexpr uint32_t m_vecTestDir = 0x1C0;
	constexpr uint32_t m_vecTestNormal = 0x1CC;
	constexpr uint32_t m_bUseVelocity = 0x1D8;
	constexpr uint32_t m_bCullOnMiss = 0x1D9;
	constexpr uint32_t m_bLifeAdjust = 0x1DA;
	constexpr uint32_t m_RtEnvName = 0x1DB;
	constexpr uint32_t m_nRTEnvCP = 0x25C;
	constexpr uint32_t m_nComponent = 0x260;
}

namespace C_INIT_NormalAlignToCP
{
	constexpr uint32_t m_transformInput = 0x1C0;
	constexpr uint32_t m_nControlPointAxis = 0x228;
}

namespace C_INIT_NormalOffset
{
	constexpr uint32_t m_OffsetMin = 0x1C0;
	constexpr uint32_t m_OffsetMax = 0x1CC;
	constexpr uint32_t m_nControlPointNumber = 0x1D8;
	constexpr uint32_t m_bLocalCoords = 0x1DC;
	constexpr uint32_t m_bNormalize = 0x1DD;
}

namespace C_INIT_RemapSpeedToScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_nControlPointNumber = 0x1C4;
	constexpr uint32_t m_flStartTime = 0x1C8;
	constexpr uint32_t m_flEndTime = 0x1CC;
	constexpr uint32_t m_flInputMin = 0x1D0;
	constexpr uint32_t m_flInputMax = 0x1D4;
	constexpr uint32_t m_flOutputMin = 0x1D8;
	constexpr uint32_t m_flOutputMax = 0x1DC;
	constexpr uint32_t m_nSetMethod = 0x1E0;
	constexpr uint32_t m_bPerParticle = 0x1E4;
}

namespace C_INIT_InitFromCPSnapshot
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
	constexpr uint32_t m_nAttributeToRead = 0x1C4;
	constexpr uint32_t m_nAttributeToWrite = 0x1C8;
	constexpr uint32_t m_nLocalSpaceCP = 0x1CC;
	constexpr uint32_t m_bRandom = 0x1D0;
	constexpr uint32_t m_bReverse = 0x1D1;
	constexpr uint32_t m_nSnapShotIncrement = 0x1D8;
	constexpr uint32_t m_nManualSnapshotIndex = 0x330;
	constexpr uint32_t m_nRandomSeed = 0x488;
	constexpr uint32_t m_bLocalSpaceAngles = 0x48C;
}

namespace C_INIT_InitSkinnedPositionFromCPSnapshot
{
	constexpr uint32_t m_nSnapshotControlPointNumber = 0x1C0;
	constexpr uint32_t m_nControlPointNumber = 0x1C4;
	constexpr uint32_t m_bRandom = 0x1C8;
	constexpr uint32_t m_nRandomSeed = 0x1CC;
	constexpr uint32_t m_bRigid = 0x1D0;
	constexpr uint32_t m_bSetNormal = 0x1D1;
	constexpr uint32_t m_bIgnoreDt = 0x1D2;
	constexpr uint32_t m_flMinNormalVelocity = 0x1D4;
	constexpr uint32_t m_flMaxNormalVelocity = 0x1D8;
	constexpr uint32_t m_nIndexType = 0x1DC;
	constexpr uint32_t m_flReadIndex = 0x1E0;
	constexpr uint32_t m_flIncrement = 0x338;
	constexpr uint32_t m_nFullLoopIncrement = 0x33C;
	constexpr uint32_t m_nSnapShotStartPoint = 0x340;
	constexpr uint32_t m_flBoneVelocity = 0x344;
	constexpr uint32_t m_flBoneVelocityMax = 0x348;
	constexpr uint32_t m_bCopyColor = 0x34C;
	constexpr uint32_t m_bCopyAlpha = 0x34D;
	constexpr uint32_t m_bSetRadius = 0x34E;
}

namespace C_INIT_InitFromParentKilled
{
	constexpr uint32_t m_nAttributeToCopy = 0x1C0;
	constexpr uint32_t m_nEventType = 0x1C4;
}

namespace C_INIT_InitFromVectorFieldSnapshot
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
	constexpr uint32_t m_nLocalSpaceCP = 0x1C4;
	constexpr uint32_t m_nWeightUpdateCP = 0x1C8;
	constexpr uint32_t m_bUseVerticalVelocity = 0x1CC;
	constexpr uint32_t m_vecScale = 0x1D0;
}

namespace C_INIT_RemapInitialDirectionToTransformToVector
{
	constexpr uint32_t m_TransformInput = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x228;
	constexpr uint32_t m_flScale = 0x22C;
	constexpr uint32_t m_flOffsetRot = 0x230;
	constexpr uint32_t m_vecOffsetAxis = 0x234;
	constexpr uint32_t m_bNormalize = 0x240;
}

namespace C_INIT_RemapInitialTransformDirectionToRotation
{
	constexpr uint32_t m_TransformInput = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x228;
	constexpr uint32_t m_flOffsetRot = 0x22C;
	constexpr uint32_t m_nComponent = 0x230;
}

namespace C_INIT_RemapQAnglesToRotation
{
	constexpr uint32_t m_TransformInput = 0x1C0;
}

namespace C_INIT_RemapTransformOrientationToRotations
{
	constexpr uint32_t m_TransformInput = 0x1C0;
	constexpr uint32_t m_vecRotation = 0x228;
	constexpr uint32_t m_bUseQuat = 0x234;
	constexpr uint32_t m_bWriteNormal = 0x235;
}

namespace C_INIT_SetRigidAttachment
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
	constexpr uint32_t m_nFieldInput = 0x1C4;
	constexpr uint32_t m_nFieldOutput = 0x1C8;
	constexpr uint32_t m_bLocalSpace = 0x1CC;
}

namespace C_INIT_RemapInitialVisibilityScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_flInputMin = 0x1C8;
	constexpr uint32_t m_flInputMax = 0x1CC;
	constexpr uint32_t m_flOutputMin = 0x1D0;
	constexpr uint32_t m_flOutputMax = 0x1D4;
}

namespace C_INIT_RadiusFromCPObject
{
	constexpr uint32_t m_nControlPoint = 0x1C0;
}

namespace C_INIT_InitialSequenceFromModel
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_nFieldOutputAnim = 0x1C8;
	constexpr uint32_t m_flInputMin = 0x1CC;
	constexpr uint32_t m_flInputMax = 0x1D0;
	constexpr uint32_t m_flOutputMin = 0x1D4;
	constexpr uint32_t m_flOutputMax = 0x1D8;
	constexpr uint32_t m_nSetMethod = 0x1DC;
}

namespace C_INIT_GlobalScale
{
	constexpr uint32_t m_flScale = 0x1C0;
	constexpr uint32_t m_nScaleControlPointNumber = 0x1C4;
	constexpr uint32_t m_nControlPointNumber = 0x1C8;
	constexpr uint32_t m_bScaleRadius = 0x1CC;
	constexpr uint32_t m_bScalePosition = 0x1CD;
	constexpr uint32_t m_bScaleVelocity = 0x1CE;
}

namespace C_INIT_PointList
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_pointList = 0x1C8;
	constexpr uint32_t m_bPlaceAlongPath = 0x1E0;
	constexpr uint32_t m_bClosedLoop = 0x1E1;
	constexpr uint32_t m_nNumPointsAlongPath = 0x1E4;
}

namespace C_INIT_RandomNamedModelElement
{
	constexpr uint32_t m_hModel = 0x1C0;
	constexpr uint32_t m_names = 0x1C8;
	constexpr uint32_t m_bShuffle = 0x1E0;
	constexpr uint32_t m_bLinear = 0x1E1;
	constexpr uint32_t m_bModelFromRenderer = 0x1E2;
	constexpr uint32_t m_nFieldOutput = 0x1E4;
}

namespace C_INIT_RandomNamedModelSequence
{
}

namespace C_INIT_RandomNamedModelBodyPart
{
}

namespace C_INIT_RandomNamedModelMeshGroup
{
}

namespace C_INIT_RemapNamedModelElementToScalar
{
	constexpr uint32_t m_hModel = 0x1C0;
	constexpr uint32_t m_names = 0x1C8;
	constexpr uint32_t m_values = 0x1E0;
	constexpr uint32_t m_nFieldInput = 0x1F8;
	constexpr uint32_t m_nFieldOutput = 0x1FC;
	constexpr uint32_t m_nSetMethod = 0x200;
	constexpr uint32_t m_bModelFromRenderer = 0x204;
}

namespace C_INIT_RemapNamedModelSequenceToScalar
{
}

namespace C_INIT_RemapNamedModelBodyPartToScalar
{
}

namespace C_INIT_RemapNamedModelMeshGroupToScalar
{
}

namespace C_INIT_StatusEffect
{
	constexpr uint32_t m_nDetail2Combo = 0x1C0;
	constexpr uint32_t m_flDetail2Rotation = 0x1C4;
	constexpr uint32_t m_flDetail2Scale = 0x1C8;
	constexpr uint32_t m_flDetail2BlendFactor = 0x1CC;
	constexpr uint32_t m_flColorWarpIntensity = 0x1D0;
	constexpr uint32_t m_flDiffuseWarpBlendToFull = 0x1D4;
	constexpr uint32_t m_flEnvMapIntensity = 0x1D8;
	constexpr uint32_t m_flAmbientScale = 0x1DC;
	constexpr uint32_t m_specularColor = 0x1E0;
	constexpr uint32_t m_flSpecularScale = 0x1E4;
	constexpr uint32_t m_flSpecularExponent = 0x1E8;
	constexpr uint32_t m_flSpecularExponentBlendToFull = 0x1EC;
	constexpr uint32_t m_flSpecularBlendToFull = 0x1F0;
	constexpr uint32_t m_rimLightColor = 0x1F4;
	constexpr uint32_t m_flRimLightScale = 0x1F8;
	constexpr uint32_t m_flReflectionsTintByBaseBlendToNone = 0x1FC;
	constexpr uint32_t m_flMetalnessBlendToFull = 0x200;
	constexpr uint32_t m_flSelfIllumBlendToFull = 0x204;
}

namespace C_INIT_StatusEffectCitadel
{
	constexpr uint32_t m_flSFXColorWarpAmount = 0x1C0;
	constexpr uint32_t m_flSFXNormalAmount = 0x1C4;
	constexpr uint32_t m_flSFXMetalnessAmount = 0x1C8;
	constexpr uint32_t m_flSFXRoughnessAmount = 0x1CC;
	constexpr uint32_t m_flSFXSelfIllumAmount = 0x1D0;
	constexpr uint32_t m_flSFXSScale = 0x1D4;
	constexpr uint32_t m_flSFXSScrollX = 0x1D8;
	constexpr uint32_t m_flSFXSScrollY = 0x1DC;
	constexpr uint32_t m_flSFXSScrollZ = 0x1E0;
	constexpr uint32_t m_flSFXSOffsetX = 0x1E4;
	constexpr uint32_t m_flSFXSOffsetY = 0x1E8;
	constexpr uint32_t m_flSFXSOffsetZ = 0x1EC;
	constexpr uint32_t m_nDetailCombo = 0x1F0;
	constexpr uint32_t m_flSFXSDetailAmount = 0x1F4;
	constexpr uint32_t m_flSFXSDetailScale = 0x1F8;
	constexpr uint32_t m_flSFXSDetailScrollX = 0x1FC;
	constexpr uint32_t m_flSFXSDetailScrollY = 0x200;
	constexpr uint32_t m_flSFXSDetailScrollZ = 0x204;
	constexpr uint32_t m_flSFXSUseModelUVs = 0x208;
}

namespace C_INIT_CreateParticleImpulse
{
	constexpr uint32_t m_InputRadius = 0x1C0;
	constexpr uint32_t m_InputMagnitude = 0x318;
	constexpr uint32_t m_nFalloffFunction = 0x470;
	constexpr uint32_t m_InputFalloffExp = 0x478;
	constexpr uint32_t m_nImpulseType = 0x5D0;
}

namespace C_INIT_QuantizeFloat
{
	constexpr uint32_t m_InputValue = 0x1C0;
	constexpr uint32_t m_nOutputField = 0x318;
}

namespace C_INIT_SetAttributeToScalarExpression
{
	constexpr uint32_t m_nExpression = 0x1C0;
	constexpr uint32_t m_flInput1 = 0x1C8;
	constexpr uint32_t m_flInput2 = 0x320;
	constexpr uint32_t m_flOutputRemap = 0x478;
	constexpr uint32_t m_nOutputField = 0x5D0;
	constexpr uint32_t m_nSetMethod = 0x5D4;
}

namespace C_INIT_SetVectorAttributeToVectorExpression
{
	constexpr uint32_t m_nExpression = 0x1C0;
	constexpr uint32_t m_vInput1 = 0x1C8;
	constexpr uint32_t m_vInput2 = 0x820;
	constexpr uint32_t m_nOutputField = 0xE78;
	constexpr uint32_t m_nSetMethod = 0xE7C;
	constexpr uint32_t m_bNormalizedOutput = 0xE80;
}

namespace C_INIT_InitFloatCollection
{
	constexpr uint32_t m_InputValue = 0x1C0;
	constexpr uint32_t m_nOutputField = 0x318;
}

namespace C_INIT_InitFloat
{
	constexpr uint32_t m_InputValue = 0x1C0;
	constexpr uint32_t m_nOutputField = 0x318;
	constexpr uint32_t m_nSetMethod = 0x31C;
	constexpr uint32_t m_InputStrength = 0x320;
}

namespace C_INIT_InitVecCollection
{
	constexpr uint32_t m_InputValue = 0x1C0;
	constexpr uint32_t m_nOutputField = 0x818;
}

namespace C_INIT_InitVec
{
	constexpr uint32_t m_InputValue = 0x1C0;
	constexpr uint32_t m_nOutputField = 0x818;
	constexpr uint32_t m_nSetMethod = 0x81C;
	constexpr uint32_t m_bNormalizedOutput = 0x820;
	constexpr uint32_t m_bWritePreviousPosition = 0x821;
}

namespace C_OP_InstantaneousEmitter
{
	constexpr uint32_t m_nParticlesToEmit = 0x1C0;
	constexpr uint32_t m_flStartTime = 0x318;
	constexpr uint32_t m_flInitFromKilledParentParticles = 0x470;
	constexpr uint32_t m_nEventType = 0x474;
	constexpr uint32_t m_flParentParticleScale = 0x478;
	constexpr uint32_t m_nMaxEmittedPerFrame = 0x5D0;
	constexpr uint32_t m_nSnapshotControlPoint = 0x5D4;
}

namespace C_OP_ContinuousEmitter
{
	constexpr uint32_t m_flEmissionDuration = 0x1C0;
	constexpr uint32_t m_flStartTime = 0x318;
	constexpr uint32_t m_flEmitRate = 0x470;
	constexpr uint32_t m_flEmissionScale = 0x5C8;
	constexpr uint32_t m_flScalePerParentParticle = 0x5CC;
	constexpr uint32_t m_bInitFromKilledParentParticles = 0x5D0;
	constexpr uint32_t m_nEventType = 0x5D4;
	constexpr uint32_t m_nSnapshotControlPoint = 0x5D8;
	constexpr uint32_t m_nLimitPerUpdate = 0x5DC;
	constexpr uint32_t m_bForceEmitOnFirstUpdate = 0x5E0;
	constexpr uint32_t m_bForceEmitOnLastUpdate = 0x5E1;
}

namespace C_OP_NoiseEmitter
{
	constexpr uint32_t m_flEmissionDuration = 0x1C0;
	constexpr uint32_t m_flStartTime = 0x1C4;
	constexpr uint32_t m_flEmissionScale = 0x1C8;
	constexpr uint32_t m_nScaleControlPoint = 0x1CC;
	constexpr uint32_t m_nScaleControlPointField = 0x1D0;
	constexpr uint32_t m_nWorldNoisePoint = 0x1D4;
	constexpr uint32_t m_bAbsVal = 0x1D8;
	constexpr uint32_t m_bAbsValInv = 0x1D9;
	constexpr uint32_t m_flOffset = 0x1DC;
	constexpr uint32_t m_flOutputMin = 0x1E0;
	constexpr uint32_t m_flOutputMax = 0x1E4;
	constexpr uint32_t m_flNoiseScale = 0x1E8;
	constexpr uint32_t m_flWorldNoiseScale = 0x1EC;
	constexpr uint32_t m_vecOffsetLoc = 0x1F0;
	constexpr uint32_t m_flWorldTimeScale = 0x1FC;
}

namespace C_OP_MaintainEmitter
{
	constexpr uint32_t m_nParticlesToMaintain = 0x1C0;
	constexpr uint32_t m_flStartTime = 0x318;
	constexpr uint32_t m_flEmissionDuration = 0x320;
	constexpr uint32_t m_flEmissionRate = 0x478;
	constexpr uint32_t m_nSnapshotControlPoint = 0x47C;
	constexpr uint32_t m_bEmitInstantaneously = 0x480;
	constexpr uint32_t m_bFinalEmitOnStop = 0x481;
	constexpr uint32_t m_flScale = 0x488;
}

namespace C_OP_RandomForce
{
	constexpr uint32_t m_MinForce = 0x1C8;
	constexpr uint32_t m_MaxForce = 0x1D4;
}

namespace C_OP_CPVelocityForce
{
	constexpr uint32_t m_nControlPointNumber = 0x1C8;
	constexpr uint32_t m_flScale = 0x1D0;
}

namespace C_OP_ParentVortices
{
	constexpr uint32_t m_flForceScale = 0x1C8;
	constexpr uint32_t m_vecTwistAxis = 0x1CC;
	constexpr uint32_t m_bFlipBasedOnYaw = 0x1D8;
}

namespace C_OP_TwistAroundAxis
{
	constexpr uint32_t m_fForceAmount = 0x1C8;
	constexpr uint32_t m_TwistAxis = 0x1CC;
	constexpr uint32_t m_bLocalSpace = 0x1D8;
	constexpr uint32_t m_nControlPointNumber = 0x1DC;
}

namespace C_OP_AttractToControlPoint
{
	constexpr uint32_t m_vecComponentScale = 0x1C8;
	constexpr uint32_t m_fForceAmount = 0x1D8;
	constexpr uint32_t m_fFalloffPower = 0x330;
	constexpr uint32_t m_TransformInput = 0x338;
	constexpr uint32_t m_fForceAmountMin = 0x3A0;
	constexpr uint32_t m_bApplyMinForce = 0x4F8;
}

namespace C_OP_ForceBasedOnDistanceToPlane
{
	constexpr uint32_t m_flMinDist = 0x1C8;
	constexpr uint32_t m_vecForceAtMinDist = 0x1CC;
	constexpr uint32_t m_flMaxDist = 0x1D8;
	constexpr uint32_t m_vecForceAtMaxDist = 0x1DC;
	constexpr uint32_t m_vecPlaneNormal = 0x1E8;
	constexpr uint32_t m_nControlPointNumber = 0x1F4;
	constexpr uint32_t m_flExponent = 0x1F8;
}

namespace C_OP_TimeVaryingForce
{
	constexpr uint32_t m_flStartLerpTime = 0x1C8;
	constexpr uint32_t m_StartingForce = 0x1CC;
	constexpr uint32_t m_flEndLerpTime = 0x1D8;
	constexpr uint32_t m_EndingForce = 0x1DC;
}

namespace C_OP_TurbulenceForce
{
	constexpr uint32_t m_flNoiseCoordScale0 = 0x1C8;
	constexpr uint32_t m_flNoiseCoordScale1 = 0x1CC;
	constexpr uint32_t m_flNoiseCoordScale2 = 0x1D0;
	constexpr uint32_t m_flNoiseCoordScale3 = 0x1D4;
	constexpr uint32_t m_vecNoiseAmount0 = 0x1D8;
	constexpr uint32_t m_vecNoiseAmount1 = 0x1E4;
	constexpr uint32_t m_vecNoiseAmount2 = 0x1F0;
	constexpr uint32_t m_vecNoiseAmount3 = 0x1FC;
}

namespace C_OP_CurlNoiseForce
{
	constexpr uint32_t m_nNoiseType = 0x1C8;
	constexpr uint32_t m_vecNoiseFreq = 0x1D0;
	constexpr uint32_t m_vecNoiseScale = 0x828;
	constexpr uint32_t m_vecOffset = 0xE80;
	constexpr uint32_t m_vecOffsetRate = 0x14D8;
	constexpr uint32_t m_flWorleySeed = 0x1B30;
	constexpr uint32_t m_flWorleyJitter = 0x1C88;
}

namespace C_OP_PerParticleForce
{
	constexpr uint32_t m_flForceScale = 0x1C8;
	constexpr uint32_t m_vForce = 0x320;
	constexpr uint32_t m_nCP = 0x978;
}

namespace C_OP_WindForce
{
	constexpr uint32_t m_vForce = 0x1C8;
}

namespace C_OP_ExternalWindForce
{
	constexpr uint32_t m_vecSamplePosition = 0x1C8;
	constexpr uint32_t m_vecScale = 0x820;
	constexpr uint32_t m_bSampleWind = 0xE78;
	constexpr uint32_t m_bSampleWater = 0xE79;
	constexpr uint32_t m_bDampenNearWaterPlane = 0xE7A;
	constexpr uint32_t m_bSampleGravity = 0xE7B;
	constexpr uint32_t m_vecGravityForce = 0xE80;
	constexpr uint32_t m_bUseBasicMovementGravity = 0x14D8;
	constexpr uint32_t m_flLocalGravityScale = 0x14E0;
	constexpr uint32_t m_flLocalBuoyancyScale = 0x1638;
	constexpr uint32_t m_vecBuoyancyForce = 0x1790;
}

namespace C_OP_ExternalGameImpulseForce
{
	constexpr uint32_t m_flForceScale = 0x1C8;
	constexpr uint32_t m_bRopes = 0x320;
	constexpr uint32_t m_bRopesZOnly = 0x321;
	constexpr uint32_t m_bExplosions = 0x322;
	constexpr uint32_t m_bParticles = 0x323;
}

namespace C_OP_LocalAccelerationForce
{
	constexpr uint32_t m_nCP = 0x1C8;
	constexpr uint32_t m_nScaleCP = 0x1CC;
	constexpr uint32_t m_vecAccel = 0x1D0;
}

namespace C_OP_DensityForce
{
	constexpr uint32_t m_flRadiusScale = 0x1C8;
	constexpr uint32_t m_flForceScale = 0x1CC;
	constexpr uint32_t m_flTargetDensity = 0x1D0;
}

namespace C_OP_IntraParticleForce
{
	constexpr uint32_t m_flAttractionMinDistance = 0x1C8;
	constexpr uint32_t m_flAttractionMaxDistance = 0x1CC;
	constexpr uint32_t m_flAttractionMaxStrength = 0x1D0;
	constexpr uint32_t m_flRepulsionMinDistance = 0x1D4;
	constexpr uint32_t m_flRepulsionMaxDistance = 0x1D8;
	constexpr uint32_t m_flRepulsionMaxStrength = 0x1DC;
	constexpr uint32_t m_bUseAABB = 0x1E0;
	constexpr uint32_t m_bThreadIt = 0x1E1;
}

namespace C_OP_BasicMovement
{
	constexpr uint32_t m_Gravity = 0x1B8;
	constexpr uint32_t m_fDrag = 0x810;
	constexpr uint32_t m_massControls = 0x968;
	constexpr uint32_t m_nMaxConstraintPasses = 0xD78;
	constexpr uint32_t m_bUseNewCode = 0xD7C;
}

namespace C_OP_FadeAndKill
{
	constexpr uint32_t m_flStartFadeInTime = 0x1B8;
	constexpr uint32_t m_flEndFadeInTime = 0x1BC;
	constexpr uint32_t m_flStartFadeOutTime = 0x1C0;
	constexpr uint32_t m_flEndFadeOutTime = 0x1C4;
	constexpr uint32_t m_flStartAlpha = 0x1C8;
	constexpr uint32_t m_flEndAlpha = 0x1CC;
	constexpr uint32_t m_bForcePreserveParticleOrder = 0x1D0;
}

namespace C_OP_FadeAndKillForTracers
{
	constexpr uint32_t m_flStartFadeInTime = 0x1B8;
	constexpr uint32_t m_flEndFadeInTime = 0x1BC;
	constexpr uint32_t m_flStartFadeOutTime = 0x1C0;
	constexpr uint32_t m_flEndFadeOutTime = 0x1C4;
	constexpr uint32_t m_flStartAlpha = 0x1C8;
	constexpr uint32_t m_flEndAlpha = 0x1CC;
}

namespace C_OP_FadeIn
{
	constexpr uint32_t m_flFadeInTimeMin = 0x1B8;
	constexpr uint32_t m_flFadeInTimeMax = 0x1BC;
	constexpr uint32_t m_flFadeInTimeExp = 0x1C0;
	constexpr uint32_t m_bProportional = 0x1C4;
}

namespace C_OP_FadeOut
{
	constexpr uint32_t m_flFadeOutTimeMin = 0x1B8;
	constexpr uint32_t m_flFadeOutTimeMax = 0x1BC;
	constexpr uint32_t m_flFadeOutTimeExp = 0x1C0;
	constexpr uint32_t m_flFadeBias = 0x1C4;
	constexpr uint32_t m_bProportional = 0x200;
	constexpr uint32_t m_bEaseInAndOut = 0x201;
}

namespace C_OP_FadeInSimple
{
	constexpr uint32_t m_flFadeInTime = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
}

namespace C_OP_FadeOutSimple
{
	constexpr uint32_t m_flFadeOutTime = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
}

namespace C_OP_ClampScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flOutputMin = 0x1C0;
	constexpr uint32_t m_flOutputMax = 0x318;
}

namespace C_OP_ClampVector
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_vecOutputMin = 0x1C0;
	constexpr uint32_t m_vecOutputMax = 0x818;
}

namespace C_OP_OscillateScalar
{
	constexpr uint32_t m_RateMin = 0x1B8;
	constexpr uint32_t m_RateMax = 0x1BC;
	constexpr uint32_t m_FrequencyMin = 0x1C0;
	constexpr uint32_t m_FrequencyMax = 0x1C4;
	constexpr uint32_t m_nField = 0x1C8;
	constexpr uint32_t m_bProportional = 0x1CC;
	constexpr uint32_t m_bProportionalOp = 0x1CD;
	constexpr uint32_t m_flStartTime_min = 0x1D0;
	constexpr uint32_t m_flStartTime_max = 0x1D4;
	constexpr uint32_t m_flEndTime_min = 0x1D8;
	constexpr uint32_t m_flEndTime_max = 0x1DC;
	constexpr uint32_t m_flOscMult = 0x1E0;
	constexpr uint32_t m_flOscAdd = 0x1E4;
}

namespace C_OP_OscillateScalarSimple
{
	constexpr uint32_t m_Rate = 0x1B8;
	constexpr uint32_t m_Frequency = 0x1BC;
	constexpr uint32_t m_nField = 0x1C0;
	constexpr uint32_t m_flOscMult = 0x1C4;
	constexpr uint32_t m_flOscAdd = 0x1C8;
}

namespace C_OP_OscillateVector
{
	constexpr uint32_t m_RateMin = 0x1B8;
	constexpr uint32_t m_RateMax = 0x1C4;
	constexpr uint32_t m_FrequencyMin = 0x1D0;
	constexpr uint32_t m_FrequencyMax = 0x1DC;
	constexpr uint32_t m_nField = 0x1E8;
	constexpr uint32_t m_bProportional = 0x1EC;
	constexpr uint32_t m_bProportionalOp = 0x1ED;
	constexpr uint32_t m_bOffset = 0x1EE;
	constexpr uint32_t m_flStartTime_min = 0x1F0;
	constexpr uint32_t m_flStartTime_max = 0x1F4;
	constexpr uint32_t m_flEndTime_min = 0x1F8;
	constexpr uint32_t m_flEndTime_max = 0x1FC;
	constexpr uint32_t m_flOscMult = 0x200;
	constexpr uint32_t m_flOscAdd = 0x358;
	constexpr uint32_t m_flRateScale = 0x4B0;
}

namespace C_OP_OscillateVectorSimple
{
	constexpr uint32_t m_Rate = 0x1B8;
	constexpr uint32_t m_Frequency = 0x1C4;
	constexpr uint32_t m_nField = 0x1D0;
	constexpr uint32_t m_flOscMult = 0x1D4;
	constexpr uint32_t m_flOscAdd = 0x1D8;
	constexpr uint32_t m_bOffset = 0x1DC;
}

namespace C_OP_DifferencePreviousParticle
{
	constexpr uint32_t m_nFieldInput = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_flInputMin = 0x1C0;
	constexpr uint32_t m_flInputMax = 0x1C4;
	constexpr uint32_t m_flOutputMin = 0x1C8;
	constexpr uint32_t m_flOutputMax = 0x1CC;
	constexpr uint32_t m_nSetMethod = 0x1D0;
	constexpr uint32_t m_bActiveRange = 0x1D4;
	constexpr uint32_t m_bSetPreviousParticle = 0x1D5;
}

namespace C_OP_PointVectorAtNextParticle
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flInterpolation = 0x1C0;
}

namespace C_OP_RemapScalar
{
	constexpr uint32_t m_nFieldInput = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_flInputMin = 0x1C0;
	constexpr uint32_t m_flInputMax = 0x1C4;
	constexpr uint32_t m_flOutputMin = 0x1C8;
	constexpr uint32_t m_flOutputMax = 0x1CC;
	constexpr uint32_t m_bOldCode = 0x1D0;
}

namespace C_OP_RemapDensityToVector
{
	constexpr uint32_t m_flRadiusScale = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_flDensityMin = 0x1C0;
	constexpr uint32_t m_flDensityMax = 0x1C4;
	constexpr uint32_t m_vecOutputMin = 0x1C8;
	constexpr uint32_t m_vecOutputMax = 0x1D4;
	constexpr uint32_t m_bUseParentDensity = 0x1E0;
	constexpr uint32_t m_nVoxelGridResolution = 0x1E4;
}

namespace C_OP_Diffusion
{
	constexpr uint32_t m_flRadiusScale = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_nVoxelGridResolution = 0x1C0;
}

namespace C_OP_RemapScalarEndCap
{
	constexpr uint32_t m_nFieldInput = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_flInputMin = 0x1C0;
	constexpr uint32_t m_flInputMax = 0x1C4;
	constexpr uint32_t m_flOutputMin = 0x1C8;
	constexpr uint32_t m_flOutputMax = 0x1CC;
}

namespace C_OP_ReinitializeScalarEndCap
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flOutputMin = 0x1BC;
	constexpr uint32_t m_flOutputMax = 0x1C0;
}

namespace C_OP_RemapScalarOnceTimed
{
	constexpr uint32_t m_bProportional = 0x1B8;
	constexpr uint32_t m_nFieldInput = 0x1BC;
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_flInputMin = 0x1C4;
	constexpr uint32_t m_flInputMax = 0x1C8;
	constexpr uint32_t m_flOutputMin = 0x1CC;
	constexpr uint32_t m_flOutputMax = 0x1D0;
	constexpr uint32_t m_flRemapTime = 0x1D4;
}

namespace C_OP_RemapParticleCountOnScalarEndCap
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_nInputMin = 0x1BC;
	constexpr uint32_t m_nInputMax = 0x1C0;
	constexpr uint32_t m_flOutputMin = 0x1C4;
	constexpr uint32_t m_flOutputMax = 0x1C8;
	constexpr uint32_t m_bBackwards = 0x1CC;
	constexpr uint32_t m_nSetMethod = 0x1D0;
}

namespace C_OP_RemapParticleCountToScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_nInputMin = 0x1C0;
	constexpr uint32_t m_nInputMax = 0x318;
	constexpr uint32_t m_flOutputMin = 0x470;
	constexpr uint32_t m_flOutputMax = 0x5C8;
	constexpr uint32_t m_bActiveRange = 0x720;
	constexpr uint32_t m_nSetMethod = 0x724;
}

namespace C_OP_RemapVisibilityScalar
{
	constexpr uint32_t m_nFieldInput = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_flInputMin = 0x1C0;
	constexpr uint32_t m_flInputMax = 0x1C4;
	constexpr uint32_t m_flOutputMin = 0x1C8;
	constexpr uint32_t m_flOutputMax = 0x1CC;
	constexpr uint32_t m_flRadiusScale = 0x1D0;
}

namespace C_OP_RemapTransformVisibilityToScalar
{
	constexpr uint32_t m_nSetMethod = 0x1B8;
	constexpr uint32_t m_TransformInput = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x228;
	constexpr uint32_t m_flInputMin = 0x22C;
	constexpr uint32_t m_flInputMax = 0x230;
	constexpr uint32_t m_flOutputMin = 0x234;
	constexpr uint32_t m_flOutputMax = 0x238;
	constexpr uint32_t m_flRadius = 0x23C;
}

namespace C_OP_RemapTransformVisibilityToVector
{
	constexpr uint32_t m_nSetMethod = 0x1B8;
	constexpr uint32_t m_TransformInput = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x228;
	constexpr uint32_t m_flInputMin = 0x22C;
	constexpr uint32_t m_flInputMax = 0x230;
	constexpr uint32_t m_vecOutputMin = 0x234;
	constexpr uint32_t m_vecOutputMax = 0x240;
	constexpr uint32_t m_flRadius = 0x24C;
}

namespace C_OP_LerpScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flOutput = 0x1C0;
	constexpr uint32_t m_flStartTime = 0x318;
	constexpr uint32_t m_flEndTime = 0x31C;
}

namespace C_OP_LerpEndCapScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flOutput = 0x1BC;
	constexpr uint32_t m_flLerpTime = 0x1C0;
}

namespace C_OP_LerpEndCapVector
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_vecOutput = 0x1BC;
	constexpr uint32_t m_flLerpTime = 0x1C8;
}

namespace C_OP_LerpVector
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_vecOutput = 0x1BC;
	constexpr uint32_t m_flStartTime = 0x1C8;
	constexpr uint32_t m_flEndTime = 0x1CC;
	constexpr uint32_t m_nSetMethod = 0x1D0;
}

namespace C_OP_LerpToOtherAttribute
{
	constexpr uint32_t m_flInterpolation = 0x1B8;
	constexpr uint32_t m_nFieldInputFrom = 0x310;
	constexpr uint32_t m_nFieldInput = 0x314;
	constexpr uint32_t m_nFieldOutput = 0x318;
}

namespace C_OP_RemapSpeed
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flInputMin = 0x1BC;
	constexpr uint32_t m_flInputMax = 0x1C0;
	constexpr uint32_t m_flOutputMin = 0x1C4;
	constexpr uint32_t m_flOutputMax = 0x1C8;
	constexpr uint32_t m_nSetMethod = 0x1CC;
	constexpr uint32_t m_bIgnoreDelta = 0x1D0;
}

namespace C_OP_RemapVectortoCP
{
	constexpr uint32_t m_nOutControlPointNumber = 0x1B8;
	constexpr uint32_t m_nFieldInput = 0x1BC;
	constexpr uint32_t m_nParticleNumber = 0x1C0;
}

namespace C_OP_RampScalarLinear
{
	constexpr uint32_t m_RateMin = 0x1B8;
	constexpr uint32_t m_RateMax = 0x1BC;
	constexpr uint32_t m_flStartTime_min = 0x1C0;
	constexpr uint32_t m_flStartTime_max = 0x1C4;
	constexpr uint32_t m_flEndTime_min = 0x1C8;
	constexpr uint32_t m_flEndTime_max = 0x1CC;
	constexpr uint32_t m_nField = 0x1F0;
	constexpr uint32_t m_bProportionalOp = 0x1F4;
}

namespace C_OP_RampScalarSpline
{
	constexpr uint32_t m_RateMin = 0x1B8;
	constexpr uint32_t m_RateMax = 0x1BC;
	constexpr uint32_t m_flStartTime_min = 0x1C0;
	constexpr uint32_t m_flStartTime_max = 0x1C4;
	constexpr uint32_t m_flEndTime_min = 0x1C8;
	constexpr uint32_t m_flEndTime_max = 0x1CC;
	constexpr uint32_t m_flBias = 0x1D0;
	constexpr uint32_t m_nField = 0x200;
	constexpr uint32_t m_bProportionalOp = 0x204;
	constexpr uint32_t m_bEaseOut = 0x205;
}

namespace C_OP_RampScalarLinearSimple
{
	constexpr uint32_t m_Rate = 0x1B8;
	constexpr uint32_t m_flStartTime = 0x1BC;
	constexpr uint32_t m_flEndTime = 0x1C0;
	constexpr uint32_t m_nField = 0x1F0;
}

namespace C_OP_RampScalarSplineSimple
{
	constexpr uint32_t m_Rate = 0x1B8;
	constexpr uint32_t m_flStartTime = 0x1BC;
	constexpr uint32_t m_flEndTime = 0x1C0;
	constexpr uint32_t m_nField = 0x1F0;
	constexpr uint32_t m_bEaseOut = 0x1F4;
}

namespace C_OP_ChladniWave
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flInputMin = 0x1C0;
	constexpr uint32_t m_flInputMax = 0x318;
	constexpr uint32_t m_flOutputMin = 0x470;
	constexpr uint32_t m_flOutputMax = 0x5C8;
	constexpr uint32_t m_vecWaveLength = 0x720;
	constexpr uint32_t m_vecHarmonics = 0xD78;
	constexpr uint32_t m_nSetMethod = 0x13D0;
	constexpr uint32_t m_nLocalSpaceControlPoint = 0x13D4;
	constexpr uint32_t m_b3D = 0x13D8;
}

namespace C_OP_Noise
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flOutputMin = 0x1BC;
	constexpr uint32_t m_flOutputMax = 0x1C0;
	constexpr uint32_t m_fl4NoiseScale = 0x1C4;
	constexpr uint32_t m_bAdditive = 0x1C8;
	constexpr uint32_t m_flNoiseAnimationTimeScale = 0x1CC;
}

namespace C_OP_VectorNoise
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_vecOutputMin = 0x1BC;
	constexpr uint32_t m_vecOutputMax = 0x1C8;
	constexpr uint32_t m_fl4NoiseScale = 0x1D4;
	constexpr uint32_t m_bAdditive = 0x1D8;
	constexpr uint32_t m_bOffset = 0x1D9;
	constexpr uint32_t m_flNoiseAnimationTimeScale = 0x1DC;
}

namespace C_OP_Decay
{
	constexpr uint32_t m_bRopeDecay = 0x1B8;
	constexpr uint32_t m_bForcePreserveParticleOrder = 0x1B9;
}

namespace C_OP_DecayOffscreen
{
	constexpr uint32_t m_flOffscreenTime = 0x1B8;
}

namespace C_OP_EndCapTimedFreeze
{
	constexpr uint32_t m_flFreezeTime = 0x1B8;
}

namespace C_OP_EndCapTimedDecay
{
	constexpr uint32_t m_flDecayTime = 0x1B8;
}

namespace C_OP_EndCapDecay
{
}

namespace C_OP_VelocityDecay
{
	constexpr uint32_t m_flMinVelocity = 0x1B8;
}

namespace C_OP_AlphaDecay
{
	constexpr uint32_t m_flMinAlpha = 0x1B8;
}

namespace C_OP_RadiusDecay
{
	constexpr uint32_t m_flMinRadius = 0x1B8;
}

namespace C_OP_DecayMaintainCount
{
	constexpr uint32_t m_nParticlesToMaintain = 0x1B8;
	constexpr uint32_t m_flDecayDelay = 0x1BC;
	constexpr uint32_t m_nSnapshotControlPoint = 0x1C0;
	constexpr uint32_t m_bLifespanDecay = 0x1C4;
	constexpr uint32_t m_flScale = 0x1C8;
	constexpr uint32_t m_bKillNewest = 0x320;
}

namespace C_OP_DecayClampCount
{
	constexpr uint32_t m_nCount = 0x1B8;
}

namespace C_OP_Cull
{
	constexpr uint32_t m_flCullPerc = 0x1B8;
	constexpr uint32_t m_flCullStart = 0x1BC;
	constexpr uint32_t m_flCullEnd = 0x1C0;
	constexpr uint32_t m_flCullExp = 0x1C4;
}

namespace CGeneralSpin
{
	constexpr uint32_t m_nSpinRateDegrees = 0x1B8;
	constexpr uint32_t m_nSpinRateMinDegrees = 0x1BC;
	constexpr uint32_t m_fSpinRateStopTime = 0x1C4;
}

namespace CSpinUpdateBase
{
}

namespace C_OP_Spin
{
}

namespace C_OP_SpinUpdate
{
}

namespace C_OP_SpinYaw
{
}

namespace C_OP_InterpolateRadius
{
	constexpr uint32_t m_flStartTime = 0x1B8;
	constexpr uint32_t m_flEndTime = 0x1BC;
	constexpr uint32_t m_flStartScale = 0x1C0;
	constexpr uint32_t m_flEndScale = 0x1C4;
	constexpr uint32_t m_bEaseInAndOut = 0x1C8;
	constexpr uint32_t m_flBias = 0x1CC;
}

namespace C_OP_ColorInterpolate
{
	constexpr uint32_t m_ColorFade = 0x1B8;
	constexpr uint32_t m_flFadeStartTime = 0x1C8;
	constexpr uint32_t m_flFadeEndTime = 0x1CC;
	constexpr uint32_t m_nFieldOutput = 0x1D0;
	constexpr uint32_t m_bEaseInOut = 0x1D4;
}

namespace C_OP_ColorInterpolateRandom
{
	constexpr uint32_t m_ColorFadeMin = 0x1B8;
	constexpr uint32_t m_ColorFadeMax = 0x1D4;
	constexpr uint32_t m_flFadeStartTime = 0x1E4;
	constexpr uint32_t m_flFadeEndTime = 0x1E8;
	constexpr uint32_t m_nFieldOutput = 0x1EC;
	constexpr uint32_t m_bEaseInOut = 0x1F0;
}

namespace C_OP_PositionLock
{
	constexpr uint32_t m_TransformInput = 0x1B8;
	constexpr uint32_t m_flStartTime_min = 0x220;
	constexpr uint32_t m_flStartTime_max = 0x224;
	constexpr uint32_t m_flStartTime_exp = 0x228;
	constexpr uint32_t m_flEndTime_min = 0x22C;
	constexpr uint32_t m_flEndTime_max = 0x230;
	constexpr uint32_t m_flEndTime_exp = 0x234;
	constexpr uint32_t m_flRange = 0x238;
	constexpr uint32_t m_flRangeBias = 0x240;
	constexpr uint32_t m_flJumpThreshold = 0x398;
	constexpr uint32_t m_flPrevPosScale = 0x39C;
	constexpr uint32_t m_bLockRot = 0x3A0;
	constexpr uint32_t m_vecScale = 0x3A8;
	constexpr uint32_t m_nFieldOutput = 0xA00;
	constexpr uint32_t m_nFieldOutputPrev = 0xA04;
}

namespace C_OP_ControlpointLight
{
	constexpr uint32_t m_flScale = 0x1B8;
	constexpr uint32_t m_nControlPoint1 = 0x640;
	constexpr uint32_t m_nControlPoint2 = 0x644;
	constexpr uint32_t m_nControlPoint3 = 0x648;
	constexpr uint32_t m_nControlPoint4 = 0x64C;
	constexpr uint32_t m_vecCPOffset1 = 0x650;
	constexpr uint32_t m_vecCPOffset2 = 0x65C;
	constexpr uint32_t m_vecCPOffset3 = 0x668;
	constexpr uint32_t m_vecCPOffset4 = 0x674;
	constexpr uint32_t m_LightFiftyDist1 = 0x680;
	constexpr uint32_t m_LightZeroDist1 = 0x684;
	constexpr uint32_t m_LightFiftyDist2 = 0x688;
	constexpr uint32_t m_LightZeroDist2 = 0x68C;
	constexpr uint32_t m_LightFiftyDist3 = 0x690;
	constexpr uint32_t m_LightZeroDist3 = 0x694;
	constexpr uint32_t m_LightFiftyDist4 = 0x698;
	constexpr uint32_t m_LightZeroDist4 = 0x69C;
	constexpr uint32_t m_LightColor1 = 0x6A0;
	constexpr uint32_t m_LightColor2 = 0x6A4;
	constexpr uint32_t m_LightColor3 = 0x6A8;
	constexpr uint32_t m_LightColor4 = 0x6AC;
	constexpr uint32_t m_bLightType1 = 0x6B0;
	constexpr uint32_t m_bLightType2 = 0x6B1;
	constexpr uint32_t m_bLightType3 = 0x6B2;
	constexpr uint32_t m_bLightType4 = 0x6B3;
	constexpr uint32_t m_bLightDynamic1 = 0x6B4;
	constexpr uint32_t m_bLightDynamic2 = 0x6B5;
	constexpr uint32_t m_bLightDynamic3 = 0x6B6;
	constexpr uint32_t m_bLightDynamic4 = 0x6B7;
	constexpr uint32_t m_bUseNormal = 0x6B8;
	constexpr uint32_t m_bUseHLambert = 0x6B9;
	constexpr uint32_t m_bClampLowerRange = 0x6BE;
	constexpr uint32_t m_bClampUpperRange = 0x6BF;
}

namespace C_OP_GlobalLight
{
	constexpr uint32_t m_flScale = 0x1B8;
	constexpr uint32_t m_bClampLowerRange = 0x1BC;
	constexpr uint32_t m_bClampUpperRange = 0x1BD;
}

namespace C_OP_SetChildControlPoints
{
	constexpr uint32_t m_nChildGroupID = 0x1B8;
	constexpr uint32_t m_nFirstControlPoint = 0x1BC;
	constexpr uint32_t m_nNumControlPoints = 0x1C0;
	constexpr uint32_t m_nFirstSourcePoint = 0x1C8;
	constexpr uint32_t m_bReverse = 0x320;
	constexpr uint32_t m_bSetOrientation = 0x321;
}

namespace C_OP_SetControlPointsToParticle
{
	constexpr uint32_t m_nChildGroupID = 0x1B8;
	constexpr uint32_t m_nFirstControlPoint = 0x1BC;
	constexpr uint32_t m_nNumControlPoints = 0x1C0;
	constexpr uint32_t m_nFirstSourcePoint = 0x1C4;
	constexpr uint32_t m_bSetOrientation = 0x1C8;
	constexpr uint32_t m_nOrientationMode = 0x1CC;
	constexpr uint32_t m_nSetParent = 0x1D0;
}

namespace C_OP_SetControlPointsToModelParticles
{
	constexpr uint32_t m_HitboxSetName = 0x1B8;
	constexpr uint32_t m_AttachmentName = 0x238;
	constexpr uint32_t m_nFirstControlPoint = 0x2B8;
	constexpr uint32_t m_nNumControlPoints = 0x2BC;
	constexpr uint32_t m_nFirstSourcePoint = 0x2C0;
	constexpr uint32_t m_bSkin = 0x2C4;
	constexpr uint32_t m_bAttachment = 0x2C5;
}

namespace C_OP_SetPerChildControlPoint
{
	constexpr uint32_t m_nChildGroupID = 0x1B8;
	constexpr uint32_t m_nFirstControlPoint = 0x1BC;
	constexpr uint32_t m_nNumControlPoints = 0x1C0;
	constexpr uint32_t m_nParticleIncrement = 0x1C8;
	constexpr uint32_t m_nFirstSourcePoint = 0x320;
	constexpr uint32_t m_bSetOrientation = 0x478;
	constexpr uint32_t m_nOrientationField = 0x47C;
	constexpr uint32_t m_bNumBasedOnParticleCount = 0x480;
}

namespace C_OP_SetPerChildControlPointFromAttribute
{
	constexpr uint32_t m_nChildGroupID = 0x1B8;
	constexpr uint32_t m_nFirstControlPoint = 0x1BC;
	constexpr uint32_t m_nNumControlPoints = 0x1C0;
	constexpr uint32_t m_nParticleIncrement = 0x1C4;
	constexpr uint32_t m_nFirstSourcePoint = 0x1C8;
	constexpr uint32_t m_bNumBasedOnParticleCount = 0x1CC;
	constexpr uint32_t m_nAttributeToRead = 0x1D0;
	constexpr uint32_t m_nCPField = 0x1D4;
}

namespace C_OP_RemapTransformOrientationToYaw
{
	constexpr uint32_t m_TransformInput = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x220;
	constexpr uint32_t m_flRotOffset = 0x224;
	constexpr uint32_t m_flSpinStrength = 0x228;
}

namespace C_OP_DampenToCP
{
	constexpr uint32_t m_nControlPointNumber = 0x1B8;
	constexpr uint32_t m_flRange = 0x1BC;
	constexpr uint32_t m_flScale = 0x1C0;
}

namespace C_OP_SetToCP
{
	constexpr uint32_t m_nControlPointNumber = 0x1B8;
	constexpr uint32_t m_vecOffset = 0x1BC;
	constexpr uint32_t m_bOffsetLocal = 0x1C8;
}

namespace C_OP_PinParticleToCP
{
	constexpr uint32_t m_nControlPointNumber = 0x1B8;
	constexpr uint32_t m_vecOffset = 0x1C0;
	constexpr uint32_t m_bOffsetLocal = 0x818;
	constexpr uint32_t m_nParticleSelection = 0x81C;
	constexpr uint32_t m_nParticleNumber = 0x820;
	constexpr uint32_t m_nPinBreakType = 0x978;
	constexpr uint32_t m_flBreakDistance = 0x980;
	constexpr uint32_t m_flBreakSpeed = 0xAD8;
	constexpr uint32_t m_flAge = 0xC30;
	constexpr uint32_t m_nBreakControlPointNumber = 0xD88;
	constexpr uint32_t m_nBreakControlPointNumber2 = 0xD8C;
	constexpr uint32_t m_flBreakValue = 0xD90;
	constexpr uint32_t m_flInterpolation = 0xEE8;
}

namespace C_OP_MovementRigidAttachToCP
{
	constexpr uint32_t m_nControlPointNumber = 0x1B8;
	constexpr uint32_t m_nScaleControlPoint = 0x1BC;
	constexpr uint32_t m_nScaleCPField = 0x1C0;
	constexpr uint32_t m_nFieldInput = 0x1C4;
	constexpr uint32_t m_nFieldOutput = 0x1C8;
	constexpr uint32_t m_bOffsetLocal = 0x1CC;
}

namespace C_OP_LerpToInitialPosition
{
	constexpr uint32_t m_nControlPointNumber = 0x1B8;
	constexpr uint32_t m_flInterpolation = 0x1C0;
	constexpr uint32_t m_nCacheField = 0x318;
	constexpr uint32_t m_flScale = 0x320;
	constexpr uint32_t m_vecScale = 0x478;
}

namespace C_OP_DistanceBetweenTransforms
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_TransformStart = 0x1C0;
	constexpr uint32_t m_TransformEnd = 0x228;
	constexpr uint32_t m_flInputMin = 0x290;
	constexpr uint32_t m_flInputMax = 0x3E8;
	constexpr uint32_t m_flOutputMin = 0x540;
	constexpr uint32_t m_flOutputMax = 0x698;
	constexpr uint32_t m_flMaxTraceLength = 0x7F0;
	constexpr uint32_t m_flLOSScale = 0x7F4;
	constexpr uint32_t m_CollisionGroupName = 0x7F8;
	constexpr uint32_t m_nTraceSet = 0x878;
	constexpr uint32_t m_bLOS = 0x87C;
	constexpr uint32_t m_nSetMethod = 0x880;
}

namespace C_OP_PercentageBetweenTransforms
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flInputMin = 0x1BC;
	constexpr uint32_t m_flInputMax = 0x1C0;
	constexpr uint32_t m_flOutputMin = 0x1C4;
	constexpr uint32_t m_flOutputMax = 0x1C8;
	constexpr uint32_t m_TransformStart = 0x1D0;
	constexpr uint32_t m_TransformEnd = 0x238;
	constexpr uint32_t m_nSetMethod = 0x2A0;
	constexpr uint32_t m_bActiveRange = 0x2A4;
	constexpr uint32_t m_bRadialCheck = 0x2A5;
}

namespace C_OP_PercentageBetweenTransformsVector
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flInputMin = 0x1BC;
	constexpr uint32_t m_flInputMax = 0x1C0;
	constexpr uint32_t m_vecOutputMin = 0x1C4;
	constexpr uint32_t m_vecOutputMax = 0x1D0;
	constexpr uint32_t m_TransformStart = 0x1E0;
	constexpr uint32_t m_TransformEnd = 0x248;
	constexpr uint32_t m_nSetMethod = 0x2B0;
	constexpr uint32_t m_bActiveRange = 0x2B4;
	constexpr uint32_t m_bRadialCheck = 0x2B5;
}

namespace C_OP_PercentageBetweenTransformLerpCPs
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flInputMin = 0x1BC;
	constexpr uint32_t m_flInputMax = 0x1C0;
	constexpr uint32_t m_TransformStart = 0x1C8;
	constexpr uint32_t m_TransformEnd = 0x230;
	constexpr uint32_t m_nOutputStartCP = 0x298;
	constexpr uint32_t m_nOutputStartField = 0x29C;
	constexpr uint32_t m_nOutputEndCP = 0x2A0;
	constexpr uint32_t m_nOutputEndField = 0x2A4;
	constexpr uint32_t m_nSetMethod = 0x2A8;
	constexpr uint32_t m_bActiveRange = 0x2AC;
	constexpr uint32_t m_bRadialCheck = 0x2AD;
}

namespace C_OP_DistanceBetweenVecs
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_vecPoint1 = 0x1C0;
	constexpr uint32_t m_vecPoint2 = 0x818;
	constexpr uint32_t m_flInputMin = 0xE70;
	constexpr uint32_t m_flInputMax = 0xFC8;
	constexpr uint32_t m_flOutputMin = 0x1120;
	constexpr uint32_t m_flOutputMax = 0x1278;
	constexpr uint32_t m_nSetMethod = 0x13D0;
	constexpr uint32_t m_bDeltaTime = 0x13D4;
}

namespace C_OP_DirectionBetweenVecsToVec
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_vecPoint1 = 0x1C0;
	constexpr uint32_t m_vecPoint2 = 0x818;
}

namespace C_OP_DistanceToTransform
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flInputMin = 0x1C0;
	constexpr uint32_t m_flInputMax = 0x318;
	constexpr uint32_t m_flOutputMin = 0x470;
	constexpr uint32_t m_flOutputMax = 0x5C8;
	constexpr uint32_t m_TransformStart = 0x720;
	constexpr uint32_t m_bLOS = 0x788;
	constexpr uint32_t m_CollisionGroupName = 0x789;
	constexpr uint32_t m_nTraceSet = 0x80C;
	constexpr uint32_t m_flMaxTraceLength = 0x810;
	constexpr uint32_t m_flLOSScale = 0x814;
	constexpr uint32_t m_nSetMethod = 0x818;
	constexpr uint32_t m_bActiveRange = 0x81C;
	constexpr uint32_t m_bAdditive = 0x81D;
	constexpr uint32_t m_vecComponentScale = 0x820;
}

namespace C_OP_CylindricalDistanceToTransform
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flInputMin = 0x1C0;
	constexpr uint32_t m_flInputMax = 0x318;
	constexpr uint32_t m_flOutputMin = 0x470;
	constexpr uint32_t m_flOutputMax = 0x5C8;
	constexpr uint32_t m_TransformStart = 0x720;
	constexpr uint32_t m_TransformEnd = 0x788;
	constexpr uint32_t m_nSetMethod = 0x7F0;
	constexpr uint32_t m_bActiveRange = 0x7F4;
	constexpr uint32_t m_bAdditive = 0x7F5;
	constexpr uint32_t m_bCapsule = 0x7F6;
}

namespace C_OP_RtEnvCull
{
	constexpr uint32_t m_vecTestDir = 0x1B8;
	constexpr uint32_t m_vecTestNormal = 0x1C4;
	constexpr uint32_t m_bCullOnMiss = 0x1D0;
	constexpr uint32_t m_bStickInsteadOfCull = 0x1D1;
	constexpr uint32_t m_RtEnvName = 0x1D2;
	constexpr uint32_t m_nRTEnvCP = 0x254;
	constexpr uint32_t m_nComponent = 0x258;
}

namespace C_OP_MovementLoopInsideSphere
{
	constexpr uint32_t m_nCP = 0x1B8;
	constexpr uint32_t m_flDistance = 0x1C0;
	constexpr uint32_t m_vecScale = 0x318;
	constexpr uint32_t m_nDistSqrAttr = 0x970;
}

namespace C_OP_MoveToHitbox
{
	constexpr uint32_t m_modelInput = 0x1B8;
	constexpr uint32_t m_transformInput = 0x218;
	constexpr uint32_t m_flLifeTimeLerpStart = 0x284;
	constexpr uint32_t m_flLifeTimeLerpEnd = 0x288;
	constexpr uint32_t m_flPrevPosScale = 0x28C;
	constexpr uint32_t m_HitboxSetName = 0x290;
	constexpr uint32_t m_bUseBones = 0x310;
	constexpr uint32_t m_nLerpType = 0x314;
	constexpr uint32_t m_flInterpolation = 0x318;
}

namespace C_OP_LockToBone
{
	constexpr uint32_t m_modelInput = 0x1B8;
	constexpr uint32_t m_transformInput = 0x218;
	constexpr uint32_t m_flLifeTimeFadeStart = 0x280;
	constexpr uint32_t m_flLifeTimeFadeEnd = 0x284;
	constexpr uint32_t m_flJumpThreshold = 0x288;
	constexpr uint32_t m_flPrevPosScale = 0x28C;
	constexpr uint32_t m_HitboxSetName = 0x290;
	constexpr uint32_t m_bRigid = 0x310;
	constexpr uint32_t m_bUseBones = 0x311;
	constexpr uint32_t m_nFieldOutput = 0x314;
	constexpr uint32_t m_nFieldOutputPrev = 0x318;
	constexpr uint32_t m_nRotationSetType = 0x31C;
	constexpr uint32_t m_bRigidRotationLock = 0x320;
	constexpr uint32_t m_vecRotation = 0x328;
	constexpr uint32_t m_flRotLerp = 0x980;
}

namespace C_OP_SnapshotRigidSkinToBones
{
	constexpr uint32_t m_bTransformNormals = 0x1B8;
	constexpr uint32_t m_bTransformRadii = 0x1B9;
	constexpr uint32_t m_nControlPointNumber = 0x1BC;
}

namespace C_OP_SnapshotSkinToBones
{
	constexpr uint32_t m_bTransformNormals = 0x1B8;
	constexpr uint32_t m_bTransformRadii = 0x1B9;
	constexpr uint32_t m_nControlPointNumber = 0x1BC;
	constexpr uint32_t m_flLifeTimeFadeStart = 0x1C0;
	constexpr uint32_t m_flLifeTimeFadeEnd = 0x1C4;
	constexpr uint32_t m_flJumpThreshold = 0x1C8;
	constexpr uint32_t m_flPrevPosScale = 0x1CC;
}

namespace C_OP_CPOffsetToPercentageBetweenCPs
{
	constexpr uint32_t m_flInputMin = 0x1B8;
	constexpr uint32_t m_flInputMax = 0x1BC;
	constexpr uint32_t m_flInputBias = 0x1C0;
	constexpr uint32_t m_nStartCP = 0x1C4;
	constexpr uint32_t m_nEndCP = 0x1C8;
	constexpr uint32_t m_nOffsetCP = 0x1CC;
	constexpr uint32_t m_nOuputCP = 0x1D0;
	constexpr uint32_t m_nInputCP = 0x1D4;
	constexpr uint32_t m_bRadialCheck = 0x1D8;
	constexpr uint32_t m_bScaleOffset = 0x1D9;
	constexpr uint32_t m_vecOffset = 0x1DC;
}

namespace C_OP_PlaneCull
{
	constexpr uint32_t m_nPlaneControlPoint = 0x1B8;
	constexpr uint32_t m_vecPlaneDirection = 0x1BC;
	constexpr uint32_t m_bLocalSpace = 0x1C8;
	constexpr uint32_t m_flPlaneOffset = 0x1CC;
}

namespace C_OP_DistanceCull
{
	constexpr uint32_t m_nControlPoint = 0x1B8;
	constexpr uint32_t m_vecPointOffset = 0x1BC;
	constexpr uint32_t m_flDistance = 0x1C8;
	constexpr uint32_t m_bCullInside = 0x1CC;
}

namespace C_OP_ModelCull
{
	constexpr uint32_t m_nControlPointNumber = 0x1B8;
	constexpr uint32_t m_bBoundBox = 0x1BC;
	constexpr uint32_t m_bCullOutside = 0x1BD;
	constexpr uint32_t m_bUseBones = 0x1BE;
	constexpr uint32_t m_HitboxSetName = 0x1BF;
}

namespace C_OP_ModelDampenMovement
{
	constexpr uint32_t m_nControlPointNumber = 0x1B8;
	constexpr uint32_t m_bBoundBox = 0x1BC;
	constexpr uint32_t m_bOutside = 0x1BD;
	constexpr uint32_t m_bUseBones = 0x1BE;
	constexpr uint32_t m_HitboxSetName = 0x1BF;
	constexpr uint32_t m_vecPosOffset = 0x240;
	constexpr uint32_t m_fDrag = 0x898;
}

namespace C_OP_SequenceFromModel
{
	constexpr uint32_t m_nControlPointNumber = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_nFieldOutputAnim = 0x1C0;
	constexpr uint32_t m_flInputMin = 0x1C4;
	constexpr uint32_t m_flInputMax = 0x1C8;
	constexpr uint32_t m_flOutputMin = 0x1CC;
	constexpr uint32_t m_flOutputMax = 0x1D0;
	constexpr uint32_t m_nSetMethod = 0x1D4;
}

namespace C_OP_VelocityMatchingForce
{
	constexpr uint32_t m_flDirScale = 0x1B8;
	constexpr uint32_t m_flSpdScale = 0x1BC;
	constexpr uint32_t m_nCPBroadcast = 0x1C0;
}

namespace C_OP_MovementMaintainOffset
{
	constexpr uint32_t m_vecOffset = 0x1B8;
	constexpr uint32_t m_nCP = 0x1C4;
	constexpr uint32_t m_bRadiusScale = 0x1C8;
}

namespace C_OP_MovementPlaceOnGround
{
	constexpr uint32_t m_flOffset = 0x1B8;
	constexpr uint32_t m_flMaxTraceLength = 0x310;
	constexpr uint32_t m_flTolerance = 0x314;
	constexpr uint32_t m_flTraceOffset = 0x318;
	constexpr uint32_t m_flLerpRate = 0x31C;
	constexpr uint32_t m_CollisionGroupName = 0x320;
	constexpr uint32_t m_nTraceSet = 0x3A0;
	constexpr uint32_t m_nRefCP1 = 0x3A4;
	constexpr uint32_t m_nRefCP2 = 0x3A8;
	constexpr uint32_t m_nLerpCP = 0x3AC;
	constexpr uint32_t m_nTraceMissBehavior = 0x3B8;
	constexpr uint32_t m_bIncludeShotHull = 0x3BC;
	constexpr uint32_t m_bIncludeWater = 0x3BD;
	constexpr uint32_t m_bSetNormal = 0x3C0;
	constexpr uint32_t m_bScaleOffset = 0x3C1;
	constexpr uint32_t m_nPreserveOffsetCP = 0x3C4;
	constexpr uint32_t m_nIgnoreCP = 0x3C8;
}

namespace C_OP_InheritFromParentParticles
{
	constexpr uint32_t m_flScale = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_nIncrement = 0x1C0;
	constexpr uint32_t m_bRandomDistribution = 0x1C4;
}

namespace C_OP_InheritFromParentParticlesV2
{
	constexpr uint32_t m_flScale = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_nIncrement = 0x1C0;
	constexpr uint32_t m_bRandomDistribution = 0x1C4;
	constexpr uint32_t m_nMissingParentBehavior = 0x1C8;
}

namespace C_OP_ReadFromNeighboringParticle
{
	constexpr uint32_t m_nFieldInput = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_nIncrement = 0x1C0;
	constexpr uint32_t m_DistanceCheck = 0x1C8;
	constexpr uint32_t m_flInterpolation = 0x320;
}

namespace C_OP_InheritFromPeerSystem
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_nFieldInput = 0x1BC;
	constexpr uint32_t m_nIncrement = 0x1C0;
	constexpr uint32_t m_nGroupID = 0x1C4;
}

namespace C_OP_RemapVectorComponentToScalar
{
	constexpr uint32_t m_nFieldInput = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_nComponent = 0x1C0;
}

namespace C_OP_OrientTo2dDirection
{
	constexpr uint32_t m_flRotOffset = 0x1B8;
	constexpr uint32_t m_flSpinStrength = 0x1BC;
	constexpr uint32_t m_nFieldOutput = 0x1C0;
}

namespace C_OP_RestartAfterDuration
{
	constexpr uint32_t m_flDurationMin = 0x1B8;
	constexpr uint32_t m_flDurationMax = 0x1BC;
	constexpr uint32_t m_nCP = 0x1C0;
	constexpr uint32_t m_nCPField = 0x1C4;
	constexpr uint32_t m_nChildGroupID = 0x1C8;
	constexpr uint32_t m_bOnlyChildren = 0x1CC;
}

namespace C_OP_Orient2DRelToCP
{
	constexpr uint32_t m_flRotOffset = 0x1B8;
	constexpr uint32_t m_flSpinStrength = 0x1BC;
	constexpr uint32_t m_nCP = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
}

namespace C_OP_MovementRotateParticleAroundAxis
{
	constexpr uint32_t m_vecRotAxis = 0x1B8;
	constexpr uint32_t m_flRotRate = 0x810;
	constexpr uint32_t m_TransformInput = 0x968;
	constexpr uint32_t m_bLocalSpace = 0x9D0;
}

namespace C_OP_RotateVector
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_vecRotAxisMin = 0x1BC;
	constexpr uint32_t m_vecRotAxisMax = 0x1C8;
	constexpr uint32_t m_flRotRateMin = 0x1D4;
	constexpr uint32_t m_flRotRateMax = 0x1D8;
	constexpr uint32_t m_bNormalize = 0x1DC;
	constexpr uint32_t m_flScale = 0x1E0;
}

namespace C_OP_MaxVelocity
{
	constexpr uint32_t m_flMaxVelocity = 0x1B8;
	constexpr uint32_t m_flMinVelocity = 0x1BC;
	constexpr uint32_t m_nOverrideCP = 0x1C0;
	constexpr uint32_t m_nOverrideCPField = 0x1C4;
}

namespace C_OP_LagCompensation
{
	constexpr uint32_t m_nDesiredVelocityCP = 0x1B8;
	constexpr uint32_t m_nLatencyCP = 0x1BC;
	constexpr uint32_t m_nLatencyCPField = 0x1C0;
	constexpr uint32_t m_nDesiredVelocityCPField = 0x1C4;
}

namespace C_OP_MaintainSequentialPath
{
	constexpr uint32_t m_fMaxDistance = 0x1B8;
	constexpr uint32_t m_flNumToAssign = 0x1BC;
	constexpr uint32_t m_flCohesionStrength = 0x1C0;
	constexpr uint32_t m_flTolerance = 0x1C4;
	constexpr uint32_t m_bLoop = 0x1C8;
	constexpr uint32_t m_bUseParticleCount = 0x1C9;
	constexpr uint32_t m_PathParams = 0x1D0;
}

namespace C_OP_LockToSavedSequentialPathV2
{
	constexpr uint32_t m_flFadeStart = 0x1B8;
	constexpr uint32_t m_flFadeEnd = 0x1BC;
	constexpr uint32_t m_bCPPairs = 0x1C0;
	constexpr uint32_t m_PathParams = 0x1D0;
}

namespace C_OP_LockToSavedSequentialPath
{
	constexpr uint32_t m_flFadeStart = 0x1BC;
	constexpr uint32_t m_flFadeEnd = 0x1C0;
	constexpr uint32_t m_bCPPairs = 0x1C4;
	constexpr uint32_t m_PathParams = 0x1D0;
}

namespace C_OP_RemapDotProductToScalar
{
	constexpr uint32_t m_nInputCP1 = 0x1B8;
	constexpr uint32_t m_nInputCP2 = 0x1BC;
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_flInputMin = 0x1C4;
	constexpr uint32_t m_flInputMax = 0x1C8;
	constexpr uint32_t m_flOutputMin = 0x1CC;
	constexpr uint32_t m_flOutputMax = 0x1D0;
	constexpr uint32_t m_bUseParticleVelocity = 0x1D4;
	constexpr uint32_t m_nSetMethod = 0x1D8;
	constexpr uint32_t m_bActiveRange = 0x1DC;
	constexpr uint32_t m_bUseParticleNormal = 0x1DD;
}

namespace C_OP_RemapCPtoScalar
{
	constexpr uint32_t m_nCPInput = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_nField = 0x1C0;
	constexpr uint32_t m_flInputMin = 0x1C4;
	constexpr uint32_t m_flInputMax = 0x1C8;
	constexpr uint32_t m_flOutputMin = 0x1CC;
	constexpr uint32_t m_flOutputMax = 0x1D0;
	constexpr uint32_t m_flStartTime = 0x1D4;
	constexpr uint32_t m_flEndTime = 0x1D8;
	constexpr uint32_t m_flInterpRate = 0x1DC;
	constexpr uint32_t m_nSetMethod = 0x1E0;
}

namespace C_OP_NormalLock
{
	constexpr uint32_t m_nControlPointNumber = 0x1B8;
}

namespace C_OP_RemapCPtoVector
{
	constexpr uint32_t m_nCPInput = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_nLocalSpaceCP = 0x1C0;
	constexpr uint32_t m_vInputMin = 0x1C4;
	constexpr uint32_t m_vInputMax = 0x1D0;
	constexpr uint32_t m_vOutputMin = 0x1DC;
	constexpr uint32_t m_vOutputMax = 0x1E8;
	constexpr uint32_t m_flStartTime = 0x1F4;
	constexpr uint32_t m_flEndTime = 0x1F8;
	constexpr uint32_t m_flInterpRate = 0x1FC;
	constexpr uint32_t m_nSetMethod = 0x200;
	constexpr uint32_t m_bOffset = 0x204;
	constexpr uint32_t m_bAccelerate = 0x205;
}

namespace C_OP_SetCPtoVector
{
	constexpr uint32_t m_nCPInput = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
}

namespace C_OP_RemapTransformToVelocity
{
	constexpr uint32_t m_TransformInput = 0x1B8;
}

namespace C_OP_RemapVelocityToVector
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flScale = 0x1BC;
	constexpr uint32_t m_bNormalize = 0x1C0;
}

namespace C_OP_RemapCPVelocityToVector
{
	constexpr uint32_t m_nControlPoint = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_flScale = 0x1C0;
	constexpr uint32_t m_bNormalize = 0x1C4;
}

namespace C_OP_SetCPOrientationToDirection
{
	constexpr uint32_t m_nInputControlPoint = 0x1B8;
	constexpr uint32_t m_nOutputControlPoint = 0x1BC;
}

namespace C_OP_RemapDirectionToCPToVector
{
	constexpr uint32_t m_nCP = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_flScale = 0x1C0;
	constexpr uint32_t m_flOffsetRot = 0x1C4;
	constexpr uint32_t m_vecOffsetAxis = 0x1C8;
	constexpr uint32_t m_bNormalize = 0x1D4;
	constexpr uint32_t m_nFieldStrength = 0x1D8;
}

namespace C_OP_RemapCrossProductOfTwoVectorsToVector
{
	constexpr uint32_t m_InputVec1 = 0x1B8;
	constexpr uint32_t m_InputVec2 = 0x810;
	constexpr uint32_t m_nFieldOutput = 0xE68;
	constexpr uint32_t m_bNormalize = 0xE6C;
}

namespace C_OP_NormalizeVector
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flScale = 0x1BC;
}

namespace C_OP_RemapControlPointDirectionToVector
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_flScale = 0x1BC;
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
}

namespace C_OP_SetCPOrientationToGroundNormal
{
	constexpr uint32_t m_flInterpRate = 0x1B8;
	constexpr uint32_t m_flMaxTraceLength = 0x1BC;
	constexpr uint32_t m_flTolerance = 0x1C0;
	constexpr uint32_t m_flTraceOffset = 0x1C4;
	constexpr uint32_t m_CollisionGroupName = 0x1C8;
	constexpr uint32_t m_nTraceSet = 0x248;
	constexpr uint32_t m_nInputCP = 0x24C;
	constexpr uint32_t m_nOutputCP = 0x250;
	constexpr uint32_t m_bIncludeWater = 0x260;
}

namespace C_OP_RemapTransformOrientationToRotations
{
	constexpr uint32_t m_TransformInput = 0x1B8;
	constexpr uint32_t m_vecRotation = 0x220;
	constexpr uint32_t m_bUseQuat = 0x22C;
	constexpr uint32_t m_bWriteNormal = 0x22D;
}

namespace C_OP_RemapControlPointOrientationToRotation
{
	constexpr uint32_t m_nCP = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
	constexpr uint32_t m_flOffsetRot = 0x1C0;
	constexpr uint32_t m_nComponent = 0x1C4;
}

namespace C_OP_LockToPointList
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_pointList = 0x1C0;
	constexpr uint32_t m_bPlaceAlongPath = 0x1D8;
	constexpr uint32_t m_bClosedLoop = 0x1D9;
	constexpr uint32_t m_nNumPointsAlongPath = 0x1DC;
}

namespace C_OP_RemapNamedModelElementOnceTimed
{
	constexpr uint32_t m_hModel = 0x1B8;
	constexpr uint32_t m_inNames = 0x1C0;
	constexpr uint32_t m_outNames = 0x1D8;
	constexpr uint32_t m_fallbackNames = 0x1F0;
	constexpr uint32_t m_bModelFromRenderer = 0x208;
	constexpr uint32_t m_bProportional = 0x209;
	constexpr uint32_t m_nFieldInput = 0x20C;
	constexpr uint32_t m_nFieldOutput = 0x210;
	constexpr uint32_t m_flRemapTime = 0x214;
}

namespace C_OP_RemapNamedModelSequenceOnceTimed
{
}

namespace C_OP_RemapNamedModelBodyPartOnceTimed
{
}

namespace C_OP_RemapNamedModelMeshGroupOnceTimed
{
}

namespace C_OP_RemapNamedModelElementEndCap
{
	constexpr uint32_t m_hModel = 0x1B8;
	constexpr uint32_t m_inNames = 0x1C0;
	constexpr uint32_t m_outNames = 0x1D8;
	constexpr uint32_t m_fallbackNames = 0x1F0;
	constexpr uint32_t m_bModelFromRenderer = 0x208;
	constexpr uint32_t m_nFieldInput = 0x20C;
	constexpr uint32_t m_nFieldOutput = 0x210;
}

namespace C_OP_RemapNamedModelSequenceEndCap
{
}

namespace C_OP_RemapNamedModelBodyPartEndCap
{
}

namespace C_OP_RemapNamedModelMeshGroupEndCap
{
}

namespace C_OP_SetFromCPSnapshot
{
	constexpr uint32_t m_nControlPointNumber = 0x1B8;
	constexpr uint32_t m_nAttributeToRead = 0x1BC;
	constexpr uint32_t m_nAttributeToWrite = 0x1C0;
	constexpr uint32_t m_nLocalSpaceCP = 0x1C4;
	constexpr uint32_t m_bRandom = 0x1C8;
	constexpr uint32_t m_bReverse = 0x1C9;
	constexpr uint32_t m_nRandomSeed = 0x1CC;
	constexpr uint32_t m_nSnapShotStartPoint = 0x1D0;
	constexpr uint32_t m_nSnapShotIncrement = 0x328;
	constexpr uint32_t m_flInterpolation = 0x480;
	constexpr uint32_t m_bSubSample = 0x5D8;
	constexpr uint32_t m_bPrev = 0x5D9;
}

namespace C_OP_VectorFieldSnapshot
{
	constexpr uint32_t m_nControlPointNumber = 0x1B8;
	constexpr uint32_t m_nAttributeToWrite = 0x1BC;
	constexpr uint32_t m_nLocalSpaceCP = 0x1C0;
	constexpr uint32_t m_flInterpolation = 0x1C8;
	constexpr uint32_t m_vecScale = 0x320;
	constexpr uint32_t m_flBoundaryDampening = 0x978;
	constexpr uint32_t m_bSetVelocity = 0x97C;
	constexpr uint32_t m_bLockToSurface = 0x97D;
	constexpr uint32_t m_flGridSpacing = 0x980;
}

namespace C_OP_SetAttributeToScalarExpression
{
	constexpr uint32_t m_nExpression = 0x1B8;
	constexpr uint32_t m_flInput1 = 0x1C0;
	constexpr uint32_t m_flInput2 = 0x318;
	constexpr uint32_t m_flOutputRemap = 0x470;
	constexpr uint32_t m_nOutputField = 0x5C8;
	constexpr uint32_t m_nSetMethod = 0x5CC;
}

namespace C_OP_SetVectorAttributeToVectorExpression
{
	constexpr uint32_t m_nExpression = 0x1B8;
	constexpr uint32_t m_vInput1 = 0x1C0;
	constexpr uint32_t m_vInput2 = 0x818;
	constexpr uint32_t m_nOutputField = 0xE70;
	constexpr uint32_t m_nSetMethod = 0xE74;
	constexpr uint32_t m_bNormalizedOutput = 0xE78;
}

namespace C_OP_SetFloatAttributeToVectorExpression
{
	constexpr uint32_t m_nExpression = 0x1B8;
	constexpr uint32_t m_vInput1 = 0x1C0;
	constexpr uint32_t m_vInput2 = 0x818;
	constexpr uint32_t m_flOutputRemap = 0xE70;
	constexpr uint32_t m_nOutputField = 0xFC8;
	constexpr uint32_t m_nSetMethod = 0xFCC;
}

namespace C_OP_RemapGravityToVector
{
	constexpr uint32_t m_vInput1 = 0x1B8;
	constexpr uint32_t m_nOutputField = 0x810;
	constexpr uint32_t m_nSetMethod = 0x814;
	constexpr uint32_t m_bNormalizedOutput = 0x818;
}

namespace C_OP_MovementSkinnedPositionFromCPSnapshot
{
	constexpr uint32_t m_nSnapshotControlPointNumber = 0x1B8;
	constexpr uint32_t m_nControlPointNumber = 0x1BC;
	constexpr uint32_t m_bRandom = 0x1C0;
	constexpr uint32_t m_nRandomSeed = 0x1C4;
	constexpr uint32_t m_bSetNormal = 0x1C8;
	constexpr uint32_t m_bSetRadius = 0x1C9;
	constexpr uint32_t m_nIndexType = 0x1CC;
	constexpr uint32_t m_flReadIndex = 0x1D0;
	constexpr uint32_t m_flIncrement = 0x328;
	constexpr uint32_t m_nFullLoopIncrement = 0x480;
	constexpr uint32_t m_nSnapShotStartPoint = 0x5D8;
	constexpr uint32_t m_flInterpolation = 0x730;
}

namespace C_OP_MovementMoveAlongSkinnedCPSnapshot
{
	constexpr uint32_t m_nControlPointNumber = 0x1B8;
	constexpr uint32_t m_nSnapshotControlPointNumber = 0x1BC;
	constexpr uint32_t m_bSetNormal = 0x1C0;
	constexpr uint32_t m_bSetRadius = 0x1C1;
	constexpr uint32_t m_flInterpolation = 0x1C8;
	constexpr uint32_t m_flTValue = 0x320;
}

namespace C_OP_QuantizeFloat
{
	constexpr uint32_t m_InputValue = 0x1B8;
	constexpr uint32_t m_nOutputField = 0x310;
}

namespace C_OP_SetUserEvent
{
	constexpr uint32_t m_flInput = 0x1B8;
	constexpr uint32_t m_flRisingEdge = 0x310;
	constexpr uint32_t m_nRisingEventType = 0x468;
	constexpr uint32_t m_flFallingEdge = 0x470;
	constexpr uint32_t m_nFallingEventType = 0x5C8;
}

namespace C_OP_SetFloatCollection
{
	constexpr uint32_t m_InputValue = 0x1B8;
	constexpr uint32_t m_nOutputField = 0x310;
	constexpr uint32_t m_nSetMethod = 0x314;
	constexpr uint32_t m_Lerp = 0x318;
}

namespace C_OP_SetFloat
{
	constexpr uint32_t m_InputValue = 0x1B8;
	constexpr uint32_t m_nOutputField = 0x310;
	constexpr uint32_t m_nSetMethod = 0x314;
	constexpr uint32_t m_Lerp = 0x318;
}

namespace C_OP_SetVec
{
	constexpr uint32_t m_InputValue = 0x1B8;
	constexpr uint32_t m_nOutputField = 0x810;
	constexpr uint32_t m_nSetMethod = 0x814;
	constexpr uint32_t m_Lerp = 0x818;
	constexpr uint32_t m_bNormalizedOutput = 0x970;
}

namespace C_OP_DragRelativeToPlane
{
	constexpr uint32_t m_flDragAtPlane = 0x1B8;
	constexpr uint32_t m_flFalloff = 0x310;
	constexpr uint32_t m_bDirectional = 0x468;
	constexpr uint32_t m_vecPlaneNormal = 0x470;
	constexpr uint32_t m_nControlPointNumber = 0xAC8;
}

namespace C_OP_RemapDensityGradientToVectorAttribute
{
	constexpr uint32_t m_flRadiusScale = 0x1B8;
	constexpr uint32_t m_nFieldOutput = 0x1BC;
}

namespace C_OP_LockPoints
{
	constexpr uint32_t m_nMinCol = 0x1B8;
	constexpr uint32_t m_nMaxCol = 0x1BC;
	constexpr uint32_t m_nMinRow = 0x1C0;
	constexpr uint32_t m_nMaxRow = 0x1C4;
	constexpr uint32_t m_nControlPoint = 0x1C8;
	constexpr uint32_t m_flBlendValue = 0x1CC;
}

namespace C_OP_RemapDistanceToLineSegmentBase
{
	constexpr uint32_t m_nCP0 = 0x1B8;
	constexpr uint32_t m_nCP1 = 0x1BC;
	constexpr uint32_t m_flMinInputValue = 0x1C0;
	constexpr uint32_t m_flMaxInputValue = 0x1C4;
	constexpr uint32_t m_bInfiniteLine = 0x1C8;
}

namespace C_OP_RemapDistanceToLineSegmentToScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1D0;
	constexpr uint32_t m_flMinOutputValue = 0x1D4;
	constexpr uint32_t m_flMaxOutputValue = 0x1D8;
}

namespace C_OP_RemapDistanceToLineSegmentToVector
{
	constexpr uint32_t m_nFieldOutput = 0x1D0;
	constexpr uint32_t m_vMinOutputValue = 0x1D4;
	constexpr uint32_t m_vMaxOutputValue = 0x1E0;
}

namespace C_OP_TeleportBeam
{
	constexpr uint32_t m_nCPPosition = 0x1B8;
	constexpr uint32_t m_nCPVelocity = 0x1BC;
	constexpr uint32_t m_nCPMisc = 0x1C0;
	constexpr uint32_t m_nCPColor = 0x1C4;
	constexpr uint32_t m_nCPInvalidColor = 0x1C8;
	constexpr uint32_t m_nCPExtraArcData = 0x1CC;
	constexpr uint32_t m_vGravity = 0x1D0;
	constexpr uint32_t m_flArcMaxDuration = 0x1DC;
	constexpr uint32_t m_flSegmentBreak = 0x1E0;
	constexpr uint32_t m_flArcSpeed = 0x1E4;
	constexpr uint32_t m_flAlpha = 0x1E8;
}

namespace C_OP_CycleScalar
{
	constexpr uint32_t m_nDestField = 0x1B8;
	constexpr uint32_t m_flStartValue = 0x1BC;
	constexpr uint32_t m_flEndValue = 0x1C0;
	constexpr uint32_t m_flCycleTime = 0x1C4;
	constexpr uint32_t m_bDoNotRepeatCycle = 0x1C8;
	constexpr uint32_t m_bSynchronizeParticles = 0x1C9;
	constexpr uint32_t m_nCPScale = 0x1CC;
	constexpr uint32_t m_nCPFieldMin = 0x1D0;
	constexpr uint32_t m_nCPFieldMax = 0x1D4;
	constexpr uint32_t m_nSetMethod = 0x1D8;
}

namespace C_OP_CalculateVectorAttribute
{
	constexpr uint32_t m_vStartValue = 0x1B8;
	constexpr uint32_t m_nFieldInput1 = 0x1C4;
	constexpr uint32_t m_flInputScale1 = 0x1C8;
	constexpr uint32_t m_nFieldInput2 = 0x1CC;
	constexpr uint32_t m_flInputScale2 = 0x1D0;
	constexpr uint32_t m_nControlPointInput1 = 0x1D4;
	constexpr uint32_t m_flControlPointScale1 = 0x1E8;
	constexpr uint32_t m_nControlPointInput2 = 0x1EC;
	constexpr uint32_t m_flControlPointScale2 = 0x200;
	constexpr uint32_t m_nFieldOutput = 0x204;
	constexpr uint32_t m_vFinalOutputScale = 0x208;
}

namespace C_OP_ColorAdjustHSL
{
	constexpr uint32_t m_flHueAdjust = 0x1B8;
	constexpr uint32_t m_flSaturationAdjust = 0x310;
	constexpr uint32_t m_flLightnessAdjust = 0x468;
}

namespace C_OP_ConnectParentParticleToNearest
{
	constexpr uint32_t m_nFirstControlPoint = 0x1B8;
	constexpr uint32_t m_nSecondControlPoint = 0x1BC;
	constexpr uint32_t m_bUseRadius = 0x1C0;
	constexpr uint32_t m_flRadiusScale = 0x1C8;
	constexpr uint32_t m_flParentRadiusScale = 0x320;
}

namespace C_OP_UpdateLightSource
{
	constexpr uint32_t m_vColorTint = 0x1B8;
	constexpr uint32_t m_flBrightnessScale = 0x1BC;
	constexpr uint32_t m_flRadiusScale = 0x1C0;
	constexpr uint32_t m_flMinimumLightingRadius = 0x1C4;
	constexpr uint32_t m_flMaximumLightingRadius = 0x1C8;
	constexpr uint32_t m_flPositionDampingConstant = 0x1CC;
}

namespace C_OP_RemapSpeedtoCP
{
	constexpr uint32_t m_nInControlPointNumber = 0x1C0;
	constexpr uint32_t m_nOutControlPointNumber = 0x1C4;
	constexpr uint32_t m_nField = 0x1C8;
	constexpr uint32_t m_flInputMin = 0x1CC;
	constexpr uint32_t m_flInputMax = 0x1D0;
	constexpr uint32_t m_flOutputMin = 0x1D4;
	constexpr uint32_t m_flOutputMax = 0x1D8;
	constexpr uint32_t m_bUseDeltaV = 0x1DC;
}

namespace C_OP_RemapAverageHitboxSpeedtoCP
{
	constexpr uint32_t m_nInControlPointNumber = 0x1C0;
	constexpr uint32_t m_nOutControlPointNumber = 0x1C4;
	constexpr uint32_t m_nField = 0x1C8;
	constexpr uint32_t m_nHitboxDataType = 0x1CC;
	constexpr uint32_t m_flInputMin = 0x1D0;
	constexpr uint32_t m_flInputMax = 0x328;
	constexpr uint32_t m_flOutputMin = 0x480;
	constexpr uint32_t m_flOutputMax = 0x5D8;
	constexpr uint32_t m_nHeightControlPointNumber = 0x730;
	constexpr uint32_t m_vecComparisonVelocity = 0x738;
	constexpr uint32_t m_HitboxSetName = 0xD90;
}

namespace C_OP_RemapDotProductToCP
{
	constexpr uint32_t m_nInputCP1 = 0x1C0;
	constexpr uint32_t m_nInputCP2 = 0x1C4;
	constexpr uint32_t m_nOutputCP = 0x1C8;
	constexpr uint32_t m_nOutVectorField = 0x1CC;
	constexpr uint32_t m_flInputMin = 0x1D0;
	constexpr uint32_t m_flInputMax = 0x328;
	constexpr uint32_t m_flOutputMin = 0x480;
	constexpr uint32_t m_flOutputMax = 0x5D8;
}

namespace C_OP_SetControlPointFieldToScalarExpression
{
	constexpr uint32_t m_nExpression = 0x1C0;
	constexpr uint32_t m_flInput1 = 0x1C8;
	constexpr uint32_t m_flInput2 = 0x320;
	constexpr uint32_t m_flOutputRemap = 0x478;
	constexpr uint32_t m_nOutputCP = 0x5D0;
	constexpr uint32_t m_nOutVectorField = 0x5D4;
}

namespace C_OP_SetControlPointFieldFromVectorExpression
{
	constexpr uint32_t m_nExpression = 0x1C0;
	constexpr uint32_t m_vecInput1 = 0x1C8;
	constexpr uint32_t m_vecInput2 = 0x820;
	constexpr uint32_t m_flOutputRemap = 0xE78;
	constexpr uint32_t m_nOutputCP = 0xFD0;
	constexpr uint32_t m_nOutVectorField = 0xFD4;
}

namespace C_OP_SetControlPointToVectorExpression
{
	constexpr uint32_t m_nExpression = 0x1C0;
	constexpr uint32_t m_nOutputCP = 0x1C4;
	constexpr uint32_t m_vInput1 = 0x1C8;
	constexpr uint32_t m_vInput2 = 0x820;
	constexpr uint32_t m_bNormalizedOutput = 0xE78;
}

namespace C_OP_RemapModelVolumetoCP
{
	constexpr uint32_t m_nBBoxType = 0x1C0;
	constexpr uint32_t m_nInControlPointNumber = 0x1C4;
	constexpr uint32_t m_nOutControlPointNumber = 0x1C8;
	constexpr uint32_t m_nOutControlPointMaxNumber = 0x1CC;
	constexpr uint32_t m_nField = 0x1D0;
	constexpr uint32_t m_flInputMin = 0x1D4;
	constexpr uint32_t m_flInputMax = 0x1D8;
	constexpr uint32_t m_flOutputMin = 0x1DC;
	constexpr uint32_t m_flOutputMax = 0x1E0;
}

namespace C_OP_RemapBoundingVolumetoCP
{
	constexpr uint32_t m_nOutControlPointNumber = 0x1C0;
	constexpr uint32_t m_flInputMin = 0x1C4;
	constexpr uint32_t m_flInputMax = 0x1C8;
	constexpr uint32_t m_flOutputMin = 0x1CC;
	constexpr uint32_t m_flOutputMax = 0x1D0;
}

namespace C_OP_RemapAverageScalarValuetoCP
{
	constexpr uint32_t m_nOutControlPointNumber = 0x1C0;
	constexpr uint32_t m_nOutVectorField = 0x1C4;
	constexpr uint32_t m_nField = 0x1C8;
	constexpr uint32_t m_flInputMin = 0x1CC;
	constexpr uint32_t m_flInputMax = 0x1D0;
	constexpr uint32_t m_flOutputMin = 0x1D4;
	constexpr uint32_t m_flOutputMax = 0x1D8;
}

namespace C_OP_RampCPLinearRandom
{
	constexpr uint32_t m_nOutControlPointNumber = 0x1C0;
	constexpr uint32_t m_vecRateMin = 0x1C4;
	constexpr uint32_t m_vecRateMax = 0x1D0;
}

namespace C_OP_SetParentControlPointsToChildCP
{
	constexpr uint32_t m_nChildGroupID = 0x1C0;
	constexpr uint32_t m_nChildControlPoint = 0x1C4;
	constexpr uint32_t m_nNumControlPoints = 0x1C8;
	constexpr uint32_t m_nFirstSourcePoint = 0x1CC;
	constexpr uint32_t m_bSetOrientation = 0x1D0;
}

namespace C_OP_SetVariable
{
	constexpr uint32_t m_variableReference = 0x1C0;
	constexpr uint32_t m_transformInput = 0x200;
	constexpr uint32_t m_positionOffset = 0x268;
	constexpr uint32_t m_rotationOffset = 0x274;
	constexpr uint32_t m_vecInput = 0x280;
	constexpr uint32_t m_floatInput = 0x8D8;
}

namespace C_OP_SetControlPointPositions
{
	constexpr uint32_t m_bUseWorldLocation = 0x1C0;
	constexpr uint32_t m_bOrient = 0x1C1;
	constexpr uint32_t m_bSetOnce = 0x1C2;
	constexpr uint32_t m_nCP1 = 0x1C4;
	constexpr uint32_t m_nCP2 = 0x1C8;
	constexpr uint32_t m_nCP3 = 0x1CC;
	constexpr uint32_t m_nCP4 = 0x1D0;
	constexpr uint32_t m_vecCP1Pos = 0x1D4;
	constexpr uint32_t m_vecCP2Pos = 0x1E0;
	constexpr uint32_t m_vecCP3Pos = 0x1EC;
	constexpr uint32_t m_vecCP4Pos = 0x1F8;
	constexpr uint32_t m_nHeadLocation = 0x204;
}

namespace C_OP_SetSingleControlPointPosition
{
	constexpr uint32_t m_bSetOnce = 0x1C0;
	constexpr uint32_t m_nCP1 = 0x1C4;
	constexpr uint32_t m_vecCP1Pos = 0x1C8;
	constexpr uint32_t m_transformInput = 0x820;
}

namespace C_OP_SetControlPointPositionToRandomActiveCP
{
	constexpr uint32_t m_nCP1 = 0x1C0;
	constexpr uint32_t m_nHeadLocationMin = 0x1C4;
	constexpr uint32_t m_nHeadLocationMax = 0x1C8;
	constexpr uint32_t m_flResetRate = 0x1D0;
}

namespace C_OP_SetRandomControlPointPosition
{
	constexpr uint32_t m_bUseWorldLocation = 0x1C0;
	constexpr uint32_t m_bOrient = 0x1C1;
	constexpr uint32_t m_nCP1 = 0x1C4;
	constexpr uint32_t m_nHeadLocation = 0x1C8;
	constexpr uint32_t m_flReRandomRate = 0x1D0;
	constexpr uint32_t m_vecCPMinPos = 0x328;
	constexpr uint32_t m_vecCPMaxPos = 0x334;
	constexpr uint32_t m_flInterpolation = 0x340;
}

namespace C_OP_SetControlPointOrientation
{
	constexpr uint32_t m_bUseWorldLocation = 0x1C0;
	constexpr uint32_t m_bRandomize = 0x1C2;
	constexpr uint32_t m_bSetOnce = 0x1C3;
	constexpr uint32_t m_nCP = 0x1C4;
	constexpr uint32_t m_nHeadLocation = 0x1C8;
	constexpr uint32_t m_vecRotation = 0x1CC;
	constexpr uint32_t m_vecRotationB = 0x1D8;
	constexpr uint32_t m_flInterpolation = 0x1E8;
}

namespace C_OP_SetControlPointFromObjectScale
{
	constexpr uint32_t m_nCPInput = 0x1C0;
	constexpr uint32_t m_nCPOutput = 0x1C4;
}

namespace C_OP_DistanceBetweenCPsToCP
{
	constexpr uint32_t m_nStartCP = 0x1C0;
	constexpr uint32_t m_nEndCP = 0x1C4;
	constexpr uint32_t m_nOutputCP = 0x1C8;
	constexpr uint32_t m_nOutputCPField = 0x1CC;
	constexpr uint32_t m_bSetOnce = 0x1D0;
	constexpr uint32_t m_flInputMin = 0x1D4;
	constexpr uint32_t m_flInputMax = 0x1D8;
	constexpr uint32_t m_flOutputMin = 0x1DC;
	constexpr uint32_t m_flOutputMax = 0x1E0;
	constexpr uint32_t m_flMaxTraceLength = 0x1E4;
	constexpr uint32_t m_flLOSScale = 0x1E8;
	constexpr uint32_t m_bLOS = 0x1EC;
	constexpr uint32_t m_CollisionGroupName = 0x1ED;
	constexpr uint32_t m_nTraceSet = 0x270;
	constexpr uint32_t m_nSetParent = 0x274;
}

namespace C_OP_SetControlPointToPlayer
{
	constexpr uint32_t m_nCP1 = 0x1C0;
	constexpr uint32_t m_vecCP1Pos = 0x1C4;
	constexpr uint32_t m_bOrientToEyes = 0x1D0;
}

namespace C_OP_SetControlPointToHand
{
	constexpr uint32_t m_nCP1 = 0x1C0;
	constexpr uint32_t m_nHand = 0x1C4;
	constexpr uint32_t m_vecCP1Pos = 0x1C8;
	constexpr uint32_t m_bOrientToHand = 0x1D4;
}

namespace C_OP_SetControlPointToHMD
{
	constexpr uint32_t m_nCP1 = 0x1C0;
	constexpr uint32_t m_vecCP1Pos = 0x1C4;
	constexpr uint32_t m_bOrientToHMD = 0x1D0;
}

namespace C_OP_SetControlPointPositionToTimeOfDayValue
{
	constexpr uint32_t m_nControlPointNumber = 0x1C0;
	constexpr uint32_t m_pszTimeOfDayParameter = 0x1C4;
	constexpr uint32_t m_vecDefaultValue = 0x244;
}

namespace C_OP_SetControlPointToCenter
{
	constexpr uint32_t m_nCP1 = 0x1C0;
	constexpr uint32_t m_vecCP1Pos = 0x1C4;
	constexpr uint32_t m_nSetParent = 0x1D0;
}

namespace C_OP_SetControlPointToCPVelocity
{
	constexpr uint32_t m_nCPInput = 0x1C0;
	constexpr uint32_t m_nCPOutputVel = 0x1C4;
	constexpr uint32_t m_bNormalize = 0x1C8;
	constexpr uint32_t m_nCPOutputMag = 0x1CC;
	constexpr uint32_t m_nCPField = 0x1D0;
	constexpr uint32_t m_vecComparisonVelocity = 0x1D8;
}

namespace C_OP_SetControlPointOrientationToCPVelocity
{
	constexpr uint32_t m_nCPInput = 0x1C0;
	constexpr uint32_t m_nCPOutput = 0x1C4;
}

namespace C_OP_StopAfterCPDuration
{
	constexpr uint32_t m_flDuration = 0x1C0;
	constexpr uint32_t m_bDestroyImmediately = 0x318;
	constexpr uint32_t m_bPlayEndCap = 0x319;
}

namespace C_OP_SetControlPointRotation
{
	constexpr uint32_t m_vecRotAxis = 0x1C0;
	constexpr uint32_t m_flRotRate = 0x818;
	constexpr uint32_t m_nCP = 0x970;
	constexpr uint32_t m_nLocalCP = 0x974;
}

namespace C_OP_RemapCPtoCP
{
	constexpr uint32_t m_nInputControlPoint = 0x1C0;
	constexpr uint32_t m_nOutputControlPoint = 0x1C4;
	constexpr uint32_t m_nInputField = 0x1C8;
	constexpr uint32_t m_nOutputField = 0x1CC;
	constexpr uint32_t m_flInputMin = 0x1D0;
	constexpr uint32_t m_flInputMax = 0x1D4;
	constexpr uint32_t m_flOutputMin = 0x1D8;
	constexpr uint32_t m_flOutputMax = 0x1DC;
	constexpr uint32_t m_bDerivative = 0x1E0;
	constexpr uint32_t m_flInterpRate = 0x1E4;
}

namespace C_OP_HSVShiftToCP
{
	constexpr uint32_t m_nColorCP = 0x1C0;
	constexpr uint32_t m_nColorGemEnableCP = 0x1C4;
	constexpr uint32_t m_nOutputCP = 0x1C8;
	constexpr uint32_t m_DefaultHSVColor = 0x1CC;
}

namespace C_OP_SetControlPointToImpactPoint
{
	constexpr uint32_t m_nCPOut = 0x1C0;
	constexpr uint32_t m_nCPIn = 0x1C4;
	constexpr uint32_t m_flUpdateRate = 0x1C8;
	constexpr uint32_t m_flTraceLength = 0x1D0;
	constexpr uint32_t m_flStartOffset = 0x328;
	constexpr uint32_t m_flOffset = 0x32C;
	constexpr uint32_t m_vecTraceDir = 0x330;
	constexpr uint32_t m_CollisionGroupName = 0x33C;
	constexpr uint32_t m_nTraceSet = 0x3BC;
	constexpr uint32_t m_bSetToEndpoint = 0x3C0;
	constexpr uint32_t m_bTraceToClosestSurface = 0x3C1;
	constexpr uint32_t m_bIncludeWater = 0x3C2;
}

namespace C_OP_SetCPOrientationToPointAtCP
{
	constexpr uint32_t m_nInputCP = 0x1C0;
	constexpr uint32_t m_nOutputCP = 0x1C4;
	constexpr uint32_t m_flInterpolation = 0x1C8;
	constexpr uint32_t m_b2DOrientation = 0x320;
	constexpr uint32_t m_bAvoidSingularity = 0x321;
	constexpr uint32_t m_bPointAway = 0x322;
}

namespace C_OP_EnableChildrenFromParentParticleCount
{
	constexpr uint32_t m_nChildGroupID = 0x1C0;
	constexpr uint32_t m_nFirstChild = 0x1C4;
	constexpr uint32_t m_nNumChildrenToEnable = 0x1C8;
	constexpr uint32_t m_bDisableChildren = 0x320;
	constexpr uint32_t m_bPlayEndcapOnStop = 0x321;
	constexpr uint32_t m_bDestroyImmediately = 0x322;
}

namespace C_OP_SelectivelyEnableChildren
{
	constexpr uint32_t m_nChildGroupID = 0x1C0;
	constexpr uint32_t m_nFirstChild = 0x318;
	constexpr uint32_t m_nNumChildrenToEnable = 0x470;
	constexpr uint32_t m_bPlayEndcapOnStop = 0x5C8;
	constexpr uint32_t m_bDestroyImmediately = 0x5C9;
}

namespace C_OP_PlayEndCapWhenFinished
{
	constexpr uint32_t m_bFireOnEmissionEnd = 0x1C0;
	constexpr uint32_t m_bIncludeChildren = 0x1C1;
}

namespace C_OP_ForceControlPointStub
{
	constexpr uint32_t m_ControlPoint = 0x1C0;
}

namespace C_OP_DriveCPFromGlobalSoundFloat
{
	constexpr uint32_t m_nOutputControlPoint = 0x1C0;
	constexpr uint32_t m_nOutputField = 0x1C4;
	constexpr uint32_t m_flInputMin = 0x1C8;
	constexpr uint32_t m_flInputMax = 0x1CC;
	constexpr uint32_t m_flOutputMin = 0x1D0;
	constexpr uint32_t m_flOutputMax = 0x1D4;
	constexpr uint32_t m_StackName = 0x1D8;
	constexpr uint32_t m_OperatorName = 0x1E0;
	constexpr uint32_t m_FieldName = 0x1E8;
}

namespace C_OP_SetControlPointFieldToWater
{
	constexpr uint32_t m_nSourceCP = 0x1C0;
	constexpr uint32_t m_nDestCP = 0x1C4;
	constexpr uint32_t m_nCPField = 0x1C8;
}

namespace C_OP_SetControlPointToWaterSurface
{
	constexpr uint32_t m_nSourceCP = 0x1C0;
	constexpr uint32_t m_nDestCP = 0x1C4;
	constexpr uint32_t m_nFlowCP = 0x1C8;
	constexpr uint32_t m_nActiveCP = 0x1CC;
	constexpr uint32_t m_nActiveCPField = 0x1D0;
	constexpr uint32_t m_flRetestRate = 0x1D8;
	constexpr uint32_t m_bAdaptiveThreshold = 0x330;
}

namespace C_OP_RepeatedTriggerChildGroup
{
	constexpr uint32_t m_nChildGroupID = 0x1C0;
	constexpr uint32_t m_flClusterRefireTime = 0x1C8;
	constexpr uint32_t m_flClusterSize = 0x320;
	constexpr uint32_t m_flClusterCooldown = 0x478;
	constexpr uint32_t m_bLimitChildCount = 0x5D0;
}

namespace C_OP_ChooseRandomChildrenInGroup
{
	constexpr uint32_t m_nChildGroupID = 0x1C0;
	constexpr uint32_t m_flNumberOfChildren = 0x1C8;
}

namespace C_OP_SetSimulationRate
{
	constexpr uint32_t m_flSimulationScale = 0x1C0;
}

namespace C_OP_ControlPointToRadialScreenSpace
{
	constexpr uint32_t m_nCPIn = 0x1C0;
	constexpr uint32_t m_vecCP1Pos = 0x1C4;
	constexpr uint32_t m_nCPOut = 0x1D0;
	constexpr uint32_t m_nCPOutField = 0x1D4;
	constexpr uint32_t m_nCPSSPosOut = 0x1D8;
}

namespace C_OP_LightningSnapshotGenerator
{
	constexpr uint32_t m_nCPSnapshot = 0x1C0;
	constexpr uint32_t m_nCPStartPnt = 0x1C4;
	constexpr uint32_t m_nCPEndPnt = 0x1C8;
	constexpr uint32_t m_flSegments = 0x1D0;
	constexpr uint32_t m_flOffset = 0x328;
	constexpr uint32_t m_flOffsetDecay = 0x480;
	constexpr uint32_t m_flRecalcRate = 0x5D8;
	constexpr uint32_t m_flUVScale = 0x730;
	constexpr uint32_t m_flUVOffset = 0x888;
	constexpr uint32_t m_flSplitRate = 0x9E0;
	constexpr uint32_t m_flBranchTwist = 0xB38;
	constexpr uint32_t m_nBranchBehavior = 0xC90;
	constexpr uint32_t m_flRadiusStart = 0xC98;
	constexpr uint32_t m_flRadiusEnd = 0xDF0;
	constexpr uint32_t m_flDedicatedPool = 0xF48;
}

namespace C_OP_RemapExternalWindToCP
{
	constexpr uint32_t m_nCP = 0x1C0;
	constexpr uint32_t m_nCPOutput = 0x1C4;
	constexpr uint32_t m_vecScale = 0x1C8;
	constexpr uint32_t m_bSetMagnitude = 0x820;
	constexpr uint32_t m_nOutVectorField = 0x824;
}

namespace C_OP_SetGravityToCP
{
	constexpr uint32_t m_nCPInput = 0x1C0;
	constexpr uint32_t m_nCPOutput = 0x1C4;
	constexpr uint32_t m_flScale = 0x1C8;
	constexpr uint32_t m_bSetOrientation = 0x320;
	constexpr uint32_t m_bSetZDown = 0x321;
}

namespace C_OP_QuantizeCPComponent
{
	constexpr uint32_t m_flInputValue = 0x1C0;
	constexpr uint32_t m_nCPOutput = 0x318;
	constexpr uint32_t m_nOutVectorField = 0x31C;
	constexpr uint32_t m_flQuantizeValue = 0x320;
}

namespace C_OP_RenderPoints
{
	constexpr uint32_t m_hMaterial = 0x208;
}

namespace CBaseTrailRenderer
{
	constexpr uint32_t m_nOrientationType = 0x2718;
	constexpr uint32_t m_nOrientationControlPoint = 0x271C;
	constexpr uint32_t m_flMinSize = 0x2720;
	constexpr uint32_t m_flMaxSize = 0x2724;
	constexpr uint32_t m_flStartFadeSize = 0x2728;
	constexpr uint32_t m_flEndFadeSize = 0x2880;
	constexpr uint32_t m_bClampV = 0x29D8;
}

namespace C_OP_RenderTrails
{
	constexpr uint32_t m_bEnableFadingAndClamping = 0x29E0;
	constexpr uint32_t m_flStartFadeDot = 0x29E4;
	constexpr uint32_t m_flEndFadeDot = 0x29E8;
	constexpr uint32_t m_nPrevPntSource = 0x29EC;
	constexpr uint32_t m_flMaxLength = 0x29F0;
	constexpr uint32_t m_flMinLength = 0x29F4;
	constexpr uint32_t m_bIgnoreDT = 0x29F8;
	constexpr uint32_t m_flConstrainRadiusToLengthRatio = 0x29FC;
	constexpr uint32_t m_flLengthScale = 0x2A00;
	constexpr uint32_t m_flLengthFadeInTime = 0x2A04;
	constexpr uint32_t m_flRadiusHeadTaper = 0x2A08;
	constexpr uint32_t m_vecHeadColorScale = 0x2B60;
	constexpr uint32_t m_flHeadAlphaScale = 0x31B8;
	constexpr uint32_t m_flRadiusTaper = 0x3310;
	constexpr uint32_t m_vecTailColorScale = 0x3468;
	constexpr uint32_t m_flTailAlphaScale = 0x3AC0;
	constexpr uint32_t m_nHorizCropField = 0x3C18;
	constexpr uint32_t m_nVertCropField = 0x3C1C;
	constexpr uint32_t m_flForwardShift = 0x3C20;
	constexpr uint32_t m_bFlipUVBasedOnPitchYaw = 0x3C24;
}

namespace C_OP_RenderRopes
{
	constexpr uint32_t m_bEnableFadingAndClamping = 0x2718;
	constexpr uint32_t m_flMinSize = 0x271C;
	constexpr uint32_t m_flMaxSize = 0x2720;
	constexpr uint32_t m_flStartFadeSize = 0x2724;
	constexpr uint32_t m_flEndFadeSize = 0x2728;
	constexpr uint32_t m_flStartFadeDot = 0x272C;
	constexpr uint32_t m_flEndFadeDot = 0x2730;
	constexpr uint32_t m_flRadiusTaper = 0x2734;
	constexpr uint32_t m_nMinTesselation = 0x2738;
	constexpr uint32_t m_nMaxTesselation = 0x273C;
	constexpr uint32_t m_flTessScale = 0x2740;
	constexpr uint32_t m_flTextureVWorldSize = 0x2748;
	constexpr uint32_t m_flTextureVScrollRate = 0x28A0;
	constexpr uint32_t m_flTextureVOffset = 0x29F8;
	constexpr uint32_t m_nTextureVParamsCP = 0x2B50;
	constexpr uint32_t m_bClampV = 0x2B54;
	constexpr uint32_t m_nScaleCP1 = 0x2B58;
	constexpr uint32_t m_nScaleCP2 = 0x2B5C;
	constexpr uint32_t m_flScaleVSizeByControlPointDistance = 0x2B60;
	constexpr uint32_t m_flScaleVScrollByControlPointDistance = 0x2B64;
	constexpr uint32_t m_flScaleVOffsetByControlPointDistance = 0x2B68;
	constexpr uint32_t m_bUseScalarForTextureCoordinate = 0x2B6D;
	constexpr uint32_t m_nScalarFieldForTextureCoordinate = 0x2B70;
	constexpr uint32_t m_flScalarAttributeTextureCoordScale = 0x2B74;
	constexpr uint32_t m_bReverseOrder = 0x2B78;
	constexpr uint32_t m_bClosedLoop = 0x2B79;
	constexpr uint32_t m_nOrientationType = 0x2B7C;
	constexpr uint32_t m_nVectorFieldForOrientation = 0x2B80;
	constexpr uint32_t m_bDrawAsOpaque = 0x2B84;
	constexpr uint32_t m_bGenerateNormals = 0x2B85;
}

namespace C_OP_RenderAsModels
{
	constexpr uint32_t m_ModelList = 0x208;
	constexpr uint32_t m_flModelScale = 0x224;
	constexpr uint32_t m_bFitToModelSize = 0x228;
	constexpr uint32_t m_bNonUniformScaling = 0x229;
	constexpr uint32_t m_nXAxisScalingAttribute = 0x22C;
	constexpr uint32_t m_nYAxisScalingAttribute = 0x230;
	constexpr uint32_t m_nZAxisScalingAttribute = 0x234;
	constexpr uint32_t m_nSizeCullBloat = 0x238;
}

namespace C_OP_RenderLights
{
	constexpr uint32_t m_flAnimationRate = 0x210;
	constexpr uint32_t m_nAnimationType = 0x214;
	constexpr uint32_t m_bAnimateInFPS = 0x218;
	constexpr uint32_t m_flMinSize = 0x21C;
	constexpr uint32_t m_flMaxSize = 0x220;
	constexpr uint32_t m_flStartFadeSize = 0x224;
	constexpr uint32_t m_flEndFadeSize = 0x228;
}

namespace C_OP_RenderBlobs
{
	constexpr uint32_t m_cubeWidth = 0x208;
	constexpr uint32_t m_cutoffRadius = 0x360;
	constexpr uint32_t m_renderRadius = 0x4B8;
	constexpr uint32_t m_nVertexCountKb = 0x610;
	constexpr uint32_t m_nIndexCountKb = 0x614;
	constexpr uint32_t m_nScaleCP = 0x618;
	constexpr uint32_t m_MaterialVars = 0x620;
	constexpr uint32_t m_hMaterial = 0x650;
}

namespace C_OP_RenderGpuImplicit
{
	constexpr uint32_t m_bUsePerParticleRadius = 0x208;
	constexpr uint32_t m_nVertexCountKb = 0x20C;
	constexpr uint32_t m_nIndexCountKb = 0x210;
	constexpr uint32_t m_fGridSize = 0x218;
	constexpr uint32_t m_fRadiusScale = 0x370;
	constexpr uint32_t m_fIsosurfaceThreshold = 0x4C8;
	constexpr uint32_t m_nScaleCP = 0x620;
	constexpr uint32_t m_hMaterial = 0x628;
}

namespace C_OP_RenderScreenVelocityRotate
{
	constexpr uint32_t m_flRotateRateDegrees = 0x208;
	constexpr uint32_t m_flForwardDegrees = 0x20C;
}

namespace C_OP_RenderModels
{
	constexpr uint32_t m_bOnlyRenderInEffectsBloomPass = 0x208;
	constexpr uint32_t m_bOnlyRenderInEffectsWaterPass = 0x209;
	constexpr uint32_t m_bUseMixedResolutionRendering = 0x20A;
	constexpr uint32_t m_bOnlyRenderInEffecsGameOverlay = 0x20B;
	constexpr uint32_t m_ModelList = 0x210;
	constexpr uint32_t m_nBodyGroupField = 0x228;
	constexpr uint32_t m_nSubModelField = 0x22C;
	constexpr uint32_t m_bIgnoreNormal = 0x230;
	constexpr uint32_t m_bOrientZ = 0x231;
	constexpr uint32_t m_bCenterOffset = 0x232;
	constexpr uint32_t m_vecLocalOffset = 0x238;
	constexpr uint32_t m_vecLocalRotation = 0x890;
	constexpr uint32_t m_bIgnoreRadius = 0xEE8;
	constexpr uint32_t m_nModelScaleCP = 0xEEC;
	constexpr uint32_t m_vecComponentScale = 0xEF0;
	constexpr uint32_t m_bLocalScale = 0x1548;
	constexpr uint32_t m_nSizeCullBloat = 0x154C;
	constexpr uint32_t m_bAnimated = 0x1550;
	constexpr uint32_t m_flAnimationRate = 0x1558;
	constexpr uint32_t m_bScaleAnimationRate = 0x16B0;
	constexpr uint32_t m_bForceLoopingAnimation = 0x16B1;
	constexpr uint32_t m_bResetAnimOnStop = 0x16B2;
	constexpr uint32_t m_bManualAnimFrame = 0x16B3;
	constexpr uint32_t m_nAnimationScaleField = 0x16B4;
	constexpr uint32_t m_nAnimationField = 0x16B8;
	constexpr uint32_t m_nManualFrameField = 0x16BC;
	constexpr uint32_t m_ActivityName = 0x16C0;
	constexpr uint32_t m_SequenceName = 0x17C0;
	constexpr uint32_t m_bEnableClothSimulation = 0x18C0;
	constexpr uint32_t m_ClothEffectName = 0x18C1;
	constexpr uint32_t m_hOverrideMaterial = 0x1908;
	constexpr uint32_t m_bOverrideTranslucentMaterials = 0x1910;
	constexpr uint32_t m_nSkin = 0x1918;
	constexpr uint32_t m_MaterialVars = 0x1A70;
	constexpr uint32_t m_flManualModelSelection = 0x1A88;
	constexpr uint32_t m_modelInput = 0x1BE0;
	constexpr uint32_t m_nLOD = 0x1C40;
	constexpr uint32_t m_EconSlotName = 0x1C44;
	constexpr uint32_t m_bOriginalModel = 0x1D44;
	constexpr uint32_t m_bSuppressTint = 0x1D45;
	constexpr uint32_t m_nSubModelFieldType = 0x1D48;
	constexpr uint32_t m_bDisableShadows = 0x1D4C;
	constexpr uint32_t m_bDisableDepthPrepass = 0x1D4D;
	constexpr uint32_t m_bAcceptsDecals = 0x1D4E;
	constexpr uint32_t m_bForceDrawInterlevedWithSiblings = 0x1D4F;
	constexpr uint32_t m_bDoNotDrawInParticlePass = 0x1D50;
	constexpr uint32_t m_bAllowApproximateTransforms = 0x1D51;
	constexpr uint32_t m_szRenderAttribute = 0x1D52;
	constexpr uint32_t m_flRadiusScale = 0x1E58;
	constexpr uint32_t m_flAlphaScale = 0x1FB0;
	constexpr uint32_t m_flRollScale = 0x2108;
	constexpr uint32_t m_nAlpha2Field = 0x2260;
	constexpr uint32_t m_vecColorScale = 0x2268;
	constexpr uint32_t m_nColorBlendType = 0x28C0;
}

namespace C_OP_RenderSimpleModelCollection
{
	constexpr uint32_t m_bCenterOffset = 0x208;
	constexpr uint32_t m_hModel = 0x210;
	constexpr uint32_t m_modelInput = 0x218;
	constexpr uint32_t m_nLOD = 0x278;
	constexpr uint32_t m_bDisableShadows = 0x27C;
	constexpr uint32_t m_bDisableMotionBlur = 0x27D;
	constexpr uint32_t m_bAcceptsDecals = 0x27E;
	constexpr uint32_t m_nAngularVelocityField = 0x280;
}

namespace C_OP_RenderMaterialProxy
{
	constexpr uint32_t m_nMaterialControlPoint = 0x208;
	constexpr uint32_t m_nProxyType = 0x20C;
	constexpr uint32_t m_MaterialVars = 0x210;
	constexpr uint32_t m_hOverrideMaterial = 0x228;
	constexpr uint32_t m_flMaterialOverrideEnabled = 0x230;
	constexpr uint32_t m_vecColorScale = 0x388;
	constexpr uint32_t m_flAlpha = 0x9E0;
	constexpr uint32_t m_nColorBlendType = 0xB38;
}

namespace C_OP_RenderProjected
{
	constexpr uint32_t m_bProjectCharacter = 0x208;
	constexpr uint32_t m_bProjectWorld = 0x209;
	constexpr uint32_t m_bProjectWater = 0x20A;
	constexpr uint32_t m_bFlipHorizontal = 0x20B;
	constexpr uint32_t m_bEnableProjectedDepthControls = 0x20C;
	constexpr uint32_t m_flMinProjectionDepth = 0x210;
	constexpr uint32_t m_flMaxProjectionDepth = 0x214;
	constexpr uint32_t m_vecProjectedMaterials = 0x218;
	constexpr uint32_t m_flMaterialSelection = 0x230;
	constexpr uint32_t m_flAnimationTimeScale = 0x388;
	constexpr uint32_t m_bOrientToNormal = 0x38C;
	constexpr uint32_t m_MaterialVars = 0x390;
	constexpr uint32_t m_flRadiusScale = 0x3A8;
	constexpr uint32_t m_flAlphaScale = 0x500;
	constexpr uint32_t m_flRollScale = 0x658;
	constexpr uint32_t m_nAlpha2Field = 0x7B0;
	constexpr uint32_t m_vecColorScale = 0x7B8;
	constexpr uint32_t m_nColorBlendType = 0xE10;
}

namespace C_OP_RenderDeferredLight
{
	constexpr uint32_t m_bUseAlphaTestWindow = 0x208;
	constexpr uint32_t m_bUseTexture = 0x209;
	constexpr uint32_t m_flRadiusScale = 0x20C;
	constexpr uint32_t m_flAlphaScale = 0x210;
	constexpr uint32_t m_nAlpha2Field = 0x214;
	constexpr uint32_t m_vecColorScale = 0x218;
	constexpr uint32_t m_nColorBlendType = 0x870;
	constexpr uint32_t m_flLightDistance = 0x874;
	constexpr uint32_t m_flStartFalloff = 0x878;
	constexpr uint32_t m_flDistanceFalloff = 0x87C;
	constexpr uint32_t m_flSpotFoV = 0x880;
	constexpr uint32_t m_nAlphaTestPointField = 0x884;
	constexpr uint32_t m_nAlphaTestRangeField = 0x888;
	constexpr uint32_t m_nAlphaTestSharpnessField = 0x88C;
	constexpr uint32_t m_hTexture = 0x890;
	constexpr uint32_t m_nHSVShiftControlPoint = 0x898;
}

namespace C_OP_RenderStandardLight
{
	constexpr uint32_t m_nLightType = 0x208;
	constexpr uint32_t m_vecColorScale = 0x210;
	constexpr uint32_t m_nColorBlendType = 0x868;
	constexpr uint32_t m_flIntensity = 0x870;
	constexpr uint32_t m_bCastShadows = 0x9C8;
	constexpr uint32_t m_flTheta = 0x9D0;
	constexpr uint32_t m_flPhi = 0xB28;
	constexpr uint32_t m_flRadiusMultiplier = 0xC80;
	constexpr uint32_t m_nAttenuationStyle = 0xDD8;
	constexpr uint32_t m_flFalloffLinearity = 0xDE0;
	constexpr uint32_t m_flFiftyPercentFalloff = 0xF38;
	constexpr uint32_t m_flZeroPercentFalloff = 0x1090;
	constexpr uint32_t m_bRenderDiffuse = 0x11E8;
	constexpr uint32_t m_bRenderSpecular = 0x11E9;
	constexpr uint32_t m_lightCookie = 0x11F0;
	constexpr uint32_t m_nPriority = 0x11F8;
	constexpr uint32_t m_nFogLightingMode = 0x11FC;
	constexpr uint32_t m_flFogContribution = 0x1200;
	constexpr uint32_t m_nCapsuleLightBehavior = 0x1358;
	constexpr uint32_t m_flCapsuleLength = 0x135C;
	constexpr uint32_t m_bReverseOrder = 0x1360;
	constexpr uint32_t m_bClosedLoop = 0x1361;
	constexpr uint32_t m_nPrevPntSource = 0x1364;
	constexpr uint32_t m_flMaxLength = 0x1368;
	constexpr uint32_t m_flMinLength = 0x136C;
	constexpr uint32_t m_bIgnoreDT = 0x1370;
	constexpr uint32_t m_flConstrainRadiusToLengthRatio = 0x1374;
	constexpr uint32_t m_flLengthScale = 0x1378;
	constexpr uint32_t m_flLengthFadeInTime = 0x137C;
}

namespace C_OP_RenderOmni2Light
{
	constexpr uint32_t m_nLightType = 0x208;
	constexpr uint32_t m_vColorBlend = 0x210;
	constexpr uint32_t m_nColorBlendType = 0x868;
	constexpr uint32_t m_nBrightnessUnit = 0x86C;
	constexpr uint32_t m_flBrightnessLumens = 0x870;
	constexpr uint32_t m_flBrightnessCandelas = 0x9C8;
	constexpr uint32_t m_bCastShadows = 0xB20;
	constexpr uint32_t m_flLuminaireRadius = 0xB28;
	constexpr uint32_t m_flSkirt = 0xC80;
	constexpr uint32_t m_flRange = 0xDD8;
	constexpr uint32_t m_flInnerConeAngle = 0xF30;
	constexpr uint32_t m_flOuterConeAngle = 0x1088;
	constexpr uint32_t m_hLightCookie = 0x11E0;
	constexpr uint32_t m_bSphericalCookie = 0x11E8;
}

namespace C_OP_RenderLightBeam
{
	constexpr uint32_t m_vColorBlend = 0x208;
	constexpr uint32_t m_nColorBlendType = 0x860;
	constexpr uint32_t m_flBrightnessLumensPerMeter = 0x868;
	constexpr uint32_t m_bCastShadows = 0x9C0;
	constexpr uint32_t m_flSkirt = 0x9C8;
	constexpr uint32_t m_flRange = 0xB20;
	constexpr uint32_t m_flThickness = 0xC78;
}

namespace C_OP_RenderClothForce
{
}

namespace C_OP_Callback
{
}

namespace C_OP_RenderScreenShake
{
	constexpr uint32_t m_flDurationScale = 0x208;
	constexpr uint32_t m_flRadiusScale = 0x20C;
	constexpr uint32_t m_flFrequencyScale = 0x210;
	constexpr uint32_t m_flAmplitudeScale = 0x214;
	constexpr uint32_t m_nRadiusField = 0x218;
	constexpr uint32_t m_nDurationField = 0x21C;
	constexpr uint32_t m_nFrequencyField = 0x220;
	constexpr uint32_t m_nAmplitudeField = 0x224;
	constexpr uint32_t m_nFilterCP = 0x228;
}

namespace C_OP_RenderTonemapController
{
	constexpr uint32_t m_flTonemapLevel = 0x208;
	constexpr uint32_t m_flTonemapWeight = 0x20C;
	constexpr uint32_t m_nTonemapLevelField = 0x210;
	constexpr uint32_t m_nTonemapWeightField = 0x214;
}

namespace C_OP_RenderPostProcessing
{
	constexpr uint32_t m_flPostProcessStrength = 0x208;
	constexpr uint32_t m_hPostTexture = 0x360;
	constexpr uint32_t m_nPriority = 0x368;
}

namespace C_OP_RenderSound
{
	constexpr uint32_t m_flDurationScale = 0x208;
	constexpr uint32_t m_flSndLvlScale = 0x20C;
	constexpr uint32_t m_flPitchScale = 0x210;
	constexpr uint32_t m_flVolumeScale = 0x214;
	constexpr uint32_t m_nSndLvlField = 0x218;
	constexpr uint32_t m_nDurationField = 0x21C;
	constexpr uint32_t m_nPitchField = 0x220;
	constexpr uint32_t m_nVolumeField = 0x224;
	constexpr uint32_t m_nChannel = 0x228;
	constexpr uint32_t m_nCPReference = 0x22C;
	constexpr uint32_t m_pszSoundName = 0x230;
	constexpr uint32_t m_bSuppressStopSoundEvent = 0x330;
}

namespace C_OP_RenderStatusEffect
{
	constexpr uint32_t m_pTextureColorWarp = 0x208;
	constexpr uint32_t m_pTextureDetail2 = 0x210;
	constexpr uint32_t m_pTextureDiffuseWarp = 0x218;
	constexpr uint32_t m_pTextureFresnelColorWarp = 0x220;
	constexpr uint32_t m_pTextureFresnelWarp = 0x228;
	constexpr uint32_t m_pTextureSpecularWarp = 0x230;
	constexpr uint32_t m_pTextureEnvMap = 0x238;
}

namespace C_OP_RenderStatusEffectCitadel
{
	constexpr uint32_t m_pTextureColorWarp = 0x208;
	constexpr uint32_t m_pTextureNormal = 0x210;
	constexpr uint32_t m_pTextureMetalness = 0x218;
	constexpr uint32_t m_pTextureRoughness = 0x220;
	constexpr uint32_t m_pTextureSelfIllum = 0x228;
	constexpr uint32_t m_pTextureDetail = 0x230;
}

namespace C_OP_RenderFlattenGrass
{
	constexpr uint32_t m_flFlattenStrength = 0x208;
	constexpr uint32_t m_nStrengthFieldOverride = 0x20C;
	constexpr uint32_t m_flRadiusScale = 0x210;
}

namespace C_OP_RenderTreeShake
{
	constexpr uint32_t m_flPeakStrength = 0x208;
	constexpr uint32_t m_nPeakStrengthFieldOverride = 0x20C;
	constexpr uint32_t m_flRadius = 0x210;
	constexpr uint32_t m_nRadiusFieldOverride = 0x214;
	constexpr uint32_t m_flShakeDuration = 0x218;
	constexpr uint32_t m_flTransitionTime = 0x21C;
	constexpr uint32_t m_flTwistAmount = 0x220;
	constexpr uint32_t m_flRadialAmount = 0x224;
	constexpr uint32_t m_flControlPointOrientationAmount = 0x228;
	constexpr uint32_t m_nControlPointForLinearDirection = 0x22C;
}

namespace C_OP_RenderText
{
	constexpr uint32_t m_OutlineColor = 0x208;
	constexpr uint32_t m_DefaultText = 0x210;
}

namespace C_OP_RenderVRHapticEvent
{
	constexpr uint32_t m_nHand = 0x208;
	constexpr uint32_t m_nOutputHandCP = 0x20C;
	constexpr uint32_t m_nOutputField = 0x210;
	constexpr uint32_t m_flAmplitude = 0x218;
}

namespace C_OP_ClientPhysics
{
	constexpr uint32_t m_strPhysicsType = 0x208;
	constexpr uint32_t m_bKillParticles = 0x210;
	constexpr uint32_t m_bDeleteSim = 0x211;
	constexpr uint32_t m_nControlPoint = 0x214;
	constexpr uint32_t m_nColorBlendType = 0x218;
}

namespace C_OP_RemapSDFDistanceToScalarAttribute
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
	constexpr uint32_t m_nVectorFieldInput = 0x1BC;
	constexpr uint32_t m_flMinDistance = 0x1C0;
	constexpr uint32_t m_flMaxDistance = 0x318;
	constexpr uint32_t m_flValueBelowMin = 0x470;
	constexpr uint32_t m_flValueAtMin = 0x5C8;
	constexpr uint32_t m_flValueAtMax = 0x720;
	constexpr uint32_t m_flValueAboveMax = 0x878;
}

namespace C_OP_RemapSDFDistanceToVectorAttribute
{
	constexpr uint32_t m_nVectorFieldOutput = 0x1B8;
	constexpr uint32_t m_nVectorFieldInput = 0x1BC;
	constexpr uint32_t m_flMinDistance = 0x1C0;
	constexpr uint32_t m_flMaxDistance = 0x318;
	constexpr uint32_t m_vValueBelowMin = 0x470;
	constexpr uint32_t m_vValueAtMin = 0x47C;
	constexpr uint32_t m_vValueAtMax = 0x488;
	constexpr uint32_t m_vValueAboveMax = 0x494;
}

namespace C_OP_SDFForce
{
	constexpr uint32_t m_flForceScale = 0x1C8;
}

namespace C_OP_RemapSDFGradientToVectorAttribute
{
	constexpr uint32_t m_nFieldOutput = 0x1B8;
}

namespace C_OP_SDFLighting
{
	constexpr uint32_t m_vLightingDir = 0x1B8;
	constexpr uint32_t m_vTint_0 = 0x1C4;
	constexpr uint32_t m_vTint_1 = 0x1D0;
}

namespace C_OP_SDFConstraint
{
	constexpr uint32_t m_flMinDist = 0x1B8;
	constexpr uint32_t m_flMaxDist = 0x310;
	constexpr uint32_t m_nMaxIterations = 0x468;
}

