#ifndef ROLE_H
#define POLE_H

#include "basic.h"
#include <QDebug>

class CRole : public QObject,public CBasic
{
	Q_OBJECT
signals:
	
public:
	CRole(QObject *parent = 0);
	~CRole();
public:

private:
	
};



#endif