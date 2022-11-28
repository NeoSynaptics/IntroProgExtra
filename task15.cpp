#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>



using namespace std;
using namespace this_thread;
using namespace chrono;

void print(double sum, double discountKr);
void load(double*);
double discount(double);

void task15() {

    double sum = 0.0, discountKr = 0.0; char answer;
    do {

        cout << "Discount" << endl;
        cout << "======" << endl << endl;
        load(&sum);
        discountKr = sum * discount(sum) / 100;

        sum = sum - discountKr;
        print(sum, discountKr);
        cout << endl << "One more time (Y/N)? "; cin >> answer;
    } while (toupper(answer) == 'Y');
}

double discount(double sum){
if (sum<=500){sum=0; return sum;}
    else if (sum>500||sum<1000){sum=5; return sum;}
    else if (sum>1000||sum<5000){sum=10; return sum;}
    else if (sum>5000){sum=15; return sum;}
return 0;
}

void load(double* sum){
cout << "Give me the total sum";
cin >> *sum;
}

void print(double sum, double discountKr) {

    cout << setw(50) << sum << endl;
    cout << setw(50) << discountKr;
}
