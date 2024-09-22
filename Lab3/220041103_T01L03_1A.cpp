#include<iostream>
using namespace std;

class Counter{
private:
    int count;
    int incrementStep;
public:
    Counter(): count(0), incrementStep(1){

    }
    void setIncrementStep(int x){
        incrementStep=x;
    }
    int getCount() const{
        return count;
    }
    void increment(){
        count+=incrementStep;
    }
    void resetCount(){
        count=0;
    }

};
int main(){
    Counter c;
    c.setIncrementStep(5);
    cout<<"Initial value: "<<c.getCount()<<endl;
    c.increment();
    cout<<"After 1st increment: "<<c.getCount()<<endl;
    c.increment();
    cout<<"After 2nd increment: "<<c.getCount()<<endl;
    c.resetCount();
    cout<<"After reset: "<<c.getCount()<<endl;


}
