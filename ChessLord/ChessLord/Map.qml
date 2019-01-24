import QtQuick 2.0

Item {
	id: map
    Component.onCompleted:{
            console.log("Map is starting........")
        }
    //楚河汉界
	Image{
		id: water;
        width: 40;
        anchors.horizontalCenter: parent.horizontalCenter;
        anchors.top: parent.top;
        anchors.bottom: parent.bottom;
		smooth: true
        source: "../images/water.png";
		Text {
			id:parentText;
			anchors.centerIn: water;
			//text: qsTr("楚河汉界");
		}
    }

	//红方兵营1
	Barracks{
		id: red_barracks;
		anchors.top: parent.top;
		anchors.left: parent.left;
        anchors.leftMargin: parent.width*0.2;
		property var pathBarrack: "../images/barracks_red.png";
	}

	//红方兵营2
	Barracks{
		id: red_barracks2;
		anchors.top: red_barracks.top;
		anchors.topMargin: parent.height*0.23;
		anchors.left: parent.left;
        anchors.leftMargin: parent.width*0.2;
		property var pathBarrack: "../images/barracks_red.png";
	}

	//红方兵营3
	Barracks{
		id: red_barracks3;
		anchors.top: red_barracks2.top;
		anchors.topMargin: parent.height*0.23;
		anchors.left: parent.left;
        anchors.leftMargin: parent.width*0.2;
		property var pathBarrack: "../images/barracks_red.png";
	}

	//红方兵营4
	Barracks{
		id: red_barracks4;
		anchors.top: red_barracks3.top;
		anchors.topMargin: parent.height*0.23;
		anchors.left: parent.left;
        anchors.leftMargin: parent.width*0.2;
		property var pathBarrack: "../images/barracks_red.png";
	}

	//红方兵营5
	Barracks{
		id: red_barracks5;
        anchors.bottom: parent.bottom;
		anchors.left: parent.left;
        anchors.leftMargin: parent.width*0.2;
		property var pathBarrack: "../images/barracks_red.png";
	}

	//蓝方兵营1
	Barracks{
		id: barracks;
		anchors.top: parent.top;
		anchors.right: parent.right;
        anchors.rightMargin: parent.width*0.2;
		property var pathBarrack: "../images/barracks.png";
	}

	//蓝方兵营2
	Barracks{
		id: barracks2;
		anchors.top: barracks.top;
		anchors.topMargin: parent.height*0.23;
		anchors.right: parent.right;
        anchors.rightMargin: parent.width*0.2;
		property var pathBarrack: "../images/barracks.png";
	}

	//蓝方兵营3
	Barracks{
		id: barracks3;
		anchors.top: barracks2.top;
		anchors.topMargin: parent.height*0.23;
		anchors.right: parent.right;
        anchors.rightMargin: parent.width*0.2;
		property var pathBarrack: "../images/barracks.png";
	}

	//蓝方兵营4
	Barracks{
		id: barracks4;
		anchors.top: barracks3.top;
		anchors.topMargin: parent.height*0.23;
		anchors.right: parent.right;
        anchors.rightMargin: parent.width*0.2;
		property var pathBarrack: "../images/barracks.png";
	}

	//蓝方兵营5
	Barracks{
		id: barracks5;
        anchors.bottom: parent.bottom;
		anchors.right: parent.right;
        anchors.rightMargin: parent.width*0.2;
		property var pathBarrack: "../images/barracks.png";
	}
	
	//红方水晶
	Image{
        id: red_home
        anchors.left: parent.left;
        anchors.verticalCenter: parent.verticalCenter;
		width: 80;
		height: 80;
        smooth: true;
        source:  "../images/home_red.png"
		Text {
            anchors.centerIn: parent;
			text: qsTr("水晶");
		}
    }

	//蓝方水晶
	Image{
        id: blue_home
        anchors.right: parent.right;
        anchors.verticalCenter: parent.verticalCenter;
		width: 80;
		height: 80;
        smooth: true;
        source:  "../images/home.png"
		Text {
            anchors.centerIn: parent;
			text: qsTr("水晶");
		}
    }
	

}
