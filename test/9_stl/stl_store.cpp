#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<set>
#include<map>
#include<string>
#include<ctime>
#include<unordered_set>
#include<unordered_map>


using namespace std;

struct Product {
    int productID;
    string name;
    string category;
};

struct Order{
    int orderID;
    int ProductID;
    int Quantity;
    string customerID;
    time_t orderdate;
};

int main(){
    vector<Product> products = {
        {101,"Laptop","Electronic"},
        {102,"Smart Phone","Electronic"},
        {103,"Coffee Maker","Kitchen"},
        {104,"Blender","Kitchen"},
        {105,"Desk lamp","Home"},
    };

    deque<string> recentCustomer = {"C001","C002","C003",};

    recentCustomer.push_back("C004");
    recentCustomer.push_front("C004");

    list<Order> orderHistory;

    orderHistory.push_back({1, 101, 1,"C001", time(0)});
    orderHistory.push_back({2, 102, 2,"C002", time(0)});
    orderHistory.push_back({3, 103, 1,"C003", time(0)});

    set<string> categories;
    for(const auto &product: products){
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 15},
        {103, 20},
        {104, 25},
        {105, 5},
    };

    multimap<string, Order> customerOrders;
    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"C001","Alice"},
        {"C002","Spodormon"},
        {"C003","Max"},
        {"C004","Vidya"},
        {"C005","Harry"},
    };

    unordered_set<int> uniqueProductIDs;

    for(const auto &product: products){
        uniqueProductIDs.insert(product.productID);
    }


    return 0;
}