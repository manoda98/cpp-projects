#include<iostream>
using namespace std;

void swap(string &x, string &y);
int main() {
    string x = "Coca Cola";
    string y = "water";

    swap(x, y);
    
    cout << "x: " << x <<endl;
    cout << "y: " << y <<endl;
    return 0;
}

void swap(string &x, string &y){
    string temp = x;
    x = y;
    y = temp;
}