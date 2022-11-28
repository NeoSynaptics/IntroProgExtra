#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

using namespace std;
using namespace this_thread;
using namespace chrono;

void priceCalculation();

void task4(){
    char answer;
    do{
        priceCalculation();
        cout << "One more time? (Y/N): ";
        cin >> answer;
    }

    while (answer == 'Y' || answer == 'y');

}


void priceCalculation(){

    const double RATE = 0.25; //changed from 25 to 25% this is (1.25) + changed int to double

    double price = 0;
    int nrOfArticles = 0;
    double rateSEK= 0;
    double totalPrice= 0;

    cout << "Enter the price excl. the tax rate (swedish moms): ";
    cin >> price;
    cout << "Enter the numbers of articles: ";
    cin >> nrOfArticles;

    totalPrice = nrOfArticles * price *(1 + RATE);
    rateSEK= totalPrice-(price*nrOfArticles); // Need to add nrOfArticles in the subtracting side. For multiple objects
    cout << fixed << showpoint << setprecision(2);
    cout << nrOfArticles << "number of articles cost" << totalPrice
         << " kr." << endl << "of this " << rateSEK<< " kr is the tax rate. "<< endl;


}
