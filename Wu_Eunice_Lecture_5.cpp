// 


#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main ()

{

double bal;
double trans;

cout << "What is your balance and how many transitions did you make today? (balance transactions) ";
cin >> bal >> trans;

string type;
double amt;
double credtot;
double debtot;

while (trans>0) {
    cout << "Is the transcation debit or credit and how much (debit/credit amount)? ";
    cin >> type >> amt;

    if (type == "credit")
    {bal = bal + amt;
    credtot= credtot + amt;}
    else
    {bal = bal - amt;
    debtot= debtot + amt;}

    trans=trans-1;
}

cout << "Your ending balance is: $" << bal << fixed << setprecision (2) << "\n";
cout << "Debit total: -$" << debtot << " Credit total: $" << credtot;


    return 0;
}