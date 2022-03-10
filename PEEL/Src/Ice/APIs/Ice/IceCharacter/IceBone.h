///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 *	Contains code for bones.
 *	\file		IceBone.h
 *	\author		Pierre Terdiman
 *	\date		May, 08, 1999
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Include Guard
#ifndef ICEBONE_H
#define ICEBONE_H

	struct ICECHARACTER_API BoneDescriptor : public Allocateable
	{
				udword		CSID;	//!< Bone's CSID
				udword		pCSID;	//!< Parent bone's CSID
	};

	class ICECHARACTER_API Bone : public HNode, public Allocateable
	{
		public:
							Bone();
							~Bone();
		// Bone's attributes
				CSID		mCSID;			//!< The bone's CSID ### could be stored on a byte
				CSID		mPCSID;			//!< Parent CSID  ### could be stored on a byte
				udword		mLocalID;		//!< The bone's local ID
				float		mLength;		//!< Bone's length
				PR			mPR;			//!< The bone's PR (scaling is always removed)
	};

#endif // ICEBONE_H