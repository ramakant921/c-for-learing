// returnType function Name(parameters){
    // function body
// }
// void
#include <iostream>
using namespace std;
int checkTemperature(int temperature){
    return temperature;
}

// declaration of function
void serveChai(int cups);


void makeChai(){
    cout << " degree Boiling water, adding tea leaves, straining...";
}

void serveChai(string teaType = "Masala Tea"){
    int cups = 4;
    cout<< " Serving " << teaType << endl;
}

void serveChai(int cup, int teaLeaves){

}

int main(){
    int temp = checkTemperature(78);
    // cout << temp;
    // makeChai(); //calling a function
    // serveChai(3);
    serveChai();
    return 0;
}

// definition of funtion
void serveChai(int cups){
    cout << " Serving " << cups << " of chai";
}