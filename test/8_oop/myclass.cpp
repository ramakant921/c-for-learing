#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public:
    // data member(attribute)
    string teaName; //name of the tea
    int serving; //Number of serving
    vector<string> ingredients; //list of ingredients for the tea

    //Member function

    void displayChaiDetails(){
        cout << "Tea name: " << teaName << endl;
        cout << "Serving: " << serving << endl;
        cout << "Ingredients: " ;
        for(string ingredient : ingredients){
            cout << ingredient << " ";
        }
        cout << endl;
    }

};

int main(){
    Chai chaiOne;

    chaiOne.teaName = "lemon tea";
    chaiOne.serving = 2;
    chaiOne.ingredients= {"water","lemon","honey","tea"};
    
    chaiOne.displayChaiDetails();

    Chai chaiTwo;
    chaiTwo.teaName = "Masala chai";
    chaiTwo.serving = 4;
    chaiTwo.ingredients = {"water","lemon","honey","tea","milk","tea leave"};

    chaiTwo.displayChaiDetails();

    return 0;
}