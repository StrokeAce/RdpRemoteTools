#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Register; }
QT_END_NAMESPACE

class Register : public QWidget
{
    Q_OBJECT
public:
    Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_register_Close_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
