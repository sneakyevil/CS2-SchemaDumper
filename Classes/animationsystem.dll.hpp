namespace MoodAnimation_t
{
	constexpr uint32_t m_sName = 0x0;
	constexpr uint32_t m_flWeight = 0x8;
}

namespace MoodAnimationLayer_t
{
	constexpr uint32_t m_sName = 0x0;
	constexpr uint32_t m_bActiveListening = 0x8;
	constexpr uint32_t m_bActiveTalking = 0x9;
	constexpr uint32_t m_layerAnimations = 0x10;
	constexpr uint32_t m_flIntensity = 0x28;
	constexpr uint32_t m_flDurationScale = 0x30;
	constexpr uint32_t m_bScaleWithInts = 0x38;
	constexpr uint32_t m_flNextStart = 0x3C;
	constexpr uint32_t m_flStartOffset = 0x44;
	constexpr uint32_t m_flEndOffset = 0x4C;
	constexpr uint32_t m_flFadeIn = 0x54;
	constexpr uint32_t m_flFadeOut = 0x58;
}

namespace CMoodVData
{
	constexpr uint32_t m_sModelName = 0x0;
	constexpr uint32_t m_nMoodType = 0xE0;
	constexpr uint32_t m_animationLayers = 0xE8;
}

namespace AnimationDecodeDebugDumpElement_t
{
	constexpr uint32_t m_nEntityIndex = 0x0;
	constexpr uint32_t m_modelName = 0x8;
	constexpr uint32_t m_poseParams = 0x10;
	constexpr uint32_t m_decodeOps = 0x28;
	constexpr uint32_t m_internalOps = 0x40;
	constexpr uint32_t m_decodedAnims = 0x58;
}

namespace AnimationDecodeDebugDump_t
{
	constexpr uint32_t m_processingType = 0x0;
	constexpr uint32_t m_elems = 0x8;
}

namespace AnimationSnapshotBase_t
{
	constexpr uint32_t m_flRealTime = 0x0;
	constexpr uint32_t m_rootToWorld = 0x10;
	constexpr uint32_t m_bBonesInWorldSpace = 0x40;
	constexpr uint32_t m_boneSetupMask = 0x48;
	constexpr uint32_t m_boneTransforms = 0x60;
	constexpr uint32_t m_flexControllers = 0x78;
	constexpr uint32_t m_SnapshotType = 0x90;
	constexpr uint32_t m_bHasDecodeDump = 0x94;
	constexpr uint32_t m_DecodeDump = 0x98;
}

namespace AnimationSnapshot_t
{
	constexpr uint32_t m_nEntIndex = 0x110;
	constexpr uint32_t m_modelName = 0x118;
}

namespace CAnimBoneDifference
{
	constexpr uint32_t m_name = 0x0;
	constexpr uint32_t m_parent = 0x10;
	constexpr uint32_t m_posError = 0x20;
	constexpr uint32_t m_bHasRotation = 0x2C;
	constexpr uint32_t m_bHasMovement = 0x2D;
}

namespace CAnimMorphDifference
{
	constexpr uint32_t m_name = 0x0;
}

namespace CAnimUserDifference
{
	constexpr uint32_t m_name = 0x0;
	constexpr uint32_t m_nType = 0x10;
}

namespace CAnimEncodeDifference
{
	constexpr uint32_t m_boneArray = 0x0;
	constexpr uint32_t m_morphArray = 0x18;
	constexpr uint32_t m_userArray = 0x30;
	constexpr uint32_t m_bHasRotationBitArray = 0x48;
	constexpr uint32_t m_bHasMovementBitArray = 0x60;
	constexpr uint32_t m_bHasMorphBitArray = 0x78;
	constexpr uint32_t m_bHasUserBitArray = 0x90;
}

namespace CAnimAnimEvent
{
	constexpr uint32_t m_nFrame = 0x0;
	constexpr uint32_t m_flCycle = 0x4;
	constexpr uint32_t m_EventData = 0x8;
	constexpr uint32_t m_sLegacyOptions = 0x18;
	constexpr uint32_t m_sEventName = 0x28;
}

namespace CAnimMovement
{
	constexpr uint32_t endframe = 0x0;
	constexpr uint32_t motionflags = 0x4;
	constexpr uint32_t v0 = 0x8;
	constexpr uint32_t v1 = 0xC;
	constexpr uint32_t angle = 0x10;
	constexpr uint32_t vector = 0x14;
	constexpr uint32_t position = 0x20;
}

namespace CAnimLocalHierarchy
{
	constexpr uint32_t m_sBone = 0x0;
	constexpr uint32_t m_sNewParent = 0x10;
	constexpr uint32_t m_nStartFrame = 0x20;
	constexpr uint32_t m_nPeakFrame = 0x24;
	constexpr uint32_t m_nTailFrame = 0x28;
	constexpr uint32_t m_nEndFrame = 0x2C;
}

namespace CAnimDecoder
{
	constexpr uint32_t m_szName = 0x0;
	constexpr uint32_t m_nVersion = 0x10;
	constexpr uint32_t m_nType = 0x14;
}

namespace CAnimFrameSegment
{
	constexpr uint32_t m_nUniqueFrameIndex = 0x0;
	constexpr uint32_t m_nLocalElementMasks = 0x4;
	constexpr uint32_t m_nLocalChannel = 0x8;
	constexpr uint32_t m_container = 0x10;
}

namespace CAnimFrameBlockAnim
{
	constexpr uint32_t m_nStartFrame = 0x0;
	constexpr uint32_t m_nEndFrame = 0x4;
	constexpr uint32_t m_segmentIndexArray = 0x8;
}

namespace CAnimEncodedFrames
{
	constexpr uint32_t m_fileName = 0x0;
	constexpr uint32_t m_nFrames = 0x10;
	constexpr uint32_t m_nFramesPerBlock = 0x14;
	constexpr uint32_t m_frameblockArray = 0x18;
	constexpr uint32_t m_usageDifferences = 0x30;
}

namespace CAnimDesc_Flag
{
	constexpr uint32_t m_bLooping = 0x0;
	constexpr uint32_t m_bAllZeros = 0x1;
	constexpr uint32_t m_bHidden = 0x2;
	constexpr uint32_t m_bDelta = 0x3;
	constexpr uint32_t m_bLegacyWorldspace = 0x4;
	constexpr uint32_t m_bModelDoc = 0x5;
	constexpr uint32_t m_bImplicitSeqIgnoreDelta = 0x6;
	constexpr uint32_t m_bAnimGraphAdditive = 0x7;
}

namespace CAnimSequenceParams
{
	constexpr uint32_t m_flFadeInTime = 0x0;
	constexpr uint32_t m_flFadeOutTime = 0x4;
}

namespace CAnimDesc
{
	constexpr uint32_t m_name = 0x0;
	constexpr uint32_t m_flags = 0x10;
	constexpr uint32_t fps = 0x18;
	constexpr uint32_t m_Data = 0x20;
	constexpr uint32_t m_movementArray = 0xF8;
	constexpr uint32_t m_eventArray = 0x110;
	constexpr uint32_t m_activityArray = 0x128;
	constexpr uint32_t m_hierarchyArray = 0x140;
	constexpr uint32_t framestalltime = 0x158;
	constexpr uint32_t m_vecRootMin = 0x15C;
	constexpr uint32_t m_vecRootMax = 0x168;
	constexpr uint32_t m_vecBoneWorldMin = 0x178;
	constexpr uint32_t m_vecBoneWorldMax = 0x190;
	constexpr uint32_t m_sequenceParams = 0x1A8;
}

namespace CAnimActivity
{
	constexpr uint32_t m_name = 0x0;
	constexpr uint32_t m_nActivity = 0x10;
	constexpr uint32_t m_nFlags = 0x14;
	constexpr uint32_t m_nWeight = 0x18;
}

namespace CAnimData
{
	constexpr uint32_t m_name = 0x10;
	constexpr uint32_t m_animArray = 0x20;
	constexpr uint32_t m_decoderArray = 0x38;
	constexpr uint32_t m_nMaxUniqueFrameIndex = 0x50;
	constexpr uint32_t m_segmentArray = 0x58;
}

namespace CAnimBone
{
	constexpr uint32_t m_name = 0x0;
	constexpr uint32_t m_parent = 0x10;
	constexpr uint32_t m_pos = 0x14;
	constexpr uint32_t m_quat = 0x20;
	constexpr uint32_t m_scale = 0x30;
	constexpr uint32_t m_qAlignment = 0x34;
	constexpr uint32_t m_flags = 0x44;
}

namespace CAnimUser
{
	constexpr uint32_t m_name = 0x0;
	constexpr uint32_t m_nType = 0x10;
}

namespace CAnimDataChannelDesc
{
	constexpr uint32_t m_szChannelClass = 0x0;
	constexpr uint32_t m_szVariableName = 0x10;
	constexpr uint32_t m_nFlags = 0x20;
	constexpr uint32_t m_nType = 0x24;
	constexpr uint32_t m_szGrouping = 0x28;
	constexpr uint32_t m_szDescription = 0x38;
	constexpr uint32_t m_szElementNameArray = 0x48;
	constexpr uint32_t m_nElementIndexArray = 0x60;
	constexpr uint32_t m_nElementMaskArray = 0x78;
}

namespace CAnimKeyData
{
	constexpr uint32_t m_name = 0x0;
	constexpr uint32_t m_boneArray = 0x10;
	constexpr uint32_t m_userArray = 0x28;
	constexpr uint32_t m_morphArray = 0x40;
	constexpr uint32_t m_nChannelElements = 0x58;
	constexpr uint32_t m_dataChannelArray = 0x60;
}

