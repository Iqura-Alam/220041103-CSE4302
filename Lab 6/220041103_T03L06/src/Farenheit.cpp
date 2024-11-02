#include "Farenheit.h"
#include"Celcius.h"
#include"Kelvin.h"
#include <iostream>
using namespace std;
Farenheit::Farenheit():temp(496)
{
    //ctor
}
Farenheit::Farenheit(float t):temp(t)
{
    //ctor
}

void Farenheit::assign(float t){
    temp=t;
}
void Farenheit:: display(){
    cout<<"The temperature is "<<temp<<" Farenheit"<<endl;
}
Farenheit::operator Celcius(){
    return ((temp*9)/5) +32;
}
Farenheit::operator Kelvin(){
    float x;
    x=((temp*9)/5) +32;
    return x+273.15;
}
