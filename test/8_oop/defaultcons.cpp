#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string teaName;
    int servings;
    vector<string> ingredients;

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


    return 0;
}