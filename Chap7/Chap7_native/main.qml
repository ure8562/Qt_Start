import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.5
import Qt.labs.platform 1.1

ApplicationWindow
{
    FileDialog
    {
        id: fileOpenDialog
        title: "Select an iamge file"
        folder: StandardPaths.writableLocation(StandardPaths.DocumnetsLocatino)
        nameFilters: ["Images files (&.png *.jpeg *.jpg)",]
        onAccepted: {image.source = fileOpenDialog.file}
    }
}
