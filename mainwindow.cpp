#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include <omp.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_computeFixedButton_clicked()
{
    computeFixedArray();
}

void MainWindow::on_computeScalableButton_clicked()
{
    int size = ui->elementsCountSpinBox->value();
    int numThreads = ui->threadsCountSpinBox->value();
    computeScalableArray(size, numThreads);
}

void MainWindow::computeFixedArray()
{
    const int N = 32;
    std::vector<int> array(N);
    QString generatedElements;
    for(int i = 0; i < N; ++i) {
        array[i] = i + 1;
        generatedElements += QString::number(array[i]) + " ";
    }
    ui->fixedGeneratedTextEdit->setText(generatedElements);

    std::vector<int> prefixSum(N);
    omp_set_num_threads(N);
#pragma omp parallel
    {
        int id = omp_get_thread_num();
        int nthrds = omp_get_num_threads();
        for (int d = 1; d < N; d *= 2) {
#pragma omp for
            for (int i = 0; i < N; i++) {
                if (i >= d) {
                    prefixSum[i] += array[i - d];
                }
            }
#pragma omp barrier
        }
    }

    QString result;
    for(int value : prefixSum) {
        result += QString::number(value) + " ";
    }

    ui->fixedResultTextEdit->setText(result);
}

void MainWindow::computeScalableArray(int size, int numThreads)
{
    std::vector<int> array(size);
    QString generatedElements;
    for(int i = 0; i < size; ++i) {
        array[i] = i + 1;
        generatedElements += QString::number(array[i]) + " ";
    }
    ui->scalableGeneratedTextEdit->setText(generatedElements);

    std::vector<int> prefixSum(size);
    omp_set_num_threads(numThreads);
#pragma omp parallel
    {
        int id = omp_get_thread_num();
        int nthrds = omp_get_num_threads();
        for (int d = 1; d < size; d *= 2) {
#pragma omp for
            for (int i = 0; i < size; i++) {
                if (i >= d) {
                    prefixSum[i] += array[i - d];
                }
            }
#pragma omp barrier
        }
    }

    QString result;
    for(int value : prefixSum) {
        result += QString::number(value) + " ";
    }

    ui->scalableResultTextEdit->setText(result);
}