namespace CAnimationGroup
{
	constexpr uint32_t m_nFlags = 0x10;
	constexpr uint32_t m_name = 0x18;
	constexpr uint32_t m_localHAnimArray_Handle = 0x60;
	constexpr uint32_t m_includedGroupArray_Handle = 0x78;
	constexpr uint32_t m_directHSeqGroup_Handle = 0x90;
	constexpr uint32_t m_decodeKey = 0x98;
	constexpr uint32_t m_szScripts = 0x110;
}

namespace CSeqAutoLayerFlag
{
	constexpr uint32_t m_bPost = 0x0;
	constexpr uint32_t m_bSpline = 0x1;
	constexpr uint32_t m_bXFade = 0x2;
	constexpr uint32_t m_bNoBlend = 0x3;
	constexpr uint32_t m_bLocal = 0x4;
	constexpr uint32_t m_bPose = 0x5;
	constexpr uint32_t m_bFetchFrame = 0x6;
	constexpr uint32_t m_bSubtract = 0x7;
}

namespace CSeqAutoLayer
{
	constexpr uint32_t m_nLocalReference = 0x0;
	constexpr uint32_t m_nLocalPose = 0x2;
	constexpr uint32_t m_flags = 0x4;
	constexpr uint32_t m_start = 0xC;
	constexpr uint32_t m_peak = 0x10;
	constexpr uint32_t m_tail = 0x14;
	constexpr uint32_t m_end = 0x18;
}

namespace CSeqIKLock
{
	constexpr uint32_t m_flPosWeight = 0x0;
	constexpr uint32_t m_flAngleWeight = 0x4;
	constexpr uint32_t m_nLocalBone = 0x8;
	constexpr uint32_t m_bBonesOrientedAlongPositiveX = 0xA;
}

namespace CSeqBoneMaskList
{
	constexpr uint32_t m_sName = 0x0;
	constexpr uint32_t m_nLocalBoneArray = 0x10;
	constexpr uint32_t m_flBoneWeightArray = 0x28;
	constexpr uint32_t m_flDefaultMorphCtrlWeight = 0x40;
	constexpr uint32_t m_morphCtrlWeightArray = 0x48;
}

namespace CSeqScaleSet
{
	constexpr uint32_t m_sName = 0x0;
	constexpr uint32_t m_nLocalBoneArray = 0x10;
	constexpr uint32_t m_flBoneScaleArray = 0x28;
}

namespace CSeqMultiFetchFlag
{
	constexpr uint32_t m_bRealtime = 0x0;
	constexpr uint32_t m_bCylepose = 0x1;
	constexpr uint32_t m_b0D = 0x2;
	constexpr uint32_t m_b1D = 0x3;
	constexpr uint32_t m_b2D = 0x4;
	constexpr uint32_t m_b2D_TRI = 0x5;
}

namespace CSeqMultiFetch
{
	constexpr uint32_t m_flags = 0x0;
	constexpr uint32_t m_localReferenceArray = 0x8;
	constexpr uint32_t m_nGroupSize = 0x20;
	constexpr uint32_t m_nLocalPose = 0x28;
	constexpr uint32_t m_poseKeyArray0 = 0x30;
	constexpr uint32_t m_poseKeyArray1 = 0x48;
	constexpr uint32_t m_nLocalCyclePoseParameter = 0x60;
	constexpr uint32_t m_bCalculatePoseParameters = 0x64;
}

namespace CSeqSeqDescFlag
{
	constexpr uint32_t m_bLooping = 0x0;
	constexpr uint32_t m_bSnap = 0x1;
	constexpr uint32_t m_bAutoplay = 0x2;
	constexpr uint32_t m_bPost = 0x3;
	constexpr uint32_t m_bHidden = 0x4;
	constexpr uint32_t m_bMulti = 0x5;
	constexpr uint32_t m_bLegacyDelta = 0x6;
	constexpr uint32_t m_bLegacyWorldspace = 0x7;
	constexpr uint32_t m_bLegacyCyclepose = 0x8;
	constexpr uint32_t m_bLegacyRealtime = 0x9;
	constexpr uint32_t m_bModelDoc = 0xA;
}

namespace CSeqTransition
{
	constexpr uint32_t m_flFadeInTime = 0x0;
	constexpr uint32_t m_flFadeOutTime = 0x4;
}

namespace CSeqS1SeqDesc
{
	constexpr uint32_t m_sName = 0x0;
	constexpr uint32_t m_flags = 0x10;
	constexpr uint32_t m_fetch = 0x20;
	constexpr uint32_t m_nLocalWeightlist = 0x88;
	constexpr uint32_t m_autoLayerArray = 0x90;
	constexpr uint32_t m_IKLockArray = 0xA8;
	constexpr uint32_t m_transition = 0xC0;
	constexpr uint32_t m_SequenceKeys = 0xC8;
	constexpr uint32_t m_LegacyKeyValueText = 0xD8;
	constexpr uint32_t m_activityArray = 0xE8;
	constexpr uint32_t m_footMotion = 0x100;
}

namespace CSeqSynthAnimDesc
{
	constexpr uint32_t m_sName = 0x0;
	constexpr uint32_t m_flags = 0x10;
	constexpr uint32_t m_transition = 0x1C;
	constexpr uint32_t m_nLocalBaseReference = 0x24;
	constexpr uint32_t m_nLocalBoneMask = 0x26;
	constexpr uint32_t m_activityArray = 0x28;
}

namespace CSeqCmdLayer
{
	constexpr uint32_t m_cmd = 0x0;
	constexpr uint32_t m_nLocalReference = 0x2;
	constexpr uint32_t m_nLocalBonemask = 0x4;
	constexpr uint32_t m_nDstResult = 0x6;
	constexpr uint32_t m_nSrcResult = 0x8;
	constexpr uint32_t m_bSpline = 0xA;
	constexpr uint32_t m_flVar1 = 0xC;
	constexpr uint32_t m_flVar2 = 0x10;
	constexpr uint32_t m_nLineNumber = 0x14;
}

namespace CSeqPoseSetting
{
	constexpr uint32_t m_sPoseParameter = 0x0;
	constexpr uint32_t m_sAttachment = 0x10;
	constexpr uint32_t m_sReferenceSequence = 0x20;
	constexpr uint32_t m_flValue = 0x30;
	constexpr uint32_t m_bX = 0x34;
	constexpr uint32_t m_bY = 0x35;
	constexpr uint32_t m_bZ = 0x36;
	constexpr uint32_t m_eType = 0x38;
}

namespace CSeqCmdSeqDesc
{
	constexpr uint32_t m_sName = 0x0;
	constexpr uint32_t m_flags = 0x10;
	constexpr uint32_t m_transition = 0x1C;
	constexpr uint32_t m_nFrameRangeSequence = 0x24;
	constexpr uint32_t m_nFrameCount = 0x26;
	constexpr uint32_t m_flFPS = 0x28;
	constexpr uint32_t m_nSubCycles = 0x2C;
	constexpr uint32_t m_numLocalResults = 0x2E;
	constexpr uint32_t m_cmdLayerArray = 0x30;
	constexpr uint32_t m_eventArray = 0x48;
	constexpr uint32_t m_activityArray = 0x60;
	constexpr uint32_t m_poseSettingArray = 0x78;
}

namespace CSeqPoseParamDesc
{
	constexpr uint32_t m_sName = 0x0;
	constexpr uint32_t m_flStart = 0x10;
	constexpr uint32_t m_flEnd = 0x14;
	constexpr uint32_t m_flLoop = 0x18;
	constexpr uint32_t m_bLooping = 0x1C;
}

namespace CSequenceGroupData
{
	constexpr uint32_t m_sName = 0x10;
	constexpr uint32_t m_nFlags = 0x20;
	constexpr uint32_t m_localSequenceNameArray = 0x28;
	constexpr uint32_t m_localS1SeqDescArray = 0x40;
	constexpr uint32_t m_localMultiSeqDescArray = 0x58;
	constexpr uint32_t m_localSynthAnimDescArray = 0x70;
	constexpr uint32_t m_localCmdSeqDescArray = 0x88;
	constexpr uint32_t m_localBoneMaskArray = 0xA0;
	constexpr uint32_t m_localScaleSetArray = 0xB8;
	constexpr uint32_t m_localBoneNameArray = 0xD0;
	constexpr uint32_t m_localNodeName = 0xE8;
	constexpr uint32_t m_localPoseParamArray = 0xF8;
	constexpr uint32_t m_keyValues = 0x110;
	constexpr uint32_t m_localIKAutoplayLockArray = 0x120;
}

namespace CCompressorGroup
{
	constexpr uint32_t m_nTotalElementCount = 0x0;
	constexpr uint32_t m_szChannelClass = 0x8;
	constexpr uint32_t m_szVariableName = 0x20;
	constexpr uint32_t m_nType = 0x38;
	constexpr uint32_t m_nFlags = 0x50;
	constexpr uint32_t m_szGrouping = 0x68;
	constexpr uint32_t m_nCompressorIndex = 0x80;
	constexpr uint32_t m_szElementNames = 0x98;
	constexpr uint32_t m_nElementUniqueID = 0xB0;
	constexpr uint32_t m_nElementMask = 0xC8;
	constexpr uint32_t m_vectorCompressor = 0xF8;
	constexpr uint32_t m_quaternionCompressor = 0x110;
	constexpr uint32_t m_intCompressor = 0x128;
	constexpr uint32_t m_boolCompressor = 0x140;
	constexpr uint32_t m_colorCompressor = 0x158;
	constexpr uint32_t m_vector2DCompressor = 0x170;
	constexpr uint32_t m_vector4DCompressor = 0x188;
}

namespace HSequence
{
	constexpr uint32_t m_Value = 0x0;
}

namespace CAnimationGraphVisualizerPrimitiveBase
{
	constexpr uint32_t m_Type = 0x8;
}

