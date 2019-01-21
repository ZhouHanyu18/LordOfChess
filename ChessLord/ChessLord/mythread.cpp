#include "mythread.h"
#include <QtMultimedia/QSound>

CLOCThread::CLOCThread()
{

}
CLOCThread::~CLOCThread()
{

}
void CLOCThread::run()
{
	//QSound::play("E:/LordOfChess/ChessLord/music/Hoap1.wav");
	//wav.play();
	for (int i = 0; i < 10; i++)
	{
		qDebug() << "thread" << i;
	}
	while (1)
	{
	}
}