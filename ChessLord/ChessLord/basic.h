#ifndef BASIC_H
#define BASIC_H
#include "setting.h"


class CBasic
{
private:
	LOC_INT HP;
	LOC_INT MP;
	LOC_INT STR;//力量
	LOC_INT INT;//智力
	LOC_INT ATK;//物理攻击力
	LOC_INT DEF;//物理防御力
	LOC_INT MGK;//魔法攻击力
	LOC_INT RGS;//魔法防御力
	LOC_INT HIT;//命中率
	LOC_INT AVD;//回避率
	LOC_INT AFF;//亲和度
public:
    LOC_VOID addHP(LOC_INT value){ HP += value; }
    LOC_VOID addMP(LOC_INT value){ MP += value; }
    LOC_VOID addSTR(LOC_INT value){ STR += value; }
    LOC_VOID addINT(LOC_INT value){ INT += value; }
    LOC_VOID addATK(LOC_INT value){ ATK += value; }
    LOC_VOID addDEF(LOC_INT value){ DEF += value; }
    LOC_VOID addMGK(LOC_INT value){ MGK += value; }
    LOC_VOID addRGS(LOC_INT value){ RGS += value; }
    LOC_VOID addHIT(LOC_INT value){ HIT += value; }
    LOC_VOID addAVD(LOC_INT value){ AVD += value; }
    LOC_VOID addAFF(LOC_INT value){ AFF += value; }
public:
    LOC_INT getHP(){ return HP; }
    LOC_INT getMP(){ return MP; }
    LOC_INT getSTR(){ return STR; }
    LOC_INT getINT(){ return INT; }
    LOC_INT getATK(){ return ATK; }
    LOC_INT getDEF(){ return DEF; }
    LOC_INT getMGK(){ return MGK; }
    LOC_INT getRGS(){ return RGS; }
    LOC_INT getHIT(){ return HIT; }
    LOC_INT getAVD(){ return AVD; }
    LOC_INT getAFF(){ return AFF; }
public:
	virtual LOC_VOID attack(CBasic *p);
	virtual LOC_VOID attacked(CBasic *p);
public:
    CBasic(){}
    ~CBasic(){}
};


#endif
