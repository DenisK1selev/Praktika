#pragma once

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

class Scene : public QGraphicsScene
{
public:
  explicit Scene(QObject *parent = nullptr);
  QVector<QPointF> points;
  void findCrossing();

private:
  void mousePressEvent(QGraphicsSceneMouseEvent *mouse) override;
  void mouseReleaseEvent(QGraphicsSceneMouseEvent *mouse) override;
};
