#include "pt.h"

#include <QTimer>
#include <QtMath>

pt::pt(QGraphicsItem *parent)
    : QObject(), QGraphicsRectItem(parent)
{
    // rectangle projectile
    setRect(0, 0, 20, 10);


    // timer
    QTimer *mover_timer = new QTimer(this);

    connect(mover_timer, &QTimer::timeout,
            this, &pt::move);

    mover_timer->start(50);
}

void pt::move()
{
    int SPEED = 30;

    double theta = rotation();

    double dx = SPEED * qCos(qDegreesToRadians(theta));
    double dy = SPEED * qSin(qDegreesToRadians(theta));

    setPos(x() + dx, y() + dy);
}
