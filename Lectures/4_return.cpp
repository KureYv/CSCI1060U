# include <iostream>
using namespace std;

int add(int number1, int number2)
{
    int result = number1 + number2;
    return result;
}

string evenOdd(int number){
    if(number % 2 == 0){
        return "Even";
    }
    else{
        return "Odd";
    }
}

int main()
{
    int value = add(5,6);
    cout << evenOdd(add(5,6));
    return 0;
}