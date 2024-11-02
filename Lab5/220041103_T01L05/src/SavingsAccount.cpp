#include "SavingsAccount.h"
#include <iostream>

#include<string>
SavingsAccount::SavingsAccount(): currbalance(0.0),minbalance(0.0),yinterest(0.0), acc(""), add("")
{
    //ctor
}

SavingsAccount::~SavingsAccount()
{
    //dtor
}
string SavingsAccount::getacc()const
{
    return acc;
}
void SavingsAccount::setacc(string a)
{
    acc=a;
}


void SavingsAccount:: setint(float i)
{
    yinterest=i;
}
float SavingsAccount::getint()const
{
    return yinterest;
}
void SavingsAccount:: setadd(string str)
{
    add=str;
}
string SavingsAccount::getadd()const
{
    return add;
}
void SavingsAccount::setbalance(float a)
{
    currbalance=a;
    if(currbalance<minbalance)
        minbalance=currbalance;
}
float SavingsAccount::getbalance()const
{
    return currbalance;
}
float SavingsAccount::calculateInterest(int periodInMonths)const
{
    float mint;
    mint=yinterest/12;
    return minbalance*mint*periodInMonths;
}
void SavingsAccount::disburseInterest(int periodInMonths)
{
    int i=calculateInterest(periodInMonths);
    deposit(i);
    minbalance=currbalance;
}
void SavingsAccount::deposit(int amount)
{
    if(amount>0)
        currbalance+=amount;
}
void SavingsAccount::withdrawal(int amount)
{
    if(currbalance-amount>0)
        currbalance=currbalance-amount;
    if(currbalance<minbalance)
        minbalance=currbalance;

}
