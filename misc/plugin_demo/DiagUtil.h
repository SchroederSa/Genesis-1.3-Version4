#ifndef __DIAGUTIL_H
#define __DIAGUTIL_H

#include "DiagnosticHookS.h"

class DiagUtil {
public:
	DiagUtil() = default;
	virtual ~DiagUtil() = default;
protected:
	bool verify_datastructure(DiagBeamHookData *pd);
	bool verify_datastructure(DiagFieldHookData *pd);
	
	int xlat(int, int, int);
	double scale_to_power(DiagFieldHookData *pd, double sum);
	double scale_to_intensity(DiagFieldHookData *pd, double sum);
};

#endif // __DIAGUTIL_H
