import QtQuick 2.0

Rectangle {
    width: 200
    height: 100
    color: "green"

    Text {
        color: "white"
        text: "Hello Qpm!!"
        anchors.centerIn: parent
        font.pixelSize: parent.height / 3
    }
}

