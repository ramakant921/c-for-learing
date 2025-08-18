#include<iostream>

using namespace std;


void pourChai(int cups){
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl;
}

int main(){

    int Cups = 2;
    pourChai(Cups);
    cout << "Total cups are: " << Cups << endl;
    return 0;
}