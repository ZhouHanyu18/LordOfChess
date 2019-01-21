#ifndef LOCTHREAD_H
#define LICTHREAD_H

#include <QThread>
#include <QDebug>

class CLOCThread:public QThread
{
	Q_OBJECT
public:
	CLOCThread();
	~CLOCThread();
private:
public:
	virtual void run();
};

#endif