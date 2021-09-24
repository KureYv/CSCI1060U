#include <iostream>
using namespace std;

int largerNumber(int number1, int number2)
{
    if(number1 > number2)
    {
        return 1;
    }
    else
    {
        return 2;
    }

}

void driver()
{
    int number1,number2;
    cout << "Enter a number (-1 to quit): ";
    cin >> number1;
    int largest = number1;
    while(number1 != -1)
    {
        int x = largerNumber(number1,largest);
        switch(x)
        {
        case 1:
            largest = number1; 
        }
        cout << "Enter a number (-1 to quit): ";
        cin >> number1;

    }
    cout << "Largest number is " << largest;
}

int main()
{
    driver();
}