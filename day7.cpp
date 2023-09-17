#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "please enter a name: ";
    cin >> number;
    cout << "your entered number is :" << number<<"\n";

    // reference variable

    int a = 99;
    int &b = a;
    int c = 45.66;
    cout << "the value of a is : "<<b<<"\n";
    // type casting
    cout << "the value of a is : "<<(float)b<<"\n";
    // another way of type casting
    cout << "the value of c is : "<<int(c);

}