import QtQuick 2.0
import an_qt_keyboard 1.0

Rectangle {
	id: keyboard
	anchors.centerIn: parent;

	Text {
		id:parentText;
		anchors.centerIn: keyboard;
		//text: qsTr("click quit");
		MouseArea {
			anchors.fill: parent
			onClicked: {
				//Qt.quit();
			}
		}
	}

	//js代码
	function adjustTest()
	{
		console.log("I am jscript")
	}

	QMLCKeyBoard{
		id:ckeyboard
	}

    Text {//用于显示按键情况
		x:100;
		y:100;
        id: keyname;
        //text: "aaaaaaaa";
		color: "blue";
		font { bold: true; pixelSize: 24;}
    }
    focus: true//不获取焦点是不能处理键盘事件的，所以要设置为true
    Keys.enabled: true;
    //Keys.onEscapePressed: Qt.quit();

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
		case Qt.Key_Left:
        case Qt.Key_Right:
        case Qt.Key_Down:
		case Qt.Key_Up:
        case Qt.Key_A:
		case Qt.Key_S:
		case Qt.Key_D:
		case Qt.Key_F:
            //keyname.text=1000000;
			//adjustTest();//测试js代码
			//console.log(event.key)
        default:
			ckeyboard.getButton(event.key,root);
			console.log(event.key)
            return;
        }
		event.accepted=true;
    }
}
