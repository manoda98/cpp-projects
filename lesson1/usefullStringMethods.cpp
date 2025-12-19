#include<iostream>

int main(){
    using namespace std;

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    // if(name.length() > 12){
    //     cout << "Your name can't be over 12 characters\n";
    // } else {
    //     cout << "Welcome" << name << endl;
    // }

    // if(name.empty()){
    //     cout << "You didn't enter your name\n";
    // } else {
    //     cout << "Hello " << name << endl;
    // }

    // name.clear();

    // name.append("@gmail.com");

    // cout << "Your user name is : " << name;

    // cout << name.at(0);

    // name.insert(0, "@");
    // cout << name << endl;  
    cout << name.find(' ');


    return 0;



} 