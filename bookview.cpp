#include "bookview.h"
#include "ui_bookview.h"

BookView::BookView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::BookView)
{
    ui->setupUi(this);
}

BookView::~BookView()
{
    delete ui;
}