namespace CAnimationGraphVisualizerText
{
	constexpr uint32_t m_vWsPosition = 0x10;
	constexpr uint32_t m_Color = 0x20;
	constexpr uint32_t m_Text = 0x28;
}

namespace CAnimationGraphVisualizerSphere
{
	constexpr uint32_t m_vWsPosition = 0x10;
	constexpr uint32_t m_flRadius = 0x20;
	constexpr uint32_t m_Color = 0x24;
}

namespace CAnimationGraphVisualizerLine
{
	constexpr uint32_t m_vWsPositionStart = 0x10;
	constexpr uint32_t m_vWsPositionEnd = 0x20;
	constexpr uint32_t m_Color = 0x30;
}

namespace CAnimationGraphVisualizerPie
{
	constexpr uint32_t m_vWsCenter = 0x10;
	constexpr uint32_t m_vWsStart = 0x20;
	constexpr uint32_t m_vWsEnd = 0x30;
	constexpr uint32_t m_Color = 0x40;
}

namespace CAnimationGraphVisualizerAxis
{
	constexpr uint32_t m_xWsTransform = 0x10;
	constexpr uint32_t m_flAxisSize = 0x30;
}

namespace AnimNodeID
{
	constexpr uint32_t m_id = 0x0;
}

namespace AnimNodeOutputID
{
	constexpr uint32_t m_id = 0x0;
}

namespace AnimStateID
{
	constexpr uint32_t m_id = 0x0;
}

namespace AnimParamID
{
	constexpr uint32_t m_id = 0x0;
}

namespace AnimTagID
{
	constexpr uint32_t m_id = 0x0;
}

namespace AnimComponentID
{
	constexpr uint32_t m_id = 0x0;
}

namespace AnimScriptHandle
{
	constexpr uint32_t m_id = 0x0;
}

namespace CAnimEnum
{
	constexpr uint32_t m_value = 0x0;
}

namespace CBlendCurve
{
	constexpr uint32_t m_flControlPoint1 = 0x0;
	constexpr uint32_t m_flControlPoint2 = 0x4;
}

namespace CAnimNodePath
{
	constexpr uint32_t m_path = 0x0;
	constexpr uint32_t m_nCount = 0x2C;
}

namespace CPoseHandle
{
	constexpr uint32_t m_nIndex = 0x0;
	constexpr uint32_t m_eType = 0x2;
}

namespace CAnimNodeConnection
{
	constexpr uint32_t m_nodeID = 0x0;
	constexpr uint32_t m_outputID = 0x4;
}

namespace ConfigIndex
{
	constexpr uint32_t m_nGroup = 0x0;
	constexpr uint32_t m_nConfig = 0x2;
}

namespace MotionIndex
{
	constexpr uint32_t m_nGroup = 0x0;
	constexpr uint32_t m_nMotion = 0x2;
}

namespace CMotionGraphConfig
{
	constexpr uint32_t m_paramValues = 0x0;
	constexpr uint32_t m_flDuration = 0x10;
	constexpr uint32_t m_nMotionIndex = 0x14;
	constexpr uint32_t m_nSampleStart = 0x18;
	constexpr uint32_t m_nSampleCount = 0x1C;
}

namespace IKBoneNameAndIndex_t
{
	constexpr uint32_t m_Name = 0x0;
}

namespace IKSolverSettings_t
{
	constexpr uint32_t m_SolverType = 0x0;
	constexpr uint32_t m_nNumIterations = 0x4;
}

namespace IKTargetSettings_t
{
	constexpr uint32_t m_TargetSource = 0x0;
	constexpr uint32_t m_Bone = 0x8;
	constexpr uint32_t m_AnimgraphParameterNamePosition = 0x18;
	constexpr uint32_t m_TargetCoordSystem = 0x1C;
}

namespace CAnimationSubGraph
{
	constexpr uint32_t m_nodeManager = 0x8;
	constexpr uint32_t m_componentManager = 0x50;
	constexpr uint32_t m_localParameters = 0x78;
	constexpr uint32_t m_localTags = 0x90;
	constexpr uint32_t m_referencedParamGroups = 0xA8;
	constexpr uint32_t m_referencedTagGroups = 0xC0;
}

namespace CAnimGraphModelBinding
{
	constexpr uint32_t m_modelName = 0x8;
	constexpr uint32_t m_pSharedData = 0x10;
}

namespace CAnimClipDataManager
{
	constexpr uint32_t m_itemTable = 0x18;
}

namespace CAnimClipData
{
	constexpr uint32_t m_tagSpans = 0x20;
	constexpr uint32_t m_clipName = 0x38;
}

namespace CAnimParameterList
{
	constexpr uint32_t m_Parameters = 0x20;
}

namespace CAnimNodeList
{
	constexpr uint32_t m_nodes = 0x10;
}

namespace CAnimNodeManager
{
	constexpr uint32_t m_nodes = 0x8;
}

namespace CAnimStateList
{
	constexpr uint32_t m_states = 0x10;
}

namespace CAnimInputDamping
{
	constexpr uint32_t m_speedFunction = 0x8;
	constexpr uint32_t m_fSpeedScale = 0xC;
}

namespace CAnimUpdateSharedData
{
	constexpr uint32_t m_nodes = 0x10;
	constexpr uint32_t m_nodeIndexMap = 0x28;
	constexpr uint32_t m_components = 0x48;
	constexpr uint32_t m_pParamListUpdater = 0x60;
	constexpr uint32_t m_pTagManagerUpdater = 0x68;
	constexpr uint32_t m_scriptManager = 0x70;
	constexpr uint32_t m_settings = 0x78;
	constexpr uint32_t m_pStaticPoseCache = 0xA8;
	constexpr uint32_t m_pSkeleton = 0xB0;
	constexpr uint32_t m_rootNodePath = 0xB8;
}

namespace CFloatAnimValue
{
	constexpr uint32_t m_flConstValue = 0x8;
	constexpr uint32_t m_paramID = 0xC;
	constexpr uint32_t m_eSource = 0x10;
}

namespace CCachedPose
{
	constexpr uint32_t m_transforms = 0x8;
	constexpr uint32_t m_morphWeights = 0x20;
	constexpr uint32_t m_hSequence = 0x38;
	constexpr uint32_t m_flCycle = 0x3C;
}

namespace CStaticPoseCache
{
	constexpr uint32_t m_poses = 0x10;
	constexpr uint32_t m_nBoneCount = 0x28;
	constexpr uint32_t m_nMorphCount = 0x2C;
}

namespace CStaticPoseCacheBuilder
{
}

namespace CAnimGraphSettingsManager
{
	constexpr uint32_t m_settingsGroups = 0x18;
}

namespace CAnimParamSpanSample
{
	constexpr uint32_t m_value = 0x8;
	constexpr uint32_t m_flCycle = 0x1C;
}

namespace CAnimParamSpan
{
	constexpr uint32_t m_samples = 0x20;
	constexpr uint32_t m_id = 0x38;
	constexpr uint32_t m_flStartCycle = 0x3C;
	constexpr uint32_t m_flEndCycle = 0x40;
}

namespace ParamSpanSample_t
{
	constexpr uint32_t m_value = 0x0;
	constexpr uint32_t m_flCycle = 0x14;
}

namespace ParamSpan_t
{
	constexpr uint32_t m_samples = 0x0;
	constexpr uint32_t m_hParam = 0x18;
	constexpr uint32_t m_eParamType = 0x1A;
	constexpr uint32_t m_flStartCycle = 0x1C;
	constexpr uint32_t m_flEndCycle = 0x20;
}

namespace CParamSpanUpdater
{
	constexpr uint32_t m_spans = 0x0;
}

namespace CAnimGraphSettingsGroup
{
}

namespace CAnimGraphNetworkSettings
{
	constexpr uint32_t m_bNetworkingEnabled = 0x20;
}

namespace CAnimComponentBase
{
	constexpr uint32_t m_group = 0x18;
	constexpr uint32_t m_id = 0x28;
	constexpr uint32_t m_bStartEnabled = 0x2C;
	constexpr uint32_t m_nPriority = 0x30;
	constexpr uint32_t m_networkMode = 0x34;
}

namespace CAnimComponentManager
{
	constexpr uint32_t m_components = 0x8;
}

namespace CAnimScriptComponent
{
	constexpr uint32_t m_sName = 0x40;
	constexpr uint32_t m_scriptFilename = 0x48;
}

namespace CActionComponent
{
	constexpr uint32_t m_actions = 0x38;
	constexpr uint32_t m_sName = 0x50;
}

namespace CDampedValueItem
{
	constexpr uint32_t m_valueType = 0x0;
	constexpr uint32_t m_floatParamIn = 0x4;
	constexpr uint32_t m_floatParamOut = 0x8;
	constexpr uint32_t m_vectorParamIn = 0xC;
	constexpr uint32_t m_vectorParamOut = 0x10;
	constexpr uint32_t m_damping = 0x18;
}

namespace CDampedValueComponent
{
	constexpr uint32_t m_name = 0x38;
	constexpr uint32_t m_items = 0x40;
}

namespace CDampedValueUpdateItem
{
	constexpr uint32_t m_damping = 0x0;
	constexpr uint32_t m_hParamIn = 0x18;
	constexpr uint32_t m_hParamOut = 0x1A;
}

namespace CMovementComponent
{
	constexpr uint32_t m_moveModes = 0x40;
	constexpr uint32_t m_motors = 0x58;
	constexpr uint32_t m_bNetworkPath = 0x70;
	constexpr uint32_t m_eDefaultFacingMode = 0x74;
	constexpr uint32_t m_facingDamping = 0x78;
	constexpr uint32_t m_bNetworkFacing = 0x88;
	constexpr uint32_t m_paramIDs = 0x8C;
}

