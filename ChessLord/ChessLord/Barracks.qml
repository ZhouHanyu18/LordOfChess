import QtQuick 2.0

Item {
	id: barracks
	width: 50;
	height: 50;
    Component.onCompleted:{
            console.log("barracks is starting........")
        }
    //兵营
	Image{
        id: image
		anchors.fill: parent
        smooth: true;
        source: parent.pathBarrack;
		Text {
			id:parentText;
            anchors.centerIn: image;
			text: qsTr("兵营");
		}
    }

	

}
