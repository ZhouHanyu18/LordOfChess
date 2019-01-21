import QtQuick 2.0
import QtMultimedia 5.0
import an_qt_map 1.0

Rectangle {
    width: 800
    height: 600
	Image{
		anchors.fill: parent;
		id: musicbutton;
        source: "../images/blankground.png";
	}
   

	QMLCMap{
		id: painter;
        anchors.fill: parent;
	}
	
	Audio{
		id:playMusic;
//		source:"E:/LordOfChess/ChessLord/music/Star+Sky.flac"
		autoPlay:true
	}

	Component.onCompleted:{
		
	}

    MouseArea {
        anchors.fill: parent
        onClicked: {
			painter.init();
        }
    }

    KeyBoard{
		id:setKeyboard;
	}


}
