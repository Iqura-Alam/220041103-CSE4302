#include <iostream>
#include<Employee.h>
#include<string>

using namespace std;

int main()
{   Employee e1, e2;
    e1.setinfo();
    e2.setinfo();

    Employee e;
    e=e1.compareAge(e2);
    e.getinfo();

    return 0;
}
