/****************************************************************************
** AUTHOR:MUHAMMED SALIH AYDOGAN
** DATE:02/04/2022
****************************************************************************/

#include "notepad.h"
#include "rasterwindow.h"
#include <QApplication>
#include <QtGui>


class AnalogClockWindow : public RasterWindow
{
public:
    AnalogClockWindow();

protected:
    //void timerEvent(QTimerEvent *) override;
    //void render(QPainter *p) override;

private:
    int m_timerId;
};

int main(int argc, char *argv[])
{
    QApplication EditorApp(argc, argv);
    Notepad Editor;
    Editor.show();

    return EditorApp.exec();
}
