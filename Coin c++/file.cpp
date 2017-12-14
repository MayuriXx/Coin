#include <iostream>
#include <fstream>
#include "file.h"

using namespace std;

file file::m_instance=file();

file::file()
{

}

file::~file()
{
}

file& file::Instance()
{
    return m_instance;
}

void file::printToken(std::string token, std::string valeur){
    ofstream file("/Users/mayurixx/Desktop/listeCoin.txt", ios::app);  //déclaration du flux et ouverture du fichier
    if(file)  // si l'ouverture a réussi
    {
        // instructions
        file << token << "  -------  " << valeur << endl;
        file.close();  // on referme le fichier
    }
    else  // sinon
        cerr << "Erreur l'ouverture du fichier de sauvegarde !" << endl;
}
