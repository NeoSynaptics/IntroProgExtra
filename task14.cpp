#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;


void Child(int, int, char);
void task14(){

    int mhight, fhight;
    char genderChild;
    cout << "what is the hight of the father?";
    cin >> mhight;
    cout << "What is the hight of the monther?";
    cin >> fhight;
    cout << "What is the gender of the child (f/m)?";
    cin >> genderChild;

    Child(fhight, mhight, genderChild);


}

void Child(int fhight, int mhight, char genderChild){

    if (genderChild=='f'|| genderChild=='F'){
   int Hfemale_child = ((mhight*12/13) + fhight) / 2;
    cout << Hfemale_child;}

    else if (genderChild=='m'|| genderChild=='M'){
    int Hmale_child = ((fhight*13/12) + mhight) / 2;
    cout << Hmale_child;
    }
}
