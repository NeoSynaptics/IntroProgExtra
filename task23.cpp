#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>


using namespace std;
using namespace this_thread;
using namespace chrono;

void trim();

void task23(){
        trim();

}

void trim(){

    char input[100];
    char output[100];

    cin.getline(input,100);

    char* input1;
    char* output1;

    input1= &input[0];
    output1 = &output[0];

    while (*input!='\0'){
        if (*input1!=' '){
            strcpy(output1,input1);
            output1++;
        }
        input1++;

    }
    char cero= '\0';
    strcpy(output1, &cero);

    cout << output << '\n';



}
