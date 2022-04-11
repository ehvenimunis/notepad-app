/****************************************************************************
** AUTHOR:MUHAMMED SALIH AYDOGAN
** DATE:02/04/2022
****************************************************************************/

#include "notepad.h"
#include "analogclockwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QApplication EditorApp(argc, argv);

    Notepad Editor;
    Editor.show();

    AnalogClockWindow clock;
    clock.show();

    return app.exec();
    return EditorApp.exec();
}
