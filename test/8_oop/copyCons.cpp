#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string* teaName;
    int servings;
    vector<string> ingredients;

    //parameter constructor
    Chai(string name, int serve, vector<string> ingredient){
        teaName = new string("lemon tea");
        servings = serve;
        ingredients = {"water,", "tealeave,","sugar,", "ginger"};
        cout << "spodormon construtor called" << endl;
    }

    Chai(Chai& other){
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingredients = other.ingredients;
        cout << "Copy constructor called" << endl; 
    }

    ~Chai(){
        delete teaName;
        cout << "Destructor called" << endl;
    }

    void displayChaiDetails(){
        cout << "Tea name: " << *teaName << endl;
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
    // lemonTea.displayChaiDetails();

    // copy the object
    Chai copiedChai = lemonTea;
    // copiedChai.displayChaiDetails();

    *lemonTea.teaName = "Modified Lemon tea";

    cout << "Lemon tea --------" << endl;
    lemonTea.displayChaiDetails();
    cout << "Copied Lemon tea ----------" << endl;
    copiedChai.displayChaiDetails();

    return 0;
}