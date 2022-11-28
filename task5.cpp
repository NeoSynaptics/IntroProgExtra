#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;


void task5(){
    //Can I initiate a variable without "int ...=0"?
    double distanceMeters=0;
    double distanceMiles=0;
    int speed=0;
    cout << "What avarage speed in km/h you having?:  ";
    cin >> speed;
    speed = (speed);
    cout << "How long distance do you have left in swedish miles?:  ";
    cin >> distanceMiles;
    cout << endl;
    distanceMeters = distanceMiles*10;

    float timeLeft=0;
    timeLeft = (distanceMeters/speed); // timeLeft = Meters per Secound
    cout << timeLeft << "  Time left in hours" << endl;

    int hours=0;
    while (timeLeft>1){
        timeLeft=timeLeft-1;
        hours+=1;
    }
    int minutes=timeLeft*60;
    cout << hours << "h" << minutes << "min";

}
