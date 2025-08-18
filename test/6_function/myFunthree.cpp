#include<iostream>

using namespace std;

int globalChaiStock = 100;
void pourChai(int &cups){
    int test = 9;
    cups = cups + 5;

    cout << "Poured cups: " << cups << endl;
}



int main(){

    int Cups = 2;
    pourChai(Cups);
    cout << "Total cups are: " << Cups << endl;
    return 0;
}