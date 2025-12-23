#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    double gpa;

    Student(string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    };
};

int main(){

    Student student1("Manoda", 25, 3.6);
    Student student2("Patric", 40, 2.6);

    // cout << student1.name << endl;
    // cout << student1.age << endl;
    // cout << student1.gpa << endl;

    cout << student2.name << endl;
    cout << student2.age << endl;
    cout << student2.gpa << endl;

    return 0;

}