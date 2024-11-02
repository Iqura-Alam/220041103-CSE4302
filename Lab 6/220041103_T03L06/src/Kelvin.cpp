#include "Kelvin.h"
#include "Celcius.h"
#include"Farenheit.h"
#include <iostream>
using namespace std;
class Farenheit;
class Celcius;
Kelvin::Kelvin():temp(0)
{

}
Kelvin::Kelvin(float t):temp(t)
{

}
void Kelvin::assign(float t){
    temp=t;
}
void Kelvin:: display()const{
    cout<<"The temperature is "<<temp<<" Kelvin"<<endl;
}
Kelvin::operator Celcius(){
    return temp-273.15;
}
Kelvin::operator Farenheit(){
    float x;
    x=(temp-32)*(5/9);
    return x+273.15;
}
