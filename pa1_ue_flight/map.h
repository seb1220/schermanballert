#ifndef MAP_H
#define MAP_H

#include <QWidget>

namespace Ui {
class map;
}

class map : public QWidget
{
    Q_OBJECT

public:
    explicit map(QWidget *parent = nullptr);
    ~map();
    void paintEvent(QPaintEvent *event);

private:
    Ui::map *ui;
};

#endif // MAP_H
