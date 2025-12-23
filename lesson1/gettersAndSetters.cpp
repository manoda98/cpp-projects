#include <iostream>
using namespace std;

class Stove{
    private:
        int temperature = 0;

    public:

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }else if(temperature >= 10){
            this->temperature = 10;
        }else{
            this->temperature = temperature;
        }
    }

};

int main(){

    Stove stove;

    stove.setTemperature(10000);

    cout << "The temperature setting is: " << stove.getTemperature()<<endl;

    return 0;
}