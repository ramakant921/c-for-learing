#include<iostream>

using namespace std;

class BankAccount{
    private:
        string accoutnNumber;
        double balance;

    public:
        BankAccount(string accNum, double initialBalance){
            accoutnNumber = accNum;
            balance = initialBalance;
        }

        // getter
        double getBalance() const {
            return balance;
        }

        // Method to deposit money
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout << "Deposited: " << amount << endl;
            }else{
                cout << "invalid deposit amount";
            }
        }

        void withdraw(double amount){
            if (amount>0 && amount <= balance){
                balance -= amount;
            } else {
                cout << "Invalid withdraw amount" << endl;
            }
        }

};

int main(){

    BankAccount myAccount("2347236", 5000);

    myAccount.getBalance();

    myAccount.deposit(9000);
    myAccount.withdraw(4000);

    return 0;
}