import QtQuick 2.0
import an_qt_role 1.0

Item {
	width: 100;
	height: 100;
	property bool bAttack: false
	MouseArea {
			anchors.fill: parent
			onClicked: {
				console.log(bAttack)
			}
	}
	onBAttackChanged:{
		console.log("onBAttackChanged")
	}
	Image{
		anchors.fill: parent
        smooth: true;
        source: path;
		Text {
            anchors.centerIn: parent;
			text: qsTr("角色");
		}
    }
}
