namespace CRandomNumberGeneratorParameters
{
	constexpr uint32_t m_bDistributeEvenly = 0x0;
	constexpr uint32_t m_nSeed = 0x4;
}

namespace MaterialVariable_t
{
	constexpr uint32_t m_strVariable = 0x0;
	constexpr uint32_t m_nVariableField = 0x8;
	constexpr uint32_t m_flScale = 0xC;
}

namespace ParticleAttributeIndex_t
{
	constexpr uint32_t m_Value = 0x0;
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

namespace IControlPointEditorData
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
	constexpr uint32_t m_flNoPixelVisibilityFallback = 0x14;
	constexpr uint32_t m_flDistanceInputMin = 0x18;
	constexpr uint32_t m_flDistanceInputMax = 0x1C;
	constexpr uint32_t m_flDotInputMin = 0x20;
	constexpr uint32_t m_flDotInputMax = 0x24;
	constexpr uint32_t m_bDotCPAngles = 0x28;
	constexpr uint32_t m_bDotCameraAngles = 0x29;
	constexpr uint32_t m_flAlphaScaleMin = 0x2C;
	constexpr uint32_t m_flAlphaScaleMax = 0x30;
	constexpr uint32_t m_flRadiusScaleMin = 0x34;
	constexpr uint32_t m_flRadiusScaleMax = 0x38;
	constexpr uint32_t m_flRadiusScaleFOVBase = 0x3C;
	constexpr uint32_t m_bRightEye = 0x40;
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
	constexpr uint32_t m_nViewModelEffect = 0x310;
	constexpr uint32_t m_bScreenSpaceEffect = 0x314;
	constexpr uint32_t m_pszTargetLayerID = 0x318;
	constexpr uint32_t m_nSkipRenderControlPoint = 0x320;
	constexpr uint32_t m_nAllowRenderControlPoint = 0x324;
	constexpr uint32_t m_bShouldSort = 0x328;
	constexpr uint32_t m_controlPointConfigurations = 0x370;
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

namespace CParticleFunctionInitializer
{
	constexpr uint32_t m_nAssociatedEmitterIndex = 0x1B8;
}

namespace CParticleFunctionEmitter
{
	constexpr uint32_t m_nEmitterIndex = 0x1B8;
}

namespace CParticleFunctionConstraint
{
}

namespace CParticleFunctionOperator
{
}

namespace CParticleFunctionForce
{
}

namespace CParticleFunctionPreEmission
{
	constexpr uint32_t m_bRunOnce = 0x1C0;
}

namespace CParticleFunctionRenderer
{
	constexpr uint32_t VisibilityInputs = 0x1B8;
	constexpr uint32_t m_bCannotBeRefracted = 0x1FC;
	constexpr uint32_t m_bSkipRenderingOnMobile = 0x1FD;
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
	constexpr uint32_t m_flRadiusScale = 0x200;
	constexpr uint32_t m_flAlphaScale = 0x358;
	constexpr uint32_t m_flRollScale = 0x4B0;
	constexpr uint32_t m_nAlpha2Field = 0x608;
	constexpr uint32_t m_vecColorScale = 0x610;
	constexpr uint32_t m_nColorBlendType = 0xC68;
	constexpr uint32_t m_nShaderType = 0xC6C;
	constexpr uint32_t m_strShaderOverride = 0xC70;
	constexpr uint32_t m_flCenterXOffset = 0xC78;
	constexpr uint32_t m_flCenterYOffset = 0xDD0;
	constexpr uint32_t m_flBumpStrength = 0xF28;
	constexpr uint32_t m_nCropTextureOverride = 0xF2C;
	constexpr uint32_t m_vecTexturesInput = 0xF30;
	constexpr uint32_t m_flAnimationRate = 0xF48;
	constexpr uint32_t m_nAnimationType = 0xF4C;
	constexpr uint32_t m_bAnimateInFPS = 0xF50;
	constexpr uint32_t m_flSelfIllumAmount = 0xF58;
	constexpr uint32_t m_flDiffuseAmount = 0x10B0;
	constexpr uint32_t m_nLightingControlPoint = 0x1208;
	constexpr uint32_t m_nSelfIllumPerParticle = 0x120C;
	constexpr uint32_t m_nOutputBlendMode = 0x1210;
	constexpr uint32_t m_bGammaCorrectVertexColors = 0x1214;
	constexpr uint32_t m_bSaturateColorPreAlphaBlend = 0x1215;
	constexpr uint32_t m_flAddSelfAmount = 0x1218;
	constexpr uint32_t m_flDesaturation = 0x1370;
	constexpr uint32_t m_flOverbrightFactor = 0x14C8;
	constexpr uint32_t m_nHSVShiftControlPoint = 0x1620;
	constexpr uint32_t m_nFogType = 0x1624;
	constexpr uint32_t m_flFogAmount = 0x1628;
	constexpr uint32_t m_bTintByFOW = 0x1780;
	constexpr uint32_t m_bTintByGlobalLight = 0x1781;
	constexpr uint32_t m_nPerParticleAlphaReference = 0x1784;
	constexpr uint32_t m_nPerParticleAlphaRefWindow = 0x1788;
	constexpr uint32_t m_nAlphaReferenceType = 0x178C;
	constexpr uint32_t m_flAlphaReferenceSoftness = 0x1790;
	constexpr uint32_t m_flSourceAlphaValueToMapToZero = 0x18E8;
	constexpr uint32_t m_flSourceAlphaValueToMapToOne = 0x1A40;
	constexpr uint32_t m_bRefract = 0x1B98;
	constexpr uint32_t m_bRefractSolid = 0x1B99;
	constexpr uint32_t m_flRefractAmount = 0x1BA0;
	constexpr uint32_t m_nRefractBlurRadius = 0x1CF8;
	constexpr uint32_t m_nRefractBlurType = 0x1CFC;
	constexpr uint32_t m_bOnlyRenderInEffectsBloomPass = 0x1D00;
	constexpr uint32_t m_bOnlyRenderInEffectsWaterPass = 0x1D01;
	constexpr uint32_t m_bUseMixedResolutionRendering = 0x1D02;
	constexpr uint32_t m_bOnlyRenderInEffecsGameOverlay = 0x1D03;
	constexpr uint32_t m_stencilTestID = 0x1D04;
	constexpr uint32_t m_bStencilTestExclude = 0x1D84;
	constexpr uint32_t m_stencilWriteID = 0x1D85;
	constexpr uint32_t m_bWriteStencilOnDepthPass = 0x1E05;
	constexpr uint32_t m_bWriteStencilOnDepthFail = 0x1E06;
	constexpr uint32_t m_bReverseZBuffering = 0x1E07;
	constexpr uint32_t m_bDisableZBuffering = 0x1E08;
	constexpr uint32_t m_nFeatheringMode = 0x1E0C;
	constexpr uint32_t m_flFeatheringMinDist = 0x1E10;
	constexpr uint32_t m_flFeatheringMaxDist = 0x1F68;
	constexpr uint32_t m_flFeatheringFilter = 0x20C0;
	constexpr uint32_t m_flDepthBias = 0x2218;
	constexpr uint32_t m_nSortMethod = 0x221C;
	constexpr uint32_t m_bBlendFramesSeq0 = 0x2220;
	constexpr uint32_t m_bMaxLuminanceBlendingSequence0 = 0x2221;
}

namespace C_OP_RenderSprites
{
	constexpr uint32_t m_nSequenceOverride = 0x2470;
	constexpr uint32_t m_nOrientationType = 0x25C8;
	constexpr uint32_t m_nOrientationControlPoint = 0x25CC;
	constexpr uint32_t m_bUseYawWithNormalAligned = 0x25D0;
	constexpr uint32_t m_flMinSize = 0x25D4;
	constexpr uint32_t m_flMaxSize = 0x25D8;
	constexpr uint32_t m_flAlphaAdjustWithSizeAdjust = 0x25DC;
	constexpr uint32_t m_flStartFadeSize = 0x25E0;
	constexpr uint32_t m_flEndFadeSize = 0x2738;
	constexpr uint32_t m_flStartFadeDot = 0x2890;
	constexpr uint32_t m_flEndFadeDot = 0x2894;
	constexpr uint32_t m_bDistanceAlpha = 0x2898;
	constexpr uint32_t m_bSoftEdges = 0x2899;
	constexpr uint32_t m_flEdgeSoftnessStart = 0x289C;
	constexpr uint32_t m_flEdgeSoftnessEnd = 0x28A0;
	constexpr uint32_t m_bOutline = 0x28A4;
	constexpr uint32_t m_OutlineColor = 0x28A5;
	constexpr uint32_t m_nOutlineAlpha = 0x28AC;
	constexpr uint32_t m_flOutlineStart0 = 0x28B0;
	constexpr uint32_t m_flOutlineStart1 = 0x28B4;
	constexpr uint32_t m_flOutlineEnd0 = 0x28B8;
	constexpr uint32_t m_flOutlineEnd1 = 0x28BC;
	constexpr uint32_t m_nLightingMode = 0x28C0;
	constexpr uint32_t m_flLightingTessellation = 0x28C8;
	constexpr uint32_t m_flLightingDirectionality = 0x2A20;
	constexpr uint32_t m_bParticleShadows = 0x2B78;
	constexpr uint32_t m_flShadowDensity = 0x2B7C;
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
	constexpr uint32_t m_flRadiusScale = 0x200;
	constexpr uint32_t m_flAlphaScale = 0x358;
	constexpr uint32_t m_vecColorScale = 0x4B0;
	constexpr uint32_t m_nColorBlendType = 0xB08;
	constexpr uint32_t m_hMaterial = 0xB10;
	constexpr uint32_t m_nTextureRepetitionMode = 0xB18;
	constexpr uint32_t m_flTextureRepeatsPerSegment = 0xB20;
	constexpr uint32_t m_flTextureRepeatsCircumference = 0xC78;
	constexpr uint32_t m_flColorMapOffsetV = 0xDD0;
	constexpr uint32_t m_flColorMapOffsetU = 0xF28;
	constexpr uint32_t m_flNormalMapOffsetV = 0x1080;
	constexpr uint32_t m_flNormalMapOffsetU = 0x11D8;
	constexpr uint32_t m_bDrawCableCaps = 0x1330;
	constexpr uint32_t m_flCapRoundness = 0x1334;
	constexpr uint32_t m_flCapOffsetAmount = 0x1338;
	constexpr uint32_t m_flTessScale = 0x133C;
	constexpr uint32_t m_nMinTesselation = 0x1340;
	constexpr uint32_t m_nMaxTesselation = 0x1344;
	constexpr uint32_t m_nRoundness = 0x1348;
	constexpr uint32_t m_LightingTransform = 0x1350;
	constexpr uint32_t m_MaterialFloatVars = 0x13B8;
	constexpr uint32_t m_MaterialVecVars = 0x13E8;
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

namespace CPerParticleFloatInput
{
}

namespace CParticleCollectionFloatInput
{
}

namespace CParticleCollectionRendererFloatInput
{
}

namespace CParticleRemapFloatInput
{
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

namespace CPerParticleVecInput
{
}

namespace CParticleCollectionVecInput
{
}

namespace CParticleCollectionRendererVecInput
{
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

namespace ParticleNamedValueSource_t
{
	constexpr uint32_t m_Name = 0x0;
	constexpr uint32_t m_IsPublic = 0x8;
	constexpr uint32_t m_ValueType = 0xC;
	constexpr uint32_t m_DefaultConfig = 0x10;
	constexpr uint32_t m_NamedConfigs = 0x48;
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
	constexpr uint32_t m_fMinDistance = 0x1C0;
	constexpr uint32_t m_fMaxDistance = 0x318;
	constexpr uint32_t m_nControlPointNumber = 0x470;
	constexpr uint32_t m_CenterOffset = 0x474;
	constexpr uint32_t m_bGlobalCenter = 0x480;
}

namespace C_OP_CollideWithSelf
{
	constexpr uint32_t m_flRadiusScale = 0x1C0;
	constexpr uint32_t m_flMinimumSpeed = 0x318;
}

namespace C_OP_CollideWithParentParticles
{
	constexpr uint32_t m_flParentRadiusScale = 0x1C0;
	constexpr uint32_t m_flRadiusScale = 0x318;
}

namespace C_OP_ConstrainDistanceToPath
{
	constexpr uint32_t m_fMinDistance = 0x1C0;
	constexpr uint32_t m_flMaxDistance0 = 0x1C4;
	constexpr uint32_t m_flMaxDistanceMid = 0x1C8;
	constexpr uint32_t m_flMaxDistance1 = 0x1CC;
	constexpr uint32_t m_PathParameters = 0x1D0;
	constexpr uint32_t m_flTravelTime = 0x210;
	constexpr uint32_t m_nFieldScale = 0x214;
	constexpr uint32_t m_nManualTField = 0x218;
}

namespace C_OP_ConstrainDistanceToUserSpecifiedPath
{
	constexpr uint32_t m_fMinDistance = 0x1C0;
	constexpr uint32_t m_flMaxDistance = 0x1C4;
	constexpr uint32_t m_flTimeScale = 0x1C8;
	constexpr uint32_t m_bLoopedPath = 0x1CC;
	constexpr uint32_t m_pointList = 0x1D0;
}

namespace C_OP_PlanarConstraint
{
	constexpr uint32_t m_PointOnPlane = 0x1C0;
	constexpr uint32_t m_PlaneNormal = 0x1CC;
	constexpr uint32_t m_nControlPointNumber = 0x1D8;
	constexpr uint32_t m_bGlobalOrigin = 0x1DC;
	constexpr uint32_t m_bGlobalNormal = 0x1DD;
	constexpr uint32_t m_flRadiusScale = 0x1E0;
	constexpr uint32_t m_flMaximumDistanceToCP = 0x338;
}

namespace C_OP_WorldCollideConstraint
{
}

namespace C_OP_WorldTraceConstraint
{
	constexpr uint32_t m_nCP = 0x1C0;
	constexpr uint32_t m_vecCpOffset = 0x1C4;
	constexpr uint32_t m_nCollisionMode = 0x1D0;
	constexpr uint32_t m_nCollisionModeMin = 0x1D4;
	constexpr uint32_t m_nTraceSet = 0x1D8;
	constexpr uint32_t m_CollisionGroupName = 0x1DC;
	constexpr uint32_t m_bWorldOnly = 0x25C;
	constexpr uint32_t m_bBrushOnly = 0x25D;
	constexpr uint32_t m_bIncludeWater = 0x25E;
	constexpr uint32_t m_nIgnoreCP = 0x260;
	constexpr uint32_t m_flCpMovementTolerance = 0x264;
	constexpr uint32_t m_flRetestRate = 0x268;
	constexpr uint32_t m_flTraceTolerance = 0x26C;
	constexpr uint32_t m_flCollisionConfirmationSpeed = 0x270;
	constexpr uint32_t m_nMaxTracesPerFrame = 0x274;
	constexpr uint32_t m_flRadiusScale = 0x278;
	constexpr uint32_t m_flBounceAmount = 0x3D0;
	constexpr uint32_t m_flSlideAmount = 0x528;
	constexpr uint32_t m_flRandomDirScale = 0x680;
	constexpr uint32_t m_bDecayBounce = 0x7D8;
	constexpr uint32_t m_bKillonContact = 0x7D9;
	constexpr uint32_t m_flMinSpeed = 0x7DC;
	constexpr uint32_t m_bSetNormal = 0x7E0;
	constexpr uint32_t m_nStickOnCollisionField = 0x7E4;
	constexpr uint32_t m_flStopSpeed = 0x7E8;
	constexpr uint32_t m_nEntityStickDataField = 0x940;
	constexpr uint32_t m_nEntityStickNormalField = 0x944;
}

namespace C_OP_BoxConstraint
{
	constexpr uint32_t m_vecMin = 0x1C0;
	constexpr uint32_t m_vecMax = 0x818;
	constexpr uint32_t m_nCP = 0xE70;
	constexpr uint32_t m_bLocalSpace = 0xE74;
	constexpr uint32_t m_bAccountForRadius = 0xE75;
}

namespace C_OP_ShapeMatchingConstraint
{
	constexpr uint32_t m_flShapeRestorationTime = 0x1C0;
}

namespace C_OP_RopeSpringConstraint
{
	constexpr uint32_t m_flRestLength = 0x1C0;
	constexpr uint32_t m_flMinDistance = 0x318;
	constexpr uint32_t m_flMaxDistance = 0x470;
	constexpr uint32_t m_flAdjustmentScale = 0x5C8;
	constexpr uint32_t m_flInitialRestingLength = 0x5D0;
}

namespace C_OP_SpringToVectorConstraint
{
	constexpr uint32_t m_flRestLength = 0x1C0;
	constexpr uint32_t m_flMinDistance = 0x318;
	constexpr uint32_t m_flMaxDistance = 0x470;
	constexpr uint32_t m_flRestingLength = 0x5C8;
	constexpr uint32_t m_vecAnchorVector = 0x720;
}

namespace C_OP_ConstrainLineLength
{
	constexpr uint32_t m_flMinDistance = 0x1C0;
	constexpr uint32_t m_flMaxDistance = 0x1C4;
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
	constexpr uint32_t m_nDesiredHitbox = 0x28C;
	constexpr uint32_t m_nHitboxValueFromControlPointIndex = 0x290;
	constexpr uint32_t m_vecHitBoxScale = 0x298;
	constexpr uint32_t m_flBoneVelocity = 0x8F0;
	constexpr uint32_t m_flMaxBoneVelocity = 0x8F4;
	constexpr uint32_t m_vecDirectionBias = 0x8F8;
	constexpr uint32_t m_HitboxSetName = 0xF50;
	constexpr uint32_t m_bLocalCoords = 0xFD0;
	constexpr uint32_t m_bUseBones = 0xFD1;
	constexpr uint32_t m_flShellSize = 0xFD8;
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
	constexpr uint32_t m_nDesiredHitbox = 0x1C8;
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
	constexpr uint32_t m_flIncrement = 0x1DC;
	constexpr uint32_t m_nFullLoopIncrement = 0x1E0;
	constexpr uint32_t m_nSnapShotStartPoint = 0x1E4;
	constexpr uint32_t m_flBoneVelocity = 0x1E8;
	constexpr uint32_t m_flBoneVelocityMax = 0x1EC;
	constexpr uint32_t m_bCopyColor = 0x1F0;
	constexpr uint32_t m_bCopyAlpha = 0x1F1;
	constexpr uint32_t m_bSetRadius = 0x1F2;
}

namespace C_INIT_InitFromParentKilled
{
	constexpr uint32_t m_nAttributeToCopy = 0x1C0;
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
	constexpr uint32_t m_nSnapshotControlPoint = 0x5D4;
	constexpr uint32_t m_nLimitPerUpdate = 0x5D8;
	constexpr uint32_t m_bForceEmitOnFirstUpdate = 0x5DC;
	constexpr uint32_t m_bForceEmitOnLastUpdate = 0x5DD;
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
	constexpr uint32_t m_MinForce = 0x1D0;
	constexpr uint32_t m_MaxForce = 0x1DC;
}

namespace C_OP_CPVelocityForce
{
	constexpr uint32_t m_nControlPointNumber = 0x1D0;
	constexpr uint32_t m_flScale = 0x1D8;
}

namespace C_OP_ParentVortices
{
	constexpr uint32_t m_flForceScale = 0x1D0;
	constexpr uint32_t m_vecTwistAxis = 0x1D4;
	constexpr uint32_t m_bFlipBasedOnYaw = 0x1E0;
}

namespace C_OP_TwistAroundAxis
{
	constexpr uint32_t m_fForceAmount = 0x1D0;
	constexpr uint32_t m_TwistAxis = 0x1D4;
	constexpr uint32_t m_bLocalSpace = 0x1E0;
	constexpr uint32_t m_nControlPointNumber = 0x1E4;
}

namespace C_OP_AttractToControlPoint
{
	constexpr uint32_t m_vecComponentScale = 0x1D0;
	constexpr uint32_t m_fForceAmount = 0x1E0;
	constexpr uint32_t m_fFalloffPower = 0x338;
	constexpr uint32_t m_TransformInput = 0x340;
	constexpr uint32_t m_fForceAmountMin = 0x3A8;
	constexpr uint32_t m_bApplyMinForce = 0x500;
}

namespace C_OP_ForceBasedOnDistanceToPlane
{
	constexpr uint32_t m_flMinDist = 0x1D0;
	constexpr uint32_t m_vecForceAtMinDist = 0x1D4;
	constexpr uint32_t m_flMaxDist = 0x1E0;
	constexpr uint32_t m_vecForceAtMaxDist = 0x1E4;
	constexpr uint32_t m_vecPlaneNormal = 0x1F0;
	constexpr uint32_t m_nControlPointNumber = 0x1FC;
	constexpr uint32_t m_flExponent = 0x200;
}

namespace C_OP_TimeVaryingForce
{
	constexpr uint32_t m_flStartLerpTime = 0x1D0;
	constexpr uint32_t m_StartingForce = 0x1D4;
	constexpr uint32_t m_flEndLerpTime = 0x1E0;
	constexpr uint32_t m_EndingForce = 0x1E4;
}

namespace C_OP_TurbulenceForce
{
	constexpr uint32_t m_flNoiseCoordScale0 = 0x1D0;
	constexpr uint32_t m_flNoiseCoordScale1 = 0x1D4;
	constexpr uint32_t m_flNoiseCoordScale2 = 0x1D8;
	constexpr uint32_t m_flNoiseCoordScale3 = 0x1DC;
	constexpr uint32_t m_vecNoiseAmount0 = 0x1E0;
	constexpr uint32_t m_vecNoiseAmount1 = 0x1EC;
	constexpr uint32_t m_vecNoiseAmount2 = 0x1F8;
	constexpr uint32_t m_vecNoiseAmount3 = 0x204;
}

namespace C_OP_CurlNoiseForce
{
	constexpr uint32_t m_nNoiseType = 0x1D0;
	constexpr uint32_t m_vecNoiseFreq = 0x1D8;
	constexpr uint32_t m_vecNoiseScale = 0x830;
	constexpr uint32_t m_vecOffset = 0xE88;
	constexpr uint32_t m_vecOffsetRate = 0x14E0;
	constexpr uint32_t m_flWorleySeed = 0x1B38;
	constexpr uint32_t m_flWorleyJitter = 0x1C90;
}

namespace C_OP_PerParticleForce
{
	constexpr uint32_t m_flForceScale = 0x1D0;
	constexpr uint32_t m_vForce = 0x328;
	constexpr uint32_t m_nCP = 0x980;
}

namespace C_OP_WindForce
{
	constexpr uint32_t m_vForce = 0x1D0;
}

namespace C_OP_ExternalWindForce
{
	constexpr uint32_t m_vecSamplePosition = 0x1D0;
	constexpr uint32_t m_vecScale = 0x828;
	constexpr uint32_t m_bSampleWind = 0xE80;
	constexpr uint32_t m_bSampleWater = 0xE81;
	constexpr uint32_t m_bDampenNearWaterPlane = 0xE82;
	constexpr uint32_t m_bSampleGravity = 0xE83;
	constexpr uint32_t m_vecGravityForce = 0xE88;
	constexpr uint32_t m_bUseBasicMovementGravity = 0x14E0;
	constexpr uint32_t m_flLocalGravityScale = 0x14E8;
	constexpr uint32_t m_flLocalBuoyancyScale = 0x1640;
	constexpr uint32_t m_vecBuoyancyForce = 0x1798;
}

namespace C_OP_ExternalGameImpulseForce
{
	constexpr uint32_t m_flForceScale = 0x1D0;
	constexpr uint32_t m_bRopes = 0x328;
	constexpr uint32_t m_bRopesZOnly = 0x329;
	constexpr uint32_t m_bExplosions = 0x32A;
	constexpr uint32_t m_bParticles = 0x32B;
}

namespace C_OP_LocalAccelerationForce
{
	constexpr uint32_t m_nCP = 0x1D0;
	constexpr uint32_t m_nScaleCP = 0x1D4;
	constexpr uint32_t m_vecAccel = 0x1D8;
}

namespace C_OP_DensityForce
{
	constexpr uint32_t m_flRadiusScale = 0x1D0;
	constexpr uint32_t m_flForceScale = 0x1D4;
	constexpr uint32_t m_flTargetDensity = 0x1D8;
}

namespace C_OP_BasicMovement
{
	constexpr uint32_t m_Gravity = 0x1C0;
	constexpr uint32_t m_fDrag = 0x818;
	constexpr uint32_t m_nMaxConstraintPasses = 0x970;
}

namespace C_OP_FadeAndKill
{
	constexpr uint32_t m_flStartFadeInTime = 0x1C0;
	constexpr uint32_t m_flEndFadeInTime = 0x1C4;
	constexpr uint32_t m_flStartFadeOutTime = 0x1C8;
	constexpr uint32_t m_flEndFadeOutTime = 0x1CC;
	constexpr uint32_t m_flStartAlpha = 0x1D0;
	constexpr uint32_t m_flEndAlpha = 0x1D4;
	constexpr uint32_t m_bForcePreserveParticleOrder = 0x1D8;
}

namespace C_OP_FadeAndKillForTracers
{
	constexpr uint32_t m_flStartFadeInTime = 0x1C0;
	constexpr uint32_t m_flEndFadeInTime = 0x1C4;
	constexpr uint32_t m_flStartFadeOutTime = 0x1C8;
	constexpr uint32_t m_flEndFadeOutTime = 0x1CC;
	constexpr uint32_t m_flStartAlpha = 0x1D0;
	constexpr uint32_t m_flEndAlpha = 0x1D4;
}

namespace C_OP_FadeIn
{
	constexpr uint32_t m_flFadeInTimeMin = 0x1C0;
	constexpr uint32_t m_flFadeInTimeMax = 0x1C4;
	constexpr uint32_t m_flFadeInTimeExp = 0x1C8;
	constexpr uint32_t m_bProportional = 0x1CC;
}

namespace C_OP_FadeOut
{
	constexpr uint32_t m_flFadeOutTimeMin = 0x1C0;
	constexpr uint32_t m_flFadeOutTimeMax = 0x1C4;
	constexpr uint32_t m_flFadeOutTimeExp = 0x1C8;
	constexpr uint32_t m_flFadeBias = 0x1CC;
	constexpr uint32_t m_bProportional = 0x200;
	constexpr uint32_t m_bEaseInAndOut = 0x201;
}

namespace C_OP_FadeInSimple
{
	constexpr uint32_t m_flFadeInTime = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
}

namespace C_OP_FadeOutSimple
{
	constexpr uint32_t m_flFadeOutTime = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
}

namespace C_OP_ClampScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_flOutputMin = 0x1C8;
	constexpr uint32_t m_flOutputMax = 0x320;
}

namespace C_OP_ClampVector
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_vecOutputMin = 0x1C8;
	constexpr uint32_t m_vecOutputMax = 0x820;
}

namespace C_OP_OscillateScalar
{
	constexpr uint32_t m_RateMin = 0x1C0;
	constexpr uint32_t m_RateMax = 0x1C4;
	constexpr uint32_t m_FrequencyMin = 0x1C8;
	constexpr uint32_t m_FrequencyMax = 0x1CC;
	constexpr uint32_t m_nField = 0x1D0;
	constexpr uint32_t m_bProportional = 0x1D4;
	constexpr uint32_t m_bProportionalOp = 0x1D5;
	constexpr uint32_t m_flStartTime_min = 0x1D8;
	constexpr uint32_t m_flStartTime_max = 0x1DC;
	constexpr uint32_t m_flEndTime_min = 0x1E0;
	constexpr uint32_t m_flEndTime_max = 0x1E4;
	constexpr uint32_t m_flOscMult = 0x1E8;
	constexpr uint32_t m_flOscAdd = 0x1EC;
}

namespace C_OP_OscillateScalarSimple
{
	constexpr uint32_t m_Rate = 0x1C0;
	constexpr uint32_t m_Frequency = 0x1C4;
	constexpr uint32_t m_nField = 0x1C8;
	constexpr uint32_t m_flOscMult = 0x1CC;
	constexpr uint32_t m_flOscAdd = 0x1D0;
}

namespace C_OP_OscillateVector
{
	constexpr uint32_t m_RateMin = 0x1C0;
	constexpr uint32_t m_RateMax = 0x1CC;
	constexpr uint32_t m_FrequencyMin = 0x1D8;
	constexpr uint32_t m_FrequencyMax = 0x1E4;
	constexpr uint32_t m_nField = 0x1F0;
	constexpr uint32_t m_bProportional = 0x1F4;
	constexpr uint32_t m_bProportionalOp = 0x1F5;
	constexpr uint32_t m_bOffset = 0x1F6;
	constexpr uint32_t m_flStartTime_min = 0x1F8;
	constexpr uint32_t m_flStartTime_max = 0x1FC;
	constexpr uint32_t m_flEndTime_min = 0x200;
	constexpr uint32_t m_flEndTime_max = 0x204;
	constexpr uint32_t m_flOscMult = 0x208;
	constexpr uint32_t m_flOscAdd = 0x360;
	constexpr uint32_t m_flRateScale = 0x4B8;
}

namespace C_OP_OscillateVectorSimple
{
	constexpr uint32_t m_Rate = 0x1C0;
	constexpr uint32_t m_Frequency = 0x1CC;
	constexpr uint32_t m_nField = 0x1D8;
	constexpr uint32_t m_flOscMult = 0x1DC;
	constexpr uint32_t m_flOscAdd = 0x1E0;
	constexpr uint32_t m_bOffset = 0x1E4;
}

namespace C_OP_DifferencePreviousParticle
{
	constexpr uint32_t m_nFieldInput = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_flInputMin = 0x1C8;
	constexpr uint32_t m_flInputMax = 0x1CC;
	constexpr uint32_t m_flOutputMin = 0x1D0;
	constexpr uint32_t m_flOutputMax = 0x1D4;
	constexpr uint32_t m_nSetMethod = 0x1D8;
	constexpr uint32_t m_bActiveRange = 0x1DC;
	constexpr uint32_t m_bSetPreviousParticle = 0x1DD;
}

namespace C_OP_PointVectorAtNextParticle
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_flInterpolation = 0x1C8;
}

namespace C_OP_RemapScalar
{
	constexpr uint32_t m_nFieldInput = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_flInputMin = 0x1C8;
	constexpr uint32_t m_flInputMax = 0x1CC;
	constexpr uint32_t m_flOutputMin = 0x1D0;
	constexpr uint32_t m_flOutputMax = 0x1D4;
	constexpr uint32_t m_bOldCode = 0x1D8;
}

namespace C_OP_RemapDensityToVector
{
	constexpr uint32_t m_flRadiusScale = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_flDensityMin = 0x1C8;
	constexpr uint32_t m_flDensityMax = 0x1CC;
	constexpr uint32_t m_vecOutputMin = 0x1D0;
	constexpr uint32_t m_vecOutputMax = 0x1DC;
	constexpr uint32_t m_bUseParentDensity = 0x1E8;
	constexpr uint32_t m_nVoxelGridResolution = 0x1EC;
}

namespace C_OP_Diffusion
{
	constexpr uint32_t m_flRadiusScale = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_nVoxelGridResolution = 0x1C8;
}

namespace C_OP_RemapScalarEndCap
{
	constexpr uint32_t m_nFieldInput = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_flInputMin = 0x1C8;
	constexpr uint32_t m_flInputMax = 0x1CC;
	constexpr uint32_t m_flOutputMin = 0x1D0;
	constexpr uint32_t m_flOutputMax = 0x1D4;
}

namespace C_OP_ReinitializeScalarEndCap
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_flOutputMin = 0x1C4;
	constexpr uint32_t m_flOutputMax = 0x1C8;
}

