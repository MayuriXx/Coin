#include <iostream>
#include "coin.h"
#include "file.h"
#include "sha1.h"

using namespace std;

int main()
{
    srand(time(NULL));
    file& ptr1=file::Instance();
    string token;
    Coin c = Coin();
    while(true)
    {
        token = c.updateToken();
        if (c.isKoin())
        {
            ptr1.printToken(token,sha1(token));
        }
    }
    return 0;
}
