#include "Celcius.h"
#include"Farenheit.h"
#include"Kelvin.h"
#include <iostream>
using namespace std;
class Farenheit;
class Kelvin;
Celcius::Celcius():temp(-273)
{

}
Celcius::Celcius(float t):temp(t)
{

}
void Celcius::assign(float t){
    temp=t;
}
void Celcius:: display()const{
    cout<<"The temperature is "<<temp<<" Celcius"<<endl;
}
Celcius::operator Farenheit(){
    return Farenheit((temp-32)*(5/9));
}
Celcius::operator Kelvin(){
    return Kelvin(temp+273.15);
}
