#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;

void fahrenheitToCelsius(double, double*);

void task12(){

double celsius, fahrenheit;
cout << " Enter fahrenheit value";
cin >> fahrenheit;
fahrenheitToCelsius(fahrenheit, &celsius);
cout << celsius << endl;

if (celsius>0)
   cout  << "true";
    else cout << "false" << endl;

}

void fahrenheitToCelsius (double fahrenheit, double* celsius){
*celsius=(fahrenheit-32)*5/9;              //subtract 32 and multiply by . 5556
}
