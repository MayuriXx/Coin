#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QTextStream"
#include "QFileDialog"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->labelAlert->setVisible(false);
    ui->widgetPurse->setVisible(false);
    ui->labelTriown->setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonValider_clicked()
{
    QString nom,prenom,triOwn;
    if(ui->lineNom->text() == "" || ui->linePrenom->text() == ""){
        ui->labelAlert->setVisible(true);
    }
    if(ui->lineNom->text() != "" && ui->linePrenom->text() != ""){
        ui->widgetPurse->setVisible(true);
        ui->labelTriown->setVisible(true);
        nom = ui->lineNom->text();
        prenom = ui->linePrenom->text();
        triOwn = prenom.left(1).toUpper() +nom.left(2).toUpper();
        ui->labelTriown->setText(triOwn);
    }

}




void MainWindow::on_buttonParcourir_clicked()
{
    QString texte;
    QString url = QFileDialog::getOpenFileName(this,tr("Chemin fichier"),"/Fichier",tr("Fichier(*.txt)"));

    QFile fichier(url);
    if(fichier.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream flux(&fichier);
        while(!flux.atEnd())
        texte += flux.readLine() + '\n';
        texte.resize(texte.size()-1); // Élimine le '\n' en trop
        ui->textColler->setText(texte);
        fichier.close();
    }
}

void MainWindow::on_buttonQuitter_clicked()
{
    exit(0);
}


QTextStream& qStdOut()
{
    static QTextStream ts( stdout );
    return ts;
}

void MainWindow::on_buttonCollerValider_clicked()
{
   QString texte = ui->textColler->toPlainText();
   QString resultat,resultatFinal;
   int tmpTesultatFinal;
   for(int i = 0; i < texte.length(); ++i)
   {
       if (texte[i]=="c")
       {
           resultat=texte[i];
           ++i;
           if(resultat=="ccccccc"){
               qStdOut() << resultat;
               tmpTesultatFinal=tmpTesultatFinal+1;
               resultatFinal=tmpTesultatFinal;
           }
           if(resultat=="cccccccc"){
               tmpTesultatFinal=tmpTesultatFinal+16;
           }
           if(resultat=="ccccccccc"){
               tmpTesultatFinal=tmpTesultatFinal+256;
           }
           if(resultat=="cccccccccc"){
               tmpTesultatFinal=tmpTesultatFinal+4096;
           }
           if(resultat=="ccccccccccc"){
               tmpTesultatFinal=tmpTesultatFinal+16384;
           }
           resultatFinal=tmpTesultatFinal;
       }

   }
   ui->labelResultat->setText(resultatFinal);
}
