#include <iostream>

using namespace std;

int sum(int a, int b);

int main()
{
    int a = 4;
    int b = 5;

    cout << "the total of a and b is: " << a + b;
    cout << "the total sum is: " << sum(3, 7);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}