import QtQuick 2.15
import QtQuick.Controls 2.15
import QtQuick.Controls.Material 2.15
import Backend 1.0

ApplicationWindow{
    id: window

    title: "myApp"
    visible: true
    width: 1280
    height: 720
//    visibility: Qt.WindowFullScreen
//    minimumWidth: window.width
//    minimumHeight: window.height
    Material.theme: Material.Light
    Material.accent: Material.Blue

    Rectangle{
        id: rec1
        anchors.fill: parent
        Button{
            id: button1
            anchors.top: parent.top
            anchors.left: parent.left
            anchors.bottom: parent.bottom
            implicitWidth: window.width  / 2
            text: "Reboot"
            highlighted: true
            font.pointSize: 18
            Material.accent:  Material.Indigo
            onClicked: backend.reboot();
        }
        Button{
            id:button2
            anchors.top: parent.top
            anchors.left: button1.right
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            text: "Shutdown"
            highlighted: true
            font.pointSize: 18
            Material.accent: Material.Pink
            onClicked: backend.shutdown();
        }
    }

    Backend{
        id: backend
    }
}
