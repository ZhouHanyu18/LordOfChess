//#include "qtquick2applicationviewer.h"
#include <QtGui/QGuiApplication>
#include <QQmlApplicationEngine>
#include "map.h"
#include "keyboard.h"
#include "adapter.h"

int main(int argc, char *argv[])
{
	QGuiApplication app(argc, argv);
	qmlRegisterType<CMap>("an_qt_map", 1, 0, "QMLCMap");
	qmlRegisterType<CKeyBoard>("an_qt_keyboard", 1, 0, "QMLCKeyBoard");
	qmlRegisterType<CAdapter>("an_qt_adapter", 1, 0, "QMLCAdapter");

	/*QtQuick2ApplicationViewer viewer;
	viewer.setMainQmlFile(QStringLiteral("main.qml"));
	viewer.showExpanded();*/

	QQmlApplicationEngine engine;
	engine.load(QUrl(QStringLiteral("main.qml")));
	
	return app.exec();
}