namespace C_OP_RemapScalarOnceTimed
{
	constexpr uint32_t m_bProportional = 0x1C0;
	constexpr uint32_t m_nFieldInput = 0x1C4;
	constexpr uint32_t m_nFieldOutput = 0x1C8;
	constexpr uint32_t m_flInputMin = 0x1CC;
	constexpr uint32_t m_flInputMax = 0x1D0;
	constexpr uint32_t m_flOutputMin = 0x1D4;
	constexpr uint32_t m_flOutputMax = 0x1D8;
	constexpr uint32_t m_flRemapTime = 0x1DC;
}

namespace C_OP_RemapParticleCountOnScalarEndCap
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_nInputMin = 0x1C4;
	constexpr uint32_t m_nInputMax = 0x1C8;
	constexpr uint32_t m_flOutputMin = 0x1CC;
	constexpr uint32_t m_flOutputMax = 0x1D0;
	constexpr uint32_t m_bBackwards = 0x1D4;
	constexpr uint32_t m_nSetMethod = 0x1D8;
}

namespace C_OP_RemapParticleCountToScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_nInputMin = 0x1C8;
	constexpr uint32_t m_nInputMax = 0x320;
	constexpr uint32_t m_flOutputMin = 0x478;
	constexpr uint32_t m_flOutputMax = 0x5D0;
	constexpr uint32_t m_bActiveRange = 0x728;
	constexpr uint32_t m_nSetMethod = 0x72C;
}

