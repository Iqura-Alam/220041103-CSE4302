#include <iostream>
#include<SavingsAccount.h>
using namespace std;

void EditInformationByKeyboard(SavingsAccount &s)
{
    string str;
    float f;
    int b;
    cout<<"Enter account name: "<<endl;
    cin.ignore();
    getline(cin, str);

    cout<<"Enter yearly interest rate: "<<endl;
    cin.ignore();
    cin>>f;

    cout<<"Enter current balance: "<<endl;
    cin.ignore();
    cin>>b;
    s.setbalance(b);
    s.setacc(str);
    s.setint(f);

}


void ShowInterestAll(SavingsAccount ar[])
{
    int period;
    cin>>period;

    cout<<"Confirm? press y to confirm"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y')
    {
        for(int i=0; i<100; i++)
        {
            ar[i].disburseInterest(period);
            cout<<"Acc Name: "<<ar[i].getacc()<<endl;
            cout<<"Interest: "<<ar[i].calculateInterest(period)<<endl;
        }


    }


    else
        cout<<"Disbursement not done"<<endl;
}
void ShowAllAlphabetically(SavingsAccount ar[]){


    for (int i = 0; i < 100; i++) {
        for (int j = i+1; j < 100; j++) {
            if (ar[j].getacc() < ar[i].getacc()) {
                swap(ar[i], ar[j]);
            }
        }
    }
     for (int i = 0; i < 100; i++) {
        cout << "Account Name: " << ar[i].getacc() << ", Current Balance: " << ar[i].getbalance() << endl;
     }
}
void generateInformationRandom(SavingsAccount& s)
{

    string word[10]= {"a","b","c","d","e","f","g","h","i","j"};
    string name=word[rand()%10] +" "+word[rand()%10];
    string address = word[rand() % 10] + " " + word[rand() % 10] + " " + word[rand() % 10] + " " + word[rand() % 10];

    double rate=2.0+(rand()%40) * 0.1;

    double balance=1000+ rand()%4000;


    s.setacc(name);
    s.setadd(address);
    s.setbalance(balance);
    s.setint(rate);



}

int main()
{
   SavingsAccount a[100];
    for(int i=0;i<5;i++){
        EditInformationByKeyboard(a[i]);
    }
    for(int i=5;i<100;i++){
        generateInformationRandom(a[i]);
    }
    ShowInterestAll(a);
    ShowAllAlphabetically(a);

    return 0;
}
