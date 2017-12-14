
#ifndef COINCOIN_FICHIER_H
#define COINCOIN_FICHIER_H


class file
{
public:
    static file& Instance();
    void printToken(std::string token, std::string valeur);
private:
    file (const file&){}

    static file m_instance;
    file();
    ~file();
};


#endif //COINCOIN_FICHIER_H
