// 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//variant3
#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, s;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c) d = a;
    if (b >= a && b >= c) d = b;
    if (c >= a && c >= b) d = c;

    if (a <= b && a <= c) s = a;
    if (b <= a && b <= c) s = b;
    if (c <= a && c <= b) s = c;

    cout << "Max (d) = " << d << endl;
    cout << "Min (s) = " << s << endl;
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

