#ifndef MAP_H
#define MAP_H
#include "setting.h"

#include <QQuickPaintedItem>
#include <QPainterPath>
#include <QPainter>
#include <QPointF>
#include <QImage>
#include <QPen>
#include <QBrush>
#include <QColor>
#include <QDebug>


using namespace std;

class CMap :public QQuickPaintedItem
{
	Q_OBJECT
private:
	vector<vector<LOC_INT>> aMap;
private:
	QImage imgWater;
public:
	Q_INVOKABLE void init();
	virtual void paint(QPainter *painter);
public:
    CMap(QQuickItem *parent = 0);
	~CMap();
};

#endif