namespace CLODComponent
{
	constexpr uint32_t m_nServerLOD = 0x38;
}

namespace CLookComponent
{
	constexpr uint32_t m_bNetworkLookTarget = 0x40;
	constexpr uint32_t m_lookHeadingID = 0x44;
	constexpr uint32_t m_lookHeadingVelocityID = 0x48;
	constexpr uint32_t m_lookPitchID = 0x4C;
	constexpr uint32_t m_lookDirectionID = 0x50;
	constexpr uint32_t m_lookTargetID = 0x54;
	constexpr uint32_t m_lookTargetWorldSpaceID = 0x58;
}

namespace CRigidBodyWeight
{
	constexpr uint32_t m_name = 0x0;
	constexpr uint32_t m_flWeight = 0x8;
}

namespace CRigidBodyWeightList
{
	constexpr uint32_t m_name = 0x8;
	constexpr uint32_t m_weights = 0x10;
}

namespace CRagdollComponent
{
	constexpr uint32_t m_weightLists = 0x38;
	constexpr uint32_t m_flSpringFrequencyMin = 0x50;
	constexpr uint32_t m_flSpringFrequencyMax = 0x54;
}

namespace WeightList
{
	constexpr uint32_t m_name = 0x0;
	constexpr uint32_t m_weights = 0x8;
}

namespace CSlopeComponent
{
	constexpr uint32_t m_flTraceDistance = 0x40;
	constexpr uint32_t m_slopeAngleID = 0x44;
	constexpr uint32_t m_slopeHeadingID = 0x48;
	constexpr uint32_t m_slopeAngleSideID = 0x4C;
	constexpr uint32_t m_slopeAngleFrontID = 0x50;
	constexpr uint32_t m_slopeNormalID = 0x54;
	constexpr uint32_t m_slopeNormal_WorldSpaceID = 0x58;
}

namespace CVRInputComponent
{
	constexpr uint32_t m_FingerCurl_Thumb = 0x38;
	constexpr uint32_t m_FingerCurl_Index = 0x3C;
	constexpr uint32_t m_FingerCurl_Middle = 0x40;
	constexpr uint32_t m_FingerCurl_Ring = 0x44;
	constexpr uint32_t m_FingerCurl_Pinky = 0x48;
	constexpr uint32_t m_FingerSplay_Thumb_Index = 0x4C;
	constexpr uint32_t m_FingerSplay_Index_Middle = 0x50;
	constexpr uint32_t m_FingerSplay_Middle_Ring = 0x54;
	constexpr uint32_t m_FingerSplay_Ring_Pinky = 0x58;
}

namespace CAnimActionBase
{
}

namespace CEmitTagAction
{
	constexpr uint32_t m_tag = 0x28;
}

namespace CSetParameterAction
{
	constexpr uint32_t m_param = 0x28;
	constexpr uint32_t m_value = 0x2C;
}

namespace CToggleComponentAction
{
	constexpr uint32_t m_componentID = 0x28;
	constexpr uint32_t m_bSetEnabled = 0x2C;
}

namespace CExpressionAction
{
	constexpr uint32_t m_param = 0x28;
	constexpr uint32_t m_expression = 0x30;
}

namespace CAnimMotorBase
{
	constexpr uint32_t m_name = 0x18;
	constexpr uint32_t m_bDefault = 0x20;
}

namespace CPathAnimMotorBase
{
	constexpr uint32_t m_bLockToPath = 0x28;
}

namespace CPathAnimMotor
{
}

namespace CDampedPathAnimMotor
{
	constexpr uint32_t m_flAnticipationTime = 0x30;
	constexpr uint32_t m_flMinSpeedScale = 0x34;
	constexpr uint32_t m_anticipationPosParam = 0x38;
	constexpr uint32_t m_anticipationHeadingParam = 0x3C;
	constexpr uint32_t m_flSpringConstant = 0x40;
	constexpr uint32_t m_flMinSpringTension = 0x44;
	constexpr uint32_t m_flMaxSpringTension = 0x48;
}

namespace CPlayerInputAnimMotor
{
	constexpr uint32_t m_sampleTimes = 0x28;
	constexpr uint32_t m_bUseAcceleration = 0x40;
	constexpr uint32_t m_flSpringConstant = 0x44;
	constexpr uint32_t m_flAnticipationDistance = 0x48;
	constexpr uint32_t m_anticipationPosParam = 0x4C;
	constexpr uint32_t m_anticipationHeadingParam = 0x50;
}

namespace CAnimParameterBase
{
	constexpr uint32_t m_name = 0x18;
	constexpr uint32_t m_group = 0x38;
	constexpr uint32_t m_id = 0x40;
	constexpr uint32_t m_componentName = 0x58;
	constexpr uint32_t m_previewButton = 0x64;
	constexpr uint32_t m_bUseMostRecentValue = 0x68;
	constexpr uint32_t m_bAutoReset = 0x69;
	constexpr uint32_t m_eNetworkSetting = 0x6C;
	constexpr uint32_t m_bGameWritable = 0x70;
	constexpr uint32_t m_bGraphWritable = 0x71;
	constexpr uint32_t m_bIsReferenced = 0x72;
	constexpr uint32_t m_bNetworkingRequested = 0x73;
}

namespace CBoolAnimParameter
{
	constexpr uint32_t m_bDefaultValue = 0x78;
}

namespace CEnumAnimParameter
{
	constexpr uint32_t m_defaultValue = 0x80;
	constexpr uint32_t m_enumOptions = 0x88;
}

namespace CIntAnimParameter
{
	constexpr uint32_t m_defaultValue = 0x78;
	constexpr uint32_t m_minValue = 0x7C;
	constexpr uint32_t m_maxValue = 0x80;
}

namespace CFloatAnimParameter
{
	constexpr uint32_t m_fDefaultValue = 0x78;
	constexpr uint32_t m_fMinValue = 0x7C;
	constexpr uint32_t m_fMaxValue = 0x80;
	constexpr uint32_t m_bInterpolate = 0x84;
}

namespace CVectorAnimParameter
{
	constexpr uint32_t m_defaultValue = 0x78;
	constexpr uint32_t m_bInterpolate = 0x84;
}

namespace CQuaternionAnimParameter
{
	constexpr uint32_t m_defaultValue = 0x80;
	constexpr uint32_t m_bInterpolate = 0x90;
}

namespace CAnimNodeBase
{
	constexpr uint32_t m_sName = 0x20;
	constexpr uint32_t m_vecPosition = 0x28;
	constexpr uint32_t m_nNodeID = 0x30;
	constexpr uint32_t m_networkMode = 0x34;
}

namespace CSequenceAnimNode
{
	constexpr uint32_t m_tagSpans = 0x68;
	constexpr uint32_t m_paramSpans = 0x80;
	constexpr uint32_t m_sequenceName = 0x98;
	constexpr uint32_t m_playbackSpeed = 0xA0;
	constexpr uint32_t m_bLoop = 0xA4;
}

namespace CBlendNodeChild
{
	constexpr uint32_t m_inputConnection = 0x8;
	constexpr uint32_t m_name = 0x10;
	constexpr uint32_t m_blendValue = 0x18;
}

namespace CBlendAnimNode
{
	constexpr uint32_t m_children = 0x48;
	constexpr uint32_t m_blendValueSource = 0x60;
	constexpr uint32_t m_param = 0x64;
	constexpr uint32_t m_blendKeyType = 0x68;
	constexpr uint32_t m_bLockBlendOnReset = 0x6C;
	constexpr uint32_t m_bSyncCycles = 0x6D;
	constexpr uint32_t m_bLoop = 0x6E;
	constexpr uint32_t m_bLockWhenWaning = 0x6F;
	constexpr uint32_t m_damping = 0x70;
}

namespace CRagdollAnimNode
{
	constexpr uint32_t m_weightListName = 0x38;
	constexpr uint32_t m_poseControlMethod = 0x40;
	constexpr uint32_t m_inputConnection = 0x44;
}

namespace CRootAnimNode
{
	constexpr uint32_t m_inputConnection = 0x50;
}

namespace CChoiceNodeChild
{
	constexpr uint32_t m_inputConnection = 0x0;
	constexpr uint32_t m_name = 0x8;
	constexpr uint32_t m_weight = 0x10;
	constexpr uint32_t m_blendTime = 0x14;
}

namespace CChoiceAnimNode
{
	constexpr uint32_t m_children = 0x38;
	constexpr uint32_t m_seed = 0x50;
	constexpr uint32_t m_choiceMethod = 0x54;
	constexpr uint32_t m_choiceChangeMethod = 0x58;
	constexpr uint32_t m_blendMethod = 0x5C;
	constexpr uint32_t m_blendTime = 0x60;
	constexpr uint32_t m_bCrossFade = 0x64;
	constexpr uint32_t m_bResetChosen = 0x65;
	constexpr uint32_t m_bDontResetSameSelection = 0x66;
}

namespace CCycleControlAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_valueSource = 0x40;
	constexpr uint32_t m_param = 0x44;
}

namespace CCycleControlClipAnimNode
{
	constexpr uint32_t m_tagSpans = 0x50;
	constexpr uint32_t m_sequenceName = 0x68;
	constexpr uint32_t m_valueSource = 0x70;
	constexpr uint32_t m_param = 0x74;
}

namespace CAddAnimNode
{
	constexpr uint32_t m_baseInput = 0x38;
	constexpr uint32_t m_additiveInput = 0x40;
	constexpr uint32_t m_timingBehavior = 0x48;
	constexpr uint32_t m_flTimingBlend = 0x4C;
	constexpr uint32_t m_footMotionTiming = 0x50;
	constexpr uint32_t m_bApplyToFootMotion = 0x54;
	constexpr uint32_t m_bResetBase = 0x55;
	constexpr uint32_t m_bResetAdditive = 0x56;
	constexpr uint32_t m_bApplyChannelsSeparately = 0x57;
	constexpr uint32_t m_bUseModelSpace = 0x58;
}

