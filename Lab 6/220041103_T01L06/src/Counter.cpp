#include "Counter.h"
#include<iostream>
using namespace std;
Counter::Counter():count(0),increment_step(1){

}
Counter::Counter(int v)
{
    count=0;
    if(v<0)
        increment_step=1;
    else
        increment_step=v;

    //ctor
}
void Counter::setIncrementStep(int step_value){
    if(count==0){
        if(step_value>=0)
            increment_step=step_value;
    }
    else
        cout<<"Cannot set the increment step"<<endl;

}
int Counter::getCount()const{
    return count;
}
void Counter::increment(){
    count=count+increment_step;
}
void Counter::resetCount(int step){
    count=0;
    increment_step=step;
}
Counter Counter::operator +(const Counter &obj) const{
    Counter ans;
    if(increment_step==obj.increment_step){
        ans.count=count+obj.count;
        ans.increment_step=increment_step;
    }
    else
        cout<<"Increment Step is not same"<<endl;
    return ans;
}
bool Counter::operator >(const Counter &obj) const{
    return count>obj.count;
}
bool Counter::operator <(const Counter &obj) const{
    return count<obj.count;
}
bool Counter::operator >=(const Counter &obj) const{
    return count>=obj.count;
}
bool Counter::operator <=(const Counter &obj) const{
    return count<=obj.count;
}
bool Counter::operator ==(const Counter &obj) const{
    return count==obj.count;
}
bool Counter::operator !=(const Counter &obj) const{
    return count!=obj.count;
}
Counter Counter::operator +=(const Counter &obj){
    count=count+obj.count;
    return *this;
}
Counter Counter::operator ++(){
    count++;
    return *this;
}
Counter Counter::operator ++(int){
    return Counter(count++);
}
