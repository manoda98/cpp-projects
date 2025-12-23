#include<iostream>
using namespace std;

struct Car{
    string model;
    int year;
    string color;
};

void printCar(Car &car);
void paintCar(Car &car,string color);

int main(){
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Red";

    car2.model = "Premio";
    car2.year = 2020;
    car2.color = "White";

    paintCar(car1,"Silver");
    paintCar(car2,"Black");

    cout << &car1 << endl;
    printCar(car1);
    printCar(car2);

   

    return 0;
}

void printCar(Car &car){
    cout << &car << endl;
    cout << car.model << endl;
    cout << car.year << endl;
    cout << car.color << endl;
}
void paintCar(Car &car,string color){
    car.color = color;
}




