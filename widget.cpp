#include "widget.h"
#include "ui_widget.h"
#include <QGraphicsPixmapItem>
//#include "birditem.h"

widget::widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::widget)
{
    ui->setupUi(this);
    scene = new Scene(this);
    scene->setSceneRect(-250,-300,500,600);
    QGraphicsPixmapItem * pixItem = new QGraphicsPixmapItem(QPixmap(":/Images/bg1.jpg"));
    scene->addItem(pixItem);
    pixItem->setPos(QPointF(0,0)-QPointF(pixItem->boundingRect().width()/2,pixItem->boundingRect().height()/2));
//    scene->addLine(-400,0,400,0,QPen(Qt::blue));
//    scene->addLine(0,-400,0,400,QPen(Qt::blue));

//    PillarItem * pillar = new PillarItem();
//    scene->addItem(pillar);

//    BirdItem * bird = new BirdItem(QPixmap(":/Images/bird_up.png"));
//    scene->addItem(bird);

    ui->graphicsView->setScene(scene);

    scene->addBird();
}

widget::~widget()
{
    delete ui;
}


void widget::on_startGameButton_clicked()
{
    scene->startGame();
}

