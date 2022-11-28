#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;



int power(int, int i=2);


void task13(){

    for (int i = 0; i < 10; i++){
    cout << power(2, i) << " ";
    cout << endl;
    }
    cout << power(3) << endl; cout << power(4) << endl; cout << power(5) << endl;


}

int power(int const base, int i){

    int newbase=1;
    for (int power=0; power<i; power+=1){
        newbase=base*newbase;

    }
    return newbase;

}
