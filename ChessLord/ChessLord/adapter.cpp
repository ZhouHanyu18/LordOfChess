#include "adapter.h"

CAdapter::CAdapter()
{

}

CAdapter::~CAdapter()
{

}

void CAdapter::getButton(LOC_String str)
{
	qDebug() << str;
}

void CAdapter::send()
{
	printf("Im send");
	emit receive("send demo");
}

void CAdapter::write(int e)
{
	timenow = e;
	emit timeCntChanged(); //发送通知
}
int  CAdapter::read() const//读函数
{
	return timenow;
}