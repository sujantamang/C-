// Sujan Tamang.
// Assignment-3, Ex-2.
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<sstream>
#include<cstring>
#include<iomanip>
using namespace std;

struct Customer{
    int ID;
    string firstName;
    string lastName;
    int numItems;
    float price;
    double totalPrice;
};
void computeTotals(Customer *, int);
int main(){

    int numRecord;
    ifstream fin;
    char recordName[]="retails.txt";
    fin.open(recordName);

    // Check file status
   if (fin.fail())
   {
      cout << "\nUnable to open the input file." << endl;
      exit(1);
   }


    char ch;                    // to find
    numRecord=0;                // the no. of
    while (fin.get(ch))         // records in the
        {                       // retails.txt file
            if (ch == '\n')
            { ++numRecord; }
        }
    numRecord++;
    fin.clear();                // Reset file stream boolean variables to default
    fin.seekg(0);               // Reset file stream pointer


    Customer *c=new Customer[numRecord]; // dynamic creation of
                                         // array of user-defined
                                         // data type: Student


    // Reading DATA from file
    for(int i = 0; fin.good() || !fin.eof(); i++)
    {
        fin >> c[i].ID
            >> c[i].firstName
            >> c[i].lastName
            >> c[i].numItems
            >> c[i].price;
    }
    fin.close();

    computeTotals(c, numRecord);  //calling the computeTotals function

    // Print DATA on the screen

    cout << setw(5)  << "ID"
         << setw(12) << "FIRST NAME"
         << setw(11) << "LAST NAME"
         << setw(15) << "NUM OF ITEMS"
         << setw(7)  << "PRICE"
         << setw(15) << "TOTAL PRICE" << endl;

    for(int i = 0; i < numRecord; i++)
    {

    cout << setw(5)  << c[i].ID << fixed << setprecision(2)
         << setw(12) << c[i].firstName
         << setw(11) << c[i].lastName
         << setw(15) << c[i].numItems
         << setw(7)  << c[i].price
         << setw(15) << c[i].totalPrice << endl;
    }

    delete c; //Releasing the allocated storage back to the system.
    return 0;

}

void computeTotals(Customer* c1, int n)
{
    for(int i = 0; i < n; i++)
    {
        (*(c1+i)).totalPrice = (*(c1+i)).numItems * (*(c1+i)).price;
    }
}
