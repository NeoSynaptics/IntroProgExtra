#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;

void task9(){


    double amount = 0;
    //Ask for amount
    double valueChange = 0;
    double percentages = 0;

    cout << "what is the amount you started investing?: ";
    cin >> amount;

    for (int years=1; years<=4; years+=1){
        cout << "What is value change?"<< endl;
        cin >> percentages;
        valueChange=amount*(1+percentages/100);
        amount = valueChange;
    }
    cout << valueChange;
}


// float har 1 decimal och är mindre bytes
// double har 2 decimal och har fler bytes
