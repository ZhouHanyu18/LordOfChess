#include "keyboard.h"

CKeyBoard::CKeyBoard()
{

}

CKeyBoard::~CKeyBoard()
{

}

void CKeyBoard::getButton(LOC_String str)
{
	printf("getButton");
	qDebug() << str << timenow;
}

void CKeyBoard::send()
{
	printf("Im send");
	emit receive("send demo");
}

void CKeyBoard::write(int e)
{
	timenow = e;
	emit timeCntChanged(); //����֪ͨ
}
int  CKeyBoard::read() const//������
{
	return timenow;
}