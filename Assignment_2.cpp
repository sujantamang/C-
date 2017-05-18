// Sujan Tamang.
// Assignment-4, Ex-2.
#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
using namespace std;

class Student{
protected:
    int id;
    string firstName;
    string lastName;
    double mathScore;
    double bioScore;
public:
    //default constructor
    Student()
    {
        id=0;
        firstName="";
        lastName="";
        mathScore=0.0;
        bioScore=0.0;
    }
    Student(string fname,string lname,int idNo,double mscore, double bscore);
    int getId();
    string getFirstName();
    string getLastName();
    virtual double compAveScore();
};
