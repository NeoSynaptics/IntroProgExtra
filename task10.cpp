#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;

void loadingInput();

void task10(){
    char answer;
    do { loadingInput();
        cout << "One more time (Y/N)?:  ";
        cin >> answer; }
    while ( answer=='y' || answer=='Y');

}
double calValue(double moneyStart, double years, double const rate){
    double totalValue=(moneyStart*pow(1+rate/100,years));
    return totalValue;
}

void loadingInput(){

   cout << " How much money did you put in the account?:  ";
   double moneyStart = 0;
   cin >> moneyStart;

   double const rate=3;

   cout << "How many years will you keep the money there?:    ";
   double years=0;
   cin >> years;

   double totalValue;
   totalValue=calValue(moneyStart, years, rate);

   cout << "total value of the money is:   " << totalValue << endl;
}
