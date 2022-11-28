#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>


using namespace std;
using namespace this_thread;
using namespace chrono;

bool leapYear(int);
int daysInMonth(int, int);
int tomorrow (int);


void task17(){
    int year;
    int month;

  /*  cout << "Enter a year, month and day as YYYYMMDD:  ";
    cin >> year >> month;

    if (leapYear(year)){
        cout << "This is a leapYear"<< endl;
    }
    else{
        cout << "This is not a leapYear"<< endl;
    }
    int days;
    days=daysInMonth(year, month);
    cout << "Number of days in this month is:    " << days <<month<< year<< endl<< endl;

    */
    int date;
    cout << "Input the date:  ";
    cin >> date;
    int tomorrowday=tomorrow(date);
    cout << "tomorrowday= " << tomorrowday;

}


bool leapYear(int year){

    if(year%4==0){return true;}
    else if (year%100==0 && year%400==0){ return true;}
    else return false;
}

int daysInMonth(int year, int month){
    if (month==2){
        if (leapYear(year)){return 29;}
        else return 28;
    }
    if (month%2==0)  {return 30;}
    else return 31;
}

int tomorrow(int date) {
int day, month, year;

day=date%100;

date=date/100;
month=date%100;
date=date/100;
year=date;
  int totaldays=daysInMonth(year, month);
if (day<totaldays){
    day+=1;
}
else {
    day=1;
    if (month==12){
        month=1;
        year+=1;
    }
    else {
        month+=1;
    }
}
int tomorrowdate=((year*100)+month)*100+day;
return tomorrowdate;
}


