#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    string foods[SIZE];
    fill(foods, foods + (SIZE/2), "pizza");
    fill(foods + (SIZE/2),foods + SIZE, "Hamburger");

    for(string food : foods){
        cout << food << endl;
    }
    return 0;
}