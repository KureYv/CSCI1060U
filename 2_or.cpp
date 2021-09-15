#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    
    if(number >= 1 && number <=10)
    {
        cout << "Between 1 and 10";
    }
    else
    {
        cout << "Not between 1 and 10";
    }
    return 0;
}
