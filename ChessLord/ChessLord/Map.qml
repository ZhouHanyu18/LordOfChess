import QtQuick 2.0

Item {
	id: map
    Component.onCompleted:{
            console.log("Map is starting........")
        }
    //楚河汉界
	Image{
		id: water;
        opacity: 0.6;
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

	//桥1
	Image{
		id: bridge;
        opacity: 0.3;
        width: 60;
		height: 50;
        anchors.horizontalCenter: parent.horizontalCenter;
        anchors.top: parent.top;
        anchors.topMargin: parent.height*0.2;
		smooth: true
        source: "../images/bridge.png";
		Text {
			id:bridgeText;
			anchors.centerIn: bridge;
			text: qsTr("桥");
		}
    }

	//桥2
	Image{
		id: bridge2;
        opacity: 0.3;
        width: 60;
		height: 50;
        anchors.horizontalCenter: parent.horizontalCenter;
        anchors.top: parent.top;
        anchors.topMargin: parent.height*0.45;
		smooth: true
        source: "../images/bridge.png";
		Text {
			id:bridgeText2;
			anchors.centerIn: bridge2;
			text: qsTr("桥");
		}
    }

	//桥3
	Image{
		id: bridge3;
        opacity: 0.3;
        width: 60;
		height: 50;
        anchors.horizontalCenter: parent.horizontalCenter;
        anchors.top: parent.top;
        anchors.topMargin: parent.height*0.7;
		smooth: true
        source: "../images/bridge.png";
		Text {
			id:bridgeText3;
			anchors.centerIn: bridge3;
			text: qsTr("桥");
		}
    }

	//红方兵营1
	Barracks{
		id: barracks_red;
		anchors.top: parent.top;
		anchors.left: parent.left;
        anchors.leftMargin: parent.width*0.3;
		property var pathBarrack: "../images/barracks_red.png";
	}

	//红方兵营2
	Barracks{
		id: barracks_red2;
		anchors.top: barracks_red.top;
		anchors.topMargin: parent.height*0.235;
		anchors.left: parent.left;
        anchors.leftMargin: parent.width*0.3;
		property var pathBarrack: "../images/barracks_red.png";
	}

	//红方兵营3
	Barracks{
		id: barracks_red3;
		anchors.top: barracks_red2.top;
		anchors.topMargin: parent.height*0.235;
		anchors.left: parent.left;
        anchors.leftMargin: parent.width*0.3;
		property var pathBarrack: "../images/barracks_red.png";
	}

	//红方兵营4
	Barracks{
		id: barracks_red4;
		anchors.top: barracks_red3.top;
		anchors.topMargin: parent.height*0.235;
		anchors.left: parent.left;
        anchors.leftMargin: parent.width*0.3;
		property var pathBarrack: "../images/barracks_red.png";
	}

	//红方兵营5
	Barracks{
		id: barracks_red5;
        anchors.bottom: parent.bottom;
		anchors.left: parent.left;
        anchors.leftMargin: parent.width*0.3;
		property var pathBarrack: "../images/barracks_red.png";
	}

	//蓝方兵营1
	Barracks{
		id: barracks;
		anchors.top: parent.top;
		anchors.right: parent.right;
        anchors.rightMargin: parent.width*0.3;
		property var pathBarrack: "../images/barracks.png";
	}

	//蓝方兵营2
	Barracks{
		id: barracks2;
		anchors.top: barracks.top;
		anchors.topMargin: parent.height*0.235;
		anchors.right: parent.right;
        anchors.rightMargin: parent.width*0.3;
		property var pathBarrack: "../images/barracks.png";
	}

	//蓝方兵营3
	Barracks{
		id: barracks3;
		anchors.top: barracks2.top;
		anchors.topMargin: parent.height*0.235;
		anchors.right: parent.right;
        anchors.rightMargin: parent.width*0.3;
		property var pathBarrack: "../images/barracks.png";
	}

	//蓝方兵营4
	Barracks{
		id: barracks4;
		anchors.top: barracks3.top;
		anchors.topMargin: parent.height*0.235;
		anchors.right: parent.right;
        anchors.rightMargin: parent.width*0.3;
		property var pathBarrack: "../images/barracks.png";
	}

	//蓝方兵营5
	Barracks{
		id: barracks5;
        anchors.bottom: parent.bottom;
		anchors.right: parent.right;
        anchors.rightMargin: parent.width*0.3;
		property var pathBarrack: "../images/barracks.png";
	}
	
	//红方水晶
	Image{
        id: home_red
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
        id: home_blue
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
	
	//红方炮台
	Image{
		id: battery_red;
		anchors.top: barracks_red.top;
		anchors.topMargin: parent.height*0.235;
		anchors.left: parent.left;
        anchors.leftMargin: parent.width*0.2;
		width: 50;
		height: 50;
		source: "../images/battery_red.png";
		Text {
            anchors.centerIn: parent;
			text: qsTr("炮台");
		}
	}

	//红方炮台2
	Image{
		id: battery_red2;
		anchors.top: barracks_red3.top;
		anchors.topMargin: parent.height*0.235;
		anchors.left: parent.left;
        anchors.leftMargin: parent.width*0.2;
		width: 50;
		height: 50;
		source: "../images/battery_red.png";
		Text {
            anchors.centerIn: parent;
			text: qsTr("炮台");
		}
	}

	//蓝方炮台
	Image{
		id: battery;
		anchors.top: barracks.top;
		anchors.topMargin: parent.height*0.235;
		anchors.right: parent.right;
        anchors.rightMargin: parent.width*0.2;
		width: 50;
		height: 50;
		source: "../images/battery.png";
		Text {
            anchors.centerIn: parent;
			text: qsTr("炮台");
		}
	}

	//蓝方炮台2
	Image{
		id: battery2;
		anchors.top: barracks3.top;
		anchors.topMargin: parent.height*0.235;
		anchors.right: parent.right;
        anchors.rightMargin: parent.width*0.2;
		width: 50;
		height: 50;
		source: "../images/battery.png";
		Text {
            anchors.centerIn: parent;
			text: qsTr("炮台");
		}
	}

	//红方马厩
	Image{
		id: horse_red;
		anchors.top: parent.top;
		anchors.topMargin: parent.height*0.2;
		anchors.left: parent.left;
		width: 50;
		height: 50;
		source: "../images/horse_red.png";
		Text {
            anchors.centerIn: parent;
			text: qsTr("马厩");
		}
	}
	
	//红方马厩2
	Image{
		id: horse_red2;
		anchors.top: parent.top;
		anchors.topMargin: parent.height*0.7;
		anchors.left: parent.left;
		width: 50;
		height: 50;
		source: "../images/horse_red.png";
		Text {
            anchors.centerIn: parent;
			text: qsTr("马厩");
		}
	}

	//蓝方马厩
	Image{
		id: horse;
		anchors.top: parent.top;
		anchors.topMargin: parent.height*0.2;
		anchors.right: parent.right;
		width: 50;
		height: 50;
		source: "../images/horse.png";
		Text {
            anchors.centerIn: parent;
			text: qsTr("马厩");
		}
	}
	
	//蓝方马厩2
	Image{
		id: horse2;
		anchors.top: parent.top;
		anchors.topMargin: parent.height*0.7;
		anchors.right: parent.right;
		width: 50;
		height: 50;
		source: "../images/horse.png";
		Text {
            anchors.centerIn: parent;
			text: qsTr("马厩");
		}
	}

	//红方军火库
	Image{
		id: arms_red;
		anchors.top: parent.top;
		anchors.left: parent.left;
		width: 60;
		height: 30;
		source: "../images/arms_red.png";
		Text {
            anchors.centerIn: parent;
			text: qsTr("军火库");
		}
	}

	//红方军火库2
	Image{
		id: arms_red2;
		anchors.bottom: parent.bottom;
		anchors.left: parent.left;
		width: 60;
		height: 30;
		source: "../images/arms_red.png";
		Text {
            anchors.centerIn: parent;
			text: qsTr("军火库");
		}
	}

	//蓝方军火库
	Image{
		id: arms;
		anchors.top: parent.top;
		anchors.right: parent.right;
		width: 60;
		height: 30;
		source: "../images/arms.png";
		Text {
            anchors.centerIn: parent;
			text: qsTr("军火库");
		}
	}

	//蓝方军火库2
	Image{
		id: arms2;
		anchors.bottom: parent.bottom;
		anchors.right: parent.right;
		width: 60;
		height: 30;
		source: "../images/arms.png";
		Text {
            anchors.centerIn: parent;
			text: qsTr("军火库");
		}
	}
	//红方角色
	Role{
		objectName: "red_role";
		x:0
		y:200

		property var pathRole: "../images/role_red.png";
		property var pathRoleLeft: "../images/role_red_left.png";
		property var pathRoleAttack: "../images/role_red_attack.png";
		property var pathRoleAttackLeft: "../images/role_red_attack_left.png";
		property var pathRoleMove: "../images/role_red_move.png";
		property var pathRoleLeftMove: "../images/role_red_left_move.png";
		property var path:pathRole
	}

	//蓝方角色
	Role{
		x:950
		y:200
		property var pathRole: "../images/role.png";
		property var pathRoleLeft: "../images/role_left.png";
		property var pathRoleAttack: "../images/role_attack.png";
		property var pathRoleAttackLeft: "../images/role_attack_left.png";
		property var pathRoleMove: "../images/role_move.png";
		property var pathRoleLeftMove: "../images/role_left_move.png";
	}
}
