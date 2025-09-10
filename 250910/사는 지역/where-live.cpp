#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_N 10

using namespace std;

int n;
string name[MAX_N], street_address[MAX_N], region[MAX_N];

class Person {
    public:
        string name;
        string street_address;
        string region;
    Person(string name, string street_address, string region) :
        name(move(name)), street_address(move(street_address)), region(move(region)) {}

    void printInfo() {
        cout << "name " << this->name << "\n";
        cout << "addr " << this->street_address  << "\n";
        cout << "city " << this->region << "\n";
    }
};

int main() {
    cin >> n;

    vector<Person> v;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> street_address[i];
        cin >> region[i];
        v.push_back(Person(name[i], street_address[i], region[i]));
    }

    sort(v.begin(), v.end(),
        [](const Person& a, const Person& b) {
            return a.name < b.name;
        });
        
    v[n-1].printInfo();
    // Please write your code here.

    return 0;
}