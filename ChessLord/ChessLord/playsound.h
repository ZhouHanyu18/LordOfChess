#ifndef PLAYSOUND_H
#define PLAYSOUND_H
#include <QtMultimedia/QSound>
#include "setting.h"
class CPlaySound:public QSound
{
public:
	CPlaySound(LOC_STRING wav);
	~CPlaySound();
public:
	
};

#endif