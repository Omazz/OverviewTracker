#ifndef INDICATORWINDOW_H
#define INDICATORWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QUdpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class IndicatorWindow; }
QT_END_NAMESPACE

class IndicatorWindow : public QMainWindow
{
    Q_OBJECT

public:
    IndicatorWindow(QWidget *parent = nullptr);
    ~IndicatorWindow();

private:

    QGraphicsScene* _graphicsScene;
    Ui::IndicatorWindow *ui;
};
#endif // INDICATORWINDOW_H