namespace C_OP_RemapVisibilityScalar
{
	constexpr uint32_t m_nFieldInput = 0x1C0;
	constexpr uint32_t m_nFieldOutput = 0x1C4;
	constexpr uint32_t m_flInputMin = 0x1C8;
	constexpr uint32_t m_flInputMax = 0x1CC;
	constexpr uint32_t m_flOutputMin = 0x1D0;
	constexpr uint32_t m_flOutputMax = 0x1D4;
	constexpr uint32_t m_flRadiusScale = 0x1D8;
}

namespace C_OP_RemapTransformVisibilityToScalar
{
	constexpr uint32_t m_nSetMethod = 0x1C0;
	constexpr uint32_t m_TransformInput = 0x1C8;
	constexpr uint32_t m_nFieldOutput = 0x230;
	constexpr uint32_t m_flInputMin = 0x234;
	constexpr uint32_t m_flInputMax = 0x238;
	constexpr uint32_t m_flOutputMin = 0x23C;
	constexpr uint32_t m_flOutputMax = 0x240;
	constexpr uint32_t m_flRadius = 0x244;
}

namespace C_OP_RemapTransformVisibilityToVector
{
	constexpr uint32_t m_nSetMethod = 0x1C0;
	constexpr uint32_t m_TransformInput = 0x1C8;
	constexpr uint32_t m_nFieldOutput = 0x230;
	constexpr uint32_t m_flInputMin = 0x234;
	constexpr uint32_t m_flInputMax = 0x238;
	constexpr uint32_t m_vecOutputMin = 0x23C;
	constexpr uint32_t m_vecOutputMax = 0x248;
	constexpr uint32_t m_flRadius = 0x254;
}

