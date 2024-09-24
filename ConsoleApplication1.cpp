// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    bool ssn1_real = false;
    bool ssn2_real = false;
    int ssn1 = 0, ssn2=0;
    while (ssn1_real == false) {
        cout << "Enter a Soucial security number: ";
        cin >> ssn1;
        if (ssn1 > 999999999 || ssn1 < 100000000) {
            cout << "That is not a real ssn. Try again";
        }
        else {
            ssn1_real = true;
        }
    }
    while (ssn2_real == false) {
        cout << "Enter a Soucial security number: ";
        cin >> ssn2;
        if (ssn2 > 999999999 || ssn2 < 100000000) {
            cout << "That is not a real ssn. Try again";
        }
        else {
            ssn2_real = true;
        }
    }
    if (ssn1 != ssn2) {
        if (ssn1 > ssn2) {
            cout << ssn1 << " Is the larger ssn number.";
        }
        else {
            cout << ssn2 << " Is the larger ssn number.";
        }
    }
    else {
        cout << "The ssn numbers are the same.";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
