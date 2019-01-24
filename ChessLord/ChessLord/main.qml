import QtQuick 2.2
import QtQuick.Window 2.1
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.1
import QtQuick.Controls.Styles 1.2
import QtMultimedia 5.0

import an_qt_map 1.0

ApplicationWindow {
	id: root;
	visible: true;
    width: 1000
    height: 600
	//背景图片
	Image{
		anchors.fill: parent;
		id: blankground;
		smooth: true
        source: "../images/blankground.png";
	}
	//背景音乐
	Audio{
		id:playMusic;
		source:"E:/LordOfChess/ChessLord/music/BGM.mp3"
		autoPlay:true
		loops:Audio.Infinite				//无限循环
	}

    property bool bplayMusic: true;
    onBplayMusicChanged: bplayMusic ? playMusic.play(): playMusic.pause();

	//初始化paint()
	QMLCMap{
		id: painter;
        anchors.fill: parent;
	}
	//启动选项
	Component.onCompleted:{
		console.log("starting........")
	}
	//鼠标响应
    MouseArea {
        anchors.fill: parent
		acceptedButtons: Qt.LeftButton| Qt.RightButton;
        onClicked: {
            if(mouse.button == Qt.RightButton){
                Qt.quit();
            }

            else if(mouse.button == Qt.LeftButton){
                color = Qt.rgba((mouse.x %255)/255.0 , (mouse.y%255)/255.0 , 0.6 , 1.0 );
            }
        }
        onDoubleClicked: {
            color = "gray";
        }
    }
	//键盘响应qml
    KeyBoard{
		id:setKeyboard;
	}
	//绘制地图qml
	Map{
		id:setMap;
		anchors.fill: parent
	}
	//接口转换qml
	Adapter{
		id:setAdapter;
	}
	//调用自定义button
	VoiceButton {
        id:setbutton
		anchors.top: parent.top;
		anchors.right: parent.right;
		anchors.rightMargin: 2;
		anchors.topMargin: 2;
		width: 15
		height: 15
        onMusicClick: bplayMusic=!bplayMusic;
    }

}
