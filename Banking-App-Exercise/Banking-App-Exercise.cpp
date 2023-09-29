// Banking-App-Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Bank {
    float amt, w, d;

public:
    void get();
    void withdraw();
    void deposit();
    void display();
 };

void Bank::get() {
    cout << "Enter the initial amount present in your account: ";
    cin >> amt;
}

void Bank::withdraw() {
    cout << "Enter the amount you want to withdraw: ";
    cin >> w;

    if (w > amt)
        cout << "Your balance is lower than the amount you want to withdraw";

    amt -= w;
}

void Bank::deposit() {
    cout << "\nEnter the amount you want to deposit: ";
    cin >> d;

    amt += d;
}

void Bank::display() {
    cout << "\n\n************************************\n";
    cout << "Final amount present in your account is: " << amt;
    cout << "\n**************************************\n";
}

int main()
{
    Bank b;
    int c;

    cout << "Welcome to NZB\n";
    cout << "**************\n\n";

    b.get();

    cout << "\n1, Withdraw\n2. Deposit\nPlease select your option: ";
    cin c;

    switch (c) {
    case 1:
        b.withdraw();
        break;

    case 1:
        b.deposit();
        break;

    default:
        cout << "Invalid Choice";
    }

    b.display();

    return 0;


}
