#include<iostream>

using namespace std;

int main(){
    int chaiTemperature[5] = {67, 78, 89, 69, 56};

    cout << "Chai temperature: " ;
    for(int i = 0 ; i <= 5 ; i++){
        cout << chaiTemperature[i]  << " degree C \n";
    }

    return 0;
}