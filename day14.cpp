#include <iostream>
using namespace std;

// uses of structure union

// another type of use structure

typedef struct employee
{
    char name;
    float salary;
    int age;
} em;

int main()
{
    struct employee_details
    {
        char name;
        float salary;
        int age;
    };

    struct employee_details rejwan;
    rejwan.salary = 2200020;
    rejwan.age = 22;
    rejwan.name = 'c';

    cout << rejwan.salary;

    // printing the new type of structure define by em

    em rahi;
    rahi.name = 'r';
    rahi.salary = 20399932;
    rahi.age = 22;

    cout << "\nThis is new type of structure: " << rahi.age;

    // this is the part of union

    union exchange
    {
        char car;
        int rice;
        float money;
    };

    union exchange test_exchange;

    test_exchange.money = 23.44;
    test_exchange.rice = 2;

    cout << "\n this is union data : " << test_exchange.rice;

    //    enum

    enum meal
    {
        breakfast,
        lunch,
        dinner
    };

    meal m1 = dinner;

    cout << "\nPrint enum data: " << m1;

    return 0;
}