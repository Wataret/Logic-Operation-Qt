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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_comboBox_op1_activated(int index);

    void on_comboBox_op2_activated(int index);

    void on_comboBox_operations_activated(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
