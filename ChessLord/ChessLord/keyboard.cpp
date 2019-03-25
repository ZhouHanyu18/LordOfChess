#include "keyboard.h"
#include <QtGui/QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>

CKeyBoard::CKeyBoard()
{

}

CKeyBoard::~CKeyBoard()
{

}

void CKeyBoard::getButton(LOC_INT str, QObject *object)
{
	QObject* role = object->findChild<QObject*>("red_role");
	bool bAttack = role->property("bAttack").toBool();
	int x = role->property("x").toInt();
	int y = role->property("y").toInt();

	QVariant path = role->property("path");
	QVariant pathRole = role->property("pathRole");
	QVariant pathRoleLeft = role->property("pathRoleLeft");
	QVariant pathRoleAttack = role->property("pathRoleAttack");
	QVariant pathRoleAttackLeft = role->property("pathRoleAttackLeft");
	QVariant pathRoleMove = role->property("pathRoleMove");
	QVariant pathRoleLeftMove = role->property("pathRoleLeftMove");

	switch (str)
	{
	case '1':
	case '2':
	case '3':
	case 'A':
	case 'S':
	case 'D':
		break;
	case 'X':
		if (path == pathRole || path == pathRoleMove)
			role->setProperty("path", pathRoleAttack);
		else if (path == pathRoleAttack)
			role->setProperty("path", pathRole);
		else if (path == pathRoleAttackLeft)
			role->setProperty("path", pathRoleLeft);
		else
			role->setProperty("path", pathRoleAttackLeft);
		break;
	case 16777234:			//←
		if (x - 5 < 0)
			break;
		role->setProperty("x", x - 5);
		if (path == pathRoleLeftMove)
			role->setProperty("path", pathRoleLeft);
		else
			role->setProperty("path", pathRoleLeftMove);
		break;
	case 16777235:			//↑
		if (y - 5 < 0)
			break;
		role->setProperty("y", y - 5);
		break;
	case 16777236:			//→
		if (x+5+30 > 1000)
			break;
		role->setProperty("x", x+5);
		if (path == pathRoleMove)
			role->setProperty("path", pathRole);
		else
			role->setProperty("path", pathRoleMove);
		break;
	case 16777237:			//↓
		if (y+5+30 > 600)
			break;
		role->setProperty("y", y + 5);
		break;
	}
	
	qDebug() << str ;
}