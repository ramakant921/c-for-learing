#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<string>


using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};


void displayEmployee(const Employee& emp){
    cout << "ID: " << emp.id << " , Name:" << emp.name << " , Salary: $" << emp.salary << endl;
}

int main(){

    vector<Employee> employee = {
        {101, "Spodormon", 100000},
        {102, "Vidya", 50000},
        {103, "Max", 1000},
        {104, "Harry", 10000000},
        {105, "Ford", 500000},
    };

    sort(employee.begin(), employee.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary > e2.salary;
    });

    cout << "Employees sorted by salary -> Highest to lowest \n";
    for_each(employee.begin(), employee.end(),displayEmployee);

    vector<Employee> highEarners;

    copy_if(
        employee.begin(), 
        employee.end(), 
        back_inserter(highEarners), 
        [](const Employee& e){
        return e.salary > 50000;
    });

    cout << "Employees who are high earners \n";
    for_each(highEarners.begin(), highEarners.end(),displayEmployee);

    double totalSalary = accumulate(employee.begin(), employee.end(), 0.0, [](double sum, const Employee& e){
        return sum + e.salary;
    });

    double averageSalary = totalSalary / employee.size();

    auto highestPaid =  max_element(employee.begin(), employee.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary < e2.salary;
    });
    
    return 0;
}