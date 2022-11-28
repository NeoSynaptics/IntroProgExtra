#include <iostream> //innehåller cout
#include <thread>   //innehåller sleep_for
#include <chrono>   //innehåller milliseconds
#include <cmath>    //innehåller mattefunktioner
#include <iomanip>


using namespace std;
using namespace this_thread;
using namespace chrono;

void student2 ();
void student3 ();

void task19(){


   // student2();
    student3();
}

/*Write a program to store the roll no. (starting from 1),
name and age of 5 students and then print the details of the student with roll no. 2.*/

struct attendinglist {
    int rollnr;
    string name;
    int age;
    char marks;
};

void student2(){
   struct attendinglist p1;
   struct attendinglist p2;
   struct attendinglist p3;
   struct attendinglist p4;
   struct attendinglist p5;

    p1.rollnr=1;
    p1.name="Daniel";
    p1.age=80;

    p2.rollnr=2;
    p2.name="Johnny Depp";
    p2.age=50;

    p3.rollnr=3;
    p3.name="Adam";
    p3.age=20;

    p4.rollnr=4;
    p4.name="Amber Heard";
    p4.age=90;

    p5.rollnr=5;
    p5.name="Eva";
    p5.age=40;

   cout << "Rollnr: " << p2.rollnr << " Name: " << p2.name << " Age: " << p2.age;


}


struct studentattendinglist{
        int rollname;
        string name;
        int age;
        char marks;
};

void print(struct studentattendinglist);
void printEvenNum (struct studentattendinglist);

void student3(){
    struct studentattendinglist person[1];


    for (int i=0; i<1; i+=1){
        cout << "rollname, name, age, marks";
    cin >> person[i].rollname;
    cin >> person[i].name;
    cin >> person[i].age;
    cin >> person[i].marks;
}
    for (int i=0; i<1; i+=1){
        print (person[i]);
           printEvenNum(person[i]);

    }
}

void print (struct studentattendinglist p) {
    if (p.age==14){
        cout << p.rollname << p.name << p.age << p.marks;

    }
}
void printEvenNum (struct studentattendinglist p){
     if (p.rollname%2==0){
    cout << p.name;
     }
}

