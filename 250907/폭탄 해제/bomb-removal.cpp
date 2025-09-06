#include <iostream>
#include <string>

using namespace std;

string unlock_code;
char wire_color;
int seconds;

class Bomb {
    public:
        string unlock_code;
        char wire_color;
        int seconds;
    Bomb(string unlock_code, char wire_color, int seconds) :
        unlock_code(move(unlock_code)), wire_color(move(wire_color)), seconds(move(seconds)){}
    Bomb(){}

    void printInfo() {
        cout << "code : " << this->unlock_code << "\n";
        cout << "color : " << this->wire_color << "\n";
        cout << "second : " << this->seconds << "\n";
    }
};

int main() {
    cin >> unlock_code >> wire_color >> seconds;

    // Please write your code here.

    Bomb bomb(unlock_code, wire_color, seconds);
    bomb.printInfo();
    return 0;
}