namespace C_OP_LerpScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_flOutput = 0x1C8;
	constexpr uint32_t m_flStartTime = 0x320;
	constexpr uint32_t m_flEndTime = 0x324;
}

namespace C_OP_LerpEndCapScalar
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_flOutput = 0x1C4;
	constexpr uint32_t m_flLerpTime = 0x1C8;
}

namespace C_OP_LerpEndCapVector
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_vecOutput = 0x1C4;
	constexpr uint32_t m_flLerpTime = 0x1D0;
}

namespace C_OP_LerpVector
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_vecOutput = 0x1C4;
	constexpr uint32_t m_flStartTime = 0x1D0;
	constexpr uint32_t m_flEndTime = 0x1D4;
	constexpr uint32_t m_nSetMethod = 0x1D8;
}

namespace C_OP_LerpToOtherAttribute
{
	constexpr uint32_t m_flInterpolation = 0x1C0;
	constexpr uint32_t m_nFieldInputFrom = 0x318;
	constexpr uint32_t m_nFieldInput = 0x31C;
	constexpr uint32_t m_nFieldOutput = 0x320;
}

namespace C_OP_RemapSpeed
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_flInputMin = 0x1C4;
	constexpr uint32_t m_flInputMax = 0x1C8;
	constexpr uint32_t m_flOutputMin = 0x1CC;
	constexpr uint32_t m_flOutputMax = 0x1D0;
	constexpr uint32_t m_nSetMethod = 0x1D4;
	constexpr uint32_t m_bIgnoreDelta = 0x1D8;
}

