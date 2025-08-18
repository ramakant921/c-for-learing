#include <iostream>

using namespace std;

int hello(){
    return 0;
}

int main(){

    // lambda
    auto preparedChai = [](int cups){
        cout << "Prepraing " << cups << " cups of tea" << endl; 
    };

    preparedChai(4);

    return 0;
}