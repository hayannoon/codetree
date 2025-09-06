#include <iostream>
#include <algorithm>

#define MAX_N 5

using namespace std;

char codename[MAX_N];
int score[MAX_N];

class code {
    public:
        char codename;
        int score;
    code(char codename, int score) :
        codename(move(codename)), score(move(score)){}
    code() {}  
};

int main() {
    code codeList[5];
    for (int i = 0; i < MAX_N; i++) {
        cin >> codename[i] >> score[i];
        codeList[i].codename = codename[i];
        codeList[i].score = score[i];
    }

    int minValue = *min_element(score, score + MAX_N);

    for(int i = 0 ; i < MAX_N ; i++) {
        if(codeList[i].score == minValue) {
            cout << codeList[i].codename << " " << codeList[i].score;
            return 0;
        }
    }



    // Please write your code here.

    return 0;
}
