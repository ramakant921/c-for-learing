#include<iostream>
#include<vector>

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Chai(){
            teaName = "Unknown tea";
            servings = 1;
            ingredients = {"water","sugar"};
        }

        Chai(string name, int serve, vector<string> ingre){
            teaName = name;
            servings = serve;
            ingredients = ingre;
        };

        // getter
        string getTeaName(){
            return teaName;
        }

        // setter
        void setTeaName(string name){
            // logic
            teaName = name;
        }

        // getter for serving
        int getServing(){
            return servings;
        }

        // setter for serving
        void setServings(int serve){
            servings = serve;
        }

        // getter for ingre
        vector<string> getIngredients(){
            return ingredients;
        }

        // setter for ingre
         void setIngredients(vector<string> ingre){
            ingredients = ingre;
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
    Chai chai;
    chai.setTeaName("Ginger Tea");
}