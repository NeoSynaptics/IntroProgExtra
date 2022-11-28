#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;


void decibelCalculation();

void task6(){
    char answer;
    do {
        decibelCalculation();
        cout << "One more time (Y/N): ";
        cin >> answer;
    }
    while (answer == 'Y' || answer == 'y');

}

void decibelCalculation(){
    cout << "Give me the first power output value:  ";
    double p0=0;
    cin >> p0;

    cout << "Give me the other power output value:   ";
    double p1=0;
    cin >> p1;

    int decibel =10*log10(p1/p0);
    int lvl = decibel/3;

    cout << endl << "Increase in levels is following:    ";
    sleep_for(milliseconds(1000));
    cout << lvl << endl;
    cout << endl << "This is an increase of this much decibel:";
    sleep_for(milliseconds(1000));
    cout << decibel << endl;
}
