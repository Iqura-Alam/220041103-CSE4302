#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include <iostream>

#include<string>
using namespace std;
class SavingsAccount
{
    public:
        SavingsAccount();
        virtual ~SavingsAccount();
        void setacc(string a);
        string getacc()const;
        void setint(float i);
        float getint()const;
        void setbalance(float a);
        float getbalance()const;
        float calculateInterest(int periodInMonths)const;
        void disburseInterest(int periodInMonths);
        void deposit(int amount);
        void withdrawal(int amount);
        void setadd(string str);
        string getadd()const;


    protected:

    private:
        string acc;
        string add;
        float yinterest;
        float currbalance;
        float minbalance;
};

#endif // SAVINGSACCOUNT_H