namespace C_OP_RemapVectortoCP
{
	constexpr uint32_t m_nOutControlPointNumber = 0x1C0;
	constexpr uint32_t m_nFieldInput = 0x1C4;
	constexpr uint32_t m_nParticleNumber = 0x1C8;
}

namespace C_OP_RampScalarLinear
{
	constexpr uint32_t m_RateMin = 0x1C0;
	constexpr uint32_t m_RateMax = 0x1C4;
	constexpr uint32_t m_flStartTime_min = 0x1C8;
	constexpr uint32_t m_flStartTime_max = 0x1CC;
	constexpr uint32_t m_flEndTime_min = 0x1D0;
	constexpr uint32_t m_flEndTime_max = 0x1D4;
	constexpr uint32_t m_nField = 0x200;
	constexpr uint32_t m_bProportionalOp = 0x204;
}

namespace C_OP_RampScalarSpline
{
	constexpr uint32_t m_RateMin = 0x1C0;
	constexpr uint32_t m_RateMax = 0x1C4;
	constexpr uint32_t m_flStartTime_min = 0x1C8;
	constexpr uint32_t m_flStartTime_max = 0x1CC;
	constexpr uint32_t m_flEndTime_min = 0x1D0;
	constexpr uint32_t m_flEndTime_max = 0x1D4;
	constexpr uint32_t m_flBias = 0x1D8;
	constexpr uint32_t m_nField = 0x200;
	constexpr uint32_t m_bProportionalOp = 0x204;
	constexpr uint32_t m_bEaseOut = 0x205;
}

