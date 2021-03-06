#pragma once

enum PmeFeatureType
{
	PmeFeatureType_StdDefaultDatumPlaneFeature,
	PmeFeatureType_StdSketchFeature,
	PmeFeatureType_StdSolidProtrusionExtrudeFeature,
	PmeFeatureType_StdSolidCutExtrudeFeature,
	PmeFeatureType_StdSolidFilletConstantFeature,
	PmeFeatureType_StdSolidChamferFeature,
	PmeFeatureType_StdSolidProtrusionSweepFeature,
	PmeFeatureType_StdSolidProtrusionRevolveFeature,
	PmeFeatureType_StdSolidCutRevolveFeature,
	PmeFeatureType_StdSolidOperatePatternRectangularFeature,
	PmeFeatureType_StdSolidOperatePatternCircularFeature,
	PmeFeatureType_StdSolidHoleCounterboredFeature,
	PmeFeatureType_StdSolidHoleCountersunkFeature,
	PmeFeatureType_StdDatumPlaneOffsetFeature,
	PmeFeatureType_StdSolidLoftFacesFeature,
	PmeFeatureType_StdSolidLoftSectionsFeature,
	PmeFeatureType_StdSolidCutSweepFeature,
	PmeFeatureType_StdSolidHoleSimpleFeature,
	PmeFeatureType_StdSolidShellFeature,
	PmeFeatureType_StdSolidRevolveWithExternalAxisFeature,
	PmeFeatureType_StdSolidDraftFeature,
	PmeFeatureType_StdSolidOffsetFeature,
	PmeFeatureType_StdSolidImportedBrepFeature,
	// DEBUG ��
	PmeFeatureType_StdSolidSphereFeature
};