#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    //parameter constructor
Chai(string nmae, int serve, vector<string> ingredient){
    teaName = "lemon tea";
    servings = serve;
    ingredients = {"water,", "tealeave,","sugar,", "ginger"};
    cout << "construtor called" << endl;
}

    void displayChaiDetails(){
        cout << "Tea name: " << teaName << endl;
        cout << "Serving: " << servings << endl;
        cout << "Ingredients: " ;
        for(string ingredient : ingredients){
            cout << ingredient << " ";
        }
        cout << endl;
    }

};

int main(){
    Chai lemonTea("lemon tea", 2, {"water","lemon","honey"});

    
    lemonTea.displayChaiDetails();

    return 0;
}