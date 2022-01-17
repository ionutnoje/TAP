#ifndef _DREPTUNGHICISOSCEL_
#define _DREPTUNGHICISOSCEL_
#include <iostream>
#include "Dreptunghic.h"
#include "Isoscel.h"
using namespace std;
class DreptunghicIsoscel : public virtual Dreptunghic, public virtual Isoscel
{
public:
	//DreptunghicIsoscel(double a) : Triunghi(a,a,a) {}
	inline DreptunghicIsoscel(double a) :Triunghi(a, a, a* sqrt(2)), Dreptunghic(a, a, a* sqrt(2)), Isoscel(a, a* sqrt(2)) {}
	inline DreptunghicIsoscel(const DreptunghicIsoscel& param) : Dreptunghic(param), Isoscel(param),Triunghi(param) {}
	virtual inline ~DreptunghicIsoscel() { Dreptunghic::~Dreptunghic(), Isoscel::~Isoscel(); }
	inline DreptunghicIsoscel& operator=(const DreptunghicIsoscel& param) {
		Dreptunghic::operator=(param);
		Isoscel::operator=(param);
		Triunghi::operator=(param);
	}
	inline double arie() override{
		double rez = a * c / 4;
		return rez;
	}
};
#endif
