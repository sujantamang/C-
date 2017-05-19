// Sujan Tamang.
// Assignment-2
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
string Student::getFirstName()
{
    return firstName;
}
string Student::getLastName()
{
    return lastName;
}
double Student::compAveScore()
{
    return (mathScore+ bioScore)/2.0;
}

//GradStudent inherits from Student class
class GradStudent:public Student
{
private:
    double biometricScore;   //additional data member in child class
public:
    GradStudent():Student()
    {
        biometricScore=0.0;
    }
    GradStudent(string fname,string lname,int idNo, double mscore, double bscore,double biometScore)
            :Student(fname,lname,idNo,mscore,bscore)
    {
        biometricScore=biometScore;
    }
    double compAveScore();

};
double GradStudent::compAveScore()
{
    return (mathScore + bioScore + biometricScore)/3.0;
}
int main()
{
    Student a("Amy", "Miller", 1001, 60, 66);
    Student b("John", "Smith", 1002, 70,77);
    GradStudent c("Diane", "Myers", 2001, 80, 84, 88);
    GradStudent d("Scott", "Baker", 2002, 90, 91, 98);

    //vector of pointers to the Student class
    vector<Student*> things;

    things.push_back(&a);  // push first object, will be position 0
    things.push_back(&b);  // push second object, will be position 1
    things.push_back(&c);  // push third object, will be position 3
    things.push_back(&d);  // push fourth object, will be position 4

    //iterator declaration
    vector<Student*>::iterator iter;


}

