#include "map.h" 
#include "mythread.h"

void SizeInit(vector<vector<LOC_INT>> &aMap, LOC_INT x, LOC_INT y, LOC_INT w, LOC_INT h, LOC_INT value)
{
	for (LOC_INT i = 0; i < w; i++)
	{
		for (LOC_INT j = 0; j < h; j++)
		{
			aMap[y+j][x+i] = value;
		}
	}
}

CMap::CMap(QQuickItem *parent ) :QQuickPaintedItem(parent)
{
	imgWater = QImage(StrWater);
	imgWallRed = QImage(StrWallRed);
	imgWallBlue = QImage(StrWallBlue);

	aMap.resize(LOC_HEIGHT, vector<LOC_INT>(LOC_WIDTH));

	SizeInit(aMap, 30, 0, 5, 5, 1);			//红方兵营
	SizeInit(aMap, 30, 14, 5, 5, 1);		//红方兵营
	SizeInit(aMap, 30, 28, 5, 5, 1);		//红方兵营
	SizeInit(aMap, 30, 42, 5, 5, 1);		//红方兵营
	SizeInit(aMap, 30, 55, 5, 5, 1);		//红方兵营

	SizeInit(aMap, 65, 0, 5, 5, 2);			//蓝方兵营
	SizeInit(aMap, 65, 14, 5, 5, 2);		//蓝方兵营
	SizeInit(aMap, 65, 28, 5, 5, 2);		//蓝方兵营
	SizeInit(aMap, 65, 42, 5, 5, 2);		//蓝方兵营
	SizeInit(aMap, 65, 55, 5, 5, 2);		//蓝方兵营

	SizeInit(aMap, 20, 14, 5, 5, 1);		//红方炮台
	SizeInit(aMap, 20, 42, 5, 5, 1);		//红方炮台

	SizeInit(aMap, 75, 14, 5, 5, 2);		//蓝方炮台
	SizeInit(aMap, 75, 42, 5, 5, 2);		//蓝方炮台

	SizeInit(aMap, 0, 26, 8, 8, 1);			//红方水晶

	SizeInit(aMap, 100-8, 26, 8, 8, 2);		//蓝方水晶

	SizeInit(aMap, 0, 12, 5, 5, 1);			//红方马厩
	SizeInit(aMap, 0, 42, 5, 5, 1);			//红方马厩

	SizeInit(aMap, 100-5, 12, 5, 5, 2);		//蓝方马厩
	SizeInit(aMap, 100-5, 42, 5, 5, 2);		//蓝方马厩

	SizeInit(aMap, 0, 0, 6, 3, 1);			//红方军火库
	SizeInit(aMap, 0, 60-3, 6, 3, 1);		//红方军火库

	SizeInit(aMap, 100-6, 0, 6, 3, 2);		//蓝方军火库
	SizeInit(aMap, 100-6, 60-3, 6, 3, 2);	//蓝方军火库

	SizeInit(aMap, 0, 24, 10, 2, 3);		//红方水晶围墙
	SizeInit(aMap, 0, 34, 10, 2, 3);		//红方水晶围墙
	SizeInit(aMap, 8, 26, 2, 8, 3);			//红方水晶围墙
	SizeInit(aMap, 40, 0, 4, 60, 3);		//红方城墙

	SizeInit(aMap, 100-10, 24, 10, 2, 4);	//蓝方水晶围墙
	SizeInit(aMap, 100-10, 34, 10, 2, 4);	//蓝方水晶围墙
	SizeInit(aMap, 100-10, 26, 2, 8, 4);	//蓝方水晶围墙
	SizeInit(aMap, 56, 0, 4, 60, 4);		//红方城墙

	SizeInit(aMap, 50 - 3, 12, 6, 5, 1);	//桥
	SizeInit(aMap, 50 - 3, 27, 6, 5, 1);	//桥
	SizeInit(aMap, 50 - 3, 42, 6, 5, 1);	//桥

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
	pen.setColor(Qt::yellow);           // 设置画笔为黄色
	painter->setPen(pen);                // 设置画笔
//	painter->drawRect(QRect(1, 1, 100, 100));

	
	for (int i = 0; i < LOC_WIDTH; ++i)
	{
		for (int j = 0; j < LOC_HEIGHT; ++j)
		{
			switch (aMap[j][i])
			{
			case 0:
				//painter->drawImage(QRectF(i * 10, j * 10, 10, 10), imgWater);
				break; 
			case 1:
				
				break;
			case 2:
				break;

			case 3://红方城墙
				painter->drawImage(QRectF(i * 10, j * 10, 10, 10), imgWallRed);
				break;
			case 4://蓝方城墙
				painter->drawImage(QRectF(i * 10, j * 10, 10, 10), imgWallBlue);
				break;
			default:
				break;
			}
		}
	}
}