namespace CSubtractAnimNode
{
	constexpr uint32_t m_baseInputConnection = 0x38;
	constexpr uint32_t m_subtractInputConnection = 0x40;
	constexpr uint32_t m_timingBehavior = 0x48;
	constexpr uint32_t m_flTimingBlend = 0x4C;
	constexpr uint32_t m_footMotionTiming = 0x50;
	constexpr uint32_t m_bApplyToFootMotion = 0x54;
	constexpr uint32_t m_bResetBase = 0x55;
	constexpr uint32_t m_bResetSubtract = 0x56;
	constexpr uint32_t m_bApplyChannelsSeparately = 0x57;
	constexpr uint32_t m_bUseModelSpace = 0x58;
}

namespace CMoverAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_bApplyMovement = 0x40;
	constexpr uint32_t m_moveVectorParam = 0x44;
	constexpr uint32_t m_bOrientMovement = 0x48;
	constexpr uint32_t m_moveHeadingParam = 0x4C;
	constexpr uint32_t m_bAdditive = 0x50;
	constexpr uint32_t m_bTurnToFace = 0x51;
	constexpr uint32_t m_facingTarget = 0x54;
	constexpr uint32_t m_param = 0x58;
	constexpr uint32_t m_bLimitOnly = 0x5C;
	constexpr uint32_t m_flTurnToFaceOffset = 0x60;
	constexpr uint32_t m_flTurnToFaceLimit = 0x64;
	constexpr uint32_t m_damping = 0x68;
}

namespace CSlowDownOnSlopesAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_flSlowDownStrength = 0x40;
}

namespace CTurnHelperAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_facingTarget = 0x40;
	constexpr uint32_t m_turnStartTime = 0x44;
	constexpr uint32_t m_turnDuration = 0x48;
	constexpr uint32_t m_bMatchChildDuration = 0x4C;
	constexpr uint32_t m_bUseManualTurnOffset = 0x4D;
	constexpr uint32_t m_manualTurnOffset = 0x50;
}

namespace CAimMatrixAnimNode
{
	constexpr uint32_t m_inputConnection = 0x40;
	constexpr uint32_t m_sequenceName = 0x48;
	constexpr uint32_t m_fAngleIncrement = 0x50;
	constexpr uint32_t m_target = 0x54;
	constexpr uint32_t m_param = 0x58;
	constexpr uint32_t m_attachmentName = 0x60;
	constexpr uint32_t m_blendMode = 0x68;
	constexpr uint32_t m_boneMaskName = 0x70;
	constexpr uint32_t m_bResetBase = 0x78;
	constexpr uint32_t m_bLockWhenWaning = 0x79;
	constexpr uint32_t m_damping = 0x80;
}

namespace CSpeedScaleAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_param = 0x40;
}

namespace CDirectionalBlendAnimNode
{
	constexpr uint32_t m_animNamePrefix = 0x40;
	constexpr uint32_t m_blendValueSource = 0x48;
	constexpr uint32_t m_param = 0x4C;
	constexpr uint32_t m_bLoop = 0x50;
	constexpr uint32_t m_bLockBlendOnReset = 0x51;
	constexpr uint32_t m_playbackSpeed = 0x54;
	constexpr uint32_t m_damping = 0x58;
}

namespace CWayPointHelperAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_flStartCycle = 0x40;
	constexpr uint32_t m_flEndCycle = 0x44;
	constexpr uint32_t m_bOnlyGoals = 0x48;
	constexpr uint32_t m_bPreventOvershoot = 0x49;
	constexpr uint32_t m_bPreventUndershoot = 0x4A;
}

namespace CBoneMaskAnimNode
{
	constexpr uint32_t m_weightListName = 0x38;
	constexpr uint32_t m_inputConnection1 = 0x40;
	constexpr uint32_t m_inputConnection2 = 0x48;
	constexpr uint32_t m_blendSpace = 0x50;
	constexpr uint32_t m_bUseBlendScale = 0x54;
	constexpr uint32_t m_blendValueSource = 0x58;
	constexpr uint32_t m_blendParameter = 0x5C;
	constexpr uint32_t m_timingBehavior = 0x60;
	constexpr uint32_t m_flTimingBlend = 0x64;
	constexpr uint32_t m_flRootMotionBlend = 0x68;
	constexpr uint32_t m_footMotionTiming = 0x6C;
	constexpr uint32_t m_bResetChild1 = 0x70;
	constexpr uint32_t m_bResetChild2 = 0x71;
}

namespace CChoreoAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
}

namespace CDirectPlaybackAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_bFinishEarly = 0x40;
	constexpr uint32_t m_bResetOnFinish = 0x41;
}

namespace CLeanMatrixAnimNode
{
	constexpr uint32_t m_sequenceName = 0x40;
	constexpr uint32_t m_flMaxValue = 0x48;
	constexpr uint32_t m_blendSource = 0x4C;
	constexpr uint32_t m_param = 0x50;
	constexpr uint32_t m_verticalAxisDirection = 0x54;
	constexpr uint32_t m_horizontalAxisDirection = 0x60;
	constexpr uint32_t m_damping = 0x70;
}

namespace CTwoBoneIKAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_ikChainName = 0x40;
	constexpr uint32_t m_bAutoDetectHingeAxis = 0x48;
	constexpr uint32_t m_endEffectorType = 0x4C;
	constexpr uint32_t m_endEffectorAttachmentName = 0x50;
	constexpr uint32_t m_targetType = 0x58;
	constexpr uint32_t m_attachmentName = 0x60;
	constexpr uint32_t m_targetBoneName = 0x68;
	constexpr uint32_t m_targetParam = 0x70;
	constexpr uint32_t m_bMatchTargetOrientation = 0x74;
	constexpr uint32_t m_rotationParam = 0x78;
	constexpr uint32_t m_bConstrainTwist = 0x7C;
	constexpr uint32_t m_flMaxTwist = 0x80;
}

namespace CSolveIKChainAnimNodeChainData
{
	constexpr uint32_t m_IkChain = 0x8;
	constexpr uint32_t m_SolverSettingSource = 0x10;
	constexpr uint32_t m_OverrideSolverSettings = 0x14;
	constexpr uint32_t m_TargetSettingSource = 0x1C;
	constexpr uint32_t m_OverrideTargetSettings = 0x20;
	constexpr uint32_t m_DebugSetting = 0x40;
	constexpr uint32_t m_flDebugNormalizedLength = 0x44;
	constexpr uint32_t m_vDebugOffset = 0x48;
}

namespace CSolveIKChainAnimNode
{
	constexpr uint32_t m_inputConnection = 0x40;
	constexpr uint32_t m_IkChains = 0x48;
}

namespace CLookAtAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_target = 0x40;
	constexpr uint32_t m_param = 0x44;
	constexpr uint32_t m_bIsPosition = 0x48;
	constexpr uint32_t m_weightParam = 0x4C;
	constexpr uint32_t m_lookatChainName = 0x50;
	constexpr uint32_t m_attachmentName = 0x58;
	constexpr uint32_t m_bRotateYawForward = 0x60;
	constexpr uint32_t m_flYawLimit = 0x64;
	constexpr uint32_t m_flPitchLimit = 0x68;
	constexpr uint32_t m_bMaintainUpDirection = 0x6C;
	constexpr uint32_t m_bResetBase = 0x6D;
	constexpr uint32_t m_bLockWhenWaning = 0x6E;
	constexpr uint32_t m_bUseHysteresis = 0x6F;
	constexpr uint32_t m_flHysteresisInnerAngle = 0x70;
	constexpr uint32_t m_flHysteresisOuterAngle = 0x74;
	constexpr uint32_t m_damping = 0x78;
}

namespace CPathHelperAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_flStoppingRadius = 0x40;
	constexpr uint32_t m_flStoppingSpeedScale = 0x44;
}

namespace CConnectionProxyItem
{
	constexpr uint32_t m_name = 0x0;
	constexpr uint32_t m_outputID = 0x8;
	constexpr uint32_t m_inputConnection = 0xC;
}

namespace CProxyAnimNodeBase
{
	constexpr uint32_t m_proxyItems = 0x40;
}

namespace CFollowAttachmentAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_boneName = 0x40;
	constexpr uint32_t m_attachmentName = 0x48;
	constexpr uint32_t m_bMatchTranslation = 0x50;
	constexpr uint32_t m_bMatchRotation = 0x51;
}

namespace CSkeletalInputAnimNode
{
	constexpr uint32_t m_transformSource = 0x38;
	constexpr uint32_t m_motionRange = 0x3C;
	constexpr uint32_t m_bEnableIK = 0x40;
	constexpr uint32_t m_bEnableCollision = 0x41;
}

namespace CStanceOverrideAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_stanceSourceConnection = 0x40;
	constexpr uint32_t m_blendParamID = 0x48;
	constexpr uint32_t m_eMode = 0x4C;
	constexpr uint32_t m_sequenceName = 0x50;
	constexpr uint32_t m_nFrameIndex = 0x58;
}

namespace CStanceScaleAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_param = 0x40;
}

namespace CSelectorAnimNode
{
	constexpr uint32_t m_children = 0x40;
	constexpr uint32_t m_tags = 0x58;
	constexpr uint32_t m_selectionSource = 0x70;
	constexpr uint32_t m_boolParamID = 0x74;
	constexpr uint32_t m_enumParamID = 0x78;
	constexpr uint32_t m_blendDuration = 0x80;
	constexpr uint32_t m_tagBehavior = 0x98;
	constexpr uint32_t m_bResetOnChange = 0x9C;
	constexpr uint32_t m_bSyncCyclesOnChange = 0x9D;
	constexpr uint32_t m_blendCurve = 0xA0;
}

