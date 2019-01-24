import QtQuick 2.0
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.1
import QtQuick.Controls.Styles 1.2
import QtMultimedia 5.0

Rectangle
{
	id: root_Button
	color: "transparent"  //设置背景透明
	state: "OPEN" //初始化
	Image{
		anchors.fill: parent;
		id: blankground;
		smooth: true
        source: "../images/voice_open.png";
	}

	states: [
        State {
            name: "OPEN"
            PropertyChanges { target: root_Button; color: "transparent"}
            PropertyChanges { target: blankground; source: "../images/voice_open.png"}
        },
        State {
            name: "CLOSE"
            PropertyChanges { target: root_Button; color: "transparent"}
            PropertyChanges { target: blankground; source: "../images/voice_close.png"}
        }
	]

    signal musicClick;

	MouseArea {
		anchors.fill: parent
		onClicked:{
			if (root_Button.state == "OPEN")
            {
                //root.bplayMusic=false;
                root_Button.musicClick();
                root_Button.state = "CLOSE"
            }

            else
            {
                //root.bplayMusic=true;
                root_Button.musicClick();
                root_Button.state = "OPEN"
            }
		}
	}
	
}
