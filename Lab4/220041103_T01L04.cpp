#include<iostream>
using namespace std;
class Calculator{
private:
    int current;
    int getcurrent() const{
        return current;
    }
    void setcurrent(int value){
        current=value;
    }
public:
    Calculator(): current(0){}
    Calculator(int x): current(x){}

    void add(int value){
         setcurrent(current+value);
    }
    void subtract(int value){
         setcurrent(current-value);
    }
    void multiply(int value){
        setcurrent(current*value);
    }
    int divideBy(int value){
        if(value==0){
            cout<<"Invalid arithmetic operation"<<endl;
            return -1;
        }
        setcurrent(current/value);
        return current%value;
    }
    void clear(){
        setcurrent(0);
    }
    void display() const{
        cout<<"Calculator display: "<<current<<endl;
    }
    ~Calculator(){
        cout<<"Destructor of the Calculator object is called."<<endl;
    }

};

int main(){
    Calculator cal;
    cal.display();
    cal.add(10);
    cal.display();
    cal.add(7);
    cal.display();
    cal.multiply(31);
    cal.display();
    cal.subtract(42);
    cal.display();
    cal.divideBy(7);
    cal.display();
    cal.divideBy(0);
    cal.display();
    cal.add(3);
    cal.display();
    cal.clear();
    cal.display();

}
