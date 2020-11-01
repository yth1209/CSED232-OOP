#ifndef GASITEM_H
#define GASITEM_H

#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <qrandom.h>

class MyItem : public QGraphicsItem
{
public:
    MyItem();
    MyItem(qreal nangle, qreal nspeed, int x, int y){
        angle=nangle;
        speed=nspeed;
        setPos(mapToParent(x,y));
    }
    void setangle(qreal nangle);
    void setspeed(qreal nspeed);
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);

protected:
    void advance(int phase);

private:
    qreal angle, speed;
    void doCollision();
};


class MyItem2 : public QGraphicsItem
{
public:
    MyItem2();
    MyItem2(qreal nangle, qreal nspeed, int x, int y){
        angle=nangle;

        speed=nspeed;
        setPos(mapToParent(x,y));
    }
    void setangle(qreal nangle);
    void setspeed(qreal nspeed);
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);

protected:
    void advance(int phase);

private:
    qreal angle, speed;
    void doCollision();
};

class MyItem3 : public QGraphicsItem
{
public:
    MyItem3();
    MyItem3(qreal nangle, qreal nspeed, int x, int y){
        angle=nangle;
        speed=nspeed;
        setPos(mapToParent(x,y));
    }
    void setangle(qreal nangle);
    void setspeed(qreal nspeed);
    QRectF boundingRect() const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget *widget);

protected:
    void advance(int phase);

private:
    qreal angle, speed;
    void doCollision();
};
#endif // GASITEM_H
