#include "qtquick2applicationviewer.h"
#include <QtGui/QGuiApplication>
#include "map.h"
#include "keyboard.h"

int main(int argc, char *argv[])
{
	QGuiApplication app(argc, argv);
	qmlRegisterType<CMap>("an_qt_map", 1, 0, "QMLCMap");
	qmlRegisterType<CKeyBoard>("an_qt_keyboard", 1, 0, "QMLCKeyBoard");

	QtQuick2ApplicationViewer viewer;
	viewer.setMainQmlFile(QStringLiteral("main.qml"));
	viewer.showExpanded();
	
	return app.exec();
}
