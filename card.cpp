#include <iostream>
using namespace std;
#include "card.h"

Card::Card(){
    name="";
    type="";
    pin=0;
    acctNum=0;
}

Card::Card(string Name,string Type,int Pin,int AcctNum){
    name=Name;
    type=Type;
    pin=Pin;
    acctNum=AcctNum;
}

string Card::setName(string Name){
    name=Name;
}

string Card::getName(){
    return name;
}

string Card::setType(string Type){
    type=Type;
}

string Card::getType(){
    return type;
}

int Card::setPin(int Pin){
    pin:Pin;
}

int Card::getPin(){
    return pin;
}

int Card::setAcctNum(int AcctNum){
    acctNum=AcctNum;
}

int Card::getAcctNum(){
    return acctNum;
}


void Card::DisplayCard(){
    if(name!="" && type!="" && (pin!=0 &&  pin<=1000) && acctNum!=0){
        //checks whether to prints card Info with no input
        cout<<"Card Name: "<<name<<endl
        <<"Card type: "<<type<<endl
        <<"PIN: "<<pin<<endl
        <<"Account Number: "<<acctNum<<endl;
    }
}