namespace CHitReactAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_flMinDelayBetweenHits = 0x40;
	constexpr uint32_t m_triggerParam = 0x44;
	constexpr uint32_t m_hitBoneParam = 0x48;
	constexpr uint32_t m_hitOffsetParam = 0x4C;
	constexpr uint32_t m_hitDirectionParam = 0x50;
	constexpr uint32_t m_hitStrengthParam = 0x54;
	constexpr uint32_t m_weightListName = 0x58;
	constexpr uint32_t m_hipBoneName = 0x60;
	constexpr uint32_t m_flHipBoneTranslationScale = 0x68;
	constexpr uint32_t m_nEffectedBoneCount = 0x6C;
	constexpr uint32_t m_flMaxImpactForce = 0x70;
	constexpr uint32_t m_flMinImpactForce = 0x74;
	constexpr uint32_t m_flWhipImpactScale = 0x78;
	constexpr uint32_t m_flCounterRotationScale = 0x7C;
	constexpr uint32_t m_flDistanceFadeScale = 0x80;
	constexpr uint32_t m_flPropagationScale = 0x84;
	constexpr uint32_t m_flWhipDelay = 0x88;
	constexpr uint32_t m_flSpringStrength = 0x8C;
	constexpr uint32_t m_flWhipSpringStrength = 0x90;
	constexpr uint32_t m_flHipDipSpringStrength = 0x94;
	constexpr uint32_t m_flHipDipImpactScale = 0x98;
	constexpr uint32_t m_flHipDipDelay = 0x9C;
	constexpr uint32_t m_bResetBase = 0xA0;
}

namespace CBlend2DItemBase
{
	constexpr uint32_t m_blendValue = 0x18;
	constexpr uint32_t m_bUseCustomDuration = 0x28;
	constexpr uint32_t m_flCustomDuration = 0x2C;
}

namespace CSequenceBlend2DItem
{
	constexpr uint32_t m_tagSpans = 0x38;
	constexpr uint32_t m_sequenceName = 0x50;
}

namespace CNodeBlend2DItem
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_name = 0x40;
}

namespace CBlend2DAnimNode
{
	constexpr uint32_t m_items = 0x50;
	constexpr uint32_t m_tagSpans = 0x68;
	constexpr uint32_t m_paramSpans = 0x80;
	constexpr uint32_t m_blendSourceX = 0x98;
	constexpr uint32_t m_paramX = 0x9C;
	constexpr uint32_t m_blendSourceY = 0xA0;
	constexpr uint32_t m_paramY = 0xA4;
	constexpr uint32_t m_bLoop = 0xA8;
	constexpr uint32_t m_bLockBlendOnReset = 0xA9;
	constexpr uint32_t m_bLockWhenWaning = 0xAA;
	constexpr uint32_t m_playbackSpeed = 0xAC;
	constexpr uint32_t m_damping = 0xB0;
	constexpr uint32_t m_bAnimEventsAndTagsOnMostWeightedOnly = 0xC0;
}

namespace CFootAdjustmentAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_facingTarget = 0x40;
	constexpr uint32_t m_bResetChild = 0x44;
	constexpr uint32_t m_bAnimationDriven = 0x45;
	constexpr uint32_t m_baseClipName = 0x48;
	constexpr uint32_t m_clips = 0x50;
	constexpr uint32_t m_flTurnTimeMin = 0x68;
	constexpr uint32_t m_flTurnTimeMax = 0x6C;
	constexpr uint32_t m_flStepHeightMax = 0x70;
	constexpr uint32_t m_flStepHeightMaxAngle = 0x74;
}

namespace CFootLockItem
{
	constexpr uint32_t m_footName = 0x0;
	constexpr uint32_t m_targetBoneName = 0x8;
	constexpr uint32_t m_ikChainName = 0x10;
	constexpr uint32_t m_disableTagID = 0x18;
	constexpr uint32_t m_flMaxRotationLeft = 0x1C;
	constexpr uint32_t m_flMaxRotationRight = 0x20;
	constexpr uint32_t m_footstepLandedTag = 0x24;
}

namespace CFootLockAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_items = 0x40;
	constexpr uint32_t m_hipBoneName = 0x58;
	constexpr uint32_t m_flBlendTime = 0x60;
	constexpr uint32_t m_bApplyFootRotationLimits = 0x64;
	constexpr uint32_t m_bResetChild = 0x65;
	constexpr uint32_t m_ikSolverType = 0x68;
	constexpr uint32_t m_bAlwaysUseFallbackHinge = 0x6C;
	constexpr uint32_t m_bApplyLegTwistLimits = 0x6D;
	constexpr uint32_t m_flMaxLegTwist = 0x70;
	constexpr uint32_t m_flStrideCurveScale = 0x74;
	constexpr uint32_t m_flStrideCurveLimitScale = 0x78;
	constexpr uint32_t m_bEnableVerticalCurvedPaths = 0x7C;
	constexpr uint32_t m_bModulateStepHeight = 0x7D;
	constexpr uint32_t m_flStepHeightIncreaseScale = 0x80;
	constexpr uint32_t m_flStepHeightDecreaseScale = 0x84;
	constexpr uint32_t m_bEnableHipShift = 0x88;
	constexpr uint32_t m_flHipShiftScale = 0x8C;
	constexpr uint32_t m_hipShiftDamping = 0x90;
	constexpr uint32_t m_bApplyTilt = 0xA0;
	constexpr uint32_t m_flTiltPlanePitchSpringStrength = 0xA4;
	constexpr uint32_t m_flTiltPlaneRollSpringStrength = 0xA8;
	constexpr uint32_t m_bEnableLockBreaking = 0xAC;
	constexpr uint32_t m_flLockBreakTolerance = 0xB0;
	constexpr uint32_t m_flLockBreakBlendTime = 0xB4;
	constexpr uint32_t m_bEnableStretching = 0xB8;
	constexpr uint32_t m_flMaxStretchAmount = 0xBC;
	constexpr uint32_t m_flStretchExtensionScale = 0xC0;
	constexpr uint32_t m_bEnableGroundTracing = 0xC4;
	constexpr uint32_t m_flTraceAngleBlend = 0xC8;
	constexpr uint32_t m_bApplyHipDrop = 0xCC;
	constexpr uint32_t m_flMaxFootHeight = 0xD0;
	constexpr uint32_t m_flExtensionScale = 0xD4;
	constexpr uint32_t m_hipDampingSettings = 0xD8;
	constexpr uint32_t m_bEnableRootHeightDamping = 0xE8;
	constexpr uint32_t m_rootHeightDamping = 0xF0;
	constexpr uint32_t m_flMaxRootHeightOffset = 0x100;
	constexpr uint32_t m_flMinRootHeightOffset = 0x104;
}

namespace FootFixedData_t
{
	constexpr uint32_t m_vToeOffset = 0x0;
	constexpr uint32_t m_vHeelOffset = 0x10;
	constexpr uint32_t m_nTargetBoneIndex = 0x20;
	constexpr uint32_t m_nAnkleBoneIndex = 0x24;
	constexpr uint32_t m_nIKAnchorBoneIndex = 0x28;
	constexpr uint32_t m_ikChainIndex = 0x2C;
	constexpr uint32_t m_flMaxIKLength = 0x30;
	constexpr uint32_t m_nFootIndex = 0x34;
	constexpr uint32_t m_nTagIndex = 0x38;
	constexpr uint32_t m_flMaxRotationLeft = 0x3C;
	constexpr uint32_t m_flMaxRotationRight = 0x40;
}

namespace CFootPinningItem
{
	constexpr uint32_t m_footName = 0x0;
	constexpr uint32_t m_targetBoneName = 0x8;
	constexpr uint32_t m_ikChainName = 0x10;
	constexpr uint32_t m_tag = 0x18;
	constexpr uint32_t m_param = 0x1C;
	constexpr uint32_t m_flMaxRotationLeft = 0x20;
	constexpr uint32_t m_flMaxRotationRight = 0x24;
}

namespace CFootPinningAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_items = 0x40;
	constexpr uint32_t m_eTimingSource = 0x58;
	constexpr uint32_t m_flBlendTime = 0x5C;
	constexpr uint32_t m_flLockBreakDistance = 0x60;
	constexpr uint32_t m_flMaxLegStraightAmount = 0x64;
	constexpr uint32_t m_bApplyFootRotationLimits = 0x68;
	constexpr uint32_t m_hipBoneName = 0x70;
	constexpr uint32_t m_bApplyLegTwistLimits = 0x78;
	constexpr uint32_t m_flMaxLegTwist = 0x7C;
	constexpr uint32_t m_bResetChild = 0x80;
}

namespace CFollowPathAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_flBlendOutTime = 0x40;
	constexpr uint32_t m_bBlockNonPathMovement = 0x44;
	constexpr uint32_t m_bStopFeetAtGoal = 0x45;
	constexpr uint32_t m_bScaleSpeed = 0x46;
	constexpr uint32_t m_flScale = 0x48;
	constexpr uint32_t m_flMinAngle = 0x4C;
	constexpr uint32_t m_flMaxAngle = 0x50;
	constexpr uint32_t m_flSpeedScaleBlending = 0x54;
	constexpr uint32_t m_bTurnToFace = 0x58;
	constexpr uint32_t m_facingTarget = 0x5C;
	constexpr uint32_t m_param = 0x60;
	constexpr uint32_t m_flTurnToFaceOffset = 0x64;
	constexpr uint32_t m_damping = 0x68;
}

