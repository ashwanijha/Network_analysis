#ifndef NETWORK_ANALYSIS_H
#define NETWORK_ANALYSIS_H

#include <QMainWindow>
#include <QStringList>

namespace Ui {
    class Network_analysis;
}

class Network_analysis : public QMainWindow
{
    Q_OBJECT



public:
    explicit Network_analysis(QWidget *parent = 0);
    ~Network_analysis();



public slots:
    void processend();
    void readFromStdout();
      void show_network();


private:
    Ui::Network_analysis *ui;



private slots:
    void on_comboBox_gene_name_currentIndexChanged(QString );
};

#endif // NETWORK_ANALYSIS_H
