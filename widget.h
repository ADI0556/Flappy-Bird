#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "scene.h"

QT_BEGIN_NAMESPACE
namespace Ui { class widget; }
QT_END_NAMESPACE

class widget : public QWidget
{
    Q_OBJECT

public:
    widget(QWidget *parent = nullptr);
    ~widget();

private slots:
    void on_startGameButton_clicked();

private:
    Ui::widget *ui;
    Scene * scene;
};
#endif // WIDGET_H
