#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;

    public:
        Chai(string name, int serve): teaName(name), servings(serve){}

        friend bool compareServings(const Chai &chai1, const Chai & chai2);

        void display() const {
            cout << "teaname: " << teaName << endl;
        }

};

bool compareServings(const Chai &chai1, const Chai &chai2){
    return chai1.servings > chai2.servings;
}

int main(){
    Chai masalaChai("Masala Chai", 4);
    Chai gingerChai("Ginger Chai", 3);

    gingerChai.display();
    masalaChai.display();

    if (compareServings(masalaChai,gingerChai)){
        cout << "Masala chai is having MORE serving" <<  endl;    
    } else {
        cout << "Masala chai is having LESS serving" << endl;
    }
    
    
}