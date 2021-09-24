#include <iostream>

//function overload/method overload
using namespace std;

void add(int number1)
{
    cout << number1+ number1;
}

void add(int number1, int number2)
{
    cout << number1+ number2;
}

void add(int number1, int number2, int number3)
{
    cout << number1+ number2+ number3;
}

int main()
{
    add(5);
    add(5,6);
    add(5,6,7);

    return 0;
}