namespace C_OP_RampScalarLinearSimple
{
	constexpr uint32_t m_Rate = 0x1C0;
	constexpr uint32_t m_flStartTime = 0x1C4;
	constexpr uint32_t m_flEndTime = 0x1C8;
	constexpr uint32_t m_nField = 0x1F0;
}

namespace C_OP_RampScalarSplineSimple
{
	constexpr uint32_t m_Rate = 0x1C0;
	constexpr uint32_t m_flStartTime = 0x1C4;
	constexpr uint32_t m_flEndTime = 0x1C8;
	constexpr uint32_t m_nField = 0x1F0;
	constexpr uint32_t m_bEaseOut = 0x1F4;
}

namespace C_OP_ChladniWave
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_flInputMin = 0x1C8;
	constexpr uint32_t m_flInputMax = 0x320;
	constexpr uint32_t m_flOutputMin = 0x478;
	constexpr uint32_t m_flOutputMax = 0x5D0;
	constexpr uint32_t m_vecWaveLength = 0x728;
	constexpr uint32_t m_vecHarmonics = 0xD80;
	constexpr uint32_t m_nSetMethod = 0x13D8;
	constexpr uint32_t m_nLocalSpaceControlPoint = 0x13DC;
	constexpr uint32_t m_b3D = 0x13E0;
}

