#include <iostream>
#include <string>

using namespace std;

string product_name;
int product_code;

class Item {
    public:
        string product_name;
        int product_code;
    
    Item(string product_name, int product_code) :
        product_name(move(product_name)), product_code(move(product_code)){}
    Item(){}

    void printInfo() {
        cout << "product " << this->product_code << " is " << this->product_name << "\n";
    }
};

int main() {
    cin >> product_name >> product_code;

    // Please write your code here.
    Item items[2];
    items[0].product_name = "codetree";
    items[0].product_code = 50;
    items[1] = Item(product_name, product_code);
    
    for(int i = 0 ; i < 2 ; i++) {
        items[i].printInfo();
    }

    return 0;
}