#include <iostream>
#include "Coordinate.h"
#include<cmath>
using namespace std;


void randomAssignment(Coordinate c[], int size){
    for(int i=0;i<size;i++){
        c[i].setx(rand());
        c[i].sety(rand());
    }
}

void sort(Coordinate c[], int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(c[i].getDistance()>c[j].getDistance()){
                swap(c[i],c[j]);
            }
        }
    }
}
void highest(Coordinate c[], int size){
    Coordinate temp1;
    Coordinate temp2;
    float maxm=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            float x=c[i]-c[j];
            if(x>maxm){
                maxm=x;
                temp1=c[i];
                temp2=c[j];
            }
        }
    }
    temp1.display();
    temp2.display();

}
void lowest(Coordinate c[], int size){
    Coordinate temp1;
    Coordinate temp2;
    float minm=999999;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            float x=c[i]-c[j];
            if(x<minm){
                minm=x;
                temp1=c[i];
                temp2=c[j];
            }
        }
    }
    temp1.display();
    temp2.display();
}

int main(){
    Coordinate coord[10];
    randomAssignment(coord,10);
    highest(coord,10);
    lowest(coord,10);
}