namespace C_OP_Noise
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_flOutputMin = 0x1C4;
	constexpr uint32_t m_flOutputMax = 0x1C8;
	constexpr uint32_t m_fl4NoiseScale = 0x1CC;
	constexpr uint32_t m_bAdditive = 0x1D0;
	constexpr uint32_t m_flNoiseAnimationTimeScale = 0x1D4;
}

namespace C_OP_VectorNoise
{
	constexpr uint32_t m_nFieldOutput = 0x1C0;
	constexpr uint32_t m_vecOutputMin = 0x1C4;
	constexpr uint32_t m_vecOutputMax = 0x1D0;
	constexpr uint32_t m_fl4NoiseScale = 0x1DC;
	constexpr uint32_t m_bAdditive = 0x1E0;
	constexpr uint32_t m_bOffset = 0x1E1;
	constexpr uint32_t m_flNoiseAnimationTimeScale = 0x1E4;
}

namespace C_OP_Decay
{
	constexpr uint32_t m_bRopeDecay = 0x1C0;
	constexpr uint32_t m_bForcePreserveParticleOrder = 0x1C1;
}

namespace C_OP_DecayOffscreen
{
	constexpr uint32_t m_flOffscreenTime = 0x1C0;
}

namespace C_OP_EndCapTimedFreeze
{
	constexpr uint32_t m_flFreezeTime = 0x1C0;
}