namespace CMotionMatchingAnimNode
{
	constexpr uint32_t m_groups = 0x48;
	constexpr uint32_t m_metrics = 0x60;
	constexpr uint32_t m_blendCurve = 0x78;
	constexpr uint32_t m_nRandomSeed = 0x80;
	constexpr uint32_t m_flSampleRate = 0x84;
	constexpr uint32_t m_bSearchEveryTick = 0x88;
	constexpr uint32_t m_flSearchInterval = 0x8C;
	constexpr uint32_t m_bSearchWhenMotionEnds = 0x90;
	constexpr uint32_t m_bSearchWhenGoalChanges = 0x91;
	constexpr uint32_t m_flBlendTime = 0x94;
	constexpr uint32_t m_flSelectionThreshold = 0x98;
	constexpr uint32_t m_flReselectionTimeWindow = 0x9C;
	constexpr uint32_t m_bLockSelectionWhenWaning = 0xA0;
	constexpr uint32_t m_bEnableRotationCorrection = 0xA1;
	constexpr uint32_t m_bGoalAssist = 0xA2;
	constexpr uint32_t m_flGoalAssistDistance = 0xA4;
	constexpr uint32_t m_flGoalAssistTolerance = 0xA8;
	constexpr uint32_t m_bEnableDistanceScaling = 0xAC;
	constexpr uint32_t m_flDistanceScale_OuterRadius = 0xB0;
	constexpr uint32_t m_flDistanceScale_InnerRadius = 0xB4;
	constexpr uint32_t m_flDistanceScale_MaxScale = 0xB8;
	constexpr uint32_t m_flDistanceScale_MinScale = 0xBC;
	constexpr uint32_t m_distanceScale_Damping = 0xC0;
}

namespace CSetFacingAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_facingMode = 0x40;
	constexpr uint32_t m_bResetChild = 0x44;
}

namespace CStopAtGoalAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_flOuterRadius = 0x40;
	constexpr uint32_t m_flInnerRadius = 0x44;
	constexpr uint32_t m_flMaxScale = 0x48;
	constexpr uint32_t m_flMinScale = 0x4C;
	constexpr uint32_t m_damping = 0x50;
}

namespace CJiggleBoneItem
{
	constexpr uint32_t m_boneName = 0x0;
	constexpr uint32_t m_flSpringStrength = 0x8;
	constexpr uint32_t m_flSimRateFPS = 0xC;
	constexpr uint32_t m_flDamping = 0x10;
	constexpr uint32_t m_eSimSpace = 0x14;
	constexpr uint32_t m_vBoundsMaxLS = 0x18;
	constexpr uint32_t m_vBoundsMinLS = 0x24;
}

namespace CJiggleBoneAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_items = 0x40;
}

namespace CJumpHelperAnimNode
{
	constexpr uint32_t m_targetParamID = 0xB0;
	constexpr uint32_t m_flJumpStartCycle = 0xB4;
	constexpr uint32_t m_flJumpDuration = 0xB8;
	constexpr uint32_t m_bTranslateX = 0xBC;
	constexpr uint32_t m_bTranslateY = 0xBD;
	constexpr uint32_t m_bTranslateZ = 0xBE;
	constexpr uint32_t m_bScaleSpeed = 0xBF;
	constexpr uint32_t m_eCorrectionMethod = 0xC0;
}

namespace CSingleFrameAnimNode
{
	constexpr uint32_t m_sequenceName = 0x50;
	constexpr uint32_t m_eFrameSelection = 0x58;
	constexpr uint32_t m_nFrameIndex = 0x5C;
	constexpr uint32_t m_actions = 0x60;
}

namespace CCommentAnimNode
{
	constexpr uint32_t m_commentText = 0x40;
	constexpr uint32_t m_size = 0x48;
	constexpr uint32_t m_color = 0x50;
}

namespace CContainerAnimNodeBase
{
	constexpr uint32_t m_inputNodeID = 0x48;
	constexpr uint32_t m_outputNodeID = 0x4C;
	constexpr uint32_t m_inputConnectionMap = 0x50;
}

namespace CInputStreamAnimNode
{
}

namespace CFootStepTriggerItem
{
	constexpr uint32_t m_footName = 0x0;
	constexpr uint32_t m_triggerPhase = 0x8;
	constexpr uint32_t m_tags = 0x10;
}

namespace CFootStepTriggerAnimNode
{
	constexpr uint32_t m_inputConnection = 0x38;
	constexpr uint32_t m_flTolerance = 0x40;
	constexpr uint32_t m_items = 0x48;
}

namespace CSubGraphAnimNode
{
	constexpr uint32_t m_subGraphFilename = 0x78;
	constexpr uint32_t m_animNameMap = 0x80;
}

namespace CBindPoseAnimNode
{
}

namespace CZeroPoseAnimNode
{
}

namespace CStateAction
{
	constexpr uint32_t m_pAction = 0x8;
	constexpr uint32_t m_eBehavior = 0x10;
}

namespace CAnimState
{
	constexpr uint32_t m_transitions = 0x28;
	constexpr uint32_t m_actions = 0x40;
	constexpr uint32_t m_name = 0x58;
	constexpr uint32_t m_stateID = 0x60;
	constexpr uint32_t m_position = 0x64;
	constexpr uint32_t m_bIsStartState = 0x6C;
	constexpr uint32_t m_bIsEndtState = 0x6D;
	constexpr uint32_t m_bIsPassthrough = 0x6E;
}

namespace CAnimStateTransition
{
	constexpr uint32_t m_conditionList = 0x28;
	constexpr uint32_t m_srcState = 0x60;
	constexpr uint32_t m_destState = 0x64;
	constexpr uint32_t m_bDisabled = 0x68;
}

namespace CAnimStateMachine
{
	constexpr uint32_t m_states = 0x8;
}

namespace CStateActionUpdater
{
	constexpr uint32_t m_pAction = 0x0;
	constexpr uint32_t m_eBehavior = 0x8;
}

namespace CTransitionUpdateData
{
	constexpr uint32_t m_srcStateIndex = 0x0;
	constexpr uint32_t m_destStateIndex = 0x1;
	constexpr uint32_t m_bDisabled = 0x0;
}

namespace CStateUpdateData
{
	constexpr uint32_t m_name = 0x0;
	constexpr uint32_t m_hScript = 0x8;
	constexpr uint32_t m_transitionIndices = 0x10;
	constexpr uint32_t m_actions = 0x28;
	constexpr uint32_t m_stateID = 0x40;
	constexpr uint32_t m_bIsStartState = 0x0;
	constexpr uint32_t m_bIsEndState = 0x0;
	constexpr uint32_t m_bIsPassthrough = 0x0;
}

namespace CAnimStateMachineUpdater
{
	constexpr uint32_t m_states = 0x8;
	constexpr uint32_t m_transitions = 0x20;
	constexpr uint32_t m_startStateIndex = 0x50;
}

namespace CConditionBase
{
}

namespace CConditionContainer
{
	constexpr uint32_t m_conditions = 0x10;
}

namespace CCycleCondition
{
	constexpr uint32_t m_comparisonOp = 0x28;
	constexpr uint32_t m_comparisonString = 0x30;
	constexpr uint32_t m_comparisonValue = 0x38;
	constexpr uint32_t m_comparisonValueType = 0x3C;
	constexpr uint32_t m_comparisonParamID = 0x40;
}

namespace CFinishedCondition
{
	constexpr uint32_t m_option = 0x28;
	constexpr uint32_t m_bIsFinished = 0x2C;
}

namespace COrCondition
{
}

namespace CParameterCondition
{
	constexpr uint32_t m_paramID = 0x28;
	constexpr uint32_t m_comparisonOp = 0x2C;
	constexpr uint32_t m_comparisonValue = 0x30;
	constexpr uint32_t m_comparisonString = 0x48;
}

namespace CStateStatusCondition
{
	constexpr uint32_t m_sourceValue = 0x28;
	constexpr uint32_t m_comparisonValueType = 0x2C;
	constexpr uint32_t m_comparisonFixedValue = 0x30;
	constexpr uint32_t m_comparisonStateValue = 0x34;
	constexpr uint32_t m_comparisonParamID = 0x38;
	constexpr uint32_t m_comparisonOp = 0x3C;
}

namespace CTagCondition
{
	constexpr uint32_t m_tagID = 0x28;
	constexpr uint32_t m_comparisonValue = 0x2C;
}

namespace CTimeCondition
{
	constexpr uint32_t m_comparisonOp = 0x28;
	constexpr uint32_t m_comparisonString = 0x30;
}

namespace TagSpan_t
{
	constexpr uint32_t m_tagIndex = 0x0;
	constexpr uint32_t m_startCycle = 0x4;
	constexpr uint32_t m_endCycle = 0x8;
}

namespace CAnimTagSpan
{
	constexpr uint32_t m_id = 0x20;
	constexpr uint32_t m_fStartCycle = 0x24;
	constexpr uint32_t m_fDuration = 0x28;
}

namespace CAnimTagManager
{
	constexpr uint32_t m_tags = 0x18;
}

namespace CAnimTagBase
{
	constexpr uint32_t m_name = 0x20;
	constexpr uint32_t m_group = 0x28;
	constexpr uint32_t m_tagID = 0x30;
	constexpr uint32_t m_bIsReferenced = 0x34;
}

namespace CStringAnimTag
{
}

namespace CFootFallAnimTag
{
	constexpr uint32_t m_foot = 0x40;
}

namespace CAudioAnimTag
{
	constexpr uint32_t m_clipName = 0x40;
	constexpr uint32_t m_attachmentName = 0x48;
	constexpr uint32_t m_flVolume = 0x50;
	constexpr uint32_t m_bStopWhenTagEnds = 0x54;
	constexpr uint32_t m_bStopWhenGraphEnds = 0x55;
	constexpr uint32_t m_bPlayOnServer = 0x56;
	constexpr uint32_t m_bPlayOnClient = 0x57;
}

