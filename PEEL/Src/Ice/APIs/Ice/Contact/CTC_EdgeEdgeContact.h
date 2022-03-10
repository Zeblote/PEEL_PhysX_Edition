///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
 *	Contains code for EE contacts
 *	\file		CTC_EdgeEdgeContact.h
 *	\author		Pierre Terdiman
 *	\date		January, 13, 2000
 */
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Include Guard
#ifndef CTCEDGEEDGECONTACT_H
#define CTCEDGEEDGECONTACT_H

	CONTACT_API	BOOL	EdgeEdgeContact(const Point& p0, const Point& p1, const Point& dir, const Point& p2, const Point& p3, float& dist, Point& p);
	CONTACT_API	BOOL	edge_collision(const Point& p1, const Point& p2, const Point& dir, const Point& p3, const Point& p4, float& dist, Point& ip);

#endif // CTCEDGEEDGECONTACT_H
