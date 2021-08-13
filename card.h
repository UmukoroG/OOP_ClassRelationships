#ifndef CARD_H
#define CARD_H
using namespace std;
#include <string>

class Card{
    private:
        string name;
        string type;
        int pin;
        int acctNum;//student account or credit card acct
    public:
        Card();
        Card(string name,string type,int pin,int acctNum);//student account or credit card acct;
        string setName(string name);
        string getName();
        string setType(string type);
        string getType();
        int setPin(int pin);
        int getPin();
        int setAcctNum(int acctNum);
        int getAcctNum(); 
        void DisplayCard();

        
};

#endif