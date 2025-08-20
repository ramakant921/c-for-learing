#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        // deligation contructor

        Chai(string name) : Chai(name, 1, {"water","tea leaves"}){}

        // Main Constructor
        Chai(string name, int serve, vector<string> ingre){
            teaName = name;
            servings = serve;
            ingredients = ingre;

            cout << "Main Constructor called!" << endl;
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
    Chai quickChai("Quick chai");
    quickChai.displayChaiDetails();

    return 0;
}