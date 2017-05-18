// Sujan Tamang.
// Assignment-4, Ex-1.
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Student{
private:
    int id;
    string firstName;
    string lastName;
    double mathScore;
    double bioScore;
public:
    Student(string fname,string lname,int idNo,double mscore, double bscore);
    int getId();
    string getFirstName();
    string getLastName();
    double compAveScore();
};
Student::Student(string fname,string lname,int idNo,double mscore, double bscore)
{
    id=idNo;
    firstName=fname;
    lastName=lname;
    mathScore=mscore;
    bioScore=bscore;
}
int Student:: getId()
{
    return id;
}
