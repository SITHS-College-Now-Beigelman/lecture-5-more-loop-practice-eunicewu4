// Eunice Wu
// October 8, 2024
// Lecture 5

#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main ()
{

double bal;
double trans;
string type;
double amt;
double credtot;
double debtot;

cout << "What is your balance and how many transitions did you make today? (balance transactions) "; // ask and stores 
cin >> bal >> trans;

//loop that sums up all the transactions to find the total balance of the account, debit, and credit
while (trans>0) {
    cout << "Is the transcation debit or credit and how much (debit/credit amount)? ";
    cin >> type >> amt;

    if (type == "credit")
        {bal = bal + amt;
        credtot= credtot + amt;} // sums up the credit and debit total amount
    else
        {bal = bal - amt;
        debtot= debtot + amt;}
    
    trans=trans-1;
}

cout << "Your ending balance is: $" << bal << fixed << setprecision (2) << "\n"; // prints ending balance after asking about all the transaction. added $ notation and set to 2 decimal places
cout << "Debit total: -$" << debtot << " Credit total: $" << credtot; // prints credit and debit total


    return 0;
}
/*
What is your balance and how many transitions did you make today? (balance transactions) 30 3
Is the transcation debit or credit and how much (debit/credit amount)? credit 100
Is the transcation debit or credit and how much (debit/credit amount)? debit 1
Is the transcation debit or credit and how much (debit/credit amount)? credit 4
Your ending balance is: $133
Debit total: -$1.00 Credit total: $104.00
*/