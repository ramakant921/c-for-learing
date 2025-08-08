#include <iostream>

using namespace std;

int main(){
    string userTea;
    string userCoffee;
    int teaQuantity;

    cout << " What would you like to order in tea? \n " ;
    getline(cin, userTea);
    cout << " What would you like to order in coffee? \n " ;
    getline(cin, userCoffee);

    // ask for quantity
    cout << " how many cup of " <<userTea<< " would you like to have? " ;
    cin >>  teaQuantity;

    cout <<  teaQuantity ;
    cout <<  userTea ;

    return 0;
}