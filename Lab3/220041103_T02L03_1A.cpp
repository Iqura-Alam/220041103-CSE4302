#include<iostream>
using namespace std;
class Temperature{
private:
    double temp_value;
    string unit;
public:
    Temperature():temp_value(0), unit("Celsius") {
    }
    void assign(double value, string u){
        if (u!= "Celsius" && u!= "Fahrenheit" && u!= "Kelvin") {
            cout << "Invalid unit" << endl;
            return;
        }
        if (u== "Celsius" && value< -273.15) {
            cout << "Temperature value is below absolute zero in Celsius" << endl;
            return;
        }
        if (u== "Fahrenheit" && value< -459.67) {
            cout << "Temperature value is below absolute zero in Fahrenheit" << endl;
            return;
        }
        if (u== "Kelvin" && value < 0) {
            cout << "Temperature value is below absolute zero in Kelvin" << endl;
            return;
        }
        temp_value=value;
        unit=u;
    }
    double convert(string target){
         if (target!= "Celsius" && target!= "Fahrenheit" && target!= "Kelvin") {
            cout << "Invalid target unit" << endl;
            return 0;
        }
        double res=temp_value;
        if (unit == "Celsius") {
            if (target== "Fahrenheit") {
                res = temp_value * 9.0/5.0 + 32;
            } else if (target == "Kelvin") {
                res = temp_value + 273.15;
            }
        } else if (unit == "Fahrenheit") {
            if (unit == "Celsius") {
                res = (temp_value - 32) * 5.0/9.0;
            } else if (target== "Kelvin") {
                res = (temp_value - 32) * 5.0/9.0 + 273.15;
            }
        } else if (unit == "Kelvin") {
            if (target== "Celsius") {
                res = temp_value - 273.15;
            } else if (target == "Fahrenheit") {
                res= (temp_value - 273.15) * 9.0/5.0 + 32;
            }
        }
        return res;

    }
    void print() const{
        cout<<"The temperature is "<<temp_value<<" "<<unit<<endl;
    }
};
int main(){
    Temperature t;
    t.assign(100.0, "Celsius");
    t.print();
    cout<<"Converted to Fahrenheit: "<<t.convert("Fahrenheit")<<endl;
    t.assign(-200.0,"Kelvin");
}
