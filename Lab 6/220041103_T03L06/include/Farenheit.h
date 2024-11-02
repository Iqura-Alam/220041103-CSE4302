#ifndef FARENHEIT_H
#define FARENHEIT_H
class Celcius;
class Kelvin;

class Farenheit
{
    public:
        Farenheit();
        Farenheit(float t);
        void assign(float t);
        void display();
        operator Celcius();
        operator Kelvin();

    protected:

    private:
        float temp;
};

#endif // FARENHEIT_H
