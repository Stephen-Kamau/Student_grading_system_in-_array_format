
//class definition
#include <iostream>
#include <string>
using namespace std;

class Students
{
private:
    int i =8;
    int marks[8];
    string name;
    string regNo;
    float avgScore;
    char grade;
    float sum = 0;

public:
    void inputData();
    void compute();
    void display();
};
