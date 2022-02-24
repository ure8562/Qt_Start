import QtQuick 2.0
import QtQuick.Controls 2.5

Page
{
    header: Label
    {
        text: qsTr("Commnuity Stats")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    Column
    {
        anchors.centerIn: parent
        spacing: 10
        Label
        {
            anchors.horizontalCenter: parent.horizontalCenter
            text: qsTr("Coummnity statistics")
        }
        Button
        {
            anchors.horizontalCenter: parent.horizontalCenter
            text:qsTr("Blak")
            onClicked: swipeView.setCurrentIndex(0);
        }
    }
}
