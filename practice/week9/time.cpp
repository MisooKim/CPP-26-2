#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        int speed;
        int gear;
        string color;
    public:
        void speedUp(){
            speed++;
        }
        void speedDown(){
            speed--;
            speed--;speed--;speed--;speed--;speed--;
            
        }
    
};

class Time{
    private:
        int hour;
        int minute;

    public: 
        Time(int h, int m);
        void IncHour();
        void Print();

        int Gethour(){return hour;}
        int GetMinute(){return minute;}
        void SetHour(int h) {hour= h;}
        void SetMinute(int m){minute = m;}
    };
Time::Time(int h, int m){
    hour = h;
    minute = m;
}

void Time::IncHour(){
    ++hour;
    if (hour > 24)
        hour = 0;
}
void Time::Print(){
    cout << hour << ":" << minute << endl;
}


int main(){
    Time a{0, 0};
    // a.hour = 10;
    a.SetHour(10);
    a.SetHour(6);
    a.SetMinute(30);
    a.Print();
    return 0;
}