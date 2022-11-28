#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;

void task8 (){
   // Teff = 13.126667 + 0.6215 × T - 13.924748 × v0.16 + 0.4875195 × T × v0.16


    double temp= 0;
    double tempEf = 0;
    double windSpeed = 0;
    cout << "Temp:  ";
    cin >>temp;
    cout << "WindSpeed:  ";
    cin >> windSpeed;

    tempEf = 13.126667 + 0.6215 * temp - 13.924748 * pow(windSpeed, 0.16) + 0.4875195 * temp * pow(windSpeed,0.16);
    cout << round(tempEf);

    // pow() menar potens av något.
    // round () kommer att runda av.
}
