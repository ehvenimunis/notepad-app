/****************************************************************************
** AUTHOR:MUHAMMED SALIH AYDOGAN
** DATE:02/04/2022
****************************************************************************/

#include "notepad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication EditorApp(argc, argv);
    Notepad Editor;
    Editor.show();

    return EditorApp.exec();
}
