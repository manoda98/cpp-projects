#include <iostream>

int main() {
    using namespace std;

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout <<"********Number Guessing Game******\n";

    do
    {
        cout << "Enter Guess between 1-100: ";
        cin >> guess;
        tries++;

        if(guess > num) {
            cout << "Too high!\n";
        }else if(guess < num) {
            cout << "Too Low\n";
        }else{
            cout << "CORRECT! # of tries: " << tries << endl;
        }
    } while (guess != num);

    cout << "**************************************";
    
    return 0;
}