#include <iostream>
#include "Kelvin.h"
#include "Celcius.h"
#include "Farenheit.h"

using namespace std;

int main()
{
    Celcius c(27);
    Farenheit f=c;
    Kelvin k=c;

    c.display();
    f.display();
    k.display();

    k.assign(20);
    k.display();

}
