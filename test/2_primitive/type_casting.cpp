#include <iostream>

using namespace std;

int main(){

    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;

    int teaQuantity = 5;
    double totalPrice = teaPrice * teaQuantity;

    cout << totalPrice <<endl;

    return 0;
}