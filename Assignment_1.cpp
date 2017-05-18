// Sujan Tamang.
// Assignment-1
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
int main()
{
    Student s[3];
    Student a("Amy", "Miller", 1001, 60, 66);
    Student b("John", "Smith", 1002, 70,77);
    Student c("Eric", "Taylor", 1003, 80, 88);
    s[0]=a;
    s[1]=b;
    s[2]=c;
    for(int i=0;i<3;i++)
    {
        cout << setw(10) << left << s[i].getFirstName()
             << setw(10) << left <<s[i].getLastName()
             << setw(7)  << s[i].getId()
             << setw(7)  << fixed
             << setprecision(1)<<s[i].compAveScore()<<endl;
    }

    return 0;
}
