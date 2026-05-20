
#include <QApplication>
#include <QGraphicsScene>
#include "pt.h"
#include <QGraphicsView>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //dimensions
    int rectHeight = 100;
    int rectwidth = 100;
    // creates a scene
    QGraphicsScene * scene = new QGraphicsScene ();
    scene-> setSceneRect(0,0,800,600);
    //creates an item to put in the scene
    pt *rect = new pt();
    rect->setRect(0,0,100,100);


    rect->setPos(0, scene->height() - rectHeight);
    //add the item to the scene
    scene->addItem(rect);

    //make item focused(able)
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();
    //add a view
    QGraphicsView * view = new QGraphicsView(scene);
    view->setFixedSize(800,600);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    return a.exec();
}
