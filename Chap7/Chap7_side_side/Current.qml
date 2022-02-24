import QtQuick 2.0
import QtQuick.Controls 2.5

Page
{
    header: Label
    {
        text: qsTr("Current")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    Label
    {
        text: qsTr("Current activity")
        anchors.centerIn: parent
    }
}
