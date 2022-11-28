#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;

void task3(){
int hoursPerWeek = 35;
double hourlyWage = 83;

double weeklyWage;  // We need to initialize the value weeklyWage before multiplicating.
weeklyWage = hoursPerWeek*hourlyWage;

cout << fixed
     << setprecision(2)
     << showpoint;
cout << "Given hour/wage:" << hourlyWage << " kr" << endl;
cout << " and the number of hours per week" << hoursPerWeek << endl;
cout << "the weeklyWage will be: " << weeklyWage << " kr" << endl;

cout << "\n Press return";
cin.get () ; // Waiting for return

}
