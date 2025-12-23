#include <iostream>
using namespace std;

class Car{
    public:
        string make;
        string model;
        int year;
        string color;

        Car(string make, string model, int year, string color){
            this->make = make;
            this->model = model;
            this->year = year;
            this->color = color;
        }
};

int main(){
    Car car1("Chevy", "Corvette", 2020, "Blue");

    cout << car1.make << endl;
    cout << car1.model << endl;
    cout << car1.year << endl;
    cout << car1.color << endl;

    return 0;
}