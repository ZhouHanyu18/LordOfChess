#include "basic.h"

LOC_VOID CBasic::attack(CBasic *p)
{
	p->attacked(this);
}

LOC_VOID CBasic::attacked(CBasic *p)
{
	LOC_INT nHP= p->ATK - this->DEF;
	addHP(nHP);
}