#include <iostream>
#include <sstream>
#include <ctime>
#include "sha1.h"

#ifndef COIN_H
#define COIN_H

using namespace std;
class Coin
{
    public:
        Coin();
        virtual ~Coin();
        string nonce;
        string triOwn;
        string proto;
        string time;
        string reserved;
        int random(int,int);
        string dateString(time_t);
        void updateTime();
        bool isKoin();
        void updateNonce();
        string updateToken();

    protected:

    private:
};

#endif // COIN_H
