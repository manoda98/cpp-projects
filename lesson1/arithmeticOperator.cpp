#include <iostream>

int main(){
    //arithmetic operators = return the result of a specific srithmetic operation(+ - * /)
    //parenthesis=>multiplication=>division=>addition=>subtraction
    //int students = 6 - 5 + 4 * 3 / 2; //7
    int students = 6 - (5 + 4) * 3 / 2; //-7
    // students = students + 1;
    // students+=1;
    // students++;

    // students = students -1;
    // students-=2;
    // students--;

    // students = students * 2;
    // students*=2;

    // students = students / 2;
    // students/=2;

    // int reminder = students % 3;

    std::cout << students << '\n';
    // std::cout << reminder;
    return 0;
}