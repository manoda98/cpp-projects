#include<iostream>
using namespace std;

int main(){
    string name = "Manoda";
    int age = 27;

    string freePizza[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizza = freePizza;

    cout << *pName << endl;
    cout << *pAge << endl;
    cout << *pFreePizza << endl;
    
    return 0;
}