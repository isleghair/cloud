﻿#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_log_clicked();

private:
    Ui::login *ui;

signals:
    void info(QString name,QString password);
};

#endif // LOGIN_H
