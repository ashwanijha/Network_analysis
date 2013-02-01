#include "network_analysis.h"
#include "ui_network_analysis.h"
#include <QStringList>
#include <QDebug>
#include <QtGui>



Network_analysis::Network_analysis(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Network_analysis)
{
    ui->setupUi(this);
//ui->widget->setStyleSheet("image: url(d.png); background-repeat: repeat;");
        // ui->widget_ihbt->setStyleSheet("image: url(Ihbt.gif); background-repeat: repeat;");
    connect(ui->pushButton_draw_network,SIGNAL(clicked()),this,SLOT(show_network()));
   // connect(ui-> comboBox_gene_name ,SIGNAL(highlighted(QString)),this,SLOT(cb()));


QStringList tfs;
tfs <<"ABI3VP1"
       << "AP2-EREBP"
       << "ARF"
       << "C2C2-Gata"
       << "FHY3"
       << "HSF"
       << "MADS"
       << "MYB"
       << "SBP"
       << "WRKY";
ui->comboBox_tfs->addItems(tfs);

}

void Network_analysis::show_network()
{
QString platform;

platform = ui->comboBox_platform->currentText().toAscii().data();
QString gene;
gene = ui->lineEdit_gene_name->text();
QProcess *process = new QProcess;


QString mirna = ui->comboBox_mirna->currentText().toAscii().data();
QString tfbs = ui->comboBox_tfs->currentText().toAscii().data();
qDebug() <<"perl write.pl " << gene << " " << tfbs << " " << mirna ;
process->start("perl write.pl " % gene % " " % tfbs % " " % mirna % " " % platform);
process->waitForStarted();
connect(process,SIGNAL(finished(int,QProcess::ExitStatus)),this,SLOT(processend()));
connect(process,SIGNAL(readyReadStandardError()),this,SLOT(readFromStdout()));


}




void Network_analysis::processend()
{

}


void Network_analysis::readFromStdout()
{
    qDebug()<<"s";
}



Network_analysis::~Network_analysis()
{
    delete ui;
}

