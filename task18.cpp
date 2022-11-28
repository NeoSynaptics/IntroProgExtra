#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>

// Kom ihåg att skickar jag en parameter till en annan funktion måste jag sedan spara den i en annan variabel.
//Kolla på linje 33, Här skickar vi ner en parameter humanTotalScore för att spara parametern i humanTotalScore.
using namespace std;
using namespace this_thread;
using namespace chrono;

void gameOfDice();
int humanTurn(int humanTotalScore);
int computerTurn(int computerTotalScore);



void task18(){
    gameOfDice();
}


void gameOfDice(){

    int humanTotalScore =0;
    int computerTotalScore =0;
    while (humanTotalScore<100 && computerTotalScore<100){
        humanTotalScore= humanTurn(humanTotalScore);
       if (humanTotalScore>=100){
           break;
       }
      computerTotalScore=computerTurn(computerTotalScore);
    }
if (humanTotalScore>=100){cout << "Human won the match";}
else {cout <<"Computer won";}
}

int humanTurn(int humanTotalScore){

    int sum=0;
    char yesOrNo;
    int value;
    while (true){
        value = (rand()%6)+1;
        if (value==1){
            sum=0;
            break;
        }
        sum= value+sum;
        cout << "You have throan number:" << value;
        cout << "Your total sum is: " << sum;
        if (sum>50){sum=100; break;}
        cout << "Do you like to throw again?";
        cin >> yesOrNo;
        if (yesOrNo=='N'|| yesOrNo=='n'){break;}
    }
    humanTotalScore+=sum;
    return humanTotalScore;

}

int computerTurn(int computerTotalScore){
    int sum=0;

    int value;
    while (sum<10){
        value = rand()%6;
        if (value==1){
            sum=0;
            break;
        }
        sum= value+sum;
        cout << "You have throan number:" << value;
        cout << "Your total sum is: " << sum;
    }
    computerTotalScore+=sum;
    return computerTotalScore;

}
