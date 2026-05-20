/*#ifndef PT_H
#define PT_H
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QGraphicsItem>
class pt: public QGraphicsRectItem{
public:
    //void keyPressEvent(QKeyEvent * event);
    pt(QGraphicsItem * parent=0);
public slots:
    void move();
private:
};

#endif // PT_H
*/
#ifndef PT_H
#define PT_H

#include <QObject>
#include <QGraphicsRectItem>

class pt : public QObject, public QGraphicsRectItem
{
    Q_OBJECT

public:
    explicit pt(QGraphicsItem *parent = nullptr);

public slots:
    void move();
};

#endif // PT_H
