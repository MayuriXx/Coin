#include "coin.h"

using namespace std;

int Coin::random(int a, int b){
    return(rand()%b+a);
}

string Coin:: dateString(time_t t){

    stringstream s;
    s <<t;
    return s.str();
}

void Coin:: updateTime(){

    time_t t = std::time(nullptr);
    this->time=dateString(t);

}

Coin::Coin()
{
    this->nonce="--------------------------------";
    this->triOwn = "EMA";
    this->proto = "CC1.0";
    this->time = "";
    this-> reserved = "0f0f0f";
    for(int i=0;i<=32;++i){
        this->nonce[i] = random(33,94);
    }
    updateTime();
}


bool Coin::isKoin(){
    int i = 0;
    string tokenValue =(sha1(this->nonce + "-" + this->triOwn + "-" + this->proto + "-" + this->time + "-" + this->reserved));
    while (tokenValue[i] == 'c'){
        i++;
    }

    if(i >= 7){
        cout << "Coin ! : " << i << "c" << endl;
        return true;
    }
    return false;
}

void Coin::updateNonce() {
    this->nonce[random(0,32)] = random(33,94);
    this->nonce[random(0,32)] = random(33,94);
    this->nonce[random(0,32)] = random(33,94);
    this->nonce[random(0,32)] = random(33,94);
}


Coin::~Coin()
{
    //dtor
}

string Coin::updateToken(){

    updateTime();
    updateNonce();
    return this->nonce + "-" + this->triOwn + "-" + this->proto + "-" + this->time + "-" + this->reserved;
}
