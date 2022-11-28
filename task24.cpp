#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>


using namespace std;
using namespace this_thread;
using namespace chrono;

void military();
void task24(){
 military();

}


void military (){


   char input[100];
   char output[100];

   char* input1;
   char* output1;

   cin.getline(input, 100);

   input1= &input[0];
   output1 = &output[0];

//   char previous=input[0];
   while (*input1!='\0'){

       if (*input1!='a' || *input1!='o' || *input1!='u' || *input1!='e'|| *input1!='i' ) {
           if (*(output1-1)!=*input1){
                strcpy(output1,input1);
                output1++;
           }
       }
       input1++;
   }
   char cero= '\0';
   strcpy(output1, &cero);


   cout << output;


}
