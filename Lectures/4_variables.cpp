# include <iostream>
using namespace std;

int number1 = 5, number2 = 6;

//Local variable, cannot call num1, or num2 in main
int add()
{
    cout << add() << endl;
    cout << number1;
    return 0;

}


int main()
{
    int number1 = 7;
    cout << add() << endl;
    cout << number1;
    return 0;
}