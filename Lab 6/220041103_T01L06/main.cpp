#include <iostream>
#include<Counter.h>
using namespace std;

int main()
{
    Counter c1,c2(5),c3(5);
    c1=c2+c3;
    cout<<c1.getCount();

}
