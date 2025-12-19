#include<iostream>
using namespace std;

int main(){
    //using for loop
        // string students[] = {"Mano","Nura","Anne"};
        
        // for(int i = 0; i < sizeof(students)/sizeof(string); i++ ){
        //     cout << students[i] << endl;
        // }

    //using for each loop

    string students[] = {"Mano","Nura","Anne"};
    for(string student : students){
        cout << student << endl;
    }

    return 0;
}