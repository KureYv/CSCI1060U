#include <iostream>
using namespace std;

string posorneg(int number)
{
    if(number >= 0)
    {
        return "Positive";
    }
    else
    {
        return "Negative";
    }
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "The number you entered is " << posorneg(number);
}