//Namespace = provides a solution for preventing name conflicts
    //in large projects. each entity needs a unique name.
    // a namespace allows for identically named entities as long as the namespaces are different.

    #include <iostream>

    namespace first{
        int x = 10;
    }
    namespace second{
        int x = 2;
    }

    int main(){
        using namespace std;

        string name = "Manoda";
        cout << "Hello " << name;

        return 0;
    }