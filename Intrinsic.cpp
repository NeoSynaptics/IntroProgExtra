#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;

void totalStockPrice (){

 int totalshares =0;
 cout << " Totalshares: ";
 cin >> totalshares;


 int sharePrice =0;
 cout << " Price per share in sek or USD:  ";
 cin >> sharePrice;

 double totalvalueOfStock = totalshares*sharePrice;
 cout <<"Total value of stock:   " << totalvalueOfStock << endl;


}

int calFreeCash(double cashflow, double percent){
    cout << cashflow;
    cashflow=cashflow*percent;
    cout << cashflow;
    return (cashflow);  // This returns cashflow*percent = next years profit.
}

void intrinsic(){
    cout << "How much cashflow previous year?:  ";
    double cashflow= 0;
    cin >> cashflow;

    cout <<" Growth rate in percentages?:";
    double percent =0;
    cin >> percent;
    percent = ((percent/100)+1);

    cout << "How many years will you retain the stock?:  ";
    int years=0;
    cin >> years;


    for (int i=1; i<=years; i+=1){
        cashflow= calFreeCash(cashflow, percent);
        cout << cashflow << endl;
    }

}
