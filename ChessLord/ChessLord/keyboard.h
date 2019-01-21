#ifndef KEYBOARD_H
#define KEYBOARD_H
#include "setting.h"
#include <QDebug>


using namespace std;

class CKeyBoard :public QObject
{
	Q_OBJECT
	Q_PROPERTY(int timenow READ read WRITE write NOTIFY timeCntChanged)
private:
	int timenow;

signals:
	void timeCntChanged();
	void receive(LOC_String str);
public slots:
	void send();

public:
	CKeyBoard();
	~CKeyBoard();
public:
	void write(int e);
	int read() const;
	Q_INVOKABLE void getButton(LOC_String str);


};

#endif
