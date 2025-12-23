#include <iostream>
using namespace std;


class Human{
    public:
    string name;
    string occupation;
    int age;

    void eat(){
        cout << "This person is eating\n";
    };
    void drink(){
        cout << "This person is drinking\n";
    };
    void sleep(){
        cout << "This person is sleeping\n";
    };
};
int main(){
    Human human1;
    Human human2;

    human1.name = "Manoda";
    human1.occupation = "Softwear Engineer";
    human1.age = 26;

    human2.name = "Nuraj";
    human2.occupation = "Tech Lead";
    human2.age = 28;

    cout << human1.name << endl;
    cout << human1.occupation << endl;
    cout << human1.age << endl;

    cout << human2.name << endl;
    cout << human2.occupation << endl;
    cout << human2.age << endl;

    // human1.eat();
    // human1.drink();
    // human1.sleep();

    human2.eat();
    human2.drink();
    human2.sleep();
    return 0;
}