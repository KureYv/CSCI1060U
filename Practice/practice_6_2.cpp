#include <iostream>
using namespace std;

int divisorcount(int number, int divisor){
    int divisor2 = divisor;
    int count = 0;
    if(number%divisor == 0)
    {
        for(number;number%divisor == 0;number = number/divisor){
            count+=1;
        }        
    }

    return count;
}


int main(){
    int number1, number2;
    cout << "Enter a number: ";
    cin >> number1;
    cout << "Enter a divisor: ";
    cin >> number2;
    cout << number1 << " can be completely divided by " << number2 << ", " << divisorcount(number1, number2) << " times";
    return 0;
}