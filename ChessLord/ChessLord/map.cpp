#include "map.h" 
#include "mythread.h"

CMap::CMap(QQuickItem *parent ) :QQuickPaintedItem(parent)
{
	imgWater = QImage(StrWater);
	aMap.resize(LOC_HEIGHT, vector<LOC_INT>(LOC_WIDTH));
}

CMap::~CMap()
{

}

void CMap::init()
{
	CLOCThread *pthread=new CLOCThread;
	pthread->start();
	update();
}

void CMap::paint(QPainter *painter)
{
	QPen pen;
	pen.setColor(Qt::yellow);           // ÉèÖÃ»­±ÊÎª»ÆÉ«
	painter->setPen(pen);                // ÉèÖÃ»­±Ê
//	painter->drawRect(QRect(1, 1, 100, 100));

	
	for (int i = 0; i < LOC_WIDTH; ++i)
	{
		for (int j = 0; j < LOC_HEIGHT; ++j)
		{
			switch (aMap[j][i])
			{
			case 0:
//				painter->drawImage(QRectF(i * 10, j * 10, 10, 10), imgWater);
				break; 
			case 1:
				break;
			case 2:
				break;
			default:
				break;
			}
		}
	}
}