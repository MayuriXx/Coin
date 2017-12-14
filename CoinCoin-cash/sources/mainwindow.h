#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonValider_clicked();

    void on_buttonParcourir_clicked();

    void on_buttonQuitter_clicked();

    void on_buttonCollerValider_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
