// Sujan Tamang.
// Assignment-3, Ex-1.
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

void removeChar(char*, char);
int main(){

    const int MAX = 50;
    char c;
    char testString[MAX]="";

    cout << "Enter a String:";
    cin.getline(testString, MAX, '\n');

    cout << "Enter a character:";
    cin  >> c;
    cout << "Your original string is:"
         << testString << endl;

    removeChar(testString, c);

    cout << "After removing the occurance of characters:"
         << testString << endl;

    return 0;
}

void removeChar(char* s1, char target){
   char *s2= s1;

   while(*s1!='\0'){      //looping until it reaches the null character

    if(*s2==target)       // if we see the target character then remove its occurance.
        { s2++; }
    else
        { *s1++=*s2++; }
   }
}

