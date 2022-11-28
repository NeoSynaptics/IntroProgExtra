#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;

void intCalculation (){
    int threeIntNum;
    cout << " Give me a number of 3 digits   ";
    cin >> threeIntNum;
    cout << endl;
    sleep_for(seconds(1));


          int sum =0;
while (threeIntNum>0){
               sum= sum+(threeIntNum%10);
               threeIntNum=threeIntNum/10;

}


      cout << " This is the sum of the numbers before:  " << sum << endl;


}


void task7(){

    char yesOrNo;
do { intCalculation ();
       cout << "do you like to repeat Y/N";
       cin >> yesOrNo;

    }
    while (yesOrNo=='y'||yesOrNo=='Y');


}
