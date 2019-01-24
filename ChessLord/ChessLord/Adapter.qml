import QtQuick 2.0
import an_qt_adapter 1.0


Rectangle {
	id: adapter
	//anchors.centerIn: parent;
	x: 150;
	y: 100;
	Text {
		id:parentText;
		font.pointSize: 16;
		anchors.top: adapter.bottom;
		//text: qsTr("Im adapter	");
	}
	
	QMLCAdapter{
		id:signals
		onReceive:{
            parentText.text = str;
        }
		onTimeCntChanged:{
			parentText.text = "timeCntChanged";
		}
	}

	Text {
		id:childText1;
		anchors.top: parentText.bottom;
		//text: qsTr("setTimenow	");
		font.pointSize: 16;
		MouseArea {
			anchors.fill: parent
			onClicked: {
				signals.timenow=20190118;
			}
		}
	}

	Text {
		id:childText2;
		anchors.top: childText1.bottom;
		//text: qsTr("send	");
		font.pointSize: 16;
		MouseArea {
			anchors.fill: parent
			onClicked: {
				signals.send();
			}
		}
	}

	Text {
		id:childText3;
		anchors.top: childText2.bottom;
		//text: qsTr("getbutton	");
		font.pointSize: 16;
		MouseArea {
			anchors.fill: parent
			onClicked: {
				signals.getButton("Im button");
			}
		}
	}


}