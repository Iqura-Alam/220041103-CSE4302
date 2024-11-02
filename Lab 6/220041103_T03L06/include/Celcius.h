#ifndef CELCIUS_H
#define CELCIUS_H
class Kelvin;
class Farenheit;

class Celcius
{
    public:
        Celcius();
        Celcius(float t);
        void assign(float t);
        void display()const;
        operator Kelvin();
        operator Farenheit();

    protected:

    private:
        float temp;
};

#endif // CELCIUS_H
