import QtQuick 2.0
import an_qt_keyboard 1.0

Rectangle {
	id: keyboard
	anchors.centerIn: parent;
//	width: 100;
//	height:20;
	Text {
		id:parentText;
		anchors.centerIn: keyboard;
		text: qsTr("click quit");
		MouseArea {
			anchors.fill: parent
			onClicked: {
				Qt.quit();
			}
		}
	}

	//js����
	function adjustTest()
	{
		console.log("I am jscript")
	}

	QMLCKeyBoard{
		id:ckeyboard
		onReceive:{
            parentText.text = str;
        }
		onTimeCntChanged:{
			parentText.text = "timeCntChanged";
		}
	}



    Text {//������ʾ�������
		x:100;
		y:100;
        id: keyname;
        text: "aaaaaaaa";
		color: "blue";
		font { bold: true; pixelSize: 24;}
    }
    focus: true//����ȡ�����ǲ��ܴ�������¼��ģ�����Ҫ����Ϊtrue
    Keys.enabled: true;
    Keys.onEscapePressed: Qt.quit();

	Keys.forwardTo: [keyname];
    Keys.onPressed: {
        switch(event.key)
        {
        case Qt.Key_0:
        case Qt.Key_1:
        case Qt.Key_2:
        case Qt.Key_3:
        case Qt.Key_4:
        case Qt.Key_5:
        case Qt.Key_6:
        case Qt.Key_7:
        case Qt.Key_8:
        case Qt.Key_9:
            keyname.text=event.key-Qt.Key_0;
            break;
		case Qt.Key_Left:
        case Qt.Key_Right:
        case Qt.Key_Down:
		case Qt.Key_Up:
        case Qt.Key_A:
		case Qt.Key_S:
		case Qt.Key_D:
		case Qt.Key_F:
			x+=10;
            keyname.text=1000000;
			adjustTest();//����js����
			ckeyboard.timenow=20190118;
			ckeyboard.send();
			ckeyboard.getButton(event.key);
            break;
        default:
            return;
        }
		event.accepted=true;
    }
}
