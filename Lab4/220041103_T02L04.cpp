#include<iostream>
using namespace std;
class Flight{
private:
    int flight_no;
    string destination;
    float distance;
    float max_fuel;

    double CalFuel(){
        if(distance<=1000)
            return 500;
        else if(distance>1000 && distance<=2000)
            return 1100;
        else
            return 2200;
    }
public:
    void FeedInfo(){
        cout<<"Enter flight number: "<<endl;
        cin>>flight_no;
        cout<<"Enter destination: "<<endl;
        cin.ignore();
        cin>>destination;
        cout<<"Enter distance: "<<endl;
        cin>>distance;
        cout<<"Enter max fuel capacity: "<<endl;
        cin>>max_fuel;

    }
    void ShowInfo(){
        cout<<"Flight number is "<<flight_no<<endl;
        cout<<"Destination is "<<destination<<endl;
        cout<<"Distance is "<<distance<<endl;
        cout<<"Max fuel capacity is "<<max_fuel<<endl;
        if(CalFuel()<=max_fuel){
            cout<<"Fuel capacity is fit for this flight distance"<<endl;
        }
        else
            cout<<"Not sufficient Fuel Capacity for this flight."<<endl;
    }

};
int main(){
    Flight f;
    f.FeedInfo();

    f.ShowInfo();
}
