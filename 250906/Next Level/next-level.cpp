#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;

class Character {
    public:
        string user2_id;
        int user2_level;
    
        // Character(string user2_id, int user2_level) {
        //     this->user2_id = user2_id;
        //     this->user2_level = user2_level;
        // 

        Character(string user2_id, int user2_level) 
            : user2_id(user2_id), user2_level(user2_level) {}

        void printInfo() {
            cout << "user " << this->user2_id << " " << "lv " << this->user2_level << "\n";
        }
};

int main() {
    cin >> user2_id >> user2_level;

    Character ct1 = Character("codetree", 10);
    Character ct2 = Character(user2_id, user2_level);

    ct1.printInfo();
    ct2.printInfo();
    // Please write your code here.

    return 0;
}