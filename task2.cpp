#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;

void task2(){
    char yesOrNo;
    do {
        cout << "type in 4 numbers and I will do magic:";
        int one, two, three, four;
        cin >> one >> two >> three >> four;
        double sum;
        double avarage;
        double product;
        sum=one+two+three+four;
        avarage = sum/4;
        product = one*two*three*four;
        cout << "This is the sum of the 4 numbers:" << sum << endl;
        cout << "This is the avarage of the 4 numbers:" << avarage << endl;
        cout << "This is the product of the 4 numbers:" << product << endl;
        cout << " Would you like to run the code again?";
        cout << " Y for Yes and N for No";
        cin >> yesOrNo;
    }
    while (yesOrNo=='y'||yesOrNo=='Y');

}