namespace CFootstepLandedAnimTag
{
	constexpr uint32_t m_FootstepType = 0x40;
	constexpr uint32_t m_OverrideSoundName = 0x48;
	constexpr uint32_t m_DebugAnimSourceString = 0x50;
	constexpr uint32_t m_BoneName = 0x58;
}

namespace CSequenceFinishedAnimTag
{
	constexpr uint32_t m_sequenceName = 0x40;
}

namespace CTaskStatusAnimTag
{
	constexpr uint32_t m_identifierString = 0x40;
}

namespace CClothSettingsAnimTag
{
	constexpr uint32_t m_flStiffness = 0x40;
	constexpr uint32_t m_flEaseIn = 0x44;
	constexpr uint32_t m_flEaseOut = 0x48;
	constexpr uint32_t m_nVertexSet = 0x50;
}

namespace CRagdollAnimTag
{
	constexpr uint32_t m_nPoseControl = 0x40;
	constexpr uint32_t m_flFrequency = 0x44;
	constexpr uint32_t m_flDampingRatio = 0x48;
	constexpr uint32_t m_flDecayDuration = 0x4C;
	constexpr uint32_t m_flDecayBias = 0x50;
	constexpr uint32_t m_bDestroy = 0x54;
}

namespace CParticleAnimTag
{
	constexpr uint32_t m_hParticleSystem = 0x40;
	constexpr uint32_t m_particleSystemName = 0x48;
	constexpr uint32_t m_configName = 0x50;
	constexpr uint32_t m_bDetachFromOwner = 0x58;
	constexpr uint32_t m_bStopWhenTagEnds = 0x59;
	constexpr uint32_t m_bTagEndStopIsInstant = 0x5A;
	constexpr uint32_t m_attachmentName = 0x60;
	constexpr uint32_t m_attachmentType = 0x68;
	constexpr uint32_t m_attachmentCP1Name = 0x70;
	constexpr uint32_t m_attachmentCP1Type = 0x78;
}

namespace CMaterialAttributeAnimTag
{
	constexpr uint32_t m_AttributeName = 0x40;
	constexpr uint32_t m_AttributeType = 0x48;
	constexpr uint32_t m_flValue = 0x4C;
	constexpr uint32_t m_Color = 0x50;
}

namespace CBodyGroupSetting
{
	constexpr uint32_t m_BodyGroupName = 0x0;
	constexpr uint32_t m_nBodyGroupOption = 0x8;
}

namespace CBodyGroupAnimTag
{
	constexpr uint32_t m_nPriority = 0x40;
	constexpr uint32_t m_bodyGroupSettings = 0x48;
}

namespace CMotionNodeManager
{
}

namespace CMotionParameterManager
{
	constexpr uint32_t m_params = 0x10;
}

namespace CMotionParameter
{
	constexpr uint32_t m_name = 0x18;
	constexpr uint32_t m_id = 0x20;
	constexpr uint32_t m_flMinValue = 0x24;
	constexpr uint32_t m_flMaxValue = 0x28;
	constexpr uint32_t m_nSamples = 0x2C;
}

namespace SampleCode
{
	constexpr uint32_t m_subCode = 0x0;
}

namespace MotionDBIndex
{
	constexpr uint32_t m_nIndex = 0x0;
}

namespace CVectorQuantizer
{
	constexpr uint32_t m_centroidVectors = 0x0;
	constexpr uint32_t m_nCentroids = 0x18;
	constexpr uint32_t m_nDimensions = 0x1C;
}

namespace CProductQuantizer
{
	constexpr uint32_t m_subQuantizers = 0x0;
	constexpr uint32_t m_nDimensions = 0x18;
}

namespace CMotionSearchNode
{
	constexpr uint32_t m_children = 0x0;
	constexpr uint32_t m_quantizer = 0x18;
	constexpr uint32_t m_sampleCodes = 0x38;
	constexpr uint32_t m_sampleIndices = 0x50;
	constexpr uint32_t m_selectableSamples = 0x68;
}

namespace CMotionSearchDB
{
	constexpr uint32_t m_rootNode = 0x0;
	constexpr uint32_t m_residualQuantizer = 0x80;
	constexpr uint32_t m_codeIndices = 0xA0;
}

namespace CMotionItemGroup
{
	constexpr uint32_t m_motions = 0x20;
	constexpr uint32_t m_name = 0x38;
	constexpr uint32_t m_conditions = 0x40;
}

namespace CMotionItem
{
	constexpr uint32_t m_paramManager = 0x28;
	constexpr uint32_t m_blockSpans = 0x50;
	constexpr uint32_t m_tagSpans = 0x68;
	constexpr uint32_t m_paramSpans = 0x80;
	constexpr uint32_t m_bLoop = 0xA0;
}

namespace CSequenceMotionItem
{
	constexpr uint32_t m_sequenceName = 0xB0;
}

namespace CGraphMotionItem
{
	constexpr uint32_t m_name = 0xB0;
	constexpr uint32_t m_nodeManager = 0xB8;
}

namespace CMotionMetricBase
{
	constexpr uint32_t m_flWeight = 0x20;
}

namespace CBlockSelectionMetric
{
}

namespace CFootCycleMetric
{
	constexpr uint32_t m_feet = 0x28;
}

namespace CCurrentRotationVelocityMetric
{
}

namespace CCurrentVelocityMetric
{
}

namespace CPathMetric
{
	constexpr uint32_t m_flDistance = 0x28;
	constexpr uint32_t m_pathSamples = 0x30;
	constexpr uint32_t m_bExtrapolateMovement = 0x48;
	constexpr uint32_t m_flMinExtrapolationSpeed = 0x4C;
}

namespace CFutureFacingMetric
{
	constexpr uint32_t m_flDistance = 0x28;
	constexpr uint32_t m_flTime = 0x2C;
}

namespace CFutureVelocityMetric
{
	constexpr uint32_t m_flDistance = 0x28;
	constexpr uint32_t m_flStoppingDistance = 0x2C;
	constexpr uint32_t m_eMode = 0x30;
	constexpr uint32_t m_bAutoTargetSpeed = 0x31;
	constexpr uint32_t m_flManualTargetSpeed = 0x34;
}

namespace CBonePositionMetric
{
	constexpr uint32_t m_boneName = 0x28;
}

namespace CBoneVelocityMetric
{
	constexpr uint32_t m_boneName = 0x28;
}

namespace CDistanceRemainingMetric
{
	constexpr uint32_t m_flMaxDistance = 0x28;
	constexpr uint32_t m_bFilterFixedMinDistance = 0x2C;
	constexpr uint32_t m_flMinDistance = 0x30;
	constexpr uint32_t m_bFilterGoalDistance = 0x34;
	constexpr uint32_t m_flStartGoalFilterDistance = 0x38;
	constexpr uint32_t m_bFilterGoalOvershoot = 0x3C;
	constexpr uint32_t m_flMaxGoalOvershootScale = 0x40;
}

namespace CStepsRemainingMetric
{
	constexpr uint32_t m_feet = 0x28;
	constexpr uint32_t m_flMinStepsRemaining = 0x40;
}

namespace CTimeRemainingMetric
{
	constexpr uint32_t m_bMatchByTimeRemaining = 0x28;
	constexpr uint32_t m_flMaxTimeRemaining = 0x2C;
	constexpr uint32_t m_bFilterByTimeRemaining = 0x30;
	constexpr uint32_t m_flMinTimeRemaining = 0x34;
}

namespace CFootPositionMetric
{
	constexpr uint32_t m_feet = 0x28;
	constexpr uint32_t m_bIgnoreSlope = 0x40;
}

namespace ScriptInfo_t
{
	constexpr uint32_t m_code = 0x0;
	constexpr uint32_t m_paramsModified = 0x8;
	constexpr uint32_t m_proxyReadParams = 0x20;
	constexpr uint32_t m_proxyWriteParams = 0x38;
	constexpr uint32_t m_eScriptType = 0x50;
}

namespace CAnimScriptManager
{
	constexpr uint32_t m_scriptInfo = 0x10;
}

namespace CAnimParamHandle
{
	constexpr uint32_t m_type = 0x0;
	constexpr uint32_t m_index = 0x1;
}

namespace CAnimReplayFrame
{
	constexpr uint32_t m_inputDataBlocks = 0x10;
	constexpr uint32_t m_instanceData = 0x28;
	constexpr uint32_t m_startingLocalToWorldTransform = 0x40;
	constexpr uint32_t m_localToWorldTransform = 0x60;
	constexpr uint32_t m_timeStamp = 0x80;
}

namespace CAnimGraphDebugReplay
{
	constexpr uint32_t m_animGraphFileName = 0x40;
	constexpr uint32_t m_frameList = 0x48;
	constexpr uint32_t m_startIndex = 0x60;
	constexpr uint32_t m_writeIndex = 0x64;
	constexpr uint32_t m_frameCount = 0x68;
}

namespace CAnimParamHandleMap
{
	constexpr uint32_t m_list = 0x0;
}

namespace CAnimParameterListUpdater
{
	constexpr uint32_t m_parameters = 0x18;
	constexpr uint32_t m_idToIndexMap = 0x30;
	constexpr uint32_t m_nameToIndexMap = 0x50;
	constexpr uint32_t m_indexToHandle = 0x70;
	constexpr uint32_t m_autoResetParams = 0x88;
	constexpr uint32_t m_autoResetMap = 0xA0;
}

namespace CAnimTagManagerUpdater
{
	constexpr uint32_t m_tags = 0x18;
}

namespace CAnimComponentUpdater
{
	constexpr uint32_t m_name = 0x18;
	constexpr uint32_t m_id = 0x20;
	constexpr uint32_t m_networkMode = 0x24;
	constexpr uint32_t m_bStartEnabled = 0x28;
}

