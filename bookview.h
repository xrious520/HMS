#ifndef BOOKVIEW_H
#define BOOKVIEW_H

#include <QWidget>

namespace Ui {
class BookView;
}

class BookView : public QWidget
{
    Q_OBJECT

public:
    explicit BookView(QWidget *parent = nullptr);
    ~BookView();

private:
    Ui::BookView *ui;
};

#endif // BOOKVIEW_H
