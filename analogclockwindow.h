#ifndef ANALOGCLOCKWINDOW_H
#define ANALOGCLOCKWINDOW_H

#include "rasterwindow.h"
//! [5]
class AnalogClockWindow : public RasterWindow
{
public:
    AnalogClockWindow();

protected:
    void timerEvent(QTimerEvent *) override;
    void render(QPainter *p) override;

private:
    int m_timerId;
};
//! [5]
#endif // ANALOGCLOCKWINDOW_H


