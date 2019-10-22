#include <iostream>
#include "student.h"
#include<string>

using namespace std;

int main()
{
    Students obj[50];
    int x=0;
    int y;
    int count_student =0;

    cout << "Students grade Analysis" << endl;
    do{
    obj[x].inputData();
    obj[x].compute();

    //obj[x].display();
    cout<<"Enter 1 to terminate\n";
    cin>>y;
    x++;
    count_student ++;
    }while(x<50 && y !=1);

    for (int z=0;z< count_student; z++)
    {
        obj[z].display();
    }


    return 0;
}
