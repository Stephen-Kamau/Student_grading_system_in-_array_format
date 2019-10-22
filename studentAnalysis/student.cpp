#include <iostream>
#include "student.h"
using namespace std;

//class implimentation
#include <string>
void Students::inputData()
{
    cout<<"Please enter Your Names :\n";
    cin>>name;

    cout<<"Please enter your Regestration Number :\n";
    cin>>regNo;

    cout<<"Please enter the Your Scores for the 8 subjects\n";

    for (int i=0; i<8; i++)
    {
        do{
        cout<<"Subject "<<i+1<<" Scores is : ";
        cin>>marks[i];
        if(marks[i]<=100)
        {
        sum +=marks[i];
        }
        }while(marks[i]>100 || marks[i]<0);


    }
}


void Students::compute()
{
    avgScore = sum /8;
     if (avgScore > 70 && avgScore <=100)
    {
        grade='A';
    }
    else if (avgScore >= 60&&avgScore<70)
    {
        grade='B';
    }
    else if (avgScore >= 50&&avgScore<60)
    {
        grade='C';
    }
    else if (avgScore >= 40&&avgScore<50)
    {
        grade='D';
    }
    else
    {
        grade='E';
    }


}


void Students::display()
{
    cout<<"The Following Are your Results ::\n";
    cout<<"Name : "<<name<<"\n";
    cout<<"RegNo : "<<regNo<<"\n";
    cout<<"Average Scores : "<<avgScore<<"\n";
    cout<<"Grade : "<<grade<<"\n";
}
