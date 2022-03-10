///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 *	Contains a simple projector wrapper.
 *	\file		IceProjector.h
 *	\author		Pierre Terdiman
 *	\date		August, 9, 2000
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Include Guard
#ifndef ICEPROJECTOR_H
#define ICEPROJECTOR_H

	FUNCTION ICERENDERER_API void SetupProjector(RenderStateManager& rsm, udword stage, const PR& pr, const Matrix4x4& inverse_view, udword width, udword height, float fov);

#endif // ICEPROJECTOR_H