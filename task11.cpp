#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;

                                    // Cubic problem
double cubeVolume(double side){
    double volume = side * side *side;
    return volume;

}


void printVolume(double volume){
    cout << volume << endl;
}

void getSide(double side=0, double volume=0){

    cout << " Give me input:";
    cin >> side;
    volume=cubeVolume(side);
    printVolume(volume);
}

void task11(){
    char answer;
    do {
       getSide();
       cout << "One more time? (Y/N): ";
       cin >> answer;
    }
   while (answer == 'Y' || answer == 'y');


}
