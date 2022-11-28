#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>


using namespace std;
using namespace this_thread;
using namespace chrono;

void operation(char*);
void inputValues(int*, int*, int*, int*);

int calMulti(int,int,int,int);
int calDivision(int,int,int,int);
int calMinus(int,int,int,int);
int calPlus(int,int,int,int);

void task16(){
    char op;
    int num=0;
    operation(&op);

    int t1, n1, t2, n2;
    inputValues(&t1, &n1, &t2, &n2);  // Byt n1 till n2 för att få en intressant felmeddelande

    if (op=='*'){
     num=calMulti(t1, n1, t2, n2);
    }
    else if (op=='/'){
     num=calDivision(t1, n1, t2, n2);
    }
     else if (op=='+'){
     num=calPlus (t1, n1, t2, n2);
    }
    else if (op=='-'){
     num=calMinus(t1, n1, t2, n2);
    }
    cout << num;
}
void operation(char* op){
    cout << "Will you (+,-,* or /) the fraction?)";
    cin >> *op;
}

void inputValues (int* t1, int*n1, int*t2, int* n2){
    cout << "Give me the first 2 input values";
   cin >>*t1 >> *n1;
   cout << "Give me the secound 2 input values";
   cin >> *t2 >> *n2;

}





int calPlus (int t1, int n1, int t2, int n2){

    float num;
      num=((t1*n2)+(t2*n1))/(n1*n2);
      return num;
}
int calMinus(int t1, int n1, int t2, int n2){
    float num;
      num=((t1*n2)+(t2*n1))/(n1*n2);
      return num;
}
int calDivision(int t1, int n1, int t2, int n2){
    float num;
      num=((t1*n2)+(t2*n1))/(n1*n2);
      return num;
}
int calMulti(int t1, int n1, int t2, int n2){
    float num;
      num=((t1*n2)+(t2*n1))/(n1*n2);
      return num;
}
