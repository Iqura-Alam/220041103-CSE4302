#ifndef KELVIN_H
#define KELVIN_H
#include <iostream>
class Farenheit;
class Celcius;
class Kelvin
{
    public:
        Kelvin();
        Kelvin(float t);
        void assign(float t);
        void display()const;
        operator Celcius();
        operator Farenheit();

    protected:

    private:
        float temp;
};

#endif // KELVIN_H
