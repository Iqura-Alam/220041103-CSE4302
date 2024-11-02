#include "Coordinate.h"
#include<iostream>
#include<cmath>
using namespace std;
Coordinate::Coordinate():abscissa(0),ordinate(0)
{
    //ctor
}
Coordinate::Coordinate(float f1, float f2): abscissa(f1), ordinate(f2){

}
Coordinate::~Coordinate(){};
void Coordinate::display(){
    cout<<abscissa<<", ";
    cout<<ordinate<<endl;
}
float Coordinate:: operator -(Coordinate c){
    return sqrt(pow(abscissa-c.abscissa,2)+pow(ordinate-c.ordinate,2));
}
float Coordinate::getDistance() const{
    return sqrt(pow(abscissa,2)+pow(ordinate,2));
}
void Coordinate::move_x(float val){
    abscissa=abscissa+val;
}
void Coordinate::move_y(float val){
    ordinate=ordinate+val;
}
void Coordinate::move(float x_val, float y_val){
    abscissa=abscissa+x_val;
    ordinate=ordinate+y_val;
}
bool Coordinate::operator >(const  Coordinate &obj) const{
    return getDistance()>obj.getDistance();
}
bool  Coordinate::operator <(const  Coordinate &obj) const{
    return getDistance()<obj.getDistance();
}
bool  Coordinate::operator >=(const  Coordinate &obj) const{
    return getDistance()>=obj.getDistance();
}
bool  Coordinate::operator <=(const  Coordinate &obj) const{
    return getDistance()<=obj.getDistance();
}
bool  Coordinate::operator ==(const  Coordinate &obj) const{
    return getDistance()==obj.getDistance();
}
bool  Coordinate::operator !=(const Coordinate &obj) const{
    return getDistance()!=obj.getDistance();
}
void Coordinate::setx(int v){
    abscissa=v;
}
void Coordinate::sety(int v){
    ordinate=v;
}
