#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

class Person {
    public:
        string name;
        int korean, english, math;
    Person(){}
    Person(string name, int korean, int english, int math) :
        name(move(name)), korean(korean), english(english), math(math){}
    
    bool operator<(const Person& p) {
        if(korean!=p.korean) return -korean < -p.korean;
        else if(english!=p.english) return -english < -p.english;
        else return -math < -p.math;
    }
    
    void printInfo() {
        cout << name << " " << korean << " " << english << " " << math << "\n";
    }
};

int main() {
    cin >> n;

    vector<Person> v;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];
        v.push_back(Person(name[i], korean[i], english[i], math[i]));
    }

    sort(v.begin(), v.begin()+n);

    for(int i = 0 ; i < n ; i++) {
        v[i].printInfo();
    }
    // Please write your code here.

    return 0;
}