namespace C_OP_EndCapTimedDecay
{
	constexpr uint32_t m_flDecayTime = 0x1C0;
}

namespace C_OP_EndCapDecay
{
}

namespace C_OP_VelocityDecay
{
	constexpr uint32_t m_flMinVelocity = 0x1C0;
}

namespace C_OP_AlphaDecay
{
	constexpr uint32_t m_flMinAlpha = 0x1C0;
}

namespace C_OP_RadiusDecay
{
	constexpr uint32_t m_flMinRadius = 0x1C0;
}

namespace C_OP_DecayMaintainCount
{
	constexpr uint32_t m_nParticlesToMaintain = 0x1C0;
	constexpr uint32_t m_flDecayDelay = 0x1C4;
	constexpr uint32_t m_nSnapshotControlPoint = 0x1C8;
	constexpr uint32_t m_bLifespanDecay = 0x1CC;
	constexpr uint32_t m_flScale = 0x1D0;
	constexpr uint32_t m_bKillNewest = 0x328;
}

namespace C_OP_DecayClampCount
{
	constexpr uint32_t m_nCount = 0x1C0;
}

namespace C_OP_Cull
{
	constexpr uint32_t m_flCullPerc = 0x1C0;
	constexpr uint32_t m_flCullStart = 0x1C4;
	constexpr uint32_t m_flCullEnd = 0x1C8;
	constexpr uint32_t m_flCullExp = 0x1CC;
}

namespace CGeneralSpin
{
	constexpr uint32_t m_nSpinRateDegrees = 0x1C0;
	constexpr uint32_t m_nSpinRateMinDegrees = 0x1C4;
	constexpr uint32_t m_fSpinRateStopTime = 0x1CC;
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
	constexpr uint32_t m_flStartTime = 0x1C0;
	constexpr uint32_t m_flEndTime = 0x1C4;
	constexpr uint32_t m_flStartScale = 0x1C8;
	constexpr uint32_t m_flEndScale = 0x1CC;
	constexpr uint32_t m_bEaseInAndOut = 0x1D0;
	constexpr uint32_t m_flBias = 0x1D4;
}

namespace C_OP_ColorInterpolate
{
	constexpr uint32_t m_ColorFade = 0x1C0;
	constexpr uint32_t m_flFadeStartTime = 0x1D0;
	constexpr uint32_t m_flFadeEndTime = 0x1D4;
	constexpr uint32_t m_nFieldOutput = 0x1D8;
	constexpr uint32_t m_bEaseInOut = 0x1DC;
	constexpr uint32_t m_bUseNewCode = 0x1DD;
}

