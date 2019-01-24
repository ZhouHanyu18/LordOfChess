#ifndef ADAPTER_H
#define ADAPTER_H
#include "setting.h"
#include <QDebug>

class CAdapter :public QObject
{
	Q_OBJECT
	Q_PROPERTY(int timenow READ read WRITE write NOTIFY timeCntChanged)
signals:
	void timeCntChanged();
	void receive(LOC_String str);
public slots:
	void send();
private:
	int timenow;
public:
	CAdapter();
	~CAdapter();
public:
	void write(int e);
	int read() const;
	Q_INVOKABLE void getButton(LOC_String str);
};

#endif