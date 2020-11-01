#include "gasitem.h"

MyItem::MyItem()
{
    // random start rotation
    angle = (qrand() % 360);
    setRotation(angle);

    // set the speed
    speed = 5;  // 5 pixels

    // random start position
    int startX = 0;
    int startY = 0;

    if(qrand() % 1)
    {
        startX = qrand() % 200;
        startY = qrand() % 200;
    }
    else
    {
        startX = qrand() % -100;
        startY = qrand() % -100;
    }

    setPos(mapToParent(startX, startY));
}

QRectF MyItem::boundingRect() const
{
    return QRect(0,0,3,3);
}

void MyItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();

    // basic collision detection

    if(scene()->collidingItems(this).isEmpty())
    {
        // no collision
        QPen pen(Qt::green, 5);
        painter->setPen(pen);
    }
    else
    {
        // collision !!!
        QPen pen(Qt::green, 5);
        painter->setPen(pen);

        // set the position
        doCollision();
    }

    painter->drawEllipse(rect);
}

void MyItem::advance(int phase)
{
    if(!phase) return;

    QPointF location = this->pos();

    setPos(mapToParent(0, -speed));
}

void MyItem::doCollision()
{
    // get a new position

    // change the angle with randomness
    if(qrand() % 1)
    {
        setRotation(rotation() + (180 + (qrand() % 10)));
    }
    else
    {
        setRotation(rotation() + (180 + (qrand() % -10)));
    }

    // check if the new position is in bounds
    QPointF newPoint = mapToParent(-(boundingRect().width()), -(boundingRect().width() + 2));

    if(!scene()->sceneRect().contains((newPoint)))
    {
        // move back in bounds
        newPoint = mapToParent(0,0);
    }
    else
    {
        // set the new position
        setPos(newPoint);
    }
}

void MyItem::setangle(qreal nangle){
    angle=nangle;
}
void MyItem::setspeed(qreal nspeed){
    speed=nspeed;
}

MyItem2::MyItem2()
{
    // random start rotation
    angle = (qrand() % 360);
    setRotation(angle);

    // set the speed
    speed = 5;  // 5 pixels

    // random start position
    int startX = 0;
    int startY = 0;

    if(qrand() % 1)
    {
        startX = qrand() % 200;
        startY = qrand() % 200;
    }
    else
    {
        startX = qrand() % -100;
        startY = qrand() % -100;
    }

    setPos(mapToParent(startX, startY));
}

QRectF MyItem2::boundingRect() const
{
    return QRect(0,0,4,4);
}

void MyItem2::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();

    // basic collision detection

    if(scene()->collidingItems(this).isEmpty())
    {
        // no collision
        QPen pen(Qt::red, 5);
        painter->setPen(pen);
    }
    else
    {
        // collision !!!
        QPen pen(Qt::red, 5);
        painter->setPen(pen);

        // set the position
        doCollision();
    }

    painter->drawEllipse(rect);
}

void MyItem2::advance(int phase)
{
    if(!phase) return;

    QPointF location = this->pos();

    setPos(mapToParent(0, -speed));
}

void MyItem2::doCollision()
{
    // get a new position

    // change the angle with randomness
    if(qrand() % 1)
    {
        setRotation(rotation() + (180 + (qrand() % 10)));
    }
    else
    {
        setRotation(rotation() + (180 + (qrand() % -10)));
    }

    // check if the new position is in bounds
    QPointF newPoint = mapToParent(-(boundingRect().width()), -(boundingRect().width() + 2));

    if(!scene()->sceneRect().contains((newPoint)))
    {
        // move back in bounds
        newPoint = mapToParent(0,0);
    }
    else
    {
        // set the new position
        setPos(newPoint);
    }
}

void MyItem2::setangle(qreal nangle){
    angle=nangle;
}
void MyItem2::setspeed(qreal nspeed){
    speed=nspeed;
}

MyItem3::MyItem3()
{
    // random start rotation
    angle = (qrand() % 360);
    setRotation(angle);

    // set the speed
    speed = 5;  // 5 pixels

    // random start position
    int startX = 0;
    int startY = 0;

    if(qrand() % 1)
    {
        startX = qrand() % 200;
        startY = qrand() % 200;
    }
    else
    {
        startX = qrand() % -100;
        startY = qrand() % -100;
    }

    setPos(mapToParent(startX, startY));
}

QRectF MyItem3::boundingRect() const
{
    return QRect(0,0,5,5);
}

void MyItem3::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rect = boundingRect();

    // basic collision detection
    if(scene()->collidingItems(this).isEmpty())    {
        // no collision
        QPen pen(Qt::blue, 5);
        painter->setPen(pen);
    }
    else
    {
        // collision !!!
        QPen pen(Qt::blue, 5);
        painter->setPen(pen);

        // set the position
        doCollision();
    }

    painter->drawEllipse(rect);
}

void MyItem3::advance(int phase)
{
    if(!phase) return;

    QPointF location = this->pos();

    setPos(mapToParent(0, -speed));
}

void MyItem3::doCollision()
{
    // get a new position

    // change the angle with randomness
    if(qrand() % 1)
    {
        setRotation(rotation() + (180 + (qrand() % 10)));
    }
    else
    {
        setRotation(rotation() + (180 + (qrand() % -10)));
    }

    // check if the new position is in bounds
    QPointF newPoint = mapToParent(-(boundingRect().width()), -(boundingRect().width() + 2));

    if(!scene()->sceneRect().contains((newPoint)))
    {
        // move back in bounds
        newPoint = mapToParent(0,0);
    }
    else
    {
        // set the new position
        setPos(newPoint);
    }
}

void MyItem3::setangle(qreal nangle){
    angle=nangle;
}
void MyItem3::setspeed(qreal nspeed){
    speed=nspeed;
}
