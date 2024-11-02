#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
#include <iostream>

using namespace std;

class Employee
{
public:
    Employee();
    void setname(string n);
    string getname()const;
    void setdob(string n);
    string getdob()const;
    void setsalary(int n);
    int getsalary()const;
    void setinfo();
    void getinfo() const;
    Employee compareAge(Employee e2);

protected:

private:
    string name;
    string dob;
    int salary;
};

#endif // EMPLOYEE_H
