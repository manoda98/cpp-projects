#include <iostream>

int main() {

    //integer (whole number)
    int age = 21;
    int year = 2025;
    int days = 7.5;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 3.8;
    double temperature = 25.5;

    //single character 
    char grade = 'A';
    char initial = 'C';

    //boolean (true or false)
    bool student = false;

    //string (object that represents a sequence of text)
    std::string name = "Manoda";

    // std::cout << name << '\n';
    // std::cout << days << '\n';
    // std::cout << price << '\n';
    // std::cout << initial << '\n';


    //The const keyword specifies that a variable's value is constant
    //tells the compiler to prevent anything from modifying it
    //(read only)

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;



    

    return 0;
}