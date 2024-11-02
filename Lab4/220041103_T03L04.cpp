#include<iostream>
using namespace std;

class BankAccount {
private:
    int acc_num;
    string acc_holder;
    string acc_type;
    double current_balance;
    const double min_balance;

    static int totalacc;
    static int active;
    static double totaltax;

public:
    BankAccount(int n, string name, string type, double curr, double min)
        : acc_num(n), acc_holder(name), acc_type(type), current_balance(curr), min_balance(min) {
        totalacc++;
        active++;
    }

    void show_all() const {
        cout << "Account number: " << acc_num << endl;
        cout << "Account holder name: " << acc_holder << endl;
        cout << "Account type: " << acc_type << endl;
        cout << "Account current balance: " << current_balance << endl;
    }

    void showBalance() const {
        cout << "Account current balance: " << current_balance << endl;
    }

    void deposit(int x) {
        if (x <= 0)
            cout << "Invalid" << endl;
        else
            current_balance = current_balance + x;
    }

    void withdrawal(int x) {
        if ((current_balance - x) < min_balance || x > current_balance) {
            cout << "Invalid" << endl;
        } else
            current_balance = current_balance - x;
    }

    void giveInterest() {
        double interest = current_balance * 0.03;
        current_balance = current_balance + interest;
        totaltax += 0.1 * interest;
        current_balance = current_balance - totaltax;
    }

    double getBalance() const {
        return current_balance;
    }

    static int getacc() {
        return totalacc;
    }

    static int getactive() {
        return active;
    }

    static double gettax() {
        return totaltax;
    }

    ~BankAccount() {
        cout << "Account of " << acc_holder << " with account no " << acc_num
             << " is destroyed with a balance BDT " << current_balance << endl;
        active--;
    }
};
int BankAccount::totalacc = 0;
int BankAccount::active = 0;
double BankAccount::totaltax = 0.0;

void display_stat(){
    cout << "Total number of accounts: " << BankAccount::getacc() << endl;
    cout << "Total number of active accounts: " << BankAccount::getactive() << endl;
    cout << "Total amount of source tax: " << BankAccount::gettax() << endl;
}

BankAccount Larger(const BankAccount A, const BankAccount B) {
    if (A.getBalance() > B.getBalance())
        return A;
    else
        return B;
}

int main() {

    BankAccount acc(103, "Roza", "Savings", 5.00, 2.00);
    acc.show_all();
    acc.deposit(10);
    display_stat();
}
