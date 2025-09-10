#include <iostream>
#include <algorithm>
using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

class Person {
    public:
        string name;
        int height;
        int weight;
    Person(){}
    Person(string name, int height, int weight) :
        name(move(name)), height(height), weight(weight){}

    bool operator<(const Person& p) const {
        return height < p.height;
    }

    void printInfo() const {
        cout << name << " " << height << " " << weight << "\n";
    }
};

Person persons[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> height[i];
        cin >> weight[i];
        persons[i] = Person(name[i], height[i], weight[i]);
    }

    sort(persons, persons+n);

    for(int i = 0 ; i < n ; i++) persons[i].printInfo();

    // Please write your code here.

    return 0;
}