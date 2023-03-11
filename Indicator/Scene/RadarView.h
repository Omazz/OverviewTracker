#ifndef RADARVIEW_H
#define RADARVIEW_H

#include <QGraphicsView>
#include "TargetItem.h"

class RadarView: public QGraphicsView {

    Q_OBJECT

public:
    explicit RadarView(QWidget* parent = nullptr);

signals:
    void itemFollowed(TargetItem* item);

    void itemUnfollowed();

    void zoomChanged(qreal factor);

protected:
    void resizeEvent(QResizeEvent* event) override;

    void wheelEvent(QWheelEvent* event) override;

    void keyPressEvent(QKeyEvent* event) override;

    void mouseReleaseEvent(QMouseEvent* event) override;

    void mouseDoubleClickEvent(QMouseEvent* event) override;

private:
    bool _dragged = true;
    QPointF _prevMousePos;

    void zoom(qreal factor);
};

#endif // RADARVIEW_H
