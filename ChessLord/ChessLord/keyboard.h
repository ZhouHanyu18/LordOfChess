#ifndef KEYBOARD_H
#define KEYBOARD_H
#include "setting.h"
#include <QDebug>

using namespace std;

class CKeyBoard :public QObject
{
	Q_OBJECT
public:
	CKeyBoard();
	~CKeyBoard();
public:
	Q_INVOKABLE void getButton(LOC_String str);
};

#endif
