// Rep_Known3D_GeoExpress_Y.h: interface for the Rep_Known3D_GeoExpress_Y class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_REP_KNOWN3D_GEOEXPRESS_Y_H__F2E2F710_8EF4_446E_BDA3_AF98DE2B35BB__INCLUDED_)
#define AFX_REP_KNOWN3D_GEOEXPRESS_Y_H__F2E2F710_8EF4_446E_BDA3_AF98DE2B35BB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "ZAnyScaleFunction.h"
#include "../utility/floattype.h"

//template <class T>
class Rep_Known3D_GeoExpress_Y  : public ZAnyScaleFunction<SOLVER_FLOAT>
{
public:
	Rep_Known3D_GeoExpress_Y();
	virtual ~Rep_Known3D_GeoExpress_Y();

	virtual double Value (const Wml::GVectord& x);

    virtual void Gradient (const Wml::GVectord& x, Wml::GVectord& grad);

	virtual void Hesse (const Wml::GVectord& x, Wml::GMatrixd& hesse);

	void SetParam(double du1,double dv1,double dX,double dY,double dZ);

	void SetXVar(const Wml::GVectord& x);


protected:
	double u1,v1;
	double X,Y,Z;
	double P00,P01,P02,P10,P11,P12,P20,P21,P22,P03,P13,P23;
};

#endif // !defined(AFX_REP_KNOWN3D_GEOEXPRESS_Y_H__F2E2F710_8EF4_446E_BDA3_AF98DE2B35BB__INCLUDED_)
