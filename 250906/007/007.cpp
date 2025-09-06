#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
int meeting_time;

class SecretMeeting {
    public:
        string secret_code;
        char meeting_point;
        int meeting_time;
    
        SecretMeeting(string secret_code, char meeting_point, int meeting_time) {
            this->secret_code = secret_code;
            this->meeting_point = meeting_point;
            this->meeting_time = meeting_time;
    }
    void printInfo() {
        cout << "secret code : " << this->secret_code << "\n";
        cout << "meeting point : " << this->meeting_point << "\n";
        cout << "time : " << this->meeting_time << "\n";
    }
};

int main() {
    cin >> secret_code >> meeting_point >> meeting_time;

    SecretMeeting sm = SecretMeeting(secret_code, meeting_point, meeting_time);

    sm.printInfo();
    // Please write your code here.

    return 0;
}