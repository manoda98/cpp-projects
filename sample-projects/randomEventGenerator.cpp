#include<iostream>
#include<ctime>

int main(){
    using namespace std;

    srand(time(0));

    int randNum = rand() % 5 +1;

    switch (randNum){
        case 1: cout << "You win a bumper sticker!\n";
            break;
        case 2: cout << "You win a t-shirt!\n";
            break;
        case 3: cout << "You win a free lunch!\n";
            break;
        case 4: cout << "You win a mug!\n";
            break;
        case 5: cout << "You win a pen drive!\n";
            break;
    }

    return 0;

}