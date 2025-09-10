#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int MAX_N = 100;

int n;
string date[100];
string day[100];
string weather[100];

class WeatherInfo {
    public:
        string date;
        string day;
        string weather;
        
        WeatherInfo(string date, string day, string weather) :
            date(move(date)), day(move(day)), weather(move(weather)){}
        WeatherInfo(){}

        void printInfo() {
            cout << date << " " << day << " " << weather;
        }
};


int main() {
    cin >> n;

    WeatherInfo weatherInfo[MAX_N];
    
    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];
        weatherInfo[i] = WeatherInfo(date[i], day[i], weather[i]);
    }

    sort(weatherInfo, weatherInfo+n,
        [](const WeatherInfo& a, const WeatherInfo& b) -> bool{
            return a.date < b.date;
        });

    for(int i = 0 ; i < n ; i++) {
        if(weatherInfo[i].weather == "Rain") {
            weatherInfo[i].printInfo();
            break;
        }
    }

    // Please write your code here.

    return 0;
}