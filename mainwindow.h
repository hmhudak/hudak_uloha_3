#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_computeFixedButton_clicked();
    void on_computeScalableButton_clicked();

private:
    Ui::MainWindow *ui;
    void computeFixedArray();
    void computeScalableArray(int size, int numThreads);
};
#endif // MAINWINDOW_H
