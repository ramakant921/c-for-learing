#include<iostream>

using namespace std;

int main(){
    int chaiSales[3][7]= {
        {56,16,34,45,34,78,65}, //shop 1 sales for 7 days
        {76,43,71,98,94,32,54}, //shop 2 sales for 7 days
        {65,87,32,21,65,75,86}, //shop 3 sales for 7 days
    };

    for(int i = 0; i < 3; i++){
        cout << "I am at shop: " << i+1 << "\n" ;
        for (int j = 0; j < 7; j++){
            cout << chaiSales[i][j] << " cups \n";
        }
    }

    return 0;
}